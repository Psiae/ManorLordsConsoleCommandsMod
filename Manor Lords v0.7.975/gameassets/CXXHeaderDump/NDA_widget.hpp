#ifndef UE4SS_SDK_NDA_widget_HPP
#define UE4SS_SDK_NDA_widget_HPP

class UNDA_widget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* lerpIn;                                                   // 0x0268 (size: 0x8)
    class UButton* Button;                                                            // 0x0270 (size: 0x8)
    class UButton* Button_279;                                                        // 0x0278 (size: 0x8)
    class UCheckBox* CheckBox;                                                        // 0x0280 (size: 0x8)
    class UCheckBox* CheckBox_1;                                                      // 0x0288 (size: 0x8)
    class UCheckBox* CheckBox_69;                                                     // 0x0290 (size: 0x8)
    class UTextBlock* date_txt;                                                       // 0x0298 (size: 0x8)
    class UTextBlock* Header;                                                         // 0x02A0 (size: 0x8)
    class UImage* Image_7;                                                            // 0x02A8 (size: 0x8)
    class UTextBlock* nda_txt;                                                        // 0x02B0 (size: 0x8)
    class UTextBlock* nda_txt_1;                                                      // 0x02B8 (size: 0x8)

    void NDA_accept_enable();
    void Construct();
    void BndEvt__NDA_widget_Button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__NDA_widget_CheckBox_69_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__NDA_widget_CheckBox_1_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__NDA_widget_CheckBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__NDA_widget_Button_279_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_NDA_widget(int32 EntryPoint);
}; // Size: 0x2C0

#endif
