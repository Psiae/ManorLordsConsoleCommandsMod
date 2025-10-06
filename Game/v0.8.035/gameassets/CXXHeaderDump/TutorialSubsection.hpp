#ifndef UE4SS_SDK_TutorialSubsection_HPP
#define UE4SS_SDK_TutorialSubsection_HPP

class UTutorialSubsection_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class URichTextBlock* Icon_RichTextBlock;                                         // 0x02D8 (size: 0x8)
    class URichTextBlock* RichTextBlock_20;                                           // 0x02E0 (size: 0x8)
    FName SubsectionKey;                                                              // 0x02E8 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_TutorialSubsection(int32 EntryPoint);
}; // Size: 0x2F0

#endif
