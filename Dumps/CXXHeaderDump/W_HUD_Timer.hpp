#ifndef UE4SS_SDK_W_HUD_Timer_HPP
#define UE4SS_SDK_W_HUD_Timer_HPP

class UW_HUD_Timer_C : public UMLSeasonTimerWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UWidgetAnimation* SelectAnim;                                               // 0x0370 (size: 0x8)
    class UWidgetAnimation* HideAnim;                                                 // 0x0378 (size: 0x8)
    class UImage* BgCommon;                                                           // 0x0380 (size: 0x8)
    class UImage* BgSeason;                                                           // 0x0388 (size: 0x8)
    class UMD_ControllerHotkey_C* MD_Hotkey_TimeLeft;                                 // 0x0390 (size: 0x8)
    class UMD_ControllerHotkey_C* MD_Hotkey_TimeRight;                                // 0x0398 (size: 0x8)
    class UMLTextBlock* MonthText;                                                    // 0x03A0 (size: 0x8)
    class UOverlay* Overlay;                                                          // 0x03A8 (size: 0x8)
    class UCommonLazyImage* SeasonImg;                                                // 0x03B0 (size: 0x8)
    class UW_MaterialButton_C* Time1Button;                                           // 0x03B8 (size: 0x8)
    class UW_MaterialButton_C* Time2Button;                                           // 0x03C0 (size: 0x8)
    class UW_MaterialButton_C* Time3Button;                                           // 0x03C8 (size: 0x8)
    class UW_MaterialButton_C* TimeStopButton;                                        // 0x03D0 (size: 0x8)
    class UMLToolTipAnchor* ToolTipAnchor;                                            // 0x03D8 (size: 0x8)
    TArray<TSoftObjectPtr<UTexture2D>> SeasonFGTextures;                              // 0x03E0 (size: 0x10)
    TArray<TSoftObjectPtr<UTexture2D>> SeasonBGTextures;                              // 0x03F0 (size: 0x10)
    class UBigTooltipSeasons_C* SeasonsToolTip;                                       // 0x0400 (size: 0x8)
    class UW_MaterialButton_C* SelectedSpeedButton;                                   // 0x0408 (size: 0x8)
    int32 Season;                                                                     // 0x0410 (size: 0x4)
    class UUserWidget* ActiveToolTip;                                                 // 0x0418 (size: 0x8)

    FMovieSceneDynamicBindingResolveResult SequenceEvent__ENTRYPOINTW_HUD_Timer();
    FMovieSceneDynamicBindingResolveResult SelectedButton_DynamicBinding();
    void UpdateSelectedGameSpeed(int32 Index);
    FNaviSubGridLayout ComputeSubGridLayout();
    void setGameSpeed(int32 NewSpeed);
    void SetupToolTips();
    void UpdateCurrentMonth();
    void BndEvt__W_HUD_Timer_TimeStopButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__W_HUD_Timer_Time2Button_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__W_HUD_Timer_Time3Button_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__W_HUD_Timer_TimeStopButton_K2Node_ComponentBoundEvent_4_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void BndEvt__W_HUD_Timer_Time1Button_K2Node_ComponentBoundEvent_5_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void BndEvt__W_HUD_Timer_Time2Button_K2Node_ComponentBoundEvent_6_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void BndEvt__W_HUD_Timer_Time3Button_K2Node_ComponentBoundEvent_7_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void BndEvt__W_HUD_Timer_Time1Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void OnGameSpeedChanged_Event();
    void OnPaperMapViewChanged_Event();
    void InitToolTip(class UUserWidget* InToolTip);
    void Construct();
    void ResetToolTip(class UUserWidget* InToolTip);
    void ExecuteUbergraph_W_HUD_Timer(int32 EntryPoint);
}; // Size: 0x420

#endif
