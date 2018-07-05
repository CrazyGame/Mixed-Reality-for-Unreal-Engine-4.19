#include "pch.h"
#include "MixedRealityCanvas.h"
#include <Engine/Canvas.h>
#include <Materials/MaterialInstanceDynamic.h>
#include <UObject/ConstructorHelpers.h>

UMixedRealityCanvas::UMixedRealityCanvas()
  : Super()
  , BackgroundTexture(nullptr)
  , ForegroundTexture(nullptr)
  , BG_Tonemapper(nullptr)
{
  OnCanvasRenderTargetUpdate.AddUniqueDynamic(this, &UMixedRealityCanvas::OnRender);
  bGPUSharedFlag = true;

  // Create a material to draw alpha with
  static ConstructorHelpers::FObjectFinder<UMaterial> Find_Tonemapper(
    TEXT("/MixedRealityOutputPlugin/CustomTonemapper")
  );
  if (Find_Tonemapper.Succeeded())
  {
    BG_Tonemapper = UMaterialInstanceDynamic::Create(
      Find_Tonemapper.Object,
      this,
      TEXT("BG_Tonemapper")
    );
    FG_Tonemapper = UMaterialInstanceDynamic::Create(
      Find_Tonemapper.Object,
      this,
      TEXT("FG_Tonemapper")
    );
  }

  static ConstructorHelpers::FObjectFinder<UMaterial> Find_CombineAlpha(
    TEXT("/MixedRealityOutputPlugin/CombineAlpha")
  );
  if (Find_CombineAlpha.Succeeded())
  {
    FG_CombineAlpha = UMaterialInstanceDynamic::Create(
      Find_CombineAlpha.Object,
      this,
      TEXT("FG_CombineAlpha")
    );
  }
}

void UMixedRealityCanvas::FastUpdateResource()
{
  UCanvasRenderTarget2D::FastUpdateResource();
}

void UMixedRealityCanvas::UpdateMaterialsTextures()
{
  if (BG_Tonemapper)
    BG_Tonemapper->SetTextureParameterValue(TEXT("Input"), BackgroundTexture);

  if (FG_CombineAlpha)
  {
    FG_CombineAlpha->SetTextureParameterValue(TEXT("InputAlpha"), ForegroundTexture);
    FG_CombineAlpha->SetTextureParameterValue(TEXT("Input"), PostprocessedForegroundTexture);
  }

  if (FG_Tonemapper)
    FG_Tonemapper->SetTextureParameterValue(TEXT("Input"), ForegroundTexture);
}

void UMixedRealityCanvas::OnRender(UCanvas* Canvas, int32 Width, int32 Height)
{
  FVector2D quad_size{ static_cast<float>(Width), Height * 0.5f };

  if (bPostprocessBackground)
  {
    Canvas->K2_DrawTexture(
      BackgroundTexture,
      FVector2D{ 0.0f, quad_size.Y },
      quad_size,
      FVector2D::ZeroVector
    );
  }
  else
  {
    Canvas->K2_DrawMaterial(
      BG_Tonemapper,
      FVector2D{ 0.0f, quad_size.Y },
      quad_size,
      FVector2D::ZeroVector
    );
  }

  Canvas->K2_DrawMaterial(
    bPostprocessForeground ? FG_CombineAlpha : FG_Tonemapper,
    FVector2D::ZeroVector,
    quad_size,
    FVector2D::ZeroVector
  );
}
