#ifndef UE4SS_SDK_ChoiceTooltip_HPP
#define UE4SS_SDK_ChoiceTooltip_HPP

class UChoiceTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* NewAnimation;                                             // 0x0268 (size: 0x8)
    class UlocalizedTextBox_C* focus-txt_1;                                           // 0x0270 (size: 0x8)
    class UImage* Image_125;                                                          // 0x0278 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_1;                                  // 0x0280 (size: 0x8)
    class UVerticalBox* objectieBorder_VB;                                            // 0x0288 (size: 0x8)
    class USizeBox* objectives_sb;                                                    // 0x0290 (size: 0x8)
    class UVerticalBox* objectives_VB;                                                // 0x0298 (size: 0x8)
    class UTextBlock* questTimeRemaining;                                             // 0x02A0 (size: 0x8)
    class UImage* Spacer_1;                                                           // 0x02A8 (size: 0x8)
    class UVerticalBox* Time_VB;                                                      // 0x02B0 (size: 0x8)
    class UHorizontalBox* timeLeft_HB;                                                // 0x02B8 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_ChoiceTooltip(int32 EntryPoint);
}; // Size: 0x2C0

#endif
