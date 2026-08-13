#ifndef UE4SS_SDK_W_HUD_SettlementToolTipRequirement_HPP
#define UE4SS_SDK_W_HUD_SettlementToolTipRequirement_HPP

class UW_HUD_SettlementToolTipRequirement_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UImage* CheckBox;                                                           // 0x02D8 (size: 0x8)
    class UImage* Ribbon;                                                             // 0x02E0 (size: 0x8)
    class UMLTextBlock* Text;                                                         // 0x02E8 (size: 0x8)
    TArray<FName> Labels;                                                             // 0x02F0 (size: 0x10)
    int32 PreviewLevel;                                                               // 0x0300 (size: 0x4)
    int32 PreviewCurrent;                                                             // 0x0304 (size: 0x4)
    int32 PreviewTarget;                                                              // 0x0308 (size: 0x4)
    FLinearColor BadColor;                                                            // 0x030C (size: 0x10)
    FLinearColor GoodColor;                                                           // 0x031C (size: 0x10)

    void Update(int32 Level, int32 Current, int32 Target);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_W_HUD_SettlementToolTipRequirement(int32 EntryPoint);
}; // Size: 0x32C

#endif
