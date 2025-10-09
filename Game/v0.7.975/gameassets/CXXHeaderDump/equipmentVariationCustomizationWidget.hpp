#ifndef UE4SS_SDK_equipmentVariationCustomizationWidget_HPP
#define UE4SS_SDK_equipmentVariationCustomizationWidget_HPP

class UequipmentVariationCustomizationWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UComboBoxString* ColorA_CB;                                                 // 0x0268 (size: 0x8)
    class UComboBoxString* colorB_CB;                                                 // 0x0270 (size: 0x8)
    class UComboBoxString* colorC_CB_1;                                               // 0x0278 (size: 0x8)
    class UHorizontalBox* colorChoices_HB;                                            // 0x0280 (size: 0x8)
    class UImage* Image;                                                              // 0x0288 (size: 0x8)
    class UImage* Image_68;                                                           // 0x0290 (size: 0x8)
    class UImage* Image_116;                                                          // 0x0298 (size: 0x8)
    class UImage* Image_185;                                                          // 0x02A0 (size: 0x8)
    class UHorizontalBox* meshVariation_HB;                                           // 0x02A8 (size: 0x8)
    class UButton* nextMeshVariationButton;                                           // 0x02B0 (size: 0x8)
    class UButton* prevMeshVariationButton;                                           // 0x02B8 (size: 0x8)
    class UTextBlock* TextBlock_53;                                                   // 0x02C0 (size: 0x8)
    EEquipmentSlot EquipmentSlot;                                                     // 0x02C8 (size: 0x1)
    class ASMUnit* retainer;                                                          // 0x02D0 (size: 0x8)
    FequipmentVariationCustomizationWidget_CAppearanceChanged appearanceChanged;      // 0x02D8 (size: 0x10)
    void appearanceChanged();
    FVector currentColorScheme;                                                       // 0x02E8 (size: 0xC)

    void playEquipmentChangeSfx();
    class UWidget* On_ColorA_CB_GenerateWidget_0(FString Item);
    void addColorChoicesToCombobox(class UComboBoxString* Target);
    void updateDisplayedValuesForRetainer();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__equipmentCustomization_nextMeshVariationButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__equipmentCustomization_prevMeshVariationButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__equipmentVariationCustomizationWidget_ColorA_CB_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__equipmentVariationCustomizationWidget_colorB_CB_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__equipmentVariationCustomizationWidget_colorC_CB_1_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void ExecuteUbergraph_equipmentVariationCustomizationWidget(int32 EntryPoint);
    void appearanceChanged__DelegateSignature();
}; // Size: 0x2F4

#endif
