#ifndef UE4SS_SDK_W_InventoryTab_Windmill_HPP
#define UE4SS_SDK_W_InventoryTab_Windmill_HPP

class UW_InventoryTab_Windmill_C : public UMLInventoryTabWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0388 (size: 0x8)
    class UNamedSlot* windmillEfficiency_slot;                                        // 0x0390 (size: 0x8)
    class UwindmillEfficiency_C* Widget;                                              // 0x0398 (size: 0x8)

    bool ShouldDisplayTab(class ASMBuildingMaster* InBuilding, const FStat& InStat);
    void BP_Update();
    void ExecuteUbergraph_W_InventoryTab_Windmill(int32 EntryPoint);
}; // Size: 0x3A0

#endif
