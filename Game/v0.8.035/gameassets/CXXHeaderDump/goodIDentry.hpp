#ifndef UE4SS_SDK_goodIDentry_HPP
#define UE4SS_SDK_goodIDentry_HPP

class UgoodIDentry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UImage* Icon;                                                               // 0x02D8 (size: 0x8)
    class UTextBlock* TextBlock_21;                                                   // 0x02E0 (size: 0x8)
    int32 ItemId;                                                                     // 0x02E8 (size: 0x4)

    void Construct();
    void ExecuteUbergraph_goodIDentry(int32 EntryPoint);
}; // Size: 0x2EC

#endif
