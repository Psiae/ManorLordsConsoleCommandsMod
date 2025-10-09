#ifndef UE4SS_SDK_BigTooltipSeasons_HPP
#define UE4SS_SDK_BigTooltipSeasons_HPP

class UBigTooltipSeasons_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* NewAnimation;                                             // 0x0268 (size: 0x8)
    class URichTextBlock* descr_RichTxt;                                              // 0x0270 (size: 0x8)
    class UImage* Image;                                                              // 0x0278 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0280 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0288 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0290 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0298 (size: 0x8)
    class UImage* Image_51;                                                           // 0x02A0 (size: 0x8)
    class URichTextBlock* name_txt;                                                   // 0x02A8 (size: 0x8)
    class URichTextBlock* RichTextBlock;                                              // 0x02B0 (size: 0x8)
    class URichTextBlock* RichTextBlock_1;                                            // 0x02B8 (size: 0x8)
    class URichTextBlock* RichTextBlock_2;                                            // 0x02C0 (size: 0x8)
    class URichTextBlock* RichTextBlock_70;                                           // 0x02C8 (size: 0x8)
    FName headerKey;                                                                  // 0x02D0 (size: 0x8)
    FName mainTextKey;                                                                // 0x02D8 (size: 0x8)
    TArray<FApprovalMemory> factors;                                                  // 0x02E0 (size: 0x10)
    int32 season;                                                                     // 0x02F0 (size: 0x4)

    void calculateSeason();
    void updateContents(int32 seasonID);
    void Construct();
    void ExecuteUbergraph_BigTooltipSeasons(int32 EntryPoint);
}; // Size: 0x2F4

#endif
