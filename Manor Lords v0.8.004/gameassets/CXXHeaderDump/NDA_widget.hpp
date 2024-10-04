#ifndef UE4SS_SDK_NDA_widget_HPP
#define UE4SS_SDK_NDA_widget_HPP

class UNDA_widget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* lerpIn;                                                   // 0x02E8 (size: 0x8)
    class UButton* Button;                                                            // 0x02F0 (size: 0x8)
    class UButton* Button_279;                                                        // 0x02F8 (size: 0x8)
    class UCheckBox* CheckBox;                                                        // 0x0300 (size: 0x8)
    class UCheckBox* CheckBox_1;                                                      // 0x0308 (size: 0x8)
    class UCheckBox* CheckBox_69;                                                     // 0x0310 (size: 0x8)
    class UTextBlock* date_txt;                                                       // 0x0318 (size: 0x8)
    class UTextBlock* Header;                                                         // 0x0320 (size: 0x8)
    class UImage* Image_7;                                                            // 0x0328 (size: 0x8)
    class UTextBlock* nda_txt;                                                        // 0x0330 (size: 0x8)
    class UTextBlock* nda_txt_1;                                                      // 0x0338 (size: 0x8)

    void NDA_accept_enable();
    void Construct();
    void BndEvt__NDA_widget_Button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__NDA_widget_CheckBox_69_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__NDA_widget_CheckBox_1_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__NDA_widget_CheckBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__NDA_widget_Button_279_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_NDA_widget(int32 EntryPoint);
}; // Size: 0x340

#endif
