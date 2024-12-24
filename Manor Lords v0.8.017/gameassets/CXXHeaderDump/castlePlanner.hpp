#ifndef UE4SS_SDK_castlePlanner_HPP
#define UE4SS_SDK_castlePlanner_HPP

class UcastlePlanner_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    class UBorder* Border_tooltips;                                                   // 0x0358 (size: 0x8)
    class UbuildingCardWidget_C* buildingWidget;                                      // 0x0360 (size: 0x8)
    class UbuildingCardWidget_C* buildingWidget_1;                                    // 0x0368 (size: 0x8)
    class UbuildingCardWidget_C* buildingWidget_2;                                    // 0x0370 (size: 0x8)
    class UbuildingCardWidget_C* buildingWidget_3;                                    // 0x0378 (size: 0x8)
    class UbuildingCardWidget_C* buildingWidget_4;                                    // 0x0380 (size: 0x8)
    class UbuildingCardWidget_C* buildingWidget_5;                                    // 0x0388 (size: 0x8)
    class UbuildingCardWidget_C* buildingWidget_6;                                    // 0x0390 (size: 0x8)
    class UbuildingCardWidget_C* buildingWidget_7;                                    // 0x0398 (size: 0x8)
    class UbuildingCardWidget_C* buildingWidget_8;                                    // 0x03A0 (size: 0x8)
    class UbuildingCardWidget_C* buildingWidget_9;                                    // 0x03A8 (size: 0x8)
    class UButton* Button_hide_contorls;                                              // 0x03B0 (size: 0x8)
    class UButton* close_button;                                                      // 0x03B8 (size: 0x8)
    class UButton* commence_plan_button;                                              // 0x03C0 (size: 0x8)
    class UButton* commence_plan_button_1;                                            // 0x03C8 (size: 0x8)
    class UTextBlock* constr_cost;                                                    // 0x03D0 (size: 0x8)
    class UVerticalBox* controls_edit_buildings;                                      // 0x03D8 (size: 0x8)
    class UVerticalBox* controls_placing_buildings;                                   // 0x03E0 (size: 0x8)
    class UVerticalBox* controls_road_wall_placement;                                 // 0x03E8 (size: 0x8)
    class UVerticalBox* controls_wallMode_vb;                                         // 0x03F0 (size: 0x8)
    class UImage* glow;                                                               // 0x03F8 (size: 0x8)
    class UGridPanel* GridPanel_0;                                                    // 0x0400 (size: 0x8)
    class UHorizontalRadioSelect_C* HorizontalRadioSelect;                            // 0x0408 (size: 0x8)
    class UImage* Image;                                                              // 0x0410 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0418 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0420 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0428 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0430 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0438 (size: 0x8)
    class UImage* Image_5;                                                            // 0x0440 (size: 0x8)
    class UImage* Image_6;                                                            // 0x0448 (size: 0x8)
    class UImage* Image_7;                                                            // 0x0450 (size: 0x8)
    class UImage* Image_27;                                                           // 0x0458 (size: 0x8)
    class UImage* Image_41;                                                           // 0x0460 (size: 0x8)
    class UImage* Image_69;                                                           // 0x0468 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x0470 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_1;                                    // 0x0478 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_2;                                    // 0x0480 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_3;                                    // 0x0488 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_4;                                    // 0x0490 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_5;                                    // 0x0498 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_6;                                    // 0x04A0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_7;                                    // 0x04A8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_8;                                    // 0x04B0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_9;                                    // 0x04B8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_10;                                   // 0x04C0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_11;                                   // 0x04C8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_12;                                   // 0x04D0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_13;                                   // 0x04D8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_14;                                   // 0x04E0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_15;                                   // 0x04E8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_16;                                   // 0x04F0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_17;                                   // 0x04F8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_97;                                 // 0x0500 (size: 0x8)
    class UImage* mainIcon;                                                           // 0x0508 (size: 0x8)
    class UImage* mainIcon_1;                                                         // 0x0510 (size: 0x8)
    class UWrapBox* ModulesWrapBox;                                                   // 0x0518 (size: 0x8)
    class UMD_NaviAutoButton_C* naviCommit;                                           // 0x0520 (size: 0x8)
    class UMD_NaviAutoButton_C* naviPlaceRoads;                                       // 0x0528 (size: 0x8)
    class UMD_NaviAutoButton_C* naviReset;                                            // 0x0530 (size: 0x8)
    class UmenuButton_C* return_button;                                               // 0x0538 (size: 0x8)
    class URichTextBlock* rich-consr_cost;                                            // 0x0540 (size: 0x8)
    class UButton* roadsButton;                                                       // 0x0548 (size: 0x8)
    class UButton* tradeOverviewButton_1;                                             // 0x0550 (size: 0x8)
    class UButton* tradeOverviewButton_2;                                             // 0x0558 (size: 0x8)
    class Utt_keybind_C* tt_keybind_1;                                                // 0x0560 (size: 0x8)
    class Utt_keybind_C* tt_keybind_2;                                                // 0x0568 (size: 0x8)
    class Utt_keybind_C* tt_keybind_3;                                                // 0x0570 (size: 0x8)
    class Utt_keybind_C* tt_keybind_4;                                                // 0x0578 (size: 0x8)
    class Utt_keybind_C* tt_keybind_5;                                                // 0x0580 (size: 0x8)
    class Utt_keybind_C* tt_keybind_6;                                                // 0x0588 (size: 0x8)
    class Utt_keybind_C* tt_keybind_7;                                                // 0x0590 (size: 0x8)
    class Utt_keybind_C* tt_keybind_8;                                                // 0x0598 (size: 0x8)
    class Utt_keybind_C* tt_keybind_9;                                                // 0x05A0 (size: 0x8)
    class Utt_keybind_C* tt_keybind_10;                                               // 0x05A8 (size: 0x8)
    class Utt_keybind_C* tt_keybind_11;                                               // 0x05B0 (size: 0x8)
    class Utt_keybind_C* tt_keybind_12;                                               // 0x05B8 (size: 0x8)
    class UVerticalRadioSelect_C* VerticalRadioSelect_C_0;                            // 0x05C0 (size: 0x8)
    FcastlePlanner_CCloseCastlePlanner closeCastlePlanner;                            // 0x05C8 (size: 0x10)
    void closeCastlePlanner();
    class ASMBuildingMaster* building;                                                // 0x05D8 (size: 0x8)
    double DeltaMultiplied;                                                           // 0x05E0 (size: 0x8)

    FNaviSubGridLayout ComputeSubGridLayout();
    void onOpen();
    void setOpacityLerped(double InOpacity, class UWidget* Target);
    void updateConstructionCost();
    void BndEvt__castlePlanner_tradeOverviewButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__castlePlanner_roadsButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__castlePlanner_return_button_K2Node_ComponentBoundEvent_0_onReleased__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void BndEvt__castlePlanner_Button_hide_contorls_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_castlePlanner(int32 EntryPoint);
    void closeCastlePlanner__DelegateSignature();
}; // Size: 0x5E8

#endif
