#ifndef UE4SS_SDK_letterParagraph_HPP
#define UE4SS_SDK_letterParagraph_HPP

class UletterParagraph_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* lerpIn;                                                   // 0x02E8 (size: 0x8)
    class UBorder* borderMain;                                                        // 0x02F0 (size: 0x8)
    class UComboBoxString* ComboBoxString_384;                                        // 0x02F8 (size: 0x8)
    class UEditableText* EditableText_amt;                                            // 0x0300 (size: 0x8)
    class UImage* Locked;                                                             // 0x0308 (size: 0x8)
    class UMD_NaviHijackProxy_C* MD_NaviHijackProxy;                                  // 0x0310 (size: 0x8)
    class UBorder* paraCombosBorder;                                                  // 0x0318 (size: 0x8)
    class UTextBlock* paragraph_txt;                                                  // 0x0320 (size: 0x8)
    class UImage* paragraphType_Icon;                                                 // 0x0328 (size: 0x8)
    int32 R;                                                                          // 0x0330 (size: 0x4)
    FName para;                                                                       // 0x0334 (size: 0x8)
    bool onLetterCreator;                                                             // 0x033C (size: 0x1)
    bool onMessage;                                                                   // 0x033D (size: 0x1)
    bool onLetterCreatorAvailable;                                                    // 0x033E (size: 0x1)
    FName paraLeftSide;                                                               // 0x0340 (size: 0x8)
    FString paraRightSide;                                                            // 0x0348 (size: 0x10)
    EParaPick Para Pick;                                                              // 0x0358 (size: 0x1)
    FString paraRightSide_translated;                                                 // 0x0360 (size: 0x10)
    bool isPendingLetterPart;                                                         // 0x0370 (size: 0x1)

    void RemoveFromLetterParts();
    void GetLetterCreator(class UletterCreator_C*& letterCreator);
    void getUnfoldedPara(FName& para);
    void translateRightSide();
    void unfoldPickToPara();
    class UWidget* OnGenerateWidget_0(FString Item);
    void getRecipient(class APawnCPP*& recipientPawn);
    void UpdateContent();
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnDragDetected(FGeometry MyGeometry, const FPointerEvent& PointerEvent, class UDragDropOperation*& Operation);
    void BndEvt__letterParagraph_EditableText_amt_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(const FText& Text);
    void OnDragCancelled(const FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
    void Construct();
    void BndEvt__letterParagraph_MD_NaviHijackProxy_K2Node_ComponentBoundEvent_2_HijackedHandleInput__DelegateSignature(ENaviUiIntent intent);
    void ExecuteUbergraph_letterParagraph(int32 EntryPoint);
}; // Size: 0x371

#endif
