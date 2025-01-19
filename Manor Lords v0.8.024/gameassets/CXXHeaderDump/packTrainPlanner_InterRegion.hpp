#ifndef UE4SS_SDK_packTrainPlanner_InterRegion_HPP
#define UE4SS_SDK_packTrainPlanner_InterRegion_HPP

class UpackTrainPlanner_InterRegion_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* barter_value_txt;                                               // 0x02E8 (size: 0x8)
    class UTextBlock* barter_warning;                                                 // 0x02F0 (size: 0x8)
    class UComboBoxString* ComboBox_buying;                                           // 0x02F8 (size: 0x8)
    class UComboBoxString* ComboBox_region;                                           // 0x0300 (size: 0x8)
    class UComboBoxString* ComboBox_selling;                                          // 0x0308 (size: 0x8)
    class UImage* Image;                                                              // 0x0310 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0318 (size: 0x8)
    class UImage* Image_34;                                                           // 0x0320 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x0328 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_1;                                    // 0x0330 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_128;                                  // 0x0338 (size: 0x8)
    class UVerticalBox* transportlist_vb_1;                                           // 0x0340 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x0348 (size: 0x8)

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
}; // Size: 0x350

#endif
