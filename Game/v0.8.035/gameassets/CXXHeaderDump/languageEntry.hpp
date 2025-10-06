#ifndef UE4SS_SDK_languageEntry_HPP
#define UE4SS_SDK_languageEntry_HPP

class UlanguageEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UTextBlock* TextBlock_43;                                                   // 0x02D8 (size: 0x8)
    FString langKey;                                                                  // 0x02E0 (size: 0x10)

    void Construct();
    void ExecuteUbergraph_languageEntry(int32 EntryPoint);
}; // Size: 0x2F0

#endif
