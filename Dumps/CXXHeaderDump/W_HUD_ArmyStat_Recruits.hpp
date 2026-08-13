#ifndef UE4SS_SDK_W_HUD_ArmyStat_Recruits_HPP
#define UE4SS_SDK_W_HUD_ArmyStat_Recruits_HPP

class UW_HUD_ArmyStat_Recruits_C : public UW_HUD_ArmyStatV2_C
{

    FText GetToolTipText();
    void GetItemValues(class ARegion* Region, int32 goodID, int32& CurrentValue, int32& MaxValue);
}; // Size: 0x344

#endif
