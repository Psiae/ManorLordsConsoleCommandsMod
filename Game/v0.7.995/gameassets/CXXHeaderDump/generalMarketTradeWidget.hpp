#ifndef UE4SS_SDK_generalMarketTradeWidget_HPP
#define UE4SS_SDK_generalMarketTradeWidget_HPP

class UgeneralMarketTradeWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Add;                                                               // 0x02E8 (size: 0x8)
    class UHorizontalRadioSelect_C* categoryHorizontalRadioSelect;                    // 0x02F0 (size: 0x8)
    class UVerticalBox* goodsList_advanced;                                           // 0x02F8 (size: 0x8)
    class UVerticalBox* goodsList_basic;                                              // 0x0300 (size: 0x8)
    class UHorizontalBox* HorizontalBox;                                              // 0x0308 (size: 0x8)
    class UHorizontalBox* HorizontalBox_56;                                           // 0x0310 (size: 0x8)
    class UHorizontalBox* HorizontalBox_72;                                           // 0x0318 (size: 0x8)
    class UImage* Image;                                                              // 0x0320 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0328 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0330 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0338 (size: 0x8)
    class UImage* Image_10;                                                           // 0x0340 (size: 0x8)
    class UImage* Image_40;                                                           // 0x0348 (size: 0x8)
    class UImage* Image_41;                                                           // 0x0350 (size: 0x8)
    class UImage* Image_47;                                                           // 0x0358 (size: 0x8)
    class UtargetStockWidget_tradeTarget_C* livestockMeter_Lamb;                      // 0x0360 (size: 0x8)
    class UtargetStockWidget_tradeTarget_C* livestockMeter_Lamb_1;                    // 0x0368 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x0370 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_0;                                    // 0x0378 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_1;                                    // 0x0380 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_2;                                    // 0x0388 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_3;                                    // 0x0390 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_40;                                   // 0x0398 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_0;                                  // 0x03A0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_1;                                  // 0x03A8 (size: 0x8)
    class UVerticalBox* main_vb;                                                      // 0x03B0 (size: 0x8)
    class UTextBlock* numTravellingTraders;                                           // 0x03B8 (size: 0x8)
    class UButton* Remove;                                                            // 0x03C0 (size: 0x8)
    class UHorizontalBox* target_inv_hb;                                              // 0x03C8 (size: 0x8)
    FString selectedCategory;                                                         // 0x03D0 (size: 0x10)
    class ASMBuildingMaster* building;                                                // 0x03E0 (size: 0x8)

    void filterCategory();
    void respawnGoodList();
    void BndEvt__generalMarketWidget_categoryHorizontalRadioSelect_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature(FString Value);
    void BndEvt__generalMarketWidget_add_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__generalMarketWidget_remove_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_generalMarketTradeWidget(int32 EntryPoint);
}; // Size: 0x3E8

#endif
