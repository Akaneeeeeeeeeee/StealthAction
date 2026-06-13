// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class StealthAction_3D : ModuleRules
{
	public StealthAction_3D(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
