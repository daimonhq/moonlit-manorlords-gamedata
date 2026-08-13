#ifndef UE4SS_SDK_W_HUD_ArmyStatV2_HPP
#define UE4SS_SDK_W_HUD_ArmyStatV2_HPP

class UW_HUD_ArmyStatV2_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UImage* Bg;                                                                 // 0x02D8 (size: 0x8)
    class UImage* Icon;                                                               // 0x02E0 (size: 0x8)
    class UMLNumericTextBlock* Text;                                                  // 0x02E8 (size: 0x8)
    TSoftObjectPtr<UTexture2D> iconTexture;                                           // 0x02F0 (size: 0x28)
    int32 ItemId;                                                                     // 0x0318 (size: 0x4)
    FSlateColor BadColor;                                                             // 0x031C (size: 0x14)
    FSlateColor NeutralColor;                                                         // 0x0330 (size: 0x14)

    void GetItemValues(class ARegion* Region, int32 goodID, int32& CurrentValue, int32& MaxValue);
    FText GetToolTipText();
    void updateRecruitmentStock(class ARegion* currentRegion, int32 goodID);
    void ResetToolTip(class UUserWidget* InToolTip);
    void PreConstruct(bool IsDesignTime);
    void InitToolTip(class UUserWidget* InToolTip);
    void Construct();
    void UpdateStat();
    void ExecuteUbergraph_W_HUD_ArmyStatV2(int32 EntryPoint);
}; // Size: 0x344

#endif
