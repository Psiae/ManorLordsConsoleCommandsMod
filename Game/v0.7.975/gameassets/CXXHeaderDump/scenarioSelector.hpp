#ifndef UE4SS_SDK_scenarioSelector_HPP
#define UE4SS_SDK_scenarioSelector_HPP

class UscenarioSelector_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_62;                                                         // 0x0268 (size: 0x8)
    class UCheckBox* CheckBox_42;                                                     // 0x0270 (size: 0x8)
    class UImage* Grunge;                                                             // 0x0278 (size: 0x8)
    class UTextBlock* header_txt;                                                     // 0x0280 (size: 0x8)
    class UTextBlock* header_txt_2;                                                   // 0x0288 (size: 0x8)
    class UVerticalBox* header_VB;                                                    // 0x0290 (size: 0x8)
    class UHorizontalBox* HorizontalBox_0;                                            // 0x0298 (size: 0x8)
    class UImage* Image;                                                              // 0x02A0 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02A8 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02B0 (size: 0x8)
    class UImage* Image_65;                                                           // 0x02B8 (size: 0x8)
    class UImage* Image_67;                                                           // 0x02C0 (size: 0x8)
    class UImage* Image_136;                                                          // 0x02C8 (size: 0x8)
    class UButton* playOld;                                                           // 0x02D0 (size: 0x8)
    class UTextBlock* recruit_txt;                                                    // 0x02D8 (size: 0x8)
    class UTextBlock* recruit_txt_1;                                                  // 0x02E0 (size: 0x8)
    class UmenuButton_C* return_button;                                               // 0x02E8 (size: 0x8)
    class UButton* returnOld;                                                         // 0x02F0 (size: 0x8)
    class UscenarioButton_C* scenarioButton;                                          // 0x02F8 (size: 0x8)
    class UscenarioButton_C* scenarioButton_1;                                        // 0x0300 (size: 0x8)
    class UscenarioButton_C* scenarioButton_2;                                        // 0x0308 (size: 0x8)
    class UscenarioButton_C* scenarioButton_3;                                        // 0x0310 (size: 0x8)
    class UscenarioButton_C* scenarioButton_4;                                        // 0x0318 (size: 0x8)
    FscenarioSelector_CScenarioPicked scenarioPicked;                                 // 0x0320 (size: 0x10)
    void scenarioPicked();

    void BndEvt__chooseScenario_CheckBox_42_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__chooseScenario_scenarioButton_3_K2Node_ComponentBoundEvent_5_onButtonPressed__DelegateSignature();
    void BndEvt__chooseScenario_scenarioButton_1_K2Node_ComponentBoundEvent_3_onButtonPressed__DelegateSignature();
    void Translate();
    void BndEvt__scenarioSelector_scenarioButton_4_K2Node_ComponentBoundEvent_6_onButtonPressed__DelegateSignature();
    void Construct();
    void BndEvt__chooseScenario_return_button_K2Node_ComponentBoundEvent_0_onReleased__DelegateSignature();
    void BndEvt__chooseScenario_scenarioButton_2_K2Node_ComponentBoundEvent_1_onButtonPressed__DelegateSignature();
    void BndEvt__chooseScenario_scenarioButton_K2Node_ComponentBoundEvent_2_onButtonPressed__DelegateSignature();
    void ExecuteUbergraph_scenarioSelector(int32 EntryPoint);
    void scenarioPicked__DelegateSignature();
}; // Size: 0x330

#endif
