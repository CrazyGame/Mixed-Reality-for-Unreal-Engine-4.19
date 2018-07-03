#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ExternalCameraConfig.generated.h"

UCLASS()
class AExternalCameraConfig : public AActor
{
	GENERATED_BODY()
	
public:	
	AExternalCameraConfig();

protected:
	virtual void BeginPlay() override;

public:
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
};
