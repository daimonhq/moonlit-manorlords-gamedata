#ifndef UE4SS_SDK_W_InventoryTab_Threshing_HPP
#define UE4SS_SDK_W_InventoryTab_Threshing_HPP

class UW_InventoryTab_Threshing_C : public UMLInventoryTabWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0388 (size: 0x8)
    class UMLDefaultSpinner_C* DefaultSpinner_threshing;                              // 0x0390 (size: 0x8)
    class UHorizontalBox* threshing_hb;                                               // 0x0398 (size: 0x8)
    class UVerticalBox* threshing_vb;                                                 // 0x03A0 (size: 0x8)

    FNaviSubGridLayout ComputeSubGridLayout();
    bool ShouldDisplayTab(class ASMBuildingMaster* InBuilding, const FStat& InStat);
    void BndEvt__Inventory_DefaultSpinner_K2Node_ComponentBoundEvent_14_SpinnerSelectionChanged__DelegateSignature(FString Value);
    void BP_Update();
    void ExecuteUbergraph_W_InventoryTab_Threshing(int32 EntryPoint);
}; // Size: 0x3A8

#endif
