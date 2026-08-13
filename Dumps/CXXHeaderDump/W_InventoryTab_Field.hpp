#ifndef UE4SS_SDK_W_InventoryTab_Field_HPP
#define UE4SS_SDK_W_InventoryTab_Field_HPP

class UW_InventoryTab_Field_C : public UMLInventoryTabWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0388 (size: 0x8)
    class UNamedSlot* FieldWidgetSlot;                                                // 0x0390 (size: 0x8)
    class UW_Inventory_FieldWidget_C* FieldWidget;                                    // 0x0398 (size: 0x8)

    FNaviSubGridLayout ComputeSubGridLayout();
    bool ShouldDisplayTab(class ASMBuildingMaster* InBuilding, const FStat& InStat);
    void BP_Update();
    void ExecuteUbergraph_W_InventoryTab_Field(int32 EntryPoint);
}; // Size: 0x3A0

#endif
