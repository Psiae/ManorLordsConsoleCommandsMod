#ifndef UE4SS_SDK_goodStat_HPP
#define UE4SS_SDK_goodStat_HPP

class UgoodStat_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* amtHigher;                                                // 0x02E8 (size: 0x8)
    class UWidgetAnimation* amtLower;                                                 // 0x02F0 (size: 0x8)
    class UHorizontalBox* crop_HB;                                                    // 0x02F8 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0300 (size: 0x8)
    class UImage* Image_44;                                                           // 0x0308 (size: 0x8)
    class UMD_NaviAutoTooltip_C* MD_NaviAutoTooltip;                                  // 0x0310 (size: 0x8)
    class UTextBlock* name_txt;                                                       // 0x0318 (size: 0x8)
    class UTextBlock* next_harvest_txt;                                               // 0x0320 (size: 0x8)
    class UHorizontalBox* stat_hb;                                                    // 0x0328 (size: 0x8)
    class UTextBlock* stat_num_txt;                                                   // 0x0330 (size: 0x8)
    int32 goodType;                                                                   // 0x0338 (size: 0x4)
    class ARegion* Region;                                                            // 0x0340 (size: 0x8)
    int32 lastUpdateAmt;                                                              // 0x0348 (size: 0x4)
    int32 amt;                                                                        // 0x034C (size: 0x4)
    bool bunchedGoods;                                                                // 0x0350 (size: 0x1)
    TArray<int32> goodTypes;                                                          // 0x0358 (size: 0x10)
    class UTexture2D* customIcon;                                                     // 0x0368 (size: 0x8)
    FString CustomName;                                                               // 0x0370 (size: 0x10)
    TArray<FGood> goods;                                                              // 0x0380 (size: 0x10)
    bool showNextHarvestForGood;                                                      // 0x0390 (size: 0x1)
    int32 previousDayValue;                                                           // 0x0394 (size: 0x4)
    int32 previousUpdateDay;                                                          // 0x0398 (size: 0x4)
    int32 currentDay;                                                                 // 0x039C (size: 0x4)
    double increase;                                                                  // 0x03A0 (size: 0x8)

    void retranslateBunchedTooltip();
    FText kThousands(int32 Value);
    void showNameTranslate();
    void setAmt(int32 amt);
    void updateNumber_setBunchedTooltip(bool minusReservation, bool updateWhenHidden, bool goodOverride, TArray<FGood>& goodsToDisplay);
    void Set Icon Name Tooltip if Not Bunched();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_goodStat(int32 EntryPoint);
}; // Size: 0x3A8

#endif
