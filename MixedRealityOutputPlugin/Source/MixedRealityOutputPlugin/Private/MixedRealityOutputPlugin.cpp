#include "pch.h"
#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "IMixedRealityOutputPlugin.h"




class FMixedRealityOutputPlugin : public IMixedRealityOutputPlugin
{
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

IMPLEMENT_MODULE( FMixedRealityOutputPlugin, MixedRealityOutputPlugin )



void FMixedRealityOutputPlugin::StartupModule()
{
	// This code will execute after your module is loaded into memory (but after global variables are initialized, of course.)
}


void FMixedRealityOutputPlugin::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}



