#ifndef UE4SS_SDK_W_Menu_Background_HPP
#define UE4SS_SDK_W_Menu_Background_HPP

class UW_Menu_Background_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UImage* Frame;                                                              // 0x02D8 (size: 0x8)
    TSoftObjectPtr<UTexture2D> FrameImage;                                            // 0x02E0 (size: 0x28)
    bool bHasFrame;                                                                   // 0x0308 (size: 0x1)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_W_Menu_Background(int32 EntryPoint);
}; // Size: 0x309

#endif
