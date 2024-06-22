#ifndef UE4SS_SDK_AutoSettings_HPP
#define UE4SS_SDK_AutoSettings_HPP

struct FAutoSettingData
{
    FName Key;                                                                        // 0x0000 (size: 0x8)
    FString Value;                                                                    // 0x0008 (size: 0x10)
    FGameplayTagContainer Tags;                                                       // 0x0018 (size: 0x20)

}; // Size: 0x38

struct FSettingOption
{
    FText Label;                                                                      // 0x0000 (size: 0x18)
    FString Value;                                                                    // 0x0018 (size: 0x10)

}; // Size: 0x28

class UAutoSettingWidget : public UUserWidget
{
    FName CVarName;                                                                   // 0x0260 (size: 0x8)
    TSubclassOf<class USettingValueMask> ValueMask;                                   // 0x0268 (size: 0x8)
    bool bAutoSave;                                                                   // 0x0270 (size: 0x1)
    bool bAutoApply;                                                                  // 0x0271 (size: 0x1)
    FGameplayTagContainer SettingTags;                                                // 0x0278 (size: 0x20)
    FString CurrentValue;                                                             // 0x0298 (size: 0x10)
    bool bHasUnappliedChange;                                                         // 0x02A8 (size: 0x1)
    bool bHasUnsavedChange;                                                           // 0x02A9 (size: 0x1)
    bool bUpdatingSettingSelection;                                                   // 0x02AA (size: 0x1)

    void UpdateSelection(FString Value);
    void Save();
    bool HasUnsavedChange();
    bool HasUnappliedChange();
    void Cancel();
    void ApplySettingValue(FString Value, bool bSaveIfPossible);
    void Apply();
}; // Size: 0x2B0

class UAutoSettingsConfig : public UDeveloperSettings
{
    FString SettingsIniName;                                                          // 0x0038 (size: 0x10)
    FString SettingsSectionName;                                                      // 0x0048 (size: 0x10)

}; // Size: 0x58

class UCVarChangeListener : public UObject
{
}; // Size: 0x80

class UCVarChangeListenerManager : public UObject
{
    TMap<class FName, class UCVarChangeListener*> Listeners;                          // 0x0028 (size: 0x50)

    void AddStringCVarCallbackStatic(FName Name, FAddStringCVarCallbackStaticChangedCallback ChangedCallback, bool CallbackImmediately);
    void AddIntCVarCallbackStatic(FName Name, FAddIntCVarCallbackStaticChangedCallback ChangedCallback, bool CallbackImmediately);
    void AddFloatCVarCallbackStatic(FName Name, FAddFloatCVarCallbackStaticChangedCallback ChangedCallback, bool CallbackImmediately);
    void AddBoolCVarCallbackStatic(FName Name, FAddBoolCVarCallbackStaticChangedCallback ChangedCallback, bool CallbackImmediately);
}; // Size: 0x78

class UCheckBoxSetting : public UToggleSetting
{
    class UCheckBox* CheckBox;                                                        // 0x02B0 (size: 0x8)

    void CheckBoxStateChanged(bool IsChecked);
}; // Size: 0x2B8

class UComboBoxSetting : public USelectSetting
{
    class UComboBoxString* ComboBox;                                                  // 0x02D0 (size: 0x8)

    void ComboBoxSelectionChanged(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
}; // Size: 0x2D8

class UConsoleUtils : public UBlueprintFunctionLibrary
{

    void SetStringCVar(FName Name, FString Value);
    void SetIntCVar(FName Name, int32 Value);
    void SetFloatCVar(FName Name, float Value);
    void SetBoolCVar(FName Name, bool Value);
    bool IsCVarRegistered(FName Name);
    FString GetStringCVar(FName Name);
    int32 GetIntCVar(FName Name);
    float GetFloatCVar(FName Name);
    bool GetBoolCVar(FName Name);
}; // Size: 0x28

class UNativeSliderSetting : public USliderSetting
{
    class USlider* Slider;                                                            // 0x02B8 (size: 0x8)
    bool bMouseCaptureInProgress;                                                     // 0x02C0 (size: 0x1)

