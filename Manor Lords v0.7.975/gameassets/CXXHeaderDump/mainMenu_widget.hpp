#ifndef UE4SS_SDK_mainMenu_widget_HPP
#define UE4SS_SDK_mainMenu_widget_HPP

class UmainMenu_widget_C : public UNaviGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0378 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x0380 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x0388 (size: 0x8)
    class USizeBox* back_sb;                                                          // 0x0390 (size: 0x8)
    class UScaleBox* back_scaleBox;                                                   // 0x0398 (size: 0x8)
    class UVerticalBox* back_vb;                                                      // 0x03A0 (size: 0x8)
    class UBorder* background_darkening_border;                                       // 0x03A8 (size: 0x8)
    class UBackgroundBlur* BackgroundBlur_51;                                         // 0x03B0 (size: 0x8)
    class UButton* Button;                                                            // 0x03B8 (size: 0x8)
    class UButton* Button_3;                                                          // 0x03C0 (size: 0x8)
    class UButton* Button_4;                                                          // 0x03C8 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x03D0 (size: 0x8)
    class UscenarioSelector_C* chooseScenario;                                        // 0x03D8 (size: 0x8)
    class UCreditsPage_C* CreditsPage;                                                // 0x03E0 (size: 0x8)
    class UImage* Image;                                                              // 0x03E8 (size: 0x8)
    class UImage* Image_254;                                                          // 0x03F0 (size: 0x8)
    class UBorder* inGameFadeBorder;                                                  // 0x03F8 (size: 0x8)
    class UImage* logo_img;                                                           // 0x0400 (size: 0x8)
    class USizeBox* main_buttons_sb;                                                  // 0x0408 (size: 0x8)
    class UVerticalBox* main_buttons_vb;                                              // 0x0410 (size: 0x8)
    class Umain_menu_lord_customization_C* main_menu_lordCustomization;               // 0x0418 (size: 0x8)
    class Umenu_saveLoadMenu_C* menu_load;                                            // 0x0420 (size: 0x8)
    class Umenu_settingsWrapper_C* menu_settingsWrapper_fullscreen;                   // 0x0428 (size: 0x8)
    class UmenuButton_C* menuButton_back;                                             // 0x0430 (size: 0x8)
    class UmenuButton_C* menuButton_continue;                                         // 0x0438 (size: 0x8)
    class UmenuButton_C* menuButton_credits;                                          // 0x0440 (size: 0x8)
    class UmenuButton_C* menuButton_loadGame;                                         // 0x0448 (size: 0x8)
    class UmenuButton_C* menuButton_mainMenu;                                         // 0x0450 (size: 0x8)
    class UmenuButton_C* menuButton_newGame;                                          // 0x0458 (size: 0x8)
    class UmenuButton_C* menuButton_quit;                                             // 0x0460 (size: 0x8)
    class UmenuButton_C* menuButton_restart;                                          // 0x0468 (size: 0x8)
    class UmenuButton_C* menuButton_save;                                             // 0x0470 (size: 0x8)
    class UmenuButton_C* menuButton_settings;                                         // 0x0478 (size: 0x8)
    class UTextBlock* ver;                                                            // 0x0480 (size: 0x8)
    class UButton* wishlist_button;                                                   // 0x0488 (size: 0x8)
    UDLSSMode DLSS_used;                                                              // 0x0490 (size: 0x1)
    class UmainMenu_GameSetup_C* mainMenu_newGameSettingsWidget;                      // 0x0498 (size: 0x8)
    class UWidget* ActiveMenu;                                                        // 0x04A0 (size: 0x8)

    void disableSavesIfGameOver();
    void RespectConsoleQuitLimits();
    ENaviHandleMethod HandleInput(ENaviUiIntent Key);
    void RebuildNaviGrid();
    void getScenarioName(FName& scenario);
    bool newGameSettingsIsCreatedAndVisible();
    void startNewGame();
    void unpauseAndResetDLSS();
    void getNumVisibleChildren(class UPanelWidget* Target, int32& numCh1);
    void closeLevel();
    void animateMainButtonCategory(float DeltaTime, bool IsVisible, class USizeBox* SizeBox, float desiredSizeY);
    void SwitchMenu(class UWidget* show);
    void BndEvt__mainMenu_widget_menuButton_back_K2Node_ComponentBoundEvent_8_onReleased__DelegateSignature();
    void BndEvt__mainMenu_widget_menuButton_continue_K2Node_ComponentBoundEvent_9_onReleased__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__mainMenu_widget_menuButton_loadGame_2_K2Node_ComponentBoundEvent_7_onReleased__DelegateSignature();
    void BndEvt__mainMenu_widget_menuButton_loadGame_1_K2Node_ComponentBoundEvent_6_onReleased__DelegateSignature();
    void BndEvt__mainMenu_widget_menuButton_loadGame_K2Node_ComponentBoundEvent_5_onReleased__DelegateSignature();
    void BndEvt__mainMenu_widget_menuButton_K2Node_ComponentBoundEvent_4_onReleased__DelegateSignature();
    void BndEvt__mainMenu_widget_menuButton_restart_K2Node_ComponentBoundEvent_10_onReleased__DelegateSignature();
    void BndEvt__mainMenu_widget_menuButton_mainMenu_K2Node_ComponentBoundEvent_11_onReleased__DelegateSignature();
    void BndEvt__mainMenu_widget_menuButton_save_K2Node_ComponentBoundEvent_12_onReleased__DelegateSignature();
    void BndEvt__mainMenu_widget_chooseScenario_K2Node_ComponentBoundEvent_0_scenarioPicked__DelegateSignature();
    void BndEvt__mainMenu_widget_main_menu_newGame_K2Node_ComponentBoundEvent_1_goToGameSetup__DelegateSignature();
    void BndEvt__mainMenu_widget_Button_5_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void BndEvt__mainMenu_widget_Button_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature();
    void Continue();
    void goBackToBannerCreation();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__mainMenu_widget_menuButton_credits_K2Node_ComponentBoundEvent_3_onReleased__DelegateSignature();
    void onCreditDone();
    void EnsureStartAchieved();
    void LoopStartAchieve();
    void ExecuteUbergraph_mainMenu_widget(int32 EntryPoint);
}; // Size: 0x4A8

#endif
