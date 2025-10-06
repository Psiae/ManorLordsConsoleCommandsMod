#ifndef UE4SS_SDK_BP_MLGameInstance_HPP
#define UE4SS_SDK_BP_MLGameInstance_HPP

class UBP_MLGameInstance_C : public UMLGameInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0630 (size: 0x8)
    TArray<FName> nobleLastNames;                                                     // 0x0638 (size: 0x10)
    EGameDifficulty mainMenu_SelectedDifficulty;                                      // 0x0648 (size: 0x1)
    bool introMsgShown;                                                               // 0x0649 (size: 0x1)
    FString CurrentAppliedAaAlgo;                                                     // 0x0650 (size: 0x10)
    bool DlssUseAuto;                                                                 // 0x0660 (size: 0x1)
    int32 DlssQualityMode;                                                            // 0x0664 (size: 0x4)
    bool IsUpscalerCvarHookingEnabled;                                                // 0x0668 (size: 0x1)

    void Hook_ScreenPercentage(int32 MLPercentageSetting);
    void Hook_Generic_Framegen(EPixelFedBackendId backend, FString frameGenValue);
    void Hook_Generic_Quality(EPixelFedBackendId backend, FString qualityValue);
    void Hook_XeSS_Framegen(FString NewValue);
    void Hook_XeSS_Quality(FString NewValue);
    void Hook_FSR_Framegen(FString NewValue);
    void Hook_FSR_Quality(FString NewValue);
    void Hook_DLSS_Framegen(FString NewValue);
    void Hook_DLSS_Quality(FString NewValue);
    void RegisterCVarWithForcedValue(FName CVarName, FString ForcedValue, FRegisterCVarWithForcedValueChangedCallback ChangedCallback);
    void RegisterCVarsForBackend(FName QualityCvarName, FRegisterCVarsForBackendQualityChangedCallback QualityChangedCallback, FName FrameGenCvarName, FRegisterCVarsForBackendFrameGenChangedCallback FrameGenChangedCallback, const FPixelFedBackend& PixelFedBackend);
    void RegisterUpscalerCVars();
    void ConsiderScreenPercentageOveride(EPixelFedBackendId AaBackendId);
    bool SetUseVolumetricCloudsOnPawn(bool newUseVolClouds);
    bool SetUseTutorialsOnPawn(bool newUseTutorials);
    bool SetAutosavePeriodOnPawn(float newAutosavePeriod);
    bool setDayNightCycleLightSetting(bool NewValue);
    bool UpdateMouseFocusAndLock();
    bool ReadSettingsFromDisk();
    bool WriteSettingsToDisk();
    void getSavedAutoSettingBoolValue(const FName& SettingName, bool& OutValue);
    void changeMainAAMode(FString NewValue);
    void ReceiveInit();
    void ExecuteUbergraph_BP_MLGameInstance(int32 EntryPoint);
}; // Size: 0x669

#endif
