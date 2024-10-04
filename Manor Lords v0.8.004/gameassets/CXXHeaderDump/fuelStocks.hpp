#ifndef UE4SS_SDK_fuelStocks_HPP
#define UE4SS_SDK_fuelStocks_HPP

class UfuelStocks_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Add;                                                               // 0x02E8 (size: 0x8)
    class UImage* fuel_img;                                                           // 0x02F0 (size: 0x8)
    class UImage* fuel_img_1;                                                         // 0x02F8 (size: 0x8)
    class UHorizontalBox* fuel_reserves_hb;                                           // 0x0300 (size: 0x8)
    class UTextBlock* fuelCount_txt;                                                  // 0x0308 (size: 0x8)
    class UButton* help_button_1;                                                     // 0x0310 (size: 0x8)
    class UImage* Image;                                                              // 0x0318 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0320 (size: 0x8)
    class UImage* Image_10;                                                           // 0x0328 (size: 0x8)
    class UImage* Image_47;                                                           // 0x0330 (size: 0x8)
    class UImage* Image_150;                                                          // 0x0338 (size: 0x8)
    class UImage* Image_205;                                                          // 0x0340 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_0;                                  // 0x0348 (size: 0x8)
    class UButton* Remove;                                                            // 0x0350 (size: 0x8)
    class UTextBlock* TextBlock;                                                      // 0x0358 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x0360 (size: 0x8)

    void Update Fuel Stocks();
    void BndEvt__fuelStocks_add_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__fuelStocks_remove_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__fuelStocks_help_buildingType_1_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_fuelStocks(int32 EntryPoint);
}; // Size: 0x368

#endif
