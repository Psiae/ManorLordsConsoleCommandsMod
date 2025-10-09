#ifndef UE4SS_SDK_MainUICPP_HPP
#define UE4SS_SDK_MainUICPP_HPP

class UMainUICPP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* hideLetterbox;                                            // 0x0268 (size: 0x8)
    class UWidgetAnimation* fadeTransition;                                           // 0x0270 (size: 0x8)
    class UWidgetAnimation* fadeIN_anim;                                              // 0x0278 (size: 0x8)
    class UWidgetAnimation* gameOver;                                                 // 0x0280 (size: 0x8)
    class UButton* Add;                                                               // 0x0288 (size: 0x8)
    class UaddSquadCard_C* addSquadCard;                                              // 0x0290 (size: 0x8)
    class UaddSquadCard_C* addSquadCard_1;                                            // 0x0298 (size: 0x8)
    class UaddSquadCard_C* addSquadCard_2;                                            // 0x02A0 (size: 0x8)
    class UaddSquadCard_C* addSquadCard_3;                                            // 0x02A8 (size: 0x8)
    class UBorder* Army_Border;                                                       // 0x02B0 (size: 0x8)
    class UHorizontalBox* army_categories_HB_1;                                       // 0x02B8 (size: 0x8)
    class UHorizontalBox* army_HB;                                                    // 0x02C0 (size: 0x8)
    class UCanvasPanel* big_panels;                                                   // 0x02C8 (size: 0x8)
    class UbuildingCardWidget_C* bm_clayFurnace;                                      // 0x02D0 (size: 0x8)
    class UTextBlock* boop_mode_txt;                                                  // 0x02D8 (size: 0x8)
    class UBorder* bottom_bar_border_1;                                               // 0x02E0 (size: 0x8)
    class UButton* build_confirm;                                                     // 0x02E8 (size: 0x8)
    class UHorizontalBox* build_confirm_hb;                                           // 0x02F0 (size: 0x8)
    class UImage* buildConfirm_glow;                                                  // 0x02F8 (size: 0x8)
    class UImage* buildConfirm_glow_1;                                                // 0x0300 (size: 0x8)
    class UImage* buildConfirmICon;                                                   // 0x0308 (size: 0x8)
    class UImage* buildConfirmICon_1;                                                 // 0x0310 (size: 0x8)
    class UImage* buildConfirmICon_2;                                                 // 0x0318 (size: 0x8)
    class UImage* buildConfirmICon_3;                                                 // 0x0320 (size: 0x8)
    class UOverlay* building_categories_overlay;                                      // 0x0328 (size: 0x8)
    class UHorizontalBox* building_category_buttons_HB;                               // 0x0330 (size: 0x8)
    class UBorder* buildingCategories_border;                                         // 0x0338 (size: 0x8)
    class UHorizontalBox* buildingCategoriesHB;                                       // 0x0340 (size: 0x8)
    class UbuildingCategorySpacer_C* buildingCategorySpacer;                          // 0x0348 (size: 0x8)
    class UbuildingCategorySpacer_C* buildingCategorySpacer_1;                        // 0x0350 (size: 0x8)
    class UbuildingCategorySpacer_C* buildingCategorySpacer_2;                        // 0x0358 (size: 0x8)
    class UbuildingCategorySpacer_C* buildingCategorySpacer_6;                        // 0x0360 (size: 0x8)
    class UbuildingCategorySpacer_C* buildingCategorySpacer_7;                        // 0x0368 (size: 0x8)
    class UbuildingCategorySpacer_C* buildingCategorySpacer_11;                       // 0x0370 (size: 0x8)
    class UbuildingCategorySpacer_C* buildingCategorySpacer_12;                       // 0x0378 (size: 0x8)
    class UbuildingCategorySpacer_C* buildingCategorySpacer_14;                       // 0x0380 (size: 0x8)
    class UbuildingCategorySpacer_C* buildingCategorySpacer_16;                       // 0x0388 (size: 0x8)
    class UbuildingCategorySpacer_C* buildingCategorySpacer_17;                       // 0x0390 (size: 0x8)
    class UBorder* buildings_border;                                                  // 0x0398 (size: 0x8)
    class UHorizontalBox* Buildings_HB;                                               // 0x03A0 (size: 0x8)
    class UbuildingCardWidget_C* buildingWidget;                                      // 0x03A8 (size: 0x8)
    class UbuildingCardWidget_C* buildingWidget_1;                                    // 0x03B0 (size: 0x8)
    class UbuildingCardWidget_C* buildingWidget_2;                                    // 0x03B8 (size: 0x8)
    class UbuildingCardWidget_C* buildingWidget_3;                                    // 0x03C0 (size: 0x8)
    class UbuildingCardWidget_C* buildingWidget_4;                                    // 0x03C8 (size: 0x8)
    class UbuildingCardWidget_C* buildingWidget_5;                                    // 0x03D0 (size: 0x8)
    class UbuildingCardWidget_C* buildingWidget_6;                                    // 0x03D8 (size: 0x8)
    class UbuildingCardWidget_C* buildingWidget_7;                                    // 0x03E0 (size: 0x8)
    class UbuildingCardWidget_C* buildingWidget_8;                                    // 0x03E8 (size: 0x8)
    class UbuildingCardWidget_C* buildingWidget_9;                                    // 0x03F0 (size: 0x8)
    class UbuildingCardWidget_C* buildingWidget_10;                                   // 0x03F8 (size: 0x8)
    class UbuildingCardWidget_C* buildingWidget_11;                                   // 0x0400 (size: 0x8)
    class UbuildingCardWidget_C* buildingWidget_12;                                   // 0x0408 (size: 0x8)
    class UbuildingCardWidget_C* buildingWidget_13;                                   // 0x0410 (size: 0x8)
    class UbuildingCardWidget_C* buildingWidget_14;                                   // 0x0418 (size: 0x8)
    class UbuildingCardWidget_C* buildingWidget_15;                                   // 0x0420 (size: 0x8)
    class UbuildingCardWidget_C* buildingWidget_16;                                   // 0x0428 (size: 0x8)
    class UbuildingCardWidget_C* buildingWidget_17;                                   // 0x0430 (size: 0x8)
    class UbuildingCardWidget_C* buildingWidget_18;                                   // 0x0438 (size: 0x8)
    class UbuildingCardWidget_C* buildingWidget_19;                                   // 0x0440 (size: 0x8)
    class UbuildingCardWidget_C* buildingWidget_20;                                   // 0x0448 (size: 0x8)
    class UbuildingCardWidget_C* buildingWidget_22;                                   // 0x0450 (size: 0x8)
    class UbuildingCardWidget_C* buildingWidget_24;                                   // 0x0458 (size: 0x8)
    class UbuildingCardWidget_C* buildingWidget_26;                                   // 0x0460 (size: 0x8)
    class UbuildingCardWidget_C* buildingWidget_27;                                   // 0x0468 (size: 0x8)
    class UbuildingCardWidget_C* buildingWidget_30;                                   // 0x0470 (size: 0x8)
    class UbuildingCardWidget_C* buildingWidget_31;                                   // 0x0478 (size: 0x8)
    class UbuildingCardWidget_C* buildingWidget_32;                                   // 0x0480 (size: 0x8)
    class UbuildingCardWidget_C* buildingWidget_43;                                   // 0x0488 (size: 0x8)
    class UbuildingCardWidget_C* buildingWidget_50;                                   // 0x0490 (size: 0x8)
    class USizeBox* buildingWidgets_SizeBox;                                          // 0x0498 (size: 0x8)
    class UbuildingCardWidget_C* BW_BaileyWall;                                       // 0x04A0 (size: 0x8)
    class UbuildingCardWidget_C* bw_granarySmall;                                     // 0x04A8 (size: 0x8)
    class UbuildingCardWidget_C* bw_hitchingPost;                                     // 0x04B0 (size: 0x8)
    class UbuildingCardWidget_C* BW_Manor_Gatehouse;                                  // 0x04B8 (size: 0x8)
    class UbuildingCardWidget_C* BW_Manor_Gatehouse_1;                                // 0x04C0 (size: 0x8)
    class UbuildingCardWidget_C* BW_Manor_Palace;                                     // 0x04C8 (size: 0x8)
    class UbuildingCardWidget_C* BW_Manor_Palace_1;                                   // 0x04D0 (size: 0x8)
    class UbuildingCardWidget_C* bw_market;                                           // 0x04D8 (size: 0x8)
    class UbuildingCardWidget_C* bw_stall;                                            // 0x04E0 (size: 0x8)
    class UbuildingCardWidget_C* bw_stall_4;                                          // 0x04E8 (size: 0x8)
    class UbuildingCardWidget_C* bw_storehouse;                                       // 0x04F0 (size: 0x8)
    class UbuildingCardWidget_C* bw_storehouse_1;                                     // 0x04F8 (size: 0x8)
    class UbuildingCardWidget_C* BW_tool_eraseShrubs;                                 // 0x0500 (size: 0x8)
    class UCanvasPanel* C_Gameplay;                                                   // 0x0508 (size: 0x8)
    class UCanvasPanel* C_GameSummary;                                                // 0x0510 (size: 0x8)
    class UCanvasPanel* C_LetterBox;                                                  // 0x0518 (size: 0x8)
    class UTextBlock* camera_txt;                                                     // 0x0520 (size: 0x8)
    class UTextBlock* camera_txt_2;                                                   // 0x0528 (size: 0x8)
    class UTextBlock* camera_txt_5;                                                   // 0x0530 (size: 0x8)
    class UTextBlock* camera_txt_6;                                                   // 0x0538 (size: 0x8)
    class UCanvasPanel* Cards_canvas;                                                 // 0x0540 (size: 0x8)
    class UcastlePlanner_C* castlebuilderWidget;                                      // 0x0548 (size: 0x8)
    class UButton* cat_constr;                                                        // 0x0550 (size: 0x8)
    class UButton* cat_cosmetic;                                                      // 0x0558 (size: 0x8)
    class UButton* cat_farm;                                                          // 0x0560 (size: 0x8)
    class UButton* cat_industry;                                                      // 0x0568 (size: 0x8)
    class UButton* cat_mercenaries;                                                   // 0x0570 (size: 0x8)
    class UImage* cat_mili;                                                           // 0x0578 (size: 0x8)
    class UImage* cat_mili_1;                                                         // 0x0580 (size: 0x8)
    class UButton* cat_military;                                                      // 0x0588 (size: 0x8)
    class UButton* cat_mining;                                                        // 0x0590 (size: 0x8)
    class UButton* cat_squads;                                                        // 0x0598 (size: 0x8)
    class UButton* cat_storage;                                                       // 0x05A0 (size: 0x8)
    class UButton* cat_trade;                                                         // 0x05A8 (size: 0x8)
    class UButton* cat_village;                                                       // 0x05B0 (size: 0x8)
    class UCheckBox* CheckBox_0;                                                      // 0x05B8 (size: 0x8)
    class UCheckBox* CheckBox_1;                                                      // 0x05C0 (size: 0x8)
    class UCheckBox* CheckBox_6;                                                      // 0x05C8 (size: 0x8)
    class UVerticalBox* claimsAndChallenges_VB;                                       // 0x05D0 (size: 0x8)
    class UTextBlock* closedBuild_txt;                                                // 0x05D8 (size: 0x8)
    class UControlTooltipPanel_C* ControlTooltipPanel;                                // 0x05E0 (size: 0x8)
    class UVerticalBox* currentChallenges_VB;                                         // 0x05E8 (size: 0x8)
    class UVerticalBox* currentClaims_VB;                                             // 0x05F0 (size: 0x8)
    class UImage* dark;                                                               // 0x05F8 (size: 0x8)
    class UImage* dark_1;                                                             // 0x0600 (size: 0x8)
    class UTextBlock* date_day;                                                       // 0x0608 (size: 0x8)
    class UTextBlock* date_Month;                                                     // 0x0610 (size: 0x8)
    class UHorizontalBox* DateTimeHB;                                                 // 0x0618 (size: 0x8)
    class UButton* debuggerWindow_button;                                             // 0x0620 (size: 0x8)
    class UdevelopmentPanelTree_C* developmentPanel;                                  // 0x0628 (size: 0x8)
    class UBorder* DipToBlack;                                                        // 0x0630 (size: 0x8)
    class UButton* equipment_button;                                                  // 0x0638 (size: 0x8)
    class UButton* flipRecruitmentPool_button;                                        // 0x0640 (size: 0x8)
    class UButton* friendlyFire_button;                                               // 0x0648 (size: 0x8)
    class UImage* friendlyFire_highlight;                                             // 0x0650 (size: 0x8)
    class UButton* game_over_continue_button;                                         // 0x0658 (size: 0x8)
    class UButton* game_over_continue_button_1;                                       // 0x0660 (size: 0x8)
    class UBorder* game_paused_border;                                                // 0x0668 (size: 0x8)
    class UCanvasPanel* gameCanvas_Controls;                                          // 0x0670 (size: 0x8)
    class UImage* gameOver_img;                                                       // 0x0678 (size: 0x8)
    class UTextBlock* gameplay_txt_1;                                                 // 0x0680 (size: 0x8)
    class UVerticalBox* gameSummaryScreenVB;                                          // 0x0688 (size: 0x8)
    class UHorizontalBox* GB_SquadSize;                                               // 0x0690 (size: 0x8)
    class UhiredMercenaryPanel_C* hiredMercenaryPanel;                                // 0x0698 (size: 0x8)
    class UImage* iconImg;                                                            // 0x06A0 (size: 0x8)
    class UImage* iconImg_2;                                                          // 0x06A8 (size: 0x8)
    class UImage* Image;                                                              // 0x06B0 (size: 0x8)
    class UImage* Image_1;                                                            // 0x06B8 (size: 0x8)
    class UImage* Image_3;                                                            // 0x06C0 (size: 0x8)
    class UImage* Image_4;                                                            // 0x06C8 (size: 0x8)
    class UImage* Image_5;                                                            // 0x06D0 (size: 0x8)
    class UImage* Image_7;                                                            // 0x06D8 (size: 0x8)
    class UImage* Image_8;                                                            // 0x06E0 (size: 0x8)
    class UImage* Image_11;                                                           // 0x06E8 (size: 0x8)
    class UImage* Image_12;                                                           // 0x06F0 (size: 0x8)
    class UImage* Image_13;                                                           // 0x06F8 (size: 0x8)
    class UImage* Image_14;                                                           // 0x0700 (size: 0x8)
    class UImage* Image_18;                                                           // 0x0708 (size: 0x8)
    class UImage* Image_19;                                                           // 0x0710 (size: 0x8)
    class UImage* Image_20;                                                           // 0x0718 (size: 0x8)
    class UImage* Image_21;                                                           // 0x0720 (size: 0x8)
    class UImage* Image_22;                                                           // 0x0728 (size: 0x8)
    class UImage* Image_23;                                                           // 0x0730 (size: 0x8)
    class UImage* Image_25;                                                           // 0x0738 (size: 0x8)
    class UImage* Image_26;                                                           // 0x0740 (size: 0x8)
    class UImage* Image_28;                                                           // 0x0748 (size: 0x8)
    class UImage* Image_30;                                                           // 0x0750 (size: 0x8)
    class UImage* Image_55;                                                           // 0x0758 (size: 0x8)
    class UImage* Image_56;                                                           // 0x0760 (size: 0x8)
    class UImage* Image_104;                                                          // 0x0768 (size: 0x8)
    class UImage* Image_130;                                                          // 0x0770 (size: 0x8)
    class UImage* Image_131;                                                          // 0x0778 (size: 0x8)
    class UImage* Image_199;                                                          // 0x0780 (size: 0x8)
    class UImage* Image_218;                                                          // 0x0788 (size: 0x8)
    class UImage* Image_282;                                                          // 0x0790 (size: 0x8)
    class UImage* Image_318;                                                          // 0x0798 (size: 0x8)
    class UImage* Image_319;                                                          // 0x07A0 (size: 0x8)
    class UImage* Image_324;                                                          // 0x07A8 (size: 0x8)
    class UImage* Image_397;                                                          // 0x07B0 (size: 0x8)
    class UImage* Image_517;                                                          // 0x07B8 (size: 0x8)
    class UImage* Image_519;                                                          // 0x07C0 (size: 0x8)
    class UImage* Image_572;                                                          // 0x07C8 (size: 0x8)
    class UImage* img_monthProgress;                                                  // 0x07D0 (size: 0x8)
    class UCanvasPanel* inventory_canvas;                                             // 0x07D8 (size: 0x8)
    class UVerticalBox* leftHand_UI;                                                  // 0x07E0 (size: 0x8)
    class UlegacyViewWidget_C* legacyViewWidget;                                      // 0x07E8 (size: 0x8)
    class UBorder* letterbox_A;                                                       // 0x07F0 (size: 0x8)
    class UBorder* letterbox_B;                                                       // 0x07F8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_0;                                  // 0x0800 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_1;                                  // 0x0808 (size: 0x8)
    class UTextBlock* log_empty_txt;                                                  // 0x0810 (size: 0x8)
    class USizeBox* log_sb;                                                           // 0x0818 (size: 0x8)
    class UScrollBox* LOG_ScrollBox;                                                  // 0x0820 (size: 0x8)
    class UVerticalBox* LOG_VB;                                                       // 0x0828 (size: 0x8)
    class USizeBox* logbox+_sb;                                                       // 0x0830 (size: 0x8)
    class UImage* logbox_+;                                                           // 0x0838 (size: 0x8)
    class UBorder* logbox_border;                                                     // 0x0840 (size: 0x8)
    class UImage* logbox_spacer;                                                      // 0x0848 (size: 0x8)
    class UImage* logbox_spacer_1;                                                    // 0x0850 (size: 0x8)
    class UHorizontalBox* main_tabs_HB;                                               // 0x0858 (size: 0x8)
    class UmainTabButton_C* mainTabButton_1_Construction;                             // 0x0860 (size: 0x8)
    class UmainTabButton_C* mainTabButton_2_Army;                                     // 0x0868 (size: 0x8)
    class UmainTabButton_C* mainTabButton_3_Map;                                      // 0x0870 (size: 0x8)
    class UmainTabButton_C* mainTabButton_5_Settings;                                 // 0x0878 (size: 0x8)
    class UmainTabButton_C* mainTabButton_6_ledger_old;                               // 0x0880 (size: 0x8)
    class UmainTabButton_C* mainTabButton_7_wiki_wip;                                 // 0x0888 (size: 0x8)
    class UmainTabButton_C* mainTabButton_8_Road;                                     // 0x0890 (size: 0x8)
    class UmainTabButton_C* mainTabButton_9_Recruitment;                              // 0x0898 (size: 0x8)
    class UCanvasPanel* mainUI_canvas;                                                // 0x08A0 (size: 0x8)
    class UMainWiki_C* MainWiki;                                                      // 0x08A8 (size: 0x8)
    class UHorizontalBox* manpower_lv1;                                               // 0x08B0 (size: 0x8)
    class UHorizontalBox* manpower_lv2;                                               // 0x08B8 (size: 0x8)
    class UImage* masonry_Symbol;                                                     // 0x08C0 (size: 0x8)
    class UImage* masonry_Symbol_1;                                                   // 0x08C8 (size: 0x8)
    class UImage* mercenaries_glows;                                                  // 0x08D0 (size: 0x8)
    class UButton* mercenary_button;                                                  // 0x08D8 (size: 0x8)
    class UmercenaryScreen_C* mercenaryScreen;                                        // 0x08E0 (size: 0x8)
    class UOverlay* message_overlay;                                                  // 0x08E8 (size: 0x8)
    class UBorder* message_txt_border;                                                // 0x08F0 (size: 0x8)
    class UImage* militia_glow;                                                       // 0x08F8 (size: 0x8)
    class UMLDebuggerWindow_C* MLDebuggerWindow;                                      // 0x0900 (size: 0x8)
    class UTextBlock* noTroops_txt;                                                   // 0x0908 (size: 0x8)
    class UTextBlock* num_bows;                                                       // 0x0910 (size: 0x8)
    class UTextBlock* num_pavise;                                                     // 0x0918 (size: 0x8)
    class UTextBlock* num_polearms;                                                   // 0x0920 (size: 0x8)
    class UTextBlock* num_recruits_lv1;                                               // 0x0928 (size: 0x8)
    class UTextBlock* num_recruits_lv2;                                               // 0x0930 (size: 0x8)
    class UTextBlock* num_spears;                                                     // 0x0938 (size: 0x8)
    class UoverlayLegend_C* overlayLegend_C_1;                                        // 0x0940 (size: 0x8)
    class UImage* paperBG_buildings;                                                  // 0x0948 (size: 0x8)
    class UplayerLordsPanel_C* playerLord;                                            // 0x0950 (size: 0x8)
    class UButton* plotDivision_Add;                                                  // 0x0958 (size: 0x8)
    class UButton* plotDivision_Substract;                                            // 0x0960 (size: 0x8)
    class UVerticalBox* plotDivisionButtons_VB;                                       // 0x0968 (size: 0x8)
    class Ucensus_C* popList;                                                         // 0x0970 (size: 0x8)
    class UHorizontalBox* pushStances_HB;                                             // 0x0978 (size: 0x8)
    class UScrollBox* quest_scrollbox;                                                // 0x0980 (size: 0x8)
    class UGridPanel* questMsg_Grid;                                                  // 0x0988 (size: 0x8)
    class UquickSettings_C* quickSettings;                                            // 0x0990 (size: 0x8)
    class UBorder* reassignMode_header_rts_tool_border;                               // 0x0998 (size: 0x8)
    class UButton* recruit_button_1;                                                  // 0x09A0 (size: 0x8)
    class UBorder* recruitment_border;                                                // 0x09A8 (size: 0x8)
    class UHorizontalBox* recruitment_HB;                                             // 0x09B0 (size: 0x8)
    class UButton* recruitment_merc_b;                                                // 0x09B8 (size: 0x8)
    class UImage* recruitment_merc_img;                                               // 0x09C0 (size: 0x8)
    class UButton* recruitment_militia_b;                                             // 0x09C8 (size: 0x8)
    class UImage* recruitment_militia_img;                                            // 0x09D0 (size: 0x8)
    class UImage* recruitment_overlay_lion;                                           // 0x09D8 (size: 0x8)
    class UBorder* recruitment_stats_border;                                          // 0x09E0 (size: 0x8)
    class UImage* recruitmentButtonIcon;                                              // 0x09E8 (size: 0x8)
    class UrecruitmentCard_C* recruitmentCard;                                        // 0x09F0 (size: 0x8)
    class UTextBlock* recruitmentStats_recruits;                                      // 0x09F8 (size: 0x8)
    class UHorizontalBox* recruits_HB;                                                // 0x0A00 (size: 0x8)
    class UBorder* rect;                                                              // 0x0A08 (size: 0x8)
    class URegionPanel_C* RegionPanel;                                                // 0x0A10 (size: 0x8)
    class UregionViewOverlay_C* regionViewOverlay;                                    // 0x0A18 (size: 0x8)
    class UrenameFullscreen_C* renameFullscreen;                                      // 0x0A20 (size: 0x8)
    class UretinueEditor_C* retiuneEditor_C_0;                                        // 0x0A28 (size: 0x8)
    class UroadCurvatureBar_WorkAreaBar_C* roadCurvatureBar;                          // 0x0A30 (size: 0x8)
    class UButton* rotateAngle_confirm_1;                                             // 0x0A38 (size: 0x8)
    class UlocalizedTextBox_C* rts_tool_descr;                                        // 0x0A40 (size: 0x8)
    class UlocalizedTextBox_C* RTS_tool_header;                                       // 0x0A48 (size: 0x8)
    class UImage* season_icon;                                                        // 0x0A50 (size: 0x8)
    class UBorder* skill_and_stances_border;                                          // 0x0A58 (size: 0x8)
    class UskillButton_C* skillButton_1;                                              // 0x0A60 (size: 0x8)
    class UskillButton_C* skillButton_2;                                              // 0x0A68 (size: 0x8)
    class UskillButton_C* skillButton_3;                                              // 0x0A70 (size: 0x8)
    class UskillButton_C* skillButton_7;                                              // 0x0A78 (size: 0x8)
    class UskillButton_C* skillButton_8;                                              // 0x0A80 (size: 0x8)
    class UskillButton_C* skillButton_customize;                                      // 0x0A88 (size: 0x8)
    class UskillButton_C* skillButton_disband;                                        // 0x0A90 (size: 0x8)
    class UskillButton_C* skillButton_outpost;                                        // 0x0A98 (size: 0x8)
    class UskillButton_C* skillButton_rally;                                          // 0x0AA0 (size: 0x8)
    class UskillButton_C* skillButton_removeSquad;                                    // 0x0AA8 (size: 0x8)
    class UskillButton_C* skillButton_split;                                          // 0x0AB0 (size: 0x8)
    class UHorizontalBox* skills_ralliedOnly;                                         // 0x0AB8 (size: 0x8)
    class USlider* Slider_9;                                                          // 0x0AC0 (size: 0x8)
    class UlocalizedTextBox_C* snap_to_roads_txt;                                     // 0x0AC8 (size: 0x8)
    class UImage* speed0_glow;                                                        // 0x0AD0 (size: 0x8)
    class UImage* speed1_glow;                                                        // 0x0AD8 (size: 0x8)
    class UImage* speed1_glow_1;                                                      // 0x0AE0 (size: 0x8)
    class UImage* speed2_glow;                                                        // 0x0AE8 (size: 0x8)
    class UImage* speed3_glow;                                                        // 0x0AF0 (size: 0x8)
    class UButton* squad_minus;                                                       // 0x0AF8 (size: 0x8)
    class UEditableText* squadSize_EditableText_0;                                    // 0x0B00 (size: 0x8)
    class UsquadTooltip_C* SquadTooltip;                                              // 0x0B08 (size: 0x8)
    class UstanceButton_C* stanceButton;                                              // 0x0B10 (size: 0x8)
    class UstanceButton_C* stanceButton_1;                                            // 0x0B18 (size: 0x8)
    class UstanceButton_C* stanceButton_2;                                            // 0x0B20 (size: 0x8)
    class UstanceButton_C* stanceButton_3;                                            // 0x0B28 (size: 0x8)
    class UstanceButton_C* stanceButton_4;                                            // 0x0B30 (size: 0x8)
    class UstanceButton_C* stanceButton_5;                                            // 0x0B38 (size: 0x8)
    class UstanceButton_C* stanceButton_6;                                            // 0x0B40 (size: 0x8)
    class UstanceButton_C* stanceButton_7;                                            // 0x0B48 (size: 0x8)
    class UHorizontalBox* stances_all_hb;                                             // 0x0B50 (size: 0x8)
    class UHorizontalBox* stances_hb;                                                 // 0x0B58 (size: 0x8)
    class UTextBlock* summary-continue_txt;                                           // 0x0B60 (size: 0x8)
    class UTextBlock* summary_endGameTxt;                                             // 0x0B68 (size: 0x8)
    class UTextBlock* summaryScreen_mainTxt;                                          // 0x0B70 (size: 0x8)
    class UTextBlock* summaryScreen_secondaryTxt;                                     // 0x0B78 (size: 0x8)
    class UTextBlock* temptext;                                                       // 0x0B80 (size: 0x8)
    class UButton* time1;                                                             // 0x0B88 (size: 0x8)
    class UButton* time2;                                                             // 0x0B90 (size: 0x8)
    class UButton* time3;                                                             // 0x0B98 (size: 0x8)
    class UButton* time_slowmo;                                                       // 0x0BA0 (size: 0x8)
    class UButton* time_stop;                                                         // 0x0BA8 (size: 0x8)
    class UBorder* toltipBorder_ColoredRim;                                           // 0x0BB0 (size: 0x8)
    class UCanvasPanel* top_and_side_bars;                                            // 0x0BB8 (size: 0x8)
    class UVerticalBox* TopCluster_VB;                                                // 0x0BC0 (size: 0x8)
    class UCanvasPanel* Tutorials_Canvas;                                             // 0x0BC8 (size: 0x8)
    class UunitCard_C* unitCard;                                                      // 0x0BD0 (size: 0x8)
    class UunitCard_C* unitCard_1;                                                    // 0x0BD8 (size: 0x8)
    class UHorizontalBox* unitSkills_HB;                                              // 0x0BE0 (size: 0x8)
    class UBorder* whiteTooltipBorder;                                                // 0x0BE8 (size: 0x8)
    class URichTextBlock* WhiteTooltipRT;                                             // 0x0BF0 (size: 0x8)
    FVector2D MousePos;                                                               // 0x0BF8 (size: 0x8)
    FVector2D LMBPressed;                                                             // 0x0C00 (size: 0x8)
    int32 Main01_slideOut_Buildings;                                                  // 0x0C08 (size: 0x4)
    TArray<class UInventory_C*> OpenedInventoryTabs;                                  // 0x0C10 (size: 0x10)
    TArray<class UTownName_C*> TownNameWidgets;                                       // 0x0C20 (size: 0x10)
    float Delta;                                                                      // 0x0C30 (size: 0x4)
    bool BLMB;                                                                        // 0x0C34 (size: 0x1)
    FVector2D NewVar_0;                                                               // 0x0C38 (size: 0x8)
    TArray<class UButton*> building_buttons;                                          // 0x0C40 (size: 0x10)
    class UBigMap_C* BigMapRef;                                                       // 0x0C50 (size: 0x8)
    float buildCommitScale;                                                           // 0x0C58 (size: 0x4)
    FVector buildCommitOldPos;                                                        // 0x0C5C (size: 0xC)
    bool isUsingUI;                                                                   // 0x0C68 (size: 0x1)
    FGlobalSettings playerSettings;                                                   // 0x0C69 (size: 0x2)
    class AMyPawnCPP_BP3_C* playerRef;                                                // 0x0C70 (size: 0x8)
    TArray<class UpopIcon_C*> popIcons;                                               // 0x0C78 (size: 0x10)
    class UBigMap3d_C* BigMapRef3d;                                                   // 0x0C88 (size: 0x8)
    bool hideMain;                                                                    // 0x0C90 (size: 0x1)
    int32 lastDebrisSnd;                                                              // 0x0C94 (size: 0x4)
    class UButton* selectedButton;                                                    // 0x0C98 (size: 0x8)
    int32 building_cat;                                                               // 0x0CA0 (size: 0x4)
    float tmpScale;                                                                   // 0x0CA4 (size: 0x4)
    float numAvailableBuildings;                                                      // 0x0CA8 (size: 0x4)
    TArray<FLogEntry> removedLogEntries;                                              // 0x0CB0 (size: 0x10)
    TArray<class UunitCard_C*> unitCards;                                             // 0x0CC0 (size: 0x10)
    int32 mainTab;                                                                    // 0x0CD0 (size: 0x4)
    bool hideTownNames;                                                               // 0x0CD4 (size: 0x1)
    TArray<class ULogEntry_C*> logEntryWidgets;                                       // 0x0CD8 (size: 0x10)
    TArray<class UCharacterPortrait_C*> portraitWidgets;                              // 0x0CE8 (size: 0x10)
    TArray<class UCharacterSlot_C*> slotWidgets;                                      // 0x0CF8 (size: 0x10)
    TArray<class UbuildingCardWidget_C*> buildingWidgets;                             // 0x0D08 (size: 0x10)
    int32 startingTime;                                                               // 0x0D18 (size: 0x4)
    int32 lastConstrSound;                                                            // 0x0D1C (size: 0x4)
    bool mapIsEnabled;                                                                // 0x0D20 (size: 0x1)
    int32 armyCat;                                                                    // 0x0D24 (size: 0x4)
    TArray<class UrecruitmentCard_C*> recruitmentCards;                               // 0x0D28 (size: 0x10)
    bool bShowRecruitmentPool;                                                        // 0x0D38 (size: 0x1)
    int32 numUnitsSelectedForRecruitment;                                             // 0x0D3C (size: 0x4)
    TArray<class UregionIconWidget_C*> regionIconWidgets;                             // 0x0D40 (size: 0x10)
    bool showLetterbox;                                                               // 0x0D50 (size: 0x1)
    int32 recruitmentCategory;                                                        // 0x0D54 (size: 0x4)
    FText translatedTooltipText;                                                      // 0x0D58 (size: 0x18)
    bool friendlyFireOn;                                                              // 0x0D70 (size: 0x1)
    int32 visibleCategorySpacers;                                                     // 0x0D74 (size: 0x4)
    float categorySpacerSize;                                                         // 0x0D78 (size: 0x4)
    float lastLogboxMessageTime;                                                      // 0x0D7C (size: 0x4)
    bool logboxRecentMessage;                                                         // 0x0D80 (size: 0x1)
    float fieldAngleScale;                                                            // 0x0D84 (size: 0x4)
    FVector2D tooltipOffset;                                                          // 0x0D88 (size: 0x8)
    TArray<FChallenge> relevantChallenges;                                            // 0x0D90 (size: 0x10)
    TArray<class UchallengeWidget_C*> challengeWidgets;                               // 0x0DA0 (size: 0x10)
    TArray<int32> recruitsPerLv;                                                      // 0x0DB0 (size: 0x10)
    bool recruitOnlyUnemployed;                                                       // 0x0DC0 (size: 0x1)
    int32 targetSquadSize;                                                            // 0x0DC4 (size: 0x4)
    int32 buildingCategoryIndex;                                                      // 0x0DC8 (size: 0x4)
    TArray<class UskillButton_C*> allSkillButtonWidgets;                              // 0x0DD0 (size: 0x10)
    class UMaterialInstanceDynamic* monthLoadingDynamicMaterial;                      // 0x0DE0 (size: 0x8)
    float logboxHeightUnhovered;                                                      // 0x0DE8 (size: 0x4)
    float logboxHeightHovered;                                                        // 0x0DEC (size: 0x4)
    TArray<class UbuildingFloater_C*> floaterWidgets;                                 // 0x0DF0 (size: 0x10)
    TArray<class UbuildingFloater_C*> floaterWidgets_toRemove;                        // 0x0E00 (size: 0x10)

    void SequenceEvent__ENTRYPOINTMainUICPP_0(class UBorder* FadeIn);
    void getVisitModeSkeletalMeshBasedOnPortrait(class APawnCPP* self2, TSoftObjectPtr<UObject>& Mesh);
    void allSelectedSquadsAreRanged(TArray<int32>& Array, class APawnCPP* pawnRef, bool& areRanged, bool& friendlyFireAllowed1);
    void updateRecruitmentStock(class UTextBlock* textWidget, int32 goodID, class ARegion* currentRegion);
    void isChallengeStillRelevant(TArray<FChallenge>& relevantChallenges, FChallenge& challengeToCheck, bool& relevant);
    void updateHiredMercenaryCompaniesPanel();
    bool isBuildingWithinScreenBounds(class AActor* self2);
    void despawnBuildingFloaterWidgets();
    bool doesBuildingFloaterExist(class UObject* B);
    void Respawn Building Floater Widgets And Update Contents();
    class UWidget* Get_mercenary_button_ToolTipWidget_0();
    FText Get_mercenary_button_ToolTipText_0();
    int32 getSeasonIndex();
    class UWidget* Get_recruit_button_1_ToolTipWidget_0();
    void openLetterCreator(class APawnCPP* letterRecipient);
    void prepareGameSummary();
    void getRTSManager(class ARTSMultiEngineCPP*& Master Ptr);
    void updatePlotDivisionButtonAvailability();
    bool notInBattleMode();
    void updateUnitCardSelection();
    bool allSelectedSquadsHaveEnoughEquippedRecruits();
    void getSelectedCards_UNFINISHED();
    bool anyRecruitIsRallying(const TArray<class ASMUnit*>& recruits);
    void updateEquipmentStats();
    bool allSquadsAreRallied(TArray<int32>& squadIDs, class APawnCPP* playerRef);
    void setCastlePlannerOpen(class ASMBuildingMaster* buildingMaster);
    bool Road Wall Is Closed();
    void Index_To_BuildingCategory(int32 Value, int32& Value1);
    void BuildingCategory_to_Index(int32 Value, int32& Value1);
    void areBuildingRequirementsFulfilled(class UbuildingCardWidget_C* buildingWidget, bool& requirementsFulfilled);
    void hasRequiredEquipment(class ARegion* Region, TArray<FGood>& Array, bool& hasEquipment);
    void Open Close Region View Overlay(bool Visible);
    void getWidgetForChallenge(FChallenge Challenge, class UchallengeWidget_C*& challengeWidget);
    void castAndChangeGameSpeed(int32 newSpeed);
    void getIconZoomMultiplier(float& Multiplier);
    void openWiki(class UMainWiki_C*& MainWiki);
    void canAffordRoadField(bool& canAfford);
    float SmoothStep(float A, float B, float X);
    void udpateSquadTooltip();
    void updatePlayerStats();
    bool checEnoughSkilledRecruits(class ARegion* Region, float melee, float archery, int32 recruitsNeeded, int32 minHouseLv, int32& numRecruits);
    void updateTranslation();
    void setupCategoryTooltips();
    void changeRecruitmentCategory(int32 recruitmentCategory);
    void Update Claims And Challenges GUI();
    void updateRoadCurvatureBarOpacity();
    void Update Season Icon and Tooltip(int32 seasonID);
    class UCustomTooltip_C* createHotkeyTooltip(FName mappingName, FText customText);
    FText Get_playerSilver_txt_Text_0();
    void updateRecruitmentAvailability();
    void getRecruiting(TArray<FName>& recruitingUnits);
    void updateOnScreenTextVisibility();
    void Lerp Inout Region View Panel();
    void closeRecruitmentPanel();
    void filterArmyRecruitment_DEPREC();
    void updateRecruitmentPool();
    void updateArmyCategoryColors();
    void lerpInOutWhileMapView();
    void resetRoadModeFieldModePlacebuilding(const bool roadmode, const bool newFieldMode, int32 placeBuilding, bool _isExtension);
    void roadConfirmButton();
    void updateBuildingCategoryColors();
    bool townNameExists(class ARegion* Region);
    bool squadsHaveSkill&Selected(const int32& skillID, class APawnCPP* Pawn);
    void updateSkillsAndStances();
    int32 rndConstrSound(int32 maxOption);
    void ElapsedTime();
    void whiteTooltip();
    FText Get_stat_silver_txt_Text_0();
    void updateCharacterSlots();
    bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    void updateCharacterList();
    void playerStuffs_OLD();
    void flipMainTab(int32 tabID);
    void minimap();
    void RemoveObsoleteEntries(class APawnCPP* PawnCPP);
    void animateMainPanels(float Delta);
    void animateHeroPanel();
    void animateHeroPortraits();
    void updateArmy();
    void closeAllExcept(class UObject* Widget);
    void closeAllMainTabs();
    void filterBuildingsByRequirements();
    void udpateSpeedControlsUI(int32 spd);
    bool checkHideUI();
    void animate_Letterbox();
    void buildingHoverLerp();
    void logEntryDisplayed(FLogEntry entry, bool& Result);
    void logEntryExists(FLogEntry entry, bool& NewParam);
    void CreateBuildingButtonArray();
    void Animate_BuildingsPanel(float Delta);
    void DrawRect();
    ECheckBoxState GetCheckedState_1();
    bool flipBool(bool InBool);
    void Get Player(class AMyPawnCPP_BP3_C*& AsMy Pawn CPP BP3);
    ECheckBoxState GetCheckedState_0();
    void setUpgradeModeAngle();
    void set month name by day(class UTextBlock* Target, int32& dayOfTheMonth);
    void roadModeReset();
    void DrawSelection(class APawnCPP* Pawn);
    void BndEvt__time_play_K2Node_ComponentBoundEvent_12_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__time_x4_K2Node_ComponentBoundEvent_23_OnButtonReleasedEvent__DelegateSignature();
    void UpdateLog();
    void playBuildSound(FVector Pos, bool withPlanks);
    void press_buildings_tab();
    void closeAllUnpinnedTabs();
    void playBuildingSound(int32 bType);
    void filterBuildingsByCategory();
    void BndEvt__Button_17_K2Node_ComponentBoundEvent_26_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__Button_11_K2Node_ComponentBoundEvent_27_OnButtonReleasedEvent__DelegateSignature();
    void resetPlacebuilding();
    void updateDate(int32 dayOfTheMonth, int32 monthID, int32 seasonID);
    void BndEvt__time_stop_K2Node_ComponentBoundEvent_35_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__time2_K2Node_ComponentBoundEvent_36_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__build_confirm_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature();
    void UpdateInventoryTabs();
    void time_pause();
    void time_play();
    void RepawnTownName(class ARegion* Region);
    void BndEvt__Button_12_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__Button_13_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void pressArmyTab();
    void prevCategory();
    void nextCategory();
    void BndEvt__cat_constr_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature();
    void pressMapTab();
    void BndEvt__cat_squads_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__cat_mercenaries_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__showRecruitmentPool_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature();
    void time_speed2();
    void time_speed3();
    void SpawnBuildingTab(class ASMBuildingMaster* building, bool playSfx);
    void BndEvt__Button_63_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__recruitment_merc_b_K2Node_ComponentBoundEvent_14_OnButtonReleasedEvent__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void openUnitEditor(int32 squadID, class ASMBuildingMaster* ManorRef);
    void Construct();
    void BndEvt__cat_castle_1_K2Node_ComponentBoundEvent_17_OnButtonReleasedEvent__DelegateSignature();
    void armyTab_autoOpen();
    void pressSettingsTab();
    void fadein_Event_0(class UBorder* FadeIn);
    void BndEvt__time_slowmo_K2Node_ComponentBoundEvent_19_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__equipment_button_K2Node_ComponentBoundEvent_20_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__friendlyFire_button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__cat_mining_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
    void confirmRoad();
    void BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__CheckBox_1_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__MainUICPP_rotateAngle_confirm_1_K2Node_ComponentBoundEvent_18_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__MainUICPP_rotateAngle_confirm_1_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__MainUICPP_build_confirm_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__MainUICPP_cat_storage_K2Node_ComponentBoundEvent_24_OnButtonReleasedEvent__DelegateSignature();
    void setBuildingCategoryTo(int32 building_cat);
    void BndEvt__MainUICPP_game_over_continue_button_K2Node_ComponentBoundEvent_25_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__MainUICPP_mainTabButton_9_Recruitment_K2Node_ComponentBoundEvent_28_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility InVisibility);
    void press_recruitmentTab();
    void BndEvt__MainUICPP_mercenary_button_K2Node_ComponentBoundEvent_29_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__MainUICPP_CheckBox_6_K2Node_ComponentBoundEvent_30_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__MainUICPP_Slider_9_K2Node_ComponentBoundEvent_31_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__MainUICPP_squadSize_EditableText_0_K2Node_ComponentBoundEvent_32_OnEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__MainUICPP_Slider_9_K2Node_ComponentBoundEvent_34_OnMouseCaptureEndEvent__DelegateSignature();
    void BndEvt__MainUICPP_playerLord_K2Node_ComponentBoundEvent_33_enableVisitModeSmooth__DelegateSignature();
    void visitModeOn();
    void BndEvt__MainUICPP_castlebuilderWidget_K2Node_ComponentBoundEvent_3_closeCastlePlanner__DelegateSignature();
    void BndEvt__MainUICPP_mercenary_button_1_K2Node_ComponentBoundEvent_37_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__MainUICPP_Button_0_K2Node_ComponentBoundEvent_38_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__MainUICPP_plotDivision_Add_K2Node_ComponentBoundEvent_39_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__MainUICPP_plotDivision_Substract_K2Node_ComponentBoundEvent_40_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__MainUICPP_game_over_continue_button_1_K2Node_ComponentBoundEvent_41_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__MainUICPP_cat_cosmetic_K2Node_ComponentBoundEvent_40_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_MainUICPP(int32 EntryPoint);
}; // Size: 0xE10

#endif
