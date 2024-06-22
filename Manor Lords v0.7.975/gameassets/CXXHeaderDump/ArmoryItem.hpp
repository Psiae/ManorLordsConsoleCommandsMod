#ifndef UE4SS_SDK_ArmoryItem_HPP
#define UE4SS_SDK_ArmoryItem_HPP

class UArmoryItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* place;                                                    // 0x0268 (size: 0x8)
    class UImage* goodIcon;                                                           // 0x0270 (size: 0x8)
    class UTextBlock* item_amt_txt;                                                   // 0x0278 (size: 0x8)
    class UBorder* itemBorder;                                                        // 0x0280 (size: 0x8)
    class USizeBox* name_box;                                                         // 0x0288 (size: 0x8)
    class UTextBlock* name_txt;                                                       // 0x0290 (size: 0x8)
    int32 goodType;                                                                   // 0x0298 (size: 0x4)
    int32 goodAmt;                                                                    // 0x029C (size: 0x4)
    bool isEnough;                                                                    // 0x02A0 (size: 0x1)
    bool showName;                                                                    // 0x02A1 (size: 0x1)
    class UunitEditor_C* unitEditorRef;                                               // 0x02A8 (size: 0x8)

    void press();
    void updateIconTint();
    void OnDragDetected(FGeometry MyGeometry, const FPointerEvent& PointerEvent, class UDragDropOperation*& Operation);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void Construct();
    void ExecuteUbergraph_ArmoryItem(int32 EntryPoint);
}; // Size: 0x2B0

#endif
