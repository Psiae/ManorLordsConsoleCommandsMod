#ifndef UE4SS_SDK_VertexAnimationManager_HPP
#define UE4SS_SDK_VertexAnimationManager_HPP

#include "VertexAnimationManager_enums.hpp"

struct FVAAnimNode_CopyPose : public FAnimNode_Base
{
    TWeakObjectPtr<class USkeletalMeshComponent> SkeletalMeshComponent;               // 0x0014 (size: 0x8)
    class UVARuntimeComponent* RuntimeComponent;                                      // 0x0020 (size: 0x8)
    class UVertexAnimationProfile* Profile;                                           // 0x0028 (size: 0x8)
    FName AnimationName;                                                              // 0x0030 (size: 0x8)
    FName SyncGroup;                                                                  // 0x0038 (size: 0x8)

}; // Size: 0x40

struct FVADebugBoneSettings
{
    TEnumAsByte<EVADebugSkeletonMode> Skeleton;                                       // 0x0000 (size: 0x1)
    float Scale;                                                                      // 0x0004 (size: 0x4)
    FColor Color;                                                                     // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FVAMaterialData
{
    float MaxBound;                                                                   // 0x0000 (size: 0x4)
    FVector4 AnimationIn;                                                             // 0x0010 (size: 0x20)
    FVector4 AnimationOut;                                                            // 0x0030 (size: 0x20)
    float TransitionTime;                                                             // 0x0050 (size: 0x4)
    float TransitionDuration;                                                         // 0x0054 (size: 0x4)

}; // Size: 0x60

struct FVANotifyEvent
{
    TEnumAsByte<ENotifyEventType> Type;                                               // 0x0000 (size: 0x1)
    FTimerHandle BeginTimer;                                                          // 0x0008 (size: 0x8)
    FTimerHandle EndTimer;                                                            // 0x0010 (size: 0x8)
    class UVANotifyHandler* NotifyHandler;                                            // 0x0018 (size: 0x8)
    class UAnimInstance* AnimInstance;                                                // 0x0020 (size: 0x8)
    FName FunctionName;                                                               // 0x0028 (size: 0x8)
    class UAnimNotify* AnimNotify;                                                    // 0x0030 (size: 0x8)
    class UAnimNotifyState* AnimNotifyState;                                          // 0x0038 (size: 0x8)

}; // Size: 0xA0

struct FVARuntimeRootMotion
{
}; // Size: 0xC0

struct FVAVariationData : public FTableRowBase
{
    FName GroupName;                                                                  // 0x0008 (size: 0x8)
    TSoftObjectPtr<USkeletalMesh> SkeletalMesh;                                       // 0x0010 (size: 0x28)
    TSoftObjectPtr<UStaticMesh> StaticMesh;                                           // 0x0038 (size: 0x28)
    TSoftObjectPtr<UTexture2D> BoneWeight;                                            // 0x0060 (size: 0x28)
    TSoftObjectPtr<UTexture2D> VertexOffset;                                          // 0x0088 (size: 0x28)
    TSoftObjectPtr<UTexture2D> VertexNormal;                                          // 0x00B0 (size: 0x28)
    TSoftObjectPtr<UTexture2D> Nanite;                                                // 0x00D8 (size: 0x28)
    FGuid Guid;                                                                       // 0x0100 (size: 0x10)

}; // Size: 0x110

struct FVertexAnimation
{
    bool bOverrideFrameRate;                                                          // 0x0000 (size: 0x1)
    float FrameRate;                                                                  // 0x0004 (size: 0x4)
    bool bOverrideFrames;                                                             // 0x0008 (size: 0x1)
    int32 Frames;                                                                     // 0x000C (size: 0x4)
    bool bUseRootMotion;                                                              // 0x0010 (size: 0x1)
    FVertexAnimationTransformSelection RootMotionAxis;                                // 0x0011 (size: 0x8)
    int32 FrameMaxIndex;                                                              // 0x001C (size: 0x4)
    int32 Offset;                                                                     // 0x0020 (size: 0x4)
    float Speed;                                                                      // 0x0024 (size: 0x4)
    float SequenceLength;                                                             // 0x0028 (size: 0x4)
    FName Name;                                                                       // 0x002C (size: 0x8)
    TArray<FVertexAnimationBoneFrames> Bones;                                         // 0x0038 (size: 0x10)
    TArray<FVertexAnimationPose> Poses;                                               // 0x0048 (size: 0x10)
    TArray<FAnimNotifyEvent> Notifications;                                           // 0x0058 (size: 0x10)
    TArray<FAnimSyncMarker> SyncMarker;                                               // 0x0068 (size: 0x10)
    TArray<FName> SyncMarkerNames;                                                    // 0x0078 (size: 0x10)
    bool bHasRootMotion;                                                              // 0x0088 (size: 0x1)
    TArray<FTransform> RootMotions;                                                   // 0x0090 (size: 0x10)

}; // Size: 0xA0

struct FVertexAnimationAxisSelection
{
    bool X;                                                                           // 0x0000 (size: 0x1)
    bool Y;                                                                           // 0x0001 (size: 0x1)
    bool Z;                                                                           // 0x0002 (size: 0x1)

}; // Size: 0x3

struct FVertexAnimationBone
{
    int32 Parent;                                                                     // 0x0000 (size: 0x4)
    int32 Index;                                                                      // 0x0004 (size: 0x4)
    FName Name;                                                                       // 0x0008 (size: 0x8)
    bool bIsSocket;                                                                   // 0x0010 (size: 0x1)
    FVector RefScale;                                                                 // 0x0018 (size: 0x18)

}; // Size: 0x30

struct FVertexAnimationBoneFrames
{
    TArray<FVertexAnimationTransform> Frame;                                          // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FVertexAnimationLOD
{
    float DistanceFrom;                                                               // 0x0020 (size: 0x4)
    float DistanceTo;                                                                 // 0x0024 (size: 0x4)
    float FrameRateFrom;                                                              // 0x0028 (size: 0x4)
    float FrameRateTo;                                                                // 0x002C (size: 0x4)

}; // Size: 0x30

struct FVertexAnimationMaterialRef
{
    TSoftObjectPtr<UMaterialInterface> Default;                                       // 0x0000 (size: 0x28)
    TSoftObjectPtr<UMaterialInterface> Instance;                                      // 0x0028 (size: 0x28)

}; // Size: 0x50

struct FVertexAnimationPose
{
    TArray<FTransform> LocalTransforms;                                               // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FVertexAnimationTransform
{
    FVector Location;                                                                 // 0x0000 (size: 0x18)
    FQuat Rotation;                                                                   // 0x0020 (size: 0x20)

}; // Size: 0x40

struct FVertexAnimationTransformSelection
{
    bool bUseLocation;                                                                // 0x0000 (size: 0x1)
    FVertexAnimationAxisSelection Location;                                           // 0x0001 (size: 0x3)
    bool bUseRotation;                                                                // 0x0004 (size: 0x1)
    FVertexAnimationAxisSelection Rotation;                                           // 0x0005 (size: 0x3)

}; // Size: 0x8

class IVANotifyInterface : public IInterface
{

