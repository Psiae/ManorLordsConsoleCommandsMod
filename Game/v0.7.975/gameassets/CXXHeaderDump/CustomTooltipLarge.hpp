#ifndef UE4SS_SDK_CustomTooltipLarge_HPP
#define UE4SS_SDK_CustomTooltipLarge_HPP

class UCustomTooltipLarge_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* NewAnimation_1;                                           // 0x0268 (size: 0x8)
    class UImage* Image_83;                                                           // 0x0270 (size: 0x8)
    class URichTextBlock* RichTextBlock_0;                                            // 0x0278 (size: 0x8)
    FText tooltipTxt;                                                                 // 0x0280 (size: 0x18)

    void Construct();
    void updateText(const FText& InText);
    void ExecuteUbergraph_CustomTooltipLarge(int32 EntryPoint);
}; // Size: 0x298

#endif
