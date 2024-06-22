#ifndef UE4SS_SDK_TradeRouteConfirm_HPP
#define UE4SS_SDK_TradeRouteConfirm_HPP

class UTradeRouteConfirm_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* NewAnimation_1;                                           // 0x0268 (size: 0x8)
    class UButton* Button_ChoiceA;                                                    // 0x0270 (size: 0x8)
    class UButton* Button_ChoiceB;                                                    // 0x0278 (size: 0x8)
    class UlocalizedTextBox_C* choiceA;                                               // 0x0280 (size: 0x8)
    class UlocalizedTextBox_C* choiceB;                                               // 0x0288 (size: 0x8)
    class UBorder* confirmation_border;                                               // 0x0290 (size: 0x8)
    class UlocalizedTextBox_C* question_txt;                                          // 0x0298 (size: 0x8)
    FTradeRouteConfirm_CConfirmDemolish confirmDemolish;                              // 0x02A0 (size: 0x10)
    void confirmDemolish();

    void Close();
    void Construct();
    void BndEvt__Button_ChoiceB_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__Button_ChoiceA_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_TradeRouteConfirm(int32 EntryPoint);
    void confirmDemolish__DelegateSignature();
}; // Size: 0x2B0

#endif
