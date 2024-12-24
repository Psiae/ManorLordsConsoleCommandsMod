#ifndef UE4SS_SDK_transactionLog_GoodIcon_HPP
#define UE4SS_SDK_transactionLog_GoodIcon_HPP

class UtransactionLog_GoodIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Image_39;                                                           // 0x02E8 (size: 0x8)
    class UImage* Image_138;                                                          // 0x02F0 (size: 0x8)
    class UTextBlock* TextBlock_numberOfGoods;                                        // 0x02F8 (size: 0x8)
    class UTextBlock* TextBlock_value;                                                // 0x0300 (size: 0x8)

    void updateIconAndTradeValues(int32 goodType, int32 amtTraded, int32 tradeValue);
    void Construct();
    void ExecuteUbergraph_transactionLog_GoodIcon(int32 EntryPoint);
}; // Size: 0x308

#endif
