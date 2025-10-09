#ifndef UE4SS_SDK_ArmoryItem_HPP
#define UE4SS_SDK_ArmoryItem_HPP

class UArmoryItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* place;                                                    // 0x02E8 (size: 0x8)
    class UImage* goodIcon;                                                           // 0x02F0 (size: 0x8)
    class UTextBlock* item_amt_txt;                                                   // 0x02F8 (size: 0x8)
    class UBorder* itemBorder;                                                        // 0x0300 (size: 0x8)
    class USizeBox* name_box;                                                         // 0x0308 (size: 0x8)
    class UTextBlock* name_txt;                                                       // 0x0310 (size: 0x8)
    int32 goodType;                                                                   // 0x0318 (size: 0x4)
    int32 goodAmt;                                                                    // 0x031C (size: 0x4)
    bool isEnough;                                                                    // 0x0320 (size: 0x1)
    bool showName;                                                                    // 0x0321 (size: 0x1)
    class UunitEditor_C* unitEditorRef;                                               // 0x0328 (size: 0x8)

    void press();
    void updateIconTint();
    void OnDragDetected(FGeometry MyGeometry, const FPointerEvent& PointerEvent, class UDragDropOperation*& Operation);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void Construct();
    void ExecuteUbergraph_ArmoryItem(int32 EntryPoint);
}; // Size: 0x330

#endif
