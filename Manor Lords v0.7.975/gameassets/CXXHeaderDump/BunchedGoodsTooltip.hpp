#ifndef UE4SS_SDK_BunchedGoodsTooltip_HPP
#define UE4SS_SDK_BunchedGoodsTooltip_HPP

class UBunchedGoodsTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* NewAnimation;                                             // 0x0268 (size: 0x8)
    class UBorder* Border_Pattern;                                                    // 0x0270 (size: 0x8)
    class USizeBox* descr_sb;                                                         // 0x0278 (size: 0x8)
    class UVerticalBox* goods_VB;                                                     // 0x0280 (size: 0x8)
    class UImage* Image;                                                              // 0x0288 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0290 (size: 0x8)
    class UTextBlock* name_txt;                                                       // 0x0298 (size: 0x8)
    class URichTextBlock* RichTextBlock_96;                                           // 0x02A0 (size: 0x8)
    TArray<FGood> goods;                                                              // 0x02A8 (size: 0x10)
    FText label_translated;                                                           // 0x02B8 (size: 0x18)
    FText label_translated_descr;                                                     // 0x02D0 (size: 0x18)
    bool bunchedGoodsShowHarvests;                                                    // 0x02E8 (size: 0x1)
    class ARegion* Region;                                                            // 0x02F0 (size: 0x8)
    class UgoodStat_C* goodWidget;                                                    // 0x02F8 (size: 0x8)
    bool statsSpawned;                                                                // 0x0300 (size: 0x1)
    bool Minus Reservation;                                                           // 0x0301 (size: 0x1)

    void getGoodStatWidgetForGoodType(int32 Type, class UgoodStat_C*& statWidget);
    void Construct();
    void updateContents(bool updateIfHidden);
    void ExecuteUbergraph_BunchedGoodsTooltip(int32 EntryPoint);
}; // Size: 0x302

#endif
