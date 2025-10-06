#ifndef UE4SS_SDK_approvalEffectWidget_HPP
#define UE4SS_SDK_approvalEffectWidget_HPP

class UapprovalEffectWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UBorder* Border_1;                                                          // 0x02D8 (size: 0x8)
    class URichTextBlock* CurrencyTxt;                                                // 0x02E0 (size: 0x8)
    class URichTextBlock* EffectTitleText;                                            // 0x02E8 (size: 0x8)
    class URichTextBlock* ValueText;                                                  // 0x02F0 (size: 0x8)
    FApprovalEffect ApprovalEffect;                                                   // 0x02F8 (size: 0xC)
    TArray<FName> % Effects;                                                          // 0x0308 (size: 0x10)
    FLinearColor ValueColor;                                                          // 0x0318 (size: 0x10)

    void Construct();
    void ExecuteUbergraph_approvalEffectWidget(int32 EntryPoint);
}; // Size: 0x328

#endif
