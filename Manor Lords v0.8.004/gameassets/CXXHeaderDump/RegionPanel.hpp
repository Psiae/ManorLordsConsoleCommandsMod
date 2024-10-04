#ifndef UE4SS_SDK_RegionPanel_HPP
#define UE4SS_SDK_RegionPanel_HPP

class URegionPanel_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    class UWidgetAnimation* lerpInPolicyChoice;                                       // 0x0358 (size: 0x8)
    class UWidgetAnimation* changeRegionAnim;                                         // 0x0360 (size: 0x8)
    class UBorder* approval_border;                                                   // 0x0368 (size: 0x8)
    class UOverlay* approval_parent;                                                  // 0x0370 (size: 0x8)
    class UButton* assigned_button;                                                   // 0x0378 (size: 0x8)
    class UOverlay* assigned_parent;                                                  // 0x0380 (size: 0x8)
    class UHorizontalBox* attractiveness_hb;                                          // 0x0388 (size: 0x8)
    class UImage* bgSphere_1;                                                         // 0x0390 (size: 0x8)
    class UButton* census_button_1;                                                   // 0x0398 (size: 0x8)
    class UHorizontalBox* center_hb;                                                  // 0x03A0 (size: 0x8)
    class UpolicySlotWidget_C* chosenPolicy;                                          // 0x03A8 (size: 0x8)
    class UHorizontalBox* constructionResources_HB;                                   // 0x03B0 (size: 0x8)
    class UTextBlock* count_home;                                                     // 0x03B8 (size: 0x8)
    class UTextBlock* count_hunger;                                                   // 0x03C0 (size: 0x8)
    class UTextBlock* count_spoil;                                                    // 0x03C8 (size: 0x8)
    class UButton* dev_button;                                                        // 0x03D0 (size: 0x8)
    class UButton* dev_button_old;                                                    // 0x03D8 (size: 0x8)
    class UBorder* dev_point_border;                                                  // 0x03E0 (size: 0x8)
    class UImage* dev_point_highlight;                                                // 0x03E8 (size: 0x8)
    class UImage* exclam;                                                             // 0x03F0 (size: 0x8)
    class UImage* exclam_1;                                                           // 0x03F8 (size: 0x8)
    class UImage* exclam_2;                                                           // 0x0400 (size: 0x8)
    class UTextBlock* expenses_txt;                                                   // 0x0408 (size: 0x8)
    class UgoodStat_C* goodStat;                                                      // 0x0410 (size: 0x8)
    class UgoodStat_C* goodStat_1;                                                    // 0x0418 (size: 0x8)
    class UgoodStat_C* goodStat_2;                                                    // 0x0420 (size: 0x8)
    class UgoodStat_C* goodStat_3;                                                    // 0x0428 (size: 0x8)
    class UgoodStat_C* goodStat_4;                                                    // 0x0430 (size: 0x8)
    class UgoodStat_C* goodStat_5;                                                    // 0x0438 (size: 0x8)
    class UgoodStat_C* goodStat_6;                                                    // 0x0440 (size: 0x8)
    class UgoodStat_C* goodStat_7;                                                    // 0x0448 (size: 0x8)
    class UgoodStat_C* goodStat_8;                                                    // 0x0450 (size: 0x8)
    class UgoodStat_C* goodStat_9;                                                    // 0x0458 (size: 0x8)
    class UgoodStat_C* goodStat_10;                                                   // 0x0460 (size: 0x8)
    class UgoodStat_C* goodStat_11;                                                   // 0x0468 (size: 0x8)
    class UgoodStat_C* goodStat_12;                                                   // 0x0470 (size: 0x8)
    class UgoodStat_C* goodStat_14;                                                   // 0x0478 (size: 0x8)
    class UgoodStat_C* goodStat_15;                                                   // 0x0480 (size: 0x8)
    class UgoodStat_C* goodStat_SILVER;                                               // 0x0488 (size: 0x8)
    class UHorizontalBox* housing_hb_1;                                               // 0x0490 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0498 (size: 0x8)
    class UImage* Image_4;                                                            // 0x04A0 (size: 0x8)
    class UImage* Image_5;                                                            // 0x04A8 (size: 0x8)
    class UImage* Image_6;                                                            // 0x04B0 (size: 0x8)
    class UImage* Image_7;                                                            // 0x04B8 (size: 0x8)
    class UImage* Image_10;                                                           // 0x04C0 (size: 0x8)
    class UImage* Image_12;                                                           // 0x04C8 (size: 0x8)
    class UImage* Image_13;                                                           // 0x04D0 (size: 0x8)
    class UImage* Image_14;                                                           // 0x04D8 (size: 0x8)
    class UImage* Image_15;                                                           // 0x04E0 (size: 0x8)
    class UImage* Image_16;                                                           // 0x04E8 (size: 0x8)
    class UImage* Image_17;                                                           // 0x04F0 (size: 0x8)
    class UImage* Image_18;                                                           // 0x04F8 (size: 0x8)
    class UImage* Image_21;                                                           // 0x0500 (size: 0x8)
    class UImage* Image_54;                                                           // 0x0508 (size: 0x8)
    class UImage* Image_89;                                                           // 0x0510 (size: 0x8)
    class UImage* Image_111;                                                          // 0x0518 (size: 0x8)
    class UImage* Image_121;                                                          // 0x0520 (size: 0x8)
    class UImage* leftDecor_regionname;                                               // 0x0528 (size: 0x8)
    class UlevelButton_C* levelButton;                                                // 0x0530 (size: 0x8)
    class UButton* livestock_button;                                                  // 0x0538 (size: 0x8)
    class UgoodStat_C* livestockStat;                                                 // 0x0540 (size: 0x8)
    class UlogMeter_C* logMeter;                                                      // 0x0548 (size: 0x8)
    class UImage* loyalty_arrow;                                                      // 0x0550 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton;                                    // 0x0558 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton_163;                                // 0x0560 (size: 0x8)
    class UMD_NaviAutoTooltip_C* MD_NaviAutoTooltip;                                  // 0x0568 (size: 0x8)
    class UMD_NaviAutoTooltip_C* MD_NaviAutoTooltip_162;                              // 0x0570 (size: 0x8)
    class UMD_NaviAutoTooltip_C* MD_NaviAutoTooltip_176;                              // 0x0578 (size: 0x8)
    class UMD_NaviAutoTooltip_C* MD_NaviAutoTooltip_304;                              // 0x0580 (size: 0x8)
    class UMD_NaviAutoTooltip_C* MD_NaviAutoTooltip_492;                              // 0x0588 (size: 0x8)
    class UMD_NaviAutoTooltip_C* MD_NaviAutoTooltip_637;                              // 0x0590 (size: 0x8)
    class UMD_NaviAutoTooltip_C* MD_NaviAutoTooltip_779;                              // 0x0598 (size: 0x8)
    class UMD_NaviAutoTooltip_C* MD_NaviAutoTooltip_931;                              // 0x05A0 (size: 0x8)
    class UMD_NaviAutoTooltip_C* MD_NaviAutoTooltip_1066;                             // 0x05A8 (size: 0x8)
    class UHorizontalBox* non_construction_resources;                                 // 0x05B0 (size: 0x8)
    class UproblemBanner_C* notif_can_find_resource;                                  // 0x05B8 (size: 0x8)
    class UproblemBanner_C* notif_cold;                                               // 0x05C0 (size: 0x8)
    class UproblemBanner_C* notif_home;                                               // 0x05C8 (size: 0x8)
    class UproblemBanner_C* notif_home_1;                                             // 0x05D0 (size: 0x8)
    class UproblemBanner_C* notif_hung;                                               // 0x05D8 (size: 0x8)
    class UproblemBanner_C* notif_hung_1;                                             // 0x05E0 (size: 0x8)
    class UproblemBanner_C* notif_hung_2;                                             // 0x05E8 (size: 0x8)
    class UproblemBanner_C* notif_spoil;                                              // 0x05F0 (size: 0x8)
    class UproblemBanner_C* notif_spoil_1;                                            // 0x05F8 (size: 0x8)
    class UproblemBanner_C* notif_spoil_2;                                            // 0x0600 (size: 0x8)
    class UproblemBanner_C* notif_spoil_3;                                            // 0x0608 (size: 0x8)
    class UproblemBanner_C* notif_spoil_4;                                            // 0x0610 (size: 0x8)
    class UproblemBanner_C* notif_spoil_5;                                            // 0x0618 (size: 0x8)
    class UproblemBanner_C* notif_spoil_6;                                            // 0x0620 (size: 0x8)
    class UproblemBanner_C* notif_spoil_7;                                            // 0x0628 (size: 0x8)
    class UproblemBanner_C* notif_spoil_8;                                            // 0x0630 (size: 0x8)
    class UproblemBanner_C* notif_spoil_9;                                            // 0x0638 (size: 0x8)
    class UproblemBanner_C* notif_spoil_10;                                           // 0x0640 (size: 0x8)
    class UproblemBanner_C* notif_spoil_11;                                           // 0x0648 (size: 0x8)
    class UproblemBanner_C* notif_spoil_12;                                           // 0x0650 (size: 0x8)
    class UproblemBanner_C* notif_spoil_13;                                           // 0x0658 (size: 0x8)
    class UproblemBanner_C* notif_spoil_14;                                           // 0x0660 (size: 0x8)
    class UproblemBanner_C* notif_spoil_15;                                           // 0x0668 (size: 0x8)
    class UproblemBanner_C* notif_spoil_16;                                           // 0x0670 (size: 0x8)
    class UproblemBanner_C* notif_spoil_17;                                           // 0x0678 (size: 0x8)
    class UproblemBanner_C* notif_spoil_18;                                           // 0x0680 (size: 0x8)
    class UproblemBanner_C* notif_spoil_19;                                           // 0x0688 (size: 0x8)
    class UproblemBanner_C* notif_spoil_21;                                           // 0x0690 (size: 0x8)
    class UproblemBanner_C* notif_spoil_22;                                           // 0x0698 (size: 0x8)
    class UproblemBanner_C* notif_storage;                                            // 0x06A0 (size: 0x8)
    class UproblemBanner_C* notif_storage_1;                                          // 0x06A8 (size: 0x8)
    class UproblemBanner_C* notif_storage_2;                                          // 0x06B0 (size: 0x8)
    class UproblemBanner_C* notif_storage_3;                                          // 0x06B8 (size: 0x8)
    class UImage* order_arrow_1;                                                      // 0x06C0 (size: 0x8)
    class UOverlay* order_parent;                                                     // 0x06C8 (size: 0x8)
    class UImage* overa;                                                              // 0x06D0 (size: 0x8)
    class UImage* overlay_dark;                                                       // 0x06D8 (size: 0x8)
    class UpolicyChoice_C* policyChoice;                                              // 0x06E0 (size: 0x8)
    class UHorizontalBox* policySlots_HB;                                             // 0x06E8 (size: 0x8)
    class UHorizontalBox* pop_hb;                                                     // 0x06F0 (size: 0x8)
    class UHorizontalBox* pop_housing_HB;                                             // 0x06F8 (size: 0x8)
    class UImage* popIcon;                                                            // 0x0700 (size: 0x8)
    class UImage* popIcon_1;                                                          // 0x0708 (size: 0x8)
    class UButton* pops_button;                                                       // 0x0710 (size: 0x8)
    class UCanvasPanel* problem_home;                                                 // 0x0718 (size: 0x8)
    class UCanvasPanel* problem_hunger;                                               // 0x0720 (size: 0x8)
    class UCanvasPanel* problem_spoil;                                                // 0x0728 (size: 0x8)
    class UBorder* problems_border;                                                   // 0x0730 (size: 0x8)
    class UHorizontalBox* problems_HB;                                                // 0x0738 (size: 0x8)
    class UTextBlock* regionName;                                                     // 0x0740 (size: 0x8)
    class USizeBox* regionName_SB;                                                    // 0x0748 (size: 0x8)
    class UButton* rename_button;                                                     // 0x0750 (size: 0x8)
    class UImage* ribbonLeft;                                                         // 0x0758 (size: 0x8)
    class UImage* ribbonRight;                                                        // 0x0760 (size: 0x8)
    class UHorizontalBox* right_hb;                                                   // 0x0768 (size: 0x8)
    class UImage* rightDecor_regionName;                                              // 0x0770 (size: 0x8)
    class UImage* settlement_lv;                                                      // 0x0778 (size: 0x8)
    class UImage* settlement_lv_1;                                                    // 0x0780 (size: 0x8)
    class UButton* show_census_button;                                                // 0x0788 (size: 0x8)
    class UButton* show_surplus_button;                                               // 0x0790 (size: 0x8)
    class UTextBlock* stat_assigned;                                                  // 0x0798 (size: 0x8)
    class UTextBlock* stat_housing_incoming_txt_1;                                    // 0x07A0 (size: 0x8)
    class UTextBlock* stat_housing_txt_1;                                             // 0x07A8 (size: 0x8)
    class UTextBlock* stat_num_txt_2;                                                 // 0x07B0 (size: 0x8)
    class UOverlay* stat_parent;                                                      // 0x07B8 (size: 0x8)
    class UTextBlock* stat_pop_txt;                                                   // 0x07C0 (size: 0x8)
    class UTextBlock* stat_unassigned;                                                // 0x07C8 (size: 0x8)
    class UBorder* supplies_border;                                                   // 0x07D0 (size: 0x8)
    class UHorizontalBox* supplies_hb;                                                // 0x07D8 (size: 0x8)
    class UTextBlock* txt_approval;                                                   // 0x07E0 (size: 0x8)
    class UTextBlock* txt_devpoints;                                                  // 0x07E8 (size: 0x8)
    class UTextBlock* txt_devpoints_1;                                                // 0x07F0 (size: 0x8)
    class UTextBlock* txt_marketAtt;                                                  // 0x07F8 (size: 0x8)
    class UTextBlock* txt_order;                                                      // 0x0800 (size: 0x8)
    class UTextBlock* txt_supplies;                                                   // 0x0808 (size: 0x8)
    class UTextBlock* txt_wealth;                                                     // 0x0810 (size: 0x8)
    class UOverlay* unassigned_parent;                                                // 0x0818 (size: 0x8)
    class UImage* warnBg;                                                             // 0x0820 (size: 0x8)
    class UImage* warnBg_1;                                                           // 0x0828 (size: 0x8)
    class UImage* warnBg_2;                                                           // 0x0830 (size: 0x8)
    class UHorizontalBox* wealth_hb_1;                                                // 0x0838 (size: 0x8)
    class UOverlay* wealth_parent;                                                    // 0x0840 (size: 0x8)
    class UCanvasPanel* wholeBar;                                                     // 0x0848 (size: 0x8)
    class APawnCPP* playerRef;                                                        // 0x0850 (size: 0x8)
    class ARegion* currentRegion_regionPanel;                                         // 0x0858 (size: 0x8)
    int32 prevPops;                                                                   // 0x0860 (size: 0x4)
    TArray<class UPrice_C*> priceWidgets;                                             // 0x0868 (size: 0x10)
    int32 lastWood;                                                                   // 0x0878 (size: 0x4)
    int32 lastStone;                                                                  // 0x087C (size: 0x4)
    bool policySelectionVisible;                                                      // 0x0880 (size: 0x1)
    bool warnSupplies;                                                                // 0x0881 (size: 0x1)
    double totalLoyaltyIncreaseLastTime;                                              // 0x0888 (size: 0x8)
    FLinearColor colorBad;                                                            // 0x0890 (size: 0x10)
    FLinearColor colorNeutral;                                                        // 0x08A0 (size: 0x10)
    FLinearColor colorGood;                                                           // 0x08B0 (size: 0x10)
    TArray<class UgoodStat_C*> statWidgets;                                           // 0x08C0 (size: 0x10)
    bool resourceBar_ShowSurplus;                                                     // 0x08D0 (size: 0x1)
    bool anyProblemBannerVisible;                                                     // 0x08D1 (size: 0x1)
    int32 prevApproval;                                                               // 0x08D4 (size: 0x4)
    int32 approval;                                                                   // 0x08D8 (size: 0x4)
    class ARegion* regionToSet;                                                       // 0x08E0 (size: 0x8)
    class ARegion* playersCurrentRegion;                                              // 0x08E8 (size: 0x8)

    void SequenceEvent__ENTRYPOINTRegionPanel(class UTextBlock* regionName);
    FNaviSubGridLayout ComputeSubGridLayout();
    void getMainUI(class UMainUICPP_C*& mainUI);
    void updateSuppliesTooltip();
    FLinearColor chooseApprovalColor();
    void Set Current Region for Region Panel(class ARegion* currentRegion_regionPanel);
    void updateSettlementLevel();
    void Translate();
    void updatePopulationDetailsTooltip();
    void turnPopList(FString Value);
    void Update Approval Tooltip();
    void updateProblemCount(int32& Num, class UWidget*& problemWidget, class UTextBlock*& countText);
    FLinearColor Get_supplies_border_ContentColorAndOpacity_0();
    class UWidget* Get_expenses_txt_ToolTipWidget_0();
    class UWidget* Get_peasants_hb_ToolTipWidget_0();
    class UWidget* Get_attractiveness_hb_ToolTipWidget_0();
    FText Get_txt_marketAtt_Text_0();
    class UWidget* Get_unassigned_button_ToolTipWidget_0();
    void Update Good Stats();
    void updateChosenPolicySlots();
    void updatePolicyVisibility();
    void switchPolicySelectionView();
    void udpateStats();
    void lerpAnimateRegionTooltip(double Alpha);
    void SequenceEvent_1(class UComboBoxString* Target);
    void updateStats();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void BndEvt__pops_button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__rename_button_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__tech_button_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void updateProblemWidgets();
    void BndEvt__RegionPanel_assigned_button_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__RegionPanel_livestock_button_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__RegionPanel_Button_10_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
    void ChangeCurrentRegionIfNeeded();
    void updateSurplusSetting();
    void updateRegionPanelInfo();
    void BndEvt__RegionPanel_rename_button_1_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature();
    void regionName_Event_0(class UTextBlock* regionName);
    void BndEvt__RegionPanel_show_surplus_button_1_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_RegionPanel(int32 EntryPoint);
}; // Size: 0x8F0

#endif
