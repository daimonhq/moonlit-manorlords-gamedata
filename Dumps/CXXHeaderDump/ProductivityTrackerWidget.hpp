#ifndef UE4SS_SDK_ProductivityTrackerWidget_HPP
#define UE4SS_SDK_ProductivityTrackerWidget_HPP

class UProductivityTrackerWidget_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UMD_NaviAutoTooltip_C* AutoTooltip_Goods;                                   // 0x0370 (size: 0x8)
    class UMD_NaviAutoTooltip_C* AutoTooltip_Timer;                                   // 0x0378 (size: 0x8)
    class UMD_NaviAutoTooltip_C* AutoTooltip_Yield;                                   // 0x0380 (size: 0x8)
    class UImage* Image;                                                              // 0x0388 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0390 (size: 0x8)
    class UImage* Image_172;                                                          // 0x0398 (size: 0x8)
    class UImage* LaborSpeed_arrow;                                                   // 0x03A0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_1;                                    // 0x03A8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_97;                                   // 0x03B0 (size: 0x8)
    class UOverlay* Overlay;                                                          // 0x03B8 (size: 0x8)
    class UOverlay* Overlay_0;                                                        // 0x03C0 (size: 0x8)
    class UOverlay* Overlay_1;                                                        // 0x03C8 (size: 0x8)
    class UHorizontalBox* ProductionBox;                                              // 0x03D0 (size: 0x8)
    class UProductivityPanel_C* ProductivityBoxWidget;                                // 0x03D8 (size: 0x8)
    class UTextBlock* ProductivityValueText;                                          // 0x03E0 (size: 0x8)
    class UImage* underline_img;                                                      // 0x03E8 (size: 0x8)
    class UImage* underline_img_1;                                                    // 0x03F0 (size: 0x8)
    class UImage* underline_img_2;                                                    // 0x03F8 (size: 0x8)
    class UHorizontalBox* YieldBox;                                                   // 0x0400 (size: 0x8)
    class UTextBlock* YieldModifierValueText;                                         // 0x0408 (size: 0x8)
    class UlocalizedTextBox_C* YieldResultText;                                       // 0x0410 (size: 0x8)
    class UGoodProductionTrackerWidget_C* GoodsProductionTooltipWidget;               // 0x0418 (size: 0x8)
    class ASMBuildingMaster* CurrentBuilding;                                         // 0x0420 (size: 0x8)
    int64 SelectedTimePeriod;                                                         // 0x0428 (size: 0x8)
    TMap<int32, int32> GoodsProducedMap;                                              // 0x0430 (size: 0x50)
    bool AreGoodsSeasonal;                                                            // 0x0480 (size: 0x1)
    int32 AverageYield;                                                               // 0x0484 (size: 0x4)
    int64 AverageYieldTime;                                                           // 0x0488 (size: 0x8)
    int32 TotalYield;                                                                 // 0x0490 (size: 0x4)
    double GoodYieldThreshold;                                                        // 0x0498 (size: 0x8)
    double PoorYieldThreshold;                                                        // 0x04A0 (size: 0x8)
    double TerribleYieldThreshold;                                                    // 0x04A8 (size: 0x8)
    double AbysmalYieldThreshold;                                                     // 0x04B0 (size: 0x8)
    double GreatYieldThreshold;                                                       // 0x04B8 (size: 0x8)
    double ExcellentYieldThreshold;                                                   // 0x04C0 (size: 0x8)
    TArray<FName> ComboOptionText;                                                    // 0x04C8 (size: 0x10)
    TMap<int32, int32> CurrentlyRelevantProducedGoodsMap;                             // 0x04D8 (size: 0x50)
    double LastTimeLaborTimeValueWasUpdated;                                          // 0x0528 (size: 0x8)

    FNaviSubGridLayout ComputeSubGridLayout();
    void GetCraftingOutputFromRecipe(int32 ItemId, int32& OutItemID);
    void UpdateLaborSpeedArrow();
    void shouldShowCraftingSpeed();
    void UpdateLaborTimeValue();
    class UWidget* GetProductionModifierTooltip();
    void RecalculateTotalYieldAndThresholds();
    void UpdateProducedGoodMaps();
    void UpdateProductivityBoxWidget();
    class UWidget* GetYieldModifierTooltip();
    void SetYieldModifierText();
    class UWidget* GetProductionTimeTooltip();
    void CalculateModifiedAverageYield(int32 yield, int32& ModifiedYield);
    void ModifyAverageYieldByAge(int32 Average Yield , int32& Modified Average Yield);
    void SetAverageYieldTime(int64& YieldTime);
    void CalculateYieldStatus(int32& YieldStatus);
    void UpdateYieldStatusText();
    void GetPercentageOfAverageYield(double Percentage, double& Result);
    void SetYieldThresholds();
    void CalculateAverageTotalYield();
    void UpdateTooltipWidget(int32 ItemType);
    void SetTimePeriod();
    void CalculateTotalYieldAndSetText();
    void updateTooltip();
    void SetCurrentBuilding(class ASMBuildingMaster* building);
    class UWidget* UpdateGoodsTooltip();
    void Construct();
    void ExecuteUbergraph_ProductivityTrackerWidget(int32 EntryPoint);
}; // Size: 0x530

#endif
