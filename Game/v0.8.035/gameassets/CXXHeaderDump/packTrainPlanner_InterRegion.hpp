#ifndef UE4SS_SDK_packTrainPlanner_InterRegion_HPP
#define UE4SS_SDK_packTrainPlanner_InterRegion_HPP

class UpackTrainPlanner_InterRegion_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UTextBlock* barter_value_txt;                                               // 0x0350 (size: 0x8)
    class UTextBlock* barter_warning;                                                 // 0x0358 (size: 0x8)
    class UOverlay* BarterValueParent;                                                // 0x0360 (size: 0x8)
    class UComboBoxString* ComboBox_buying;                                           // 0x0368 (size: 0x8)
    class UComboBoxString* ComboBox_region;                                           // 0x0370 (size: 0x8)
    class UComboBoxString* ComboBox_selling;                                          // 0x0378 (size: 0x8)
    class UImage* Image;                                                              // 0x0380 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0388 (size: 0x8)
    class UImage* Image_34;                                                           // 0x0390 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x0398 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_1;                                    // 0x03A0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_128;                                  // 0x03A8 (size: 0x8)
    class UMD_NaviComboBoxWrapper_C* navi_ComboBuying;                                // 0x03B0 (size: 0x8)
    class UMD_NaviComboBoxWrapper_C* navi_ComboSelling;                               // 0x03B8 (size: 0x8)
    class UMD_NaviComboBoxWrapper_C* navi_RegionId;                                   // 0x03C0 (size: 0x8)
    class UMD_NaviAutoTooltip_C* navi_ValueTooltip;                                   // 0x03C8 (size: 0x8)
    class UVerticalBox* transportlist_vb_1;                                           // 0x03D0 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x03D8 (size: 0x8)

    FNaviSubGridLayout ComputeSubGridLayout();
    class UWidget* generateRegionEntryForCombobox(FString Item);
    void populatePotentialRegionPartners();
    void updateBarterValue();
    void populateComboboxWithTransportableGoodTypes(class UComboBoxString* self2);
    class UWidget* generateSimpleGoodEntryForCombobox(FString Item);
    void BndEvt__packTrainPlanner_ComboBoxString_29_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__packTrainPlanner_ComboBoxString_1_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__packTrainPlanner_InterRegion_ComboBox_region_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void Construct();
    void BndEvt__packTrainPlanner_InterRegion_navi_Receive_K2Node_ComponentBoundEvent_3_OnComboFinish__DelegateSignature();
    void BndEvt__packTrainPlanner_InterRegion_navi_ComboSelling_K2Node_ComponentBoundEvent_4_OnComboFinish__DelegateSignature();
    void BndEvt__packTrainPlanner_InterRegion_navi_RegionId_K2Node_ComponentBoundEvent_5_OnComboFinish__DelegateSignature();
    void ExecuteUbergraph_packTrainPlanner_InterRegion(int32 EntryPoint);
}; // Size: 0x3E0

#endif
