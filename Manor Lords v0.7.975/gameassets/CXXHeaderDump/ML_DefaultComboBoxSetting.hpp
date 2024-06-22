#ifndef UE4SS_SDK_ML_DefaultComboBoxSetting_HPP
#define UE4SS_SDK_ML_DefaultComboBoxSetting_HPP

class UML_DefaultComboBoxSetting_C : public UComboBoxSetting
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D8 (size: 0x8)
    FML_DefaultComboBoxSetting_COnOpen onOpen;                                        // 0x02E0 (size: 0x10)
    void onOpen();
    FML_DefaultComboBoxSetting_COnSelectionChanged OnSelectionChanged;                // 0x02F0 (size: 0x10)
    void onSelectionChanged(FString Item, TEnumAsByte<ESelectInfo::Type> Type);
    TArray<FSettingOption> optionsCache;                                              // 0x0300 (size: 0x10)
    TArray<FIntPoint> supportedResolutions;                                           // 0x0310 (size: 0x10)
    FString selectedoptioncache;                                                      // 0x0320 (size: 0x10)
    TArray<FString> currentoptionscache;                                              // 0x0330 (size: 0x10)
    TArray<FIntPoint> commonResolutions;                                              // 0x0340 (size: 0x10)
    FString NewVar_0;                                                                 // 0x0350 (size: 0x10)

    class UWidget* On_ComboBox_GenerateWidget_0_USED_FOR_CUSTOM_WINDOWED_DEPRECATED(FString Item);
    void cacheCurrentOptions();
    void BndEvt__ML_DefaultComboBoxSetting_ComboBox_K2Node_ComponentBoundEvent_0_OnOpeningEvent__DelegateSignature();
    void BndEvt__ML_DefaultComboBoxSetting_ComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void ExecuteUbergraph_ML_DefaultComboBoxSetting(int32 EntryPoint);
    void onSelectionChanged__DelegateSignature(FString Item, TEnumAsByte<ESelectInfo::Type> Type);
    void onOpen__DelegateSignature();
}; // Size: 0x360

#endif
