// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MixedRealityRenderer.h"
#include "LIVActor.generated.h"

UCLASS()
class MIXEDREALITYOUTPUTPLUGIN_API ALIVActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALIVActor();

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "MixReality")
	UMixedRealityRenderer* UMixedRealityRendererRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MixReality")
	USceneComponent* RenderRoot;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MixReality")
	UMotionControllerComponent* ExternalCameraController;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
