#ifndef UE4SS_SDK_CustomTooltipLarge_HPP
#define UE4SS_SDK_CustomTooltipLarge_HPP

class UCustomTooltipLarge_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* NewAnimation_1;                                           // 0x02E8 (size: 0x8)
    class UImage* Image_83;                                                           // 0x02F0 (size: 0x8)
    class URichTextBlock* RichTextBlock_0;                                            // 0x02F8 (size: 0x8)
    FText tooltipTxt;                                                                 // 0x0300 (size: 0x10)

    void Construct();
    void updateText(const FText& InText);
    void ExecuteUbergraph_CustomTooltipLarge(int32 EntryPoint);
}; // Size: 0x310

#endif
