#ifndef UE4SS_SDK_extensionSlotWidget_HPP
#define UE4SS_SDK_extensionSlotWidget_HPP

class UextensionSlotWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* openOptions;                                              // 0x02E8 (size: 0x8)
    class UWidgetAnimation* closeOptions;                                             // 0x02F0 (size: 0x8)
    class UVerticalBox* allOptions_vb;                                                // 0x02F8 (size: 0x8)
    class UButton* armorer;                                                           // 0x0300 (size: 0x8)
    class UButton* baker;                                                             // 0x0308 (size: 0x8)
    class UButton* baker_1;                                                           // 0x0310 (size: 0x8)
    class UButton* Blacksmith;                                                        // 0x0318 (size: 0x8)
    class UButton* brewery;                                                           // 0x0320 (size: 0x8)
    class UButton* butcher;                                                           // 0x0328 (size: 0x8)
    class UButton* cobbler;                                                           // 0x0330 (size: 0x8)
    class UWrapBox* conversions;                                                      // 0x0338 (size: 0x8)
    class UButton* coop;                                                              // 0x0340 (size: 0x8)
    class UButton* demolish;                                                          // 0x0348 (size: 0x8)
    class UImage* exclam;                                                             // 0x0350 (size: 0x8)
    class UVerticalBox* extensionsOptions_VB;                                         // 0x0358 (size: 0x8)
    class UButton* fletcher;                                                          // 0x0360 (size: 0x8)
    class UButton* garden;                                                            // 0x0368 (size: 0x8)
    class UButton* goat;                                                              // 0x0370 (size: 0x8)
    class UImage* Image;                                                              // 0x0378 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0380 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0388 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0390 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0398 (size: 0x8)
    class UImage* Image_5;                                                            // 0x03A0 (size: 0x8)
    class UImage* Image_6;                                                            // 0x03A8 (size: 0x8)
    class UImage* Image_7;                                                            // 0x03B0 (size: 0x8)
    class UImage* Image_8;                                                            // 0x03B8 (size: 0x8)
    class UImage* Image_9;                                                            // 0x03C0 (size: 0x8)
    class UImage* Image_10;                                                           // 0x03C8 (size: 0x8)
    class UImage* Image_11;                                                           // 0x03D0 (size: 0x8)
    class UImage* Image_12;                                                           // 0x03D8 (size: 0x8)
    class UImage* Image_13;                                                           // 0x03E0 (size: 0x8)
    class UImage* Image_14;                                                           // 0x03E8 (size: 0x8)
    class UImage* Image_15;                                                           // 0x03F0 (size: 0x8)
    class UImage* Image_16;                                                           // 0x03F8 (size: 0x8)
    class UImage* Image_17;                                                           // 0x0400 (size: 0x8)
    class UImage* Image_18;                                                           // 0x0408 (size: 0x8)
    class UImage* Image_19;                                                           // 0x0410 (size: 0x8)
    class UImage* Image_20;                                                           // 0x0418 (size: 0x8)
    class UImage* Image_21;                                                           // 0x0420 (size: 0x8)
    class UImage* Image_22;                                                           // 0x0428 (size: 0x8)
    class UImage* Image_23;                                                           // 0x0430 (size: 0x8)
    class UImage* Image_24;                                                           // 0x0438 (size: 0x8)
    class UImage* Image_25;                                                           // 0x0440 (size: 0x8)
    class UImage* Image_26;                                                           // 0x0448 (size: 0x8)
    class UImage* Image_27;                                                           // 0x0450 (size: 0x8)
    class UImage* Image_55;                                                           // 0x0458 (size: 0x8)
    class UImage* Image_77;                                                           // 0x0460 (size: 0x8)
    class UImage* Image_93;                                                           // 0x0468 (size: 0x8)
    class UButton* joiner;                                                            // 0x0470 (size: 0x8)
    class UButton* main_button;                                                       // 0x0478 (size: 0x8)
    class USizeBox* options_sb;                                                       // 0x0480 (size: 0x8)
    class UButton* orchard;                                                           // 0x0488 (size: 0x8)
    class UButton* smith;                                                             // 0x0490 (size: 0x8)
    class UButton* tailor;                                                            // 0x0498 (size: 0x8)
    FExtension Extension;                                                             // 0x04A0 (size: 0xC0)
    class ASMBuildingMaster* building;                                                // 0x0560 (size: 0x8)
    int32 ID;                                                                         // 0x0568 (size: 0x4)
    bool showConversionOptions;                                                       // 0x056C (size: 0x1)
    bool showOptions;                                                                 // 0x056D (size: 0x1)

    void requestArtisanChange(int32 New Request Upgrade ID);
    void setupTooltps();
    void playExtensionSignatureSnd(int32 Index);
    void ChangeExtension(int32 Type);
    void updateContents();
    void BndEvt__extensionSlotWidget_smith_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature();
    void Construct();
    void BndEvt__extensionSlotWidget_baker_1_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__extensionSlotWidget_blacksmith_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__extensionSlotWidget_main_button_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__extensionSlotWidget_baker_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__extensionSlotWidget_blacksmith_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__extensionSlotWidget_baker_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__extensionSlotWidget_brewery_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__extensionSlotWidget_tailor_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__extensionSlotWidget_tailor_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__extensionSlotWidget_cobbler_K2Node_ComponentBoundEvent_14_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__extensionSlotWidget_cobbler_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__extensionSlotWidget_garden_K2Node_ComponentBoundEvent_16_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__extensionSlotWidget_joiner_K2Node_ComponentBoundEvent_17_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__extensionSlotWidget_armorer_K2Node_ComponentBoundEvent_18_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__extensionSlotWidget_armorer_1_K2Node_ComponentBoundEvent_19_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__extensionSlotWidget_orchard_K2Node_ComponentBoundEvent_20_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__extensionSlotWidget_Button_14_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__extensionSlotWidget_demo_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__extensionSlotWidget_goat_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__extensionSlotWidget_Button_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__extensionSlotWidget_butcher_K2Node_ComponentBoundEvent_21_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_extensionSlotWidget(int32 EntryPoint);
}; // Size: 0x56E

#endif
