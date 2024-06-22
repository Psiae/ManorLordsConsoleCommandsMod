#ifndef UE4SS_SDK_unitEditor_HPP
#define UE4SS_SDK_unitEditor_HPP

class UunitEditor_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* NewAnimation_1;                                           // 0x0268 (size: 0x8)
    class UUniformGridPanel* armory_grid;                                             // 0x0270 (size: 0x8)
    class UImage* blackShadow;                                                        // 0x0278 (size: 0x8)
    class UButton* Button;                                                            // 0x0280 (size: 0x8)
    class UButton* Button_0;                                                          // 0x0288 (size: 0x8)
    class UButton* Button_1;                                                          // 0x0290 (size: 0x8)
    class UButton* Button_134;                                                        // 0x0298 (size: 0x8)
    class UComboBoxString* ComboBoxString_128;                                        // 0x02A0 (size: 0x8)
    class UComboBoxString* ComboBoxString_297;                                        // 0x02A8 (size: 0x8)
    class UComboBoxString* ComboBoxString_298;                                        // 0x02B0 (size: 0x8)
    class UImage* darkGrad;                                                           // 0x02B8 (size: 0x8)
    class UEditableText* EditableText_182;                                            // 0x02C0 (size: 0x8)
    class UImage* Image_104;                                                          // 0x02C8 (size: 0x8)
    class UImage* Image_310;                                                          // 0x02D0 (size: 0x8)
    class UImage* Image_361;                                                          // 0x02D8 (size: 0x8)
    class UImage* Image_384;                                                          // 0x02E0 (size: 0x8)
    class UImage* Image_506;                                                          // 0x02E8 (size: 0x8)
    class UImage* Image_507;                                                          // 0x02F0 (size: 0x8)
    class UImage* Image_545;                                                          // 0x02F8 (size: 0x8)
    class UTextBlock* maxSize_txt;                                                    // 0x0300 (size: 0x8)
    class UButton* recruit_button;                                                    // 0x0308 (size: 0x8)
    class UTextBlock* recruit_txt;                                                    // 0x0310 (size: 0x8)
    class URegionDropdown_C* RegionDropdown;                                          // 0x0318 (size: 0x8)
    class UTextBlock* regionName;                                                     // 0x0320 (size: 0x8)
    class USlider* size_slider;                                                       // 0x0328 (size: 0x8)
    class UTextBlock* size_txt;                                                       // 0x0330 (size: 0x8)
    class UImage* soft_shadow;                                                        // 0x0338 (size: 0x8)
    class UImage* spacer_eq;                                                          // 0x0340 (size: 0x8)
    class UTextBlock* TextBlock_175;                                                  // 0x0348 (size: 0x8)
    class UunitView_C* unitView;                                                      // 0x0350 (size: 0x8)
    int32 Size;                                                                       // 0x0358 (size: 0x4)
    int32 maxSize;                                                                    // 0x035C (size: 0x4)
    class UMainUICPP_C* mainUIRef;                                                    // 0x0360 (size: 0x8)
    int32 squadID;                                                                    // 0x0368 (size: 0x4)
    class ARegion* selectedRegion;                                                    // 0x0370 (size: 0x8)
    FEquipment equippedOld;                                                           // 0x0378 (size: 0x1C)
    TArray<class UArmoryItem_C*> armoryWidgets;                                       // 0x0398 (size: 0x10)
    int32 maxColumns;                                                                 // 0x03A8 (size: 0x4)
    FSquadEquipment Equipment;                                                        // 0x03B0 (size: 0x90)

    bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    void checkArmory(FGood Good, bool& hasEnough);
    void equipIfPossible(FSquadEquipment Equipment);
    void unequipAll();
    void reequip();
    void equipItem(FGood Good);
    void unequipSlot(TEnumAsByte<EquipmentSlot::Type> Slot);
    void minusTempEquipment(FGood Good, FGood& finalGood);
    void updateArmory();
    void closeAndUpdateMainUIArmy();
    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void Open();
    void BndEvt__Slider_109_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void updateSize();
    void BndEvt__recruit_button_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_unitEditor(int32 EntryPoint);
}; // Size: 0x440

#endif
