#ifndef UE4SS_SDK_LevelSequence_HPP
#define UE4SS_SDK_LevelSequence_HPP

struct FBoundActorProxy
{
}; // Size: 0x1

struct FLegacyLazyObjectPtrFragment
{
    FGuid LazyObjectId;                                                               // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLevelSequenceAnimSequenceLinkItem
{
    FGuid SkelTrackGuid;                                                              // 0x0000 (size: 0x10)
    FSoftObjectPath PathToAnimSequence;                                               // 0x0010 (size: 0x20)
    bool bExportTransforms;                                                           // 0x0030 (size: 0x1)
    bool bExportMorphTargets;                                                         // 0x0031 (size: 0x1)
    bool bExportAttributeCurves;                                                      // 0x0032 (size: 0x1)
    bool bExportMaterialCurves;                                                       // 0x0033 (size: 0x1)
    EAnimInterpolationType Interpolation;                                             // 0x0034 (size: 0x1)
    TEnumAsByte<ERichCurveInterpMode> CurveInterpolation;                             // 0x0035 (size: 0x1)
    bool bRecordInWorldSpace;                                                         // 0x0036 (size: 0x1)
    bool bEvaluateAllSkeletalMeshComponents;                                          // 0x0037 (size: 0x1)

}; // Size: 0x38

struct FLevelSequenceBindingReference
{
    FString PackageName;                                                              // 0x0000 (size: 0x10)
    FSoftObjectPath ExternalObjectPath;                                               // 0x0010 (size: 0x20)
    FString ObjectPath;                                                               // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FLevelSequenceBindingReferenceArray
{
    TArray<FLevelSequenceBindingReference> References;                                // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLevelSequenceBindingReferences
{
    TMap<class FGuid, class FLevelSequenceBindingReferenceArray> BindingIdToReferences; // 0x0000 (size: 0x50)
    TSet<FGuid> AnimSequenceInstances;                                                // 0x0050 (size: 0x50)
    TSet<FGuid> PostProcessInstances;                                                 // 0x00A0 (size: 0x50)

}; // Size: 0xF0

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
    TLazyObjectPtr<class UObject> ObjectOrOwner;                                      // 0x0000 (size: 0x18)
    FString ComponentName;                                                            // 0x0018 (size: 0x10)
    TWeakObjectPtr<class UObject> CachedComponent;                                    // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FLevelSequenceObjectReferenceMap
{
}; // Size: 0x50

struct FLevelSequencePlayerSnapshot
{
    FString RootName;                                                                 // 0x0000 (size: 0x10)
    FQualifiedFrameTime RootTime;                                                     // 0x0010 (size: 0x10)
    FQualifiedFrameTime SourceTime;                                                   // 0x0020 (size: 0x10)
    FString CurrentShotName;                                                          // 0x0030 (size: 0x10)
    FQualifiedFrameTime CurrentShotLocalTime;                                         // 0x0040 (size: 0x10)
    FQualifiedFrameTime CurrentShotSourceTime;                                        // 0x0050 (size: 0x10)
    FString SourceTimecode;                                                           // 0x0060 (size: 0x10)
    TSoftObjectPtr<UCameraComponent> CameraComponent;                                 // 0x0070 (size: 0x28)
    class ULevelSequence* ActiveShot;                                                 // 0x0098 (size: 0x8)
    FMovieSceneSequenceID ShotID;                                                     // 0x00A0 (size: 0x4)
    FString MasterName;                                                               // 0x00A8 (size: 0x10)
    FQualifiedFrameTime MasterTime;                                                   // 0x00B8 (size: 0x10)

}; // Size: 0xC8

struct FUpgradedLevelSequenceBindingReferences : public FMovieSceneBindingReferences
{
}; // Size: 0x10

class ALevelSequenceActor : public AActor
{
    FMovieSceneSequencePlaybackSettings PlaybackSettings;                             // 0x02A8 (size: 0x28)
    class ULevelSequencePlayer* SequencePlayer;                                       // 0x02D0 (size: 0x8)
    class ULevelSequence* LevelSequenceAsset;                                         // 0x02D8 (size: 0x8)
    FLevelSequenceCameraSettings CameraSettings;                                      // 0x02E0 (size: 0x2)
    class ULevelSequenceBurnInOptions* BurnInOptions;                                 // 0x02E8 (size: 0x8)
    class UMovieSceneBindingOverrides* BindingOverrides;                              // 0x02F0 (size: 0x8)
    uint8 bAutoPlay;                                                                  // 0x02F8 (size: 0x1)
    uint8 bOverrideInstanceData;                                                      // 0x02F8 (size: 0x1)
    uint8 bReplicatePlayback;                                                         // 0x02F8 (size: 0x1)
    class UObject* DefaultInstanceData;                                               // 0x0300 (size: 0x8)
    class ULevelSequenceBurnIn* BurnInInstance;                                       // 0x0308 (size: 0x8)
    bool bShowBurnin;                                                                 // 0x0310 (size: 0x1)
    FWorldPartitionResolveData WorldPartitionResolveData;                             // 0x0314 (size: 0x20)

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
    void HideBurnin();
    class ULevelSequencePlayer* GetSequencePlayer();
    class ULevelSequence* GetSequence();
    TArray<FMovieSceneObjectBindingID> FindNamedBindings(FName Tag);
    FMovieSceneObjectBindingID FindNamedBinding(FName Tag);
    void AddBindingByTag(FName BindingTag, class AActor* Actor, bool bAllowBindingsFromAsset);
    void AddBinding(FMovieSceneObjectBindingID Binding, class AActor* Actor, bool bAllowBindingsFromAsset);
}; // Size: 0x338

class ALevelSequenceMediaController : public AActor
{
    class ALevelSequenceActor* Sequence;                                              // 0x0298 (size: 0x8)
    class UMediaComponent* MediaComponent;                                            // 0x02A0 (size: 0x8)
    float ServerStartTimeSeconds;                                                     // 0x02A8 (size: 0x4)

    void SynchronizeToServer(float DesyncThresholdSeconds);
    void Play();
    void OnRep_ServerStartTimeSeconds();
    class ALevelSequenceActor* GetSequence();
    class UMediaComponent* GetMediaComponent();
}; // Size: 0x2B8

class AReplicatedLevelSequenceActor : public ALevelSequenceActor
{
}; // Size: 0x338

class UAnimSequenceLevelSequenceLink : public UAssetUserData
{
    FGuid SkelTrackGuid;                                                              // 0x0028 (size: 0x10)
    FSoftObjectPath PathToLevelSequence;                                              // 0x0038 (size: 0x20)

}; // Size: 0x58

class UDefaultLevelSequenceInstanceData : public UObject
{
    class AActor* TransformOriginActor;                                               // 0x0030 (size: 0x8)
    FTransform TransformOrigin;                                                       // 0x0040 (size: 0x60)

}; // Size: 0xA0

class ULegacyLevelSequenceDirectorBlueprint : public UBlueprint
{
}; // Size: 0xA8

class ULevelSequence : public UMovieSceneSequence
{
    class UMovieScene* MovieScene;                                                    // 0x0070 (size: 0x8)
    FUpgradedLevelSequenceBindingReferences BindingReferences;                        // 0x0078 (size: 0x10)
    UClass* DirectorClass;                                                            // 0x0088 (size: 0x8)
    TArray<class UAssetUserData*> AssetUserData;                                      // 0x0090 (size: 0x10)

    void RemoveMetaDataByClass(UClass* InClass);
    class UObject* FindOrAddMetaDataByClass(UClass* InClass);
    class UObject* FindMetaDataByClass(UClass* InClass);
    class UObject* CopyMetaData(class UObject* InMetaData);
}; // Size: 0xA0

class ULevelSequenceAnimSequenceLink : public UAssetUserData
{
    TArray<FLevelSequenceAnimSequenceLinkItem> AnimSequenceLinks;                     // 0x0028 (size: 0x10)

}; // Size: 0x38

class ULevelSequenceBurnIn : public UUserWidget
{
    FLevelSequencePlayerSnapshot FrameInformation;                                    // 0x02E0 (size: 0xC8)
    class ALevelSequenceActor* LevelSequenceActor;                                    // 0x03A8 (size: 0x8)

    void SetSettings(class UObject* InSettings);
    TSubclassOf<class ULevelSequenceBurnInInitSettings> GetSettingsClass();
}; // Size: 0x3B0

class ULevelSequenceBurnInInitSettings : public UObject
{
}; // Size: 0x28

class ULevelSequenceBurnInOptions : public UObject
{
    bool bUseBurnIn;                                                                  // 0x0028 (size: 0x1)
    FSoftClassPath BurnInClass;                                                       // 0x0030 (size: 0x20)
    class ULevelSequenceBurnInInitSettings* Settings;                                 // 0x0050 (size: 0x8)

    void SetBurnIn(FSoftClassPath InBurnInClass);
}; // Size: 0x58

class ULevelSequenceDirector : public UObject
{
    int32 SubSequenceID;                                                              // 0x0028 (size: 0x4)
    TWeakObjectPtr<class UMovieSceneEntitySystemLinker> WeakLinker;                   // 0x002C (size: 0x8)
    uint16 InstanceId;                                                                // 0x0034 (size: 0x2)
    uint16 InstanceSerial;                                                            // 0x0036 (size: 0x2)
    class ULevelSequencePlayer* Player;                                               // 0x0038 (size: 0x8)
    int32 MovieScenePlayerIndex;                                                      // 0x0040 (size: 0x4)

    void OnCreated();
    class UMovieSceneSequence* GetSequence();
    FQualifiedFrameTime GetRootSequenceTime();
    FQualifiedFrameTime GetMasterSequenceTime();
    FQualifiedFrameTime GetCurrentTime();
    TArray<class UObject*> GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding);
    class UObject* GetBoundObject(FMovieSceneObjectBindingID ObjectBinding);
    TArray<class AActor*> GetBoundActors(FMovieSceneObjectBindingID ObjectBinding);
    class AActor* GetBoundActor(FMovieSceneObjectBindingID ObjectBinding);
}; // Size: 0x48

class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
    FLevelSequencePlayerOnCameraCut OnCameraCut;                                      // 0x0468 (size: 0x10)
    void OnLevelSequencePlayerCameraCutEvent(class UCameraComponent* CameraComponent);

    class UCameraComponent* GetActiveCameraComponent();
    class ULevelSequencePlayer* CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings, class ALevelSequenceActor*& OutActor);
}; // Size: 0x598

class ULevelSequenceProjectSettings : public UDeveloperSettings
{
    bool bDefaultLockEngineToDisplayRate;                                             // 0x0038 (size: 0x1)
    FString DefaultDisplayRate;                                                       // 0x0040 (size: 0x10)
    FString DefaultTickResolution;                                                    // 0x0050 (size: 0x10)
    EUpdateClockSource DefaultClockSource;                                            // 0x0060 (size: 0x1)

}; // Size: 0x68

#endif
