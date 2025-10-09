#ifndef UE4SS_SDK_targetStockWidget_tradeTarget_HPP
#define UE4SS_SDK_targetStockWidget_tradeTarget_HPP

class UtargetStockWidget_tradeTarget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Add;                                                               // 0x02E8 (size: 0x8)
    class UBorder* Border_0;                                                          // 0x02F0 (size: 0x8)
    class UMLDefaultCheckbox_C* checkbox_globalTrade;                                 // 0x02F8 (size: 0x8)
    class UComboBoxString* ComboBox_TradeRule;                                        // 0x0300 (size: 0x8)
    class UEditableTextBox* EditableTextBox_TARGET_STOCK;                             // 0x0308 (size: 0x8)
    class UHorizontalBox* HorizontalBox;                                              // 0x0310 (size: 0x8)
    class UHorizontalBox* HorizontalBox_34;                                           // 0x0318 (size: 0x8)
    class UHorizontalBox* HorizontalBox_38;                                           // 0x0320 (size: 0x8)
    class UHorizontalBox* HorizontalBox_targetStock;                                  // 0x0328 (size: 0x8)
    class UHorizontalBox* HorizontalBox_tradeRule;                                    // 0x0330 (size: 0x8)
    class UHorizontalBox* HorizontalBox_tradeTarget;                                  // 0x0338 (size: 0x8)
    class UImage* Image;                                                              // 0x0340 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0348 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0350 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0358 (size: 0x8)
    class UImage* Image_10;                                                           // 0x0360 (size: 0x8)
    class UImage* Image_29;                                                           // 0x0368 (size: 0x8)
    class UImage* Image_62;                                                           // 0x0370 (size: 0x8)
    class UImage* Image_88;                                                           // 0x0378 (size: 0x8)
    class UImage* Image_131;                                                          // 0x0380 (size: 0x8)
    class UImage* Image_148;                                                          // 0x0388 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_connectionRequired;                   // 0x0390 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton;                                    // 0x0398 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton_89;                                 // 0x03A0 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton_183;                                // 0x03A8 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton_303;                                // 0x03B0 (size: 0x8)
    class UMD_NaviComboBoxWrapper_C* MD_NaviComboBoxWrapper_179;                      // 0x03B8 (size: 0x8)
    class UTextBlock* priceTxt;                                                       // 0x03C0 (size: 0x8)
    class UButton* Remove;                                                            // 0x03C8 (size: 0x8)
    class UImage* RightArrow;                                                         // 0x03D0 (size: 0x8)
    class USizeBox* SizeBox_3;                                                        // 0x03D8 (size: 0x8)
    class USizeBox* SizeBox_currentStock;                                             // 0x03E0 (size: 0x8)
    class USizeBox* SizeBox_demand;                                                   // 0x03E8 (size: 0x8)
    class USizeBox* SizeBox_goodType;                                                 // 0x03F0 (size: 0x8)
    class USlider* Slider_21;                                                         // 0x03F8 (size: 0x8)
    class UTextBlock* stock_txt;                                                      // 0x0400 (size: 0x8)
    class UHorizontalBox* target_inv_hb;                                              // 0x0408 (size: 0x8)
    class UTextBlock* TextBlock_17;                                                   // 0x0410 (size: 0x8)
    class UHorizontalBox* tradeOptions_HB;                                            // 0x0418 (size: 0x8)
    class UHorizontalBox* tradeRoute_HB;                                              // 0x0420 (size: 0x8)
    class UHorizontalBox* tradeRoute_unlock_hb;                                       // 0x0428 (size: 0x8)
    class UHorizontalBox* tradeRoute_unlocked_hb;                                     // 0x0430 (size: 0x8)
    class USizeBox* tradeRouteConnection_SB;                                          // 0x0438 (size: 0x8)
    class UImage* tradeRouteIcon;                                                     // 0x0440 (size: 0x8)
    class UTextBlock* tradeRouteUnlockPrice;                                          // 0x0448 (size: 0x8)
    class UButton* unlock_tade_route_button;                                          // 0x0450 (size: 0x8)
    class UButton* unlock_tade_route_button_show_merchant;                            // 0x0458 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x0460 (size: 0x8)
    int32 animalRole;                                                                 // 0x0468 (size: 0x4)
    class ASMBuildingMaster* building;                                                // 0x0470 (size: 0x8)
    class UTexture2D* iconTexture;                                                    // 0x0478 (size: 0x8)
    int32 ItemId;                                                                     // 0x0480 (size: 0x4)
    int32 targetInventoryAmt;                                                         // 0x0484 (size: 0x4)
    ETradeRule tradeRule;                                                             // 0x0488 (size: 0x1)
    int32 stock;                                                                      // 0x048C (size: 0x4)
    EItemCategory Category;                                                           // 0x0490 (size: 0x1)
    bool contentsUpdatedAtLeastOnce;                                                  // 0x0491 (size: 0x1)

    void updatePriceTooltip(bool noMajorTradeRoute, bool allow foreign trade);
    void updateForeignMarketSupplyIconAndTooltip(FName RowName, class UTexture2D* Texture);
    class UWidget* OnGenerateWidget_0(FString Item);
    void updateSetTargetStockVisibility_DEPREC();
    void updatePrice();
    void updateTargetText();
    void updateStock();
    void updateTradeRuleDisplay();
    void isPawnShiftDown(bool& Shift Pressed B);
    void getInventoryTarget(int32& Output);
    void setInventoryTarget(const int32& Target);
    void BndEvt__targetStockWidget_EditableTextBox_TARGET_STOCK_K2Node_ComponentBoundEvent_7_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__targetStockWidget_ComboBoxString_78_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__targetStockWidget_unlock_tade_route_button_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void unlockTradeRouteConfirm();
    void BndEvt__livestockMeter_add_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__livestockMeter_dev_button_1_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
    void updateContents();
    void BndEvt__livestockMeter_Slider_21_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__targetStockWidget_unlock_tade_route_button_show_merchant_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__livestockMeter_Slider_21_K2Node_ComponentBoundEvent_0_OnMouseCaptureEndEvent__DelegateSignature();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__targetStockWidget_marketGood_unlock_tade_route_button_show_merchant_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__targetStockWidget_tradeTarget_checkbox_globalTrade_K2Node_ComponentBoundEvent_10_OnValueChange__DelegateSignature(bool IsChecked);
    void ExecuteUbergraph_targetStockWidget_tradeTarget(int32 EntryPoint);
}; // Size: 0x492

#endif
