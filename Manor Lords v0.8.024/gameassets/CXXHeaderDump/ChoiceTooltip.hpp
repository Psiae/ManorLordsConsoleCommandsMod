#ifndef UE4SS_SDK_ChoiceTooltip_HPP
#define UE4SS_SDK_ChoiceTooltip_HPP

class UChoiceTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* NewAnimation;                                             // 0x02E8 (size: 0x8)
    class UlocalizedTextBox_C* focus-txt_1;                                           // 0x02F0 (size: 0x8)
    class UImage* Image_125;                                                          // 0x02F8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_1;                                  // 0x0300 (size: 0x8)
    class UVerticalBox* objectieBorder_VB;                                            // 0x0308 (size: 0x8)
    class USizeBox* objectives_sb;                                                    // 0x0310 (size: 0x8)
    class UVerticalBox* objectives_VB;                                                // 0x0318 (size: 0x8)
    class UTextBlock* questTimeRemaining;                                             // 0x0320 (size: 0x8)
    class UImage* Spacer_1;                                                           // 0x0328 (size: 0x8)
    class UVerticalBox* Time_VB;                                                      // 0x0330 (size: 0x8)
    class UHorizontalBox* timeLeft_HB;                                                // 0x0338 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_ChoiceTooltip(int32 EntryPoint);
}; // Size: 0x340

#endif
