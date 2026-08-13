#ifndef UE4SS_SDK_W_HUD_Separator_HPP
#define UE4SS_SDK_W_HUD_Separator_HPP

class UW_HUD_Separator_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UImage* Image;                                                              // 0x02D8 (size: 0x8)
    FSlateColor TintColor;                                                            // 0x02E0 (size: 0x14)
    double DesiredHeight;                                                             // 0x02F8 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_W_HUD_Separator(int32 EntryPoint);
}; // Size: 0x300

#endif
