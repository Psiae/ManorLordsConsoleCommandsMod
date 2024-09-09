#ifndef UE4SS_SDK_CreditLine_HPP
#define UE4SS_SDK_CreditLine_HPP

class UCreditLine_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UOverlay* Parent;                                                           // 0x02E8 (size: 0x8)
    class UTextBlock* TextDisplay;                                                    // 0x02F0 (size: 0x8)
    FCreditsLine Details;                                                             // 0x02F8 (size: 0x30)
    FSlateFontInfo HeaderFontStyle;                                                   // 0x0328 (size: 0x60)
    FSlateFontInfo SectionFontStyle;                                                  // 0x0388 (size: 0x60)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_CreditLine(int32 EntryPoint);
}; // Size: 0x3E8

#endif
