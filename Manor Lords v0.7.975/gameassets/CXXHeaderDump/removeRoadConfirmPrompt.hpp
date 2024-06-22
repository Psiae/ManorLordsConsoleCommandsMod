#ifndef UE4SS_SDK_removeRoadConfirmPrompt_HPP
#define UE4SS_SDK_removeRoadConfirmPrompt_HPP

class UremoveRoadConfirmPrompt_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* NewAnimation_2;                                           // 0x0268 (size: 0x8)
    class UWidgetAnimation* NewAnimation_1;                                           // 0x0270 (size: 0x8)
    class UButton* Button_ChoiceA;                                                    // 0x0278 (size: 0x8)
    class UButton* Button_ChoiceB;                                                    // 0x0280 (size: 0x8)
    class UImage* Image_477;                                                          // 0x0288 (size: 0x8)
    class UTextBlock* Title1;                                                         // 0x0290 (size: 0x8)
    int32 ID;                                                                         // 0x0298 (size: 0x4)
    FText techNameTxt;                                                                // 0x02A0 (size: 0x18)
    class ARoad* Road to Remove;                                                      // 0x02B8 (size: 0x8)

    FText Get_Title1_Text_0();
    void BndEvt__Button_ChoiceB_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__Button_ChoiceA_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_removeRoadConfirmPrompt(int32 EntryPoint);
}; // Size: 0x2C0

#endif
