#ifndef UE4SS_SDK_BigTooltipMechanics_HPP
#define UE4SS_SDK_BigTooltipMechanics_HPP

class UBigTooltipMechanics_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* NewAnimation;                                             // 0x0268 (size: 0x8)
    class UBorder* Border_Pattern;                                                    // 0x0270 (size: 0x8)
    class URichTextBlock* descr_RichTxt;                                              // 0x0278 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0280 (size: 0x8)
    class URichTextBlock* name_txt;                                                   // 0x0288 (size: 0x8)
    FName headerKey;                                                                  // 0x0290 (size: 0x8)
    FName mainTextKey;                                                                // 0x0298 (size: 0x8)
    class UDataTable* TranslationDataTable;                                           // 0x02A0 (size: 0x8)

    void updateText(FName headerKey, FName mainTextKey);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void retranslate();
    void ExecuteUbergraph_BigTooltipMechanics(int32 EntryPoint);
}; // Size: 0x2A8

#endif
