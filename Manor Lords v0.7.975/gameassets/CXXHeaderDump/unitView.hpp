#ifndef UE4SS_SDK_unitView_HPP
#define UE4SS_SDK_unitView_HPP

class UunitView_C : public UUserWidget
{
    class UWidgetAnimation* Open;                                                     // 0x0260 (size: 0x8)
    class UImage* Image;                                                              // 0x0268 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0270 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0278 (size: 0x8)
    class UImage* Image_150;                                                          // 0x0280 (size: 0x8)
    class UImage* Image_241;                                                          // 0x0288 (size: 0x8)
    class UOverlay* slot_armor;                                                       // 0x0290 (size: 0x8)
    class UOverlay* slot_helmet;                                                      // 0x0298 (size: 0x8)
    class UOverlay* slot_shield;                                                      // 0x02A0 (size: 0x8)
    class UOverlay* slot_wpn;                                                         // 0x02A8 (size: 0x8)
    class UVerticalBox* slots_VB;                                                     // 0x02B0 (size: 0x8)
    class UunitEditor_C* unitEditorRef;                                               // 0x02B8 (size: 0x8)
    TArray<class UArmoryItem_C*> armoryItemWidgets;                                   // 0x02C0 (size: 0x10)

    void spawnArmoryItemWidget(const FGood& Good);
    void updateSlots();
    bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);
}; // Size: 0x2D0

#endif
