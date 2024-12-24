#ifndef UE4SS_SDK_WorkplaceLimitEntry_HPP
#define UE4SS_SDK_WorkplaceLimitEntry_HPP

class UWorkplaceLimitEntry_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    class UButton* Add;                                                               // 0x0358 (size: 0x8)
    class UMLDefaultCheckbox_C* checkbox_EnableLimit;                                 // 0x0360 (size: 0x8)
    class UEditableTextBox* EditableTextBox_limit_value;                              // 0x0368 (size: 0x8)
    class UHorizontalBox* HorizontalBox_tradeTarget;                                  // 0x0370 (size: 0x8)
    class UImage* Image_22;                                                           // 0x0378 (size: 0x8)
    class UHorizontalBox* limitContentParent;                                         // 0x0380 (size: 0x8)
    class UMD_NaviAutoButton_C* naviBtn_Add;                                          // 0x0388 (size: 0x8)
    class UMD_NaviAutoButton_C* naviBtn_Minus;                                        // 0x0390 (size: 0x8)
    class UButton* Remove;                                                            // 0x0398 (size: 0x8)
    class UHorizontalBox* target_inv_hb;                                              // 0x03A0 (size: 0x8)
    class UTextBlock* TextBlock_28;                                                   // 0x03A8 (size: 0x8)
    bool isProductionLimit;                                                           // 0x03B0 (size: 0x1)
    int32 goodType;                                                                   // 0x03B4 (size: 0x4)
    class ARegion* Region;                                                            // 0x03B8 (size: 0x8)
    int32 currentlyProducedGoodType;                                                  // 0x03C0 (size: 0x4)

    FNaviSubGridLayout ComputeSubGridLayout();
    void changeLimitBy(int32 change);
    void updateEntry(class ASMBuildingMaster* building, int32 producedGoodType);
    void BndEvt__WorkplaceLimitEntry_EditableTextBox_limit_value_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WorkplaceLimitEntry_add_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__WorkplaceLimitEntry_remove_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__WorkplaceLimitEntry_EditableTextBox_limit_value_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void Construct();
    void BndEvt__WorkplaceLimitEntry_MLDefaultCheckbox_K2Node_ComponentBoundEvent_5_OnValueChange__DelegateSignature(bool IsChecked);
    void ExecuteUbergraph_WorkplaceLimitEntry(int32 EntryPoint);
}; // Size: 0x3C4

#endif
