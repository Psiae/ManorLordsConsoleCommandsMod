#ifndef UE4SS_SDK_approvalFactorWidget_HPP
#define UE4SS_SDK_approvalFactorWidget_HPP

class UapprovalFactorWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UBorder* Border_0;                                                          // 0x0268 (size: 0x8)
    class URichTextBlock* RichTextBlock_32;                                           // 0x0270 (size: 0x8)
    class UTextBlock* TextBlock_48;                                                   // 0x0278 (size: 0x8)
    FLoyaltyFactor Factor;                                                            // 0x0280 (size: 0xC)
    FApprovalMemory approvalFactor;                                                   // 0x028C (size: 0x14)

    void Construct();
    void ExecuteUbergraph_approvalFactorWidget(int32 EntryPoint);
}; // Size: 0x2A0

#endif
