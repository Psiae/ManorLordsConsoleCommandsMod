#ifndef UE4SS_SDK_BunchedGoodsTooltip_HPP
#define UE4SS_SDK_BunchedGoodsTooltip_HPP

class UBunchedGoodsTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* NewAnimation;                                             // 0x02E8 (size: 0x8)
    class UBorder* Border_Pattern;                                                    // 0x02F0 (size: 0x8)
    class USizeBox* descr_sb;                                                         // 0x02F8 (size: 0x8)
    class UVerticalBox* goods_VB;                                                     // 0x0300 (size: 0x8)
    class UImage* Image;                                                              // 0x0308 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0310 (size: 0x8)
    class UTextBlock* name_txt;                                                       // 0x0318 (size: 0x8)
    class URichTextBlock* RichTextBlock_96;                                           // 0x0320 (size: 0x8)
    FText label_translated;                                                           // 0x0328 (size: 0x10)
    FText label_translated_descr;                                                     // 0x0338 (size: 0x10)
    bool bunchedGoodsShowHarvests;                                                    // 0x0348 (size: 0x1)
    class ARegion* Region;                                                            // 0x0350 (size: 0x8)
    class UgoodStat_C* goodWidget;                                                    // 0x0358 (size: 0x8)
    bool Minus Reservation;                                                           // 0x0360 (size: 0x1)

    void updateTooltipContents(bool updateIfHidden, const TArray<FGood>& toDisplay, bool regionChanged);
    void spawnGoodStatWidgetsForGoodTypes(TArray<int32>& goodTypes);
    void getGoodStatWidgetForGoodType(int32 Type, class UgoodStat_C*& statWidget);
    void Construct();
    void ExecuteUbergraph_BunchedGoodsTooltip(int32 EntryPoint);
}; // Size: 0x361

#endif
