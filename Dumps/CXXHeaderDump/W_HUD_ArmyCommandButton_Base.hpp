#ifndef UE4SS_SDK_W_HUD_ArmyCommandButton_Base_HPP
#define UE4SS_SDK_W_HUD_ArmyCommandButton_Base_HPP

class UW_HUD_ArmyCommandButton_Base_C : public UW_MaterialButton_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09C8 (size: 0x8)
    class UImage* Icon;                                                               // 0x09D0 (size: 0x8)
    class UMLToolTipAnchor* ToolTipAnchor;                                            // 0x09D8 (size: 0x8)
    TSoftObjectPtr<UTexture2D> iconTexture;                                           // 0x09E0 (size: 0x28)
    FString ToolTipKey;                                                               // 0x0A08 (size: 0x10)
    FSlateColor DefaultTint;                                                          // 0x0A18 (size: 0x14)
    FSlateColor InactiveTint;                                                         // 0x0A2C (size: 0x14)

    void HandleInactive(bool bInactive);
    void GetToolTipText(FText& Header, FText& Description);
    void PreConstruct(bool IsDesignTime);
    void InitToolTip(class UUserWidget* InToolTip);
    void OnInitialized();
    void ExecuteUbergraph_W_HUD_ArmyCommandButton_Base(int32 EntryPoint);
}; // Size: 0xA40

#endif
