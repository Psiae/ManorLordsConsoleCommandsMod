#ifndef UE4SS_SDK_wiki_clickable_HPP
#define UE4SS_SDK_wiki_clickable_HPP

class Uwiki_clickable_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* clickableTextButton;                                               // 0x0268 (size: 0x8)
    class URichTextBlock* subject_main_descr;                                         // 0x0270 (size: 0x8)
    FText Text;                                                                       // 0x0278 (size: 0x18)
    Fwiki_clickable_CTryToChangeSubjectTo tryToChangeSubjectTo;                       // 0x0290 (size: 0x10)
    void tryToChangeSubjectTo(FText TranslatedText);
    FText Subject;                                                                    // 0x02A0 (size: 0x18)

    void BndEvt__wiki_clickable_Button_0_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_wiki_clickable(int32 EntryPoint);
    void tryToChangeSubjectTo__DelegateSignature(FText TranslatedText);
}; // Size: 0x2B8

#endif
