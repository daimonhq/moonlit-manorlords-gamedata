#ifndef UE4SS_SDK_W_CheckboxButton_HPP
#define UE4SS_SDK_W_CheckboxButton_HPP

class UW_CheckboxButton_C : public UW_MaterialButton_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09C8 (size: 0x8)
    class UImage* CheckboxImage;                                                      // 0x09D0 (size: 0x8)
    FSlateBrush CheckboxBrush;                                                        // 0x09E0 (size: 0xB0)

    void HandleHovered(bool bHovered);
    void HandleSelected(bool bSelected);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_W_CheckboxButton(int32 EntryPoint);
}; // Size: 0xA90

#endif
