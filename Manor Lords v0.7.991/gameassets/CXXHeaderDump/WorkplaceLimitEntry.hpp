#ifndef UE4SS_SDK_WorkplaceLimitEntry_HPP
#define UE4SS_SDK_WorkplaceLimitEntry_HPP

class UWorkplaceLimitEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Add;                                                               // 0x02E8 (size: 0x8)
    class UCheckBox* CheckBox_392;                                                    // 0x02F0 (size: 0x8)
    class UEditableTextBox* EditableTextBox_limit_value;                              // 0x02F8 (size: 0x8)
    class UHorizontalBox* HorizontalBox_111;                                          // 0x0300 (size: 0x8)
    class UHorizontalBox* HorizontalBox_tradeTarget;                                  // 0x0308 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0310 (size: 0x8)
    class UImage* Image_10;                                                           // 0x0318 (size: 0x8)
    class UImage* Image_22;                                                           // 0x0320 (size: 0x8)
    class UButton* Remove;                                                            // 0x0328 (size: 0x8)
    class UHorizontalBox* target_inv_hb;                                              // 0x0330 (size: 0x8)
    class UTextBlock* TextBlock_28;                                                   // 0x0338 (size: 0x8)
    bool isProductionLimit;                                                           // 0x0340 (size: 0x1)
    int32 goodType;                                                                   // 0x0344 (size: 0x4)
    class ARegion* Region;                                                            // 0x0348 (size: 0x8)
    int32 currentlyProducedGoodType;                                                  // 0x0350 (size: 0x4)

    void changeLimitBy(int32 change);
    void updateEntry(class ASMBuildingMaster* building, int32 producedGoodType);
    void BndEvt__WorkplaceLimitEntry_EditableTextBox_limit_value_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WorkplaceLimitEntry_add_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__WorkplaceLimitEntry_remove_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__WorkplaceLimitEntry_EditableTextBox_limit_value_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__WorkplaceLimitEntry_CheckBox_392_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void Construct();
    void ExecuteUbergraph_WorkplaceLimitEntry(int32 EntryPoint);
}; // Size: 0x354

#endif
