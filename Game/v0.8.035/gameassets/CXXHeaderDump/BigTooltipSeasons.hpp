#ifndef UE4SS_SDK_BigTooltipSeasons_HPP
#define UE4SS_SDK_BigTooltipSeasons_HPP

class UBigTooltipSeasons_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UWidgetAnimation* NewAnimation;                                             // 0x02D8 (size: 0x8)
    class URichTextBlock* descr_RichTxt;                                              // 0x02E0 (size: 0x8)
    class UImage* Image;                                                              // 0x02E8 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02F0 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02F8 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0300 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0308 (size: 0x8)
    class UImage* Image_51;                                                           // 0x0310 (size: 0x8)
    class URichTextBlock* name_txt;                                                   // 0x0318 (size: 0x8)
    class URichTextBlock* RichTextBlock;                                              // 0x0320 (size: 0x8)
    class URichTextBlock* RichTextBlock_1;                                            // 0x0328 (size: 0x8)
    class URichTextBlock* RichTextBlock_2;                                            // 0x0330 (size: 0x8)
    class URichTextBlock* RichTextBlock_70;                                           // 0x0338 (size: 0x8)
    FName headerKey;                                                                  // 0x0340 (size: 0x8)
    FName mainTextKey;                                                                // 0x0348 (size: 0x8)
    TArray<FApprovalMemory> factors;                                                  // 0x0350 (size: 0x10)
    int32 season;                                                                     // 0x0360 (size: 0x4)

    void calculateSeason();
    void UpdateContents(int32 seasonID);
    void Construct();
    void ExecuteUbergraph_BigTooltipSeasons(int32 EntryPoint);
}; // Size: 0x364

#endif
