#ifndef UE4SS_SDK_Wiki_Subject_HPP
#define UE4SS_SDK_Wiki_Subject_HPP

class UWiki_Subject_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Button_22;                                                         // 0x02E8 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton;                                    // 0x02F0 (size: 0x8)
    class URichTextBlock* subjectText;                                                // 0x02F8 (size: 0x8)
    FName subjectKey;                                                                 // 0x0300 (size: 0x8)
    FWiki_Subject_CChangeSubject changeSubject;                                       // 0x0308 (size: 0x10)
    void changeSubject(FName newSubject);
    FName subjectCategory;                                                            // 0x0318 (size: 0x8)

    void BndEvt__Wiki_Subject_Button_22_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_Wiki_Subject(int32 EntryPoint);
    void changeSubject__DelegateSignature(FName newSubject);
}; // Size: 0x320

#endif
