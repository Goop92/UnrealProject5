// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MyUnrealAssignment3 : ModuleRules
{
	public MyUnrealAssignment3(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
