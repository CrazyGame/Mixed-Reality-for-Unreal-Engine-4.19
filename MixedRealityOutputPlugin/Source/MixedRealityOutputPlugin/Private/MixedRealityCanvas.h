#pragma once

#include "CoreMinimal.h"
#include "Engine/CanvasRenderTarget2D.h"
#include "MixedRealityCanvas.generated.h"

UCLASS()
class MIXEDREALITYOUTPUTPLUGIN_API UMixedRealityCanvas : public UCanvasRenderTarget2D
{
  GENERATED_BODY()

public:
  UMixedRealityCanvas();

	UFUNCTION(BlueprintCallable, Category="Canvas Render Target 2D")
  virtual void FastUpdateResource();

  UPROPERTY(EditInstanceOnly, BlueprintReadWrite)
  UTextureRenderTarget2D* BackgroundTexture;

  UPROPERTY(EditInstanceOnly, BlueprintReadWrite)
  UTextureRenderTarget2D* ForegroundTexture;

  UPROPERTY(EditInstanceOnly, BlueprintReadWrite)
  UTextureRenderTarget2D* PostprocessedForegroundTexture;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  UMaterialInstanceDynamic* BG_Tonemapper;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  UMaterialInstanceDynamic* FG_Tonemapper;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  UMaterialInstanceDynamic* FG_CombineAlpha;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  bool bPostprocessBackground;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  bool bPostprocessForeground;

  void UpdateMaterialsTextures();

protected:
  UFUNCTION()
  void OnRender(UCanvas* Canvas, int32 Width, int32 Height);
};
