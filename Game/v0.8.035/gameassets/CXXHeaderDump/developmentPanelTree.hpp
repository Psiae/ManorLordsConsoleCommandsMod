#ifndef UE4SS_SDK_developmentPanelTree_HPP
#define UE4SS_SDK_developmentPanelTree_HPP

class UdevelopmentPanelTree_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UWidgetAnimation* duckHeader;                                               // 0x0350 (size: 0x8)
    class UWidgetAnimation* openAnim;                                                 // 0x0358 (size: 0x8)
    class UVerticalBox* allPolicies_VB;                                               // 0x0360 (size: 0x8)
    class UTextBlock* availablePoints_txt;                                            // 0x0368 (size: 0x8)
    class UBorder* avPoints_border;                                                   // 0x0370 (size: 0x8)
    class UBorder* ClickBindTarget;                                                   // 0x0378 (size: 0x8)
    class UVerticalBox* close_vb;                                                     // 0x0380 (size: 0x8)
    class UmenuButton_C* closeButton;                                                 // 0x0388 (size: 0x8)
    class UComboBoxString* ComboBoxString_399;                                        // 0x0390 (size: 0x8)
    class UOverlay* DataCanvas;                                                       // 0x0398 (size: 0x8)
    class UHorizontalRadioSelect_C* DataCategories;                                   // 0x03A0 (size: 0x8)
    class UOverlay* development_Overlay;                                              // 0x03A8 (size: 0x8)
    class UOverlay* Environment_Overlay;                                              // 0x03B0 (size: 0x8)
    class UImage* gradient_img;                                                       // 0x03B8 (size: 0x8)
    class UVerticalBox* header_VB;                                                    // 0x03C0 (size: 0x8)
    class UHorizontalRadioSelect_C* HorizontalRadioSelect_MainCategories;             // 0x03C8 (size: 0x8)
    class UImage* Image_2;                                                            // 0x03D0 (size: 0x8)
    class UImage* Image_13;                                                           // 0x03D8 (size: 0x8)
    class UImage* Image_74;                                                           // 0x03E0 (size: 0x8)
    class UImage* Image_82;                                                           // 0x03E8 (size: 0x8)
    class UImage* Image_133;                                                          // 0x03F0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x03F8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_1;                                    // 0x0400 (size: 0x8)
    class UVerticalBox* main_vb;                                                      // 0x0408 (size: 0x8)
    class UCanvasPanel* MainCanvas;                                                   // 0x0410 (size: 0x8)
    class USizeBox* MainSizeBox;                                                      // 0x0418 (size: 0x8)
    class UMD_NaviComboBoxWrapper_C* navi_tradeLogTimeRange;                          // 0x0420 (size: 0x8)
    class UMD_NaviAutoButton_C* naviBtn_regionEditName;                               // 0x0428 (size: 0x8)
    class UMD_NaviAutoButton_C* naviBtn_regionNext;                                   // 0x0430 (size: 0x8)
    class UMD_NaviAutoButton_C* naviBtn_regionPrev;                                   // 0x0438 (size: 0x8)
    class UlocalizedTextBox_C* noRecentTransactions_txt;                              // 0x0440 (size: 0x8)
    class UImage* pattern_backdrop_dev_IMG;                                           // 0x0448 (size: 0x8)
    class UImage* pattern_backdrop_environment_IMG;                                   // 0x0450 (size: 0x8)
    class UImage* perk_decor_gradient_add_img;                                        // 0x0458 (size: 0x8)
    class UImage* perk_decor_gradient_sub;                                            // 0x0460 (size: 0x8)
    class UImage* perk_decor_top_img;                                                 // 0x0468 (size: 0x8)
    class UBP_PerkOverviewPanel_C* PerkOverviewPanel;                                 // 0x0470 (size: 0x8)
    class UHorizontalBox* policies_HB;                                                // 0x0478 (size: 0x8)
    class UTextBlock* PoliciesSignedText;                                             // 0x0480 (size: 0x8)
    class UHorizontalBox* PolicyRow_I;                                                // 0x0488 (size: 0x8)
    class UHorizontalBox* PolicyRow_II;                                               // 0x0490 (size: 0x8)
    class UHorizontalBox* PolicyRow_III;                                              // 0x0498 (size: 0x8)
    class UHorizontalBox* PolicyRow_IV;                                               // 0x04A0 (size: 0x8)
    class UpolicyWidget_C* policyWidget;                                              // 0x04A8 (size: 0x8)
    class UpolicyWidget_C* policyWidget_1;                                            // 0x04B0 (size: 0x8)
    class UpolicyWidget_C* policyWidget_2;                                            // 0x04B8 (size: 0x8)
    class UpolicyWidget_C* policyWidget_3;                                            // 0x04C0 (size: 0x8)
    class UpolicyWidget_C* policyWidget_4;                                            // 0x04C8 (size: 0x8)
    class UpolicyWidget_C* policyWidget_5;                                            // 0x04D0 (size: 0x8)
    class UpolicyWidget_C* policyWidget_6;                                            // 0x04D8 (size: 0x8)
    class UpolicyWidget_C* policyWidget_7;                                            // 0x04E0 (size: 0x8)
    class UpolicyWidget_C* policyWidget_8;                                            // 0x04E8 (size: 0x8)
    class UpolicyWidget_C* policyWidget_9;                                            // 0x04F0 (size: 0x8)
    class UpolicyWidget_C* policyWidget_10;                                           // 0x04F8 (size: 0x8)
    class UpolicyWidget_C* policyWidget_11;                                           // 0x0500 (size: 0x8)
    class UpolicyWidget_C* policyWidget_12;                                           // 0x0508 (size: 0x8)
    class UpolicyWidget_C* policyWidget_13;                                           // 0x0510 (size: 0x8)
    class UpolicyWidget_C* policyWidget_14;                                           // 0x0518 (size: 0x8)
    class UpolicyWidget_C* policyWidget_15;                                           // 0x0520 (size: 0x8)
    class UpolicyWidget_C* policyWidget_16;                                           // 0x0528 (size: 0x8)
    class UpolicyWidget_C* policyWidget_17;                                           // 0x0530 (size: 0x8)
    class UpolicyWidget_C* policyWidget_18;                                           // 0x0538 (size: 0x8)
    class UpolicyWidget_C* policyWidget_19;                                           // 0x0540 (size: 0x8)
    class UpolicyWidget_C* policyWidget_20;                                           // 0x0548 (size: 0x8)
    class UCanvasPanel* ProductionViewCanvas;                                         // 0x0550 (size: 0x8)
    class UImage* regionName_spacer;                                                  // 0x0558 (size: 0x8)
    class UTextBlock* regionName_txt;                                                 // 0x0560 (size: 0x8)
    class UButton* regionNextButton;                                                  // 0x0568 (size: 0x8)
    class UButton* regionPrevButton;                                                  // 0x0570 (size: 0x8)
    class UregionProductionPanel_Widget_C* RegionProductionPanel;                     // 0x0578 (size: 0x8)
    class UButton* rename_button_1;                                                   // 0x0580 (size: 0x8)
    class URichTextBlock* RichTextBlock_138;                                          // 0x0588 (size: 0x8)
    class UTextBlock* TextBlock_15;                                                   // 0x0590 (size: 0x8)
    class UHorizontalRadioSelect_C* tradeLogCategorySelect;                           // 0x0598 (size: 0x8)
    class UWrapBox* tradeLogGood_wrapBox;                                             // 0x05A0 (size: 0x8)
    class UImage* tradeScreenBG_Img;                                                  // 0x05A8 (size: 0x8)
    class UImage* tradeSpacerTop;                                                     // 0x05B0 (size: 0x8)
    class UImage* tradeSpacerTop_1;                                                   // 0x05B8 (size: 0x8)
    class UCanvasPanel* tradeViewCanvas;                                              // 0x05C0 (size: 0x8)
    class UtransactionLog_C* transactionLog;                                          // 0x05C8 (size: 0x8)
    class UScrollBox* TransactionLogScrollBox;                                        // 0x05D0 (size: 0x8)
    class UWidget_EnvironmentView_C* Widget_EnvironmentView;                          // 0x05D8 (size: 0x8)
    class ARegion* Region;                                                            // 0x05E0 (size: 0x8)
    FVector TierHighlight;                                                            // 0x05E8 (size: 0x18)
    double TierThres01;                                                               // 0x0600 (size: 0x8)
    double deltaT;                                                                    // 0x0608 (size: 0x8)
    double TierThres02;                                                               // 0x0610 (size: 0x8)
    double TierThres03;                                                               // 0x0618 (size: 0x8)
    int32 numPointSpent;                                                              // 0x0620 (size: 0x4)
    double treeZoomLv;                                                                // 0x0628 (size: 0x8)
    bool dragging;                                                                    // 0x0630 (size: 0x1)
    FVector2D prevMousePos2D;                                                         // 0x0638 (size: 0x10)
    FVector2D treeOffset;                                                             // 0x0648 (size: 0x10)
    FString currentCategory;                                                          // 0x0658 (size: 0x10)
    TArray<class UpolicyWidget_C*> allPolicyWidgets;                                  // 0x0668 (size: 0x10)
    int32 tradeViewStartDay;                                                          // 0x0678 (size: 0x4)
    int32 tradeViewEndDay;                                                            // 0x067C (size: 0x4)
    int32 tradeViewCurrentDay;                                                        // 0x0680 (size: 0x4)
    double ControllerTreePanSpeed;                                                    // 0x0688 (size: 0x8)
    double ControllerTreeZoomSpeed;                                                   // 0x0690 (size: 0x8)
    bool IsReturnButton;                                                              // 0x0698 (size: 0x1)
    class UBP_PerkSelectionPanel_C* ShownPerkSelectionSubmenu;                        // 0x06A0 (size: 0x8)
    double OpacityDelta;                                                              // 0x06A8 (size: 0x8)
    FString previousCategory;                                                         // 0x06B0 (size: 0x10)
    class UImage* previouslyChangeOpacity_Img;                                        // 0x06C0 (size: 0x8)

    void RemovePolicies_EarlyAccess(class URadioSelect* category select);
    void AnimateBackgrounds(double Delta);
    void ResetBackgroundOpacity(class UImage* Target);
    void SetBackgroundOpacity(class UImage* TargetImage, double Delta);
    void playOpenAnimation();
    void updateCloseButtonText(ESlateVisibility A);
    void OnTransactionlogEntryFocused(bool HasFocus);
    void AlterTreeZoomLv(double UnclampedDelta);
    void AlterTreeOffset(FVector2D UnlampedDelta);
    void ApplyPlatformLimits();
    bool HandleTabShift(int32 tabDelta);
    FEventReply OnMouseButtonUp_0(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonDown_0(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FNaviSubGridLayout ComputeSubGridLayout();
    void updateTradeViewSummaryText();
    void repopulateTradeSummaryGoods();
    void setTradeViewStartAndEndDays();
    class UWidget* OnGenerateWidget(FString Item);
    void updateTradeView();
    void updatePolicies();
    void lerpInOutCategory(FString CategoryName, class UWidget* Widget);
    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void animateTierRings();
    void BndEvt__developmentPanelTree_regionDevelopmentPanel_K2Node_ComponentBoundEvent_0_PerkSlotPressed__DelegateSignature(int32 PerkSlotIndex, int32 PerkSlotSettlementLevel, FName SlotName);
    void BndEvt__developmentPanelTree_regionNextButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__developmentPanelTree_regionPrevButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void UpdateContents();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Close();
    void BndEvt__developmentPanelTree_rename_button_1_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__developmentPanelTree_HorizontalRadioSelect_K2Node_ComponentBoundEvent_4_RadioSelectedSignature__DelegateSignature(FString Value);
    void updatePoliciesEvent();
    void BndEvt__developmentPanelTree_menuButton_K2Node_ComponentBoundEvent_1_onReleased__DelegateSignature();
    void BndEvt__developmentPanelTree_HorizontalRadioSelect_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature(FString Value);
    void BndEvt__developmentPanelTree_ComboBoxString_399_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void InpAxisEvt_Controller_LeftAnalog_Forward_K2Node_InputAxisEvent_0(float AxisValue);
    void InpAxisEvt_Controller_LeftAnalog_Rightward_K2Node_InputAxisEvent_1(float AxisValue);
    void InpAxisEvt_Controller_RightAnalog_Up_K2Node_InputAxisEvent_2(float AxisValue);
    void BndEvt__developmentPanelTree_HorizontalRadioSelect_MainCategories_1_K2Node_ComponentBoundEvent_5_RadioSelectedSignature__DelegateSignature(FString Value);
    void CustomShowPanel(FString Category, FString Subcategory);
    void ExecuteUbergraph_developmentPanelTree(int32 EntryPoint);
}; // Size: 0x6C8

#endif
