#ifndef UE4SS_SDK_W_HUD_ArmySkillButtonV2_HPP
#define UE4SS_SDK_W_HUD_ArmySkillButtonV2_HPP

class UW_HUD_ArmySkillButtonV2_C : public UW_HUD_ArmyCommandButton_Base_C
{
    ESkillType SkillType;                                                             // 0x0A40 (size: 0x1)
    TArray<FName> NotAvailableReasons;                                                // 0x0A48 (size: 0x10)

    void UpdateRallyMesh();
    void OpenRetinueEditor();
    void HandleClicked();
    void GetToolTipText(FText& Header, FText& Description);
    void getReasonsAsLocalizedText(TArray<FName>& Reasons, FText& Result);
}; // Size: 0xA58

#endif
