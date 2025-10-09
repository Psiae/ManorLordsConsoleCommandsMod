#ifndef UE4SS_SDK_BigTooltipGeneric_HPP
#define UE4SS_SDK_BigTooltipGeneric_HPP

class UBigTooltipGeneric_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* NewAnimation;                                             // 0x02E8 (size: 0x8)
    class UBorder* Border_0;                                                          // 0x02F0 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x02F8 (size: 0x8)
    class URichTextBlock* descr_RichTxt;                                              // 0x0300 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0308 (size: 0x8)
    class URichTextBlock* name_txt;                                                   // 0x0310 (size: 0x8)
    FText headerTxt;                                                                  // 0x0318 (size: 0x10)
    FText DescrTxt;                                                                   // 0x0328 (size: 0x10)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void updateText(FText headerTxt, FText DescrTxt);
    void Construct();
    void ExecuteUbergraph_BigTooltipGeneric(int32 EntryPoint);
}; // Size: 0x338

#endif
