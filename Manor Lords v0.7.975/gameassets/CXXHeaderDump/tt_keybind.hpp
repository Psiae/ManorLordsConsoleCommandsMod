#ifndef UE4SS_SDK_tt_keybind_HPP
#define UE4SS_SDK_tt_keybind_HPP

class Utt_keybind_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class URichTextBlock* RichTextBlock_64;                                           // 0x0268 (size: 0x8)
    FName mappingName;                                                                // 0x0270 (size: 0x8)
    bool isAxis;                                                                      // 0x0278 (size: 0x1)
    int32 KeyIndex;                                                                   // 0x027C (size: 0x4)
    bool customName;                                                                  // 0x0280 (size: 0x1)

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_tt_keybind(int32 EntryPoint);
}; // Size: 0x281

#endif
