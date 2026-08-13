#ifndef UE4SS_SDK_W_HUD_ProblemBannerV2_HPP
#define UE4SS_SDK_W_HUD_ProblemBannerV2_HPP

class UW_HUD_ProblemBannerV2_C : public UMLRegionProblemWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UWidgetAnimation* hover;                                                    // 0x0320 (size: 0x8)
    class UWidgetAnimation* lerpIn;                                                   // 0x0328 (size: 0x8)
    class UW_MaterialButton_C* Button;                                                // 0x0330 (size: 0x8)
    class UOverlay* Overlay;                                                          // 0x0338 (size: 0x8)
    class UMLNumericTextBlock* ProblemCount;                                          // 0x0340 (size: 0x8)
    class UImage* ProblemImage;                                                       // 0x0348 (size: 0x8)
    class UMLToolTipAnchor* ToolTipAnchor;                                            // 0x0350 (size: 0x8)
    class UImage* warnBgHighlght;                                                     // 0x0358 (size: 0x8)

    void UpdateStyle();
    void updateProblemCount(int32 count);
    void GoToNextProblem();
    void GetToolTipText(FText& Header, FText& Description);
    void BndEvt__W_HUD_ProblemBanner_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__W_HUD_ProblemBanner_Button_K2Node_ComponentBoundEvent_1_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void BndEvt__W_HUD_ProblemBanner_Button_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature(class UW_MaterialButton_C* MyWidget, bool Hovered);
    void BP_UpdateStyle(const FMLRegionProblemStyle& InStyle);
    void BP_UpdateProblemCount(int32 count);
    void ExecuteUbergraph_W_HUD_ProblemBannerV2(int32 EntryPoint);
}; // Size: 0x360

#endif
