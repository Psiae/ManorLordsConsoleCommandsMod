#ifndef UE4SS_SDK_CharacterPortrait_HPP
#define UE4SS_SDK_CharacterPortrait_HPP

class UCharacterPortrait_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* NewAnimation_1;                                           // 0x0268 (size: 0x8)
    class UTextBlock* employed_txt;                                                   // 0x0270 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0278 (size: 0x8)
    FVector2D drag_offset;                                                            // 0x0280 (size: 0x8)
    class UCharacterPortraitDragWidget_C* DraggedWidget;                              // 0x0288 (size: 0x8)

    bool isSlotHovered(class UCharacterSlot_C*& hoveredSlot);
    void OnDragDetected(FGeometry MyGeometry, const FPointerEvent& PointerEvent, class UDragDropOperation*& Operation);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnDragCancelled(const FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
    void Construct();
    void ExecuteUbergraph_CharacterPortrait(int32 EntryPoint);
}; // Size: 0x290

#endif
