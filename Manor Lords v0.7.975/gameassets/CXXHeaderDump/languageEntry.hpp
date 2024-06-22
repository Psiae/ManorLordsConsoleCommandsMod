#ifndef UE4SS_SDK_languageEntry_HPP
#define UE4SS_SDK_languageEntry_HPP

class UlanguageEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_61;                                                           // 0x0268 (size: 0x8)
    class UTextBlock* TextBlock_43;                                                   // 0x0270 (size: 0x8)
    FString langKey;                                                                  // 0x0278 (size: 0x10)

    void Construct();
    void ExecuteUbergraph_languageEntry(int32 EntryPoint);
}; // Size: 0x288

#endif
