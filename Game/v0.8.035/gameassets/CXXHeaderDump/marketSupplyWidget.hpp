#ifndef UE4SS_SDK_marketSupplyWidget_HPP
#define UE4SS_SDK_marketSupplyWidget_HPP

class UmarketSupplyWidget_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UButton* Add;                                                               // 0x0350 (size: 0x8)
    class UButton* aleSupply_button;                                                  // 0x0358 (size: 0x8)
    class UHorizontalBox* availableStalls_HB;                                         // 0x0360 (size: 0x8)
    class UImage* buildingHelp_3;                                                     // 0x0368 (size: 0x8)
    class UButton* commodities_button;                                                // 0x0370 (size: 0x8)
    class UTextBlock* connected_supply_blds_num;                                      // 0x0378 (size: 0x8)
    class UTextBlock* connected_supply_blds_num_1;                                    // 0x0380 (size: 0x8)
    class UTextBlock* connected_supply_blds_num_4;                                    // 0x0388 (size: 0x8)
    class UVerticalBox* distribution_drink_vb;                                        // 0x0390 (size: 0x8)
    class UVerticalBox* distribution_marketstalls_VB;                                 // 0x0398 (size: 0x8)
    class UVerticalBox* distribution_water_VB;                                        // 0x03A0 (size: 0x8)
    class UVerticalBox* distributions_parent_all;                                     // 0x03A8 (size: 0x8)
    class UHorizontalBox* fabrics_HB;                                                 // 0x03B0 (size: 0x8)
    class UProgressBar* food_capacity_bar_1;                                          // 0x03B8 (size: 0x8)
    class UTextBlock* foodCapTxt;                                                     // 0x03C0 (size: 0x8)
    class UTextBlock* foodCapTxt_1;                                                   // 0x03C8 (size: 0x8)
    class UButton* foods_button;                                                      // 0x03D0 (size: 0x8)
    class UButton* fuel_button;                                                       // 0x03D8 (size: 0x8)
    class UProgressBar* general_storage_capacity_bar;                                 // 0x03E0 (size: 0x8)
    class UTextBlock* goodsCapTxt;                                                    // 0x03E8 (size: 0x8)
    class UTextBlock* goodsCapTxt_1;                                                  // 0x03F0 (size: 0x8)
    class UButton* help_buildingType_3;                                               // 0x03F8 (size: 0x8)
    class UImage* Image;                                                              // 0x0400 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0408 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0410 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0418 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0420 (size: 0x8)
    class UImage* Image_5;                                                            // 0x0428 (size: 0x8)
    class UImage* Image_6;                                                            // 0x0430 (size: 0x8)
    class UImage* Image_7;                                                            // 0x0438 (size: 0x8)
    class UImage* Image_8;                                                            // 0x0440 (size: 0x8)
    class UImage* Image_9;                                                            // 0x0448 (size: 0x8)
    class UImage* Image_10;                                                           // 0x0450 (size: 0x8)
    class UImage* Image_11;                                                           // 0x0458 (size: 0x8)
    class UImage* Image_12;                                                           // 0x0460 (size: 0x8)
    class UImage* Image_13;                                                           // 0x0468 (size: 0x8)
    class UImage* Image_14;                                                           // 0x0470 (size: 0x8)
    class UImage* Image_15;                                                           // 0x0478 (size: 0x8)
    class UImage* Image_16;                                                           // 0x0480 (size: 0x8)
    class UImage* Image_17;                                                           // 0x0488 (size: 0x8)
    class UImage* Image_19;                                                           // 0x0490 (size: 0x8)
    class UImage* Image_92;                                                           // 0x0498 (size: 0x8)
    class UImage* Image_125;                                                          // 0x04A0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x04A8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C;                                    // 0x04B0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_1;                                  // 0x04B8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_2;                                  // 0x04C0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_3;                                  // 0x04C8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_4;                                  // 0x04D0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_5;                                  // 0x04D8 (size: 0x8)
    class UImage* LogIcon;                                                            // 0x04E0 (size: 0x8)
    class UMD_NaviAutoButton_C* navi_Help3;                                           // 0x04E8 (size: 0x8)
    class UMD_NaviAutoButton_C* navi_HoverAle;                                        // 0x04F0 (size: 0x8)
    class UMD_NaviAutoButton_C* navi_HoverCommodities;                                // 0x04F8 (size: 0x8)
    class UMD_NaviAutoButton_C* navi_HoverFood;                                       // 0x0500 (size: 0x8)
    class UMD_NaviAutoButton_C* navi_HoverFuel;                                       // 0x0508 (size: 0x8)
    class UMD_NaviAutoButton_C* navi_HoverWater;                                      // 0x0510 (size: 0x8)
    class UMD_NaviAutoTooltip_C* navi_overstockTooltip;                               // 0x0518 (size: 0x8)
    class UMD_NaviAutoButton_C* naviAddBtn;                                           // 0x0520 (size: 0x8)
    class UMD_NaviAutoButton_C* naviRemoveBtn;                                        // 0x0528 (size: 0x8)
    class UHorizontalBox* overstock_HB;                                               // 0x0530 (size: 0x8)
    class UHorizontalBox* overstock_textHB;                                           // 0x0538 (size: 0x8)
    class UTextBlock* OverstockAmtTxt;                                                // 0x0540 (size: 0x8)
    class UTextBlock* regionName;                                                     // 0x0548 (size: 0x8)
    class UButton* Remove;                                                            // 0x0550 (size: 0x8)
    class UVerticalBox* requirements_VB;                                              // 0x0558 (size: 0x8)
    class UImage* spacer_bottom;                                                      // 0x0560 (size: 0x8)
    class UImage* spacer_bottom_1;                                                    // 0x0568 (size: 0x8)
    class UImage* spacer_header;                                                      // 0x0570 (size: 0x8)
    class UImage* spacer_mid;                                                         // 0x0578 (size: 0x8)
    class UTextBlock* stallLocations_txt;                                             // 0x0580 (size: 0x8)
    class UVerticalBox* SupplyCapacity_MarketStalls_VB;                               // 0x0588 (size: 0x8)
    class UTextBlock* supplyPerc_ale_txt;                                             // 0x0590 (size: 0x8)
    class UTextBlock* supplyPerc_clothing_txt;                                        // 0x0598 (size: 0x8)
    class UTextBlock* supplyPerc_fabrics_txt;                                         // 0x05A0 (size: 0x8)
    class UTextBlock* supplyPerc_food_txt;                                            // 0x05A8 (size: 0x8)
    class UTextBlock* supplyPerc_fuel_txt;                                            // 0x05B0 (size: 0x8)
    class UTextBlock* supplyPerc_water_txt_1;                                         // 0x05B8 (size: 0x8)
    class UTextBlock* text_occasionalNeeds;                                           // 0x05C0 (size: 0x8)
    class UlocalizedTextBox_C* text_occasionalNeeds_1;                                // 0x05C8 (size: 0x8)
    class UTextBlock* text_occasionalNeeds_3;                                         // 0x05D0 (size: 0x8)
    class UButton* waterSupply_button_1;                                              // 0x05D8 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x05E0 (size: 0x8)

    FNaviSubGridLayout ComputeSubGridLayout();
    void removeOverstockSettingForWells();
    void changeOverstockAmt(int32 change);
    void setShowMarketDistributionOverlay(EResidentialRequirement displayRequirement, bool showFlag, EItemSubcategory InMustContainSubcategory);
    void setWidgetVisibilityBasedOnDistributionType();
    double getProgressBarValue(int32 supplied, int32 capacity);
    void updateSupplyMeterTooltip(class UWidget* Target, TArray<int32>& displayGoodTypes, bool Show Requirement Lv, class UTexture2D* Storage Type Icon);
    void updateSupplyWidget();
    void BndEvt__marketSupplyWidget_foods_button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__marketSupplyWidget_Button_2_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__marketSupplyWidget_Button_2_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__marketSupplyWidget_foods_button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__marketSupplyWidget_waterSupply_button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__marketSupplyWidget_waterSupply_button_1_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__marketSupplyWidget_aleSupply_button_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__marketSupplyWidget_aleSupply_button_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__marketSupplyWidget_help_buildingType_3_K2Node_ComponentBoundEvent_10_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__marketSupplyWidget_add_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__marketSupplyWidget_remove_K2Node_ComponentBoundEvent_12_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__marketSupplyWidget_fuel_button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__marketSupplyWidget_navi_HoverFood_K2Node_ComponentBoundEvent_13_OnFocusChange__DelegateSignature(bool HasFocus);
    void BndEvt__marketSupplyWidget_fuel_button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__marketSupplyWidget_navi_HoverFuel_K2Node_ComponentBoundEvent_14_OnFocusChange__DelegateSignature(bool HasFocus);
    void BndEvt__marketSupplyWidget_navi_HoverClothing_K2Node_ComponentBoundEvent_16_OnFocusChange__DelegateSignature(bool HasFocus);
    void BndEvt__marketSupplyWidget_navi_HoverWater_K2Node_ComponentBoundEvent_20_OnFocusChange__DelegateSignature(bool HasFocus);
    void BndEvt__marketSupplyWidget_navi_HoverAle_K2Node_ComponentBoundEvent_22_OnFocusChange__DelegateSignature(bool HasFocus);
    void Construct();
    void ExecuteUbergraph_marketSupplyWidget(int32 EntryPoint);
}; // Size: 0x5E8

#endif
