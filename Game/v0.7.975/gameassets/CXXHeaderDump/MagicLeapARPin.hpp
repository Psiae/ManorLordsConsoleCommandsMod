#ifndef UE4SS_SDK_MagicLeapARPin_HPP
#define UE4SS_SDK_MagicLeapARPin_HPP

#include "MagicLeapARPin_enums.hpp"

struct FMagicLeapARPinObjectIdList
{
    TSet<FString> ObjectIdList;                                                       // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FMagicLeapARPinQuery
{
    TSet<EMagicLeapARPinType> Types;                                                  // 0x0000 (size: 0x50)
    int32 MaxResults;                                                                 // 0x0050 (size: 0x4)
    FVector TargetPoint;                                                              // 0x0054 (size: 0xC)
    float Radius;                                                                     // 0x0060 (size: 0x4)
    bool bSorted;                                                                     // 0x0064 (size: 0x1)

}; // Size: 0x68

struct FMagicLeapARPinState
{
    float Confidence;                                                                 // 0x0000 (size: 0x4)
    float ValidRadius;                                                                // 0x0004 (size: 0x4)
    float RotationError;                                                              // 0x0008 (size: 0x4)
    float TranslationError;                                                           // 0x000C (size: 0x4)
    EMagicLeapARPinType PinType;                                                      // 0x0010 (size: 0x1)

}; // Size: 0x14

class AMagicLeapARPinInfoActorBase : public AActor
{
    FGuid PinId;                                                                      // 0x0220 (size: 0x10)
    bool bVisibilityOverride;                                                         // 0x0230 (size: 0x1)

    void OnUpdateARPinState();
}; // Size: 0x238

class AMagicLeapARPinRenderer : public AActor
{
    bool bInfoActorsVisibilityOverride;                                               // 0x0220 (size: 0x1)
    TMap<class FGuid, class AMagicLeapARPinInfoActorBase*> AllInfoActors;             // 0x0228 (size: 0x50)
    TSubclassOf<class AMagicLeapARPinInfoActorBase> ClassToSpawn;                     // 0x0280 (size: 0x8)

    void SetVisibilityOverride(const bool InVisibilityOverride);
}; // Size: 0x288

class UMagicLeapARPinComponent : public USceneComponent
{
    FString ObjectUID;                                                                // 0x01F8 (size: 0x10)
    int32 UserIndex;                                                                  // 0x0208 (size: 0x4)
    EMagicLeapAutoPinType AutoPinType;                                                // 0x020C (size: 0x1)
    bool bShouldPinActor;                                                             // 0x020D (size: 0x1)
    TSubclassOf<class UMagicLeapARPinSaveGame> PinDataClass;                          // 0x0210 (size: 0x8)
    TSet<EMagicLeapARPinType> SearchPinTypes;                                         // 0x0218 (size: 0x50)
    class USphereComponent* SearchVolume;                                             // 0x0268 (size: 0x8)
    FMagicLeapARPinComponentOnPersistentEntityPinned OnPersistentEntityPinned;        // 0x0270 (size: 0x10)
    void PersistentEntityPinned(bool bRestoredOrSynced);
    FMagicLeapARPinComponentOnPersistentEntityPinLost OnPersistentEntityPinLost;      // 0x0280 (size: 0x10)
    void PersistentEntityPinLost();
    FMagicLeapARPinComponentOnPinDataLoadAttemptCompleted OnPinDataLoadAttemptCompleted; // 0x0290 (size: 0x10)
    void MagicLeapARPinDataLoadAttemptCompleted(bool bDataRestored);
    FGuid PinnedCFUID;                                                                // 0x02A0 (size: 0x10)
    class USceneComponent* PinnedSceneComponent;                                      // 0x02B0 (size: 0x8)
    class UMagicLeapARPinSaveGame* PinData;                                           // 0x02B8 (size: 0x8)

