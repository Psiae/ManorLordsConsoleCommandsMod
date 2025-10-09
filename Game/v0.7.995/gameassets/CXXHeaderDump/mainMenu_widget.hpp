#ifndef UE4SS_SDK_mainMenu_widget_HPP
#define UE4SS_SDK_mainMenu_widget_HPP

class UmainMenu_widget_C : public UNaviGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0410 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x0418 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x0420 (size: 0x8)
    class USizeBox* back_sb;                                                          // 0x0428 (size: 0x8)
    class UScaleBox* back_scaleBox;                                                   // 0x0430 (size: 0x8)
    class UVerticalBox* back_vb;                                                      // 0x0438 (size: 0x8)
    class UBorder* background_darkening_border;                                       // 0x0440 (size: 0x8)
    class UBackgroundBlur* BackgroundBlur_51;                                         // 0x0448 (size: 0x8)
    class UButton* Button;                                                            // 0x0450 (size: 0x8)
    class UButton* Button_3;                                                          // 0x0458 (size: 0x8)
    class UButton* Button_4;                                                          // 0x0460 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0468 (size: 0x8)
    class UCreditsPage_C* CreditsPage;                                                // 0x0470 (size: 0x8)
    class UImage* Image;                                                              // 0x0478 (size: 0x8)
    class UImage* Image_254;                                                          // 0x0480 (size: 0x8)
    class UBorder* inGameFadeBorder;                                                  // 0x0488 (size: 0x8)
    class UImage* logo_img;                                                           // 0x0490 (size: 0x8)
    class USizeBox* main_buttons_sb;                                                  // 0x0498 (size: 0x8)
    class UVerticalBox* main_buttons_vb;                                              // 0x04A0 (size: 0x8)
    class Umain_menu_lord_customization_C* main_menu_lordCustomization;               // 0x04A8 (size: 0x8)
    class Umenu_saveLoadMenu_C* menu_load;                                            // 0x04B0 (size: 0x8)
    class Umenu_settingsWrapper_C* menu_settingsWrapper_fullscreen;                   // 0x04B8 (size: 0x8)
    class UmenuButton_C* menuButton_back;                                             // 0x04C0 (size: 0x8)
    class UmenuButton_C* menuButton_continue;                                         // 0x04C8 (size: 0x8)
    class UmenuButton_C* menuButton_credits;                                          // 0x04D0 (size: 0x8)
    class UmenuButton_C* menuButton_loadGame;                                         // 0x04D8 (size: 0x8)
    class UmenuButton_C* menuButton_mainMenu;                                         // 0x04E0 (size: 0x8)
    class UmenuButton_C* menuButton_newGame;                                          // 0x04E8 (size: 0x8)
    class UmenuButton_C* menuButton_quit;                                             // 0x04F0 (size: 0x8)
    class UmenuButton_C* menuButton_restart;                                          // 0x04F8 (size: 0x8)
    class UmenuButton_C* menuButton_save;                                             // 0x0500 (size: 0x8)
    class UmenuButton_C* menuButton_settings;                                         // 0x0508 (size: 0x8)
    class UTextBlock* Ver;                                                            // 0x0510 (size: 0x8)
    class UButton* wishlist_button;                                                   // 0x0518 (size: 0x8)
    UDLSSMode DLSS_used;                                                              // 0x0520 (size: 0x1)
    class UmainMenu_GameSetup_C* mainMenu_newGameSettingsWidget;                      // 0x0528 (size: 0x8)
    class UWidget* activeMenu;                                                        // 0x0530 (size: 0x8)
    TSubclassOf<class UCoatOfArmsLibrary> CoatOfArmsLibraryClass;                     // 0x0538 (size: 0x8)
    class UCoatOfArmsLibrary* CoatOfArmsLibrary;                                      // 0x0540 (size: 0x8)
    bool StartingNewGame;                                                             // 0x0548 (size: 0x1)

    void OnPauseMenuReopen();
    bool IsButtonCategoryBackOnly();
    FNaviPrimeGridLayout ComputePrimeGridLayout();
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
    void animateMainButtonCategory(double DeltaTime, bool IsVisible, class USizeBox* SizeBox, double desiredSizeY);
    void SwitchMenu(class UWidget* show);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__mainMenu_widget_menuButton_back_K2Node_ComponentBoundEvent_8_onReleased__DelegateSignature();
    void BndEvt__mainMenu_widget_menuButton_loadGame_1_K2Node_ComponentBoundEvent_6_onReleased__DelegateSignature();
    void BndEvt__mainMenu_widget_menuButton_loadGame_K2Node_ComponentBoundEvent_5_onReleased__DelegateSignature();
    void BndEvt__mainMenu_widget_menuButton_continue_K2Node_ComponentBoundEvent_9_onReleased__DelegateSignature();
    void BndEvt__mainMenu_widget_menuButton_K2Node_ComponentBoundEvent_4_onReleased__DelegateSignature();
    void BndEvt__mainMenu_widget_menuButton_restart_K2Node_ComponentBoundEvent_10_onReleased__DelegateSignature();
    void BndEvt__mainMenu_widget_menuButton_mainMenu_K2Node_ComponentBoundEvent_11_onReleased__DelegateSignature();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void BndEvt__mainMenu_widget_menuButton_save_K2Node_ComponentBoundEvent_12_onReleased__DelegateSignature();
    void BndEvt__mainMenu_widget_main_menu_newGame_K2Node_ComponentBoundEvent_1_goToGameSetup__DelegateSignature();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__mainMenu_widget_Button_5_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__mainMenu_widget_Button_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature();
    void Continue();
    void BndEvt__mainMenu_widget_menuButton_loadGame_2_K2Node_ComponentBoundEvent_7_onReleased__DelegateSignature();
    void goBackToBannerCreation();
    void BndEvt__mainMenu_widget_menuButton_credits_K2Node_ComponentBoundEvent_3_onReleased__DelegateSignature();
    void onCreditDone();
    void EnsureStartAchieved();
    void LoopStartAchieve();
    void ExecuteUbergraph_mainMenu_widget(int32 EntryPoint);
}; // Size: 0x549

#endif
