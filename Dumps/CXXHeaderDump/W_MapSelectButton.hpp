#ifndef UE4SS_SDK_W_MapSelectButton_HPP
#define UE4SS_SDK_W_MapSelectButton_HPP

class UW_MapSelectButton_C : public UW_TextButton_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09C8 (size: 0x8)

    void OnInitialized();
    void InitToolTip(class UUserWidget* InToolTip);
    void Construct();
    void ExecuteUbergraph_W_MapSelectButton(int32 EntryPoint);
}; // Size: 0x9D0

#endif
