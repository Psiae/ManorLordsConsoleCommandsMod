#ifndef UE4SS_SDK_GoodProductionTrackerWidget_HPP
#define UE4SS_SDK_GoodProductionTrackerWidget_HPP

class UGoodProductionTrackerWidget_C : public UUserWidget
{
    class UDecoratedFrameWidget_C* DecoratedFrameWidget;                              // 0x02D0 (size: 0x8)
    class UTextBlock* duration_text;                                                  // 0x02D8 (size: 0x8)
    class UHorizontalBox* GoodProducedCountBox;                                       // 0x02E0 (size: 0x8)
    class UlocalizedTextBox_C* GoodsProducedText;                                     // 0x02E8 (size: 0x8)
    class UlocalizedTextBox_C* GoodsProducedText_1;                                   // 0x02F0 (size: 0x8)
    class UHorizontalBox* GoodsProducedTitle;                                         // 0x02F8 (size: 0x8)
    class UHorizontalBox* NoGoodsProducedTitle;                                       // 0x0300 (size: 0x8)
    class UImage* ProductionIcon;                                                     // 0x0308 (size: 0x8)

    void SetupGoodsTitleBar(bool bGoodProduced, bool bSeasonal);
    void ClearProducedGoods();
    void GetGoodProducedCountBox(class UHorizontalBox*& Horizontal Box);
}; // Size: 0x310

#endif
