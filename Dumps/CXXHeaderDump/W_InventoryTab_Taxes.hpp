#ifndef UE4SS_SDK_W_InventoryTab_Taxes_HPP
#define UE4SS_SDK_W_InventoryTab_Taxes_HPP

class UW_InventoryTab_Taxes_C : public UMLInventoryTabWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0388 (size: 0x8)
    class UNamedSlot* TaxWidgetSlot;                                                  // 0x0390 (size: 0x8)
    class UtaxWidget_C* taxWidget;                                                    // 0x0398 (size: 0x8)

    FNaviSubGridLayout ComputeSubGridLayout();
    void BP_Update();
    void ExecuteUbergraph_W_InventoryTab_Taxes(int32 EntryPoint);
}; // Size: 0x3A0

#endif
