#ifndef UE4SS_SDK_CharacterPortraitDragBP_HPP
#define UE4SS_SDK_CharacterPortraitDragBP_HPP

class UCharacterPortraitDragBP_C : public UDragDropOperation
{
    class UUserWidget* widgetReference;                                               // 0x0088 (size: 0x8)
    FVector2D DragOffset;                                                             // 0x0090 (size: 0x8)
    bool hovering;                                                                    // 0x0098 (size: 0x1)

}; // Size: 0x99

#endif
