#ifndef UE4SS_SDK_W_InventoryTab_ResourceProtection_HPP
#define UE4SS_SDK_W_InventoryTab_ResourceProtection_HPP

class UW_InventoryTab_ResourceProtection_C : public UMLInventoryTabWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0388 (size: 0x8)
    class UProtectResourceAreaCheckboxWidget_C* ProtectResourceAreaCheckboxWidget;    // 0x0390 (size: 0x8)

    FNaviSubGridLayout ComputeSubGridLayout();
    bool ShouldDisplayTab(class ASMBuildingMaster* InBuilding, const FStat& InStat);
    void BP_OnInit();
    void OnValueChange_Event(bool IsChecked);
    void ExecuteUbergraph_W_InventoryTab_ResourceProtection(int32 EntryPoint);
}; // Size: 0x398

#endif
