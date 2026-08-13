#ifndef UE4SS_SDK_CreditLine_HPP
#define UE4SS_SDK_CreditLine_HPP

class UCreditLine_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UTextBlock* TextDisplay;                                                    // 0x02D8 (size: 0x8)
    FCreditsLine Details;                                                             // 0x02E0 (size: 0x30)
    FSlateFontInfo HeaderFontStyle;                                                   // 0x0310 (size: 0x60)
    FSlateFontInfo SectionFontStyle;                                                  // 0x0370 (size: 0x60)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_CreditLine(int32 EntryPoint);
}; // Size: 0x3D0

#endif
