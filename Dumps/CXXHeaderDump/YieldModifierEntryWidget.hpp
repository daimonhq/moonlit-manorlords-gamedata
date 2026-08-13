#ifndef UE4SS_SDK_YieldModifierEntryWidget_HPP
#define UE4SS_SDK_YieldModifierEntryWidget_HPP

class UYieldModifierEntryWidget_C : public UUserWidget
{
    class UTextBlock* Colon;                                                          // 0x02D0 (size: 0x8)
    class UlocalizedTextBox_C* ModifierEffect;                                        // 0x02D8 (size: 0x8)
    class UHorizontalBox* ModifierEffectHB;                                           // 0x02E0 (size: 0x8)
    class UImage* ModifierIcon;                                                       // 0x02E8 (size: 0x8)
    class UlocalizedTextBox_C* modifierName;                                          // 0x02F0 (size: 0x8)
    class UTextBlock* ModifierType;                                                   // 0x02F8 (size: 0x8)
    class URichTextBlock* ModifierValue;                                              // 0x0300 (size: 0x8)
    class URichTextBlock* ModifierValueInline;                                        // 0x0308 (size: 0x8)
    FName Type;                                                                       // 0x0310 (size: 0x8)

    void InitEntry(FName InType, class UTexture2D* InModifierIcon, FName InModifierName, FName InModifierEffect, FString inModifierValue, bool DisplayAsInt);
}; // Size: 0x318

#endif
