#ifndef UE4SS_SDK_CustomTooltip_HPP
#define UE4SS_SDK_CustomTooltip_HPP

class UCustomTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* NewAnimation_1;                                           // 0x02E8 (size: 0x8)
    class UImage* Image_83;                                                           // 0x02F0 (size: 0x8)
    class URichTextBlock* RichTextBlock_0;                                            // 0x02F8 (size: 0x8)
    FText tooltipTxt;                                                                 // 0x0300 (size: 0x10)

    void Construct();
    void updateText(const FText& InText);
    void ExecuteUbergraph_CustomTooltip(int32 EntryPoint);
}; // Size: 0x310

#endif
