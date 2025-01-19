#ifndef UE4SS_SDK_DemolitionConfirm_HPP
#define UE4SS_SDK_DemolitionConfirm_HPP

class UDemolitionConfirm_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    class UWidgetAnimation* NewAnimation_1;                                           // 0x0358 (size: 0x8)
    class UButton* Button_ChoiceA;                                                    // 0x0360 (size: 0x8)
    class UButton* Button_ChoiceB;                                                    // 0x0368 (size: 0x8)
    class UlocalizedTextBox_C* choiceA;                                               // 0x0370 (size: 0x8)
    class UlocalizedTextBox_C* choiceB;                                               // 0x0378 (size: 0x8)
    class UBorder* confirmation_border;                                               // 0x0380 (size: 0x8)
    class UMD_NaviAutoButton_C* naviBtn_Cancel;                                       // 0x0388 (size: 0x8)
    class UMD_NaviAutoButton_C* naviBtn_Demolish;                                     // 0x0390 (size: 0x8)
    class UlocalizedTextBox_C* question_txt;                                          // 0x0398 (size: 0x8)
    class UlocalizedTextBox_C* question_txt_1;                                        // 0x03A0 (size: 0x8)
    FDemolitionConfirm_CConfirmDemolish confirmDemolish;                              // 0x03A8 (size: 0x10)
    void confirmDemolish();

    FNaviSubGridLayout ComputeSubGridLayout();
    void Close();
    void Construct();
    void BndEvt__Button_ChoiceB_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__Button_ChoiceA_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_DemolitionConfirm(int32 EntryPoint);
    void confirmDemolish__DelegateSignature();
}; // Size: 0x3B8

#endif
