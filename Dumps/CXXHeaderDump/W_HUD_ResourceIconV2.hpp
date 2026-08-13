#ifndef UE4SS_SDK_W_HUD_ResourceIconV2_HPP
#define UE4SS_SDK_W_HUD_ResourceIconV2_HPP

class UW_HUD_ResourceIconV2_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UImage* Icon;                                                               // 0x02D8 (size: 0x8)
    TSoftObjectPtr<UTexture2D> iconTexture;                                           // 0x02E0 (size: 0x28)

    void Update();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_W_HUD_ResourceIconV2(int32 EntryPoint);
}; // Size: 0x308

#endif