    bool Received_VertexAnimationNotify(class USceneComponent* MeshComp);
}; // Size: 0x28

class IVANotifyStateInterface : public IInterface
{

    bool Received_VertexAnimationNotifyTick(class USceneComponent* MeshComp, float FrameDeltaTime);
    bool Received_VertexAnimationNotifyEnd(class USceneComponent* MeshComp);
    bool Received_VertexAnimationNotifyBegin(class USceneComponent* MeshComp, float TotalDuration);
}; // Size: 0x28

class UVAHISMController : public UVAISMControllerAbstract
{
    class UHierarchicalInstancedStaticMeshComponent* InstancedComponent;              // 0x0368 (size: 0x8)

    class UHierarchicalInstancedStaticMeshComponent* GetHierarchicalInstancedComponent();
}; // Size: 0x370

class UVAISMController : public UVAISMControllerAbstract
{
    class UInstancedStaticMeshComponent* InstancedComponent;                          // 0x0368 (size: 0x8)

}; // Size: 0x370

class UVAISMControllerAbstract : public USceneComponent
{
    FName RuntimeComponentName;                                                       // 0x0230 (size: 0x8)
    TWeakObjectPtr<class UVARuntimeComponent> RuntimeComponent;                       // 0x0238 (size: 0x8)
    FName VariationName;                                                              // 0x0240 (size: 0x8)
    class UVAInstancedManager* InstancedManager;                                      // 0x02A8 (size: 0x8)
    int32 InstanceIndex;                                                              // 0x02B0 (size: 0x4)
    FGuid Guid;                                                                       // 0x0324 (size: 0x10)
    int32 NumAdditionalCustomDataFloats;                                              // 0x0334 (size: 0x4)
    bool bBatchUpdateTransform;                                                       // 0x0338 (size: 0x1)
    bool bVelocity;                                                                   // 0x0339 (size: 0x1)
    int32 CullDistance;                                                               // 0x0348 (size: 0x4)
    float CullScale;                                                                  // 0x034C (size: 0x4)
    uint32 EntityTileHash;                                                            // 0x0350 (size: 0x4)
    TArray<float> DataBuffer;                                                         // 0x0358 (size: 0x10)

