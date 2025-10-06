#ifndef UE4SS_SDK_popupMessageWidget_HPP
#define UE4SS_SDK_popupMessageWidget_HPP

class UpopupMessageWidget_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UWidgetAnimation* fadeInMessage;                                            // 0x0350 (size: 0x8)
    class UWidgetAnimation* fadeInGraphic;                                            // 0x0358 (size: 0x8)
    class UButton* Button_Accept;                                                     // 0x0360 (size: 0x8)
    class UTextBlock* choiceA;                                                        // 0x0368 (size: 0x8)
    class UImage* graphic;                                                            // 0x0370 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton;                                    // 0x0378 (size: 0x8)
    class URichTextBlock* messageTxt;                                                 // 0x0380 (size: 0x8)
    class UImage* Spacer;                                                             // 0x0388 (size: 0x8)
    class UImage* Spacer_2;                                                           // 0x0390 (size: 0x8)
    class UTextBlock* Title1_1;                                                       // 0x0398 (size: 0x8)
    class UTextBlock* title_txt;                                                      // 0x03A0 (size: 0x8)
    class UVerticalBox* title_VB;                                                     // 0x03A8 (size: 0x8)
    FName MessageType;                                                                // 0x03B0 (size: 0x8)
    class ARegion* Region;                                                            // 0x03B8 (size: 0x8)
    bool closing;                                                                     // 0x03C0 (size: 0x1)

    void ReportGridChange();
    FNaviSubGridLayout ComputeSubGridLayout();
    void OnLoaded_373A68954265B44E5629AB91E159C4A5(class UObject* Loaded);
    void OnLoaded_BD88028942BE71ACFCDFF6A4A16064A9(class UObject* Loaded);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void BndEvt__popupMessageWidget_Button_Accept_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_popupMessageWidget(int32 EntryPoint);
}; // Size: 0x3C1

#endif
