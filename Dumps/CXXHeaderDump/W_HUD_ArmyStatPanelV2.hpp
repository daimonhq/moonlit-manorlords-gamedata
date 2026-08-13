#ifndef UE4SS_SDK_W_HUD_ArmyStatPanelV2_HPP
#define UE4SS_SDK_W_HUD_ArmyStatPanelV2_HPP

class UW_HUD_ArmyStatPanelV2_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UUniformGridPanel* StatGrid;                                                // 0x02D8 (size: 0x8)

    void updateStats();
    void Construct();
    void OnArmyUpdateRequested_Event();
    void ExecuteUbergraph_W_HUD_ArmyStatPanelV2(int32 EntryPoint);
}; // Size: 0x2E0

#endif
