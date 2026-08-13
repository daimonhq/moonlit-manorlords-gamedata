#ifndef UE4SS_SDK_W_MenuSpinner_HPP
#define UE4SS_SDK_W_MenuSpinner_HPP

class UW_MenuSpinner_C : public USpinner
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    class UWidgetAnimation* scrollright;                                              // 0x0308 (size: 0x8)
    class UWidgetAnimation* scrollleft;                                               // 0x0310 (size: 0x8)
    class UMLTextBlock* Label;                                                        // 0x0318 (size: 0x8)
    class UImage* LeftArrow;                                                          // 0x0320 (size: 0x8)
    class UButton* LeftButton;                                                        // 0x0328 (size: 0x8)
    class UNaviUi* NaviUi;                                                            // 0x0330 (size: 0x8)
    class UImage* RightArrow;                                                         // 0x0338 (size: 0x8)
    class UButton* RightButton;                                                       // 0x0340 (size: 0x8)
    FW_MenuSpinner_COnUserSelectionChanged OnUserSelectionChanged;                    // 0x0348 (size: 0x10)
    void OnUserSelectionChanged(FString Value);
    FSlateColor TextColor;                                                            // 0x0358 (size: 0x14)
    class UWidget* SecondaryTooltipTarget;                                            // 0x0370 (size: 0x8)
    int32 CurrentIndex;                                                               // 0x0378 (size: 0x4)
    int32 newIndex;                                                                   // 0x037C (size: 0x4)
    class UTexture2D* Normal;                                                         // 0x0380 (size: 0x8)
    class UTexture2D* Hovered;                                                        // 0x0388 (size: 0x8)
    class UTexture2D* Pressed;                                                        // 0x0390 (size: 0x8)

    ENaviHandleMethod CREATEDELEGATE_PROXYFUNCTION_0(ENaviUiIntent Key);
    void ShowGamepadSelected(bool showSelected);
    void CycleChoices(bool IsNextDirection);
    void HandleInput(ENaviUiIntent intent, ENaviHandleMethod& Result);
    void UpdateLabelText();
    void BndEvt__LeftButton_K2Node_ComponentBoundEvent_178_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__RightButton_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__MLMenuSpinner_LeftButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__MLMenuSpinner_LeftButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__MLMenuSpinner_LeftButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__MLMenuSpinner_LeftButton_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__MLMenuSpinner_RightButton_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__MLMenuSpinner_RightButton_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__MLMenuSpinner_RightButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__MLMenuSpinner_RightButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
    void OnSelectionChanged(FSettingOption SelectedOption);
    void Construct();
    void BndEvt__W_MenuSpinner_NaviUileft_K2Node_ComponentBoundEvent_0_OnFocusChange__DelegateSignature(bool HasFocus);
    void ExecuteUbergraph_W_MenuSpinner(int32 EntryPoint);
    void OnUserSelectionChanged__DelegateSignature(FString Value);
}; // Size: 0x398

#endif
