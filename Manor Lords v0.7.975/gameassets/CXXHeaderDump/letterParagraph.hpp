#ifndef UE4SS_SDK_letterParagraph_HPP
#define UE4SS_SDK_letterParagraph_HPP

class UletterParagraph_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* lerpIn;                                                   // 0x0268 (size: 0x8)
    class UBorder* borderMain;                                                        // 0x0270 (size: 0x8)
    class UComboBoxString* ComboBoxString_384;                                        // 0x0278 (size: 0x8)
    class UEditableText* EditableText_amt;                                            // 0x0280 (size: 0x8)
    class UImage* Locked;                                                             // 0x0288 (size: 0x8)
    class UBorder* paraCombosBorder;                                                  // 0x0290 (size: 0x8)
    class UTextBlock* paragraph_txt;                                                  // 0x0298 (size: 0x8)
    class UImage* paragraphType_Icon;                                                 // 0x02A0 (size: 0x8)
    int32 R;                                                                          // 0x02A8 (size: 0x4)
    FName para;                                                                       // 0x02AC (size: 0x8)
    bool onLetterCreator;                                                             // 0x02B4 (size: 0x1)
    bool onMessage;                                                                   // 0x02B5 (size: 0x1)
    bool onLetterCreatorAvailable;                                                    // 0x02B6 (size: 0x1)
    FName paraLeftSide;                                                               // 0x02B8 (size: 0x8)
    FString paraRightSide;                                                            // 0x02C0 (size: 0x10)
    EParaPick Para Pick;                                                              // 0x02D0 (size: 0x1)
    FString paraRightSide_translated;                                                 // 0x02D8 (size: 0x10)

    void getUnfoldedPara(FName& para);
    void translateRightSide();
    void unfoldPickToPara();
    class UWidget* OnGenerateWidget_0(FString Item);
    void getRecipient(class APawnCPP*& recipientPawn);
    void UpdateContent();
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnDragDetected(FGeometry MyGeometry, const FPointerEvent& PointerEvent, class UDragDropOperation*& Operation);
    void Construct();
    void OnDragCancelled(const FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
    void BndEvt__letterParagraph_EditableText_amt_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(const FText& Text);
    void ExecuteUbergraph_letterParagraph(int32 EntryPoint);
}; // Size: 0x2E8

#endif
