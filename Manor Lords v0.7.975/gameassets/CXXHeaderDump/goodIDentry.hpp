#ifndef UE4SS_SDK_goodIDentry_HPP
#define UE4SS_SDK_goodIDentry_HPP

class UgoodIDentry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Icon;                                                               // 0x0268 (size: 0x8)
    class UTextBlock* TextBlock_21;                                                   // 0x0270 (size: 0x8)
    int32 ItemId;                                                                     // 0x0278 (size: 0x4)

    void Construct();
    void ExecuteUbergraph_goodIDentry(int32 EntryPoint);
}; // Size: 0x27C

#endif
