#ifndef UE4SS_SDK_W_HUD_ArmyUnitGrid_HPP
#define UE4SS_SDK_W_HUD_ArmyUnitGrid_HPP

class UW_HUD_ArmyUnitGrid_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UUniformGridPanel* SquadGrid;                                               // 0x0370 (size: 0x8)
    int32 PreviewCardCount;                                                           // 0x0378 (size: 0x4)

    void UpdateCardDetails();
    void ReorderUnitCards();
    void RespawnUnitCrads();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnArmyUpdateRequested_Event();
    void OnReorderUnitCards_Event();
    void ExecuteUbergraph_W_HUD_ArmyUnitGrid(int32 EntryPoint);
}; // Size: 0x37C

#endif
