#ifndef UE4SS_SDK_W_MapToolTipV2_HPP
#define UE4SS_SDK_W_MapToolTipV2_HPP

class UW_MapToolTipV2_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UCommonLazyImage* RibbonImage;                                              // 0x02D8 (size: 0x8)
    class UMLTextBlock* Text;                                                         // 0x02E0 (size: 0x8)
    FText TextKey;                                                                    // 0x02E8 (size: 0x10)
    FSlateColor TintColor;                                                            // 0x02F8 (size: 0x14)
    double SizeY;                                                                     // 0x0310 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void Update(FText TextKey, FSlateColor TintColor, double SizeY);
    void ExecuteUbergraph_W_MapToolTipV2(int32 EntryPoint);
}; // Size: 0x318

#endif
