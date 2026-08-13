#ifndef UE4SS_SDK_residentialWidgetFull_HPP
#define UE4SS_SDK_residentialWidgetFull_HPP

class UresidentialWidgetFull_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UW_LegacyButton_C* ArmamentHelpButton;                                      // 0x0370 (size: 0x8)
    class UWrapBox* DynamicRequirementCategories_Container;                           // 0x0378 (size: 0x8)
    class UImage* Image_22;                                                           // 0x0380 (size: 0x8)
    class UImage* Image_37;                                                           // 0x0388 (size: 0x8)
    class UImage* Image_77;                                                           // 0x0390 (size: 0x8)
    class UImage* Image_125;                                                          // 0x0398 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C;                                    // 0x03A0 (size: 0x8)
    class UHorizontalBox* mourning_hb;                                                // 0x03A8 (size: 0x8)
    class UTextBlock* mourning_txt;                                                   // 0x03B0 (size: 0x8)
    class UMD_NaviAutoTooltip_C* navi_mourningTooltip;                                // 0x03B8 (size: 0x8)
    class UW_LegacyButton_C* RequirementHelpButton;                                   // 0x03C0 (size: 0x8)
    class UVerticalBox* requirements_VB;                                              // 0x03C8 (size: 0x8)
    class UVerticalBox* ResidentialRequirementsParent_VB;                             // 0x03D0 (size: 0x8)
    class UImage* Spacer_Img;                                                         // 0x03D8 (size: 0x8)
    class UlocalizedTextBox_C* text_occasionalNeeds;                                  // 0x03E0 (size: 0x8)
    class UTextBlock* text_occasionalNeeds_1;                                         // 0x03E8 (size: 0x8)
    class UTextBlock* TextBlock_bows;                                                 // 0x03F0 (size: 0x8)
    class UTextBlock* TextBlock_gambesons;                                            // 0x03F8 (size: 0x8)
    class UTextBlock* TextBlock_helmets;                                              // 0x0400 (size: 0x8)
    class UTextBlock* TextBlock_mails;                                                // 0x0408 (size: 0x8)
    class UTextBlock* TextBlock_pavise;                                               // 0x0410 (size: 0x8)
    class UTextBlock* TextBlock_polearms;                                             // 0x0418 (size: 0x8)
    class UTextBlock* TextBlock_shields;                                              // 0x0420 (size: 0x8)
    class UTextBlock* TextBlock_sidearms;                                             // 0x0428 (size: 0x8)
    class UTextBlock* TextBlock_spears;                                               // 0x0430 (size: 0x8)
    class UTextBlock* TextBlock_xbows_1;                                              // 0x0438 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x0440 (size: 0x8)
    TArray<uint8> Requirements;                                                       // 0x0448 (size: 0x10)
    TArray<class UrequirementRating_C*> Requirement Rating Widgets;                   // 0x0458 (size: 0x10)
    TArray<uint8> RequirementsNextLevel;                                              // 0x0468 (size: 0x10)
    TArray<uint8> RequirementsTriggering;                                             // 0x0478 (size: 0x10)
    TArray<FGood> StoredMilitaryEquipment;                                            // 0x0488 (size: 0x10)
    TArray<FGood> RequiredMilitaryEquipment;                                          // 0x0498 (size: 0x10)
    int32 num_familyMembers_total;                                                    // 0x04A8 (size: 0x4)
    int32 num_familyMembers_assigned;                                                 // 0x04AC (size: 0x4)
    TArray<class ASMUnit*> familyMembersCache;                                        // 0x04B0 (size: 0x10)

    FNaviSubGridLayout ComputeSubGridLayout();
    void updateMilitaryEquipmentType(class UTextBlock* TextBlock, int32 goodID);
    void setRequirementAmtTxt(class UTextBlock* Target, int32 requried, FText hasTxt);
    void sumRequirementCount(TArray<uint8>& recuirements, int32& count1);
    void updateRequirements();
    void Construct();
    void BndEvt__residentialWidgetFull_RequirementHelpButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__residentialWidgetFull_RequirementHelpButton_K2Node_ComponentBoundEvent_3_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void BndEvt__residentialWidgetFull_ArmamentHelpButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__residentialWidgetFull_ArmamentHelpButton_K2Node_ComponentBoundEvent_6_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void Destruct();
    void ExecuteUbergraph_residentialWidgetFull(int32 EntryPoint);
}; // Size: 0x4C0

#endif
