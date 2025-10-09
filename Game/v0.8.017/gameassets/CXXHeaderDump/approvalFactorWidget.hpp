#ifndef UE4SS_SDK_approvalFactorWidget_HPP
#define UE4SS_SDK_approvalFactorWidget_HPP

class UapprovalFactorWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UBorder* Border_0;                                                          // 0x02E8 (size: 0x8)
    class URichTextBlock* RichTextBlock_32;                                           // 0x02F0 (size: 0x8)
    class UTextBlock* TextBlock_48;                                                   // 0x02F8 (size: 0x8)
    FLoyaltyFactor Factor;                                                            // 0x0300 (size: 0xC)
    FApprovalMemory approvalFactor;                                                   // 0x030C (size: 0x14)

    void Construct();
    void ExecuteUbergraph_approvalFactorWidget(int32 EntryPoint);
}; // Size: 0x320

#endif
