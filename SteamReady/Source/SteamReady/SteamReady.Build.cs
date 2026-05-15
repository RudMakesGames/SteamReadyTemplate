// Copyright Epic Games, Inc. All Rights Reserved.
using UnrealBuildTool;

public class SteamReady : ModuleRules
{
    public SteamReady(ReadOnlyTargetRules Target) : base(Target)
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
            "Slate",
            "OnlineSubsystem",
            "OnlineSubsystemSteam",
            "OnlineSubsystemUtils"
        });
        PrivateDependencyModuleNames.AddRange(new string[] { });
        PublicIncludePaths.AddRange(new string[] {
            "SteamReady",
            "SteamReady/Variant_Platforming",
            "SteamReady/Variant_Platforming/Animation",
            "SteamReady/Variant_Combat",
            "SteamReady/Variant_Combat/AI",
            "SteamReady/Variant_Combat/Animation",
            "SteamReady/Variant_Combat/Gameplay",
            "SteamReady/Variant_Combat/Interfaces",
            "SteamReady/Variant_Combat/UI",
            "SteamReady/Variant_SideScrolling",
            "SteamReady/Variant_SideScrolling/AI",
            "SteamReady/Variant_SideScrolling/Gameplay",
            "SteamReady/Variant_SideScrolling/Interfaces",
            "SteamReady/Variant_SideScrolling/UI"
        });
    }
}