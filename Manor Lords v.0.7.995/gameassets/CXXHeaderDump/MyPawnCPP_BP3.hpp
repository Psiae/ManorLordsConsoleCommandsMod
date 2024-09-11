#ifndef UE4SS_SDK_MyPawnCPP_BP3_HPP
#define UE4SS_SDK_MyPawnCPP_BP3_HPP

class AMyPawnCPP_BP3_C : public APawnCPP
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x11D8 (size: 0x8)
    class UVAISMController* unitCreator_VAISMController_Bonus;                        // 0x11E0 (size: 0x8)
    class UVAISMController* unitCreator_VAISMController_Accessory;                    // 0x11E8 (size: 0x8)
    class UVAISMController* unitCreator_VAISMController_Shield;                       // 0x11F0 (size: 0x8)
    class UVAISMController* unitCreator_VAISMController_Helmet;                       // 0x11F8 (size: 0x8)
    class UVAISMController* unitCreator_VAISMController_Head;                         // 0x1200 (size: 0x8)
    class UVAISMController* unitCreator_VAISMController_Weapon;                       // 0x1208 (size: 0x8)
    class UVAISMController* unitCreator_VAISMController_Body;                         // 0x1210 (size: 0x8)
    class UStaticMeshComponent* blurryFogCylinder_DISABLED;                           // 0x1218 (size: 0x8)
    class USceneCaptureComponent2D* unitCreator_SceneCaptureComponent2D;              // 0x1220 (size: 0x8)
    class UVARuntimeComponent* VARuntime_UnitPreview;                                 // 0x1228 (size: 0x8)
    class USceneComponent* dynamicAmbienceSystem;                                     // 0x1230 (size: 0x8)
    class UAudioComponent* CenB;                                                      // 0x1238 (size: 0x8)
    class UStaticMeshComponent* bbox_outlineCullPlane_DISABLED;                       // 0x1240 (size: 0x8)
    class UDecalComponent* moduleMaskDecal;                                           // 0x1248 (size: 0x8)
    class UAudioComponent* CenA;                                                      // 0x1250 (size: 0x8)
    class UAudioComponent* LeftB;                                                     // 0x1258 (size: 0x8)
    class UAudioComponent* RightB;                                                    // 0x1260 (size: 0x8)
    class UAudioComponent* RightA;                                                    // 0x1268 (size: 0x8)
    class UAudioComponent* LeftA;                                                     // 0x1270 (size: 0x8)
    class USceneCaptureComponent2D* thumbCapture;                                     // 0x1278 (size: 0x8)
    class UAudioComponent* StaticAmbience_HighWind;                                   // 0x1280 (size: 0x8)
    class UAudioComponent* music_leadingTrackB;                                       // 0x1288 (size: 0x8)
    class UAudioComponent* music_leadingTrackA;                                       // 0x1290 (size: 0x8)
    class USceneComponent* dynamicMusicSystem;                                        // 0x1298 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x12A0 (size: 0x8)
    class USpotLightComponent* SpotLight1;                                            // 0x12A8 (size: 0x8)
    class USceneComponent* unitCreator_Scene;                                         // 0x12B0 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x12B8 (size: 0x8)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_828BA552426AFD6A7E796CAB0E235D1F; // 0x12C0 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x12C8 (size: 0x8)
    TEnumAsByte<ETimelineDirection::Type> zoomTransition__Direction_4F8545034896CEEBF9D81587D9D4525A; // 0x12D0 (size: 0x1)
    class UTimelineComponent* zoomTransition;                                         // 0x12D8 (size: 0x8)
    float introSweepTimeline_prog_A142DBE24E482CF94AA1509BB14AC283;                   // 0x12E0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> introSweepTimeline__Direction_A142DBE24E482CF94AA1509BB14AC283; // 0x12E4 (size: 0x1)
    class UTimelineComponent* introSweepTimeline;                                     // 0x12E8 (size: 0x8)
    class UMainUICPP_C* mainUI;                                                       // 0x12F0 (size: 0x8)
    double bbox_scale_anim;                                                           // 0x12F8 (size: 0x8)
    double bbox_scale_lerp;                                                           // 0x1300 (size: 0x8)
    double clickAnim;                                                                 // 0x1308 (size: 0x8)
    class UMaterialInstanceDynamic* highlight_materialinstance;                       // 0x1310 (size: 0x8)
    double gridRange;                                                                 // 0x1318 (size: 0x8)
    bool TownNamesUpdated;                                                            // 0x1320 (size: 0x1)
    bool HighlightAnimationRunning;                                                   // 0x1321 (size: 0x1)
    bool BLMB;                                                                        // 0x1322 (size: 0x1)
    bool bRMB;                                                                        // 0x1323 (size: 0x1)
    FVector2D RMBLast;                                                                // 0x1328 (size: 0x10)
    bool isUIHovered;                                                                 // 0x1338 (size: 0x1)
    bool isInventoryHovered;                                                          // 0x1339 (size: 0x1)
    TArray<class UquestItem_C*> questItems;                                           // 0x1340 (size: 0x10)
    double MMB_axis_0;                                                                // 0x1350 (size: 0x8)
    int32 lastDebrisSnd;                                                              // 0x1358 (size: 0x4)
    bool skipRMB;                                                                     // 0x135C (size: 0x1)
    TArray<class UgenericAchievement_EventMessage_C*> progressUpdates;                // 0x1360 (size: 0x10)
    double timeCorrected;                                                             // 0x1370 (size: 0x8)
    double ctrlAxis;                                                                  // 0x1378 (size: 0x8)
    double deltaT;                                                                    // 0x1380 (size: 0x8)
    class ASMBuildingMaster* nullBuilding;                                            // 0x1388 (size: 0x8)
    bool UI setup Finished;                                                           // 0x1390 (size: 0x1)
    double startingPitch;                                                             // 0x1398 (size: 0x8)
    double startingYaw;                                                               // 0x13A0 (size: 0x8)
    int32 inventoryAudioBType;                                                        // 0x13A8 (size: 0x4)
    bool ambienceSoundFound;                                                          // 0x13AC (size: 0x1)
    TArray<int32> tutorialsShown;                                                     // 0x13B0 (size: 0x10)
    double desat;                                                                     // 0x13C0 (size: 0x8)
    class ASkyAtmosphere* atmFog;                                                     // 0x13C8 (size: 0x8)
    class ASkyLight* SkyLight;                                                        // 0x13D0 (size: 0x8)
    class ADirectionalLightActor_C* dirLight;                                         // 0x13D8 (size: 0x8)
    TArray<class UWidget*> oldQuestLog;                                               // 0x13E0 (size: 0x10)
    bool anyNewQuest;                                                                 // 0x13F0 (size: 0x1)
    int32 numTutMessages;                                                             // 0x13F4 (size: 0x4)
    bool hasClickedAnyMainTab;                                                        // 0x13F8 (size: 0x1)
    int32 lastHomeID;                                                                 // 0x13FC (size: 0x4)
    class APostProcessVolume* postProcess;                                            // 0x1400 (size: 0x8)
    TArray<class UMessageFullscreen_C*> MessageWidgets;                               // 0x1408 (size: 0x10)
    TArray<class UtutorialMessage_C*> TutorialMessages;                               // 0x1418 (size: 0x10)
    double timeCorrectedPrevFrame;                                                    // 0x1428 (size: 0x8)
    TArray<class UsquadWidget_C*> squadWidgets;                                       // 0x1430 (size: 0x10)
    bool scheduleSquadWidgetUpdate;                                                   // 0x1440 (size: 0x1)
    bool isHoveringOverUnitCard;                                                      // 0x1441 (size: 0x1)
    TEnumAsByte<DMS_Mood::Type> DMS_Mood;                                             // 0x1442 (size: 0x1)
    TEnumAsByte<DMS_Mood::Type> DMS_PrevMood;                                         // 0x1443 (size: 0x1)
    FDMS_Track DMS_CurrentLeadingTrack;                                               // 0x1448 (size: 0x30)
    double percentOfNextTransition;                                                   // 0x1478 (size: 0x8)
    class UDataTable* DMS_DT_Tracks;                                                  // 0x1480 (size: 0x8)
    double DMS_transition_treshold;                                                   // 0x1488 (size: 0x8)
    double DMS_last_transition_considertion;                                          // 0x1490 (size: 0x8)
    double DMS_last_track_change;                                                     // 0x1498 (size: 0x8)
    double DMS_transition_offset_mul;                                                 // 0x14A0 (size: 0x8)
    double DMS_current_progress;                                                      // 0x14A8 (size: 0x8)
    bool DMS_usingBComponent;                                                         // 0x14B0 (size: 0x1)
    bool DMS_schedule_transition;                                                     // 0x14B1 (size: 0x1)
    class USoundBase* DMS_next_transition;                                            // 0x14B8 (size: 0x8)
    class UDataTable* DMS_DT_Transitions;                                             // 0x14C0 (size: 0x8)
    FDMS_Track DMS_nextProposedTrack;                                                 // 0x14C8 (size: 0x30)
    double DMS_currentTrackTime;                                                      // 0x14F8 (size: 0x8)
    TArray<FDMS_Track> DMS_LastPlayedTracks;                                          // 0x1500 (size: 0x10)
    double DMS_lag;                                                                   // 0x1510 (size: 0x8)
    class UQuartzClockHandle* clock;                                                  // 0x1518 (size: 0x8)
    TArray<double> DMS_currentTransitionTImes;                                        // 0x1520 (size: 0x10)
    bool DMS_finalTransition;                                                         // 0x1530 (size: 0x1)
    TArray<class UWidget*> questsToRemove;                                            // 0x1538 (size: 0x10)
    double prevClearance;                                                             // 0x1548 (size: 0x8)
    bool smoothMapMode;                                                               // 0x1550 (size: 0x1)
    bool prevSmoothMapMode;                                                           // 0x1551 (size: 0x1)
    double smoothMapThreshold;                                                        // 0x1558 (size: 0x8)
    double zoomBeforeClickedMap;                                                      // 0x1560 (size: 0x8)
    int32 DMS_numTracksPlayed;                                                        // 0x1568 (size: 0x4)
    bool DMS_MoodChanged;                                                             // 0x156C (size: 0x1)
    class ARegion* prevRegionUnderCursor;                                             // 0x1570 (size: 0x8)
    double lastRegionChangeSfx;                                                       // 0x1578 (size: 0x8)
    class UMessageFullscreen_C* lastMessagePlayed;                                    // 0x1580 (size: 0x8)
    TArray<FQueuedEventMessage> eventMsgQueue;                                        // 0x1588 (size: 0x10)
    TArray<EAmbienceType> DAS_CurrentAmbienceTypes;                                   // 0x1598 (size: 0x10)
    class UDataTable* DT_Ambience;                                                    // 0x15A8 (size: 0x8)
    int32 DAS_LastDayChange;                                                          // 0x15B0 (size: 0x4)
    class USourceEffectFilterPreset* ambient_SC;                                      // 0x15B8 (size: 0x8)
    double DAS_Lowpass;                                                               // 0x15C0 (size: 0x8)
    class UReverbEffect* DAS_ReverbFX;                                                // 0x15C8 (size: 0x8)
    class AAudioVolume* DAS_ReverbVolume;                                             // 0x15D0 (size: 0x8)
    double previewGuy_newAnimPos;                                                     // 0x15D8 (size: 0x8)
    class AActor* mapPlane;                                                           // 0x15E0 (size: 0x8)
    class AFogBP_C* heightFog;                                                        // 0x15E8 (size: 0x8)
    class AActor* mapEdgeFade;                                                        // 0x15F0 (size: 0x8)
    TSoftObjectPtr<USoundBase> Last_Voiceline_Path;                                   // 0x15F8 (size: 0x28)
    int32 chosenVoiceLineVariation;                                                   // 0x1620 (size: 0x4)
    FTimerHandle tutorialTimerHandle;                                                 // 0x1628 (size: 0x8)
    TArray<class ARegion*> allRegions;                                                // 0x1630 (size: 0x10)
    class UmainMenu_widget_C* pauseMenu;                                              // 0x1640 (size: 0x8)
    TArray<class UAudioComponent*> DAS_CurrentlyPlayingComponentForNode;              // 0x1648 (size: 0x10)
    TArray<double> DAS_PrevFadeInTimes;                                               // 0x1658 (size: 0x10)
    class UAudioComponent* DAS_newCurrentComponent;                                   // 0x1668 (size: 0x8)
    double DAS_fadeTime;                                                              // 0x1670 (size: 0x8)
    bool command_setSprintMode;                                                       // 0x1678 (size: 0x1)
    FVector cinematic_actorPositionAboveGround;                                       // 0x1680 (size: 0x18)
    double gameSpeedBeforeEnginePause;                                                // 0x1698 (size: 0x8)
    double gameSpeedBeforeMapView;                                                    // 0x16A0 (size: 0x8)
    FTimerHandle updateFloatersTimerHandle;                                           // 0x16A8 (size: 0x8)
    class AActor* starDome;                                                           // 0x16B0 (size: 0x8)
    bool UI_assignmentMode_BP;                                                        // 0x16B8 (size: 0x1)
    bool UI_assignmentModeChanged;                                                    // 0x16B9 (size: 0x1)
    FTimerHandle autosaveHandle;                                                      // 0x16C0 (size: 0x8)
    int32 AmbientNodeLoopIndex;                                                       // 0x16C8 (size: 0x4)
    FDMS_Track DMS_PreviousTrack;                                                     // 0x16D0 (size: 0x30)
    bool everChangedGameSpeed;                                                        // 0x1700 (size: 0x1)
    double gameSpeed3_value;                                                          // 0x1708 (size: 0x8)
    TArray<FQueuedPopup> queuedPopups;                                                // 0x1710 (size: 0x10)
    bool triggeredVisitMode;                                                          // 0x1720 (size: 0x1)

    void getMainTabIndex(int32& mainTabIndex);
    void OpenPauseMenu();
    void ClosePauseMenu();
    void RebuildUnitPreviewShowOnlyList(bool ForceHidden);
    void playQueuedPopups();
    void playPopupMessage(FName MessageType, class ARegion* Region);
    double getVariableVoicePitchForUnit(class ASMUnit* unit);
    bool hasQuest(FString questNameContains);
    void splitAndLocalize(FString SourceString, FString& localizedStringCombined);
    void updateMercenaryPaydayUI();
    void getHighestCommandedRegionLv(int32& highestLv1);
    void openLegacyView();
    void updateGameWindowFocus();
    void Set Autosave Timer(double Time);
    void Request Autosave();
    void Update Quest Message Elaborate Grid Visibility();
    void toggleStreamVisibility(bool bNewHidden);
    bool isHoveringResolutionConfirmation(class UMainUICPP_C* self2);
    bool isInBattleScenario();
    void storeOrBringBackGameSpeedAndZoomAfterMapMenuToggle();
    void setGamePausedInclVamp(bool bPaused);
    void playGameOver(int32 selection);
    void updateReverbVolume();
    void Start Tutorials if Enabled();
    void rotateOutlineCullPlaneForPlacebuilding();
    bool isCurrentScenario(FName scenarioKey);
    void regionUnderCursorChangeSFX();
    void DAS_DynamicAudioFilters();
    void pickAmbienceSound(EAmbienceType Type, int32 ID, class USoundBase*& Sound);
    void updateEventMessageQueue();
    void playQueuedEventMessage(FQueuedEventMessage queuedMsg);
    void Any Event Mesages Playing(bool& stillPlaying);
    void adjustWindAmbience();
    void findLights();
    void DMS Is Dark Times(class ARegion*& Region, bool& dark);
    bool DMS Is Non Battle Track(class UObject* currentSound, TEnumAsByte<DMS_Mood::Type> currentMood);
    bool DMS_currentTrackLastTransitionPoint();
    void getBuildingMeshForID(int32 ID, TSoftObjectPtr<UStaticMesh>& Out Row Construction Mesh Asset);
    void checkAndTurnSmoothMapView();
    void updateVolumetricCloudVisibility();
    void Is Camera Shake Enabled(bool& Settings Camera Shake);
    void isQuestStillValid(FQuest Quest, bool& Valid);
    void questExistsInLog(FQuest Quest, TArray<class UWidget*>& scrollbox_children, bool& Exists, class UquestItem_C*& questItem);
    void update_questlog();
    void DMS_pastTracksContainMood(TEnumAsByte<DMS_Mood::Type> mood, bool& Contains);
    void DMS_generateTransitionTimes();
    void DMS_passedTransitionPoint(double CurrentTime, double Threshold, double anticipation, bool& Passed, double& transitionPoint, double& reminder);
    void DMS_pickRandomTransition(FDMS_Track& chosenTransition);
    void DMS_PickTrackForMood(TEnumAsByte<DMS_Mood::Type> mood, FDMS_Track& chosenTrack);
    void DMS_Setup();
    void DMS_selectMood();
    void dynamicMusicTick();
    void updateMPCValues();
    void isAnyBuildingUnderConstruction(class ASMBuildingMaster*& firstBuildingFound, bool& buildingFound);
    bool squadWidgetExists(int32 B);
    void setFoliageVisibility(bool bNewHidden);
    void displayNewDiplomaticMessages();
    void questExistedBefore(FQuest Quest, bool& existed);
    void spawnRegionIconWidgets();
    void mapViewChange_UpdateSkyFogEtc();
    void getNumShowingQuestMessages(int32& Num);
    void checkNoWorkersEmployed(bool& hasBuildingWithoutWorkers, class ASMBuildingMaster*& building);
    void getNumTotalBuildings(int32 bType, bool MustBeConstructed, int32& buildingAmount, class ASMBuildingMaster*& lastBuildingFound);
    void Check If Lacks Resource(const int32& Type, int32 neededAmt, bool& lacksResource);
    void spawnTutorialMessage(FVector Pos, bool realWorld, FVector2D FixedPositionOnScreen, bool pausesGame, bool visibleInMapView, FName tutorialKey);
    void tutorial();
    void Play Fullscreen Message(FQuest Quest, FLetter Letter, bool tutorial, FName header_key_tut, FName descr_key_tut, class UMessageTutorialFullscreen_C*& tutorialWidget);
    void playFeedbackTextFunction(FText textToPrint, FVector Pos, double PlaybackSpeed);
    void getLastOpenedInventoryTab_WIP(class UInventory_C*& lastInventoryTab);
    void updateInventoryBackgroundAudio();
    void increaseGameSpeed(bool playSfx, bool AloowWrapAround);
    void decreaseGameSpeed(bool playSfx);
    void getGameSpeedID(int32& Speed);
    void changeGameSpeed(int32 newSpeedIndex, bool playSfx);
    void setupKillCam(FVector InVec, bool bCinematicTime);
    void showAndHideEconomyPanel();
    void getCtrlPressed(bool& IsPressed);
    void isAnyUnitCardHovered(bool& IsHovered);
    void closeAllInventoryTabs();
    void popIcons2D();
    void gridLerp();
    void treeHighlights();
    bool flipBool(bool NewParam);
    void checkIfWindowsHovered(bool& Hovered);
    void ScaleBBOXArrow();
    void UserConstructionScript();
    void zoomTransition__FinishedFunc();
    void zoomTransition__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void introSweepTimeline__FinishedFunc();
    void introSweepTimeline__UpdateFunc();
    void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_3(FKey Key);
    void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_0(FKey Key);
    void InpActEvt_quicksave_K2Node_InputActionEvent_18(FKey Key);
    void InpActEvt_tab_K2Node_InputActionEvent_17(FKey Key);
    void InpActEvt_tab_K2Node_InputActionEvent_16(FKey Key);
    void InpActEvt_cinematicMode_K2Node_InputActionEvent_15(FKey Key);
    void InpActEvt_squadSprint_K2Node_InputActionEvent_14(FKey Key);
    void InpActEvt_esc_K2Node_InputActionEvent_13(FKey Key);
    void InpActEvt_quickCottage_K2Node_InputActionEvent_12(FKey Key);
    void InpActEvt_roadMode_K2Node_InputActionEvent_11(FKey Key);
    void InpActEvt_remove worker_K2Node_InputActionEvent_10(FKey Key);
    void InpActEvt_add worker_K2Node_InputActionEvent_9(FKey Key);
    void InpActEvt_home_K2Node_InputActionEvent_8(FKey Key);
    void InpActEvt_turnMapViewMode_K2Node_InputActionEvent_7(FKey Key);
    void InpActEvt_prevCategory_K2Node_InputActionEvent_6(FKey Key);
    void InpActEvt_nextCategory_K2Node_InputActionEvent_5(FKey Key);
    void InpActEvt_fastSpeed_K2Node_InputActionEvent_4(FKey Key);
    void InpActEvt_slowSpeed_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_army_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_pause_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_openBuildingsTab_K2Node_InputActionEvent_0(FKey Key);
    void OnLoaded_87C787CC442C40749917619FD991A844(class UObject* Loaded);
    void lerpToPosition(FVector NewPosition);
    void lerpToZoom(double newZoom);
    void ReceiveBeginPlay();
    void openBuildingTab(class ASMBuildingMaster* building, bool playSfx);
    void closeAllTabs();
    void updateInventory();
    void iconPop(class ASMBuildingMaster* building, int32 Type);
    void playUISnd(int32 Type);
    void playBuildEffects(const FVector& Position);
    void updateCurrentRegionUI();
    void updateStatUI();
    void playAlert(const int32& Type);
    void playBuildingSound(const int32& bType);
    void updateLogUI();
    void play build sound(bool withPlanks);
    void playMarkerSound(const int32& snd);
    void showProgressUpdate(class ARegion* Region);
    void closeAllTabsAndInventories();
    void openDevelopmentPanel(class ARegion* Region);
    void armyUIUpdate();
    void updateTradeUI();
    void gameOver(const int32& Type);
    void playParticleSystem(const int32& ID, const FVector& Pos);
    void playKillCam(const FVector& Pos);
    void playVfx(const int32& Type, const FVector& Pos);
    void playFeedbackText(FString Text, const FVector& Pos, float Speed);
    void switchTab(const int32& Tab);
    void playEventMessage(const FName& msgType, FString primaryText, FString secondaryText);
    void QuestMessage(const FQuest& Quest);
    void updateInventoryFieldStatus();
    void updateQuestlog();
    void updateTownLabels();
    void updateClaimsUI();
    void checkInbox_Timer();
    void respawnTownNames();
    void playCameraShake(const int32& typeOfShake);
    void eraseBuildingReferencesFromUI(class ASMBuildingMaster* building);
    void updateSquadWidgets_1();
    void setCinematicMode(bool NewMode);
    void updateCursor(ECursorMode NewMode);
    void invokeRemoveRoadPrompt(class ARoad* roadToRemove);
    void callCommitRoad();
    void updateLoyaltyUI();
    void updateDateUI(int32 day, int32 month, int32 season);
    void updateQuestTimesUI();
    void updateProblemUI();
    void positionRoadConfirm(const FVector& NewPosition);
    void dynamicAmbienceSystemUpdate();
    void changeSelectedRegionUI(class ARegion* newSelectedRegion);
    void updateBoopMode();
    void spawnWorkAreaConfirmation(const FVector& Pos, const float& Radius);
    void updateApprovalUI();
    void playVoiceResponse(const FName& responseKey, const int32& voiceID, class ASMUnit* relatedUnit);
    void updateSoundFilters();
    void updateInventoryStorage();
    void updateGameSpeedUI();
    void setDipToBlackOpacity(float Opacity);
    void playPopupMessageGUI(FName MessageType, class ARegion* Region);
    void updateCoatOfArmsSymbol();
    void updateMarketStats();
    void playSaveFinishedNotif();
    void updateResidentsUI();
    void updateCastleReconstructionCostUI();
    void updateAssignModeUI();
    void openCastlePlannerUI(class ASMBuildingMaster* plannerBuilding);
    void OnWindowFocusChanged(bool bIsFocused);
    void openSettlementInitializer(class ARegion* Region);
    void updateRTSToolActorUI();
    void updateActiveRTSToolUI();
    void updateMercenayCompanyUI();
    void RMB_BP_pressed();
    void RMB_BP_released();
    void LMB_BP_pressed();
    void LMB_BP_released();
    void setInventoryTabForBuilding(class ASMBuildingMaster* building, int32 inventoryTabIndex);
    void playIntroSweep();
    void stopIntroCinematic();
    void DMS_pecentageEvent(const class USoundWave* PlayingSoundWave, const float PlaybackPercent);
    void ReceiveTick(float DeltaSeconds);
    void toggleTimeNext();
    void toggleTimePause();
    void togglePauseMenu();
    void updateBuildingFloatersEverySecond();
    void pleaseTurnMapView(bool NewMode);
    void flipMapView_event();
    void removeChallengeFromUI(int32 challengeID);
    void setMainUIMode(EMainUIMode NewMode);
    void ExecuteUbergraph_MyPawnCPP_BP3(int32 EntryPoint);
}; // Size: 0x1721

#endif
