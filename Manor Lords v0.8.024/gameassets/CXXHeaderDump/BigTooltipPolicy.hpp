#ifndef UE4SS_SDK_BigTooltipPolicy_HPP
#define UE4SS_SDK_BigTooltipPolicy_HPP

class UBigTooltipPolicy_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* NewAnimation;                                             // 0x02E8 (size: 0x8)
    class UBorder* Border;                                                            // 0x02F0 (size: 0x8)
    class URichTextBlock* descr_RichTxt;                                              // 0x02F8 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0300 (size: 0x8)
    class UTextBlock* name_txt;                                                       // 0x0308 (size: 0x8)
    int32 policyID;                                                                   // 0x0310 (size: 0x4)
    bool Locked;                                                                      // 0x0314 (size: 0x1)

    void Construct();
    void ExecuteUbergraph_BigTooltipPolicy(int32 EntryPoint);
}; // Size: 0x315

#endif
