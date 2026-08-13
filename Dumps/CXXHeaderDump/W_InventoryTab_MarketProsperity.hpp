#ifndef UE4SS_SDK_W_InventoryTab_MarketProsperity_HPP
#define UE4SS_SDK_W_InventoryTab_MarketProsperity_HPP

class UW_InventoryTab_MarketProsperity_C : public UMLInventoryTabWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0388 (size: 0x8)
    class UNamedSlot* marketProsperitySlot;                                           // 0x0390 (size: 0x8)
    class UmarketSupplyWidget_C* SlotWidget;                                          // 0x0398 (size: 0x8)

    FNaviSubGridLayout ComputeSubGridLayout();
    bool ShouldDisplayTab(class ASMBuildingMaster* InBuilding, const FStat& InStat);
    void BP_Update();
    void ExecuteUbergraph_W_InventoryTab_MarketProsperity(int32 EntryPoint);
}; // Size: 0x3A0

#endif
