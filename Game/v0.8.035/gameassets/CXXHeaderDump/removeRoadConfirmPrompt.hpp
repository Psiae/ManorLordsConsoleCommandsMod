#ifndef UE4SS_SDK_removeRoadConfirmPrompt_HPP
#define UE4SS_SDK_removeRoadConfirmPrompt_HPP

class UremoveRoadConfirmPrompt_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UWidgetAnimation* NewAnimation_2;                                           // 0x0350 (size: 0x8)
    class UWidgetAnimation* NewAnimation_1;                                           // 0x0358 (size: 0x8)
    class UButton* Button_ChoiceA;                                                    // 0x0360 (size: 0x8)
    class UButton* Button_ChoiceB;                                                    // 0x0368 (size: 0x8)
    class UImage* Image_477;                                                          // 0x0370 (size: 0x8)
    class UMD_NaviAutoButton_C* navi_Cancel;                                          // 0x0378 (size: 0x8)
    class UMD_NaviAutoButton_C* navi_Remove;                                          // 0x0380 (size: 0x8)
    class UTextBlock* Title1;                                                         // 0x0388 (size: 0x8)
    int32 ID;                                                                         // 0x0390 (size: 0x4)
    FText techNameTxt;                                                                // 0x0398 (size: 0x10)
    class ARoad* Road to Remove;                                                      // 0x03A8 (size: 0x8)

    FNaviSubGridLayout ComputeSubGridLayout();
    FText Get_Title1_Text_0();
    void BndEvt__Button_ChoiceB_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__Button_ChoiceA_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_removeRoadConfirmPrompt(int32 EntryPoint);
}; // Size: 0x3B0

#endif