    void UpdateInstanceTransformDeferred(const FTransform& InTransform);
    void UpdateInstanceTransform(const FTransform& InTransform, bool bMarkRenderStateDirty);
    void StoreDataBuffer();
    void SetVariationByName(FName Variation);
    void SetRuntimeComponent(class UVARuntimeComponent* Component);
    bool SetRandomVariationByGroup(FName GroupName);
    void SetInstancedComponent(class UInstancedStaticMeshComponent* InComponent);
    void SetDataBuffer(const TArray<float>& InData);
    bool SetCustomDataValue(int32 CustomDataIndex, float CustomDataValue, bool bMarkRenderStateDirty);
    bool SetCustomData(const TArray<float>& InCustomData, bool bMarkRenderStateDirty);
    void RestoreDataBuffer();
    class UInstancedStaticMeshComponent* NewInstancedComponent();
    TArray<FName> GetVariationNames();
    FName GetVariationName();
    TArray<FName> GetRuntimeComponentNames();
    class UVARuntimeComponent* GetRuntimeComponent();
    class UInstancedStaticMeshComponent* GetInstancedComponent();
}; // Size: 0x370

class UVAInstancedManager : public UObject
{
    class UInstancedStaticMeshComponent* Component;                                   // 0x0028 (size: 0x8)
    TArray<class UVAISMControllerAbstract*> Controllers;                              // 0x0030 (size: 0x10)
    TArray<FTransform> Transforms;                                                    // 0x0040 (size: 0x10)
    TArray<FTransform> TransformsPrevious;                                            // 0x0050 (size: 0x10)
    TMap<uint32, UVAInstancedManager*> SpatialManagers;                               // 0x0060 (size: 0x50)

}; // Size: 0xF8

class UVAMovementComponent : public UActorComponent
{
    FName Agent;                                                                      // 0x00A0 (size: 0x8)
    TWeakObjectPtr<class ANavigationData> AgentNavData;                               // 0x00A8 (size: 0x8)
    FVector TargetLocation;                                                           // 0x00B0 (size: 0x18)
    float TargetDistance;                                                             // 0x00C8 (size: 0x4)
    bool bRotateToTarget;                                                             // 0x00CC (size: 0x1)
    bool bEventOnTargetReached;                                                       // 0x00CD (size: 0x1)
    float RotationSpeed;                                                              // 0x00D0 (size: 0x4)
    bool bXAxisOrientation;                                                           // 0x00D4 (size: 0x1)
    bool bTargetReached;                                                              // 0x00D5 (size: 0x1)
    bool bOnRootMotion;                                                               // 0x00D6 (size: 0x1)
    class UVARuntimeComponent* RuntimeComponent;                                      // 0x00D8 (size: 0x8)
    FVAMovementComponentOnTargetReached OnTargetReached;                              // 0x00E0 (size: 0x10)
    void OnTargetReachedSignature(float Distance);

    void SetTargetLocation(const FVector& Location);
    TArray<FName> GetSupportedAgentNames();
}; // Size: 0xF0

class UVANotifyHandler : public UObject
{

    class USceneComponent* GetOwningComponent();
}; // Size: 0x28

class UVANotifyState_TimedNiagaraEffect : public UAnimNotifyState_TimedNiagaraEffect
{
    ENCPoolMethod PoolMethod;                                                         // 0x0080 (size: 0x1)

}; // Size: 0x88

class UVANotify_PlayNiagaraEffect : public UAnimNotify_PlayNiagaraEffect
{
}; // Size: 0xE0

class UVARuntimeBPLibrary : public UBlueprintFunctionLibrary
{

