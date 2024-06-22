#ifndef UE4SS_SDK_fuelStocks_HPP
#define UE4SS_SDK_fuelStocks_HPP

class UfuelStocks_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Add;                                                               // 0x0268 (size: 0x8)
    class UImage* fuel_img;                                                           // 0x0270 (size: 0x8)
    class UImage* fuel_img_1;                                                         // 0x0278 (size: 0x8)
    class UHorizontalBox* fuel_reserves_hb;                                           // 0x0280 (size: 0x8)
    class UTextBlock* fuelCount_txt;                                                  // 0x0288 (size: 0x8)
    class UImage* Image;                                                              // 0x0290 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0298 (size: 0x8)
    class UImage* Image_10;                                                           // 0x02A0 (size: 0x8)
    class UImage* Image_47;                                                           // 0x02A8 (size: 0x8)
    class UImage* Image_150;                                                          // 0x02B0 (size: 0x8)
    class UImage* Image_205;                                                          // 0x02B8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_0;                                  // 0x02C0 (size: 0x8)
    class UButton* Remove;                                                            // 0x02C8 (size: 0x8)
    class UTextBlock* TextBlock;                                                      // 0x02D0 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x02D8 (size: 0x8)

    void Update Fuel Stocks();
    void BndEvt__fuelStocks_add_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__fuelStocks_remove_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_fuelStocks(int32 EntryPoint);
}; // Size: 0x2E0

#endif
