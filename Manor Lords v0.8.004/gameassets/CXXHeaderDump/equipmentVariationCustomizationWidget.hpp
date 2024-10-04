#ifndef UE4SS_SDK_equipmentVariationCustomizationWidget_HPP
#define UE4SS_SDK_equipmentVariationCustomizationWidget_HPP

class UequipmentVariationCustomizationWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UComboBoxString* ColorA_CB;                                                 // 0x02E8 (size: 0x8)
    class UComboBoxString* colorB_CB;                                                 // 0x02F0 (size: 0x8)
    class UComboBoxString* colorC_CB_1;                                               // 0x02F8 (size: 0x8)
    class UHorizontalBox* colorChoices_HB;                                            // 0x0300 (size: 0x8)
    class UImage* Image;                                                              // 0x0308 (size: 0x8)
    class UImage* Image_68;                                                           // 0x0310 (size: 0x8)
    class UImage* Image_116;                                                          // 0x0318 (size: 0x8)
    class UImage* Image_185;                                                          // 0x0320 (size: 0x8)
    class UHorizontalBox* meshVariation_HB;                                           // 0x0328 (size: 0x8)
    class UMD_NaviAutoButton_C* naviBtn_Next;                                         // 0x0330 (size: 0x8)
    class UMD_NaviAutoButton_C* naviBtn_Prior;                                        // 0x0338 (size: 0x8)
    class UButton* nextMeshVariationButton;                                           // 0x0340 (size: 0x8)
    class UButton* prevMeshVariationButton;                                           // 0x0348 (size: 0x8)
    class UTextBlock* TextBlock_53;                                                   // 0x0350 (size: 0x8)
    EEquipmentSlot EquipmentSlot;                                                     // 0x0358 (size: 0x1)
    class ASMUnit* retainer;                                                          // 0x0360 (size: 0x8)
    FequipmentVariationCustomizationWidget_CAppearanceChanged appearanceChanged;      // 0x0368 (size: 0x10)
    void appearanceChanged();
    FVector currentColorScheme;                                                       // 0x0378 (size: 0x18)

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
}; // Size: 0x390

#endif
