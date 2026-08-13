#ifndef UE4SS_SDK_W_HUD_RegionStats_Left_HPP
#define UE4SS_SDK_W_HUD_RegionStats_Left_HPP

class UW_HUD_RegionStats_Left_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UMLToolTipAnchor* AssignedFamilyAnchor;                                     // 0x0370 (size: 0x8)
    class UW_MaterialButton_C* AssignedFamilyButton;                                  // 0x0378 (size: 0x8)
    class UMLNumericTextBlock* AssignedFamilyNumeric;                                 // 0x0380 (size: 0x8)
    class UMLToolTipAnchor* LivestockAnchor;                                          // 0x0388 (size: 0x8)
    class UW_MaterialButton_C* LivestockButton;                                       // 0x0390 (size: 0x8)
    class UMLNumericTextBlock* LivestockNumeric;                                      // 0x0398 (size: 0x8)
    class UMLToolTipAnchor* LivingSpaceAnchor;                                        // 0x03A0 (size: 0x8)
    class UW_MaterialButton_C* LivingSpaceButton;                                     // 0x03A8 (size: 0x8)
    class UMLNumericTextBlock* LivingSpaceIncoming_ToolTipMe;                         // 0x03B0 (size: 0x8)
    class UMLNumericTextBlock* LivingSpaceNumeric;                                    // 0x03B8 (size: 0x8)
    class UMLToolTipAnchor* UnassignedFamilyAnchor;                                   // 0x03C0 (size: 0x8)
    class UW_MaterialButton_C* UnassignedFamilyButton;                                // 0x03C8 (size: 0x8)
    class UMLNumericTextBlock* UnassignedFamilyNumeric;                               // 0x03D0 (size: 0x8)
    class ARegion* currentRegion;                                                     // 0x03D8 (size: 0x8)
    int32 CurrentApproval;                                                            // 0x03E0 (size: 0x4)
    bool LowSupplies;                                                                 // 0x03E4 (size: 0x1)

    FNaviSubGridLayout ComputeSubGridLayout();
    void GetSuppliesToolTip(FText& Result);
    void UpdateStats();
    void BndEvt__W_HUD_RegionPanelV2_AssignedFamilyButton_K2Node_ComponentBoundEvent_1_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void BndEvt__W_HUD_RegionPanelV2_LivingSpaceButton_K2Node_ComponentBoundEvent_2_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void BndEvt__W_HUD_RegionStats_Right_LivestockButton_K2Node_ComponentBoundEvent_4_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void BndEvt__W_HUD_RegionStats_Left_UnassignedFamilyButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__W_HUD_RegionStats_Left_AssignedFamilyButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__W_HUD_RegionStats_Left_LivingSpaceButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__W_HUD_RegionStats_Left_LivestockButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__W_HUD_RegionPanelV2_UnassignedFamilyButton_K2Node_ComponentBoundEvent_0_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void ExecuteUbergraph_W_HUD_RegionStats_Left(int32 EntryPoint);
}; // Size: 0x3E5

#endif
