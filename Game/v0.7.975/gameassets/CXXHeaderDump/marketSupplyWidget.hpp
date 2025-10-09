#ifndef UE4SS_SDK_marketSupplyWidget_HPP
#define UE4SS_SDK_marketSupplyWidget_HPP

class UmarketSupplyWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* buildingHelp_3;                                                     // 0x0268 (size: 0x8)
    class UButton* commodities_button;                                                // 0x0270 (size: 0x8)
    class UHorizontalBox* commodities_HB;                                             // 0x0278 (size: 0x8)
    class UHorizontalBox* fabrics_HB;                                                 // 0x0280 (size: 0x8)
    class UButton* foods_button;                                                      // 0x0288 (size: 0x8)
    class UHorizontalBox* foods_HB;                                                   // 0x0290 (size: 0x8)
    class UButton* fuel_button;                                                       // 0x0298 (size: 0x8)
    class UHorizontalBox* fuel_HB;                                                    // 0x02A0 (size: 0x8)
    class UButton* help_buildingType_3;                                               // 0x02A8 (size: 0x8)
    class UImage* Image;                                                              // 0x02B0 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02B8 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02C0 (size: 0x8)
    class UImage* Image_3;                                                            // 0x02C8 (size: 0x8)
    class UImage* Image_8;                                                            // 0x02D0 (size: 0x8)
    class UImage* Image_9;                                                            // 0x02D8 (size: 0x8)
    class UImage* Image_19;                                                           // 0x02E0 (size: 0x8)
    class UImage* Image_32;                                                           // 0x02E8 (size: 0x8)
    class UImage* Image_92;                                                           // 0x02F0 (size: 0x8)
    class UImage* Image_125;                                                          // 0x02F8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C;                                    // 0x0300 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_1;                                  // 0x0308 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_2;                                  // 0x0310 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_3;                                  // 0x0318 (size: 0x8)
    class UVerticalBox* requirements_vb;                                              // 0x0320 (size: 0x8)
    class UTextBlock* stallLocations_txt;                                             // 0x0328 (size: 0x8)
    class UTextBlock* supplyPerc_clothing_txt;                                        // 0x0330 (size: 0x8)
    class UTextBlock* supplyPerc_fabrics_txt;                                         // 0x0338 (size: 0x8)
    class UTextBlock* supplyPerc_food_txt;                                            // 0x0340 (size: 0x8)
    class UTextBlock* supplyPerc_fuel_txt;                                            // 0x0348 (size: 0x8)
    class UTextBlock* text_occasionalNeeds;                                           // 0x0350 (size: 0x8)
    class UlocalizedTextBox_C* text_occasionalNeeds_1;                                // 0x0358 (size: 0x8)
    class UTextBlock* text_occasionalNeeds_3;                                         // 0x0360 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x0368 (size: 0x8)

    void updateSupplyMeterTooltip(class UWidget* Target, TArray<int32>& displayGoodTypes, bool Show Requirement Lv);
    void updateProsperity();
    void Construct();
    void BndEvt__marketSupplyWidget_fuel_button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__marketSupplyWidget_fuel_button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__marketSupplyWidget_foods_button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__marketSupplyWidget_foods_button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__marketSupplyWidget_Button_2_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__marketSupplyWidget_Button_2_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_marketSupplyWidget(int32 EntryPoint);
}; // Size: 0x370

#endif
