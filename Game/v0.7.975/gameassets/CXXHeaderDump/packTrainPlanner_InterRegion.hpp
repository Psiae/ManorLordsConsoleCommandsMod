#ifndef UE4SS_SDK_packTrainPlanner_InterRegion_HPP
#define UE4SS_SDK_packTrainPlanner_InterRegion_HPP

class UpackTrainPlanner_InterRegion_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* barter_value_txt;                                               // 0x0268 (size: 0x8)
    class UTextBlock* barter_warning;                                                 // 0x0270 (size: 0x8)
    class UComboBoxString* ComboBox_buying;                                           // 0x0278 (size: 0x8)
    class UComboBoxString* ComboBox_region;                                           // 0x0280 (size: 0x8)
    class UComboBoxString* ComboBox_selling;                                          // 0x0288 (size: 0x8)
    class UImage* Image;                                                              // 0x0290 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0298 (size: 0x8)
    class UImage* Image_34;                                                           // 0x02A0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x02A8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_1;                                    // 0x02B0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_128;                                  // 0x02B8 (size: 0x8)
    class UVerticalBox* transportlist_vb_1;                                           // 0x02C0 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x02C8 (size: 0x8)

    class UWidget* generateRegionEntryForCombobox(FString Item);
    void populatePotentialRegionPartners();
    void updateBarterValue();
    void populateComboboxWithTransportableGoodTypes(class UComboBoxString* self2);
    class UWidget* generateSimpleGoodEntryForCombobox(FString Item);
    void BndEvt__packTrainPlanner_ComboBoxString_29_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__packTrainPlanner_ComboBoxString_1_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void Construct();
    void BndEvt__packTrainPlanner_InterRegion_ComboBox_region_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void ExecuteUbergraph_packTrainPlanner_InterRegion(int32 EntryPoint);
}; // Size: 0x2D0

#endif
