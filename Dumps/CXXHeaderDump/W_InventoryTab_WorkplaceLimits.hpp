#ifndef UE4SS_SDK_W_InventoryTab_WorkplaceLimits_HPP
#define UE4SS_SDK_W_InventoryTab_WorkplaceLimits_HPP

class UW_InventoryTab_WorkplaceLimits_C : public UMLInventoryTabWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0388 (size: 0x8)
    class UNamedSlot* productionLimitsSlot;                                           // 0x0390 (size: 0x8)
    class UWorkplaceLimitsWidget_C* WorkplaceLimitsWidget;                            // 0x0398 (size: 0x8)
    TArray<int32> Goods;                                                              // 0x03A0 (size: 0x10)
    TArray<int32> CraftingGoods;                                                      // 0x03B0 (size: 0x10)

    void ShouldRebuildContainers(bool& Output_Get);
    FNaviSubGridLayout ComputeSubGridLayout();
    bool ShouldDisplayTab(class ASMBuildingMaster* InBuilding, const FStat& InStat);
    void BP_Update();
    void ExecuteUbergraph_W_InventoryTab_WorkplaceLimits(int32 EntryPoint);
}; // Size: 0x3C0

#endif
