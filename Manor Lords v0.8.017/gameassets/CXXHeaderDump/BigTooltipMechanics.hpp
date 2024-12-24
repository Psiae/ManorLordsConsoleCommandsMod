#ifndef UE4SS_SDK_BigTooltipMechanics_HPP
#define UE4SS_SDK_BigTooltipMechanics_HPP

class UBigTooltipMechanics_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* NewAnimation;                                             // 0x02E8 (size: 0x8)
    class UBorder* Border_Pattern;                                                    // 0x02F0 (size: 0x8)
    class URichTextBlock* descr_RichTxt;                                              // 0x02F8 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0300 (size: 0x8)
    class URichTextBlock* name_txt;                                                   // 0x0308 (size: 0x8)
    FName headerKey;                                                                  // 0x0310 (size: 0x8)
    FName mainTextKey;                                                                // 0x0318 (size: 0x8)
    class UDataTable* TranslationDataTable;                                           // 0x0320 (size: 0x8)

    void updateText(FName headerKey, FName mainTextKey);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void retranslate();
    void ExecuteUbergraph_BigTooltipMechanics(int32 EntryPoint);
}; // Size: 0x328

#endif
