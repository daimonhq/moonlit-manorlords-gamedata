#ifndef UE4SS_SDK_W_ItemCounterV2_HPP
#define UE4SS_SDK_W_ItemCounterV2_HPP

class UW_ItemCounterV2_C : public UMLGoodStatWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D0 (size: 0x8)
    class UImage* icon_img;                                                           // 0x03D8 (size: 0x8)
    class UMLNumericTextBlock* ItemCount;                                             // 0x03E0 (size: 0x8)
    class UMLTextBlock* ItemNameText;                                                 // 0x03E8 (size: 0x8)

    void NotifyGoodAmountChanged();
    void PreConstruct(bool IsDesignTime);
    void Update();
    void ExecuteUbergraph_W_ItemCounterV2(int32 EntryPoint);
}; // Size: 0x3F0

#endif
