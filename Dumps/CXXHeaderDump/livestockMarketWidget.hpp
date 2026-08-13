#ifndef UE4SS_SDK_livestockMarketWidget_HPP
#define UE4SS_SDK_livestockMarketWidget_HPP

class UlivestockMarketWidget_C : public UNaviSubGrid
{
    class UtargetStockWidget_tradeTarget_C* livestockMeter_Calf;                      // 0x0368 (size: 0x8)
    class UtargetStockWidget_tradeTarget_C* livestockMeter_Cow;                       // 0x0370 (size: 0x8)
    class UtargetStockWidget_tradeTarget_C* livestockMeter_horse;                     // 0x0378 (size: 0x8)
    class UtargetStockWidget_tradeTarget_C* livestockMeter_horse_1;                   // 0x0380 (size: 0x8)
    class UtargetStockWidget_tradeTarget_C* livestockMeter_Lamb;                      // 0x0388 (size: 0x8)
    class UtargetStockWidget_tradeTarget_C* livestockMeter_Lamb_1;                    // 0x0390 (size: 0x8)
    class UtargetStockWidget_tradeTarget_C* livestockMeter_sheep;                     // 0x0398 (size: 0x8)
    class UVerticalBox* main_vb;                                                      // 0x03A0 (size: 0x8)

    FNaviSubGridLayout ComputeSubGridLayout();
}; // Size: 0x3A8

#endif
