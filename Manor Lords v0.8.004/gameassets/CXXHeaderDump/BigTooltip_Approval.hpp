#ifndef UE4SS_SDK_BigTooltip_Approval_HPP
#define UE4SS_SDK_BigTooltip_Approval_HPP

class UBigTooltip_Approval_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* NewAnimation;                                             // 0x02E8 (size: 0x8)
    class UBorder* Border_Pattern;                                                    // 0x02F0 (size: 0x8)
    class URichTextBlock* descr_RichTxt;                                              // 0x02F8 (size: 0x8)
    class UImage* Image;                                                              // 0x0300 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0308 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0310 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x0318 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_36;                                   // 0x0320 (size: 0x8)
    class UVerticalBox* loyaltyFactors_VB;                                            // 0x0328 (size: 0x8)
    class URichTextBlock* name_txt;                                                   // 0x0330 (size: 0x8)
    class UTextBlock* none_txt;                                                       // 0x0338 (size: 0x8)
    class UVerticalBox* pastFactors_VB;                                               // 0x0340 (size: 0x8)
    class UTextBlock* pst_none_txt_1;                                                 // 0x0348 (size: 0x8)
    class UTextBlock* TextBlock_59;                                                   // 0x0350 (size: 0x8)
    FName headerKey;                                                                  // 0x0358 (size: 0x8)
    FName mainTextKey;                                                                // 0x0360 (size: 0x8)
    TArray<FApprovalMemory> factors;                                                  // 0x0368 (size: 0x10)
    int32 approval;                                                                   // 0x0378 (size: 0x4)

    void updateContents(int32 approval);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_BigTooltip_Approval(int32 EntryPoint);
}; // Size: 0x37C

#endif
