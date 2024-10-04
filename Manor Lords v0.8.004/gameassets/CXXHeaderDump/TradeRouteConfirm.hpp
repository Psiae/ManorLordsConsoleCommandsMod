#ifndef UE4SS_SDK_TradeRouteConfirm_HPP
#define UE4SS_SDK_TradeRouteConfirm_HPP

class UTradeRouteConfirm_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* NewAnimation_1;                                           // 0x02E8 (size: 0x8)
    class UButton* Button_ChoiceA;                                                    // 0x02F0 (size: 0x8)
    class UButton* Button_ChoiceB;                                                    // 0x02F8 (size: 0x8)
    class UlocalizedTextBox_C* choiceA;                                               // 0x0300 (size: 0x8)
    class UlocalizedTextBox_C* choiceB;                                               // 0x0308 (size: 0x8)
    class UBorder* confirmation_border;                                               // 0x0310 (size: 0x8)
    class UlocalizedTextBox_C* question_txt;                                          // 0x0318 (size: 0x8)
    FTradeRouteConfirm_CConfirmDemolish confirmDemolish;                              // 0x0320 (size: 0x10)
    void confirmDemolish();

    void Close();
    void Construct();
    void BndEvt__Button_ChoiceB_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__Button_ChoiceA_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_TradeRouteConfirm(int32 EntryPoint);
    void confirmDemolish__DelegateSignature();
}; // Size: 0x330

#endif
