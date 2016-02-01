using UnrealBuildTool;
using System.Collections.Generic;

public class OpulentiumServerTarget : TargetRules
{
    public OpulentiumServerTarget(TargetInfo Target)
    {
        Type = TargetType.Server;
        bUsesSlate = false;
    }

    //
    // TargetRules interface.
    //

    public override bool GetSupportedPlatforms(ref List<UnrealTargetPlatform> OutPlatforms)
    {
        // It is valid for only server platforms
        return UnrealBuildTool.UnrealBuildTool.GetAllServerPlatforms(ref OutPlatforms, false);
    }

    public override void SetupBinaries(
        TargetInfo Target,
        ref List<UEBuildBinaryConfiguration> OutBuildBinaryConfigurations,
        ref List<string> OutExtraModuleNames
        )
    {
        OutExtraModuleNames.Add("Opulentium");
    }

    public override void SetupGlobalEnvironment(
        TargetInfo Target,
        ref LinkEnvironmentConfiguration OutLinkEnvironmentConfiguration,
        ref CPPEnvironmentConfiguration OutCPPEnvironmentConfiguration
        )
    {
        // Turn on shipping logging, this will only apply to monolithic builds
        UEBuildConfiguration.bUseLoggingInShipping = true;
        UEBuildConfiguration.bCompileSteamOSS = false;
        UEBuildConfiguration.bCompileCEF3 = false;
    }
}