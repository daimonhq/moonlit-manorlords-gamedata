#ifndef UE4SS_SDK_W_HUD_ArmyStanceButtonV2_HPP
#define UE4SS_SDK_W_HUD_ArmyStanceButtonV2_HPP

class UW_HUD_ArmyStanceButtonV2_C : public UW_HUD_ArmyCommandButton_Base_C
{
    EPushStance UnitStance;                                                           // 0x0A40 (size: 0x1)

    void HandleClicked();
}; // Size: 0xA41

#endif
