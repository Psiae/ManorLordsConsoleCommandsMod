#ifndef UE4SS_SDK_generalMarketTradeWidget_HPP
#define UE4SS_SDK_generalMarketTradeWidget_HPP

class UgeneralMarketTradeWidget_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UButton* Add;                                                               // 0x0350 (size: 0x8)
    class UHorizontalRadioSelect_C* categoryHorizontalRadioSelect;                    // 0x0358 (size: 0x8)
    class UVerticalBox* goodsList_advanced;                                           // 0x0360 (size: 0x8)
    class UVerticalBox* goodsList_basic;                                              // 0x0368 (size: 0x8)
    class UHorizontalBox* HorizontalBox;                                              // 0x0370 (size: 0x8)
    class UHorizontalBox* HorizontalBox_56;                                           // 0x0378 (size: 0x8)
    class UHorizontalBox* HorizontalBox_72;                                           // 0x0380 (size: 0x8)
    class UImage* Image;                                                              // 0x0388 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0390 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0398 (size: 0x8)
    class UImage* Image_3;                                                            // 0x03A0 (size: 0x8)
    class UImage* Image_10;                                                           // 0x03A8 (size: 0x8)
    class UImage* Image_40;                                                           // 0x03B0 (size: 0x8)
    class UImage* Image_41;                                                           // 0x03B8 (size: 0x8)
    class UImage* Image_47;                                                           // 0x03C0 (size: 0x8)
    class UScrollBox* ItemsScrollBox;                                                 // 0x03C8 (size: 0x8)
    class UtargetStockWidget_tradeTarget_C* livestockMeter_Lamb;                      // 0x03D0 (size: 0x8)
    class UtargetStockWidget_tradeTarget_C* livestockMeter_Lamb_1;                    // 0x03D8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x03E0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_0;                                    // 0x03E8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_1;                                    // 0x03F0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_2;                                    // 0x03F8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_3;                                    // 0x0400 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_40;                                   // 0x0408 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_0;                                  // 0x0410 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_1;                                  // 0x0418 (size: 0x8)
    class UVerticalBox* main_vb;                                                      // 0x0420 (size: 0x8)
    class UTextBlock* numTravellingTraders;                                           // 0x0428 (size: 0x8)
    class UButton* Remove;                                                            // 0x0430 (size: 0x8)
    class UHorizontalBox* target_inv_hb;                                              // 0x0438 (size: 0x8)
    FString selectedCategory;                                                         // 0x0440 (size: 0x10)
    class ASMBuildingMaster* building;                                                // 0x0450 (size: 0x8)

    void ScrollFocusedItemIntoView(bool HasFocus);
    FNaviSubGridLayout ComputeSubGridLayout();
    void Construct();
    void BndEvt__generalMarketWidget_categoryHorizontalRadioSelect_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature(FString Value);
    void respawnGoodList();
    void ExecuteUbergraph_generalMarketTradeWidget(int32 EntryPoint);
}; // Size: 0x458

#endif
