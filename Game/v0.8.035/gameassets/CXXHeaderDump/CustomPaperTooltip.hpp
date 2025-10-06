#ifndef UE4SS_SDK_CustomPaperTooltip_HPP
#define UE4SS_SDK_CustomPaperTooltip_HPP

class UCustomPaperTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UDecoratedFrameWidget_C* DecoratedFrameWidget;                              // 0x02D8 (size: 0x8)
    class URichTextBlock* RichTextBlock_0;                                            // 0x02E0 (size: 0x8)
    FText tooltipTxt;                                                                 // 0x02E8 (size: 0x10)
    float Max Desired Width;                                                          // 0x02F8 (size: 0x4)

    void UpdateText(const FText& InText);
    void Reconstruct();
    void Construct();
    void ExecuteUbergraph_CustomPaperTooltip(int32 EntryPoint);
}; // Size: 0x2FC

#endif
