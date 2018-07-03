// Fill out your copyright notice in the Description page of Project Settings.

#include "VRDemoPawn.h"

// Sets default values
AVRDemoPawn::AVRDemoPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AVRDemoPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVRDemoPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AVRDemoPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

