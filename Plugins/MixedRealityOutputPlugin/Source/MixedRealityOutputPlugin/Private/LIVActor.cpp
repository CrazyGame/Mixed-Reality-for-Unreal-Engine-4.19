// Fill out your copyright notice in the Description page of Project Settings.

#include "pch.h"
#include "IMixedRealityOutputPlugin.h"
#include "Kismet/GameplayStatics.h"
#include "LIVActor.h"


// Sets default values
ALIVActor::ALIVActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RenderRoot = CreateDefaultSubobject<USceneComponent>(TEXT("RenderRoot"));
	RootComponent = RenderRoot ;

	UMixedRealityRendererRoot = CreateDefaultSubobject<UMixedRealityRenderer>(TEXT("UMixedRealityRendererRoot"));
	UMixedRealityRendererRoot->SetupAttachment(RenderRoot);
	UMixedRealityRendererRoot->CapturePostprocessType = ECapturePostprocessType::FullPostprocess;
}

// Called when the game starts or when spawned
void ALIVActor::BeginPlay()
{
	Super::BeginPlay();

	UMixedRealityRendererRoot->HMD = RenderRoot;
	UMixedRealityRendererRoot->ControllerType = EControllerHand::ExternalCamera;
	UMixedRealityRendererRoot->CapturePostprocessType = ECapturePostprocessType::FullPostprocess;


}

// Called every frame
void ALIVActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

