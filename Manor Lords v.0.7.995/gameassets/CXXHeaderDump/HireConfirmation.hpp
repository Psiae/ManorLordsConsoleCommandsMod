#ifndef UE4SS_SDK_HireConfirmation_HPP
#define UE4SS_SDK_HireConfirmation_HPP

class UHireConfirmation_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* NewAnimation_1;                                           // 0x02E8 (size: 0x8)
    class UButton* Button_ChoiceA;                                                    // 0x02F0 (size: 0x8)
    class UButton* Button_ChoiceB;                                                    // 0x02F8 (size: 0x8)
    class UBorder* confirmation_border;                                               // 0x0300 (size: 0x8)
    class UImage* Image;                                                              // 0x0308 (size: 0x8)
    class UImage* Image_118;                                                          // 0x0310 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x0318 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_1;                                    // 0x0320 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_69;                                   // 0x0328 (size: 0x8)
    class UmenuButton_C* menuButton;                                                  // 0x0330 (size: 0x8)
    class UmenuButton_C* menuButton_1;                                                // 0x0338 (size: 0x8)
    class UWidget* Daddy;                                                             // 0x0340 (size: 0x8)
    FName question;                                                                   // 0x0348 (size: 0x8)
    int32 Index;                                                                      // 0x0350 (size: 0x4)
    FMercenaryCompany MercenaryCompany;                                               // 0x0358 (size: 0x60)

    void Close();
    void Construct();
    void BndEvt__Button_ChoiceB_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__Button_ChoiceA_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__HireConfirmation_menuButton_K2Node_ComponentBoundEvent_2_onReleased__DelegateSignature();
    void BndEvt__HireConfirmation_menuButton_1_K2Node_ComponentBoundEvent_3_onReleased__DelegateSignature();
    void ExecuteUbergraph_HireConfirmation(int32 EntryPoint);
}; // Size: 0x3B8

#endif
