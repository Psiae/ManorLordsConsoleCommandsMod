#ifndef UE4SS_SDK_squadStats_HPP
#define UE4SS_SDK_squadStats_HPP

class UsquadStats_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Image;                                                              // 0x02E8 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02F0 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02F8 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0300 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0308 (size: 0x8)
    class UImage* Image_5;                                                            // 0x0310 (size: 0x8)
    class UImage* Image_6;                                                            // 0x0318 (size: 0x8)
    class UImage* Image_7;                                                            // 0x0320 (size: 0x8)
    class UImage* Image_8;                                                            // 0x0328 (size: 0x8)
    class UImage* Image_9;                                                            // 0x0330 (size: 0x8)
    class UImage* Image_11;                                                           // 0x0338 (size: 0x8)
    class UImage* Image_12;                                                           // 0x0340 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_0;                                  // 0x0348 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_1;                                  // 0x0350 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_2;                                  // 0x0358 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_3;                                  // 0x0360 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_4;                                  // 0x0368 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_5;                                  // 0x0370 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_6;                                  // 0x0378 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_7;                                  // 0x0380 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_8;                                  // 0x0388 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_9;                                  // 0x0390 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_10;                                 // 0x0398 (size: 0x8)
    class USizeBox* SizeBox_7;                                                        // 0x03A0 (size: 0x8)
    class USizeBox* SizeBox_8;                                                        // 0x03A8 (size: 0x8)
    class UTextBlock* stat_antiarmour;                                                // 0x03B0 (size: 0x8)
    class UTextBlock* stat_anticharge;                                                // 0x03B8 (size: 0x8)
    class UHorizontalBox* stat_att_hb;                                                // 0x03C0 (size: 0x8)
    class UHorizontalBox* stat_att_hb_1;                                              // 0x03C8 (size: 0x8)
    class UHorizontalBox* stat_att_hb_2;                                              // 0x03D0 (size: 0x8)
    class UHorizontalBox* stat_att_hb_3;                                              // 0x03D8 (size: 0x8)
    class UTextBlock* stat_att_txt;                                                   // 0x03E0 (size: 0x8)
    class UTextBlock* stat_att_txt_1;                                                 // 0x03E8 (size: 0x8)
    class UTextBlock* stat_block;                                                     // 0x03F0 (size: 0x8)
    class UTextBlock* stat_charge;                                                    // 0x03F8 (size: 0x8)
    class UTextBlock* stat_def;                                                       // 0x0400 (size: 0x8)
    class UHorizontalBox* stat_Def_hb;                                                // 0x0408 (size: 0x8)
    class UHorizontalBox* stat_Def_hb_1;                                              // 0x0410 (size: 0x8)
    class UHorizontalBox* stat_Def_hb_2;                                              // 0x0418 (size: 0x8)
    class UHorizontalBox* stat_Def_hb_3;                                              // 0x0420 (size: 0x8)
    class UHorizontalBox* stat_Def_hb_4;                                              // 0x0428 (size: 0x8)
    class UHorizontalBox* stat_Def_hb_5;                                              // 0x0430 (size: 0x8)
    class UHorizontalBox* stat_Def_hb_6;                                              // 0x0438 (size: 0x8)
    class UTextBlock* stat_meleerange;                                                // 0x0440 (size: 0x8)
    class UTextBlock* stat_missilerange;                                              // 0x0448 (size: 0x8)
    class UTextBlock* stat_morale;                                                    // 0x0450 (size: 0x8)
    class UTextBlock* stat_rangedatt;                                                 // 0x0458 (size: 0x8)
    class UTextBlock* stat_speed;                                                     // 0x0460 (size: 0x8)
    class UVerticalBox* stats_melee;                                                  // 0x0468 (size: 0x8)
    class UVerticalBox* stats_ranged;                                                 // 0x0470 (size: 0x8)
    class UHorizontalBox* training_hb_4;                                              // 0x0478 (size: 0x8)
    FUnitStat unitStats;                                                              // 0x0480 (size: 0x48)
    double meleeTraining;                                                             // 0x04C8 (size: 0x8)

    void updateStats();
    void Construct();
    void ExecuteUbergraph_squadStats(int32 EntryPoint);
}; // Size: 0x4D0

#endif