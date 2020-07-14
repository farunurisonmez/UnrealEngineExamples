using UnrealBuildTool;

public class ARUE4Examples : ModuleRules
{
	public ARUE4Examples(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

		PrivateDependencyModuleNames.AddRange(new string[] {
					"AugmentedReality",
					"ProceduralMeshComponent",
					"GoogleARCoreBase",
					"AppleARKit"
		});
	}
}
