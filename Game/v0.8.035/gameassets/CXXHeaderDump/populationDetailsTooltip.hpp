#ifndef UE4SS_SDK_populationDetailsTooltip_HPP
#define UE4SS_SDK_populationDetailsTooltip_HPP

class UpopulationDetailsTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UHorizontalBox* ARTISANS_HB;                                                // 0x02D8 (size: 0x8)
    class UHorizontalBox* BURGHERS_HB;                                                // 0x02E0 (size: 0x8)
    class URichTextBlock* descr_RichTxt;                                              // 0x02E8 (size: 0x8)
    class UTextBlock* families_peasant;                                               // 0x02F0 (size: 0x8)
    class UTextBlock* families_peasant_1;                                             // 0x02F8 (size: 0x8)
    class URichTextBlock* GrowthEffectNames_RichText;                                 // 0x0300 (size: 0x8)
    class URichTextBlock* GrowthEffectValues_RichText;                                // 0x0308 (size: 0x8)
    class UHorizontalBox* Homeless_HB;                                                // 0x0310 (size: 0x8)
    class UImage* homeless_warning;                                                   // 0x0318 (size: 0x8)
    class UImage* Image;                                                              // 0x0320 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0328 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0330 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0338 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0340 (size: 0x8)
    class UImage* Image_5;                                                            // 0x0348 (size: 0x8)
    class UImage* Image_6;                                                            // 0x0350 (size: 0x8)
    class UImage* Image_7;                                                            // 0x0358 (size: 0x8)
    class UImage* Image_8;                                                            // 0x0360 (size: 0x8)
    class UImage* Image_9;                                                            // 0x0368 (size: 0x8)
    class UImage* Image_11;                                                           // 0x0370 (size: 0x8)
    class UImage* Image_12;                                                           // 0x0378 (size: 0x8)
    class UImage* Image_13;                                                           // 0x0380 (size: 0x8)
    class UImage* Image_72;                                                           // 0x0388 (size: 0x8)
    class UImage* Image_78;                                                           // 0x0390 (size: 0x8)
    class UImage* Image_86;                                                           // 0x0398 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C;                                    // 0x03A0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_0;                                  // 0x03A8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_1;                                  // 0x03B0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_2;                                  // 0x03B8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_3;                                  // 0x03C0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_4;                                  // 0x03C8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_5;                                  // 0x03D0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_6;                                  // 0x03D8 (size: 0x8)
    class UTextBlock* lv3fam_txt;                                                     // 0x03E0 (size: 0x8)
    class UTextBlock* migrationTxt_1;                                                 // 0x03E8 (size: 0x8)
    class UHorizontalBox* OTHERS_HB;                                                  // 0x03F0 (size: 0x8)
    class UTextBlock* peasant_females;                                                // 0x03F8 (size: 0x8)
    class UTextBlock* peasant_females_1;                                              // 0x0400 (size: 0x8)
    class UTextBlock* peasant_male;                                                   // 0x0408 (size: 0x8)
    class UTextBlock* peasant_male_1;                                                 // 0x0410 (size: 0x8)
    class UHorizontalBox* PEASANTS_HB;                                                // 0x0418 (size: 0x8)
    class UPlotDetailsSubsection_C* PlotDetailsSubsection;                            // 0x0420 (size: 0x8)
    class UImage* popIcon;                                                            // 0x0428 (size: 0x8)
    class UImage* popIcon_1;                                                          // 0x0430 (size: 0x8)
    class UImage* popIcon_2;                                                          // 0x0438 (size: 0x8)
    class UHorizontalBox* Retainers_HB;                                               // 0x0440 (size: 0x8)
    class UTextBlock* retinue_num;                                                    // 0x0448 (size: 0x8)
    class UImage* SeparatorImage_11;                                                  // 0x0450 (size: 0x8)
    class UTextBlock* TextBlock_3;                                                    // 0x0458 (size: 0x8)
    class UTextBlock* TextBlock_7;                                                    // 0x0460 (size: 0x8)
    class UTextBlock* TextBlock_8;                                                    // 0x0468 (size: 0x8)
    class UTextBlock* TextBlock_10;                                                   // 0x0470 (size: 0x8)
    class UTextBlock* TextBlock_11;                                                   // 0x0478 (size: 0x8)
    class UTextBlock* total_pop_number_txt;                                           // 0x0480 (size: 0x8)
    class UTextBlock* total_pop_number_txt_1;                                         // 0x0488 (size: 0x8)
    class UTextBlock* total_pop_number_txt_2;                                         // 0x0490 (size: 0x8)
    class UTextBlock* totalPop_txt;                                                   // 0x0498 (size: 0x8)
    class UTextBlock* totalPop_txt_1;                                                 // 0x04A0 (size: 0x8)
    class UWidget_Frame_Scroll_Simple_C* Widget_Frame_Scroll_Simple;                  // 0x04A8 (size: 0x8)
    class UWidget_HeaderBg_C* Widget_HeaderBg;                                        // 0x04B0 (size: 0x8)

    void UpdateGrowthModifierDetails(class ARegion* Target);
    void updateFamilyDetailsForLv(class UTextBlock* total_txt, class UTextBlock* males_txt, class UTextBlock* females_txt, class ARegion* Region, int32 familyLevel, class UWidget* SectionHorizontalBar);
    void Update Population Stats(class ARegion* Region);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_populationDetailsTooltip(int32 EntryPoint);
}; // Size: 0x4B8

#endif
