#ifndef UE4SS_SDK_regionProductionPanel_Widget_HPP
#define UE4SS_SDK_regionProductionPanel_Widget_HPP

class UregionProductionPanel_Widget_C : public URegionProductionPanel
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0618 (size: 0x8)
    class UlocalizedTextBox_C* BalanceText;                                           // 0x0620 (size: 0x8)
    class UlocalizedTextBox_C* ConsumedText;                                          // 0x0628 (size: 0x8)
    class URetainerBox* LinesRB;                                                      // 0x0630 (size: 0x8)
    class URetainerBox* PlotsRB;                                                      // 0x0638 (size: 0x8)
    class UlocalizedTextBox_C* ProducedText;                                          // 0x0640 (size: 0x8)
    class UlocalizedTextBox_C* ProducedText_1;                                        // 0x0648 (size: 0x8)
    class UregionProductionStockEntry_Widget_C* RegionProductionStockEntry;           // 0x0650 (size: 0x8)
    class UregionProductionStockEntry_Widget_C* RegionProductionStockEntry_1;         // 0x0658 (size: 0x8)
    class UregionProductionStockEntry_Widget_C* RegionProductionStockEntry_2;         // 0x0660 (size: 0x8)
    class UregionProductionStockEntry_Widget_C* RegionProductionStockEntry_3;         // 0x0668 (size: 0x8)
    class UregionProductionStockEntry_Widget_C* RegionProductionStockEntry_4;         // 0x0670 (size: 0x8)
    class UregionProductionStockEntry_Widget_C* RegionProductionStockEntry_5;         // 0x0678 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_regionProductionPanel_Widget(int32 EntryPoint);
}; // Size: 0x680

#endif
