#ifndef UE4SS_SDK_CharacterPortrait_HPP
#define UE4SS_SDK_CharacterPortrait_HPP

class UCharacterPortrait_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* NewAnimation_1;                                           // 0x02E8 (size: 0x8)
    class UTextBlock* employed_txt;                                                   // 0x02F0 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02F8 (size: 0x8)
    FVector2D drag_offset;                                                            // 0x0300 (size: 0x10)
    class UCharacterPortraitDragWidget_C* DraggedWidget;                              // 0x0310 (size: 0x8)

    bool isSlotHovered(class UCharacterSlot_C*& hoveredSlot);
    void OnDragDetected(FGeometry MyGeometry, const FPointerEvent& PointerEvent, class UDragDropOperation*& Operation);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnDragCancelled(const FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
    void Construct();
    void ExecuteUbergraph_CharacterPortrait(int32 EntryPoint);
}; // Size: 0x318

#endif
