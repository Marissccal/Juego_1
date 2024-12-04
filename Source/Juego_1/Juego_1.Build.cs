// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Juego_1 : ModuleRules
{
	public Juego_1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
