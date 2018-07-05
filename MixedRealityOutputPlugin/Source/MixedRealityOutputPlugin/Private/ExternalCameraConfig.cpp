#include "pch.h"
#include "ExternalCameraConfig.h"
#include <FileManager.h>
#include <PlatformFilemanager.h>
#include <FileHelper.h>


AExternalCameraConfig::AExternalCameraConfig()
{
	PrimaryActorTick.bCanEverTick = true;

	FOV = 60.0f;
	ConfigAvailable = false;
	RotationOffset = FRotator::ZeroRotator;
	LocationOffset = FVector::ZeroVector;
	
	RenderRoot = CreateDefaultSubobject<USceneComponent>(TEXT("RenderRoot"));
	RootComponent = RenderRoot;

	UMixedRealityRendererRoot = CreateDefaultSubobject<UMixedRealityRenderer>(TEXT("UMixedRealityRendererRoot"));
	UMixedRealityRendererRoot->SetupAttachment(RenderRoot);
	UMixedRealityRendererRoot->CapturePostprocessType = ECapturePostprocessType::FullPostprocess;
}

void AExternalCameraConfig::BeginPlay()
{
	Super::BeginPlay();
	UMixedRealityRendererRoot->HMD = RenderRoot;
	UMixedRealityRendererRoot->ControllerType = EControllerHand::ExternalCamera;
	UMixedRealityRendererRoot->CapturePostprocessType = ECapturePostprocessType::FullPostprocess;

	UMixedRealityRendererRoot->InitData(this);
}

void AExternalCameraConfig::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


bool AExternalCameraConfig::ReadConfig()
{
  ConfigAvailable = true;

  auto& file_manager = FPlatformFileManager::Get().GetPlatformFile();
  FString config_file = file_manager.GetFilenameOnDisk(
    TEXT("externalcamera.cfg")
  );
  /*if (file_manager.FileExists(*config_file))
  {
    TArray<FString> parameters;
    if (FFileHelper::LoadANSITextFileToStrings(*config_file, nullptr, parameters))
    {
      ConfigAvailable = true;
      for (auto& str : parameters)
      {
        str = str.TrimEnd();
        TArray<FString> tokens;
        FString delimiter{ "=" };
        if (str.ParseIntoArray(tokens, *delimiter) == 2)
        {
          auto value = FCString::Atof(*tokens[1]);
          if (tokens[0].StartsWith("x"))
            LocationOffset.X = value;
          else if (tokens[0].StartsWith("y"))
            LocationOffset.Y = value;
          else if (tokens[0].StartsWith("z"))
            LocationOffset.Z = value;
          else if (tokens[0].StartsWith("rx"))
            RotationOffset.Pitch = value;
          else if (tokens[0].StartsWith("ry"))
            RotationOffset.Yaw = value;
          else if (tokens[0].StartsWith("rz"))
            RotationOffset.Roll = value;
          else if (tokens[0].StartsWith("fov"))
            FOV = value;
        }
      }
    }
  }*/

  return ConfigAvailable;
}

void AExternalCameraConfig::UpdateOffset(FVector newPostionOffset, FRotator newRotationOffset)
{
	LocationOffset = newPostionOffset;
	RotationOffset = newRotationOffset;
}
