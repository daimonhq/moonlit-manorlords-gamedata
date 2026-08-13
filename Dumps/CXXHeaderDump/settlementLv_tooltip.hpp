#ifndef UE4SS_SDK_settlementLv_tooltip_HPP
#define UE4SS_SDK_settlementLv_tooltip_HPP

class UsettlementLv_tooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UBorder* Border_Pattern;                                                    // 0x02D8 (size: 0x8)
    class UImage* Image;                                                              // 0x02E0 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02E8 (size: 0x8)
    class UlocalizedTextBox_C* LTB_open_dev_view;                                     // 0x02F0 (size: 0x8)
    class URichTextBlock* RT_dev_description;                                         // 0x02F8 (size: 0x8)
    class URichTextBlock* RTB_CurrentLevel;                                           // 0x0300 (size: 0x8)
    class UTextBlock* TB_CurrentLevelTitle;                                           // 0x0308 (size: 0x8)
    class UTextBlock* TB_next_level;                                                  // 0x0310 (size: 0x8)
    class UVerticalBox* VB_Requirements;                                              // 0x0318 (size: 0x8)
    class ARegion* Region;                                                            // 0x0320 (size: 0x8)
    FSettlementRequirements SettlementRequirementFulfillment;                         // 0x0328 (size: 0x30)
    FSettlementRequirements NextSettlementRequirementFulfillment;                     // 0x0358 (size: 0x30)
    class UsettlemtnLvRequirementWidget_C* BaseSettlementEntry;                       // 0x0388 (size: 0x8)
    class UsettlemtnLvRequirementWidget_C* Lvl2SettlementEntry;                       // 0x0390 (size: 0x8)
    class UsettlemtnLvRequirementWidget_C* Lvl3SettlementEntry;                       // 0x0398 (size: 0x8)
    class UsettlemtnLvRequirementWidget_C* Lvl4SettlementEntry;                       // 0x03A0 (size: 0x8)

    void UpdateHasPerkReadyToUse(bool& HasPerk);
    void HasSettlementRequirementChanged(FSettlementRequirements CurrentSettlementRequirement, FSettlementRequirements LastUpdateSettlementRequirement, bool& HasChanged);
    void updateSettlementLevelDetails(int32 settlementLevel);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_settlementLv_tooltip(int32 EntryPoint);
}; // Size: 0x3A8

#endif
