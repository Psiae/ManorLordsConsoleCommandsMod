#ifndef UE4SS_SDK_HireConfirmation_HPP
#define UE4SS_SDK_HireConfirmation_HPP

class UHireConfirmation_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* NewAnimation_1;                                           // 0x0268 (size: 0x8)
    class UButton* Button_ChoiceA;                                                    // 0x0270 (size: 0x8)
    class UButton* Button_ChoiceB;                                                    // 0x0278 (size: 0x8)
    class UBorder* confirmation_border;                                               // 0x0280 (size: 0x8)
    class UImage* Image;                                                              // 0x0288 (size: 0x8)
    class UImage* Image_118;                                                          // 0x0290 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x0298 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_1;                                    // 0x02A0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_69;                                   // 0x02A8 (size: 0x8)
    class UmenuButton_C* menuButton;                                                  // 0x02B0 (size: 0x8)
    class UmenuButton_C* menuButton_1;                                                // 0x02B8 (size: 0x8)
    class UWidget* daddy;                                                             // 0x02C0 (size: 0x8)
    FName question;                                                                   // 0x02C8 (size: 0x8)
    int32 Index;                                                                      // 0x02D0 (size: 0x4)
    FMercenaryCompany MercenaryCompany;                                               // 0x02D8 (size: 0x60)

    void Close();
    void Construct();
    void BndEvt__Button_ChoiceB_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__Button_ChoiceA_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__HireConfirmation_menuButton_K2Node_ComponentBoundEvent_2_onReleased__DelegateSignature();
    void BndEvt__HireConfirmation_menuButton_1_K2Node_ComponentBoundEvent_3_onReleased__DelegateSignature();
    void ExecuteUbergraph_HireConfirmation(int32 EntryPoint);
}; // Size: 0x338

#endif
