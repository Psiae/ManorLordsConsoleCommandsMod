#ifndef UE4SS_SDK_BigTooltip_Paragraph_HPP
#define UE4SS_SDK_BigTooltip_Paragraph_HPP

class UBigTooltip_Paragraph_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* NewAnimation;                                             // 0x0268 (size: 0x8)
    class UBorder* Border;                                                            // 0x0270 (size: 0x8)
    class UImage* construction_separator;                                             // 0x0278 (size: 0x8)
    class URichTextBlock* descr_RichTxt;                                              // 0x0280 (size: 0x8)
    class UImage* Image;                                                              // 0x0288 (size: 0x8)
    class UImage* Image_128;                                                          // 0x0290 (size: 0x8)
    class UTextBlock* influence_txt;                                                  // 0x0298 (size: 0x8)
    class UHorizontalBox* para_cost;                                                  // 0x02A0 (size: 0x8)
    class UHorizontalBox* para_details_HB;                                            // 0x02A8 (size: 0x8)
    class UHorizontalBox* para_rela;                                                  // 0x02B0 (size: 0x8)
    class UTextBlock* relations_txt;                                                  // 0x02B8 (size: 0x8)
    class USizeBox* SizeBox_0;                                                        // 0x02C0 (size: 0x8)
    FName Paragraph;                                                                  // 0x02C8 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_BigTooltip_Paragraph(int32 EntryPoint);
}; // Size: 0x2D0

#endif
