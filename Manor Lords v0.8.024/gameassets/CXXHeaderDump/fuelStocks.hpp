#ifndef UE4SS_SDK_fuelStocks_HPP
#define UE4SS_SDK_fuelStocks_HPP

class UfuelStocks_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    class UButton* Add;                                                               // 0x0358 (size: 0x8)
    class UImage* fuel_img;                                                           // 0x0360 (size: 0x8)
    class UImage* fuel_img_1;                                                         // 0x0368 (size: 0x8)
    class UHorizontalBox* fuel_reserves_hb;                                           // 0x0370 (size: 0x8)
    class UTextBlock* fuelCount_txt;                                                  // 0x0378 (size: 0x8)
    class UButton* help_button_1;                                                     // 0x0380 (size: 0x8)
    class UImage* Image;                                                              // 0x0388 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0390 (size: 0x8)
    class UImage* Image_10;                                                           // 0x0398 (size: 0x8)
    class UImage* Image_47;                                                           // 0x03A0 (size: 0x8)
    class UImage* Image_150;                                                          // 0x03A8 (size: 0x8)
    class UImage* Image_205;                                                          // 0x03B0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_0;                                  // 0x03B8 (size: 0x8)
    class UMD_NaviAutoButton_C* naviBtn_Add;                                          // 0x03C0 (size: 0x8)
    class UMD_NaviAutoButton_C* naviBtn_Minus;                                        // 0x03C8 (size: 0x8)
    class UMD_NaviAutoTooltip_C* naviTooltip_Fuel;                                    // 0x03D0 (size: 0x8)
    class UButton* Remove;                                                            // 0x03D8 (size: 0x8)
    class UTextBlock* TextBlock;                                                      // 0x03E0 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x03E8 (size: 0x8)

    FNaviSubGridLayout ComputeSubGridLayout();
    void Update Fuel Stocks();
    void BndEvt__fuelStocks_add_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__fuelStocks_remove_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__fuelStocks_help_buildingType_1_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_fuelStocks(int32 EntryPoint);
}; // Size: 0x3F0

#endif
