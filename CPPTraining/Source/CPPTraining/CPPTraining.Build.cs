// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CPPTraining : ModuleRules
{
	public CPPTraining(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
