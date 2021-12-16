// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UnrealBasicsTutorial : ModuleRules
{
	public UnrealBasicsTutorial(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "UMG" });
	}
}
