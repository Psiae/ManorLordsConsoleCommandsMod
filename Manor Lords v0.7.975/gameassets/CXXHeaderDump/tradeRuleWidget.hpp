#ifndef UE4SS_SDK_tradeRuleWidget_HPP
#define UE4SS_SDK_tradeRuleWidget_HPP

class UtradeRuleWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x0268 (size: 0x8)
    class UImage* Image_37;                                                           // 0x0270 (size: 0x8)
    class UTextBlock* TextBlock_36;                                                   // 0x0278 (size: 0x8)
    ETradeRule tradeRule;                                                             // 0x0280 (size: 0x1)

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_tradeRuleWidget(int32 EntryPoint);
}; // Size: 0x281

#endif
