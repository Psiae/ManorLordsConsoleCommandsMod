#ifndef UE4SS_SDK_BigTooltipPolicy_HPP
#define UE4SS_SDK_BigTooltipPolicy_HPP

class UBigTooltipPolicy_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* NewAnimation;                                             // 0x0268 (size: 0x8)
    class UBorder* Border;                                                            // 0x0270 (size: 0x8)
    class URichTextBlock* descr_RichTxt;                                              // 0x0278 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0280 (size: 0x8)
    class UTextBlock* name_txt;                                                       // 0x0288 (size: 0x8)
    int32 policyID;                                                                   // 0x0290 (size: 0x4)
    bool Locked;                                                                      // 0x0294 (size: 0x1)

    void Construct();
    void ExecuteUbergraph_BigTooltipPolicy(int32 EntryPoint);
}; // Size: 0x295

#endif
