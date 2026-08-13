#ifndef UE4SS_SDK_taxWidget_HPP
#define UE4SS_SDK_taxWidget_HPP

class UtaxWidget_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UTextBlock* appLoss_txt;                                                    // 0x0370 (size: 0x8)
    class UBorder* Border_approvalLoss;                                               // 0x0378 (size: 0x8)
    class UW_LegacyButton_C* HelpButton;                                              // 0x0380 (size: 0x8)
    class UImage* icon_approvalFace;                                                  // 0x0388 (size: 0x8)
    class UVerticalBox* taxes_VB;                                                     // 0x0390 (size: 0x8)
    class UtaxOption_C* taxOption_geld;                                               // 0x0398 (size: 0x8)
    class UtaxOption_C* taxOption_here;                                               // 0x03A0 (size: 0x8)
    class UtaxOption_C* taxOption_here_1;                                             // 0x03A8 (size: 0x8)
    class UtaxOption_C* taxOption_inc;                                                // 0x03B0 (size: 0x8)
    class UtaxOption_C* taxOption_mill;                                               // 0x03B8 (size: 0x8)
    class UtaxOption_C* taxOption_tith;                                               // 0x03C0 (size: 0x8)
    class UtaxOption_C* taxOption_war;                                                // 0x03C8 (size: 0x8)
    class UVerticalBox* taxOptions_VB;                                                // 0x03D0 (size: 0x8)
    class UTextBlock* TextBlockRegionName;                                            // 0x03D8 (size: 0x8)
    class ARegion* Region;                                                            // 0x03E0 (size: 0x8)

    void ApplyPlatformLimits();
    FNaviSubGridLayout ComputeSubGridLayout();
    void updateApprovalLoss();
    void updateTaxRateDisplay();
    void Construct();
    void BndEvt__taxWidget_HelpButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__taxWidget_HelpButton_K2Node_ComponentBoundEvent_2_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void onTaxRateChanged_Event();
    void Update();
    void ExecuteUbergraph_taxWidget(int32 EntryPoint);
}; // Size: 0x3E8

#endif
