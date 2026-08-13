#ifndef UE4SS_SDK_W_HUD_RegionStats_Right_HPP
#define UE4SS_SDK_W_HUD_RegionStats_Right_HPP

class UW_HUD_RegionStats_Right_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UMLToolTipAnchor* ApprovalAnchor;                                           // 0x0370 (size: 0x8)
    class UW_MaterialButton_C* ApprovalButton;                                        // 0x0378 (size: 0x8)
    class UImage* ApprovalDirection;                                                  // 0x0380 (size: 0x8)
    class UMLNumericTextBlock* ApprovalNumeric;                                       // 0x0388 (size: 0x8)
    class UMLToolTipAnchor* OrderAnchor;                                              // 0x0390 (size: 0x8)
    class UW_MaterialButton_C* OrderButton;                                           // 0x0398 (size: 0x8)
    class UMLNumericTextBlock* OrderNumeric;                                          // 0x03A0 (size: 0x8)
    class UMLToolTipAnchor* SuppliesAnchor;                                           // 0x03A8 (size: 0x8)
    class UW_MaterialButton_C* SuppliesButton;                                        // 0x03B0 (size: 0x8)
    class UMLNumericTextBlock* SuppliesNumeric;                                       // 0x03B8 (size: 0x8)
    class UMLToolTipAnchor* WealthAnchor;                                             // 0x03C0 (size: 0x8)
    class UW_MaterialButton_C* WealthButton;                                          // 0x03C8 (size: 0x8)
    class UMLNumericTextBlock* WealthNumeric;                                         // 0x03D0 (size: 0x8)
    class ARegion* currentRegion;                                                     // 0x03D8 (size: 0x8)
    bool LowSupplies;                                                                 // 0x03E0 (size: 0x1)
    int32 CurrentApproval;                                                            // 0x03E4 (size: 0x4)

    void UpdateSupplies();
    FNaviSubGridLayout ComputeSubGridLayout();
    void UpdateApproval();
    void GetSuppliesToolTip(FText& Result);
    void updateStats();
    void BndEvt__W_HUD_RegionPanelV2_ApprovalButton_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature(class UW_MaterialButton_C* MyWidget, bool Hovered);
    void BndEvt__W_HUD_RegionPanelV2_ApprovalButton_K2Node_ComponentBoundEvent_5_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void BndEvt__W_HUD_RegionStats_Right_WealthButton_K2Node_ComponentBoundEvent_3_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void BndEvt__W_HUD_RegionStats_Right_OrderButton_K2Node_ComponentBoundEvent_0_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void BndEvt__W_HUD_RegionStats_Right_SuppliesButton_K2Node_ComponentBoundEvent_5_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void BndEvt__W_HUD_RegionStats_Right_SuppliesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__W_HUD_RegionStats_Right_OrderButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__W_HUD_RegionStats_Right_WealthButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__W_HUD_RegionPanelV2_ApprovalButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void ExecuteUbergraph_W_HUD_RegionStats_Right(int32 EntryPoint);
}; // Size: 0x3E8

#endif
