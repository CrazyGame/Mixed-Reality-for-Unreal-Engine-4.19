#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MixedRealityRenderer.h"
#include "ExternalCameraConfig.generated.h"

UCLASS()
class AExternalCameraConfig : public AActor
{
	GENERATED_BODY()
	
public:	

	AExternalCameraConfig();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MixReality")
		USceneComponent* RenderRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MixReality")
		UMixedRealityRenderer* UMixedRealityRendererRoot;



protected:
	virtual void BeginPlay() override;

public:

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ExternalCamera")
  int DeviceIndex = 7;

  UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
  bool ConfigAvailable;

  UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
  FVector LocationOffset;

  UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
  FRotator RotationOffset;

  UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
  float FOV;

  UFUNCTION(BlueprintCallable, Category="ExternalCamera")
  bool ReadConfig();

  UFUNCTION(BlueprintCallable, Category = "ExternalCamera")
  void UpdateOffset(FVector newPostionOffset, FRotator newRotationOffset);

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
  
};
