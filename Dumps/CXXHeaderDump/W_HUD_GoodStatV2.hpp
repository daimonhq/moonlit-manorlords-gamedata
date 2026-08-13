#ifndef UE4SS_SDK_W_HUD_GoodStatV2_HPP
#define UE4SS_SDK_W_HUD_GoodStatV2_HPP

class UW_HUD_GoodStatV2_C : public UMLGoodStatWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D0 (size: 0x8)
    class UW_MaterialButton_C* Button;                                                // 0x03D8 (size: 0x8)
    class UImage* GoodIcon;                                                           // 0x03E0 (size: 0x8)
    class UMLTextBlock* GoodText;                                                     // 0x03E8 (size: 0x8)
    class UMLNumericTextBlock* Numeric;                                               // 0x03F0 (size: 0x8)
    bool TooltipActive;                                                               // 0x03F8 (size: 0x1)
    bool bShowText;                                                                   // 0x03F9 (size: 0x1)
    class UMLToolTipAnchor* ToolTipAnchor;                                            // 0x0400 (size: 0x8)

    FString GetItemID();
    void InitText();
    void GetSimpleToolTipText(FText& Return Value);
    void InitIcon();
    void InitSharedToolTip();
    void UpdateSharedToolTip(class UUserWidget* Widget);
    void NotifyGoodAmountChanged();
    void InitToolTip(class UUserWidget* InToolTip);
    void ResetToolTip(class UUserWidget* InToolTip);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_W_HUD_GoodStatV2(int32 EntryPoint);
}; // Size: 0x408

#endif
