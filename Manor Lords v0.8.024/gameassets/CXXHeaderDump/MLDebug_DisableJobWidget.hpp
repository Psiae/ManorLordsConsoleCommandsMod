#ifndef UE4SS_SDK_MLDebug_DisableJobWidget_HPP
#define UE4SS_SDK_MLDebug_DisableJobWidget_HPP

class UMLDebug_DisableJobWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UCheckBox* CheckBox_56;                                                     // 0x02E8 (size: 0x8)
    class UTextBlock* TextBlock_66;                                                   // 0x02F0 (size: 0x8)
    int32 JobID;                                                                      // 0x02F8 (size: 0x4)

    void BndEvt__MLDebugFilterCheckbox_CheckBox_56_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_MLDebug_DisableJobWidget(int32 EntryPoint);
}; // Size: 0x2FC

#endif
