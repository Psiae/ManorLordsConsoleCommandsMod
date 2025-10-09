#ifndef UE4SS_SDK_squadTooltip_HPP
#define UE4SS_SDK_squadTooltip_HPP

class UsquadTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* advantage_icon;                                                     // 0x02E8 (size: 0x8)
    class UTextBlock* advantage_title;                                                // 0x02F0 (size: 0x8)
    class UTextBlock* advantage_txt;                                                  // 0x02F8 (size: 0x8)
    class UVerticalBox* advantage_VB;                                                 // 0x0300 (size: 0x8)
    class UHorizontalBox* armor_HB;                                                   // 0x0308 (size: 0x8)
    class UImage* CoatOfArms;                                                         // 0x0310 (size: 0x8)
    class UImage* construction_separator;                                             // 0x0318 (size: 0x8)
    class UequipmentStat_C* equipmentStat;                                            // 0x0320 (size: 0x8)
    class UequipmentStat_C* equipmentStat_1;                                          // 0x0328 (size: 0x8)
    class UequipmentStat_C* equipmentStat_2;                                          // 0x0330 (size: 0x8)
    class UequipmentStat_C* equipmentStat_3;                                          // 0x0338 (size: 0x8)
    class UequipmentStat_C* equipmentStat_4;                                          // 0x0340 (size: 0x8)
    class UequipmentStat_C* equipmentStat_5;                                          // 0x0348 (size: 0x8)
    class UequipmentStat_C* equipmentStat_6;                                          // 0x0350 (size: 0x8)
    class UequipmentStat_C* equipmentStat_7;                                          // 0x0358 (size: 0x8)
    class UequipmentStat_C* equipmentStat_8;                                          // 0x0360 (size: 0x8)
    class UWrapBox* equipmentStats_wrap;                                              // 0x0368 (size: 0x8)
    class USizeBox* extended_details_sb;                                              // 0x0370 (size: 0x8)
    class UImage* fatigue_icon;                                                       // 0x0378 (size: 0x8)
    class UProgressBar* fatigue_progress_1;                                           // 0x0380 (size: 0x8)
    class USizeBox* fatigue_sb_1;                                                     // 0x0388 (size: 0x8)
    class UBorder* header_border;                                                     // 0x0390 (size: 0x8)
    class UImage* header_separator;                                                   // 0x0398 (size: 0x8)
    class UImage* icon_stance;                                                        // 0x03A0 (size: 0x8)
    class UImage* Image;                                                              // 0x03A8 (size: 0x8)
    class UImage* Image_25;                                                           // 0x03B0 (size: 0x8)
    class UImage* Image_253;                                                          // 0x03B8 (size: 0x8)
    class UImage* mercBannerImg;                                                      // 0x03C0 (size: 0x8)
    class UVerticalBox* morale_factors_vb;                                            // 0x03C8 (size: 0x8)
    class UVerticalBox* morale_factors_vb_1;                                          // 0x03D0 (size: 0x8)
    class UProgressBar* morale_progress;                                              // 0x03D8 (size: 0x8)
    class USizeBox* morale_sb;                                                        // 0x03E0 (size: 0x8)
    class UImage* moraleIcon;                                                         // 0x03E8 (size: 0x8)
    class UTextBlock* name_txt;                                                       // 0x03F0 (size: 0x8)
    class UTextBlock* name_txt_1;                                                     // 0x03F8 (size: 0x8)
    class UTextBlock* name_txt_4;                                                     // 0x0400 (size: 0x8)
    class UImage* overlay_decor_img;                                                  // 0x0408 (size: 0x8)
    class UVerticalBox* potentialFactors_VB;                                          // 0x0410 (size: 0x8)
    class UpotentialFactorWidget_C* potentialFactorWidget;                            // 0x0418 (size: 0x8)
    class UVerticalBox* rallyingStats_vb;                                             // 0x0420 (size: 0x8)
    class UTextBlock* recruitmentStats_recruits;                                      // 0x0428 (size: 0x8)
    class UBorder* soldierCount_border;                                               // 0x0430 (size: 0x8)
    class UImage* Spacer_1;                                                           // 0x0438 (size: 0x8)
    class UImage* sprintMode_icon;                                                    // 0x0440 (size: 0x8)
    class UImage* squad_icon;                                                         // 0x0448 (size: 0x8)
    class UTextBlock* squad_status_txt;                                               // 0x0450 (size: 0x8)
    class UTextBlock* squadOriginsOrOwnerTxt;                                         // 0x0458 (size: 0x8)
    class UsquadStats_C* squadStats;                                                  // 0x0460 (size: 0x8)
    class UHorizontalBox* stance_details;                                             // 0x0468 (size: 0x8)
    class UTextBlock* statsTxt;                                                       // 0x0470 (size: 0x8)
    class UTextBlock* statsTxt_1;                                                     // 0x0478 (size: 0x8)
    class UHorizontalBox* status_hb;                                                  // 0x0480 (size: 0x8)
    class UBorder* tab_border;                                                        // 0x0488 (size: 0x8)
    class UunitTrait_C* trait_shieldwall;                                             // 0x0490 (size: 0x8)
    class UunitTrait_C* trait_shieldwall_1;                                           // 0x0498 (size: 0x8)
    class UHorizontalBox* traits_hb;                                                  // 0x04A0 (size: 0x8)
    class UTextBlock* unitCount;                                                      // 0x04A8 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x04B0 (size: 0x8)
    class UVerticalBox* VerticalBox_1;                                                // 0x04B8 (size: 0x8)
    FSquadTooltip tooltipDetails;                                                     // 0x04C0 (size: 0x18)
    class UMaterialInstanceDynamic* dynamicTintMat;                                   // 0x04D8 (size: 0x8)
    bool tab_pressed_before;                                                          // 0x04E0 (size: 0x1)
    bool tab_pressed;                                                                 // 0x04E1 (size: 0x1)
    TArray<class UpotentialFactorWidget_C*> potentialFactorWidgets;                   // 0x04E8 (size: 0x10)
    int32 advantage;                                                                  // 0x04F8 (size: 0x4)

    void recruitmentStats(const TArray<class ASMUnit*>& assignedRecruits, class ARegion* Region, int32 MaxSize, const FName& TemplateName, class APawnCPP* playerRef);
    void getCoatOfArmsForLord(class APawnCPP* pawnRef, class UTexture*& Output);
    void getAvgTraining(TArray<class ASMUnit*>& Array, double& Output_Get);
    void updateContents();
    void Translate();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_squadTooltip(int32 EntryPoint);
}; // Size: 0x4FC

#endif
