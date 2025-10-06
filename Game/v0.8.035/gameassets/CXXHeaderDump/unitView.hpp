#ifndef UE4SS_SDK_unitView_HPP
#define UE4SS_SDK_unitView_HPP

class UunitView_C : public UUserWidget
{
    class UWidgetAnimation* Open;                                                     // 0x02D0 (size: 0x8)
    class UImage* Image;                                                              // 0x02D8 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02E0 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02E8 (size: 0x8)
    class UImage* Image_150;                                                          // 0x02F0 (size: 0x8)
    class UImage* Image_241;                                                          // 0x02F8 (size: 0x8)
    class UOverlay* slot_armor;                                                       // 0x0300 (size: 0x8)
    class UOverlay* slot_helmet;                                                      // 0x0308 (size: 0x8)
    class UOverlay* slot_shield;                                                      // 0x0310 (size: 0x8)
    class UOverlay* slot_wpn;                                                         // 0x0318 (size: 0x8)
    class UVerticalBox* slots_VB;                                                     // 0x0320 (size: 0x8)
    class UunitEditor_C* unitEditorRef;                                               // 0x0328 (size: 0x8)
    TArray<class UArmoryItem_C*> armoryItemWidgets;                                   // 0x0330 (size: 0x10)

    void spawnArmoryItemWidget(const FGood& Good);
    void updateSlots();
    bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);
}; // Size: 0x340

#endif
