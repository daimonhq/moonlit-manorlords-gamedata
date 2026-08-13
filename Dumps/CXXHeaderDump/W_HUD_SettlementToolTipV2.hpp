#ifndef UE4SS_SDK_W_HUD_SettlementToolTipV2_HPP
#define UE4SS_SDK_W_HUD_SettlementToolTipV2_HPP

class UW_HUD_SettlementToolTipV2_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UImage* Bg;                                                                 // 0x02D8 (size: 0x8)
    class UMLTextBlock* CurrentSettlementText;                                        // 0x02E0 (size: 0x8)
    class UMLTextBlock* NextSettlementSeparator;                                      // 0x02E8 (size: 0x8)
    class UMLTextBlock* NextSettlementText;                                           // 0x02F0 (size: 0x8)
    class UMLTextBlock* NextSettlementTitle;                                          // 0x02F8 (size: 0x8)
    class UVerticalBox* NextSettlementVB;                                             // 0x0300 (size: 0x8)
    class UImage* SettlementImage;                                                    // 0x0308 (size: 0x8)
    class UW_HUD_SettlementToolTipRequirement_C* VillageReqLvl1;                      // 0x0310 (size: 0x8)
    class UW_HUD_SettlementToolTipRequirement_C* VillageReqLvl2;                      // 0x0318 (size: 0x8)
    class UW_HUD_SettlementToolTipRequirement_C* VillageReqLvl3;                      // 0x0320 (size: 0x8)
    class UW_HUD_SettlementToolTipRequirement_C* VillageReqLvl4;                      // 0x0328 (size: 0x8)
    int32 PreviewLevel;                                                               // 0x0330 (size: 0x4)
    int32 settlementLevel;                                                            // 0x0334 (size: 0x4)
    class ARegion* Region;                                                            // 0x0338 (size: 0x8)

    void UpdateVillageRequirements();
    void GetVillageRequirements(TArray<int32>& Current, TArray<int32>& Target);
    void GetRequirementsText(FText& Result);
    void GetNextSettlementLevelText(FText& Result);
    void Update(int32 InSettlementLevel);
    void PreConstruct(bool IsDesignTime);
    void updateDetails();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_W_HUD_SettlementToolTipV2(int32 EntryPoint);
}; // Size: 0x340

#endif
