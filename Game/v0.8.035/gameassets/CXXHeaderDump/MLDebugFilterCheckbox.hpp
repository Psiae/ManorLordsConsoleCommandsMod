#ifndef UE4SS_SDK_MLDebugFilterCheckbox_HPP
#define UE4SS_SDK_MLDebugFilterCheckbox_HPP

class UMLDebugFilterCheckbox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UCheckBox* CheckBox_56;                                                     // 0x02D8 (size: 0x8)
    class UTextBlock* TextBlock_66;                                                   // 0x02E0 (size: 0x8)
    FName FilterName;                                                                 // 0x02E8 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void BndEvt__MLDebugFilterCheckbox_CheckBox_56_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void ExecuteUbergraph_MLDebugFilterCheckbox(int32 EntryPoint);
}; // Size: 0x2F0

#endif