    void UnPin();
    class UMagicLeapARPinSaveGame* TryGetPinData(TSubclassOf<class UMagicLeapARPinSaveGame> InPinDataClass, bool& OutPinDataValid);
    bool PinToRestoredOrSyncedID();
    bool PinToID(const FGuid& PinId);
    void PinToBestFit();
    bool PinSceneComponent(class USceneComponent* ComponentToPin);
    bool PinRestoredOrSynced();
    bool PinActor(class AActor* ActorToPin);
    void PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced);
    void PersistentEntityPinLost__DelegateSignature();
    void MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature(bool bDataRestored);
    bool IsPinned();
    bool GetPinState(FMagicLeapARPinState& State);
    bool GetPinnedPinID(FGuid& PinId);
    class UMagicLeapARPinSaveGame* GetPinData(TSubclassOf<class UMagicLeapARPinSaveGame> PinDataClass);
    void AttemptPinDataRestorationAsync();
    bool AttemptPinDataRestoration();
}; // Size: 0x3B0

class UMagicLeapARPinContentBindings : public USaveGame
{
    TMap<class FGuid, class FMagicLeapARPinObjectIdList> AllContentBindings;          // 0x0028 (size: 0x50)

}; // Size: 0x78

class UMagicLeapARPinFunctionLibrary : public UBlueprintFunctionLibrary
{

    void UnBindToOnMagicLeapContentBindingFoundDelegate(const FUnBindToOnMagicLeapContentBindingFoundDelegateDelegate& Delegate);
    void UnBindToOnMagicLeapARPinUpdatedDelegate(const FUnBindToOnMagicLeapARPinUpdatedDelegateDelegate& Delegate);
    EMagicLeapPassableWorldError SetGlobalQueryFilter(const FMagicLeapARPinQuery& InGlobalFilter);
    void SetContentBindingSaveGameUserIndex(int32 UserIndex);
    EMagicLeapPassableWorldError QueryARPins(const FMagicLeapARPinQuery& Query, TArray<FGuid>& Pins);
    bool ParseStringToARPinId(FString PinIdString, FGuid& ARPinId);
    bool IsTrackerValid();
    EMagicLeapPassableWorldError GetNumAvailableARPins(int32& Count);
    EMagicLeapPassableWorldError GetGlobalQueryFilter(FMagicLeapARPinQuery& CurrentGlobalFilter);
    int32 GetContentBindingSaveGameUserIndex();
    EMagicLeapPassableWorldError GetClosestARPin(const FVector& SearchPoint, FGuid& PinId);
    EMagicLeapPassableWorldError GetAvailableARPins(int32 NumRequested, TArray<FGuid>& Pins);
    FString GetARPinStateToString(const FMagicLeapARPinState& State);
    EMagicLeapPassableWorldError GetARPinState(const FGuid& PinId, FMagicLeapARPinState& State);
    bool GetARPinPositionAndOrientation_TrackingSpace(const FGuid& PinId, FVector& Position, FRotator& Orientation, bool& PinFoundInEnvironment);
    bool GetARPinPositionAndOrientation(const FGuid& PinId, FVector& Position, FRotator& Orientation, bool& PinFoundInEnvironment);
    EMagicLeapPassableWorldError DestroyTracker();
    EMagicLeapPassableWorldError CreateTracker();
    void BindToOnMagicLeapContentBindingFoundDelegate(const FBindToOnMagicLeapContentBindingFoundDelegateDelegate& Delegate);
    void BindToOnMagicLeapARPinUpdatedDelegate(const FBindToOnMagicLeapARPinUpdatedDelegateDelegate& Delegate);
    FString ARPinIdToString(const FGuid& ARPinId);
}; // Size: 0x28

class UMagicLeapARPinSaveGame : public USaveGame
{
    FGuid PinnedID;                                                                   // 0x0028 (size: 0x10)
    FTransform ComponentWorldTransform;                                               // 0x0040 (size: 0x30)
    FTransform PinTransform;                                                          // 0x0070 (size: 0x30)
    bool bShouldPinActor;                                                             // 0x00A0 (size: 0x1)

}; // Size: 0xB0

class UMagicLeapARPinSettings : public UObject
{
    float UpdateCheckFrequency;                                                       // 0x0028 (size: 0x4)
    FMagicLeapARPinState OnUpdatedEventTriggerDelta;                                  // 0x002C (size: 0x14)

}; // Size: 0x40

#endif
