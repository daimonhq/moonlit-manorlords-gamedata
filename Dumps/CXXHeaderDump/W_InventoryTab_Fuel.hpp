#ifndef UE4SS_SDK_W_InventoryTab_Fuel_HPP
#define UE4SS_SDK_W_InventoryTab_Fuel_HPP

class UW_InventoryTab_Fuel_C : public UMLInventoryTabWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0388 (size: 0x8)
    class UfuelStocks_C* fuelStocks;                                                  // 0x0390 (size: 0x8)

    FNaviSubGridLayout ComputeSubGridLayout();
    bool ShouldDisplayTab(class ASMBuildingMaster* InBuilding, const FStat& InStat);
    void BP_Update();
    void BP_OnInit();
    void ExecuteUbergraph_W_InventoryTab_Fuel(int32 EntryPoint);
}; // Size: 0x398

#endif
