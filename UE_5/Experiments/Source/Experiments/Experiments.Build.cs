// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Experiments : ModuleRules
{
	public Experiments(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
