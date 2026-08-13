#ifndef UE4SS_SDK_W_InventoryTab_StorageFilters_HPP
#define UE4SS_SDK_W_InventoryTab_StorageFilters_HPP

class UW_InventoryTab_StorageFilters_C : public UMLInventoryTabWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0388 (size: 0x8)
    class UstorageFilterWidget_C* storageFilterWidget;                                // 0x0390 (size: 0x8)

    FNaviSubGridLayout ComputeSubGridLayout();
    bool ShouldDisplayTab(class ASMBuildingMaster* InBuilding, const FStat& InStat);
    void BP_OnInit();
    void ExecuteUbergraph_W_InventoryTab_StorageFilters(int32 EntryPoint);
}; // Size: 0x398

#endif
