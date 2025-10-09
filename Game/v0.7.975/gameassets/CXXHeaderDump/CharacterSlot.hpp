#ifndef UE4SS_SDK_CharacterSlot_HPP
#define UE4SS_SDK_CharacterSlot_HPP

class UCharacterSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* enact;                                                    // 0x0268 (size: 0x8)
    class UImage* Bg;                                                                 // 0x0270 (size: 0x8)
    class UImage* Icon;                                                               // 0x0278 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x0280 (size: 0x8)
    class UCharacterPortraitDragWidget_C* DraggedWidget;                              // 0x0288 (size: 0x8)
    FVector2D drag_offset;                                                            // 0x0290 (size: 0x8)

    void updatePos();
    void updateCharacter();
    void OnDragDetected(FGeometry MyGeometry, const FPointerEvent& PointerEvent, class UDragDropOperation*& Operation);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnDragCancelled(const FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
    void Construct();
    void OnDragEnter(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    void OnDragLeave(FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    void ExecuteUbergraph_CharacterSlot(int32 EntryPoint);
}; // Size: 0x298

#endif
