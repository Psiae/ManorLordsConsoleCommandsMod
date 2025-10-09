#ifndef UE4SS_SDK_BP_MLGameInstance_HPP
#define UE4SS_SDK_BP_MLGameInstance_HPP

class UBP_MLGameInstance_C : public UMLGameInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    TArray<FName> nobleLastNames;                                                     // 0x0480 (size: 0x10)
    EGameDifficulty mainMenu_SelectedDifficulty;                                      // 0x0490 (size: 0x1)
    bool introMsgShown;                                                               // 0x0491 (size: 0x1)
    FString CurrentAppliedAaAlgo;                                                     // 0x0498 (size: 0x10)

    FString Determine Default Aa();
    void enabeUpscaler(bool DLSS, bool fsr, bool XeSS);
    void disableCurrentUpscalerIfUsingOne();
    void getSavedAutoSettingBoolValue(const FName& SettingName, bool& OutValue);
    void setDayNightCycleLightSetting(bool NewValue);
    void GIVariableUpdate_edgeScrolling(bool NewValue);
    void GIVariableUpdate_grasDensity(float NewValue);
    void udpateMousLock(int32 NewValue);
    void CustomEvent_0(float NewValue);
    void toggleVolumetricClouds(bool NewValue);
    void updateAutosaveTimer(float NewValue);
    void tuts(bool NewValue);
    void zoomToCursorChanged(float NewValue);
    void updateUIScale(float NewValue);
    void ReceiveInit();
    void updateLightDrawDistanceBasedOnFakeGISetting(int32 NewValue);
    void changeMainAAMode(FString NewValue);
    void ExecuteUbergraph_BP_MLGameInstance(int32 EntryPoint);
}; // Size: 0x4A8

#endif
