// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TareaGrupal : ModuleRules
{
	public TareaGrupal(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"TareaGrupal",
			"TareaGrupal/Variant_Platforming",
			"TareaGrupal/Variant_Platforming/Animation",
			"TareaGrupal/Variant_Combat",
			"TareaGrupal/Variant_Combat/AI",
			"TareaGrupal/Variant_Combat/Animation",
			"TareaGrupal/Variant_Combat/Gameplay",
			"TareaGrupal/Variant_Combat/Interfaces",
			"TareaGrupal/Variant_Combat/UI",
			"TareaGrupal/Variant_SideScrolling",
			"TareaGrupal/Variant_SideScrolling/AI",
			"TareaGrupal/Variant_SideScrolling/Gameplay",
			"TareaGrupal/Variant_SideScrolling/Interfaces",
			"TareaGrupal/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
