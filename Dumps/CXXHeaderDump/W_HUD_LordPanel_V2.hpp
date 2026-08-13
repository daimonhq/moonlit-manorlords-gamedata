#ifndef UE4SS_SDK_W_HUD_LordPanel_V2_HPP
#define UE4SS_SDK_W_HUD_LordPanel_V2_HPP

class UW_HUD_LordPanel_V2_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UWidgetAnimation* ShowAnim;                                                 // 0x0370 (size: 0x8)
    class UImage* coat;                                                               // 0x0378 (size: 0x8)
    class UW_MaterialButton_C* ExploreButton;                                         // 0x0380 (size: 0x8)
    class UMLToolTipAnchor* ExploreToolTipAnchor;                                     // 0x0388 (size: 0x8)
    class UW_MaterialButton_C* FavorButton;                                           // 0x0390 (size: 0x8)
    class UMLNumericTextBlock* FavorNumeric;                                          // 0x0398 (size: 0x8)
    class UMLNumericTextBlock* IncomeNumeric;                                         // 0x03A0 (size: 0x8)
    class UW_MaterialButton_C* InfluenceButton;                                       // 0x03A8 (size: 0x8)
    class UMLNumericTextBlock* InfluenceNumeric;                                      // 0x03B0 (size: 0x8)
    class UImage* Portrait;                                                           // 0x03B8 (size: 0x8)
    class UW_MaterialButton_C* RoyalTaxButton;                                        // 0x03C0 (size: 0x8)
    class UMLNumericTextBlock* TaxNumeric;                                            // 0x03C8 (size: 0x8)
    class UMLToolTipAnchor* ToolTipAnchor;                                            // 0x03D0 (size: 0x8)
    class UW_MaterialButton_C* TreasuryButton;                                        // 0x03D8 (size: 0x8)
    class UMLNumericTextBlock* TreasuryNumeric;                                       // 0x03E0 (size: 0x8)

    FNaviSubGridLayout ComputeSubGridLayout();
    void GetRoyalTaxDescription(FText& Output_Get);
    void updatePlayerStats();
    void getPlayerPortrait(class UTexture2D*& Output);
    void UpdatePlayerData();
    void Construct();
    void BndEvt__W_LordPanel_V2_ExploreButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__W_LordPanel_V2_ExploreButton_K2Node_ComponentBoundEvent_1_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void BndEvt__W_LordPanel_V2_FavorButton_K2Node_ComponentBoundEvent_2_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void BndEvt__W_LordPanel_V2_InfluenceButton_K2Node_ComponentBoundEvent_3_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void BndEvt__W_LordPanel_V2_RoyalTaxButton_K2Node_ComponentBoundEvent_4_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void BndEvt__W_LordPanel_V2_TreasuryButton_K2Node_ComponentBoundEvent_5_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void OnInitialized();
    void OnStatUpdateRequested_Event();
    void onMapViewModeChanged_Event();
    void OnSaveLoaded_Event();
    void ExecuteUbergraph_W_HUD_LordPanel_V2(int32 EntryPoint);
}; // Size: 0x3E8

#endif
