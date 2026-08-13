#ifndef UE4SS_SDK_W_InventoryTab_Residential_HPP
#define UE4SS_SDK_W_InventoryTab_Residential_HPP

class UW_InventoryTab_Residential_C : public UMLInventoryTabWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0388 (size: 0x8)
    class UVerticalBox* residential_VB_Complete;                                      // 0x0390 (size: 0x8)
    class UNamedSlot* ResidentialWidgetSlot;                                          // 0x0398 (size: 0x8)
    class UresidentialWidgetFull_C* ResidentialWidget;                                // 0x03A0 (size: 0x8)

    FNaviSubGridLayout ComputeSubGridLayout();
    void BP_Update();
    void ExecuteUbergraph_W_InventoryTab_Residential(int32 EntryPoint);
}; // Size: 0x3A8

#endif
