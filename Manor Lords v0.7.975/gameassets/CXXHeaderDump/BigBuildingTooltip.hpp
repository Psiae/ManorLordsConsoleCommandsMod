#ifndef UE4SS_SDK_BigBuildingTooltip_HPP
#define UE4SS_SDK_BigBuildingTooltip_HPP

class UBigBuildingTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* NewAnimation;                                             // 0x0268 (size: 0x8)
    class UHorizontalBox* area_hb;                                                    // 0x0270 (size: 0x8)
    class UVerticalBox* attributes_vb;                                                // 0x0278 (size: 0x8)
    class UTextBlock* buildingsRequriedTxt;                                           // 0x0280 (size: 0x8)
    class UImage* construction_separator;                                             // 0x0288 (size: 0x8)
    class UImage* construction_separator_1;                                           // 0x0290 (size: 0x8)
    class UImage* construction_separator_2;                                           // 0x0298 (size: 0x8)
    class UImage* construction_separator_3;                                           // 0x02A0 (size: 0x8)
    class UImage* construction_separator_4;                                           // 0x02A8 (size: 0x8)
    class UHorizontalBox* constructionCost_HB;                                        // 0x02B0 (size: 0x8)
    class URichTextBlock* descr_RichTxt;                                              // 0x02B8 (size: 0x8)
    class UImage* Image;                                                              // 0x02C0 (size: 0x8)
    class UImage* Image_5;                                                            // 0x02C8 (size: 0x8)
    class UImage* Image_67;                                                           // 0x02D0 (size: 0x8)
    class UImage* Image_320;                                                          // 0x02D8 (size: 0x8)
    class UTextBlock* name_txt;                                                       // 0x02E0 (size: 0x8)
    class UHorizontalBox* relocation_hb;                                              // 0x02E8 (size: 0x8)
    class UWrapBox* requirements_dev_wrapBox;                                         // 0x02F0 (size: 0x8)
    class UVerticalBox* requirements_vb;                                              // 0x02F8 (size: 0x8)
    class UWrapBox* requires_buildings_wrapBox;                                       // 0x0300 (size: 0x8)
    class UTextBlock* settlement_lv_txt;                                              // 0x0308 (size: 0x8)
    class UTextBlock* techRequirements_txt;                                           // 0x0310 (size: 0x8)
    class UTextBlock* TextBlock;                                                      // 0x0318 (size: 0x8)
    class UTextBlock* TextBlock_53;                                                   // 0x0320 (size: 0x8)
    class UTextBlock* TextBlock_561;                                                  // 0x0328 (size: 0x8)
    int32 buildingID;                                                                 // 0x0330 (size: 0x4)
    bool attributesVisible;                                                           // 0x0334 (size: 0x1)
    class ARegion* currentRegion;                                                     // 0x0338 (size: 0x8)
    int32 tech_requirements_counted;                                                  // 0x0340 (size: 0x4)

    void Construct();
    void ExecuteUbergraph_BigBuildingTooltip(int32 EntryPoint);
}; // Size: 0x344

#endif
