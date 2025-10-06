#ifndef UE4SS_SDK_RegionPanel_HPP
#define UE4SS_SDK_RegionPanel_HPP

class URegionPanel_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UWidgetAnimation* changeRegionAnim;                                         // 0x0350 (size: 0x8)
    class UOverlay* approval_parent;                                                  // 0x0358 (size: 0x8)
    class UButton* ApprovalButton;                                                    // 0x0360 (size: 0x8)
    class UOverlay* assigned_parent;                                                  // 0x0368 (size: 0x8)
    class UHorizontalBox* center_hb;                                                  // 0x0370 (size: 0x8)
    class UHorizontalBox* constructionResources_HB;                                   // 0x0378 (size: 0x8)
    class UButton* dev_button;                                                        // 0x0380 (size: 0x8)
    class UBorder* dev_point_border;                                                  // 0x0388 (size: 0x8)
    class UImage* dev_point_highlight;                                                // 0x0390 (size: 0x8)
    class UTextBlock* expenses_txt;                                                   // 0x0398 (size: 0x8)
    class UgoodStat_C* goodStat;                                                      // 0x03A0 (size: 0x8)
    class UgoodStat_C* goodStat_1;                                                    // 0x03A8 (size: 0x8)
    class UgoodStat_C* goodStat_2;                                                    // 0x03B0 (size: 0x8)
    class UgoodStat_C* goodStat_3;                                                    // 0x03B8 (size: 0x8)
    class UgoodStat_C* goodStat_4;                                                    // 0x03C0 (size: 0x8)
    class UgoodStat_C* goodStat_5;                                                    // 0x03C8 (size: 0x8)
    class UgoodStat_C* goodStat_6;                                                    // 0x03D0 (size: 0x8)
    class UgoodStat_C* goodStat_7;                                                    // 0x03D8 (size: 0x8)
    class UgoodStat_C* goodStat_8;                                                    // 0x03E0 (size: 0x8)
    class UgoodStat_C* goodStat_9;                                                    // 0x03E8 (size: 0x8)
    class UgoodStat_C* goodStat_11;                                                   // 0x03F0 (size: 0x8)
    class UgoodStat_C* goodStat_12;                                                   // 0x03F8 (size: 0x8)
    class UgoodStat_C* goodStat_13;                                                   // 0x0400 (size: 0x8)
    class UgoodStat_C* goodStat_14;                                                   // 0x0408 (size: 0x8)
    class UgoodStat_C* goodStat_15;                                                   // 0x0410 (size: 0x8)
    class UgoodStat_C* goodStat_Crops;                                                // 0x0418 (size: 0x8)
    class UImage* Image;                                                              // 0x0420 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0428 (size: 0x8)
    class UImage* Image_6;                                                            // 0x0430 (size: 0x8)
    class UImage* Image_10;                                                           // 0x0438 (size: 0x8)
    class UImage* Image_12;                                                           // 0x0440 (size: 0x8)
    class UImage* Image_15;                                                           // 0x0448 (size: 0x8)
    class UImage* Image_21;                                                           // 0x0450 (size: 0x8)
    class UImage* Image_89;                                                           // 0x0458 (size: 0x8)
    class UImage* Image_111;                                                          // 0x0460 (size: 0x8)
    class UImage* Image_121;                                                          // 0x0468 (size: 0x8)
    class UHorizontalBox* left_hb;                                                    // 0x0470 (size: 0x8)
    class UImage* leftDecor_regionname;                                               // 0x0478 (size: 0x8)
    class UlocalizedTextBox_C* lostControlText;                                       // 0x0480 (size: 0x8)
    class UImage* loyalty_arrow;                                                      // 0x0488 (size: 0x8)
    class UMD_NaviAutoTooltip_C* MD_NaviAutoTooltip;                                  // 0x0490 (size: 0x8)
    class UMD_NaviAutoTooltip_C* MD_NaviAutoTooltip_1;                                // 0x0498 (size: 0x8)
    class UMD_NaviAutoTooltip_C* MD_NaviAutoTooltip_162;                              // 0x04A0 (size: 0x8)
    class UMD_NaviAutoTooltip_C* MD_NaviAutoTooltip_176;                              // 0x04A8 (size: 0x8)
    class UMD_NaviAutoTooltip_C* MD_NaviAutoTooltip_304;                              // 0x04B0 (size: 0x8)
    class UMD_NaviAutoTooltip_C* MD_NaviAutoTooltip_492;                              // 0x04B8 (size: 0x8)
    class UMD_NaviAutoTooltip_C* MD_NaviAutoTooltip_637;                              // 0x04C0 (size: 0x8)
    class UMD_NaviAutoTooltip_C* MD_NaviAutoTooltip_779;                              // 0x04C8 (size: 0x8)
    class UMD_NaviAutoTooltip_C* MD_NaviAutoTooltip_931;                              // 0x04D0 (size: 0x8)
    class UMD_NaviAutoTooltip_C* MD_NaviAutoTooltip_1066;                             // 0x04D8 (size: 0x8)
    class UMD_NaviAutoButton_C* navi_devBtn;                                          // 0x04E0 (size: 0x8)
    class UMD_NaviAutoButton_C* navi_surplusToggle;                                   // 0x04E8 (size: 0x8)
    class UHorizontalBox* non_construction_resources;                                 // 0x04F0 (size: 0x8)
    class UImage* order_arrow_1;                                                      // 0x04F8 (size: 0x8)
    class UOverlay* order_parent;                                                     // 0x0500 (size: 0x8)
    class UOverlay* Overlay_livingSpace;                                              // 0x0508 (size: 0x8)
    class UOverlay* Overlay_plots;                                                    // 0x0510 (size: 0x8)
    class UImage* pop_growth_arrow;                                                   // 0x0518 (size: 0x8)
    class UHorizontalBox* pop_housing_HB;                                             // 0x0520 (size: 0x8)
    class UImage* popIcon;                                                            // 0x0528 (size: 0x8)
    class UProblemBannerList_C* ProblemBannerList;                                    // 0x0530 (size: 0x8)
    class UTextBlock* regionName;                                                     // 0x0538 (size: 0x8)
    class USizeBox* regionName_SB;                                                    // 0x0540 (size: 0x8)
    class UHorizontalBox* regionNameContainer;                                        // 0x0548 (size: 0x8)
    class UImage* ribbonLeft;                                                         // 0x0550 (size: 0x8)
    class UImage* ribbonRight;                                                        // 0x0558 (size: 0x8)
    class UHorizontalBox* right_hb;                                                   // 0x0560 (size: 0x8)
    class UImage* rightDecor_regionName;                                              // 0x0568 (size: 0x8)
    class UImage* settlement_lv;                                                      // 0x0570 (size: 0x8)
    class UImage* settlement_lv_1;                                                    // 0x0578 (size: 0x8)
    class UButton* show_surplus_button;                                               // 0x0580 (size: 0x8)
    class UTextBlock* stat_assigned;                                                  // 0x0588 (size: 0x8)
    class UTextBlock* stat_housing_incoming;                                          // 0x0590 (size: 0x8)
    class UTextBlock* stat_housing_txt_1;                                             // 0x0598 (size: 0x8)
    class UTextBlock* stat_num_txt_2;                                                 // 0x05A0 (size: 0x8)
    class UOverlay* stat_parent;                                                      // 0x05A8 (size: 0x8)
    class UTextBlock* stat_plots_incoming_txt;                                        // 0x05B0 (size: 0x8)
    class UTextBlock* stat_plots_txt;                                                 // 0x05B8 (size: 0x8)
    class UTextBlock* stat_pop_txt;                                                   // 0x05C0 (size: 0x8)
    class UTextBlock* stat_unassigned;                                                // 0x05C8 (size: 0x8)
    class UBorder* supplies_border;                                                   // 0x05D0 (size: 0x8)
    class UHorizontalBox* supplies_hb;                                                // 0x05D8 (size: 0x8)
    class UTextBlock* txt_approval;                                                   // 0x05E0 (size: 0x8)
    class UTextBlock* txt_devpoints;                                                  // 0x05E8 (size: 0x8)
    class UTextBlock* txt_order;                                                      // 0x05F0 (size: 0x8)
    class UTextBlock* txt_supplies;                                                   // 0x05F8 (size: 0x8)
    class UTextBlock* txt_wealth;                                                     // 0x0600 (size: 0x8)
    class UOverlay* unassigned_parent;                                                // 0x0608 (size: 0x8)
    class UHorizontalBox* wealth_hb_1;                                                // 0x0610 (size: 0x8)
    class UOverlay* wealth_parent;                                                    // 0x0618 (size: 0x8)
    class UCanvasPanel* wholeBar;                                                     // 0x0620 (size: 0x8)
    class APawnCPP* playerRef;                                                        // 0x0628 (size: 0x8)
    class ARegion* currentRegion_regionPanel;                                         // 0x0630 (size: 0x8)
    int32 prevPops;                                                                   // 0x0638 (size: 0x4)
    TArray<class UPrice_C*> priceWidgets;                                             // 0x0640 (size: 0x10)
    int32 lastWood;                                                                   // 0x0650 (size: 0x4)
    int32 lastStone;                                                                  // 0x0654 (size: 0x4)
    bool warnSupplies;                                                                // 0x0658 (size: 0x1)
    double totalLoyaltyIncreaseLastTime;                                              // 0x0660 (size: 0x8)
    FLinearColor colorBad;                                                            // 0x0668 (size: 0x10)
    FLinearColor colorNeutral;                                                        // 0x0678 (size: 0x10)
    FLinearColor colorGood;                                                           // 0x0688 (size: 0x10)
    TArray<class UgoodStat_C*> statWidgets;                                           // 0x0698 (size: 0x10)
    bool resourceBar_ShowSurplus;                                                     // 0x06A8 (size: 0x1)
    int32 prevApproval;                                                               // 0x06AC (size: 0x4)
    int32 Approval;                                                                   // 0x06B0 (size: 0x4)
    class ARegion* regionToSet;                                                       // 0x06B8 (size: 0x8)
    class ARegion* playersCurrentRegion;                                              // 0x06C0 (size: 0x8)

    void SequenceEvent__ENTRYPOINTRegionPanel(class UTextBlock* regionName);
    void HasDevPointReadyToUse(bool& HasDevPoint);
    void UpdatePopulationGrowth();
    void UpdateApproval();
    void RegionPanel_AutoGenFunc(FApproval NewApprovalData);
    void collectGoodStatWidgetsToArray();
    void updatePlotsAndPopulationStats();
    void Update Problem Banners DEPREC(bool& AtleastOneBannerVisible, bool& BannersDidChange);
    void AnimateConstructionResources();
    FNaviSubGridLayout ComputeSubGridLayout();
    void getMainUI(class UMainUICPP_C*& mainUI);
    void updateSuppliesTooltip();
    FLinearColor chooseApprovalColor();
    void Set Current Region for Region Panel(class ARegion* currentRegion_regionPanel);
    void updateSettlementLevel();
    void Translate();
    void updatePlotDetailsTooltip();
    void updatePopulationDetailsTooltip();
    void turnPopList(FString Value);
    void Update Approval Tooltip(bool UpdatePopulationGrowthTooltipToo);
    void updateProblemCount(int32& Num, class UWidget*& problemWidget, class UTextBlock*& countText);
    FLinearColor Get_supplies_border_ContentColorAndOpacity_0();
    class UWidget* Get_expenses_txt_ToolTipWidget_0();
    class UWidget* Get_peasants_hb_ToolTipWidget_0();
    class UWidget* Get_attractiveness_hb_ToolTipWidget_0();
    FText Get_txt_marketAtt_Text_0();
    class UWidget* Get_unassigned_button_ToolTipWidget_0();
    void Update Good Stats(bool regionChanged);
    void doUpdateStats(bool regionChanged);
    void lerpAnimateRegionTooltip(double Alpha);
    void SequenceEvent_1(class UComboBoxString* Target);
    void BndEvt__tech_button_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void Construct();
    void updateProblemWidgets_DEPREC();
    void BndEvt__RegionPanel_Button_10_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
    void updateSurplusSetting();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void updateStatsAndProblems(bool regionChanged);
    void ChangeCurrentRegionIfNeeded();
    void updateRegionPanelInfo();
    void BndEvt__RegionPanel_ApprovalButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__RegionPanel_ApprovalButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__RegionPanel_ApprovalButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
    void regionName_Event_0(class UTextBlock* regionName);
    void ExecuteUbergraph_RegionPanel(int32 EntryPoint);
}; // Size: 0x6C8

#endif
