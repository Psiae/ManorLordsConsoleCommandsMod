#ifndef UE4SS_SDK_localizedTextBox_HPP
#define UE4SS_SDK_localizedTextBox_HPP

class UlocalizedTextBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UTextBlock* TextBlock_16;                                                   // 0x02D8 (size: 0x8)
    int32 FontSize;                                                                   // 0x02E0 (size: 0x4)
    FName Translation Key;                                                            // 0x02E4 (size: 0x8)
    bool isMainUI;                                                                    // 0x02EC (size: 0x1)
    bool Text to Upper;                                                               // 0x02ED (size: 0x1)
    bool Italic;                                                                      // 0x02EE (size: 0x1)
    class UObject* Font Family;                                                       // 0x02F0 (size: 0x8)
    class UDataTable* DataTableOverride;                                              // 0x02F8 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void Translate();
    void changeText(FName NewKey);
    void ExecuteUbergraph_localizedTextBox(int32 EntryPoint);
}; // Size: 0x300

#endif
