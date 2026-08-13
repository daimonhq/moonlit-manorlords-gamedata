#ifndef UE4SS_SDK_productionFocusWidget_HPP
#define UE4SS_SDK_productionFocusWidget_HPP

class UproductionFocusWidget_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UHorizontalBox* HB_header;                                                  // 0x0370 (size: 0x8)
    class UW_LegacyButton_C* HelpButton;                                              // 0x0378 (size: 0x8)
    class UHorizontalBox* HorizontalBox_18;                                           // 0x0380 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x0388 (size: 0x8)

    FNaviSubGridLayout ComputeSubGridLayout();
    void productionFocusWidget_updateSelection(int32 goodType, bool Active);
    void updateChoiceSelectionHighlight();
    void Repopulate Choices();
    void Construct();
    void BndEvt__productionFocusWidget_HelpButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__productionFocusWidget_HelpButton_K2Node_ComponentBoundEvent_3_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void ExecuteUbergraph_productionFocusWidget(int32 EntryPoint);
}; // Size: 0x390

#endif
