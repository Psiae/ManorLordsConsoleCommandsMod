#ifndef UE4SS_SDK_livestockMarketWidget_HPP
#define UE4SS_SDK_livestockMarketWidget_HPP

class UlivestockMarketWidget_C : public UNaviSubGrid
{
    class UtargetStockWidget_tradeTarget_C* livestockMeter_horse;                     // 0x0348 (size: 0x8)
    class UtargetStockWidget_tradeTarget_C* livestockMeter_horse_1;                   // 0x0350 (size: 0x8)
    class UtargetStockWidget_tradeTarget_C* livestockMeter_Lamb;                      // 0x0358 (size: 0x8)
    class UtargetStockWidget_tradeTarget_C* livestockMeter_Lamb_1;                    // 0x0360 (size: 0x8)
    class UtargetStockWidget_tradeTarget_C* livestockMeter_sheep;                     // 0x0368 (size: 0x8)
    class UVerticalBox* main_vb;                                                      // 0x0370 (size: 0x8)

    FNaviSubGridLayout ComputeSubGridLayout();
}; // Size: 0x378

#endif
