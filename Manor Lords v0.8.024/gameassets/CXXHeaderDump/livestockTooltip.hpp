#ifndef UE4SS_SDK_livestockTooltip_HPP
#define UE4SS_SDK_livestockTooltip_HPP

class UlivestockTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UBorder* Border;                                                            // 0x02E8 (size: 0x8)
    class UTextBlock* goat_txt_5;                                                     // 0x02F0 (size: 0x8)
    class UTextBlock* horses_txt_2;                                                   // 0x02F8 (size: 0x8)
    class UImage* Image;                                                              // 0x0300 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0308 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0310 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0318 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0320 (size: 0x8)
    class UImage* Image_5;                                                            // 0x0328 (size: 0x8)
    class UImage* Image_6;                                                            // 0x0330 (size: 0x8)
    class UImage* Image_7;                                                            // 0x0338 (size: 0x8)
    class UImage* Image_8;                                                            // 0x0340 (size: 0x8)
    class UImage* Image_36;                                                           // 0x0348 (size: 0x8)
    class UTextBlock* lamb_txt_4;                                                     // 0x0350 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_1;                                  // 0x0358 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_2;                                  // 0x0360 (size: 0x8)
    class UTextBlock* mules_txt;                                                      // 0x0368 (size: 0x8)
    class UlocalizedTextBox_C* name_txt;                                              // 0x0370 (size: 0x8)
    class UlocalizedTextBox_C* name_txt_1;                                            // 0x0378 (size: 0x8)
    class UTextBlock* oxen_txt_1;                                                     // 0x0380 (size: 0x8)
    class UTextBlock* sheep_txt_3;                                                    // 0x0388 (size: 0x8)
    class UHorizontalBox* stat_hb;                                                    // 0x0390 (size: 0x8)
    class UHorizontalBox* stat_hb_1;                                                  // 0x0398 (size: 0x8)
    class UHorizontalBox* stat_hb_2;                                                  // 0x03A0 (size: 0x8)
    class UHorizontalBox* stat_hb_3;                                                  // 0x03A8 (size: 0x8)
    class UHorizontalBox* stat_hb_4;                                                  // 0x03B0 (size: 0x8)
    class UHorizontalBox* stat_hb_5;                                                  // 0x03B8 (size: 0x8)
    class UTextBlock* stat_num_oxen;                                                  // 0x03C0 (size: 0x8)
    class UTextBlock* stat_num_txt_goat;                                              // 0x03C8 (size: 0x8)
    class UTextBlock* stat_num_txt_horses;                                            // 0x03D0 (size: 0x8)
    class UTextBlock* stat_num_txt_lamb;                                              // 0x03D8 (size: 0x8)
    class UTextBlock* stat_num_txt_mules;                                             // 0x03E0 (size: 0x8)
    class UTextBlock* stat_num_txt_sheep;                                             // 0x03E8 (size: 0x8)
    class UTextBlock* TextBlock;                                                      // 0x03F0 (size: 0x8)
    class UTextBlock* TextBlock_53;                                                   // 0x03F8 (size: 0x8)
    int32 pastureAnimals;                                                             // 0x0400 (size: 0x4)
    int32 stableAnimals;                                                              // 0x0404 (size: 0x4)
    int32 totalAnimals;                                                               // 0x0408 (size: 0x4)

    void setLivestockAmt(int32 Type, class UTextBlock* TextWidget, class ARegion* Region, bool includeUnassignedTxt);
    void Update Livestock Stats(class ARegion* Region);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_livestockTooltip(int32 EntryPoint);
}; // Size: 0x40C

#endif
