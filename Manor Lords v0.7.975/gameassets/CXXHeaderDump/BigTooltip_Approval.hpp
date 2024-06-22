#ifndef UE4SS_SDK_BigTooltip_Approval_HPP
#define UE4SS_SDK_BigTooltip_Approval_HPP

class UBigTooltip_Approval_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* NewAnimation;                                             // 0x0268 (size: 0x8)
    class UBorder* Border_Pattern;                                                    // 0x0270 (size: 0x8)
    class URichTextBlock* descr_RichTxt;                                              // 0x0278 (size: 0x8)
    class UImage* Image;                                                              // 0x0280 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0288 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0290 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x0298 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_36;                                   // 0x02A0 (size: 0x8)
    class UVerticalBox* loyaltyFactors_VB;                                            // 0x02A8 (size: 0x8)
    class URichTextBlock* name_txt;                                                   // 0x02B0 (size: 0x8)
    class UTextBlock* none_txt;                                                       // 0x02B8 (size: 0x8)
    class UVerticalBox* pastFactors_VB;                                               // 0x02C0 (size: 0x8)
    class UTextBlock* pst_none_txt_1;                                                 // 0x02C8 (size: 0x8)
    class UTextBlock* TextBlock_59;                                                   // 0x02D0 (size: 0x8)
    FName headerKey;                                                                  // 0x02D8 (size: 0x8)
    FName mainTextKey;                                                                // 0x02E0 (size: 0x8)
    TArray<FApprovalMemory> factors;                                                  // 0x02E8 (size: 0x10)
    int32 approval;                                                                   // 0x02F8 (size: 0x4)

    void updateContents(int32 approval);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_BigTooltip_Approval(int32 EntryPoint);
}; // Size: 0x2FC

#endif
