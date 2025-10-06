#ifndef UE4SS_SDK_mainMenu_GameSetupPresetButton_HPP
#define UE4SS_SDK_mainMenu_GameSetupPresetButton_HPP

class UmainMenu_GameSetupPresetButton_C : public UNaviUi
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UMD_NaviAutoFocusHighlight_C* MD_NaviAutoFocusHighlight;                    // 0x0348 (size: 0x8)
    class UButton* modeButton;                                                        // 0x0350 (size: 0x8)
    class UImage* selectedHighlight;                                                  // 0x0358 (size: 0x8)
    class UImage* Thumbnail;                                                          // 0x0360 (size: 0x8)
    FGameSetupPreset setupPreset;                                                     // 0x0368 (size: 0x130)
    FmainMenu_GameSetupPresetButton_CGamePresetSelected gamePresetSelected;           // 0x0498 (size: 0x10)
    void gamePresetSelected(bool reselectDifficulty);
    FmainMenu_GameSetupPresetButton_CChangeDifficulty changeDifficulty;               // 0x04A8 (size: 0x10)
    void changeDifficulty(EGameDifficulty newDifficulty);
    FName presetRowName;                                                              // 0x04B8 (size: 0x8)

    ENaviHandleMethod HandleInput(ENaviUiIntent Key);
    void BndEvt__mainMenu_GameSetupPresetButton_modeButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnActivation();
    void ExecuteUbergraph_mainMenu_GameSetupPresetButton(int32 EntryPoint);
    void changeDifficulty__DelegateSignature(EGameDifficulty newDifficulty);
    void gamePresetSelected__DelegateSignature(bool reselectDifficulty);
}; // Size: 0x4C0

#endif
