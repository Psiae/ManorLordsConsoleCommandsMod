#ifndef UE4SS_SDK_BigBuildingTooltip_HPP
#define UE4SS_SDK_BigBuildingTooltip_HPP

class UBigBuildingTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UWidgetAnimation* NewAnimation;                                             // 0x02D8 (size: 0x8)
    class UWrapBox* Affinities_WrapBox;                                               // 0x02E0 (size: 0x8)
    class UHorizontalBox* area_hb;                                                    // 0x02E8 (size: 0x8)
    class UVerticalBox* attributes_vb;                                                // 0x02F0 (size: 0x8)
    class UImage* BorderExterior;                                                     // 0x02F8 (size: 0x8)
    class UImage* BorderInterior;                                                     // 0x0300 (size: 0x8)
    class UImage* construction_separator;                                             // 0x0308 (size: 0x8)
    class UImage* construction_separator_2;                                           // 0x0310 (size: 0x8)
    class UHorizontalBox* constructionCost_HB;                                        // 0x0318 (size: 0x8)
    class UImage* Decor_Bottom;                                                       // 0x0320 (size: 0x8)
    class UImage* Decor_Top;                                                          // 0x0328 (size: 0x8)
    class URichTextBlock* descr_RichTxt;                                              // 0x0330 (size: 0x8)
    class UImage* Image;                                                              // 0x0338 (size: 0x8)
    class UImage* Image_5;                                                            // 0x0340 (size: 0x8)
    class UImage* Image_67;                                                           // 0x0348 (size: 0x8)
    class UImage* Image_334;                                                          // 0x0350 (size: 0x8)
    class UTextBlock* name_txt;                                                       // 0x0358 (size: 0x8)
    class UHorizontalBox* relocation_hb;                                              // 0x0360 (size: 0x8)
    class UTextBlock* TextBlock;                                                      // 0x0368 (size: 0x8)
    class UTextBlock* TextBlock_53;                                                   // 0x0370 (size: 0x8)
    class UTextBlock* TextBlock_561;                                                  // 0x0378 (size: 0x8)
    int32 buildingID;                                                                 // 0x0380 (size: 0x4)
    bool attributesVisible;                                                           // 0x0384 (size: 0x1)
    class ARegion* currentRegion;                                                     // 0x0388 (size: 0x8)
    int32 tech_requirements_failed_num;                                               // 0x0390 (size: 0x4)
    TArray<FGood> RequiredConstructionGoods;                                          // 0x0398 (size: 0x10)
    TArray<class UgoodStat_C*> ShownConstructionGoodStats;                            // 0x03A8 (size: 0x10)

    void UpdateStatusOfRequiredGoods();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_BigBuildingTooltip(int32 EntryPoint);
}; // Size: 0x3B8

#endif