    void UpdateAnimationBlueprint(class USkeletalMeshComponent* InComponent);
    void SetWorldTransform(class USceneComponent* InComponent, const FTransform& InTransform);
    FString RemovePrefix(const FString InName, const TArray<FString>& RemovalPrefixes);
    void RegisterTransformUpdated(class USceneComponent* InComponent);
    void RagDollStart(class USkeletalMeshComponent* SkeletalMeshComponent);
    void RagdollReset(class USkeletalMeshComponent* SkeletalMeshComponent, class USceneComponent* InSceneComponent);
    FString GetPrimaryGPUBrand();
    float GetDeltaTime();
    FString GetCPUBrand();
    float GetAverageMS();
    float GetAverageFPS();
}; // Size: 0x28

class UVARuntimeComponent : public UActorComponent
{
    FVARuntimeComponentOnRootMotion OnRootMotion;                                     // 0x00A0 (size: 0x10)
    void OnRootMotionSignature(FVector Location, FQuat Rotation);
    class UVANotifyHandler* NotifyHandler;                                            // 0x00C0 (size: 0x8)
    TArray<FVANotifyEvent> EventCollection;                                           // 0x00C8 (size: 0x10)
    class USceneComponent* OuterSceneComponent;                                       // 0x00D8 (size: 0x8)
    class USceneComponent* RootComponent;                                             // 0x00E0 (size: 0x8)
    FTimerHandle AnimationOnEndTimer;                                                 // 0x0410 (size: 0x8)
    FVARuntimeComponentOnAnimationEnd OnAnimationEnd;                                 // 0x0428 (size: 0x10)
    void OnAnimationEndSignature();
    class UVAWorldSubsystem* Subsystem;                                               // 0x0438 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMeshComponent;                              // 0x0440 (size: 0x8)
    class UVertexAnimationProfile* Profile;                                           // 0x0448 (size: 0x8)
    TSoftObjectPtr<UVertexAnimationProfile> ProfileAsset;                             // 0x0450 (size: 0x28)
    TSoftObjectPtr<USkeletalMesh> SkeletalMesh;                                       // 0x0478 (size: 0x28)
    TSubclassOf<class USkeletalMeshComponent> SkeletalMeshComponentClass;             // 0x04A0 (size: 0x8)
    TSubclassOf<class UAnimInstance> AnimClass;                                       // 0x04A8 (size: 0x8)
    TSubclassOf<class UVANotifyHandler> NotifyHandlerClass;                           // 0x04B0 (size: 0x8)
    bool bPlaying;                                                                    // 0x04B8 (size: 0x1)
    bool bDebugBones;                                                                 // 0x04B9 (size: 0x1)
    FVADebugBoneSettings BoneSettings;                                                // 0x04BC (size: 0xC)
    bool bFrameInterpolation;                                                         // 0x04C8 (size: 0x1)
    bool bAnimationTransition;                                                        // 0x04C9 (size: 0x1)
    float AnimationTransitionDuration;                                                // 0x04CC (size: 0x4)
    bool bNotifications;                                                              // 0x04D0 (size: 0x1)
    bool bUseSyncGroup;                                                               // 0x04D1 (size: 0x1)
    FName AnimationName;                                                              // 0x04D4 (size: 0x8)
    float AnimationPlayRate;                                                          // 0x04DC (size: 0x4)
    TEnumAsByte<EVARootMotionMode> RootMotionMode;                                    // 0x04E0 (size: 0x1)
    bool bUpdateTransforms;                                                           // 0x04E1 (size: 0x1)
    bool bSync;                                                                       // 0x04E2 (size: 0x1)
    float SyncFrameRate;                                                              // 0x04E4 (size: 0x4)
    bool bLODEnabled;                                                                 // 0x04E8 (size: 0x1)
    FVertexAnimationLOD LOD;                                                          // 0x04EC (size: 0x30)
    bool bPhysics;                                                                    // 0x051C (size: 0x1)
    TArray<class UShapeComponent*> PhysicsShapes;                                     // 0x0520 (size: 0x10)

