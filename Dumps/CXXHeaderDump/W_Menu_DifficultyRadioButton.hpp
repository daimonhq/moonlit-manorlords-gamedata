#ifndef UE4SS_SDK_W_Menu_DifficultyRadioButton_HPP
#define UE4SS_SDK_W_Menu_DifficultyRadioButton_HPP

class UW_Menu_DifficultyRadioButton_C : public URadioButton
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0308 (size: 0x8)
    class UWidgetAnimation* flag;                                                     // 0x0310 (size: 0x8)
    class UCommonLazyImage* BgTextImage;                                              // 0x0318 (size: 0x8)
    class UButton* Button;                                                            // 0x0320 (size: 0x8)
    class UNaviUi* NaviUi;                                                            // 0x0328 (size: 0x8)
    class UCommonLazyImage* TemplateImage;                                            // 0x0330 (size: 0x8)
    class UMLTextBlock* Text;                                                         // 0x0338 (size: 0x8)
    class UVerticalBox* VB;                                                           // 0x0340 (size: 0x8)
    FLinearColor DefaultBgColor;                                                      // 0x0348 (size: 0x10)
    FLinearColor SelectedBgColor;                                                     // 0x0358 (size: 0x10)
    bool PreviewSelected;                                                             // 0x0368 (size: 0x1)
    int32 PreviewImage;                                                               // 0x036C (size: 0x4)
    TMap<class EGameDifficulty, class TSoftObjectPtr<UMaterialInterface>> Materials;  // 0x0370 (size: 0x50)
    FLinearColor HoveredBgColor;                                                      // 0x03C0 (size: 0x10)

    ENaviHandleMethod HandleInput(ENaviUiIntent Key);
    void PlayFlagAnimation();
    void UpdateSelectedState(bool InSelected);
    void UpdateLabel(const FText& InLabel);
    void BndEvt__W_Menu_DifficultyRadioButton_Button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void UpdateSelected(bool InSelected);
    void BndEvt__W_Menu_DifficultyRadioButton_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__W_Menu_DifficultyRadioButton_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__W_Menu_DifficultyRadioButton_Button_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__W_Menu_DifficultyRadioButton_NaviUi_K2Node_ComponentBoundEvent_4_OnFocusChange__DelegateSignature(bool HasFocus);
    void Construct();
    void GamepadReleased();
    void ExecuteUbergraph_W_Menu_DifficultyRadioButton(int32 EntryPoint);
}; // Size: 0x3D0

#endif