    void SliderValueChanged(float NewValue);
    void SliderMouseCaptureEnd();
    void SliderMouseCaptureBegin();
}; // Size: 0x2C8

class URadioButton : public UUserWidget
{
    FRadioButtonOnSelected OnSelected;                                                // 0x0260 (size: 0x10)
    void RadioSelectedSignature(FString Value);
    FText Label;                                                                      // 0x0270 (size: 0x18)
    FString Value;                                                                    // 0x0288 (size: 0x10)
    bool Selected;                                                                    // 0x0298 (size: 0x1)

    void UpdateSelected(bool InSelected);
    void UpdateLabel(const FText& InLabel);
    void TriggerSelection();
    void SetValue(FString InValue);
    void SetSelected(bool InSelected);
    void SetLabel(FText InLabel);
    FString GetValue();
    bool GetSelected();
    FText GetLabel();
}; // Size: 0x2A0

class URadioSelect : public UUserWidget
{
    TArray<FSettingOption> options;                                                   // 0x0260 (size: 0x10)
    TSubclassOf<class URadioButton> RadioButtonClass;                                 // 0x0270 (size: 0x8)
    FRadioSelectSelectionChangedEvent SelectionChangedEvent;                          // 0x0278 (size: 0x10)
    void RadioSelectedSignature(FString Value);
    class UPanelWidget* ButtonContainer;                                              // 0x0288 (size: 0x8)
    TArray<class URadioButton*> RadioButtons;                                         // 0x0290 (size: 0x10)

    void SetOptions(TArray<FSettingOption> InOptions);
    void Select(FString Value);
    void OnButtonCreated(class URadioButton* Button, class UPanelSlot* NewSlot);
    TArray<class URadioButton*> GetRadioButtonWidgets();
    TArray<FSettingOption> GetOptions();
    void ButtonSelected(FString Value);
}; // Size: 0x2A0

class URadioSelectSetting : public USelectSetting
{
    TSubclassOf<class URadioButton> RadioButtonClass;                                 // 0x02D0 (size: 0x8)
    class URadioSelect* RadioSelect;                                                  // 0x02D8 (size: 0x8)

    void RadioSelectionChanged(FString Value);
}; // Size: 0x2E0

class UResolutionOptionFactory : public USettingOptionFactory
{
}; // Size: 0x28

class UResolutionStringUtils : public UBlueprintFunctionLibrary
{
}; // Size: 0x28

class UResolutionValueMask : public USettingValueMask
{
}; // Size: 0x28

class USelectSetting : public UAutoSettingWidget
{
    TArray<FSettingOption> options;                                                   // 0x02B0 (size: 0x10)
    TSubclassOf<class USettingOptionFactory> OptionFactory;                           // 0x02C0 (size: 0x8)
    bool bUpdatingSettingOptions;                                                     // 0x02C8 (size: 0x1)

    void UpdateOptions(const TArray<FSettingOption>& InOptions);
    void RegenerateOptions();
}; // Size: 0x2D0

class USettingContainerUtils : public UBlueprintFunctionLibrary
{

    void SaveChildSettings(class UUserWidget* UserWidget, class UWidget* Parent);
    TArray<class UAutoSettingWidget*> GetChildSettings(class UUserWidget* UserWidget, class UWidget* Parent);
    bool DoesAnyChildSettingHaveUnsavedChange(class UUserWidget* UserWidget, class UWidget* Parent);
    bool DoesAnyChildSettingHaveUnappliedChange(class UUserWidget* UserWidget, class UWidget* Parent);
    void CancelChildSettings(class UUserWidget* UserWidget, class UWidget* Parent);
    void ApplyChildSettings(class UUserWidget* UserWidget, class UWidget* Parent);
}; // Size: 0x28

class USettingOptionFactory : public UObject
{

