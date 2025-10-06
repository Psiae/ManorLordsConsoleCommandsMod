#ifndef UE4SS_SDK_approvalFactorWidget_HPP
#define UE4SS_SDK_approvalFactorWidget_HPP

class UapprovalFactorWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class URichTextBlock* DescriptionText;                                            // 0x02D8 (size: 0x8)
    class UImage* Image_45;                                                           // 0x02E0 (size: 0x8)
    class UTextBlock* ValueText;                                                      // 0x02E8 (size: 0x8)
    FLoyaltyFactor Factor;                                                            // 0x02F0 (size: 0xC)
    FApprovalMemory approvalFactor;                                                   // 0x02FC (size: 0x18)

    void Construct();
    void ExecuteUbergraph_approvalFactorWidget(int32 EntryPoint);
}; // Size: 0x314

#endif
