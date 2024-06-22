#ifndef UE4SS_SDK_CreditLine_HPP
#define UE4SS_SDK_CreditLine_HPP

class UCreditLine_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UOverlay* Parent;                                                           // 0x0268 (size: 0x8)
    class UTextBlock* TextDisplay;                                                    // 0x0270 (size: 0x8)
    FCreditsLine Details;                                                             // 0x0278 (size: 0x30)
    FSlateFontInfo HeaderFontStyle;                                                   // 0x02A8 (size: 0x58)
    FSlateFontInfo SectionFontStyle;                                                  // 0x0300 (size: 0x58)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_CreditLine(int32 EntryPoint);
}; // Size: 0x358

#endif
