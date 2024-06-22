#ifndef UE4SS_SDK_settlementLv_tooltip_HPP
#define UE4SS_SDK_settlementLv_tooltip_HPP

class UsettlementLv_tooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UBorder* Border_Pattern;                                                    // 0x0268 (size: 0x8)
    class URichTextBlock* current_txt;                                                // 0x0270 (size: 0x8)
    class URichTextBlock* descr_RichTxt;                                              // 0x0278 (size: 0x8)
    class UImage* Image;                                                              // 0x0280 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0288 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_0;                                  // 0x0290 (size: 0x8)
    class UTextBlock* TextBlock_59;                                                   // 0x0298 (size: 0x8)
    class UTextBlock* TextBlock_78;                                                   // 0x02A0 (size: 0x8)
    class UVerticalBox* VerticalBox_51;                                               // 0x02A8 (size: 0x8)
    class ARegion* Region;                                                            // 0x02B0 (size: 0x8)

    void updateSettlementLevelDetails(int32 settlementLevel);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_settlementLv_tooltip(int32 EntryPoint);
}; // Size: 0x2B8

#endif
