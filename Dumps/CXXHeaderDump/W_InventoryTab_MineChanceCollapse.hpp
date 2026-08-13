#ifndef UE4SS_SDK_W_InventoryTab_MineChanceCollapse_HPP
#define UE4SS_SDK_W_InventoryTab_MineChanceCollapse_HPP

class UW_InventoryTab_MineChanceCollapse_C : public UMLInventoryTabWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0388 (size: 0x8)
    class UNamedSlot* mineCollapseChance_slot;                                        // 0x0390 (size: 0x8)
    class UmineCollapseChance_C* Widget;                                              // 0x0398 (size: 0x8)

    bool ShouldDisplayTab(class ASMBuildingMaster* InBuilding, const FStat& InStat);
    void BP_Update();
    void ExecuteUbergraph_W_InventoryTab_MineChanceCollapse(int32 EntryPoint);
}; // Size: 0x3A0

#endif
