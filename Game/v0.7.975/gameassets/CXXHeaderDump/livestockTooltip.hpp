#ifndef UE4SS_SDK_livestockTooltip_HPP
#define UE4SS_SDK_livestockTooltip_HPP

class UlivestockTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UBorder* Border;                                                            // 0x0268 (size: 0x8)
    class UTextBlock* goat_txt_5;                                                     // 0x0270 (size: 0x8)
    class UTextBlock* horses_txt_2;                                                   // 0x0278 (size: 0x8)
    class UImage* Image;                                                              // 0x0280 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0288 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0290 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0298 (size: 0x8)
    class UImage* Image_4;                                                            // 0x02A0 (size: 0x8)
    class UImage* Image_5;                                                            // 0x02A8 (size: 0x8)
    class UImage* Image_6;                                                            // 0x02B0 (size: 0x8)
    class UImage* Image_7;                                                            // 0x02B8 (size: 0x8)
    class UImage* Image_8;                                                            // 0x02C0 (size: 0x8)
    class UImage* Image_36;                                                           // 0x02C8 (size: 0x8)
    class UTextBlock* lamb_txt_4;                                                     // 0x02D0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_1;                                  // 0x02D8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_2;                                  // 0x02E0 (size: 0x8)
    class UTextBlock* mules_txt;                                                      // 0x02E8 (size: 0x8)
    class UlocalizedTextBox_C* name_txt;                                              // 0x02F0 (size: 0x8)
    class UlocalizedTextBox_C* name_txt_1;                                            // 0x02F8 (size: 0x8)
    class UTextBlock* oxen_txt_1;                                                     // 0x0300 (size: 0x8)
    class UTextBlock* sheep_txt_3;                                                    // 0x0308 (size: 0x8)
    class UHorizontalBox* stat_hb;                                                    // 0x0310 (size: 0x8)
    class UHorizontalBox* stat_hb_1;                                                  // 0x0318 (size: 0x8)
    class UHorizontalBox* stat_hb_2;                                                  // 0x0320 (size: 0x8)
    class UHorizontalBox* stat_hb_3;                                                  // 0x0328 (size: 0x8)
    class UHorizontalBox* stat_hb_4;                                                  // 0x0330 (size: 0x8)
    class UHorizontalBox* stat_hb_5;                                                  // 0x0338 (size: 0x8)
    class UTextBlock* stat_num_oxen;                                                  // 0x0340 (size: 0x8)
    class UTextBlock* stat_num_txt_goat;                                              // 0x0348 (size: 0x8)
    class UTextBlock* stat_num_txt_horses;                                            // 0x0350 (size: 0x8)
    class UTextBlock* stat_num_txt_lamb;                                              // 0x0358 (size: 0x8)
    class UTextBlock* stat_num_txt_mules;                                             // 0x0360 (size: 0x8)
    class UTextBlock* stat_num_txt_sheep;                                             // 0x0368 (size: 0x8)
    class UTextBlock* TextBlock;                                                      // 0x0370 (size: 0x8)
    class UTextBlock* TextBlock_53;                                                   // 0x0378 (size: 0x8)
    int32 pastureAnimals;                                                             // 0x0380 (size: 0x4)
    int32 stableAnimals;                                                              // 0x0384 (size: 0x4)
    int32 totalAnimals;                                                               // 0x0388 (size: 0x4)

    void setLivestockAmt(int32 Type, class UTextBlock* textWidget, class ARegion* Region, bool includeUnassignedTxt);
    void Update Livestock Stats(class ARegion* Region);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_livestockTooltip(int32 EntryPoint);
}; // Size: 0x38C

#endif
