#ifndef UE4SS_SDK_packTrainPlanner_connection_HPP
#define UE4SS_SDK_packTrainPlanner_connection_HPP

class UpackTrainPlanner_connection_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* barter_value_txt;                                               // 0x0268 (size: 0x8)
    class UButton* Button;                                                            // 0x0270 (size: 0x8)
    class UButton* Button_1;                                                          // 0x0278 (size: 0x8)
    class UButton* Button_2;                                                          // 0x0280 (size: 0x8)
    class UButton* Button_121;                                                        // 0x0288 (size: 0x8)
    class UComboBoxString* ComboBox_buying;                                           // 0x0290 (size: 0x8)
    class UComboBoxString* ComboBox_selling;                                          // 0x0298 (size: 0x8)
    class UImage* Image;                                                              // 0x02A0 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02A8 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02B0 (size: 0x8)
    class UImage* Image_4;                                                            // 0x02B8 (size: 0x8)
    class UImage* Image_34;                                                           // 0x02C0 (size: 0x8)
    class UTextBlock* source_txt;                                                     // 0x02C8 (size: 0x8)
    class UTextBlock* target_txt;                                                     // 0x02D0 (size: 0x8)
    class UVerticalBox* transportlist_vb_1;                                           // 0x02D8 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x02E0 (size: 0x8)

    void updateSourceAndTargetBuildingNameDisplay();
    void updateBarterValue();
    void populateComboboxWithTransportableGoodTypes(class UComboBoxString* self2);
    class UWidget* generateSimpleGoodEntryForCombobox(FString Item);
    void Construct();
    void BndEvt__packTrainPlanner_ComboBoxString_29_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__packTrainPlanner_ComboBoxString_1_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__packTrainPlanner_Button_121_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__packTrainPlanner_Button_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__packTrainPlanner_Button_1_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__packTrainPlanner_Button_2_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_packTrainPlanner_connection(int32 EntryPoint);
}; // Size: 0x2E8

#endif
