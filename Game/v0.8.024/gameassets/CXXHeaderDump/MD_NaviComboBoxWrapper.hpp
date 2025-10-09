#ifndef UE4SS_SDK_MD_NaviComboBoxWrapper_HPP
#define UE4SS_SDK_MD_NaviComboBoxWrapper_HPP

class UMD_NaviComboBoxWrapper_C : public UNaviUi
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UNamedSlot* ComboBoxSlot;                                                   // 0x0350 (size: 0x8)
    class UMD_NaviAutoFocusHighlight_C* MD_NaviAutoFocusHighlight;                    // 0x0358 (size: 0x8)
    class UComboBoxString* ActiveComboBox;                                            // 0x0360 (size: 0x8)

    void CleanupCombobox();
    void OnComboboxSelectionFinished(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void SetupAndFocusCombobox(class UComboBoxString* ComboBox);
    ENaviHandleMethod HandleInput(ENaviUiIntent Key);
    bool WantsAllInput();
    void Construct();
    void OnComboOpened();
    void ExecuteUbergraph_MD_NaviComboBoxWrapper(int32 EntryPoint);
}; // Size: 0x368

#endif
