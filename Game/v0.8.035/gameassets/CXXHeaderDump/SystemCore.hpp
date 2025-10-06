#ifndef UE4SS_SDK_SystemCore_HPP
#define UE4SS_SDK_SystemCore_HPP

#include "SystemCore_enums.hpp"

struct FCreditsDetails
{
    TArray<FCreditsLine> lines;                                                       // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FCreditsLine
{
    bool isHeader;                                                                    // 0x0000 (size: 0x1)
    FString Text;                                                                     // 0x0008 (size: 0x10)
    TArray<FString> multiText;                                                        // 0x0018 (size: 0x10)
    bool isSection;                                                                   // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FInputIconConfigRow : public FTableRowBase
{
    EPlatformCategory Platform;                                                       // 0x0008 (size: 0x1)
    TMap<class EInputIconButton, class UTexture2D*> iconTextures;                     // 0x0010 (size: 0x50)

}; // Size: 0x60

struct FInputIconSet
{
    EPlatformCategory Platform;                                                       // 0x0000 (size: 0x1)
    TMap<class EInputIconButton, class UTexture2D*> iconTextures;                     // 0x0008 (size: 0x50)

}; // Size: 0x58

struct FInputIconState
{
    TMap<class EPlatformCategory, class FInputIconSet> availableIconSets;             // 0x0000 (size: 0x50)
    EPlatformCategory currentPlatform;                                                // 0x0050 (size: 0x1)
    FInputIconSet currentIcons;                                                       // 0x0058 (size: 0x58)

}; // Size: 0xB0

struct FMetaMetricRunState
{
    TMap<FName, int32> sentProgress;                                                  // 0x0000 (size: 0x50)
    TSet<FName> alreadyGivenAchievements;                                             // 0x0050 (size: 0x50)

}; // Size: 0xA0

struct FNaviConfirm
{
    int32 instId;                                                                     // 0x0000 (size: 0x4)
    FString titleStringKey;                                                           // 0x0008 (size: 0x10)
    FString descStringKey;                                                            // 0x0018 (size: 0x10)
    TArray<FNaviConfirm_Choice> Items;                                                // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FNaviConfirm_Choice
{
    FString titleStringKey;                                                           // 0x0000 (size: 0x10)
    FString Payload;                                                                  // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FNaviFormItemPlan
{
    ENaviFormType Type;                                                               // 0x0000 (size: 0x1)
    FString ID;                                                                       // 0x0008 (size: 0x10)
    TArray<FString> Options;                                                          // 0x0018 (size: 0x10)
    FString DefaultValue;                                                             // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FNaviFormPlan
{
    TArray<FNaviFormItemPlan> Items;                                                  // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FNaviGridConfig
{
    bool ignoreHistory;                                                               // 0x0000 (size: 0x1)
    int32 minSearchDistance;                                                          // 0x0004 (size: 0x4)
    int32 nearSearchDistance;                                                         // 0x0008 (size: 0x4)
    int32 tinySearchDistance;                                                         // 0x000C (size: 0x4)

}; // Size: 0x10

struct FNaviGridState
{
    TMap<class FVector, class UNaviUi*> Items;                                        // 0x0000 (size: 0x50)
    TMap<class UNaviUi*, class FVector> itemToCell;                                   // 0x0050 (size: 0x50)
    FVector preferedCell;                                                             // 0x00A0 (size: 0x18)
    TMap<class ENaviUiIntent, class UNaviUi*> hotkeyRegistry;                         // 0x00B8 (size: 0x50)
    class UNaviUi* priorityTabReceiver;                                               // 0x0108 (size: 0x8)

}; // Size: 0x110

struct FNaviHotkeyRegistry
{
}; // Size: 0x1

struct FNaviList
{
    int32 instId;                                                                     // 0x0000 (size: 0x4)
    FString titleStringKey;                                                           // 0x0008 (size: 0x10)
    TArray<FNaviList_Item> Items;                                                     // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FNaviList_Item
{
    FString titleStringKey;                                                           // 0x0000 (size: 0x10)
    FString Payload;                                                                  // 0x0010 (size: 0x10)
    bool IsActive;                                                                    // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FNaviPrimeGridLayout
{
    class UNaviUi* defaultFocusedMember;                                              // 0x0000 (size: 0x8)
    TMap<class UNaviUi*, class FVector> gridMembers;                                  // 0x0008 (size: 0x50)
    TMap<class ENaviUiIntent, class UNaviUi*> hotkeyRegistry;                         // 0x0058 (size: 0x50)
    int32 tabReceptionPriority;                                                       // 0x00A8 (size: 0x4)

}; // Size: 0xB0

struct FNaviSubGridLayout
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    class UNaviUi* defaultFocusedMember;                                              // 0x0008 (size: 0x8)
    TMap<class UNaviUi*, class FVector> gridMembers;                                  // 0x0010 (size: 0x50)
    TSet<ENaviGridAttribute> Attributes;                                              // 0x0060 (size: 0x50)
    TMap<class ENaviUiIntent, class UNaviUi*> hotkeyRegistry;                         // 0x00B0 (size: 0x50)
    int32 tabReceptionPriority;                                                       // 0x0100 (size: 0x4)

}; // Size: 0x108

struct FNaviUiResult
{
    class UNaviUi* Origin;                                                            // 0x0000 (size: 0x8)
    FString Payload;                                                                  // 0x0008 (size: 0x10)
    FString Key;                                                                      // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FNetManConfig
{
    bool usePresence;                                                                 // 0x0000 (size: 0x1)
    float refreshRateLimit;                                                           // 0x0004 (size: 0x4)
    int32 mpVersion;                                                                  // 0x0008 (size: 0x4)
    int32 maxSearchResults;                                                           // 0x000C (size: 0x4)
    float searchTimeout;                                                              // 0x0010 (size: 0x4)
    FString playMap;                                                                  // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FNetManLogin
{
    bool isAttemptingLogin;                                                           // 0x0000 (size: 0x1)
    bool hasLoginFinished;                                                            // 0x0001 (size: 0x1)

}; // Size: 0x18

struct FNetManSchedule
{
    bool isSilentLoginPending;                                                        // 0x0000 (size: 0x1)
    bool isLoginPending;                                                              // 0x0001 (size: 0x1)
    FNetManSessionPlan pendingSessionPlan;                                            // 0x0004 (size: 0x10)
    bool isSessionPending;                                                            // 0x0014 (size: 0x1)
    bool pendingSearchIsLand;                                                         // 0x0015 (size: 0x1)
    bool isSearchPending;                                                             // 0x0016 (size: 0x1)

}; // Size: 0x18

struct FNetManSearch
{
    bool inSearch;                                                                    // 0x0000 (size: 0x1)
    bool hasResults;                                                                  // 0x0001 (size: 0x1)
    FNetManSearchResults Results;                                                     // 0x0008 (size: 0x18)

}; // Size: 0x30

struct FNetManSearchLobby
{
    FString HostName;                                                                 // 0x0000 (size: 0x10)
    FString mapName;                                                                  // 0x0010 (size: 0x10)
    FString address;                                                                  // 0x0020 (size: 0x10)
    float Ping;                                                                       // 0x0030 (size: 0x4)

}; // Size: 0x38

struct FNetManSearchResults
{
    bool isLan;                                                                       // 0x0000 (size: 0x1)
    TArray<FNetManSearchLobby> lobbies;                                               // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FNetManSession
{
    bool isSessionActive;                                                             // 0x0000 (size: 0x1)
    bool isStartingSession;                                                           // 0x0001 (size: 0x1)
    FNetManSessionPlan plan;                                                          // 0x0004 (size: 0x10)

}; // Size: 0x14

struct FNetManSessionPlan
{
    bool isLan;                                                                       // 0x0000 (size: 0x1)
    int32 playerCount;                                                                // 0x0004 (size: 0x4)
    FName mapName;                                                                    // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FNetManState
{
    FString lastError;                                                                // 0x0020 (size: 0x10)
    FNetManLogin Login;                                                               // 0x0030 (size: 0x18)
    FNetManSession session;                                                           // 0x0048 (size: 0x14)
    FNetManSearch search;                                                             // 0x0060 (size: 0x30)
    FNetManSchedule schedule;                                                         // 0x0090 (size: 0x18)

}; // Size: 0xA8

struct FPlatformConfig
{
    int32 desiredControllerCount;                                                     // 0x0000 (size: 0x4)
    bool highperf_systemDesired;                                                      // 0x0004 (size: 0x1)
    bool highperf_playerDesired;                                                      // 0x0005 (size: 0x1)
    bool renderUiOnly;                                                                // 0x0006 (size: 0x1)
    bool wantDof;                                                                     // 0x0007 (size: 0x1)

}; // Size: 0x8

struct FProgressWidgetDetails
{
    FString Title;                                                                    // 0x0000 (size: 0x10)
    float startRatio;                                                                 // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FRandomSplitMixWrapper
{
    class URandomSplitMix* Instance;                                                  // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FRandomXorshiftWrapper
{
    class URandomXorshift* Instance;                                                  // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FRandomXorshiroWrapper
{
    class URandomXorshiro* Instance;                                                  // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FUiIconItemConfig
{
    FString Title;                                                                    // 0x0000 (size: 0x10)
    class UTexture2D* Icon;                                                           // 0x0010 (size: 0x8)
    FString minimap;                                                                  // 0x0018 (size: 0x10)
    FString Payload;                                                                  // 0x0028 (size: 0x10)

}; // Size: 0x38

class ALandscapeHeightExtractor : public AActor
{
}; // Size: 0x2A8

class ALandscapeHeightLoader : public AActor
{
    class UTexture2D* Destination;                                                    // 0x02A8 (size: 0x8)
    class UTexture2D* Source;                                                         // 0x02B0 (size: 0x8)
    class UMaterialParameterCollection* Parameters;                                   // 0x02B8 (size: 0x8)
    FLinearColor LandscapePosition;                                                   // 0x02C0 (size: 0x10)
    FLinearColor LandscapeScale;                                                      // 0x02D0 (size: 0x10)
    FIntPoint LandscapeVertexResolution;                                              // 0x02E0 (size: 0x8)
    FIntPoint HeightmapTextureResolution;                                             // 0x02E8 (size: 0x8)
    int32 PurgeCountdown;                                                             // 0x02F0 (size: 0x4)

    void Load();
}; // Size: 0x2F8

class APoissonDiskSamplerTest : public AActor
{
    float Radius;                                                                     // 0x02A8 (size: 0x4)
    int32 SampleCount;                                                                // 0x02AC (size: 0x4)
    float Randomness;                                                                 // 0x02B0 (size: 0x4)
    int32 ExpansionSamples;                                                           // 0x02B4 (size: 0x4)
    class UStaticMesh* Mesh;                                                          // 0x02B8 (size: 0x8)
    class UInstancedStaticMeshComponent* InstancedMeshes;                             // 0x02C0 (size: 0x8)

    void RunSampler();
}; // Size: 0x2C8

class AVertexAnimationDownscaler : public AActor
{
    FName InputFolder;                                                                // 0x02A8 (size: 0x8)
    double DownscalingFactor;                                                         // 0x02B0 (size: 0x8)
    TArray<FName> CoatOfArmsFolders;                                                  // 0x02B8 (size: 0x10)
    bool bInterpolateCoatOfArms;                                                      // 0x02C8 (size: 0x1)

}; // Size: 0x2D0

class UAutoIconWidget : public UUserWidget
{

    void SetIcon(class UTexture2D* iconSource);
}; // Size: 0x2D0

class UCoatOfArmsLibrary : public UObject
{
    TArray<class UTexture2D*> BackgroundTextures;                                     // 0x0028 (size: 0x10)
    TArray<class UTexture2D*> ForegroundTextures;                                     // 0x0038 (size: 0x10)
    TArray<class UTexture2D*> FieldDivisionTextures;                                  // 0x0048 (size: 0x10)
    int32 LoadingIndex;                                                               // 0x0058 (size: 0x4)

    bool RunTickIsStillLoading();
    void PurgeTextures();
    void LoadTextures();
    bool IsLoaded();
    TArray<class UTexture2D*> GetForegroundTextures();
    TArray<class UTexture2D*> GetFieldDivisionTextures();
    TArray<class UTexture2D*> GetBackgroundTextures();
}; // Size: 0x60

class UCreditsCompute : public UBlueprintFunctionLibrary
{

    FCreditsDetails GetCredits(FString rawCredits);
}; // Size: 0x28

class UInputIconManager : public UObject
{
    FInputIconState State;                                                            // 0x0028 (size: 0xB0)

    bool SetPreferedPlatformIconSet(EPlatformCategory desiredIconSet);
    class UTexture2D* GetInputIcon(EInputIconButton Button);
}; // Size: 0xD8

class UMetaMetric : public UObject
{
    FMetaMetricRunState State;                                                        // 0x0028 (size: 0xA0)

    void GiveAchievement(const class UObject* WorldContext, FName AchievementID);
}; // Size: 0xC8

class UNaviForm : public UNaviUi
{

    void SetFormPlan(FNaviFormPlan plan);
}; // Size: 0x340

class UNaviFormItem : public UNaviUi
{
    FString ID;                                                                       // 0x0340 (size: 0x10)

    void SetFormPlan(FNaviFormItemPlan plan);
    void SendFormItemChange(FString Value);
    void DisplayFromPlan(FNaviFormItemPlan plan);
}; // Size: 0x350

class UNaviFormItem_NoFocus : public UNaviFormItem
{
}; // Size: 0x350

class UNaviGrid : public UNaviUi
{
    FNaviGridState gridState;                                                         // 0x0340 (size: 0x110)
    FNaviGridConfig gridConfig;                                                       // 0x0450 (size: 0x10)

    bool SetPriorityGridChild(class UNaviUi* Child);
    void RepositionAllTooltips();
    class UNaviUi* RemoveGridChild(FVector Cell);
    void RemoveAllGridChildren();
    void RelayoutPrimeGrid();
    void OnSubGridChange();
    TArray<class UNaviUi*> ListGridMembers();
    TArray<FVector> ListFilledCells();
    bool IntegrateSubGrid(class UNaviSubGrid* subGrid);
    void HideAllTooltips();
    FVector FindNearestCell(FVector Start, FVector SearchDir);
    FVector FindCurrentCell();
    FNaviPrimeGridLayout ComputePrimeGridLayout();
    int32 ComputeMaxSearchDist();
    bool AttemptNavigation(ENaviUiIntent intent);
    void AddGridChild(FVector Cell, class UNaviUi* newChild);
}; // Size: 0x460

class UNaviSubGrid : public UNaviUi
{
    class UNaviGrid* hostGrid;                                                        // 0x0340 (size: 0x8)

    void RepositionAllTooltips();
    void ReportSubGridChanged();
    void HideAllTooltips();
    FNaviSubGridLayout ComputeSubGridLayout();
}; // Size: 0x348

class UNaviUi : public UUserWidget
{
    FNaviUiOnResultOccuredDelegate OnResultOccuredDelegate;                           // 0x02D0 (size: 0x10)
    void OnResultOccured(FNaviUiResult Result);
    FNaviUiOnFocusChangeDelegate OnFocusChangeDelegate;                               // 0x02E0 (size: 0x10)
    void OnFocusChange(bool HasFocus);
    class UNaviUi* Parent;                                                            // 0x02F0 (size: 0x8)
    TArray<class UNaviUi*> Children;                                                  // 0x02F8 (size: 0x10)
    FString internal_id;                                                              // 0x0308 (size: 0x10)
    bool internal_hasFocus;                                                           // 0x0318 (size: 0x1)
    class UNaviUi* internal_priorityChild;                                            // 0x0320 (size: 0x8)
    float timeOfLastMovement;                                                         // 0x0328 (size: 0x4)

    bool WantsAllInput();
    void StealFocus();
    void SetPriorityChild(class UNaviUi* nextPriorityChild);
    void SetNaviFocus(bool nowHasFocus);
    void SendTabShift(int32 tabDelta);
    void SendResult(FNaviUiResult Result);
    void SendMovement(FVector2D diff);
    void SendInput(ENaviUiIntent Key);
    void RotatePriorityChild(int32 Offset);
    void ResetToDefaultPriorityChild();
    void RepositionAnyTooltip();
    void RemoveChild(class UNaviUi* childMenu);
    void RemoveAllChildren();
    void OnSelfRemoved();
    void OnPriorityChildChanged(class UNaviUi* nowPriorityChild);
    void OnFocusChanged(bool nowHasFocus);
    void OnChildRemoved(class UNaviUi* lostChild);
    void OnChildAdded(class UNaviUi* newChild);
    bool IsRoot();
    bool IsHoveredByMouseOrController(class UWidget* Widget);
    bool IsEnabledWithinSearchDepth(class UWidget* searchRoot, int32 maxDepth);
    bool IsEmpty();
    void HideAnyTooltip();
    bool HasPriorityChild();
    bool HasParent();
    bool HasFocus();
    bool HasChildren();
    bool HandleTabShift(int32 tabDelta);
    ENaviResultHandleMethod HandleResult(FNaviUiResult Result);
    FString HandleInternalEvent(FName eventId, FString StringInput, int32 IntInput);
    ENaviHandleMethod HandleInput(ENaviUiIntent Key);
    class UNaviUi* GetPriorityChild();
    class UNaviUi* GetNextPriorityChild(int32 Offset);
    class UNaviUi* GetNaviParent();
    ENaviUiIntent GetIntentFromMovement(FVector2D diff);
    FString GetId();
    bool ForceTooltipShown(class UWidget* searchRoot, bool showTooltip, int32 searchDepth);
    void ForcePressButton(class UButton* buttonWidget);
    void ForceOpenVirtualKeyboardOnBox(class UEditableTextBox* EditableTextBox);
    void ForceOpenVirtualKeyboard(class UEditableText* EditableText);
    void ForceFocusCombobox(class UComboBoxString* ComboBox);
    class UWidget* FindFirstParentWithTooltip(class UWidget* searchRoot, int32 maxDepth);
    class UWidget* FindFirstParentOfClasses(class UWidget* searchRoot, TArray<class UClass*> candidateClasses, int32 maxDepth);
    TArray<class UWidget*> FindDecendentsOfClasses(class UWidget* searchRoot, TArray<class UClass*> candidateClasses, bool ignoreHidden);
    void DoStealFocus(class UNaviUi* originOfSteal);
    int32 CountChildren();
    void CleanupAfterVirtualKeyboard();
    void CleanupAfterCombobox();
    bool CanHaveFocus();
    bool AddFakeTooltipToViewport(class UWorld* World, class UWidget* tooltipParent, class UWidget* ToolTip);
    void AddChild(class UNaviUi* childMenu);
}; // Size: 0x340

class UNetMan : public UObject
{
    FNetManConfig Config;                                                             // 0x0028 (size: 0x28)
    FNetManState State;                                                               // 0x0050 (size: 0xA8)

    bool StartupSession(const class UObject* WorldContext, FNetManSessionPlan plan);
    bool StartSilentLogin(const class UObject* WorldContext);
    bool StartSearch(const class UObject* WorldContext, bool searchLan);
    bool StartLogin(const class UObject* WorldContext);
    bool ScheduleStartupSession(const class UObject* WorldContext, FNetManSessionPlan plan);
    bool ScheduleStartSearch(const class UObject* WorldContext, bool searchLan);
    bool ScheduleSilentLogin(const class UObject* WorldContext);
    bool ScheduleLogin(const class UObject* WorldContext);
    bool AttemptLoginSchedule(const class UObject* WorldContext);
}; // Size: 0x1C8

class UPlatformManager : public UObject
{
    FPlatformConfig Config;                                                           // 0x0028 (size: 0x8)
    FString versionLabel;                                                             // 0x0030 (size: 0x10)

    float TranslateAudoVolumeToNonLinear(float linearRatio);
    bool Switch_CheckControllers(int32& desiredCount);
    bool ReportRequiredPlayerCount(int32 playerCount);
    void PS4_SetupPlatformHooks();
    void OnSwitchModeChange(bool isBoosted);
    bool OnSwitchEnsureSaveAreaAvailable();
    bool OnSteamdeckEnsureAllInputsBound();
    void MarkUiOnlyRendering(bool isUiOnly);
    void MarkPerfMode_System(bool forceHighPerf);
    void MarkPerfMode_Preference(bool preferHighPerf);
    void MarkOnScreenMessagesEnabled(bool IsEnabled);
    void MarkDynamicResolutionEnabled(bool IsEnabled);
    void MarkDofEnabled(bool IsEnabled);
    void MarkDetailsOfNextSave(FString Category, FString Subtitle, int32 BufferSize);
    bool IsTextureOodleBroken(class UTexture2D* TextureAsset);
    int32 GetMaxPlatformSaveFileCount();
    int32 FindPlatformUserIndex();
    bool EnsureSaveAreaAvailable();
    bool DoFixTextureOodleBroken(class UTexture2D* TextureAsset);
    void DisableControllerMappings();
    void ConsiderIfMouseAllowed(class APlayerController* PlayerController);
    void ConsiderHdr();
    FString ApplyPlatformUserInputRules(FString userInput);
    void All_UpdateLocalOverrideControls();
}; // Size: 0x40

class UPlatformTuner : public UObject
{

    void ElideDebugSplineLines();
    void Apply();
}; // Size: 0x28

class UProgressWidget : public UUserWidget
{

    void SetProgress(float R);
    void SetDetails(FProgressWidgetDetails nd);
}; // Size: 0x2D0

class URandom : public UObject
{
    uint64 Seed;                                                                      // 0x0028 (size: 0x8)

    void SetSeed(uint64 NewSeed);
    FVector GetVector(float Length);
    uint64 GetUint64();
    uint32 GetUint32();
    float GetScaledFloat(float from, float To);
    double GetScaledDouble(double from, double To);
    float GetNormalDistributed();
    FVector2D GetGaussianPair();
    float GetFloatNonZero();
    float GetFloat();
    double GetDoubleNonZero();
    double GetDouble();
    float GetAngleRadian();
}; // Size: 0x30

class URandomEngine : public URandom
{
}; // Size: 0x30

class URandomSplitMix : public URandom
{
}; // Size: 0x38

class URandomXorshift : public URandom
{
}; // Size: 0x38

class URandomXorshiro : public URandom
{
    class URandomSplitMix* Initializer;                                               // 0x0030 (size: 0x8)

}; // Size: 0x58

class USpecialFlags : public UBlueprintFunctionLibrary
{

    void SetTrailerMode(bool IsTrailerMode);
    void SetGlobalControllerMode(bool isControllerNow);
    void SetDevelopmentModeOverride(bool forceOn);
    void ReportRestart();
    bool MightHaveUnwrappedImages();
    bool MarkRunningRestarts(bool doRestarts);
    bool IsWinGdk();
    bool IsTrailerMode();
    bool IsTempWipHidden();
    bool IsSteamdeck();
    bool IsSteam();
    bool IsStatsBasedAchievements();
    bool IsStartDialogAllowed();
    bool IsStandalone();
    bool IsSaveChunkingEnabled();
    bool IsRunningRestarts();
    bool IsRamLimitedPlatform();
    bool IsQuitAllowed();
    bool IsPressMode();
    bool IsPc();
    bool IsNvidia();
    bool IsMouseAllowed();
    bool IsModdingAllowed();
    bool IsMobile();
    bool IsMainMenuCameraStatic();
    bool IsMac();
    bool IsLowPerfPlatform();
    bool IsImagesWrapped();
    bool IsImageNeverWrapped(FString imageName);
    bool IsGpuStaleable();
    bool IsGog();
    bool IsGlobalControllerMode();
    bool IsGamepadDisabled();
    bool IsGameModded();
    bool IsEgs();
    bool IsEarlyLoginEnabled();
    bool IsEarlyAccessAllowed();
    bool IsDX11();
    bool IsDevelopmentMode();
    bool IsDemoMode();
    bool IsDebugAllowed();
    bool IsConsole();
    bool IsConfMode();
    bool IsCoatOfArmsLinearColor();
    bool IsCheatAllowed();
    bool IsBenchmarkAllowed();
    bool IsAMD();
    bool IsAchivementAllowed();
    bool IsAchievementsLoginOnly();
    bool IsAchievementsAllCaps();
    int32 GetTextInputLengthLimit();
    float GetGlobalVolumeRatio();
    float GetGlobalApplicationScale();
    TEnumAsByte<ETextureRenderTargetFormat> GetCoatOfArmsFormat();
    EPlatformCategory FindPlatformCategory();
    void ConsiderRamPressure();
    void ConsiderGpuHangFix();
    int32 ComputeConsoleDefaultResolutionScale();
    FString ComputeConsoleDefaultAA();
    void ApplyTextInputLimits(FString rawText, FString& cleanText, bool& atLengthLimit, int32 overridemaxlimit);
}; // Size: 0x28

class UStaticInputConfig : public UBlueprintFunctionLibrary
{

    FName Axis_Trigger_Rightward();
    FName Axis_RightAnalog_Up();
    FName Axis_RightAnalog_Right();
    FName Axis_LeftAnalog_Rightward();
    FName Axis_LeftAnalog_Forward();
    FName Action_YUp();
    FName Action_XLeft();
    FName Action_Trigger_Right();
    FName Action_Trigger_Left();
    FName Action_Start();
    FName Action_Shoulder_Right();
    FName Action_Shoulder_Left();
    FName Action_Select();
    FName Action_RightAnalogPress();
    FName Action_LeftAnalogPress();
    FName Action_Dpad_Up();
    FName Action_Dpad_Right();
    FName Action_Dpad_Left();
    FName Action_Dpad_Down();
    FName Action_B();
    FName Action_A();
}; // Size: 0x28

#endif
