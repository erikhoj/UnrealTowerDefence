using UnrealBuildTool;

public class TDEditorTarget : TargetRules
{
    public TDEditorTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Editor;
        DefaultBuildSettings = BuildSettingsVersion.V2;
        ExtraModuleNames.AddRange(new string[] { "TDCore" });
    }
}