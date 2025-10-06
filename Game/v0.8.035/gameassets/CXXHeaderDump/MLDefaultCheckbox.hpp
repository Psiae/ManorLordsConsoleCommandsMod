#ifndef UE4SS_SDK_MLDefaultCheckbox_HPP
#define UE4SS_SDK_MLDefaultCheckbox_HPP

class UMLDefaultCheckbox_C : public UNaviUi
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UCheckBox* CheckmarkControl;                                                // 0x0348 (size: 0x8)
    class UMD_NaviAutoFocusHighlight_C* MD_NaviAutoFocusHighlight;                    // 0x0350 (size: 0x8)
    class UNamedSlot* RightNamedSlot;                                                 // 0x0358 (size: 0x8)
    ECheckBoxState DefaultCheckedState;                                               // 0x0360 (size: 0x1)
    FMLDefaultCheckbox_COnValueChange OnValueChange;                                  // 0x0368 (size: 0x10)
    void OnValueChange(bool IsChecked);
    bool allowTriggeringCallback;                                                     // 0x0378 (size: 0x1)
    int32 SizeOfCheckbox;                                                             // 0x037C (size: 0x4)
    bool InInit;                                                                      // 0x0380 (size: 0x1)
    bool HasExternalValue;                                                            // 0x0381 (size: 0x1)

    void SetIsChecked(bool IsChecked, bool AllowTriggeringChangeCallback);
    void ApplySizeToSlateImage(FSlateBrush SlateImate, int32 Size, FSlateBrush& OutputPin);
    void SetCheckboxSize(int32 NewSize);
    void IsChecked(bool& IsChecked);
    void GetValue(bool& IsChecked);
    void ToggleCheckedStateWithCallback();
    ENaviHandleMethod HandleInput(ENaviUiIntent Key);
    void ExternalSetValue(bool IsTrue, bool AllowTriggeringChangeCallback);
    void BndEvt__MLDefaultCheckbox_CheckmarkControl_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_MLDefaultCheckbox(int32 EntryPoint);
    void OnValueChange__DelegateSignature(bool IsChecked);
}; // Size: 0x382

#endif
