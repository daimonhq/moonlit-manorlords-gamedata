#ifndef UE4SS_SDK_W_InventoryTab_ManorDetails_HPP
#define UE4SS_SDK_W_InventoryTab_ManorDetails_HPP

class UW_InventoryTab_ManorDetails_C : public UMLInventoryTabWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0388 (size: 0x8)
    class UmanorDetails_C* manorDetails;                                              // 0x0390 (size: 0x8)

    bool ShouldDisplayTab(class ASMBuildingMaster* InBuilding, const FStat& InStat);
    FNaviSubGridLayout ComputeSubGridLayout();
    void Construct();
    void ExecuteUbergraph_W_InventoryTab_ManorDetails(int32 EntryPoint);
}; // Size: 0x398

#endif
