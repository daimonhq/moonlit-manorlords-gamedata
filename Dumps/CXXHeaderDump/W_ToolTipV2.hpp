#ifndef UE4SS_SDK_W_ToolTipV2_HPP
#define UE4SS_SDK_W_ToolTipV2_HPP

class UW_ToolTipV2_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UCommonLazyImage* fill;                                                     // 0x02D8 (size: 0x8)
    class URichTextBlock* Text;                                                       // 0x02E0 (size: 0x8)
    FText tooltipTxt;                                                                 // 0x02E8 (size: 0x10)

    void Construct();
    void updateText(const FText& InText);
    void ExecuteUbergraph_W_ToolTipV2(int32 EntryPoint);
}; // Size: 0x2F8

#endif
