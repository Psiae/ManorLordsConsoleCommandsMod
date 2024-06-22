#ifndef UE4SS_SDK_Wiki_Subject_HPP
#define UE4SS_SDK_Wiki_Subject_HPP

class UWiki_Subject_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_22;                                                         // 0x0268 (size: 0x8)
    class UImage* Image_38;                                                           // 0x0270 (size: 0x8)
    class URichTextBlock* subjectText;                                                // 0x0278 (size: 0x8)
    FName subjectKey;                                                                 // 0x0280 (size: 0x8)
    FWiki_Subject_CChangeSubject changeSubject;                                       // 0x0288 (size: 0x10)
    void changeSubject(FName newSubject);
    FName subjectCategory;                                                            // 0x0298 (size: 0x8)

    void BndEvt__Wiki_Subject_Button_22_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_Wiki_Subject(int32 EntryPoint);
    void changeSubject__DelegateSignature(FName newSubject);
}; // Size: 0x2A0

#endif
