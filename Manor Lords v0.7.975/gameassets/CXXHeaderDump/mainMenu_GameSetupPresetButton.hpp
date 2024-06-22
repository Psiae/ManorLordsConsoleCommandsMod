#ifndef UE4SS_SDK_mainMenu_GameSetupPresetButton_HPP
#define UE4SS_SDK_mainMenu_GameSetupPresetButton_HPP

class UmainMenu_GameSetupPresetButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* modeButton;                                                        // 0x0268 (size: 0x8)
    class UImage* selectedHighlight;                                                  // 0x0270 (size: 0x8)
    class UImage* thumbnail;                                                          // 0x0278 (size: 0x8)
    FGameSetupPreset setupPreset;                                                     // 0x0280 (size: 0xD0)
    FmainMenu_GameSetupPresetButton_CGamePresetSelected gamePresetSelected;           // 0x0350 (size: 0x10)
    void gamePresetSelected(bool reselectDifficulty);
    FmainMenu_GameSetupPresetButton_CChangeDifficulty changeDifficulty;               // 0x0360 (size: 0x10)
    void changeDifficulty(EGameDifficulty newDifficulty);
    FName presetRowName;                                                              // 0x0370 (size: 0x8)

    void BndEvt__mainMenu_GameSetupPresetButton_modeButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_mainMenu_GameSetupPresetButton(int32 EntryPoint);
    void changeDifficulty__DelegateSignature(EGameDifficulty newDifficulty);
    void gamePresetSelected__DelegateSignature(bool reselectDifficulty);
}; // Size: 0x378

#endif