    void UpdateAnimationBlueprint();
    void Stop();
    void SetTimePlayed(float TimePlayed);
    void SetSkeletalMeshOn();
    void SetRagdollOn();
    void SetRagdollOff();
    bool SetPositionToSyncMarker(FName SyncMarkerName);
    void SetPosition(float Position);
    void SetPlayRate(float Rate);
    void SetPhysicsEnabled(TEnumAsByte<ECollisionEnabled::Type> CollisionType);
    void SetPhysicsDisabled();
    bool SetAnimationIndex(int32 InAnimationIndex, bool Loop);
    bool SetAnimationByName(FName InAnimationName, bool Loop);
    void ResumeWorld();
    void Resume();
    void Reset();
    void Reregister();
    bool PlayAnimationOnce(FName InAnimationName, FLatentActionInfo LatentInfo);
    bool PlayAnimationByName(FName InAnimationName);
    bool PlayAnimation(int32 InAnimationIndex);
    void Play();
    void PauseWorld();
    void Pause(bool bUpdateNotify);
    bool IsPlaying();
    bool IsPaused();
    void IncreasePhysicsRelevance();
    TArray<FName> GetVariationNames();
    float GetTimePlayed();
    class USceneComponent* GetRootComponent();
    float GetPosition();
    float GetPlayRate();
    class USceneComponent* GetOuterSceneComponent();
    class UAnimInstance* GetAnimInstance();
    TArray<FName> GetAnimationNames();
    void DecreasePhysicsRelevance();
    void CopyToPoseableMeshComponent(class UPoseableMeshComponent* InComponent, TEnumAsByte<EBoneSpaces::Type> BoneSpace);
}; // Size: 0x530

class UVASMComponent : public UStaticMeshComponent
{
    FName RuntimeComponentName;                                                       // 0x05D8 (size: 0x8)
    TWeakObjectPtr<class UVARuntimeComponent> RuntimeComponent;                       // 0x05E0 (size: 0x8)
    FName VariationName;                                                              // 0x05E8 (size: 0x8)

    void SetVariationByName(FName Variation);
    void SetRuntimeComponentName(FName ComponentName);
    void SetRuntimeComponent(class UVARuntimeComponent* Component);
    TArray<FName> GetVariationNames();
    FName GetVariationName();
    TArray<FName> GetRuntimeComponentNames();
    class UVARuntimeComponent* GetRuntimeComponent();
}; // Size: 0x5F0

class UVAVariations : public UObject
{
    TArray<FName> Groups;                                                             // 0x0028 (size: 0x10)
    TMap<class FName, class FVAVariationData> variations;                             // 0x0038 (size: 0x50)

}; // Size: 0xD8

class UVAWorldSubsystem : public UWorldSubsystem
{
    TMap<class FGuid, class UVAInstancedManager*> InstancedManager;                   // 0x01B0 (size: 0x50)
    TArray<class UVARuntimeComponent*> SyncComponents;                                // 0x0200 (size: 0x10)

