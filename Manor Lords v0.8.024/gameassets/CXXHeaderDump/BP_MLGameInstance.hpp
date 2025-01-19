#ifndef UE4SS_SDK_BP_MLGameInstance_HPP
#define UE4SS_SDK_BP_MLGameInstance_HPP

class UBP_MLGameInstance_C : public UMLGameInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04D8 (size: 0x8)
    TArray<FName> nobleLastNames;                                                     // 0x04E0 (size: 0x10)
    EGameDifficulty mainMenu_SelectedDifficulty;                                      // 0x04F0 (size: 0x1)
    bool introMsgShown;                                                               // 0x04F1 (size: 0x1)
    FString CurrentAppliedAaAlgo;                                                     // 0x04F8 (size: 0x10)
    bool DlssUseAuto;                                                                 // 0x0508 (size: 0x1)
    int32 DlssQualityMode;                                                            // 0x050C (size: 0x4)

    bool SetUseTutorialsOnPawn(bool newUseTutorials);
    bool SetAutosavePeriodOnPawn(float newAutosavePeriod);
    bool setDayNightCycleLightSetting(bool NewValue);
    bool UpdateMouseFocusAndLock();
    bool ReadSettingsFromDisk();
    bool WriteSettingsToDisk();
    bool isAnyUpscalerActive();
    void setScreenPercentageBasedOnAA(int32 MLPercentageSetting);
    void ActivateDlssWithSettings();
    FString Determine Default Aa();
    void disableCurrentUpscalerIfUsingOne(bool fixScreenPercentage);
    void getSavedAutoSettingBoolValue(const FName& SettingName, bool& OutValue);
    void changeMainAAMode(FString NewValue);
    void ReceiveInit();
    void callback_MLScreenPercentage(int32 NewValue);
    void callback_upscalerQuality(int32 NewValue);
    void ExecuteUbergraph_BP_MLGameInstance(int32 EntryPoint);
}; // Size: 0x510

#endif
