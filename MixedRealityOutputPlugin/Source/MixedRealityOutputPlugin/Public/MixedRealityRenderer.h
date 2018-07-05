#pragma once

#include <CoreMinimal.h>
#include <Components/SceneComponent.h>
#include <MotionControllerComponent.h>
#include <Engine/TextureRenderTarget2D.h>
#include <Components/SceneCaptureComponent2D.h>
#include <MixedRealityCanvas.h>
#include "SharedTextureProtocol.h"
#include "MixedRealityRenderer.generated.h"


class AExternalCameraConfig;


UENUM()
enum class ECapturePostprocessType : uint8
{
  NoPostprocess,
  BackgroundPostprocess,
  FullPostprocess,
};

UCLASS(ClassGroup=MixedReality, BlueprintType, meta=(BlueprintSpawnableComponent))
class MIXEDREALITYOUTPUTPLUGIN_API UMixedRealityRenderer : public USceneComponent
{
	GENERATED_BODY()

public:	
	UMixedRealityRenderer();

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MixedReality")
  USceneComponent* HMD;

  UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "MixedReality")
  EControllerHand ControllerType;

  UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "MixedReality")
  ECapturePostprocessType CapturePostprocessType;

protected:
	void BeginPlay() override;

  UPROPERTY()
  UMotionControllerComponent* ExternalCamera;

  UPROPERTY()
  AExternalCameraConfig* ExternalCameraConfig;

  // Background Scene Capture
  UPROPERTY()
  USceneCaptureComponent2D* BG_Capture;
 
  // Foreground Scene Capture
  UPROPERTY()
  USceneCaptureComponent2D* FG_Capture;

  // Postprocessed Foreground Scene Capture
  UPROPERTY()
  USceneCaptureComponent2D* Post_FG_Capture;

  UPROPERTY()
  UMixedRealityCanvas* MixedRealityCanvas;

  SharedTextureProtocol _shtex;
  bool _shtex_activated = false;

  void OnViewportSizeChanged(FViewport* viewport, uint32);
  void initializeRenderTargets(int width, int height);


  bool IsHMDDeviceAviable();

  IHeadMountedDisplay* HMDDevice;

public:	
	void TickComponent(
    float DeltaTime,
    ELevelTick TickType,
    FActorComponentTickFunction* ThisTickFunction
  ) override;


	void InitData(AExternalCameraConfig* newExternalCameraConfig);
};
