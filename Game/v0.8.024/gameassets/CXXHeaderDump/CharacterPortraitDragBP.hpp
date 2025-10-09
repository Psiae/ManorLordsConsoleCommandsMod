#ifndef UE4SS_SDK_CharacterPortraitDragBP_HPP
#define UE4SS_SDK_CharacterPortraitDragBP_HPP

class UCharacterPortraitDragBP_C : public UDragDropOperation
{
    class UUserWidget* WidgetReference;                                               // 0x0090 (size: 0x8)
    FVector2D DragOffset;                                                             // 0x0098 (size: 0x10)
    bool hovering;                                                                    // 0x00A8 (size: 0x1)

}; // Size: 0xA9

#endif
