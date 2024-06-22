#ifndef UE4SS_SDK_BigTooltipGeneric_HPP
#define UE4SS_SDK_BigTooltipGeneric_HPP

class UBigTooltipGeneric_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* NewAnimation;                                             // 0x0268 (size: 0x8)
    class UBorder* Border_0;                                                          // 0x0270 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0278 (size: 0x8)
    class URichTextBlock* descr_RichTxt;                                              // 0x0280 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0288 (size: 0x8)
    class URichTextBlock* name_txt;                                                   // 0x0290 (size: 0x8)
    FText headerTxt;                                                                  // 0x0298 (size: 0x18)
    FText DescrTxt;                                                                   // 0x02B0 (size: 0x18)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void updateText(FText headerTxt, FText DescrTxt);
    void Construct();
    void ExecuteUbergraph_BigTooltipGeneric(int32 EntryPoint);
}; // Size: 0x2C8

#endif
