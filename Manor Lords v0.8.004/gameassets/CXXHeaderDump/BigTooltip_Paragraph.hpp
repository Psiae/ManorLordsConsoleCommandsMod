#ifndef UE4SS_SDK_BigTooltip_Paragraph_HPP
#define UE4SS_SDK_BigTooltip_Paragraph_HPP

class UBigTooltip_Paragraph_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* NewAnimation;                                             // 0x02E8 (size: 0x8)
    class UBorder* Border;                                                            // 0x02F0 (size: 0x8)
    class UImage* construction_separator;                                             // 0x02F8 (size: 0x8)
    class URichTextBlock* descr_RichTxt;                                              // 0x0300 (size: 0x8)
    class UImage* Image;                                                              // 0x0308 (size: 0x8)
    class UImage* Image_128;                                                          // 0x0310 (size: 0x8)
    class UTextBlock* influence_txt;                                                  // 0x0318 (size: 0x8)
    class UHorizontalBox* para_cost;                                                  // 0x0320 (size: 0x8)
    class UHorizontalBox* para_details_HB;                                            // 0x0328 (size: 0x8)
    class UHorizontalBox* para_rela;                                                  // 0x0330 (size: 0x8)
    class UTextBlock* relations_txt;                                                  // 0x0338 (size: 0x8)
    class USizeBox* SizeBox_0;                                                        // 0x0340 (size: 0x8)
    FName Paragraph;                                                                  // 0x0348 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_BigTooltip_Paragraph(int32 EntryPoint);
}; // Size: 0x350

#endif