    void Resume();
    void Pause();
    void MarkResume();
    void MarkPause();
    void BatchUpdateInstancesTransforms(bool bForceUpdate);
}; // Size: 0x2B0

class UVertexAnimationAssetUserData : public UAssetUserData
{
    class UVertexAnimationProfile* Profile;                                           // 0x0028 (size: 0x8)

}; // Size: 0x30

class UVertexAnimationProfile : public UDataAsset
{
    TEnumAsByte<EVertexMode> Mode;                                                    // 0x00D1 (size: 0x1)
    TEnumAsByte<EVertexInfluencesMaxBones> InfluencesMaxBones;                        // 0x00D2 (size: 0x1)
    TEnumAsByte<EVertexInfluencesStorage> InfluencesStorage;                          // 0x00D3 (size: 0x1)
    int32 UVChannel;                                                                  // 0x00D4 (size: 0x4)
    TEnumAsByte<EVertexRotationMethode> RotationMethode;                              // 0x00D8 (size: 0x1)
    bool bMergeDuplicateVertices;                                                     // 0x00D9 (size: 0x1)
    TEnumAsByte<EVertexPrecision> Precision;                                          // 0x00DA (size: 0x1)
    int32 MaxWidth;                                                                   // 0x00DC (size: 0x4)
    int32 MaxHeight;                                                                  // 0x00E0 (size: 0x4)
    bool bOverrideFrameRate;                                                          // 0x00E4 (size: 0x1)
    float FrameRate;                                                                  // 0x00E8 (size: 0x4)
    bool bNotifications;                                                              // 0x00EC (size: 0x1)
    FRotator Rotation;                                                                // 0x00F0 (size: 0x18)
    bool bNaniteSupport;                                                              // 0x0108 (size: 0x1)
    uint8 bPreserveArea;                                                              // 0x0109 (size: 0x1)
    FName PositionPrecisionName;                                                      // 0x010C (size: 0x8)
    int32 PositionPrecision;                                                          // 0x0114 (size: 0x4)
    int32 KeepPercentTriangles;                                                       // 0x0118 (size: 0x4)
    TEnumAsByte<ENaniteUVChannel> NaniteUVChannel;                                    // 0x011C (size: 0x1)
    int32 NaniteUVChannelIndex;                                                       // 0x0120 (size: 0x4)
    int32 NaniteTextureSize;                                                          // 0x0124 (size: 0x4)
    TSoftObjectPtr<USkeletalMesh> SkeletalMesh;                                       // 0x0128 (size: 0x28)
    bool bOverrideStaticMesh;                                                         // 0x0150 (size: 0x1)
    TSoftObjectPtr<UStaticMesh> StaticMesh;                                           // 0x0158 (size: 0x28)
    bool bOverrideBonePosition;                                                       // 0x0180 (size: 0x1)
    FMeshBuildSettings BuildSettings;                                                 // 0x0188 (size: 0x48)
    TSoftObjectPtr<UTexture2D> BonePosition;                                          // 0x01D0 (size: 0x28)
    bool bOverrideBoneRotation;                                                       // 0x01F8 (size: 0x1)
    TSoftObjectPtr<UTexture2D> BoneRotation;                                          // 0x0200 (size: 0x28)
    bool bOverrideBoneWeight;                                                         // 0x0228 (size: 0x1)
    TSoftObjectPtr<UTexture2D> BoneWeight;                                            // 0x0230 (size: 0x28)
    bool bOverrideVertexOffset;                                                       // 0x0258 (size: 0x1)
    TSoftObjectPtr<UTexture2D> VertexOffset;                                          // 0x0260 (size: 0x28)
    bool bOverrideVertexNormal;                                                       // 0x0288 (size: 0x1)
    TSoftObjectPtr<UTexture2D> VertexNormal;                                          // 0x0290 (size: 0x28)
    bool bOverrideNanite;                                                             // 0x02B8 (size: 0x1)
    TSoftObjectPtr<UTexture2D> Nanite;                                                // 0x02C0 (size: 0x28)
    TArray<FVertexAnimation> Animations;                                              // 0x02E8 (size: 0x10)
    TMap<class FName, class FVertexAnimationMaterialRef> MaterialSlots;               // 0x02F8 (size: 0x50)
    class UVAVariations* variations;                                                  // 0x0348 (size: 0x8)
    bool bIsBaked;                                                                    // 0x0350 (size: 0x1)
    FIntPoint BoneTextureSize;                                                        // 0x0354 (size: 0x8)
    FIntPoint BoneWeightsTextureSize;                                                 // 0x035C (size: 0x8)
    int32 BoneColumnCount;                                                            // 0x0364 (size: 0x4)
    FIntPoint VertexTextureSize;                                                      // 0x0368 (size: 0x8)
    int32 MaxBones;                                                                   // 0x0370 (size: 0x4)
    float MaxBoneLength;                                                              // 0x0374 (size: 0x4)
    int32 MaxVertices;                                                                // 0x0378 (size: 0x4)
    int32 VerticesRowPerFrame;                                                        // 0x037C (size: 0x4)
    int32 TotalFrames;                                                                // 0x0380 (size: 0x4)
    float MaxValue;                                                                   // 0x0384 (size: 0x4)
    TArray<FVertexAnimationBone> Bones;                                               // 0x0388 (size: 0x10)
    bool bWedgeIndicesUnique;                                                         // 0x0398 (size: 0x1)
    FGuid Guid;                                                                       // 0x039C (size: 0x10)

    TArray<FName> GetOptionsPositionPrecision();
}; // Size: 0x3B0

#endif
