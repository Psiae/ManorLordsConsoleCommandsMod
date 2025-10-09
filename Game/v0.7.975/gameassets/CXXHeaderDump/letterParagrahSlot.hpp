#ifndef UE4SS_SDK_letterParagrahSlot_HPP
#define UE4SS_SDK_letterParagrahSlot_HPP

class UletterParagrahSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UBorder* Border_36;                                                         // 0x0268 (size: 0x8)
    class UImage* Image;                                                              // 0x0270 (size: 0x8)
    class UImage* Image_33;                                                           // 0x0278 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x0280 (size: 0x8)
    class UletterCreator_C* Parent_LetterCreatorRef;                                  // 0x0288 (size: 0x8)

    void switchColor(bool Hovered);
    bool OnDragOver(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    void OnDragLeave(FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    void ExecuteUbergraph_letterParagrahSlot(int32 EntryPoint);
}; // Size: 0x290

#endif
