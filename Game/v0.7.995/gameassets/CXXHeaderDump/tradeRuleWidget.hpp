#ifndef UE4SS_SDK_tradeRuleWidget_HPP
#define UE4SS_SDK_tradeRuleWidget_HPP

class UtradeRuleWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x02E8 (size: 0x8)
    class UImage* Image_37;                                                           // 0x02F0 (size: 0x8)
    class UTextBlock* TextBlock_36;                                                   // 0x02F8 (size: 0x8)
    ETradeRule tradeRule;                                                             // 0x0300 (size: 0x1)

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_tradeRuleWidget(int32 EntryPoint);
}; // Size: 0x301

#endif
