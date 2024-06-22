#ifndef UE4SS_SDK_LevelSequence_HPP
#define UE4SS_SDK_LevelSequence_HPP

struct FBoundActorProxy
{
}; // Size: 0x1

struct FLevelSequenceAnimSequenceLinkItem
{
    FGuid SkelTrackGuid;                                                              // 0x0000 (size: 0x10)
    FSoftObjectPath PathToAnimSequence;                                               // 0x0010 (size: 0x18)
    bool bExportTransforms;                                                           // 0x0028 (size: 0x1)
    bool bExportCurves;                                                               // 0x0029 (size: 0x1)
    bool bRecordInWorldSpace;                                                         // 0x002A (size: 0x1)

}; // Size: 0x30

struct FLevelSequenceBindingReference
{
    FString PackageName;                                                              // 0x0000 (size: 0x10)
    FSoftObjectPath ExternalObjectPath;                                               // 0x0010 (size: 0x18)
    FString ObjectPath;                                                               // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FLevelSequenceBindingReferenceArray
{
    TArray<FLevelSequenceBindingReference> References;                                // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLevelSequenceBindingReferences
{
    TMap<class FGuid, class FLevelSequenceBindingReferenceArray> BindingIdToReferences; // 0x0000 (size: 0x50)
    TSet<FGuid> AnimSequenceInstances;                                                // 0x0050 (size: 0x50)

}; // Size: 0xA0

struct FLevelSequenceCameraSettings
{
    bool bOverrideAspectRatioAxisConstraint;                                          // 0x0000 (size: 0x1)
    TEnumAsByte<EAspectRatioAxisConstraint> AspectRatioAxisConstraint;                // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FLevelSequenceLegacyObjectReference
{
}; // Size: 0x20

struct FLevelSequenceObject
{
    TLazyObjectPtr<class UObject> ObjectOrOwner;                                      // 0x0000 (size: 0x1C)
    FString ComponentName;                                                            // 0x0020 (size: 0x10)
    TWeakObjectPtr<class UObject> CachedComponent;                                    // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FLevelSequenceObjectReferenceMap
{
}; // Size: 0x50

struct FLevelSequencePlayerSnapshot
{
    FString MasterName;                                                               // 0x0000 (size: 0x10)
    FQualifiedFrameTime MasterTime;                                                   // 0x0010 (size: 0x10)
    FQualifiedFrameTime SourceTime;                                                   // 0x0020 (size: 0x10)
    FString CurrentShotName;                                                          // 0x0030 (size: 0x10)
    FQualifiedFrameTime CurrentShotLocalTime;                                         // 0x0040 (size: 0x10)
    FQualifiedFrameTime CurrentShotSourceTime;                                        // 0x0050 (size: 0x10)
    FString SourceTimecode;                                                           // 0x0060 (size: 0x10)
    TSoftObjectPtr<UCameraComponent> CameraComponent;                                 // 0x0070 (size: 0x28)
    FLevelSequenceSnapshotSettings Settings;                                          // 0x0098 (size: 0xC)
    class ULevelSequence* ActiveShot;                                                 // 0x00A8 (size: 0x8)
    FMovieSceneSequenceID ShotID;                                                     // 0x00B0 (size: 0x4)

}; // Size: 0xB8

struct FLevelSequenceSnapshotSettings
{
    uint8 ZeroPadAmount;                                                              // 0x0000 (size: 0x1)
    FFrameRate FrameRate;                                                             // 0x0004 (size: 0x8)

}; // Size: 0xC

class ALevelSequenceActor : public AActor
{
    FMovieSceneSequencePlaybackSettings PlaybackSettings;                             // 0x0238 (size: 0x14)
    class ULevelSequencePlayer* SequencePlayer;                                       // 0x0250 (size: 0x8)
    FSoftObjectPath LevelSequence;                                                    // 0x0258 (size: 0x18)
    FLevelSequenceCameraSettings CameraSettings;                                      // 0x0270 (size: 0x2)
    class ULevelSequenceBurnInOptions* BurnInOptions;                                 // 0x0278 (size: 0x8)
    class UMovieSceneBindingOverrides* BindingOverrides;                              // 0x0280 (size: 0x8)
    uint8 bAutoPlay;                                                                  // 0x0288 (size: 0x1)
    uint8 bOverrideInstanceData;                                                      // 0x0288 (size: 0x1)
    uint8 bReplicatePlayback;                                                         // 0x0288 (size: 0x1)
    class UObject* DefaultInstanceData;                                               // 0x0290 (size: 0x8)
    class ULevelSequenceBurnIn* BurnInInstance;                                       // 0x0298 (size: 0x8)
    bool bShowBurnin;                                                                 // 0x02A0 (size: 0x1)

    void ShowBurnin();
    void SetSequence(class ULevelSequence* InSequence);
    void SetReplicatePlayback(bool ReplicatePlayback);
    void SetBindingByTag(FName BindingTag, const TArray<class AActor*>& Actors, bool bAllowBindingsFromAsset);
    void SetBinding(FMovieSceneObjectBindingID Binding, const TArray<class AActor*>& Actors, bool bAllowBindingsFromAsset);
    void ResetBindings();
    void ResetBinding(FMovieSceneObjectBindingID Binding);
    void RemoveBindingByTag(FName Tag, class AActor* Actor);
    void RemoveBinding(FMovieSceneObjectBindingID Binding, class AActor* Actor);
    void OnLevelSequenceLoaded__DelegateSignature();
    class ULevelSequence* LoadSequence();
    void HideBurnin();
    class ULevelSequencePlayer* GetSequencePlayer();
    class ULevelSequence* GetSequence();
    TArray<FMovieSceneObjectBindingID> FindNamedBindings(FName Tag);
    FMovieSceneObjectBindingID FindNamedBinding(FName Tag);
    void AddBindingByTag(FName BindingTag, class AActor* Actor, bool bAllowBindingsFromAsset);
    void AddBinding(FMovieSceneObjectBindingID Binding, class AActor* Actor, bool bAllowBindingsFromAsset);
}; // Size: 0x2A8

class ALevelSequenceMediaController : public AActor
{
    class ALevelSequenceActor* Sequence;                                              // 0x0228 (size: 0x8)
    class UMediaComponent* MediaComponent;                                            // 0x0230 (size: 0x8)
    float ServerStartTimeSeconds;                                                     // 0x0238 (size: 0x4)

    void SynchronizeToServer(float DesyncThresholdSeconds);
    void Play();
    void OnRep_ServerStartTimeSeconds();
    class ALevelSequenceActor* GetSequence();
    class UMediaComponent* GetMediaComponent();
}; // Size: 0x248

class ILevelSequenceMetaData : public IInterface
{
}; // Size: 0x28

class UAnimSequenceLevelSequenceLink : public UAssetUserData
{
    FGuid SkelTrackGuid;                                                              // 0x0028 (size: 0x10)
    FSoftObjectPath PathToLevelSequence;                                              // 0x0038 (size: 0x18)

}; // Size: 0x50

class UDefaultLevelSequenceInstanceData : public UObject
{
    class AActor* TransformOriginActor;                                               // 0x0030 (size: 0x8)
    FTransform TransformOrigin;                                                       // 0x0040 (size: 0x30)

}; // Size: 0x70

class ULegacyLevelSequenceDirectorBlueprint : public UBlueprint
{
}; // Size: 0xA0

class ULevelSequence : public UMovieSceneSequence
{
    class UMovieScene* MovieScene;                                                    // 0x0068 (size: 0x8)
    FLevelSequenceObjectReferenceMap ObjectReferences;                                // 0x0070 (size: 0x50)
    FLevelSequenceBindingReferences BindingReferences;                                // 0x00C0 (size: 0xA0)
    TMap<class FString, class FLevelSequenceObject> PossessedObjects;                 // 0x0160 (size: 0x50)
    UClass* DirectorClass;                                                            // 0x01B0 (size: 0x8)
    TArray<class UAssetUserData*> AssetUserData;                                      // 0x01B8 (size: 0x10)

    void RemoveMetaDataByClass(UClass* InClass);
    class UObject* FindOrAddMetaDataByClass(UClass* InClass);
    class UObject* FindMetaDataByClass(UClass* InClass);
    class UObject* CopyMetaData(class UObject* InMetaData);
}; // Size: 0x1C8

class ULevelSequenceAnimSequenceLink : public UAssetUserData
{
    TArray<FLevelSequenceAnimSequenceLinkItem> AnimSequenceLinks;                     // 0x0028 (size: 0x10)

}; // Size: 0x38

class ULevelSequenceBurnIn : public UUserWidget
{
    FLevelSequencePlayerSnapshot FrameInformation;                                    // 0x0260 (size: 0xB8)
    class ALevelSequenceActor* LevelSequenceActor;                                    // 0x0318 (size: 0x8)

    void SetSettings(class UObject* InSettings);
    TSubclassOf<class ULevelSequenceBurnInInitSettings> GetSettingsClass();
}; // Size: 0x320

class ULevelSequenceBurnInInitSettings : public UObject
{
}; // Size: 0x28

class ULevelSequenceBurnInOptions : public UObject
{
    bool bUseBurnIn;                                                                  // 0x0028 (size: 0x1)
    FSoftClassPath BurnInClass;                                                       // 0x0030 (size: 0x18)
    class ULevelSequenceBurnInInitSettings* Settings;                                 // 0x0048 (size: 0x8)

    void SetBurnIn(FSoftClassPath InBurnInClass);
}; // Size: 0x50

class ULevelSequenceDirector : public UObject
{
    class ULevelSequencePlayer* Player;                                               // 0x0028 (size: 0x8)
    int32 SubSequenceID;                                                              // 0x0030 (size: 0x4)
    int32 MovieScenePlayerIndex;                                                      // 0x0034 (size: 0x4)

    void OnCreated();
    class UMovieSceneSequence* GetSequence();
    TArray<class UObject*> GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding);
    class UObject* GetBoundObject(FMovieSceneObjectBindingID ObjectBinding);
    TArray<class AActor*> GetBoundActors(FMovieSceneObjectBindingID ObjectBinding);
    class AActor* GetBoundActor(FMovieSceneObjectBindingID ObjectBinding);
}; // Size: 0x38

class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
    FLevelSequencePlayerOnCameraCut OnCameraCut;                                      // 0x04E8 (size: 0x10)
    void OnLevelSequencePlayerCameraCutEvent(class UCameraComponent* CameraComponent);

    class UCameraComponent* GetActiveCameraComponent();
    class ULevelSequencePlayer* CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings, class ALevelSequenceActor*& OutActor);
}; // Size: 0x600

class ULevelSequenceProjectSettings : public UDeveloperSettings
{
    bool bDefaultLockEngineToDisplayRate;                                             // 0x0038 (size: 0x1)
    FString DefaultDisplayRate;                                                       // 0x0040 (size: 0x10)
    FString DefaultTickResolution;                                                    // 0x0050 (size: 0x10)
    EUpdateClockSource DefaultClockSource;                                            // 0x0060 (size: 0x1)

}; // Size: 0x68

#endif
