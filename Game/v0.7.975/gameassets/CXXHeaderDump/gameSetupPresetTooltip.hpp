#ifndef UE4SS_SDK_gameSetupPresetTooltip_HPP
#define UE4SS_SDK_gameSetupPresetTooltip_HPP

class UgameSetupPresetTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class URichTextBlock* Header;                                                     // 0x0268 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x0270 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_1;                                    // 0x0278 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_2;                                    // 0x0280 (size: 0x8)
    class URichTextBlock* narrative;                                                  // 0x0288 (size: 0x8)
    class URichTextBlock* RichTextBlock;                                              // 0x0290 (size: 0x8)
    class URichTextBlock* RichTextBlock_1;                                            // 0x0298 (size: 0x8)
    FName gameSetupRowKey;                                                            // 0x02A0 (size: 0x8)

    void Construct();
    void retranslate();
    void ExecuteUbergraph_gameSetupPresetTooltip(int32 EntryPoint);
}; // Size: 0x2A8

#endif
