#ifndef UE4SS_SDK_W_HUD_RegionName_HPP
#define UE4SS_SDK_W_HUD_RegionName_HPP

class UW_HUD_RegionName_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UMLTextBlock* RegionNameText;                                               // 0x0370 (size: 0x8)
    class UW_MaterialButton_C* SettlementButton;                                      // 0x0378 (size: 0x8)
    class UImage* SettlementHighlight;                                                // 0x0380 (size: 0x8)
    class UImage* SettlementImage;                                                    // 0x0388 (size: 0x8)
    class UMLToolTipAnchor* ToolTipAnchor;                                            // 0x0390 (size: 0x8)
    class ARegion* Region;                                                            // 0x0398 (size: 0x8)

    FNaviSubGridLayout ComputeSubGridLayout();
    void UpdateRegion();
    void BndEvt__W_HUD_Region_SettlementButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__W_HUD_Region_SettlementButton_K2Node_ComponentBoundEvent_1_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void Construct();
    void ExecuteUbergraph_W_HUD_RegionName(int32 EntryPoint);
}; // Size: 0x3A0

#endif
