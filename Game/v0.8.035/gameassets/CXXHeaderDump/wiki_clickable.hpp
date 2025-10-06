#ifndef UE4SS_SDK_wiki_clickable_HPP
#define UE4SS_SDK_wiki_clickable_HPP

class Uwiki_clickable_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UButton* clickableTextButton;                                               // 0x02D8 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton;                                    // 0x02E0 (size: 0x8)
    class URichTextBlock* subject_main_descr;                                         // 0x02E8 (size: 0x8)
    FText Text;                                                                       // 0x02F0 (size: 0x10)
    Fwiki_clickable_CTryToChangeSubjectTo tryToChangeSubjectTo;                       // 0x0300 (size: 0x10)
    void tryToChangeSubjectTo(FText TranslatedText, bool isFormatted);
    FText Subject;                                                                    // 0x0310 (size: 0x10)

    void BndEvt__wiki_clickable_Button_0_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_wiki_clickable(int32 EntryPoint);
    void tryToChangeSubjectTo__DelegateSignature(FText TranslatedText, bool isFormatted);
}; // Size: 0x320

#endif
