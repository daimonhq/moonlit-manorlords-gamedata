#ifndef UE4SS_SDK_textButton_HPP
#define UE4SS_SDK_textButton_HPP

class UtextButton_C : public UNaviUi
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0360 (size: 0x8)
    class UWidgetAnimation* hover;                                                    // 0x0368 (size: 0x8)
    class UButton* Button;                                                            // 0x0370 (size: 0x8)
    class UTextBlock* ContentText;                                                    // 0x0378 (size: 0x8)
    class USpacer* Focus_SpacingLeft;                                                 // 0x0380 (size: 0x8)
    class USpacer* Focus_SpacingRight;                                                // 0x0388 (size: 0x8)
    class UImage* Focus_SymbolLeft;                                                   // 0x0390 (size: 0x8)
    class UImage* Focus_SymbolRight;                                                  // 0x0398 (size: 0x8)
    class UMD_NaviAutoFocusHighlight_C* MD_NaviAutoFocusHighlight;                    // 0x03A0 (size: 0x8)
    class UBorder* Tinter;                                                            // 0x03A8 (size: 0x8)
    FName TextKey;                                                                    // 0x03B0 (size: 0x8)
    FtextButton_COnReleased OnReleased;                                               // 0x03B8 (size: 0x10)
    void onReleased();
    FSlateColor FontColor;                                                            // 0x03C8 (size: 0x14)
    int32 FontSize;                                                                   // 0x03DC (size: 0x4)
    FSlateFontInfo Font;                                                              // 0x03E0 (size: 0x60)
    class UObject* FontFamily;                                                        // 0x0440 (size: 0x8)
    ETextTransformPolicy Transform Policy;                                            // 0x0448 (size: 0x1)
    FSlateColor ActivatedColor;                                                       // 0x044C (size: 0x14)
    bool animates;                                                                    // 0x0460 (size: 0x1)
    class USoundBase* pressedSfx;                                                     // 0x0468 (size: 0x8)
    bool IsShownActivated;                                                            // 0x0470 (size: 0x1)
    bool DisableArrows;                                                               // 0x0471 (size: 0x1)

    void ConsiderArrowsAllowed();
    void UpdateShownFontColor();
    FText FindTranslatedKey(FName RowName);
    void SetFontColor(const FSlateColor& SlateColor);
    void SetActivatedStatus(bool IsActivated);
    void SetImageSize(class UImage* InputPin, int32 Size);
    void SetShownTextKey(FName NextTextKey);
    void DoOnReleased();
    ENaviHandleMethod HandleInput(ENaviUiIntent Key);
    void BndEvt__menuButton_Button_35_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void Translate();
    void OnFocusChanged(bool nowHasFocus);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_textButton(int32 EntryPoint);
    void onReleased__DelegateSignature();
}; // Size: 0x472

#endif
