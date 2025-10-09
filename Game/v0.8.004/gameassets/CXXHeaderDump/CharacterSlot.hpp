#ifndef UE4SS_SDK_CharacterSlot_HPP
#define UE4SS_SDK_CharacterSlot_HPP

class UCharacterSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* enact;                                                    // 0x02E8 (size: 0x8)
    class UImage* Bg;                                                                 // 0x02F0 (size: 0x8)
    class UImage* Icon;                                                               // 0x02F8 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x0300 (size: 0x8)
    class UCharacterPortraitDragWidget_C* DraggedWidget;                              // 0x0308 (size: 0x8)
    FVector2D drag_offset;                                                            // 0x0310 (size: 0x10)

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
}; // Size: 0x320

#endif
