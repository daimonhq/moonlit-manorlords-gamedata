#ifndef UE4SS_SDK_W_MenuButton_HPP
#define UE4SS_SDK_W_MenuButton_HPP

class UW_MenuButton_C : public UW_MaterialButton_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09C8 (size: 0x8)
    class UHorizontalBox* ContentBox;                                                 // 0x09D0 (size: 0x8)
    class UImage* Left;                                                               // 0x09D8 (size: 0x8)
    class UMD_NaviAutoHotkey_C* MD_NaviAutoHotkey;                                    // 0x09E0 (size: 0x8)
    class UImage* Right;                                                              // 0x09E8 (size: 0x8)
    bool ShowOrnament;                                                                // 0x09F0 (size: 0x1)
    FW_MenuButton_COnClicked_0 OnClicked_0;                                           // 0x09F8 (size: 0x10)
    void OnClicked_0();

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_W_MenuButton(int32 EntryPoint);
    void OnClicked_0__DelegateSignature();
}; // Size: 0xA08

#endif
