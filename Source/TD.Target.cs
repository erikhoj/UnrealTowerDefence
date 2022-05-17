using UnrealBuildTool;

public class TDTarget : TargetRules
{
    public TDTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Game;
        DefaultBuildSettings = BuildSettingsVersion.V2;
        ExtraModuleNames.AddRange(new string[] { "TDCore" });
    }
}