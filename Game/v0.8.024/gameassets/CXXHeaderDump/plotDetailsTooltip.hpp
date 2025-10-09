#ifndef UE4SS_SDK_plotDetailsTooltip_HPP
#define UE4SS_SDK_plotDetailsTooltip_HPP

class UplotDetailsTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UBorder* Border_Pattern;                                                    // 0x02E8 (size: 0x8)
    class URichTextBlock* descr_text;                                                 // 0x02F0 (size: 0x8)
    class UImage* img_constructed;                                                    // 0x02F8 (size: 0x8)
    class UImage* img_occupied;                                                       // 0x0300 (size: 0x8)
    class UImage* img_occupied_1;                                                     // 0x0308 (size: 0x8)
    class UImage* img_occupied_2;                                                     // 0x0310 (size: 0x8)
    class UImage* img_occupied_3;                                                     // 0x0318 (size: 0x8)
    class UImage* img_seperator;                                                      // 0x0320 (size: 0x8)
    class UImage* img_seperator_2;                                                    // 0x0328 (size: 0x8)
    class UImage* img_under_construction;                                             // 0x0330 (size: 0x8)
    class UlocalizedTextBox_C* ltb_constructed;                                       // 0x0338 (size: 0x8)
    class UlocalizedTextBox_C* ltb_occupied;                                          // 0x0340 (size: 0x8)
    class UlocalizedTextBox_C* ltb_under_construction;                                // 0x0348 (size: 0x8)
    class URichTextBlock* rtb_header;                                                 // 0x0350 (size: 0x8)
    class UTextBlock* tb_num_constructed;                                             // 0x0358 (size: 0x8)
    class UTextBlock* tb_num_occupied;                                                // 0x0360 (size: 0x8)
    class UTextBlock* tb_num_occupied_lvl1;                                           // 0x0368 (size: 0x8)
    class UTextBlock* tb_num_occupied_lvl2;                                           // 0x0370 (size: 0x8)
    class UTextBlock* tb_num_occupied_lvl3;                                           // 0x0378 (size: 0x8)
    class UTextBlock* tb_num_under_construction;                                      // 0x0380 (size: 0x8)

    void updatePlotDetails(class ARegion* Region);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_plotDetailsTooltip(int32 EntryPoint);
}; // Size: 0x388

#endif
