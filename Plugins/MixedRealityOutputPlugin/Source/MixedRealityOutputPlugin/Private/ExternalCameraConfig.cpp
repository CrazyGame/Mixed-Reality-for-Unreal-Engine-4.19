#include "pch.h"
#include "ExternalCameraConfig.h"
#include <FileManager.h>
#include <PlatformFilemanager.h>
#include <FileHelper.h>

AExternalCameraConfig::AExternalCameraConfig()
  : ConfigAvailable(false)
  , LocationOffset(FVector::ZeroVector)
  , RotationOffset(FRotator::ZeroRotator)
  , FOV(60.0f)
{
	PrimaryActorTick.bCanEverTick = false;
}

void AExternalCameraConfig::BeginPlay()
{
	Super::BeginPlay();

  ReadConfig();
}

bool AExternalCameraConfig::ReadConfig()
{
  ConfigAvailable = true;

 /* auto& file_manager = FPlatformFileManager::Get().GetPlatformFile();
  FString config_file = file_manager.GetFilenameOnDisk(
    TEXT("externalcamera.cfg")
  );


  if (file_manager.FileExists(*config_file))
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