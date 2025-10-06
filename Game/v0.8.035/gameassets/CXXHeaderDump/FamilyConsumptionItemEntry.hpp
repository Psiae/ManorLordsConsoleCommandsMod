#ifndef UE4SS_SDK_FamilyConsumptionItemEntry_HPP
#define UE4SS_SDK_FamilyConsumptionItemEntry_HPP

class UFamilyConsumptionItemEntry_C : public UUserWidget
{
    class UImage* category_image;                                                     // 0x02D0 (size: 0x8)
    class UTextBlock* consumption_type_text;                                          // 0x02D8 (size: 0x8)
    class UTextBlock* consumption_type_text_1;                                        // 0x02E0 (size: 0x8)
    class UTextBlock* daysLeft_txt;                                                   // 0x02E8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x02F0 (size: 0x8)
    class UProgressBar* ProgressBar_0;                                                // 0x02F8 (size: 0x8)
    FRichImageRow Out Row;                                                            // 0x0300 (size: 0xC0)

    void UpdateEntryData(FFamilyConsumptionData Data);
}; // Size: 0x3C0

#endif
