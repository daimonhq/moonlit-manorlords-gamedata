#ifndef UE4SS_SDK_W_StallButton_HPP
#define UE4SS_SDK_W_StallButton_HPP

class UW_StallButton_C : public UW_MaterialButton_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09C8 (size: 0x8)

    void InitToolTip(class UUserWidget* InToolTip);
    void ExecuteUbergraph_W_StallButton(int32 EntryPoint);
}; // Size: 0x9D0

#endif
