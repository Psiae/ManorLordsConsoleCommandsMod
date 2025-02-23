#ifndef UE4SS_SDK_BigBuildingTooltip_HPP
#define UE4SS_SDK_BigBuildingTooltip_HPP

class UBigBuildingTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* NewAnimation;                                             // 0x02E8 (size: 0x8)
    class UHorizontalBox* area_hb;                                                    // 0x02F0 (size: 0x8)
    class UVerticalBox* attributes_vb;                                                // 0x02F8 (size: 0x8)
    class UTextBlock* buildingsRequriedTxt;                                           // 0x0300 (size: 0x8)
    class UImage* construction_separator;                                             // 0x0308 (size: 0x8)
    class UImage* construction_separator_1;                                           // 0x0310 (size: 0x8)
    class UImage* construction_separator_2;                                           // 0x0318 (size: 0x8)
    class UImage* construction_separator_3;                                           // 0x0320 (size: 0x8)
    class UImage* construction_separator_4;                                           // 0x0328 (size: 0x8)
    class UHorizontalBox* constructionCost_HB;                                        // 0x0330 (size: 0x8)
    class URichTextBlock* descr_RichTxt;                                              // 0x0338 (size: 0x8)
    class UImage* Image;                                                              // 0x0340 (size: 0x8)
    class UImage* Image_5;                                                            // 0x0348 (size: 0x8)
    class UImage* Image_67;                                                           // 0x0350 (size: 0x8)
    class UImage* Image_320;                                                          // 0x0358 (size: 0x8)
    class UTextBlock* name_txt;                                                       // 0x0360 (size: 0x8)
    class UHorizontalBox* relocation_hb;                                              // 0x0368 (size: 0x8)
    class UWrapBox* requirements_dev_wrapBox;                                         // 0x0370 (size: 0x8)
    class UVerticalBox* requirements_VB;                                              // 0x0378 (size: 0x8)
    class UWrapBox* requires_buildings_wrapBox;                                       // 0x0380 (size: 0x8)
    class UTextBlock* settlement_lv_txt;                                              // 0x0388 (size: 0x8)
    class UTextBlock* techRequirements_txt;                                           // 0x0390 (size: 0x8)
    class UTextBlock* TextBlock;                                                      // 0x0398 (size: 0x8)
    class UTextBlock* TextBlock_53;                                                   // 0x03A0 (size: 0x8)
    class UTextBlock* TextBlock_561;                                                  // 0x03A8 (size: 0x8)
    int32 buildingID;                                                                 // 0x03B0 (size: 0x4)
    bool attributesVisible;                                                           // 0x03B4 (size: 0x1)
    class ARegion* currentRegion;                                                     // 0x03B8 (size: 0x8)
    int32 tech_requirements_counted;                                                  // 0x03C0 (size: 0x4)

    void Construct();
    void ExecuteUbergraph_BigBuildingTooltip(int32 EntryPoint);
}; // Size: 0x3C4

#endif
