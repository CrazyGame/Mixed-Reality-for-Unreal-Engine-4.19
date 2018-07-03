namespace UnrealBuildTool.Rules
{
	public class MixedRealityOutputPlugin : ModuleRules
	{
		public MixedRealityOutputPlugin(ReadOnlyTargetRules Target) : base(Target)
		{

            PublicIncludePaths.AddRange(new string[] { "MixedRealityOutputPlugin/Public" });

			PrivateIncludePaths.AddRange(new string[] { "MixedRealityOutputPlugin/Private" });

			PublicDependencyModuleNames.AddRange(new string[]
				{
					"Core",
					"CoreUObject",
					"Engine",
					"HeadMountedDisplay",
					"InputCore"
				}
				);

			PrivateDependencyModuleNames.AddRange(
				new string[]
				{
				}
				);

			DynamicallyLoadedModuleNames.AddRange(
				new string[]
				{
				}
				);
		}
	}
}
