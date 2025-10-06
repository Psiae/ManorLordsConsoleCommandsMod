#ifndef UE4SS_SDK_regionProductionStockEntry_Widget_HPP
#define UE4SS_SDK_regionProductionStockEntry_Widget_HPP

class UregionProductionStockEntry_Widget_C : public URegionProductionStockEntry
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    class UWidgetAnimation* Select;                                                   // 0x0308 (size: 0x8)
    class URichTextBlock* BalanceText;                                                // 0x0310 (size: 0x8)
    class URichTextBlock* ConsumedText;                                               // 0x0318 (size: 0x8)
    class URichTextBlock* CurrentAmountText;                                          // 0x0320 (size: 0x8)
    class UBorder* highlightBorder;                                                   // 0x0328 (size: 0x8)
    class UImage* ItemImage;                                                          // 0x0330 (size: 0x8)
    class URichTextBlock* ItemName;                                                   // 0x0338 (size: 0x8)
    class UButton* MainButton;                                                        // 0x0340 (size: 0x8)
    class URichTextBlock* ProducedText;                                               // 0x0348 (size: 0x8)
    class UDataTable* ItemsDT;                                                        // 0x0350 (size: 0x8)
    bool IsTracked;                                                                   // 0x0358 (size: 0x1)
    class UCustomTooltip_C* ToolTip;                                                  // 0x0360 (size: 0x8)

    void UpdateConsumedText(int32 InCount);
    void UpdateProducedText(int32 InCount);
    void UpdateBalanceText(int32 InDelta);
    void InitialiseFromGood(const FGood& InGood, const bool InIsTracked);
    void UpdateDelta(const int32 InDelta, const int32 InTotal, const int32 InProduced, const int32 InConsumed);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__regionProductionStockEntry_Widget_MainButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void SetSelected(bool animate);
    void ExecuteUbergraph_regionProductionStockEntry_Widget(int32 EntryPoint);
}; // Size: 0x368

#endif
