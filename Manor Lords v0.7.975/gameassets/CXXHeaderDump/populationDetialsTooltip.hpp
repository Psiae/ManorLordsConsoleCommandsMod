#ifndef UE4SS_SDK_populationDetialsTooltip_HPP
#define UE4SS_SDK_populationDetialsTooltip_HPP

class UpopulationDetialsTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UBorder* Border_Pattern;                                                    // 0x0268 (size: 0x8)
    class UTextBlock* families_peasant;                                               // 0x0270 (size: 0x8)
    class UImage* Image;                                                              // 0x0278 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0280 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0288 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0290 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0298 (size: 0x8)
    class UImage* Image_4;                                                            // 0x02A0 (size: 0x8)
    class UImage* Image_5;                                                            // 0x02A8 (size: 0x8)
    class UImage* Image_6;                                                            // 0x02B0 (size: 0x8)
    class UImage* Image_7;                                                            // 0x02B8 (size: 0x8)
    class UImage* Image_8;                                                            // 0x02C0 (size: 0x8)
    class UImage* Image_10;                                                           // 0x02C8 (size: 0x8)
    class UImage* Image_33;                                                           // 0x02D0 (size: 0x8)
    class UImage* Image_72;                                                           // 0x02D8 (size: 0x8)
    class UImage* Image_78;                                                           // 0x02E0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C;                                    // 0x02E8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_0;                                  // 0x02F0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_1;                                  // 0x02F8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_2;                                  // 0x0300 (size: 0x8)
    class UTextBlock* lv3fam_txt;                                                     // 0x0308 (size: 0x8)
    class UTextBlock* migrationTxt;                                                   // 0x0310 (size: 0x8)
    class UTextBlock* peasant_females;                                                // 0x0318 (size: 0x8)
    class UTextBlock* peasant_male;                                                   // 0x0320 (size: 0x8)
    class UTextBlock* retinue_num;                                                    // 0x0328 (size: 0x8)
    class UTextBlock* TextBlock_3;                                                    // 0x0330 (size: 0x8)
    class UTextBlock* TextBlock_7;                                                    // 0x0338 (size: 0x8)
    class UTextBlock* TextBlock_8;                                                    // 0x0340 (size: 0x8)
    class UTextBlock* TextBlock_10;                                                   // 0x0348 (size: 0x8)
    class UTextBlock* TextBlock_11;                                                   // 0x0350 (size: 0x8)
    class UTextBlock* totalPop_txt;                                                   // 0x0358 (size: 0x8)

    void updateFamilyDetailsForLv(class UTextBlock*& total_txt, class UTextBlock*& males_txt, class UTextBlock*& females_txt, class ARegion*& Region, int32 familyLevel);
    void Update Population Stats(class ARegion* Region);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_populationDetialsTooltip(int32 EntryPoint);
}; // Size: 0x360

#endif
