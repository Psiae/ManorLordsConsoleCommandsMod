#ifndef UE4SS_SDK_ProducedGoodWidget_HPP
#define UE4SS_SDK_ProducedGoodWidget_HPP

class UProducedGoodWidget_C : public UUserWidget
{
    class UTextBlock* ItemAmountText;                                                 // 0x02D0 (size: 0x8)
    class UImage* itemIcon;                                                           // 0x02D8 (size: 0x8)
    int32 ItemType;                                                                   // 0x02E0 (size: 0x4)
    int32 Amount;                                                                     // 0x02E4 (size: 0x4)

    void UpdateGoodsValues();
}; // Size: 0x2E8

#endif
