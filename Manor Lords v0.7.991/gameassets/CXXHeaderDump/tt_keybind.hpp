#ifndef UE4SS_SDK_tt_keybind_HPP
#define UE4SS_SDK_tt_keybind_HPP

class Utt_keybind_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class URichTextBlock* RichTextBlock_64;                                           // 0x02E8 (size: 0x8)
    FName MappingName;                                                                // 0x02F0 (size: 0x8)
    bool isAxis;                                                                      // 0x02F8 (size: 0x1)
    int32 keyIndex;                                                                   // 0x02FC (size: 0x4)
    bool CustomName;                                                                  // 0x0300 (size: 0x1)

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_tt_keybind(int32 EntryPoint);
}; // Size: 0x301

#endif
