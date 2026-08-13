#ifndef UE4SS_SDK_W_InventoryTab_WorkArea_HPP
#define UE4SS_SDK_W_InventoryTab_WorkArea_HPP

class UW_InventoryTab_WorkArea_C : public UMLInventoryTabWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0388 (size: 0x8)
    class UW_LegacyButton_C* ResetAreaButton;                                         // 0x0390 (size: 0x8)
    class UW_LegacyButton_C* SetAreaButton;                                           // 0x0398 (size: 0x8)
    class UTextBlock* work-area_text;                                                 // 0x03A0 (size: 0x8)
    class UHorizontalBox* workArea_HB;                                                // 0x03A8 (size: 0x8)

    void PreviewWorkArea(bool show);
    FNaviSubGridLayout ComputeSubGridLayout();
    bool ShouldDisplayTab(class ASMBuildingMaster* InBuilding, const FStat& InStat);
    void updateWorkAreaLabel();
    void BP_Update();
    void BndEvt__W_InventoryTab_WorkArea_W_LegacyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__W_InventoryTab_WorkArea_W_LegacyButton_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature(class UW_MaterialButton_C* MyWidget, bool Hovered);
    void BndEvt__W_InventoryTab_WorkArea_W_LegacyButton_1_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__W_InventoryTab_WorkArea_W_LegacyButton_1_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature(class UW_MaterialButton_C* MyWidget, bool Hovered);
    void BndEvt__W_InventoryTab_WorkArea_SetAreaButton_K2Node_ComponentBoundEvent_13_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void BndEvt__W_InventoryTab_WorkArea_ResetAreaButton_K2Node_ComponentBoundEvent_14_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void Construct();
    void ExecuteUbergraph_W_InventoryTab_WorkArea(int32 EntryPoint);
}; // Size: 0x3B0

#endif