    TArray<FSettingOption> ConstructOptions();
}; // Size: 0x28

class USettingValueMask : public UObject
{

    FString RecombineValues(FString SettingValue, FString ConsoleValue);
    FString MaskValue(FString ConsoleValue);
}; // Size: 0x28

class USettingsManager : public UEngineSubsystem
{
    FSettingsManagerOnSettingSaved OnSettingSaved;                                    // 0x0030 (size: 0x10)
    void OnSettingSaved(FAutoSettingData SettingData);
    FString IniFilename;                                                              // 0x0040 (size: 0x10)

    void SaveSettingStatic(FAutoSettingData SettingData);
    void RegisterStringCVarSettingWithCallback(FName Name, FString DefaultValue, FString Help, FRegisterStringCVarSettingWithCallbackChangedCallback ChangedCallback, bool CallbackImmediately);
    void RegisterStringCVarSetting(FName Name, FString DefaultValue, FString Help);
    void RegisterIntCVarSettingWithCallback(FName Name, int32 DefaultValue, FString Help, FRegisterIntCVarSettingWithCallbackChangedCallback ChangedCallback, bool CallbackImmediately);
    void RegisterIntCVarSetting(FName Name, int32 DefaultValue, FString Help);
    void RegisterFloatCVarSettingWithCallback(FName Name, float DefaultValue, FString Help, FRegisterFloatCVarSettingWithCallbackChangedCallback ChangedCallback, bool CallbackImmediately);
    void RegisterFloatCVarSetting(FName Name, float DefaultValue, FString Help);
    void RegisterBoolCVarSettingWithCallback(FName Name, bool DefaultValue, FString Help, FRegisterBoolCVarSettingWithCallbackChangedCallback ChangedCallback, bool CallbackImmediately);
    void RegisterBoolCVarSetting(FName Name, bool DefaultValue, FString Help);
    FString GetValue(FName Key, bool bPreferConfigValue);
    void AutoDetectSettingsStatic(int32 WorkScale, float CPUMultiplier, float GPUMultiplier);
    void ApplySettingStatic(FAutoSettingData SettingData);
}; // Size: 0x50

class USliderSetting : public UAutoSettingWidget
{
    float LeftValue;                                                                  // 0x02B0 (size: 0x4)
    float RightValue;                                                                 // 0x02B4 (size: 0x4)

    void UpdateSliderValue(float NormalizedValue, float RawValue);
    void SliderValueUpdated(float NormalizedValue);
    bool ShouldSaveCurrentValue();
    float RawValueToNormalized(float RawValue);
    void OnSliderValueUpdated(float NormalizedValue, float RawValue);
    float NormalizedValueToRaw(float NormalizedValue);
    float ClampRawValue(float RawValue);
}; // Size: 0x2B8

class USpinner : public UUserWidget
{
    TArray<FSettingOption> options;                                                   // 0x0260 (size: 0x10)
    bool bAllowWrapping;                                                              // 0x0270 (size: 0x1)
    FSpinnerSelectionChangedEvent SelectionChangedEvent;                              // 0x0278 (size: 0x10)
    void SpinnerSelectionChanged(FString Value);

    void SelectValue(FString Value);
    void SelectIndex(int32 Index);
    void Previous();
    void OnSelectionChanged(FSettingOption SelectedOption);
    void Next();
    bool HasValidPrevious();
    bool HasValidNext();
    FSettingOption GetCurrentOption();
    int32 GetCurrentIndex();
}; // Size: 0x290

class USpinnerSetting : public USelectSetting
{
    class USpinner* Spinner;                                                          // 0x02D0 (size: 0x8)

    void SpinnerSelectionChanged(FString Value);
}; // Size: 0x2D8

class UToggleSetting : public UAutoSettingWidget
{

    void UpdateToggleState(bool State);
    void ToggleStateUpdated(bool State);
}; // Size: 0x2B0

class UWindowModeValueMask : public USettingValueMask
{
}; // Size: 0x28

#endif
