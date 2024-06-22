#ifndef UE4SS_SDK_popupMessageWidget_HPP
#define UE4SS_SDK_popupMessageWidget_HPP

class UpopupMessageWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* fadeInMessage;                                            // 0x0268 (size: 0x8)
    class UWidgetAnimation* fadeInGraphic;                                            // 0x0270 (size: 0x8)
    class UButton* Button_Accept;                                                     // 0x0278 (size: 0x8)
    class UTextBlock* choiceA;                                                        // 0x0280 (size: 0x8)
    class UImage* graphic;                                                            // 0x0288 (size: 0x8)
    class URichTextBlock* messageTxt;                                                 // 0x0290 (size: 0x8)
    class UImage* Spacer;                                                             // 0x0298 (size: 0x8)
    class UImage* Spacer_2;                                                           // 0x02A0 (size: 0x8)
    class UTextBlock* Title1_1;                                                       // 0x02A8 (size: 0x8)
    class UTextBlock* title_txt;                                                      // 0x02B0 (size: 0x8)
    class UVerticalBox* title_VB;                                                     // 0x02B8 (size: 0x8)
    FName messageType;                                                                // 0x02C0 (size: 0x8)
    class ARegion* Region;                                                            // 0x02C8 (size: 0x8)
    bool closing;                                                                     // 0x02D0 (size: 0x1)

    void OnLoaded_373A68954265B44E5629AB91E159C4A5(class UObject* Loaded);
    void OnLoaded_BD88028942BE71ACFCDFF6A4A16064A9(class UObject* Loaded);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void BndEvt__popupMessageWidget_Button_Accept_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_popupMessageWidget(int32 EntryPoint);
}; // Size: 0x2D1

#endif
