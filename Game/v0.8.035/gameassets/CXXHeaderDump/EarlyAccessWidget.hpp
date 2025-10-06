#ifndef UE4SS_SDK_EarlyAccessWidget_HPP
#define UE4SS_SDK_EarlyAccessWidget_HPP

class UEarlyAccessWidget_C : public UNaviUi
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UWidgetAnimation* lerpIn;                                                   // 0x0348 (size: 0x8)
    class UButton* Button;                                                            // 0x0350 (size: 0x8)
    class UTextBlock* Header;                                                         // 0x0358 (size: 0x8)
    class UImage* Image;                                                              // 0x0360 (size: 0x8)
    class UImage* Image_7;                                                            // 0x0368 (size: 0x8)
    class UImage* Image_54;                                                           // 0x0370 (size: 0x8)
    class UMD_ControllerHotkey_C* MD_ControllerHotkey;                                // 0x0378 (size: 0x8)
    class UMD_NaviAutoFocusHighlight_C* MD_NaviAutoFocusHighlight;                    // 0x0380 (size: 0x8)
    class UTextBlock* nda_txt_1;                                                      // 0x0388 (size: 0x8)
    FEarlyAccessWidget_COnDone OnDone;                                                // 0x0390 (size: 0x10)
    void OnDone();

    void DoFinish();
    ENaviHandleMethod HandleInput(ENaviUiIntent Key);
    void Construct();
    void BndEvt__NDA_widget_Button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_EarlyAccessWidget(int32 EntryPoint);
    void OnDone__DelegateSignature();
}; // Size: 0x3A0

#endif
