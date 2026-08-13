#ifndef UE4SS_SDK_W_InventoryTab_Maintenance_HPP
#define UE4SS_SDK_W_InventoryTab_Maintenance_HPP

class UW_InventoryTab_Maintenance_C : public UMLInventoryTabWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0388 (size: 0x8)
    class UW_LegacyButton_C* HelpButton;                                              // 0x0390 (size: 0x8)
    class UImage* Image;                                                              // 0x0398 (size: 0x8)
    class UImage* Image_3;                                                            // 0x03A0 (size: 0x8)
    class UVerticalBox* Maintenance_VB;                                               // 0x03A8 (size: 0x8)
    class UVerticalBox* MaintenanceDetails_VB;                                        // 0x03B0 (size: 0x8)
    class UImage* maintenanceState_icon;                                              // 0x03B8 (size: 0x8)
    class UlocalizedTextBox_C* maintenanceState_text;                                 // 0x03C0 (size: 0x8)
    class UlocalizedTextBox_C* maintenanceState_text_1;                               // 0x03C8 (size: 0x8)
    class UlocalizedTextBox_C* maintenanceState_text_2;                               // 0x03D0 (size: 0x8)
    class UHorizontalBox* MaintenanceStatus_HB;                                       // 0x03D8 (size: 0x8)
    class UMLDefaultSlider_C* upkeepMultiplier_SliderNew;                             // 0x03E0 (size: 0x8)

    bool ShouldDisplayTab(class ASMBuildingMaster* InBuilding, const FStat& InStat);
    FNaviSubGridLayout ComputeSubGridLayout();
    void CreateMaintenanceTypesSlot(FMaintenanceTypes InputPin);
    void UpdateMaintenanceSliderTooltip();
    void UpdateMaintenanceStatus();
    void Update Maintenance();
    void BP_OnInit();
    void BP_Update();
    void BndEvt__Inventory_upkeepMultiplier_SliderNew_K2Node_ComponentBoundEvent_8_OnValueChange__DelegateSignature(double Value);
    void BndEvt__W_InventoryTab_Maintenance_HelpButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__W_InventoryTab_Maintenance_HelpButton_K2Node_ComponentBoundEvent_3_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void Construct();
    void ExecuteUbergraph_W_InventoryTab_Maintenance(int32 EntryPoint);
}; // Size: 0x3E8

#endif
