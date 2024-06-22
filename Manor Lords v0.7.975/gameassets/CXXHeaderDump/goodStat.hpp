#ifndef UE4SS_SDK_goodStat_HPP
#define UE4SS_SDK_goodStat_HPP

class UgoodStat_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* amtHigher;                                                // 0x0268 (size: 0x8)
    class UWidgetAnimation* amtLower;                                                 // 0x0270 (size: 0x8)
    class UHorizontalBox* crop_HB;                                                    // 0x0278 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0280 (size: 0x8)
    class UImage* Image_44;                                                           // 0x0288 (size: 0x8)
    class UTextBlock* name_txt;                                                       // 0x0290 (size: 0x8)
    class UTextBlock* next_harvest_txt;                                               // 0x0298 (size: 0x8)
    class UHorizontalBox* stat_hb;                                                    // 0x02A0 (size: 0x8)
    class UTextBlock* stat_num_txt;                                                   // 0x02A8 (size: 0x8)
    int32 goodType;                                                                   // 0x02B0 (size: 0x4)
    class ARegion* Region;                                                            // 0x02B8 (size: 0x8)
    int32 lastUpdateAmt;                                                              // 0x02C0 (size: 0x4)
    int32 amt;                                                                        // 0x02C4 (size: 0x4)
    bool bunchedGoods;                                                                // 0x02C8 (size: 0x1)
    TArray<int32> goodTypes;                                                          // 0x02D0 (size: 0x10)
    class UTexture2D* customIcon;                                                     // 0x02E0 (size: 0x8)
    FString customName;                                                               // 0x02E8 (size: 0x10)
    TArray<FGood> goods;                                                              // 0x02F8 (size: 0x10)
    bool showNextHarvestForGood;                                                      // 0x0308 (size: 0x1)
    int32 previousDayValue;                                                           // 0x030C (size: 0x4)
    int32 previousUpdateDay;                                                          // 0x0310 (size: 0x4)
    int32 currentDay;                                                                 // 0x0314 (size: 0x4)
    float increase;                                                                   // 0x0318 (size: 0x4)

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
}; // Size: 0x31C

#endif
