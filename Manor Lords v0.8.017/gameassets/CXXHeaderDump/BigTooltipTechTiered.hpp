#ifndef UE4SS_SDK_BigTooltipTechTiered_HPP
#define UE4SS_SDK_BigTooltipTechTiered_HPP

class UBigTooltipTechTiered_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* NewAnimation;                                             // 0x02E8 (size: 0x8)
    class UImage* construction_separator;                                             // 0x02F0 (size: 0x8)
    class UHorizontalBox* cost_parts_hb;                                              // 0x02F8 (size: 0x8)
    class UHorizontalBox* cost_stone_hb;                                              // 0x0300 (size: 0x8)
    class UHorizontalBox* cost_timber_hb;                                             // 0x0308 (size: 0x8)
    class UHorizontalBox* cost_tools_hb;                                              // 0x0310 (size: 0x8)
    class UTextBlock* cost_txt;                                                       // 0x0318 (size: 0x8)
    class UTextBlock* cost_txt_1;                                                     // 0x0320 (size: 0x8)
    class URichTextBlock* descr_RichTxt;                                              // 0x0328 (size: 0x8)
    class UImage* Image;                                                              // 0x0330 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0338 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0340 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0348 (size: 0x8)
    class UImage* Image_11;                                                           // 0x0350 (size: 0x8)
    class UImage* Image_105;                                                          // 0x0358 (size: 0x8)
    class UImage* Image_146;                                                          // 0x0360 (size: 0x8)
    class UTextBlock* name_txt;                                                       // 0x0368 (size: 0x8)
    class UTextBlock* parts_txt;                                                      // 0x0370 (size: 0x8)
    class UTextBlock* stone_txt;                                                      // 0x0378 (size: 0x8)
    class UTextBlock* tier_txt;                                                       // 0x0380 (size: 0x8)
    class UTextBlock* timber_txt;                                                     // 0x0388 (size: 0x8)
    class UTextBlock* tools_txt;                                                      // 0x0390 (size: 0x8)
    int32 techID;                                                                     // 0x0398 (size: 0x4)
    int32 currentTier;                                                                // 0x039C (size: 0x4)
    int32 cost;                                                                       // 0x03A0 (size: 0x4)
    bool showCost;                                                                    // 0x03A4 (size: 0x1)

    void Construct();
    void updateContents();
    void ExecuteUbergraph_BigTooltipTechTiered(int32 EntryPoint);
}; // Size: 0x3A5

#endif
