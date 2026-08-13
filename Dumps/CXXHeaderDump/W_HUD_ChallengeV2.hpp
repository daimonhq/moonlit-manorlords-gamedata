#ifndef UE4SS_SDK_W_HUD_ChallengeV2_HPP
#define UE4SS_SDK_W_HUD_ChallengeV2_HPP

class UW_HUD_ChallengeV2_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UWidgetAnimation* OpenAnim;                                                 // 0x02D8 (size: 0x8)
    class UImage* Battle;                                                             // 0x02E0 (size: 0x8)
    class UMLTextBlock* ChallengeTitle;                                               // 0x02E8 (size: 0x8)
    class UMLRichTextBlock* DaysText;                                                 // 0x02F0 (size: 0x8)
    class UGridPanel* Grid;                                                           // 0x02F8 (size: 0x8)
    class UOverlay* Overlay;                                                          // 0x0300 (size: 0x8)
    class UMLRichTextBlock* statusText;                                               // 0x0308 (size: 0x8)
    class UMLToolTipAnchor* ToolTipAnchor;                                            // 0x0310 (size: 0x8)
    class UW_MaterialButton_C* ZoomButton;                                            // 0x0318 (size: 0x8)
    FChallenge Challenge;                                                             // 0x0320 (size: 0x70)
    TMap<class EChallengeStatus, class FName> PlayerChallengeText;                    // 0x0390 (size: 0x50)
    TMap<class EChallengeStatus, class FName> AIChallengeText;                        // 0x03E0 (size: 0x50)
    FText DayPatternText;                                                             // 0x0430 (size: 0x10)

    void GetChallengeStatusTextKey(FName& Value);
    void UpdateDaysText();
    void UpdateStatusText();
    void UpdateTitle();
    void UpdateStyle(FChallenge Challenge);
    void Construct();
    void InitToolTip(class UUserWidget* InToolTip);
    void BndEvt__W_HUD_ChallengeV2_ZoomButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__W_HUD_ChallengeV2_ZoomButton_K2Node_ComponentBoundEvent_1_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void BndEvt__W_HUD_ChallengeV2_ZoomButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature(class UW_MaterialButton_C* MyWidget, bool Hovered);
    void ResetToolTip(class UUserWidget* InToolTip);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_W_HUD_ChallengeV2(int32 EntryPoint);
}; // Size: 0x440

#endif
