#include "pch.h"
#include "MixedRealityRenderer.h"
#include <Runtime/Launch/Resources/Version.h>
#include <Engine/Engine.h>
#include <Kismet/KismetRenderingLibrary.h>
#include <Kismet/KismetMathLibrary.h>
#include <InputCoreTypes.h>
#include <HeadMountedDisplay.h>
#include <Engine/SceneCapture2D.h>
#include <cassert>
#include "IXRTrackingSystem.h"

#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 17
#include <ISpectatorScreenController.h>
#endif





UMixedRealityRenderer::UMixedRealityRenderer()  
{
	ControllerType = EControllerHand::AnyHand;
	CapturePostprocessType = ECapturePostprocessType::NoPostprocess;
    PrimaryComponentTick.bCanEverTick = true;
}


void UMixedRealityRenderer::InitData(AExternalCameraConfig* newExternalCameraConfig)
{
	ExternalCameraConfig = newExternalCameraConfig;

	if (!IsHMDDeviceAviable())
		return;

	FAttachmentTransformRules rules(EAttachmentRule::SnapToTarget, false);

	// Spawn controller used as an external camera
	ExternalCamera = NewObject<UMotionControllerComponent>(this);
	ExternalCamera->RegisterComponentWithWorld(GetWorld());
	ExternalCamera->AttachToComponent(this, rules);
	// TODO: I don't like this part, but it seems to be the only way
	// to make it work reliably.
	ExternalCamera->PlayerIndex = 1;
	ExternalCamera->Hand_DEPRECATED = ControllerType;
	ExternalCamera->SetVisibility(true);

	// Spawn scene capture components
	BG_Capture = NewObject<USceneCaptureComponent2D>(this);
	BG_Capture->RegisterComponentWithWorld(GetWorld());
	BG_Capture->AttachToComponent(this, rules);
	BG_Capture->FOVAngle = ExternalCameraConfig->FOV;

	FG_Capture = NewObject<USceneCaptureComponent2D>(this);
	FG_Capture->RegisterComponentWithWorld(GetWorld());
	FG_Capture->AttachToComponent(this, rules);
	FG_Capture->FOVAngle = ExternalCameraConfig->FOV;
	FG_Capture->bEnableClipPlane = true;

	switch (CapturePostprocessType)
	{
	case ECapturePostprocessType::NoPostprocess:
		BG_Capture->CaptureSource = ESceneCaptureSource::SCS_SceneColorHDR;
		FG_Capture->CaptureSource = ESceneCaptureSource::SCS_SceneColorHDR;
		Post_FG_Capture = nullptr;
		break;
	case ECapturePostprocessType::BackgroundPostprocess:
		BG_Capture->CaptureSource = ESceneCaptureSource::SCS_FinalColorLDR;
		FG_Capture->CaptureSource = ESceneCaptureSource::SCS_SceneColorHDR;
		Post_FG_Capture = nullptr;
		break;
	case ECapturePostprocessType::FullPostprocess:
		BG_Capture->CaptureSource = ESceneCaptureSource::SCS_FinalColorLDR;
		FG_Capture->CaptureSource = ESceneCaptureSource::SCS_SceneColorHDR;
		Post_FG_Capture = NewObject<USceneCaptureComponent2D>(this);
		Post_FG_Capture->RegisterComponentWithWorld(GetWorld());
		Post_FG_Capture->AttachToComponent(this, rules);
		Post_FG_Capture->FOVAngle = ExternalCameraConfig->FOV;
		Post_FG_Capture->bEnableClipPlane = true;
		Post_FG_Capture->CaptureSource = ESceneCaptureSource::SCS_FinalColorLDR;
		break;
	}

#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 17
	// Initialize spectator screen
	auto spectatorScreen = HMDDevice->GetSpectatorScreenController();
	spectatorScreen->SetSpectatorScreenMode(
		ESpectatorScreenMode::TexturePlusEye
	);
	FSpectatorScreenModeTexturePlusEyeLayout layout;
	layout.EyeRectMin = { 0.5f, 0.5f };
	layout.EyeRectMax = { 1.0f, 1.0f };
	layout.TextureRectMin = { 0.0f, 0.0f };
	layout.TextureRectMax = { 0.5f, 1.0f };
	layout.bDrawEyeFirst = false;
	layout.bClearBlack = false;
	spectatorScreen->SetSpectatorScreenModeTexturePlusEyeLayout(layout);

	// Initialize scene capture parameters
	GEngine->GameViewport->Viewport->ViewportResizedEvent.AddUObject(
		this,
		&UMixedRealityRenderer::OnViewportSizeChanged
	);
	//auto size = GEngine->GameViewport->Viewport->GetSizeXY();
	//initializeRenderTargets(size.X, size.Y);
#endif
}


void UMixedRealityRenderer::BeginPlay()
{
	Super::BeginPlay();
}

void UMixedRealityRenderer::OnViewportSizeChanged(FViewport* viewport, uint32)
{
  auto size = viewport->GetSizeXY();
  if (!_shtex.active())
    initializeRenderTargets(size.X / 2, size.Y);
}

