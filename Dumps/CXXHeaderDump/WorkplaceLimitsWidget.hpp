#ifndef UE4SS_SDK_WorkplaceLimitsWidget_HPP
#define UE4SS_SDK_WorkplaceLimitsWidget_HPP

class UWorkplaceLimitsWidget_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UW_LegacyButton_C* ConsumptionHelpButton;                                   // 0x0370 (size: 0x8)
    class UVerticalBox* ConsumptionLimitsContainer;                                   // 0x0378 (size: 0x8)
    class UHorizontalBox* HB_consumption;                                             // 0x0380 (size: 0x8)
    class UHorizontalBox* HB_production;                                              // 0x0388 (size: 0x8)
    class UHorizontalBox* HB_storage;                                                 // 0x0390 (size: 0x8)
    class UImage* img_category_line_1;                                                // 0x0398 (size: 0x8)
    class UW_LegacyButton_C* ProductionHelpButton;                                    // 0x03A0 (size: 0x8)
    class UVerticalBox* productionLimit_VB;                                           // 0x03A8 (size: 0x8)
    class UVerticalBox* ProductionLimitsContainer;                                    // 0x03B0 (size: 0x8)
    class UW_LegacyButton_C* StorageHelpButton;                                       // 0x03B8 (size: 0x8)
    class UVerticalBox* storageLimit_VB;                                              // 0x03C0 (size: 0x8)
    class UVerticalBox* StorageLimitsContainer;                                       // 0x03C8 (size: 0x8)
    class UVerticalBox* VB_ProdLimits;                                                // 0x03D0 (size: 0x8)
    class UVerticalBox* VB_StorageLimits;                                             // 0x03D8 (size: 0x8)

    void RememberConsumptionLimitSpawned(const int32& Type, const TMap<int32, int32>& LimitTypes);
    FNaviSubGridLayout ComputeSubGridLayout();
    void respawnAllLimitEntries(class ASMBuildingMaster* building);
    void Construct();
    void BndEvt__WorkplaceLimitsWidget_HelpButton_K2Node_ComponentBoundEvent_0_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void BndEvt__WorkplaceLimitsWidget_HelpButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__WorkplaceLimitsWidget_ProductionHelpButton_K2Node_ComponentBoundEvent_3_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void BndEvt__WorkplaceLimitsWidget_ProductionHelpButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__WorkplaceLimitsWidget_StorageHelpButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UW_MaterialButton_C* MyWidget);
    void BndEvt__WorkplaceLimitsWidget_StorageHelpButton_K2Node_ComponentBoundEvent_4_OnInitToolTip__DelegateSignature(class UUserWidget* InToolTip, class UNaviUi* InSourceButton);
    void ExecuteUbergraph_WorkplaceLimitsWidget(int32 EntryPoint);
}; // Size: 0x3E0

#endif
