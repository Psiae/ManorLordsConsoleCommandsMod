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
    FString payload;                                                                  // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FNaviFormItemPlan
{
    ENaviFormType Type;                                                               // 0x0000 (size: 0x1)
    FString ID;                                                                       // 0x0008 (size: 0x10)
    TArray<FString> options;                                                          // 0x0018 (size: 0x10)
    FString DefaultValue;                                                             // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FNaviFormPlan
{
    TArray<FNaviFormItemPlan> Items;                                                  // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FNaviGridConfig
{
    bool invertVert;                                                                  // 0x0000 (size: 0x1)
    bool invertHorz;                                                                  // 0x0001 (size: 0x1)
    bool ignoreHistory;                                                               // 0x0002 (size: 0x1)

}; // Size: 0x3

struct FNaviGridState
{
    TMap<class FVector, class UNaviUi*> Items;                                        // 0x0000 (size: 0x50)
    TMap<class UNaviUi*, class FVector> itemToCell;                                   // 0x0050 (size: 0x50)
    FVector preferedCell;                                                             // 0x00A0 (size: 0xC)

}; // Size: 0xB0

struct FNaviList
{
    int32 instId;                                                                     // 0x0000 (size: 0x4)
    FString titleStringKey;                                                           // 0x0008 (size: 0x10)
    TArray<FNaviList_Item> Items;                                                     // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FNaviList_Item
{
    FString titleStringKey;                                                           // 0x0000 (size: 0x10)
    FString payload;                                                                  // 0x0010 (size: 0x10)
    bool IsActive;                                                                    // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FNaviUiResult
{
    class UNaviUi* Origin;                                                            // 0x0000 (size: 0x8)
    FString payload;                                                                  // 0x0008 (size: 0x10)
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
    FString hostName;                                                                 // 0x0000 (size: 0x10)
    FString mapName;                                                                  // 0x0010 (size: 0x10)
    FString address;                                                                  // 0x0020 (size: 0x10)
    float ping;                                                                       // 0x0030 (size: 0x4)

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
    FNetManSearch Search;                                                             // 0x0060 (size: 0x30)
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
    FString payload;                                                                  // 0x0028 (size: 0x10)

}; // Size: 0x38

class ALandscapeHeightExtractor : public AActor
{
}; // Size: 0x220

class APoissonDiskSamplerTest : public AActor
{
    float Radius;                                                                     // 0x0220 (size: 0x4)
    int32 SampleCount;                                                                // 0x0224 (size: 0x4)
    float Randomness;                                                                 // 0x0228 (size: 0x4)
    int32 ExpansionSamples;                                                           // 0x022C (size: 0x4)
    class UStaticMesh* Mesh;                                                          // 0x0230 (size: 0x8)
    class UInstancedStaticMeshComponent* InstancedMeshes;                             // 0x0238 (size: 0x8)

    void RunSampler();
}; // Size: 0x240

class UCreditsCompute : public UBlueprintFunctionLibrary
{

    FCreditsDetails GetCredits(FString rawCredits);
}; // Size: 0x28

class UMetaMetric : public UObject
{
    FMetaMetricRunState State;                                                        // 0x0028 (size: 0xA0)

    void GiveAchievement(const class UObject* WorldContext, FName AchievementID);
}; // Size: 0xC8

class UNaviForm : public UNaviUi
{

    void SetFormPlan(FNaviFormPlan plan);
}; // Size: 0x2C0

class UNaviFormItem : public UNaviUi
{
    FString ID;                                                                       // 0x02C0 (size: 0x10)

    void SetFormPlan(FNaviFormItemPlan plan);
    void SendFormItemChange(FString Value);
    void DisplayFromPlan(FNaviFormItemPlan plan);
}; // Size: 0x2D0

class UNaviFormItem_NoFocus : public UNaviFormItem
{
}; // Size: 0x2D0

class UNaviGrid : public UNaviUi
{
    FNaviGridState gridState;                                                         // 0x02C0 (size: 0xB0)
    FNaviGridConfig gridConfig;                                                       // 0x0370 (size: 0x3)

    bool SetPriorityGridChild(class UNaviUi* Child);
    class UNaviUi* RemoveGridChild(FVector Cell);
    void RemoveAllGridChildren();
    TArray<class UNaviUi*> ListGridMembers();
    TArray<FVector> ListFilledCells();
    bool IntegrateSubGrid(class UNaviSubGrid* subGrid);
    FVector FindNearestCell(FVector Start, FVector SearchDir);
    FVector FindCurrentCell();
    int32 ComputeMaxSearchDist();
    bool AttemptNavigation(ENaviUiIntent intent);
    void AddGridChild(FVector Cell, class UNaviUi* newChild);
}; // Size: 0x378

class UNaviSubGrid : public UNaviUi
{
    class UNaviGrid* hostGrid;                                                        // 0x02C0 (size: 0x8)

    void IntegrateWithHost(class UNaviGrid* parentGrid);
}; // Size: 0x2C8

class UNaviUi : public UUserWidget
{
    FNaviUiOnResultOccuredDelegate OnResultOccuredDelegate;                           // 0x0260 (size: 0x10)
    void OnResultOccured(FNaviUiResult Result);
    FNaviUiOnFocusChangeDelegate OnFocusChangeDelegate;                               // 0x0270 (size: 0x10)
    void OnFocusChange(bool HasFocus);
    class UNaviUi* Parent;                                                            // 0x0280 (size: 0x8)
    TArray<class UNaviUi*> Children;                                                  // 0x0288 (size: 0x10)
    FString internal_id;                                                              // 0x0298 (size: 0x10)
    bool internal_hasFocus;                                                           // 0x02A8 (size: 0x1)
    class UNaviUi* internal_priorityChild;                                            // 0x02B0 (size: 0x8)
    float timeOfLastMovement;                                                         // 0x02B8 (size: 0x4)

    void StealFocus();
    void SetPriorityChild(class UNaviUi* nextPriorityChild);
    void SetNaviFocus(bool nowHasFocus);
    void SendResult(FNaviUiResult Result);
    void SendMovement(FVector2D diff);
    void SendInput(ENaviUiIntent Key);
    void RotatePriorityChild(int32 Offset);
    void ResetToDefaultPriorityChild();
    void RemoveChild(class UNaviUi* childMenu);
    void RemoveAllChildren();
    void OnSelfRemoved();
    void OnPriorityChildChanged(class UNaviUi* nowPriorityChild);
    void OnFocusChanged(bool nowHasFocus);
    void OnChildRemoved(class UNaviUi* lostChild);
    void OnChildAdded(class UNaviUi* newChild);
    bool IsRoot();
    bool IsEmpty();
    bool HasPriorityChild();
    bool HasParent();
    bool HasFocus();
    bool HasChildren();
    ENaviResultHandleMethod HandleResult(FNaviUiResult Result);
    ENaviHandleMethod HandleInput(ENaviUiIntent Key);
    class UNaviUi* GetPriorityChild();
    class UNaviUi* GetNextPriorityChild(int32 Offset);
    class UNaviUi* GetNaviParent();
    ENaviUiIntent GetIntentFromMovement(FVector2D diff);
    FString GetId();
    void DoStealFocus(class UNaviUi* originOfSteal);
    int32 CountChildren();
    bool CanHaveFocus();
    void AddChild(class UNaviUi* childMenu);
}; // Size: 0x2C0

class UNetMan : public UObject
{
    FNetManConfig config;                                                             // 0x0028 (size: 0x28)
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
    FPlatformConfig config;                                                           // 0x0028 (size: 0x8)
    FString versionLabel;                                                             // 0x0030 (size: 0x10)

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
    void MarkCategoryOfNextSave(FString Category, FString Subtitle);
    bool EnsureSaveAreaAvailable();
    void DisableControllerMappings();
    void ConsiderHdr();
    void All_UpdateLocalOverrideControls();
}; // Size: 0x40

class UProgressWidget : public UUserWidget
{

    void SetProgress(float R);
    void SetDetails(FProgressWidgetDetails nd);
}; // Size: 0x260

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

    void SetDevelopmentModeOverride(bool forceOn);
    void ReportRestart();
    bool MarkRunningRestarts(bool doRestarts);
    bool IsWinGdk();
    bool IsSteamdeck();
    bool IsSteam();
    bool IsStatsBasedAchievements();
    bool IsStandalone();
    bool IsSaveChunkingEnabled();
    bool IsRunningRestarts();
    bool IsQuitAllowed();
    bool IsPressMode();
    bool IsPc();
    bool IsNvidia();
    bool IsMouseAllowed();
    bool IsModdingAllowed();
    bool IsMobile();
    bool IsMac();
    bool IsLowPerfPlatform();
    bool IsGog();
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
    bool IsCheatAllowed();
    bool IsBenchmarkAllowed();
    bool IsAMD();
    bool IsAchivementAllowed();
    bool IsAchievementsLoginOnly();
    bool IsAchievementsAllCaps();
    float GetGlobalVolumeRatio();
    float GetGlobalApplicationScale();
    EPlatformCategory FindPlatformCategory();
}; // Size: 0x28

#endif