void UMixedRealityRenderer::initializeRenderTargets(int width, int height)
{
  // Create canvas to draw output to
  auto canvas = UCanvasRenderTarget2D::CreateCanvasRenderTarget2D(
    GetWorld(),
    UMixedRealityCanvas::StaticClass(),
    width,
    height
  );
  MixedRealityCanvas = static_cast<UMixedRealityCanvas*>(canvas);

  // Create background texture
  auto bgRenderTarget = UKismetRenderingLibrary::CreateRenderTarget2D(
    GetWorld(),
    width,
    height / 2
  );
  BG_Capture->TextureTarget = bgRenderTarget;
  MixedRealityCanvas->BackgroundTexture = bgRenderTarget;

  // Create foreground texture
  auto fgRenderTarget = UKismetRenderingLibrary::CreateRenderTarget2D(
    GetWorld(),
    width,
    height / 2
  );
  FG_Capture->TextureTarget = fgRenderTarget;
  MixedRealityCanvas->ForegroundTexture = fgRenderTarget;

  switch (CapturePostprocessType)
  {
  case ECapturePostprocessType::NoPostprocess:
    MixedRealityCanvas->bPostprocessBackground = false;
    MixedRealityCanvas->bPostprocessForeground = false;
    break;
  case ECapturePostprocessType::BackgroundPostprocess:
    bgRenderTarget->TargetGamma = 2.2;

    MixedRealityCanvas->bPostprocessBackground = true;
    MixedRealityCanvas->bPostprocessForeground = false;
    break;
  case ECapturePostprocessType::FullPostprocess:
    bgRenderTarget->TargetGamma = 2.2;

    if (Post_FG_Capture)
    {
      auto postFgRenderTarget = UKismetRenderingLibrary::CreateRenderTarget2D(
        GetWorld(),
        width,
        height / 2
      );
      Post_FG_Capture->TextureTarget = postFgRenderTarget;
      MixedRealityCanvas->PostprocessedForegroundTexture = postFgRenderTarget;
      postFgRenderTarget->TargetGamma = 2.2;
    }

    MixedRealityCanvas->bPostprocessBackground = true;
    MixedRealityCanvas->bPostprocessForeground = true;
    break;
  }

  MixedRealityCanvas->UpdateMaterialsTextures();
}

bool UMixedRealityRenderer::IsHMDDeviceAviable()
{
	HMDDevice = GEngine->XRSystem->GetHMDDevice();
	bool avalible = (ExternalCameraConfig != nullptr) && (HMDDevice != nullptr) && (HMDDevice->IsHMDConnected());
	return avalible;
}

void UMixedRealityRenderer::TickComponent(
  float DeltaTime,
  ELevelTick TickType,
  FActorComponentTickFunction* ThisTickFunction
)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

  if (!IsHMDDeviceAviable())
    return;

  static int shtex_needs_update = 0;
  if (!_shtex_activated)
  {
    if (_shtex.active())
    {
      _shtex_activated = true;
      initializeRenderTargets(_shtex.width(), _shtex.height());
      // share the texture only after several frames,
      // when the underlying resource has been actually created
      shtex_needs_update = 4;
#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 17
      HMDDevice->GetSpectatorScreenController()->SetSpectatorScreenMode(
        ESpectatorScreenMode::Distorted
      );
#endif
    }
  }
  else
  {
    if (!_shtex.active())
    {
      _shtex_activated = false;
#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 17
      HMDDevice->GetSpectatorScreenController()->SetSpectatorScreenMode(
        ESpectatorScreenMode::TexturePlusEye
      );
#endif
    }
  }

  if (MixedRealityCanvas == nullptr)
    return;

  auto location =
    ExternalCameraConfig->LocationOffset + ExternalCamera->RelativeLocation;
  auto rotation = UKismetMathLibrary::ComposeRotators(
    ExternalCameraConfig->RotationOffset,
    ExternalCamera->RelativeRotation
  );
  auto normalRotator = UKismetMathLibrary::ComposeRotators(
    ExternalCameraConfig->RotationOffset,
    ExternalCamera->GetComponentRotation()
  );
  auto normal = (normalRotator.Vector() * -1).GetSafeNormal();

  BG_Capture->SetRelativeLocation(location);
  BG_Capture->SetRelativeRotation(rotation);

  FG_Capture->SetRelativeLocation(location);
  FG_Capture->SetRelativeRotation(rotation);
  FG_Capture->ClipPlaneNormal = normal;
  if (HMD)
    FG_Capture->ClipPlaneBase = HMD->GetComponentLocation();

  if (Post_FG_Capture)
  {
    Post_FG_Capture->SetRelativeLocation(location);
    Post_FG_Capture->SetRelativeRotation(rotation);
    Post_FG_Capture->ClipPlaneNormal = normal;
    Post_FG_Capture->ClipPlaneBase = FG_Capture->ClipPlaneBase;
  }

  MixedRealityCanvas->FastUpdateResource();
#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 17
  if (!_shtex_activated)
  {
    HMDDevice->GetSpectatorScreenController()->SetSpectatorScreenTexture(
      MixedRealityCanvas
    );
  }
#endif

  if (shtex_needs_update > 0)
    --shtex_needs_update;
  if (shtex_needs_update == 1)
    _shtex.set_texture(MixedRealityCanvas);
}
