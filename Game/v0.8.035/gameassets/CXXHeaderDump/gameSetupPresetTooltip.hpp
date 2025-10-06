#ifndef UE4SS_SDK_gameSetupPresetTooltip_HPP
#define UE4SS_SDK_gameSetupPresetTooltip_HPP

class UgameSetupPresetTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class URichTextBlock* Header;                                                     // 0x02D8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x02E0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_1;                                    // 0x02E8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_2;                                    // 0x02F0 (size: 0x8)
    class URichTextBlock* narrative;                                                  // 0x02F8 (size: 0x8)
    class URichTextBlock* RichTextBlock;                                              // 0x0300 (size: 0x8)
    class URichTextBlock* RichTextBlock_1;                                            // 0x0308 (size: 0x8)
    FName gameSetupRowKey;                                                            // 0x0310 (size: 0x8)

    void Construct();
    void retranslate();
    void ExecuteUbergraph_gameSetupPresetTooltip(int32 EntryPoint);
}; // Size: 0x318

#endif
