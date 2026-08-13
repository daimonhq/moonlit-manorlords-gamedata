#ifndef UE4SS_SDK_W_MainMenuButton_HPP
#define UE4SS_SDK_W_MainMenuButton_HPP

class UW_MainMenuButton_C : public UW_MaterialButton_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09C8 (size: 0x8)
    class UWidgetAnimation* HoverAnim;                                                // 0x09D0 (size: 0x8)
    class UMD_NaviAutoHotkey_C* MD_NaviAutoHotkey;                                    // 0x09D8 (size: 0x8)
    class UImage* OrnamentLeft;                                                       // 0x09E0 (size: 0x8)
    class UImage* OrnamentRight;                                                      // 0x09E8 (size: 0x8)

    void HandleHovered(bool bHovered);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_W_MainMenuButton(int32 EntryPoint);
}; // Size: 0x9F0

#endif
