#ifndef UE4SS_SDK_BP_MLGameInstance_HPP
#define UE4SS_SDK_BP_MLGameInstance_HPP

class UBP_MLGameInstance_C : public UMLGameInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04A8 (size: 0x8)
    TArray<FName> nobleLastNames;                                                     // 0x04B0 (size: 0x10)
    EGameDifficulty mainMenu_SelectedDifficulty;                                      // 0x04C0 (size: 0x1)
    bool introMsgShown;                                                               // 0x04C1 (size: 0x1)
    FString CurrentAppliedAaAlgo;                                                     // 0x04C8 (size: 0x10)
    bool DlssUseAuto;                                                                 // 0x04D8 (size: 0x1)
    int32 DlssQualityMode;                                                            // 0x04DC (size: 0x4)

    bool isAnyUpscalerActive();
    void setScreenPercentageBasedOnAA(int32 MLPercentageSetting);
    void UpdateMouseFocusAndLock();
    void ActivateDlssWithSettings();
    FString Determine Default Aa();
    void disableCurrentUpscalerIfUsingOne(bool fixScreenPercentage);
    void getSavedAutoSettingBoolValue(const FName& SettingName, bool& OutValue);
    void setDayNightCycleLightSetting(bool NewValue);
    void callback_GrassRenderingDistance(float NewValue);
    void callback_edgeScrolling(bool NewValue);
    void callback_tuts(bool NewValue);
    void callback_zoomToCursorChanged(float NewValue);
    void callback_MouseLock(int32 NewValue);
    void callback_AutosaveTimer(float NewValue);
    void callback_LightDrawDistanceBasedOnFakeGISetting(int32 NewValue);
    void changeMainAAMode(FString NewValue);
    void callbacke_grasDensity(float NewValue);
    void callback_UIScale(float NewValue);
    void OnDlssAutoChange(bool NewValue);
    void OnDlssQualityChange(int32 NewValue);
    void ReceiveInit();
    void callback_EnemyNoticeBehaviour(int32 NewValue);
    void callback_ResourceIconSettings(bool NewValue);
    void callback_MLScreenPercentage(int32 NewValue);
    void callback_upscalerQuality(int32 NewValue);
    void changeVolumetricCloudsSetting(bool NewValue);
    void ExecuteUbergraph_BP_MLGameInstance(int32 EntryPoint);
}; // Size: 0x4E0

#endif
