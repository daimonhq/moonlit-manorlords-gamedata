#ifndef UE4SS_SDK_regionProductionPanel_Widget_HPP
#define UE4SS_SDK_regionProductionPanel_Widget_HPP

class UregionProductionPanel_Widget_C : public URegionProductionPanel
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06B0 (size: 0x8)
    class UlocalizedTextBox_C* BalanceText;                                           // 0x06B8 (size: 0x8)
    class UlocalizedTextBox_C* ConsumedText;                                          // 0x06C0 (size: 0x8)
    class URetainerBox* LinesRB;                                                      // 0x06C8 (size: 0x8)
    class URetainerBox* PlotsRB;                                                      // 0x06D0 (size: 0x8)
    class UlocalizedTextBox_C* ProducedText;                                          // 0x06D8 (size: 0x8)
    class UlocalizedTextBox_C* ProducedText_1;                                        // 0x06E0 (size: 0x8)
    class UregionProductionStockEntry_Widget_C* RegionProductionStockEntry;           // 0x06E8 (size: 0x8)
    class UregionProductionStockEntry_Widget_C* RegionProductionStockEntry_1;         // 0x06F0 (size: 0x8)
    class UregionProductionStockEntry_Widget_C* RegionProductionStockEntry_2;         // 0x06F8 (size: 0x8)
    class UregionProductionStockEntry_Widget_C* RegionProductionStockEntry_3;         // 0x0700 (size: 0x8)
    class UregionProductionStockEntry_Widget_C* RegionProductionStockEntry_4;         // 0x0708 (size: 0x8)
    class UregionProductionStockEntry_Widget_C* RegionProductionStockEntry_5;         // 0x0710 (size: 0x8)
    class UScrollBox* ScrollBox_0;                                                    // 0x0718 (size: 0x8)

    void OnItemFocused_BringIntoScrollWindow(bool HasFocus);
    FNaviSubGridLayout ComputeSubGridLayout();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_regionProductionPanel_Widget(int32 EntryPoint);
}; // Size: 0x720

#endif
