#ifndef UE4SS_SDK_mainTabButton_HPP
#define UE4SS_SDK_mainTabButton_HPP

class UmainTabButton_C : public UW_MaterialButton_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09C8 (size: 0x8)
    class UWidgetAnimation* HoverAnim;                                                // 0x09D0 (size: 0x8)
    class UImage* Highlight;                                                          // 0x09D8 (size: 0x8)
    class UImage* Icon;                                                               // 0x09E0 (size: 0x8)
    class UMainUICPP_C* mainUI;                                                       // 0x09E8 (size: 0x8)
    class UTexture2D* iconTexture;                                                    // 0x09F0 (size: 0x8)
    int32 TabId;                                                                      // 0x09F8 (size: 0x4)
    FName MappingName;                                                                // 0x09FC (size: 0x8)

    void HandleClicked();
    void HandleHovered(bool bHovered);
    void switchTab();
    void flipRoadMode(class APawnCPP* playerRef);
    void GetToolTipText(FText& Result);
    void PreConstruct(bool IsDesignTime);
    void InitToolTip(class UUserWidget* InToolTip);
    void ExecuteUbergraph_mainTabButton(int32 EntryPoint);
}; // Size: 0xA04

#endif
