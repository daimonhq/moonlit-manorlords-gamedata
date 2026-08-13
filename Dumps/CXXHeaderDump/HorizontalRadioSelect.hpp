#ifndef UE4SS_SDK_HorizontalRadioSelect_HPP
#define UE4SS_SDK_HorizontalRadioSelect_HPP

class UHorizontalRadioSelect_C : public URadioSelect
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    FMargin SlotPadding;                                                              // 0x0320 (size: 0x10)
    FSlateChildSize SizeRule;                                                         // 0x0330 (size: 0x8)

    void OnButtonCreated(class URadioButton* Button, class UPanelSlot* NewSlot);
    void ExecuteUbergraph_HorizontalRadioSelect(int32 EntryPoint);
}; // Size: 0x338

#endif
