#ifndef UE4SS_SDK_BP_PerkOverviewPanel_HPP
#define UE4SS_SDK_BP_PerkOverviewPanel_HPP

class UBP_PerkOverviewPanel_C : public URegionDevelopmentPanel
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0398 (size: 0x8)
    class UBP_PerkCardSlot_C* BP_RegionDevelopmentEntry_;                             // 0x03A0 (size: 0x8)
    class UBP_PerkCardSlot_C* BP_RegionDevelopmentEntry__1;                           // 0x03A8 (size: 0x8)
    class UBP_PerkCardSlot_C* BP_RegionDevelopmentEntry__2;                           // 0x03B0 (size: 0x8)
    class UBP_PerkCardSlot_C* BP_RegionDevelopmentEntry__4;                           // 0x03B8 (size: 0x8)
    class UBP_PerkCardSlot_C* BP_RegionDevelopmentEntry__5;                           // 0x03C0 (size: 0x8)
    class UBP_PerkCardSlot_C* BP_RegionDevelopmentEntry__6;                           // 0x03C8 (size: 0x8)
    class UBP_PerkCardSlot_C* BP_RegionDevelopmentEntry__7;                           // 0x03D0 (size: 0x8)
    class UBP_PerkCardSlot_C* BP_RegionDevelopmentEntry__8;                           // 0x03D8 (size: 0x8)
    class UBP_PerkCardSlot_C* BP_RegionDevelopmentEntry__9;                           // 0x03E0 (size: 0x8)
    class UImage* brown_separator_IMG;                                                // 0x03E8 (size: 0x8)
    class UImage* brown_separator_IMG_1;                                              // 0x03F0 (size: 0x8)
    class UImage* brown_separator_IMG_2;                                              // 0x03F8 (size: 0x8)
    class UImage* brown_separator_IMG_3;                                              // 0x0400 (size: 0x8)
    class UImage* brown_separator_IMG_4;                                              // 0x0408 (size: 0x8)
    class UHorizontalBox* developmentEntry_HB;                                        // 0x0410 (size: 0x8)
    class UImage* gold_separator_IMG;                                                 // 0x0418 (size: 0x8)
    class UImage* gold_separator_IMG_1;                                               // 0x0420 (size: 0x8)
    class UImage* Image;                                                              // 0x0428 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0430 (size: 0x8)
    class UImage* texturePillar;                                                      // 0x0438 (size: 0x8)
    class UImage* texturePillar_1;                                                    // 0x0440 (size: 0x8)
    class UImage* texturePillar_2;                                                    // 0x0448 (size: 0x8)
    class UImage* texturePillar_3;                                                    // 0x0450 (size: 0x8)
    class UImage* texturePillar_4;                                                    // 0x0458 (size: 0x8)
    class UImage* texturePillar_5;                                                    // 0x0460 (size: 0x8)
    class UImage* textureWorn;                                                        // 0x0468 (size: 0x8)
    class UImage* textureWorn_1;                                                      // 0x0470 (size: 0x8)
    class UImage* TopTeges;                                                           // 0x0478 (size: 0x8)
    class UImage* TopTeges_1;                                                         // 0x0480 (size: 0x8)
    class UImage* TopTeges_2;                                                         // 0x0488 (size: 0x8)
    class UImage* TopTeges_3;                                                         // 0x0490 (size: 0x8)
    class UImage* TopTeges_4;                                                         // 0x0498 (size: 0x8)
    class UImage* TopTeges_5;                                                         // 0x04A0 (size: 0x8)
    class UBP_PerkCardSlot_C* lastSelectedEntry;                                      // 0x04A8 (size: 0x8)
    FBP_PerkOverviewPanel_COnCardSelected OnCardSelected;                             // 0x04B0 (size: 0x10)
    void OnCardSelected(FGameplayTag SelectedPerk);
    TArray<class UImage*> texturePillars;                                             // 0x04C0 (size: 0x10)
    double DeltaClamped;                                                              // 0x04D0 (size: 0x8)
    TArray<class UBP_PerkCardSlot_C*> perkWidgets;                                    // 0x04D8 (size: 0x10)
    FBP_PerkOverviewPanel_CPerkSlotPressed PerkSlotPressed;                           // 0x04E8 (size: 0x10)
    void PerkSlotPressed(int32 PerkSlotIndex, int32 PerkSlotSettlementLevel, FName SlotName, bool CanSelect, EPerkSlot SlotType);

    void PlayUnlockAnimation(FName PerkSlotName);
    FNaviSubGridLayout ComputeSubGridLayout();
    void updateContents();
    void updatePerkCardStates();
    void playOpenAnimation();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnPerkSelected(const FGameplayTag InPerkName);
    void PerkCardSlotReleased(int32 settlementLevel, int32 SlotIndex, FName SlotName, bool CanChooseNewPerk, EPerkSlot SlotType);
    void ExecuteUbergraph_BP_PerkOverviewPanel(int32 EntryPoint);
    void PerkSlotPressed__DelegateSignature(int32 PerkSlotIndex, int32 PerkSlotSettlementLevel, FName SlotName, bool CanSelect, EPerkSlot SlotType);
    void OnCardSelected__DelegateSignature(FGameplayTag SelectedPerk);
}; // Size: 0x4F8

#endif
