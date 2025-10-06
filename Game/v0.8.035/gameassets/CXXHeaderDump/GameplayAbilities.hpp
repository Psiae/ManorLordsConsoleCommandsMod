#ifndef UE4SS_SDK_GameplayAbilities_HPP
#define UE4SS_SDK_GameplayAbilities_HPP

#include "GameplayAbilities_enums.hpp"

struct FAbilityEndedData
{
    class UGameplayAbility* AbilityThatEnded;                                         // 0x0000 (size: 0x8)
    FGameplayAbilitySpecHandle AbilitySpecHandle;                                     // 0x0008 (size: 0x4)
    bool bReplicateEndAbility;                                                        // 0x000C (size: 0x1)
    bool bWasCancelled;                                                               // 0x000D (size: 0x1)

}; // Size: 0x10

struct FAbilityTaskDebugMessage
{
    class UGameplayTask* FromTask;                                                    // 0x0000 (size: 0x8)
    FString Message;                                                                  // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FAbilityTriggerData
{
    FGameplayTag TriggerTag;                                                          // 0x0000 (size: 0x8)
    TEnumAsByte<EGameplayAbilityTriggerSource::Type> TriggerSource;                   // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FActiveGameplayCue : public FFastArraySerializerItem
{
    FGameplayTag GameplayCueTag;                                                      // 0x000C (size: 0x8)
    FPredictionKey PredictionKey;                                                     // 0x0014 (size: 0x10)
    FGameplayCueParameters Parameters;                                                // 0x0028 (size: 0xD8)
    bool bPredictivelyRemoved;                                                        // 0x0100 (size: 0x1)

}; // Size: 0x108

struct FActiveGameplayCueContainer : public FFastArraySerializer
{
    TArray<FActiveGameplayCue> GameplayCues;                                          // 0x0108 (size: 0x10)
    class UAbilitySystemComponent* Owner;                                             // 0x0120 (size: 0x8)

}; // Size: 0x128

struct FActiveGameplayEffect : public FFastArraySerializerItem
{
    FGameplayEffectSpec Spec;                                                         // 0x0018 (size: 0x298)
    FPredictionKey PredictionKey;                                                     // 0x02B0 (size: 0x10)
    TArray<FGameplayAbilitySpecHandle> GrantedAbilityHandles;                         // 0x02C0 (size: 0x10)
    float StartServerWorldTime;                                                       // 0x02D0 (size: 0x4)
    float CachedStartServerWorldTime;                                                 // 0x02D4 (size: 0x4)
    float StartWorldTime;                                                             // 0x02D8 (size: 0x4)
    bool bIsInhibited;                                                                // 0x02DC (size: 0x1)

}; // Size: 0x360

struct FActiveGameplayEffectHandle
{
    int32 Handle;                                                                     // 0x0000 (size: 0x4)
    bool bPassedFiltersAndWasExecuted;                                                // 0x0004 (size: 0x1)

}; // Size: 0x8

struct FActiveGameplayEffectQuery
{
}; // Size: 0x88

struct FActiveGameplayEffectsContainer : public FFastArraySerializer
{
    TArray<FActiveGameplayEffect> GameplayEffects_Internal;                           // 0x0130 (size: 0x10)

}; // Size: 0x300

struct FAttributeBasedFloat
{
    FScalableFloat Coefficient;                                                       // 0x0000 (size: 0x28)
    FScalableFloat PreMultiplyAdditiveValue;                                          // 0x0028 (size: 0x28)
    FScalableFloat PostMultiplyAdditiveValue;                                         // 0x0050 (size: 0x28)
    FGameplayEffectAttributeCaptureDefinition BackingAttribute;                       // 0x0078 (size: 0x40)
    FCurveTableRowHandle AttributeCurve;                                              // 0x00B8 (size: 0x10)
    EAttributeBasedFloatCalculationType AttributeCalculationType;                     // 0x00C8 (size: 0x1)
    EGameplayModEvaluationChannel FinalChannel;                                       // 0x00C9 (size: 0x1)
    FGameplayTagContainer SourceTagFilter;                                            // 0x00D0 (size: 0x20)
    FGameplayTagContainer TargetTagFilter;                                            // 0x00F0 (size: 0x20)

}; // Size: 0x110

struct FAttributeDefaults
{
    TSubclassOf<class UAttributeSet> Attributes;                                      // 0x0000 (size: 0x8)
    class UDataTable* DefaultStartingTable;                                           // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FAttributeMetaData : public FTableRowBase
{
    float BaseValue;                                                                  // 0x0008 (size: 0x4)
    float MinValue;                                                                   // 0x000C (size: 0x4)
    float MaxValue;                                                                   // 0x0010 (size: 0x4)
    FString DerivedAttributeInfo;                                                     // 0x0018 (size: 0x10)
    bool bCanStack;                                                                   // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FConditionalGameplayEffect
{
    TSubclassOf<class UGameplayEffect> EffectClass;                                   // 0x0000 (size: 0x8)
    FGameplayTagContainer RequiredSourceTags;                                         // 0x0008 (size: 0x20)

}; // Size: 0x28

struct FCustomCalculationBasedFloat
{
    TSubclassOf<class UGameplayModMagnitudeCalculation> CalculationClassMagnitude;    // 0x0000 (size: 0x8)
    FScalableFloat Coefficient;                                                       // 0x0008 (size: 0x28)
    FScalableFloat PreMultiplyAdditiveValue;                                          // 0x0030 (size: 0x28)
    FScalableFloat PostMultiplyAdditiveValue;                                         // 0x0058 (size: 0x28)
    FCurveTableRowHandle FinalLookupCurve;                                            // 0x0080 (size: 0x10)

}; // Size: 0x90

struct FGameplayAbilityActivationInfo
{
    TEnumAsByte<EGameplayAbilityActivationMode::Type> ActivationMode;                 // 0x0000 (size: 0x1)
    uint8 bCanBeEndedByOtherInstance;                                                 // 0x0001 (size: 0x1)
    FPredictionKey PredictionKeyWhenActivated;                                        // 0x0004 (size: 0x10)

}; // Size: 0x14

struct FGameplayAbilityActorInfo
{
    TWeakObjectPtr<class AActor> OwnerActor;                                          // 0x0008 (size: 0x8)
    TWeakObjectPtr<class AActor> AvatarActor;                                         // 0x0010 (size: 0x8)
    TWeakObjectPtr<class APlayerController> PlayerController;                         // 0x0018 (size: 0x8)
    TWeakObjectPtr<class UAbilitySystemComponent> AbilitySystemComponent;             // 0x0020 (size: 0x8)
    TWeakObjectPtr<class USkeletalMeshComponent> SkeletalMeshComponent;               // 0x0028 (size: 0x8)
    TWeakObjectPtr<class UAnimInstance> AnimInstance;                                 // 0x0030 (size: 0x8)
    TWeakObjectPtr<class UMovementComponent> MovementComponent;                       // 0x0038 (size: 0x8)
    FName AffectedAnimInstanceTag;                                                    // 0x0040 (size: 0x8)

}; // Size: 0x48

struct FGameplayAbilityBindInfo
{
    TEnumAsByte<EGameplayAbilityInputBinds::Type> Command;                            // 0x0000 (size: 0x1)
    TSubclassOf<class UGameplayAbility> GameplayAbilityClass;                         // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FGameplayAbilityLocalAnimMontage
{
    class UAnimMontage* AnimMontage;                                                  // 0x0000 (size: 0x8)
    uint8 PlayInstanceId;                                                             // 0x0008 (size: 0x1)
    FPredictionKey PredictionKey;                                                     // 0x000C (size: 0x10)
    TWeakObjectPtr<class UGameplayAbility> AnimatingAbility;                          // 0x001C (size: 0x8)

}; // Size: 0x28

struct FGameplayAbilityRepAnimMontage
{
    class UAnimSequenceBase* Animation;                                               // 0x0000 (size: 0x8)
    FName SlotName;                                                                   // 0x0008 (size: 0x8)
    float PlayRate;                                                                   // 0x0010 (size: 0x4)
    float position;                                                                   // 0x0014 (size: 0x4)
    float BlendTime;                                                                  // 0x0018 (size: 0x4)
    float BlendOutTime;                                                               // 0x001C (size: 0x4)
    uint8 NextSectionID;                                                              // 0x0020 (size: 0x1)
    uint8 PlayInstanceId;                                                             // 0x0021 (size: 0x1)
    uint8 bRepPosition;                                                               // 0x0022 (size: 0x1)
    uint8 IsStopped;                                                                  // 0x0022 (size: 0x1)
    uint8 SkipPositionCorrection;                                                     // 0x0022 (size: 0x1)
    uint8 bSkipPlayRate;                                                              // 0x0022 (size: 0x1)
    FPredictionKey PredictionKey;                                                     // 0x0024 (size: 0x10)
    uint8 SectionIdToPlay;                                                            // 0x0034 (size: 0x1)

}; // Size: 0x38

struct FGameplayAbilityRepAnimMontageNetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x10

struct FGameplayAbilitySpec : public FFastArraySerializerItem
{
    FGameplayAbilitySpecHandle Handle;                                                // 0x000C (size: 0x4)
    class UGameplayAbility* Ability;                                                  // 0x0010 (size: 0x8)
    int32 Level;                                                                      // 0x0018 (size: 0x4)
    int32 InputID;                                                                    // 0x001C (size: 0x4)
    TWeakObjectPtr<class UObject> SourceObject;                                       // 0x0020 (size: 0x8)
    uint8 ActiveCount;                                                                // 0x0028 (size: 0x1)
    uint8 InputPressed;                                                               // 0x0029 (size: 0x1)
    uint8 RemoveAfterActivation;                                                      // 0x0029 (size: 0x1)
    uint8 PendingRemove;                                                              // 0x0029 (size: 0x1)
    uint8 bActivateOnce;                                                              // 0x0029 (size: 0x1)
    FGameplayAbilityActivationInfo ActivationInfo;                                    // 0x0040 (size: 0x14)
    FGameplayTagContainer DynamicAbilityTags;                                         // 0x0058 (size: 0x20)
    TArray<class UGameplayAbility*> NonReplicatedInstances;                           // 0x0078 (size: 0x10)
    TArray<class UGameplayAbility*> ReplicatedInstances;                              // 0x0088 (size: 0x10)
    FActiveGameplayEffectHandle GameplayEffectHandle;                                 // 0x0098 (size: 0x8)

}; // Size: 0xF0

struct FGameplayAbilitySpecConfig
{
    TSubclassOf<class UGameplayAbility> Ability;                                      // 0x0000 (size: 0x8)
    FScalableFloat LevelScalableFloat;                                                // 0x0008 (size: 0x28)
    int32 InputID;                                                                    // 0x0030 (size: 0x4)
    EGameplayEffectGrantedAbilityRemovePolicy RemovalPolicy;                          // 0x0034 (size: 0x1)

}; // Size: 0x38

struct FGameplayAbilitySpecContainer : public FFastArraySerializer
{
    TArray<FGameplayAbilitySpec> Items;                                               // 0x0108 (size: 0x10)
    class UAbilitySystemComponent* Owner;                                             // 0x0118 (size: 0x8)

}; // Size: 0x120

struct FGameplayAbilitySpecDef
{
    TSubclassOf<class UGameplayAbility> Ability;                                      // 0x0000 (size: 0x8)
    FScalableFloat LevelScalableFloat;                                                // 0x0008 (size: 0x28)
    int32 InputID;                                                                    // 0x0030 (size: 0x4)
    EGameplayEffectGrantedAbilityRemovePolicy RemovalPolicy;                          // 0x0034 (size: 0x1)
    TWeakObjectPtr<class UObject> SourceObject;                                       // 0x0038 (size: 0x8)
    FGameplayAbilitySpecHandle AssignedHandle;                                        // 0x0090 (size: 0x4)

}; // Size: 0x98

struct FGameplayAbilitySpecHandle
{
    int32 Handle;                                                                     // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FGameplayAbilitySpecHandleAndPredictionKey
{
    FGameplayAbilitySpecHandle AbilityHandle;                                         // 0x0000 (size: 0x4)
    int32 PredictionKeyAtCreation;                                                    // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FGameplayAbilityTargetData
{
}; // Size: 0x8

struct FGameplayAbilityTargetDataHandle
{
}; // Size: 0x28

struct FGameplayAbilityTargetData_ActorArray : public FGameplayAbilityTargetData
{
    FGameplayAbilityTargetingLocationInfo SourceLocation;                             // 0x0010 (size: 0x90)
    TArray<TWeakObjectPtr<AActor>> TargetActorArray;                                  // 0x00A0 (size: 0x10)

}; // Size: 0xB0

struct FGameplayAbilityTargetData_LocationInfo : public FGameplayAbilityTargetData
{
    FGameplayAbilityTargetingLocationInfo SourceLocation;                             // 0x0010 (size: 0x90)
    FGameplayAbilityTargetingLocationInfo TargetLocation;                             // 0x00A0 (size: 0x90)

}; // Size: 0x130

struct FGameplayAbilityTargetData_SingleTargetHit : public FGameplayAbilityTargetData
{
    FHitResult HitResult;                                                             // 0x0008 (size: 0x100)
    bool bHitReplaced;                                                                // 0x0108 (size: 0x1)

}; // Size: 0x110

struct FGameplayAbilityTargetingLocationInfo
{
    class AActor* SourceActor;                                                        // 0x0008 (size: 0x8)
    class UMeshComponent* SourceComponent;                                            // 0x0010 (size: 0x8)
    class UGameplayAbility* SourceAbility;                                            // 0x0018 (size: 0x8)
    FTransform LiteralTransform;                                                      // 0x0020 (size: 0x60)
    FName SourceSocketName;                                                           // 0x0080 (size: 0x8)
    TEnumAsByte<EGameplayAbilityTargetingLocationType::Type> LocationType;            // 0x0088 (size: 0x1)

}; // Size: 0x90

struct FGameplayAbilityTargetingLocationInfoNetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x10

struct FGameplayAttribute
{
    FString AttributeName;                                                            // 0x0000 (size: 0x10)
    TFieldPath<FProperty> Attribute;                                                  // 0x0010 (size: 0x20)
    class UStruct* AttributeOwner;                                                    // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FGameplayAttributeData
{
    float BaseValue;                                                                  // 0x0008 (size: 0x4)
    float CurrentValue;                                                               // 0x000C (size: 0x4)

}; // Size: 0x10

struct FGameplayCueNotifyActorArray
{
    TArray<class AGameplayCueNotify_Actor*> Actors;                                   // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FGameplayCueNotifyData
{
    FGameplayTag GameplayCueTag;                                                      // 0x0000 (size: 0x8)
    FSoftObjectPath GameplayCueNotifyObj;                                             // 0x0008 (size: 0x20)
    UClass* LoadedGameplayCueClass;                                                   // 0x0028 (size: 0x8)

}; // Size: 0x38

struct FGameplayCueNotify_BurstEffects
{
    TArray<FGameplayCueNotify_ParticleInfo> BurstParticles;                           // 0x0000 (size: 0x10)
    TArray<FGameplayCueNotify_SoundInfo> BurstSounds;                                 // 0x0010 (size: 0x10)
    FGameplayCueNotify_CameraShakeInfo BurstCameraShake;                              // 0x0020 (size: 0x98)
    FGameplayCueNotify_CameraLensEffectInfo BurstCameraLensEffect;                    // 0x00B8 (size: 0x90)
    FGameplayCueNotify_ForceFeedbackInfo BurstForceFeedback;                          // 0x0148 (size: 0x98)
    FGameplayCueNotify_InputDevicePropertyInfo BurstDevicePropertyEffect;             // 0x01E0 (size: 0x10)
    FGameplayCueNotify_DecalInfo BurstDecal;                                          // 0x01F0 (size: 0xA8)

}; // Size: 0x298

struct FGameplayCueNotify_CameraLensEffectInfo
{
    FGameplayCueNotify_SpawnCondition SpawnConditionOverride;                         // 0x0000 (size: 0x38)
    FGameplayCueNotify_PlacementInfo PlacementInfoOverride;                           // 0x0038 (size: 0x40)
    TSubclassOf<class AActor> CameraLensEffect;                                       // 0x0078 (size: 0x8)
    uint8 bOverrideSpawnCondition;                                                    // 0x0080 (size: 0x1)
    uint8 bOverridePlacementInfo;                                                     // 0x0080 (size: 0x1)
    uint8 bPlayInWorld;                                                               // 0x0080 (size: 0x1)
    float WorldInnerRadius;                                                           // 0x0084 (size: 0x4)
    float WorldOuterRadius;                                                           // 0x0088 (size: 0x4)

}; // Size: 0x90

struct FGameplayCueNotify_CameraShakeInfo
{
    FGameplayCueNotify_SpawnCondition SpawnConditionOverride;                         // 0x0000 (size: 0x38)
    FGameplayCueNotify_PlacementInfo PlacementInfoOverride;                           // 0x0038 (size: 0x40)
    TSubclassOf<class UCameraShakeBase> CameraShake;                                  // 0x0078 (size: 0x8)
    float ShakeScale;                                                                 // 0x0080 (size: 0x4)
    EGameplayCueNotify_EffectPlaySpace PlaySpace;                                     // 0x0084 (size: 0x1)
    uint8 bOverrideSpawnCondition;                                                    // 0x0088 (size: 0x1)
    uint8 bOverridePlacementInfo;                                                     // 0x0088 (size: 0x1)
    uint8 bPlayInWorld;                                                               // 0x0088 (size: 0x1)
    float WorldInnerRadius;                                                           // 0x008C (size: 0x4)
    float WorldOuterRadius;                                                           // 0x0090 (size: 0x4)
    float WorldFalloffExponent;                                                       // 0x0094 (size: 0x4)

}; // Size: 0x98

struct FGameplayCueNotify_DecalInfo
{
    FGameplayCueNotify_SpawnCondition SpawnConditionOverride;                         // 0x0000 (size: 0x38)
    FGameplayCueNotify_PlacementInfo PlacementInfoOverride;                           // 0x0038 (size: 0x40)
    class UMaterialInterface* DecalMaterial;                                          // 0x0078 (size: 0x8)
    FVector DecalSize;                                                                // 0x0080 (size: 0x18)
    uint8 bOverrideSpawnCondition;                                                    // 0x0098 (size: 0x1)
    uint8 bOverridePlacementInfo;                                                     // 0x0098 (size: 0x1)
    uint8 bOverrideFadeOut;                                                           // 0x0098 (size: 0x1)
    float FadeOutStartDelay;                                                          // 0x009C (size: 0x4)
    float FadeOutDuration;                                                            // 0x00A0 (size: 0x4)

}; // Size: 0xA8

struct FGameplayCueNotify_ForceFeedbackInfo
{
    FGameplayCueNotify_SpawnCondition SpawnConditionOverride;                         // 0x0000 (size: 0x38)
    FGameplayCueNotify_PlacementInfo PlacementInfoOverride;                           // 0x0038 (size: 0x40)
    class UForceFeedbackEffect* ForceFeedbackEffect;                                  // 0x0078 (size: 0x8)
    FName ForceFeedbackTag;                                                           // 0x0080 (size: 0x8)
    uint8 bIsLooping;                                                                 // 0x0088 (size: 0x1)
    uint8 bOverrideSpawnCondition;                                                    // 0x0088 (size: 0x1)
    uint8 bOverridePlacementInfo;                                                     // 0x0088 (size: 0x1)
    uint8 bPlayInWorld;                                                               // 0x0088 (size: 0x1)
    float WorldIntensity;                                                             // 0x008C (size: 0x4)
    class UForceFeedbackAttenuation* WorldAttenuation;                                // 0x0090 (size: 0x8)

}; // Size: 0x98

struct FGameplayCueNotify_InputDevicePropertyInfo
{
    TArray<class TSubclassOf<UInputDeviceProperty>> DeviceProperties;                 // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FGameplayCueNotify_LoopingEffects
{
    TArray<FGameplayCueNotify_ParticleInfo> LoopingParticles;                         // 0x0000 (size: 0x10)
    TArray<FGameplayCueNotify_SoundInfo> LoopingSounds;                               // 0x0010 (size: 0x10)
    FGameplayCueNotify_CameraShakeInfo LoopingCameraShake;                            // 0x0020 (size: 0x98)
    FGameplayCueNotify_CameraLensEffectInfo LoopingCameraLensEffect;                  // 0x00B8 (size: 0x90)
    FGameplayCueNotify_ForceFeedbackInfo LoopingForceFeedback;                        // 0x0148 (size: 0x98)
    FGameplayCueNotify_InputDevicePropertyInfo LoopingInputDevicePropertyEffect;      // 0x01E0 (size: 0x10)

}; // Size: 0x1F0

struct FGameplayCueNotify_ParticleInfo
{
    FGameplayCueNotify_SpawnCondition SpawnConditionOverride;                         // 0x0000 (size: 0x38)
    FGameplayCueNotify_PlacementInfo PlacementInfoOverride;                           // 0x0038 (size: 0x40)
    class UNiagaraSystem* NiagaraSystem;                                              // 0x0078 (size: 0x8)
    uint8 bOverrideSpawnCondition;                                                    // 0x0080 (size: 0x1)
    uint8 bOverridePlacementInfo;                                                     // 0x0080 (size: 0x1)
    uint8 bCastShadow;                                                                // 0x0080 (size: 0x1)

}; // Size: 0x88

struct FGameplayCueNotify_PlacementInfo
{
    FName SocketName;                                                                 // 0x0000 (size: 0x8)
    EGameplayCueNotify_AttachPolicy AttachPolicy;                                     // 0x0008 (size: 0x1)
    EAttachmentRule AttachmentRule;                                                   // 0x0009 (size: 0x1)
    uint8 bOverrideRotation;                                                          // 0x000C (size: 0x1)
    uint8 bOverrideScale;                                                             // 0x000C (size: 0x1)
    FRotator RotationOverride;                                                        // 0x0010 (size: 0x18)
    FVector ScaleOverride;                                                            // 0x0028 (size: 0x18)

}; // Size: 0x40

struct FGameplayCueNotify_SoundInfo
{
    FGameplayCueNotify_SpawnCondition SpawnConditionOverride;                         // 0x0000 (size: 0x38)
    FGameplayCueNotify_PlacementInfo PlacementInfoOverride;                           // 0x0038 (size: 0x40)
    class USoundBase* Sound;                                                          // 0x0078 (size: 0x8)
    class USoundBase* SoundCue;                                                       // 0x0080 (size: 0x8)
    float LoopingFadeOutDuration;                                                     // 0x0088 (size: 0x4)
    float LoopingFadeVolumeLevel;                                                     // 0x008C (size: 0x4)
    FGameplayCueNotify_SoundParameterInterfaceInfo SoundParameterInterfaceInfo;       // 0x0090 (size: 0x8)
    uint8 bOverrideSpawnCondition;                                                    // 0x0098 (size: 0x1)
    uint8 bOverridePlacementInfo;                                                     // 0x0098 (size: 0x1)
    uint8 bUseSoundParameterInterface;                                                // 0x0098 (size: 0x1)

}; // Size: 0xA0

struct FGameplayCueNotify_SoundParameterInterfaceInfo
{
    FName StopTriggerName;                                                            // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FGameplayCueNotify_SpawnCondition
{
    EGameplayCueNotify_LocallyControlledSource LocallyControlledSource;               // 0x0000 (size: 0x1)
    EGameplayCueNotify_LocallyControlledPolicy LocallyControlledPolicy;               // 0x0001 (size: 0x1)
    float ChanceToPlay;                                                               // 0x0004 (size: 0x4)
    TArray<TEnumAsByte<EPhysicalSurface>> AllowedSurfaceTypes;                        // 0x0008 (size: 0x10)
    TArray<TEnumAsByte<EPhysicalSurface>> RejectedSurfaceTypes;                       // 0x0020 (size: 0x10)

}; // Size: 0x38

struct FGameplayCueNotify_SpawnResult
{
    TArray<class UFXSystemComponent*> FxSystemComponents;                             // 0x0000 (size: 0x10)
    TArray<class UAudioComponent*> AudioComponents;                                   // 0x0010 (size: 0x10)
    TArray<class UCameraShakeBase*> CameraShakes;                                     // 0x0020 (size: 0x10)
    TArray<TScriptInterface<ICameraLensEffectInterface>> CameraLensEffects;           // 0x0030 (size: 0x10)
    class UForceFeedbackComponent* ForceFeedbackComponent;                            // 0x0040 (size: 0x8)
    class APlayerController* ForceFeedbackTargetPC;                                   // 0x0048 (size: 0x8)
    class UDecalComponent* DecalComponent;                                            // 0x0050 (size: 0x8)

}; // Size: 0x58

struct FGameplayCueObjectLibrary
{
    TArray<FString> Paths;                                                            // 0x0000 (size: 0x10)
    class UObjectLibrary* ActorObjectLibrary;                                         // 0x0030 (size: 0x8)
    class UObjectLibrary* StaticObjectLibrary;                                        // 0x0038 (size: 0x8)
    class UGameplayCueSet* CueSet;                                                    // 0x0040 (size: 0x8)
    bool bShouldSyncScan;                                                             // 0x004C (size: 0x1)
    bool bShouldAsyncLoad;                                                            // 0x004D (size: 0x1)
    bool bShouldSyncLoad;                                                             // 0x004E (size: 0x1)
    bool bHasBeenInitialized;                                                         // 0x004F (size: 0x1)

}; // Size: 0x50

struct FGameplayCueParameters
{
    float NormalizedMagnitude;                                                        // 0x0000 (size: 0x4)
    float RawMagnitude;                                                               // 0x0004 (size: 0x4)
    FGameplayEffectContextHandle EffectContext;                                       // 0x0008 (size: 0x18)
    FGameplayTag MatchedTagName;                                                      // 0x0020 (size: 0x8)
    FGameplayTag OriginalTag;                                                         // 0x0028 (size: 0x8)
    FGameplayTagContainer AggregatedSourceTags;                                       // 0x0030 (size: 0x20)
    FGameplayTagContainer AggregatedTargetTags;                                       // 0x0050 (size: 0x20)
    FVector_NetQuantize10 Location;                                                   // 0x0070 (size: 0x18)
    FVector_NetQuantizeNormal Normal;                                                 // 0x0088 (size: 0x18)
    TWeakObjectPtr<class AActor> Instigator;                                          // 0x00A0 (size: 0x8)
    TWeakObjectPtr<class AActor> EffectCauser;                                        // 0x00A8 (size: 0x8)
    TWeakObjectPtr<class UObject> SourceObject;                                       // 0x00B0 (size: 0x8)
    TWeakObjectPtr<class UPhysicalMaterial> PhysicalMaterial;                         // 0x00B8 (size: 0x8)
    int32 GameplayEffectLevel;                                                        // 0x00C0 (size: 0x4)
    int32 AbilityLevel;                                                               // 0x00C4 (size: 0x4)
    TWeakObjectPtr<class USceneComponent> TargetAttachComponent;                      // 0x00C8 (size: 0x8)
    bool bReplicateLocationWhenUsingMinimalRepProxy;                                  // 0x00D0 (size: 0x1)

}; // Size: 0xD8

struct FGameplayCuePendingExecute
{
    FPredictionKey PredictionKey;                                                     // 0x0018 (size: 0x10)
    EGameplayCuePayloadType PayloadType;                                              // 0x0028 (size: 0x1)
    class UAbilitySystemComponent* OwningComponent;                                   // 0x0030 (size: 0x8)
    FGameplayEffectSpecForRPC FromSpec;                                               // 0x0038 (size: 0x78)
    FGameplayCueParameters CueParameters;                                             // 0x00B0 (size: 0xD8)

}; // Size: 0x188

struct FGameplayCueTag
{
    FGameplayTag GameplayCueTag;                                                      // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FGameplayCueTranslationLink
{
    class UGameplayCueTranslator* RulesCDO;                                           // 0x0000 (size: 0x8)

}; // Size: 0x18

struct FGameplayCueTranslationManager
{
    TArray<FGameplayCueTranslatorNode> TranslationLUT;                                // 0x0000 (size: 0x10)
    TMap<class FName, class FGameplayCueTranslatorNodeIndex> TranslationNameToIndexMap; // 0x0010 (size: 0x50)
    class UGameplayTagsManager* TagManager;                                           // 0x0060 (size: 0x8)

}; // Size: 0x80

struct FGameplayCueTranslatorNode
{
    TArray<FGameplayCueTranslationLink> links;                                        // 0x0000 (size: 0x10)
    FGameplayCueTranslatorNodeIndex CachedIndex;                                      // 0x0010 (size: 0x4)
    FGameplayTag CachedGameplayTag;                                                   // 0x0014 (size: 0x8)
    FName CachedGameplayTagName;                                                      // 0x001C (size: 0x8)

}; // Size: 0x78

struct FGameplayCueTranslatorNodeIndex
{
    int32 Index;                                                                      // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FGameplayEffectAttributeCaptureDefinition
{
    FGameplayAttribute AttributeToCapture;                                            // 0x0000 (size: 0x38)
    EGameplayEffectAttributeCaptureSource AttributeSource;                            // 0x0038 (size: 0x1)
    bool bSnapshot;                                                                   // 0x0039 (size: 0x1)

}; // Size: 0x40

struct FGameplayEffectAttributeCaptureSpec
{
    FGameplayEffectAttributeCaptureDefinition BackingDefinition;                      // 0x0000 (size: 0x40)

}; // Size: 0x50

struct FGameplayEffectAttributeCaptureSpecContainer
{
    TArray<FGameplayEffectAttributeCaptureSpec> SourceAttributes;                     // 0x0000 (size: 0x10)
    TArray<FGameplayEffectAttributeCaptureSpec> TargetAttributes;                     // 0x0010 (size: 0x10)
    bool bHasNonSnapshottedAttributes;                                                // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FGameplayEffectContext
{
    TWeakObjectPtr<class AActor> Instigator;                                          // 0x0008 (size: 0x8)
    TWeakObjectPtr<class AActor> EffectCauser;                                        // 0x0010 (size: 0x8)
    TWeakObjectPtr<class UGameplayAbility> AbilityCDO;                                // 0x0018 (size: 0x8)
    TWeakObjectPtr<class UGameplayAbility> AbilityInstanceNotReplicated;              // 0x0020 (size: 0x8)
    int32 AbilityLevel;                                                               // 0x0028 (size: 0x4)
    TWeakObjectPtr<class UObject> SourceObject;                                       // 0x002C (size: 0x8)
    TWeakObjectPtr<class UAbilitySystemComponent> InstigatorAbilitySystemComponent;   // 0x0034 (size: 0x8)
    TArray<TWeakObjectPtr<AActor>> Actors;                                            // 0x0040 (size: 0x10)
    FVector WorldOrigin;                                                              // 0x0060 (size: 0x18)
    uint8 bHasWorldOrigin;                                                            // 0x0078 (size: 0x1)
    uint8 bReplicateSourceObject;                                                     // 0x0078 (size: 0x1)
    uint8 bReplicateInstigator;                                                       // 0x0078 (size: 0x1)
    uint8 bReplicateEffectCauser;                                                     // 0x0078 (size: 0x1)

}; // Size: 0x80

struct FGameplayEffectContextHandle
{
}; // Size: 0x18

struct FGameplayEffectContextHandleNetSerializerConfig : public FPolymorphicStructNetSerializerConfig
{
}; // Size: 0x28

struct FGameplayEffectContextNetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x10

struct FGameplayEffectCue
{
    FGameplayAttribute MagnitudeAttribute;                                            // 0x0000 (size: 0x38)
    float MinLevel;                                                                   // 0x0038 (size: 0x4)
    float MaxLevel;                                                                   // 0x003C (size: 0x4)
    FGameplayTagContainer GameplayCueTags;                                            // 0x0040 (size: 0x20)

}; // Size: 0x60

struct FGameplayEffectCustomExecutionOutput
{
    TArray<FGameplayModifierEvaluatedData> OutputModifiers;                           // 0x0000 (size: 0x10)
    uint8 bTriggerConditionalGameplayEffects;                                         // 0x0010 (size: 0x1)
    uint8 bHandledStackCountManually;                                                 // 0x0010 (size: 0x1)
    uint8 bHandledGameplayCuesManually;                                               // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FGameplayEffectCustomExecutionParameters
{
}; // Size: 0xF0

struct FGameplayEffectExecutionDefinition
{
    TSubclassOf<class UGameplayEffectExecutionCalculation> CalculationClass;          // 0x0000 (size: 0x8)
    FGameplayTagContainer PassedInTags;                                               // 0x0008 (size: 0x20)
    TArray<FGameplayEffectExecutionScopedModifierInfo> CalculationModifiers;          // 0x0028 (size: 0x10)
    TArray<FConditionalGameplayEffect> ConditionalGameplayEffects;                    // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FGameplayEffectExecutionScopedModifierInfo
{
    FGameplayEffectAttributeCaptureDefinition CapturedAttribute;                      // 0x0000 (size: 0x40)
    FGameplayTag TransientAggregatorIdentifier;                                       // 0x0040 (size: 0x8)
    EGameplayEffectScopedModifierAggregatorType AggregatorType;                       // 0x0048 (size: 0x1)
    TEnumAsByte<EGameplayModOp::Type> ModifierOp;                                     // 0x0049 (size: 0x1)
    FGameplayEffectModifierMagnitude ModifierMagnitude;                               // 0x0050 (size: 0x1E0)
    FGameplayModEvaluationChannelSettings EvaluationChannelSettings;                  // 0x0230 (size: 0x1)
    FGameplayTagRequirements SourceTags;                                              // 0x0238 (size: 0x88)
    FGameplayTagRequirements TargetTags;                                              // 0x02C0 (size: 0x88)

}; // Size: 0x348

struct FGameplayEffectModifiedAttribute
{
    FGameplayAttribute Attribute;                                                     // 0x0000 (size: 0x38)
    float TotalMagnitude;                                                             // 0x0038 (size: 0x4)

}; // Size: 0x40

struct FGameplayEffectModifierMagnitude
{
    EGameplayEffectMagnitudeCalculation MagnitudeCalculationType;                     // 0x0000 (size: 0x1)
    FScalableFloat ScalableFloatMagnitude;                                            // 0x0008 (size: 0x28)
    FAttributeBasedFloat AttributeBasedMagnitude;                                     // 0x0030 (size: 0x110)
    FCustomCalculationBasedFloat CustomMagnitude;                                     // 0x0140 (size: 0x90)
    FSetByCallerFloat SetByCallerMagnitude;                                           // 0x01D0 (size: 0x10)

}; // Size: 0x1E0

struct FGameplayEffectQuery
{
    FGameplayEffectQueryCustomMatchDelegate_BP CustomMatchDelegate_BP;                // 0x0010 (size: 0x10)
    void ActiveGameplayEffectQueryCustomMatch_Dynamic(FActiveGameplayEffect Effect, bool& bMatches);
    FGameplayTagQuery OwningTagQuery;                                                 // 0x0020 (size: 0x48)
    FGameplayTagQuery EffectTagQuery;                                                 // 0x0068 (size: 0x48)
    FGameplayTagQuery SourceTagQuery;                                                 // 0x00B0 (size: 0x48)
    FGameplayTagQuery SourceAggregateTagQuery;                                        // 0x00F8 (size: 0x48)
    FGameplayAttribute ModifyingAttribute;                                            // 0x0140 (size: 0x38)
    class UObject* EffectSource;                                                      // 0x0178 (size: 0x8)
    TSubclassOf<class UGameplayEffect> EffectDefinition;                              // 0x0180 (size: 0x8)

}; // Size: 0x198

struct FGameplayEffectRemovalInfo
{
    bool bPrematureRemoval;                                                           // 0x0000 (size: 0x1)
    int32 StackCount;                                                                 // 0x0004 (size: 0x4)
    FGameplayEffectContextHandle EffectContext;                                       // 0x0008 (size: 0x18)

}; // Size: 0x28

struct FGameplayEffectSpec
{
    class UGameplayEffect* Def;                                                       // 0x0000 (size: 0x8)
    TArray<FGameplayEffectModifiedAttribute> ModifiedAttributes;                      // 0x0008 (size: 0x10)
    FGameplayEffectAttributeCaptureSpecContainer CapturedRelevantAttributes;          // 0x0018 (size: 0x28)
    float Duration;                                                                   // 0x0050 (size: 0x4)
    float Period;                                                                     // 0x0054 (size: 0x4)
    float ChanceToApplyToTarget;                                                      // 0x0058 (size: 0x4)
    FTagContainerAggregator CapturedSourceTags;                                       // 0x0060 (size: 0x88)
    FTagContainerAggregator CapturedTargetTags;                                       // 0x00E8 (size: 0x88)
    FGameplayTagContainer DynamicGrantedTags;                                         // 0x0170 (size: 0x20)
    FGameplayTagContainer DynamicAssetTags;                                           // 0x0190 (size: 0x20)
    TArray<FModifierSpec> Modifiers;                                                  // 0x01B0 (size: 0x10)
    int32 StackCount;                                                                 // 0x01C0 (size: 0x4)
    uint8 bCompletedSourceAttributeCapture;                                           // 0x01C4 (size: 0x1)
    uint8 bCompletedTargetAttributeCapture;                                           // 0x01C4 (size: 0x1)
    uint8 bDurationLocked;                                                            // 0x01C4 (size: 0x1)
    TArray<FGameplayAbilitySpecDef> GrantedAbilitySpecs;                              // 0x01C8 (size: 0x10)
    FGameplayEffectContextHandle EffectContext;                                       // 0x0278 (size: 0x18)
    float Level;                                                                      // 0x0290 (size: 0x4)

}; // Size: 0x298

struct FGameplayEffectSpecForRPC
{
    class UGameplayEffect* Def;                                                       // 0x0000 (size: 0x8)
    TArray<FGameplayEffectModifiedAttribute> ModifiedAttributes;                      // 0x0008 (size: 0x10)
    FGameplayEffectContextHandle EffectContext;                                       // 0x0018 (size: 0x18)
    FGameplayTagContainer AggregatedSourceTags;                                       // 0x0030 (size: 0x20)
    FGameplayTagContainer AggregatedTargetTags;                                       // 0x0050 (size: 0x20)
    float Level;                                                                      // 0x0070 (size: 0x4)
    float AbilityLevel;                                                               // 0x0074 (size: 0x4)

}; // Size: 0x78

struct FGameplayEffectSpecHandle
{
}; // Size: 0x10

struct FGameplayEffectVersion
{
}; // Size: 0x1

struct FGameplayEventData
{
    FGameplayTag EventTag;                                                            // 0x0000 (size: 0x8)
    class AActor* Instigator;                                                         // 0x0008 (size: 0x8)
    class AActor* Target;                                                             // 0x0010 (size: 0x8)
    class UObject* OptionalObject;                                                    // 0x0018 (size: 0x8)
    class UObject* OptionalObject2;                                                   // 0x0020 (size: 0x8)
    FGameplayEffectContextHandle ContextHandle;                                       // 0x0028 (size: 0x18)
    FGameplayTagContainer InstigatorTags;                                             // 0x0040 (size: 0x20)
    FGameplayTagContainer TargetTags;                                                 // 0x0060 (size: 0x20)
    float EventMagnitude;                                                             // 0x0080 (size: 0x4)
    FGameplayAbilityTargetDataHandle TargetData;                                      // 0x0088 (size: 0x28)

}; // Size: 0xB0

struct FGameplayModEvaluationChannelSettings
{
    EGameplayModEvaluationChannel Channel;                                            // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FGameplayModifierEvaluatedData
{
    FGameplayAttribute Attribute;                                                     // 0x0000 (size: 0x38)
    TEnumAsByte<EGameplayModOp::Type> ModifierOp;                                     // 0x0038 (size: 0x1)
    float Magnitude;                                                                  // 0x003C (size: 0x4)
    FActiveGameplayEffectHandle Handle;                                               // 0x0040 (size: 0x8)
    bool IsValid;                                                                     // 0x0048 (size: 0x1)

}; // Size: 0x50

struct FGameplayModifierInfo
{
    FGameplayAttribute Attribute;                                                     // 0x0000 (size: 0x38)
    TEnumAsByte<EGameplayModOp::Type> ModifierOp;                                     // 0x0038 (size: 0x1)
    FGameplayEffectModifierMagnitude ModifierMagnitude;                               // 0x0040 (size: 0x1E0)
    FGameplayModEvaluationChannelSettings EvaluationChannelSettings;                  // 0x0220 (size: 0x1)
    FGameplayTagRequirements SourceTags;                                              // 0x0228 (size: 0x88)
    FGameplayTagRequirements TargetTags;                                              // 0x02B0 (size: 0x88)

}; // Size: 0x338

struct FGameplayTagBlueprintPropertyMap
{
    TArray<FGameplayTagBlueprintPropertyMapping> PropertyMappings;                    // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FGameplayTagBlueprintPropertyMapping
{
    FGameplayTag TagToMap;                                                            // 0x0000 (size: 0x8)
    TFieldPath<FProperty> PropertyToEdit;                                             // 0x0008 (size: 0x20)
    FName PropertyName;                                                               // 0x0028 (size: 0x8)
    FGuid PropertyGuid;                                                               // 0x0030 (size: 0x10)

}; // Size: 0x48

struct FGameplayTagReponsePair
{
    FGameplayTag Tag;                                                                 // 0x0000 (size: 0x8)
    TSubclassOf<class UGameplayEffect> ResponseGameplayEffect;                        // 0x0008 (size: 0x8)
    TArray<class TSubclassOf<UGameplayEffect>> ResponseGameplayEffects;               // 0x0010 (size: 0x10)
    int32 SoftCountCap;                                                               // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FGameplayTagRequirements
{
    FGameplayTagContainer RequireTags;                                                // 0x0000 (size: 0x20)
    FGameplayTagContainer IgnoreTags;                                                 // 0x0020 (size: 0x20)
    FGameplayTagQuery TagQuery;                                                       // 0x0040 (size: 0x48)

}; // Size: 0x88

struct FGameplayTagResponseTableEntry
{
    FGameplayTagReponsePair Positive;                                                 // 0x0000 (size: 0x28)
    FGameplayTagReponsePair Negative;                                                 // 0x0028 (size: 0x28)

}; // Size: 0x50

struct FGameplayTargetDataFilter
{
    class AActor* SelfActor;                                                          // 0x0008 (size: 0x8)
    TSubclassOf<class AActor> RequiredActorClass;                                     // 0x0010 (size: 0x8)
    TEnumAsByte<ETargetDataFilterSelf::Type> SelfFilter;                              // 0x0018 (size: 0x1)
    bool bReverseFilter;                                                              // 0x0019 (size: 0x1)

}; // Size: 0x20

struct FGameplayTargetDataFilterHandle
{
}; // Size: 0x10

struct FInheritedTagContainer
{
    FGameplayTagContainer CombinedTags;                                               // 0x0000 (size: 0x20)
    FGameplayTagContainer Added;                                                      // 0x0020 (size: 0x20)
    FGameplayTagContainer Removed;                                                    // 0x0040 (size: 0x20)

}; // Size: 0x60

struct FMinimalGameplayCueReplicationProxy
{
    class UAbilitySystemComponent* Owner;                                             // 0x0340 (size: 0x8)

}; // Size: 0x350

struct FMinimalGameplayCueReplicationProxyForNetSerializer
{
    TArray<FGameplayTag> Tags;                                                        // 0x0000 (size: 0x10)
    TArray<FVector_NetQuantize> Locations;                                            // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FMinimalGameplayCueReplicationProxyNetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x10

struct FMinimalReplicationTagCountMap
{
    class UAbilitySystemComponent* Owner;                                             // 0x0050 (size: 0x8)

}; // Size: 0x68

struct FMinimalReplicationTagCountMapForNetSerializer
{
    TArray<FGameplayTag> Tags;                                                        // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMinimalReplicationTagCountMapNetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x10

struct FModifierSpec
{
    float EvaluatedMagnitude;                                                         // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FMovieSceneGameplayCueChannel : public FMovieSceneChannel
{
    TArray<FFrameNumber> KeyTimes;                                                    // 0x0050 (size: 0x10)
    TArray<FMovieSceneGameplayCueKey> KeyValues;                                      // 0x0060 (size: 0x10)

}; // Size: 0xF8

struct FMovieSceneGameplayCueKey
{
    FGameplayCueTag Cue;                                                              // 0x0000 (size: 0x8)
    FVector Location;                                                                 // 0x0008 (size: 0x18)
    FVector Normal;                                                                   // 0x0020 (size: 0x18)
    FName AttachSocketName;                                                           // 0x0038 (size: 0x8)
    float NormalizedMagnitude;                                                        // 0x0040 (size: 0x4)
    FMovieSceneObjectBindingID Instigator;                                            // 0x0044 (size: 0x18)
    FMovieSceneObjectBindingID EffectCauser;                                          // 0x005C (size: 0x18)
    class UPhysicalMaterial* PhysicalMaterial;                                        // 0x0078 (size: 0x8)
    int32 GameplayEffectLevel;                                                        // 0x0080 (size: 0x4)
    int32 AbilityLevel;                                                               // 0x0084 (size: 0x4)
    bool bAttachToBinding;                                                            // 0x0088 (size: 0x1)

}; // Size: 0x90

struct FNetSerializeScriptStructCache
{
    TArray<class UScriptStruct*> ScriptStructs;                                       // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FPreallocationInfo
{
    TMap<class UClass*, class FGameplayCueNotifyActorArray> PreallocatedInstances;    // 0x0000 (size: 0x50)
    TArray<class TSubclassOf<AGameplayCueNotify_Actor>> ClassesNeedingPreallocation;  // 0x0050 (size: 0x10)

}; // Size: 0x68

struct FPredictionKey
{
    int16 Current;                                                                    // 0x0000 (size: 0x2)
    int16 base;                                                                       // 0x0002 (size: 0x2)
    bool bIsServerInitiated;                                                          // 0x0004 (size: 0x1)

}; // Size: 0x10

struct FPredictionKeyNetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x10

struct FReplicatedPredictionKeyItem : public FFastArraySerializerItem
{
    FPredictionKey PredictionKey;                                                     // 0x000C (size: 0x10)

}; // Size: 0x1C

struct FReplicatedPredictionKeyMap : public FFastArraySerializer
{
    TArray<FReplicatedPredictionKeyItem> PredictionKeys;                              // 0x0108 (size: 0x10)

}; // Size: 0x118

struct FScalableFloat
{
    float Value;                                                                      // 0x0000 (size: 0x4)
    FCurveTableRowHandle Curve;                                                       // 0x0008 (size: 0x10)
    FDataRegistryType RegistryType;                                                   // 0x0018 (size: 0x8)

}; // Size: 0x28

struct FServerAbilityRPCBatch
{
    FGameplayAbilitySpecHandle AbilitySpecHandle;                                     // 0x0000 (size: 0x4)
    FPredictionKey PredictionKey;                                                     // 0x0004 (size: 0x10)
    FGameplayAbilityTargetDataHandle TargetData;                                      // 0x0018 (size: 0x28)
    bool InputPressed;                                                                // 0x0040 (size: 0x1)
    bool Ended;                                                                       // 0x0041 (size: 0x1)
    bool Started;                                                                     // 0x0042 (size: 0x1)

}; // Size: 0x48

struct FSetByCallerFloat
{
    FName DataName;                                                                   // 0x0000 (size: 0x8)
    FGameplayTag DataTag;                                                             // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FTagContainerAggregator
{
    FGameplayTagContainer CapturedActorTags;                                          // 0x0000 (size: 0x20)
    FGameplayTagContainer CapturedSpecTags;                                           // 0x0020 (size: 0x20)
    FGameplayTagContainer ScopedTags;                                                 // 0x0040 (size: 0x20)

}; // Size: 0x88

struct FWorldReticleParameters
{
    FVector AOEScale;                                                                 // 0x0000 (size: 0x18)

}; // Size: 0x18

class AAbilitySystemDebugHUD : public AHUD
{
}; // Size: 0x398

class AAbilitySystemTestPawn : public ADefaultPawn
{
    class UAbilitySystemComponent* AbilitySystemComponent;                            // 0x0368 (size: 0x8)

}; // Size: 0x370

class AGameplayAbilityTargetActor : public AActor
{
    bool ShouldProduceTargetDataOnServer;                                             // 0x02A8 (size: 0x1)
    FGameplayAbilityTargetingLocationInfo StartLocation;                              // 0x02B0 (size: 0x90)
    class APlayerController* PrimaryPC;                                               // 0x0370 (size: 0x8)
    class UGameplayAbility* OwningAbility;                                            // 0x0378 (size: 0x8)
    bool bDestroyOnConfirmation;                                                      // 0x0380 (size: 0x1)
    class AActor* SourceActor;                                                        // 0x0388 (size: 0x8)
    FWorldReticleParameters ReticleParams;                                            // 0x0390 (size: 0x18)
    TSubclassOf<class AGameplayAbilityWorldReticle> ReticleClass;                     // 0x03A8 (size: 0x8)
    FGameplayTargetDataFilterHandle Filter;                                           // 0x03B0 (size: 0x10)
    bool bDebug;                                                                      // 0x03C0 (size: 0x1)
    class UAbilitySystemComponent* GenericDelegateBoundASC;                           // 0x03D8 (size: 0x8)

    void ConfirmTargeting();
    void CancelTargeting();
}; // Size: 0x3E0

class AGameplayAbilityTargetActor_ActorPlacement : public AGameplayAbilityTargetActor_GroundTrace
{
    UClass* PlacedActorClass;                                                         // 0x0418 (size: 0x8)
    class UMaterialInterface* PlacedActorMaterial;                                    // 0x0420 (size: 0x8)

}; // Size: 0x430

class AGameplayAbilityTargetActor_GroundTrace : public AGameplayAbilityTargetActor_Trace
{
    float CollisionRadius;                                                            // 0x03F8 (size: 0x4)
    float CollisionHeight;                                                            // 0x03FC (size: 0x4)

}; // Size: 0x420

class AGameplayAbilityTargetActor_Radius : public AGameplayAbilityTargetActor
{
    float Radius;                                                                     // 0x03E0 (size: 0x4)

}; // Size: 0x3F0

class AGameplayAbilityTargetActor_SingleLineTrace : public AGameplayAbilityTargetActor_Trace
{
}; // Size: 0x400

class AGameplayAbilityTargetActor_Trace : public AGameplayAbilityTargetActor
{
    float MaxRange;                                                                   // 0x03E0 (size: 0x4)
    FCollisionProfileName TraceProfile;                                               // 0x03E4 (size: 0x8)
    bool bTraceAffectsAimPitch;                                                       // 0x03EC (size: 0x1)

}; // Size: 0x400

class AGameplayAbilityWorldReticle : public AActor
{
    FWorldReticleParameters Parameters;                                               // 0x02A8 (size: 0x18)
    bool bFaceOwnerFlat;                                                              // 0x02C0 (size: 0x1)
    bool bSnapToTargetedActor;                                                        // 0x02C1 (size: 0x1)
    bool bIsTargetValid;                                                              // 0x02C2 (size: 0x1)
    bool bIsTargetAnActor;                                                            // 0x02C3 (size: 0x1)
    class APlayerController* PrimaryPC;                                               // 0x02C8 (size: 0x8)
    class AGameplayAbilityTargetActor* TargetingActor;                                // 0x02D0 (size: 0x8)

    void SetReticleMaterialParamVector(FName ParamName, FVector Value);
    void SetReticleMaterialParamFloat(FName ParamName, float Value);
    void OnValidTargetChanged(bool bNewValue);
    void OnTargetingAnActor(bool bNewValue);
    void OnParametersInitialized();
    void FaceTowardSource(bool bFaceIn2D);
}; // Size: 0x2D8

class AGameplayAbilityWorldReticle_ActorVisualization : public AGameplayAbilityWorldReticle
{
    class UCapsuleComponent* CollisionComponent;                                      // 0x02D8 (size: 0x8)
    TArray<class UActorComponent*> VisualizationComponents;                           // 0x02E0 (size: 0x10)

}; // Size: 0x2F0

class AGameplayCueNotify_Actor : public AActor
{
    bool bAutoDestroyOnRemove;                                                        // 0x02A8 (size: 0x1)
    float AutoDestroyDelay;                                                           // 0x02AC (size: 0x4)
    bool WarnIfTimelineIsStillRunning;                                                // 0x02B0 (size: 0x1)
    bool WarnIfLatentActionIsStillRunning;                                            // 0x02B1 (size: 0x1)
    FGameplayTag GameplayCueTag;                                                      // 0x02B4 (size: 0x8)
    FName GameplayCueName;                                                            // 0x02BC (size: 0x8)
    bool bAutoAttachToOwner;                                                          // 0x02C4 (size: 0x1)
    bool IsOverride;                                                                  // 0x02C5 (size: 0x1)
    bool bUniqueInstancePerInstigator;                                                // 0x02C6 (size: 0x1)
    bool bUniqueInstancePerSourceObject;                                              // 0x02C7 (size: 0x1)
    bool bAllowMultipleOnActiveEvents;                                                // 0x02C8 (size: 0x1)
    bool bAllowMultipleWhileActiveEvents;                                             // 0x02C9 (size: 0x1)
    int32 NumPreallocatedInstances;                                                   // 0x02CC (size: 0x4)

    bool WhileActive(class AActor* MyTarget, const FGameplayCueParameters& Parameters);
    bool OnRemove(class AActor* MyTarget, const FGameplayCueParameters& Parameters);
    void OnOwnerDestroyed(class AActor* DestroyedActor);
    bool OnExecute(class AActor* MyTarget, const FGameplayCueParameters& Parameters);
    bool OnActive(class AActor* MyTarget, const FGameplayCueParameters& Parameters);
    void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent::Type> EventType, const FGameplayCueParameters& Parameters);
    void K2_EndGameplayCue();
}; // Size: 0x318

class AGameplayCueNotify_BurstLatent : public AGameplayCueNotify_Actor
{
    FGameplayCueNotify_SpawnCondition DefaultSpawnCondition;                          // 0x0318 (size: 0x38)
    FGameplayCueNotify_PlacementInfo DefaultPlacementInfo;                            // 0x0350 (size: 0x40)
    FGameplayCueNotify_BurstEffects BurstEffects;                                     // 0x0390 (size: 0x298)
    FGameplayCueNotify_SpawnResult BurstSpawnResults;                                 // 0x0628 (size: 0x58)

    void OnBurst(class AActor* Target, const FGameplayCueParameters& Parameters, const FGameplayCueNotify_SpawnResult& SpawnResults);
}; // Size: 0x680

class AGameplayCueNotify_Looping : public AGameplayCueNotify_Actor
{
    FGameplayCueNotify_SpawnCondition DefaultSpawnCondition;                          // 0x0318 (size: 0x38)
    FGameplayCueNotify_PlacementInfo DefaultPlacementInfo;                            // 0x0350 (size: 0x40)
    FGameplayCueNotify_BurstEffects ApplicationEffects;                               // 0x0390 (size: 0x298)
    FGameplayCueNotify_SpawnResult ApplicationSpawnResults;                           // 0x0628 (size: 0x58)
    FGameplayCueNotify_LoopingEffects LoopingEffects;                                 // 0x0680 (size: 0x1F0)
    FGameplayCueNotify_SpawnResult LoopingSpawnResults;                               // 0x0870 (size: 0x58)
    FGameplayCueNotify_BurstEffects RecurringEffects;                                 // 0x08C8 (size: 0x298)
    FGameplayCueNotify_SpawnResult RecurringSpawnResults;                             // 0x0B60 (size: 0x58)
    FGameplayCueNotify_BurstEffects RemovalEffects;                                   // 0x0BB8 (size: 0x298)
    FGameplayCueNotify_SpawnResult RemovalSpawnResults;                               // 0x0E50 (size: 0x58)

    void OnRemoval(class AActor* Target, const FGameplayCueParameters& Parameters, const FGameplayCueNotify_SpawnResult& SpawnResults);
    void OnRecurring(class AActor* Target, const FGameplayCueParameters& Parameters, const FGameplayCueNotify_SpawnResult& SpawnResults);
    void OnLoopingStart(class AActor* Target, const FGameplayCueParameters& Parameters, const FGameplayCueNotify_SpawnResult& SpawnResults);
    void OnApplication(class AActor* Target, const FGameplayCueParameters& Parameters, const FGameplayCueNotify_SpawnResult& SpawnResults);
}; // Size: 0xEB0

class IAbilitySystemInterface : public IInterface
{
}; // Size: 0x28

class IAbilitySystemReplicationProxyInterface : public IInterface
{
}; // Size: 0x28

class IGameplayCueInterface : public IInterface
{

    void ForwardGameplayCueToParent();
    void BlueprintCustomHandler(TEnumAsByte<EGameplayCueEvent::Type> EventType, const FGameplayCueParameters& Parameters);
}; // Size: 0x28

class ITickableAttributeSetInterface : public IInterface
{
}; // Size: 0x28

class UAbilitiesGameplayEffectComponent : public UGameplayEffectComponent
{
    TArray<FGameplayAbilitySpecConfig> GrantAbilityConfigs;                           // 0x0028 (size: 0x10)

}; // Size: 0x38

class UAbilityAsync : public UCancellableAsyncAction
{

    void EndAction();
}; // Size: 0x38

class UAbilityAsync_WaitAttributeChanged : public UAbilityAsync
{
    FAbilityAsync_WaitAttributeChangedChanged Changed;                                // 0x0038 (size: 0x10)
    void AsyncWaitAttributeChangedDelegate(FGameplayAttribute Attribute, float NewValue, float OldValue);

    class UAbilityAsync_WaitAttributeChanged* WaitForAttributeChanged(class AActor* TargetActor, FGameplayAttribute Attribute, bool OnlyTriggerOnce);
    void AsyncWaitAttributeChangedDelegate__DelegateSignature(FGameplayAttribute Attribute, float NewValue, float OldValue);
}; // Size: 0x90

class UAbilityAsync_WaitGameplayEffectApplied : public UAbilityAsync
{
    FAbilityAsync_WaitGameplayEffectAppliedOnApplied OnApplied;                       // 0x0038 (size: 0x10)
    void OnAppliedDelegate(class AActor* Source, FGameplayEffectSpecHandle SpecHandle, FActiveGameplayEffectHandle ActiveHandle);

    class UAbilityAsync_WaitGameplayEffectApplied* WaitGameplayEffectAppliedToActor(class AActor* TargetActor, const FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, bool ListenForPeriodicEffect);
    void OnAppliedDelegate__DelegateSignature(class AActor* Source, FGameplayEffectSpecHandle SpecHandle, FActiveGameplayEffectHandle ActiveHandle);
}; // Size: 0x188

class UAbilityAsync_WaitGameplayEvent : public UAbilityAsync
{
    FAbilityAsync_WaitGameplayEventEventReceived EventReceived;                       // 0x0038 (size: 0x10)
    void EventReceivedDelegate(FGameplayEventData Payload);

    class UAbilityAsync_WaitGameplayEvent* WaitGameplayEventToActor(class AActor* TargetActor, FGameplayTag EventTag, bool OnlyTriggerOnce, bool OnlyMatchExact);
    void EventReceivedDelegate__DelegateSignature(FGameplayEventData Payload);
}; // Size: 0x60

class UAbilityAsync_WaitGameplayTag : public UAbilityAsync
{

    void AsyncWaitGameplayTagDelegate__DelegateSignature();
}; // Size: 0x50

class UAbilityAsync_WaitGameplayTagAdded : public UAbilityAsync_WaitGameplayTag
{
    FAbilityAsync_WaitGameplayTagAddedAdded Added;                                    // 0x0050 (size: 0x10)
    void AsyncWaitGameplayTagDelegate();

    class UAbilityAsync_WaitGameplayTagAdded* WaitGameplayTagAddToActor(class AActor* TargetActor, FGameplayTag Tag, bool OnlyTriggerOnce);
}; // Size: 0x60

class UAbilityAsync_WaitGameplayTagCountChanged : public UAbilityAsync
{
    FAbilityAsync_WaitGameplayTagCountChangedTagCountChanged TagCountChanged;         // 0x0048 (size: 0x10)
    void AsyncWaitGameplayTagCountDelegate(int32 TagCount);

    class UAbilityAsync_WaitGameplayTagCountChanged* WaitGameplayTagCountChangedOnActor(class AActor* TargetActor, FGameplayTag Tag);
    void AsyncWaitGameplayTagCountDelegate__DelegateSignature(int32 TagCount);
}; // Size: 0x58

class UAbilityAsync_WaitGameplayTagQuery : public UAbilityAsync
{
    FAbilityAsync_WaitGameplayTagQueryTriggered Triggered;                            // 0x00F8 (size: 0x10)
    void AsyncWaitGameplayTagQueryDelegate();

    class UAbilityAsync_WaitGameplayTagQuery* WaitGameplayTagQueryOnActor(class AActor* TargetActor, const FGameplayTagQuery TagQuery, const EWaitGameplayTagQueryTriggerCondition TriggerCondition, const bool bOnlyTriggerOnce);
}; // Size: 0x108

class UAbilityAsync_WaitGameplayTagRemoved : public UAbilityAsync_WaitGameplayTag
{
    FAbilityAsync_WaitGameplayTagRemovedRemoved Removed;                              // 0x0050 (size: 0x10)
    void AsyncWaitGameplayTagDelegate();

    class UAbilityAsync_WaitGameplayTagRemoved* WaitGameplayTagRemoveFromActor(class AActor* TargetActor, FGameplayTag Tag, bool OnlyTriggerOnce);
}; // Size: 0x60

class UAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary
{

    bool TargetDataHasOrigin(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
    bool TargetDataHasHitResult(const FGameplayAbilityTargetDataHandle& HitResult, int32 Index);
    bool TargetDataHasEndPoint(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
    bool TargetDataHasActor(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
    FGameplayEffectSpecHandle SetStackCountToMax(FGameplayEffectSpecHandle SpecHandle);
    FGameplayEffectSpecHandle SetStackCount(FGameplayEffectSpecHandle SpecHandle, int32 StackCount);
    FGameplayEffectSpecHandle SetDuration(FGameplayEffectSpecHandle SpecHandle, float Duration);
    void SendGameplayEventToActor(class AActor* Actor, FGameplayTag EventTag, FGameplayEventData Payload);
    bool RemoveLooseGameplayTags(class AActor* Actor, const FGameplayTagContainer& GameplayTags, bool bShouldReplicate);
    bool NotEqual_GameplayAttributeGameplayAttribute(FGameplayAttribute AttributeA, FGameplayAttribute AttributeB);
    bool NotEqual_GameplayAbilitySpecHandle(const FGameplayAbilitySpecHandle& A, const FGameplayAbilitySpecHandle& B);
    bool NotEqual_ActiveGameplayEffectHandle(const FActiveGameplayEffectHandle& A, const FActiveGameplayEffectHandle& B);
    FGameplayEffectSpecHandle MakeSpecHandleByClass(TSubclassOf<class UGameplayEffect> GameplayEffect, class AActor* Instigator, class AActor* EffectCauser, float Level);
    FGameplayEffectSpecHandle MakeSpecHandle(class UGameplayEffect* InGameplayEffect, class AActor* InInstigator, class AActor* InEffectCauser, float InLevel);
    FGameplayCueParameters MakeGameplayCueParameters(float NormalizedMagnitude, float RawMagnitude, FGameplayEffectContextHandle EffectContext, FGameplayTag MatchedTagName, FGameplayTag OriginalTag, FGameplayTagContainer AggregatedSourceTags, FGameplayTagContainer AggregatedTargetTags, FVector Location, FVector Normal, class AActor* Instigator, class AActor* EffectCauser, class UObject* SourceObject, class UPhysicalMaterial* PhysicalMaterial, int32 GameplayEffectLevel, int32 AbilityLevel, class USceneComponent* TargetAttachComponent, bool bReplicateLocationWhenUsingMinimalRepProxy);
    FGameplayTargetDataFilterHandle MakeFilterHandle(FGameplayTargetDataFilter Filter, class AActor* FilterActor);
    bool IsValid(FGameplayAttribute Attribute);
    bool IsInstigatorLocallyControlledPlayer(FGameplayCueParameters Parameters);
    bool IsInstigatorLocallyControlled(FGameplayCueParameters Parameters);
    bool IsGameplayAbilityActive(const class UGameplayAbility* GameplayAbility);
    bool HasHitResult(FGameplayCueParameters Parameters);
    FTransform GetTargetDataOrigin(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
    FTransform GetTargetDataEndPointTransform(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
    FVector GetTargetDataEndPoint(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
    FVector GetOrigin(FGameplayCueParameters Parameters);
    float GetModifiedAttributeMagnitude(FGameplayEffectSpecHandle SpecHandle, FGameplayAttribute Attribute);
    FTransform GetInstigatorTransform(FGameplayCueParameters Parameters);
    class AActor* GetInstigatorActor(FGameplayCueParameters Parameters);
    FHitResult GetHitResultFromTargetData(const FGameplayAbilityTargetDataHandle& HitResult, int32 Index);
    FHitResult GetHitResult(FGameplayCueParameters Parameters);
    class UGameplayEffectUIData* GetGameplayEffectUIData(TSubclassOf<class UGameplayEffect> EffectClass, TSubclassOf<class UGameplayEffectUIData> DataType);
    FGameplayTagContainer GetGameplayEffectGrantedTags(TSubclassOf<class UGameplayEffect> EffectClass);
    class UGameplayEffect* GetGameplayEffectFromActiveEffectHandle(const FActiveGameplayEffectHandle& ActiveHandle);
    FGameplayTagContainer GetGameplayEffectAssetTags(TSubclassOf<class UGameplayEffect> EffectClass);
    bool GetGameplayCueEndLocationAndNormal(class AActor* TargetActor, FGameplayCueParameters Parameters, FVector& Location, FVector& Normal);
    bool GetGameplayCueDirection(class AActor* TargetActor, FGameplayCueParameters Parameters, FVector& Direction);
    class UGameplayAbility* GetGameplayAbilityFromSpecHandle(class UAbilitySystemComponent* AbilitySystem, const FGameplayAbilitySpecHandle& AbilitySpecHandle, bool& bIsInstance);
    float GetFloatAttributeFromAbilitySystemComponent(const class UAbilitySystemComponent* AbilitySystem, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute);
    float GetFloatAttributeBaseFromAbilitySystemComponent(const class UAbilitySystemComponent* AbilitySystemComponent, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute);
    float GetFloatAttributeBase(const class AActor* Actor, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute);
    float GetFloatAttribute(const class AActor* Actor, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute);
    FGameplayEffectContextHandle GetEffectContext(FGameplayEffectSpecHandle SpecHandle);
    FString GetDebugStringFromGameplayAttribute(const FGameplayAttribute& Attribute);
    int32 GetDataCountFromTargetData(const FGameplayAbilityTargetDataHandle& TargetData);
    TArray<FGameplayEffectSpecHandle> GetAllLinkedGameplayEffectSpecHandles(FGameplayEffectSpecHandle SpecHandle);
    TArray<class AActor*> GetAllActorsFromTargetData(const FGameplayAbilityTargetDataHandle& TargetData);
    TArray<class AActor*> GetActorsFromTargetData(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
    int32 GetActorCount(FGameplayCueParameters Parameters);
    class AActor* GetActorByIndex(FGameplayCueParameters Parameters, int32 Index);
    float GetActiveGameplayEffectTotalDuration(FActiveGameplayEffectHandle ActiveHandle);
    float GetActiveGameplayEffectStartTime(FActiveGameplayEffectHandle ActiveHandle);
    int32 GetActiveGameplayEffectStackLimitCount(FActiveGameplayEffectHandle ActiveHandle);
    int32 GetActiveGameplayEffectStackCount(FActiveGameplayEffectHandle ActiveHandle);
    float GetActiveGameplayEffectRemainingDuration(class UObject* WorldContextObject, FActiveGameplayEffectHandle ActiveHandle);
    float GetActiveGameplayEffectExpectedEndTime(FActiveGameplayEffectHandle ActiveHandle);
    FString GetActiveGameplayEffectDebugString(FActiveGameplayEffectHandle ActiveHandle);
    class UAbilitySystemComponent* GetAbilitySystemComponent(class AActor* Actor);
    void ForwardGameplayCueToTarget(TScriptInterface<class IGameplayCueInterface> TargetCueInterface, TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters);
    FGameplayAbilityTargetDataHandle FilterTargetData(const FGameplayAbilityTargetDataHandle& TargetDataHandle, FGameplayTargetDataFilterHandle ActorFilterClass);
    float EvaluateAttributeValueWithTagsAndBase(class UAbilitySystemComponent* AbilitySystem, FGameplayAttribute Attribute, const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags, float BaseValue, bool& bSuccess);
    float EvaluateAttributeValueWithTags(class UAbilitySystemComponent* AbilitySystem, FGameplayAttribute Attribute, const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags, bool& bSuccess);
    bool EqualEqual_GameplayAttributeGameplayAttribute(FGameplayAttribute AttributeA, FGameplayAttribute AttributeB);
    bool EqualEqual_GameplayAbilitySpecHandle(const FGameplayAbilitySpecHandle& A, const FGameplayAbilitySpecHandle& B);
    bool EqualEqual_ActiveGameplayEffectHandle(const FActiveGameplayEffectHandle& A, const FActiveGameplayEffectHandle& B);
    void EffectContextSetOrigin(FGameplayEffectContextHandle EffectContext, FVector Origin);
    bool EffectContextIsValid(FGameplayEffectContextHandle EffectContext);
    bool EffectContextIsInstigatorLocallyControlled(FGameplayEffectContextHandle EffectContext);
    bool EffectContextHasHitResult(FGameplayEffectContextHandle EffectContext);
    class UObject* EffectContextGetSourceObject(FGameplayEffectContextHandle EffectContext);
    class AActor* EffectContextGetOriginalInstigatorActor(FGameplayEffectContextHandle EffectContext);
    FVector EffectContextGetOrigin(FGameplayEffectContextHandle EffectContext);
    class AActor* EffectContextGetInstigatorActor(FGameplayEffectContextHandle EffectContext);
    FHitResult EffectContextGetHitResult(FGameplayEffectContextHandle EffectContext);
    class AActor* EffectContextGetEffectCauser(FGameplayEffectContextHandle EffectContext);
    void EffectContextAddHitResult(FGameplayEffectContextHandle EffectContext, FHitResult HitResult, bool bReset);
    bool DoesTargetDataContainActor(const FGameplayAbilityTargetDataHandle& TargetData, int32 Index, class AActor* Actor);
    bool DoesGameplayCueMeetTagRequirements(FGameplayCueParameters Parameters, const FGameplayTagRequirements& SourceTagReqs, const FGameplayTagRequirements& TargetTagReqs);
    FGameplayEffectSpecHandle CloneSpecHandle(class AActor* InNewInstigator, class AActor* InEffectCauser, FGameplayEffectSpecHandle GameplayEffectSpecHandle_Clone);
    void BreakGameplayCueParameters(const FGameplayCueParameters& Parameters, float& NormalizedMagnitude, float& RawMagnitude, FGameplayEffectContextHandle& EffectContext, FGameplayTag& MatchedTagName, FGameplayTag& OriginalTag, FGameplayTagContainer& AggregatedSourceTags, FGameplayTagContainer& AggregatedTargetTags, FVector& Location, FVector& Normal, class AActor*& Instigator, class AActor*& EffectCauser, class UObject*& SourceObject, class UPhysicalMaterial*& PhysicalMaterial, int32& GameplayEffectLevel, int32& AbilityLevel, class USceneComponent*& TargetAttachComponent, bool& bReplicateLocationWhenUsingMinimalRepProxy);
    FGameplayEffectSpecHandle AssignTagSetByCallerMagnitude(FGameplayEffectSpecHandle SpecHandle, FGameplayTag DataTag, float Magnitude);
    FGameplayEffectSpecHandle AssignSetByCallerMagnitude(FGameplayEffectSpecHandle SpecHandle, FName DataName, float Magnitude);
    FGameplayAbilityTargetDataHandle AppendTargetDataHandle(FGameplayAbilityTargetDataHandle TargetHandle, const FGameplayAbilityTargetDataHandle& HandleToAdd);
    bool AddLooseGameplayTags(class AActor* Actor, const FGameplayTagContainer& GameplayTags, bool bShouldReplicate);
    FGameplayEffectSpecHandle AddLinkedGameplayEffectSpec(FGameplayEffectSpecHandle SpecHandle, FGameplayEffectSpecHandle LinkedGameplayEffectSpec);
    FGameplayEffectSpecHandle AddLinkedGameplayEffect(FGameplayEffectSpecHandle SpecHandle, TSubclassOf<class UGameplayEffect> LinkedGameplayEffect);
    FGameplayEffectSpecHandle AddGrantedTags(FGameplayEffectSpecHandle SpecHandle, FGameplayTagContainer NewGameplayTags);
    FGameplayEffectSpecHandle AddGrantedTag(FGameplayEffectSpecHandle SpecHandle, FGameplayTag NewGameplayTag);
    FGameplayEffectSpecHandle AddAssetTags(FGameplayEffectSpecHandle SpecHandle, FGameplayTagContainer NewGameplayTags);
    FGameplayEffectSpecHandle AddAssetTag(FGameplayEffectSpecHandle SpecHandle, FGameplayTag NewGameplayTag);
    FGameplayAbilityTargetDataHandle AbilityTargetDataFromLocations(const FGameplayAbilityTargetingLocationInfo& SourceLocation, const FGameplayAbilityTargetingLocationInfo& TargetLocation);
    FGameplayAbilityTargetDataHandle AbilityTargetDataFromHitResult(const FHitResult& HitResult);
    FGameplayAbilityTargetDataHandle AbilityTargetDataFromActorArray(const TArray<class AActor*>& ActorArray, bool OneTargetPerHandle);
    FGameplayAbilityTargetDataHandle AbilityTargetDataFromActor(class AActor* Actor);
}; // Size: 0x28

class UAbilitySystemCheatManagerExtension : public UCheatManagerExtension
{

    void EffectRemove(FString NameOrHandle);
    void EffectListActive();
    void EffectApply(FString PartialName, float EffectLevel);
    void AbilityListGranted();
    void AbilityGrant(FString AssetSearchString);
    void AbilityCancel(FString PartialName);
    void AbilityActivate(FString PartialName);
}; // Size: 0x28

class UAbilitySystemComponent : public UGameplayTasksComponent
{
    TArray<FAttributeDefaults> DefaultStartingData;                                   // 0x0128 (size: 0x10)
    FName AffectedAnimInstanceTag;                                                    // 0x0138 (size: 0x8)
    float OutgoingDuration;                                                           // 0x02E8 (size: 0x4)
    float IncomingDuration;                                                           // 0x02EC (size: 0x4)
    TArray<FString> ClientDebugStrings;                                               // 0x0310 (size: 0x10)
    TArray<FString> ServerDebugStrings;                                               // 0x0320 (size: 0x10)
    bool UserAbilityActivationInhibited;                                              // 0x0388 (size: 0x1)
    bool ReplicationProxyEnabled;                                                     // 0x0389 (size: 0x1)
    bool bSuppressGrantAbility;                                                       // 0x038A (size: 0x1)
    bool bSuppressGameplayCues;                                                       // 0x038B (size: 0x1)
    TArray<class AGameplayAbilityTargetActor*> SpawnedTargetActors;                   // 0x0390 (size: 0x10)
    class AActor* OwnerActor;                                                         // 0x03C8 (size: 0x8)
    class AActor* AvatarActor;                                                        // 0x03D0 (size: 0x8)
    FGameplayAbilitySpecContainer ActivatableAbilities;                               // 0x03E8 (size: 0x120)
    TArray<class UGameplayAbility*> AllReplicatedInstancedAbilities;                  // 0x0538 (size: 0x10)
    FGameplayAbilityRepAnimMontage RepAnimMontageInfo;                                // 0x0768 (size: 0x38)
    bool bCachedIsNetSimulated;                                                       // 0x07A0 (size: 0x1)
    bool bPendingMontageRep;                                                          // 0x07A1 (size: 0x1)
    FGameplayAbilityLocalAnimMontage LocalAnimMontageInfo;                            // 0x07A8 (size: 0x28)
    FActiveGameplayEffectsContainer ActiveGameplayEffects;                            // 0x0870 (size: 0x300)
    FActiveGameplayCueContainer ActiveGameplayCues;                                   // 0x0B70 (size: 0x128)
    FActiveGameplayCueContainer MinimalReplicationGameplayCues;                       // 0x0C98 (size: 0x128)
    TArray<uint8> BlockedAbilityBindings;                                             // 0x0EE8 (size: 0x10)
    FMinimalReplicationTagCountMap MinimalReplicationTags;                            // 0x1020 (size: 0x68)
    TArray<class UAttributeSet*> SpawnedAttributes;                                   // 0x1088 (size: 0x10)
    FMinimalReplicationTagCountMap ReplicatedLooseTags;                               // 0x10A8 (size: 0x68)
    FReplicatedPredictionKeyMap ReplicatedPredictionKeyMap;                           // 0x1118 (size: 0x118)

    void UpdateActiveGameplayEffectSetByCallerMagnitudes(FActiveGameplayEffectHandle ActiveHandle, const TMap<FGameplayTag, float>& NewSetByCallerValues);
    void UpdateActiveGameplayEffectSetByCallerMagnitude(FActiveGameplayEffectHandle ActiveHandle, FGameplayTag SetByCallerTag, float NewValue);
    bool TryActivateAbilityByClass(TSubclassOf<class UGameplayAbility> InAbilityToActivate, bool bAllowRemoteActivation);
    bool TryActivateAbility(FGameplayAbilitySpecHandle AbilityToActivate, bool bAllowRemoteActivation);
    bool TryActivateAbilitiesByTag(const FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation);
    void TargetConfirm();
    void TargetCancel();
    void SetUserAbilityActivationInhibited(bool NewInhibit);
    void SetActiveGameplayEffectLevelUsingQuery(FGameplayEffectQuery Query, int32 NewLevel);
    void SetActiveGameplayEffectLevel(FActiveGameplayEffectHandle ActiveHandle, int32 NewLevel);
    void ServerTryActivateAbilityWithEventData(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData);
    void ServerTryActivateAbility(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey);
    void ServerSetReplicatedTargetDataCancelled(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey);
    void ServerSetReplicatedTargetData(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, const FGameplayAbilityTargetDataHandle& ReplicatedTargetDataHandle, FGameplayTag ApplicationTag, FPredictionKey CurrentPredictionKey);
    void ServerSetReplicatedEventWithPayload(TEnumAsByte<EAbilityGenericReplicatedEvent::Type> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey, FVector_NetQuantize100 VectorPayload);
    void ServerSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent::Type> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey);
    void ServerSetInputReleased(FGameplayAbilitySpecHandle AbilityHandle);
    void ServerSetInputPressed(FGameplayAbilitySpecHandle AbilityHandle);
    void ServerPrintDebug_RequestWithStrings(const TArray<FString>& Strings);
    void ServerPrintDebug_Request();
    void ServerEndAbility(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo, FPredictionKey PredictionKey);
    void ServerCurrentMontageSetPlayRate(class UAnimSequenceBase* ClientAnimation, float InPlayRate);
    void ServerCurrentMontageSetNextSectionName(class UAnimSequenceBase* ClientAnimation, float ClientPosition, FName SectionName, FName NextSectionName);
    void ServerCurrentMontageJumpToSectionName(class UAnimSequenceBase* ClientAnimation, FName SectionName);
    void ServerCancelAbility(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo);
    void ServerAbilityRPCBatch(FServerAbilityRPCBatch BatchInfo);
    void RemoveActiveGameplayEffectBySourceEffect(TSubclassOf<class UGameplayEffect> GameplayEffect, class UAbilitySystemComponent* InstigatorAbilitySystemComponent, int32 StacksToRemove);
    bool RemoveActiveGameplayEffect(FActiveGameplayEffectHandle Handle, int32 StacksToRemove);
    int32 RemoveActiveEffectsWithTags(FGameplayTagContainer Tags);
    int32 RemoveActiveEffectsWithSourceTags(FGameplayTagContainer Tags);
    int32 RemoveActiveEffectsWithGrantedTags(FGameplayTagContainer Tags);
    int32 RemoveActiveEffectsWithAppliedTags(FGameplayTagContainer Tags);
    void ReleaseInputID(int32 InputID);
    void PressInputID(int32 InputID);
    void OnSpawnedAttributesEndPlayed(class AActor* InActor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void OnRep_SpawnedAttributes(const TArray<class UAttributeSet*>& PreviousSpawnedAttributes);
    void OnRep_ServerDebugString();
    void OnRep_ReplicatedAnimMontage();
    void OnRep_OwningActor();
    void OnRep_ClientDebugString();
    void OnRep_ActivateAbilities();
    void OnOwnerActorDestroyed(class AActor* InActor);
    void OnAvatarActorDestroyed(class AActor* InActor);
    void NetMulticast_InvokeGameplayCuesExecuted_WithParams(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters);
    void NetMulticast_InvokeGameplayCuesExecuted(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext);
    void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters);
    void NetMulticast_InvokeGameplayCueExecuted_WithParams(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters);
    void NetMulticast_InvokeGameplayCueExecuted_FromSpec(const FGameplayEffectSpecForRPC Spec, FPredictionKey PredictionKey);
    void NetMulticast_InvokeGameplayCueExecuted(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext);
    void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters);
    void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(const FGameplayEffectSpecForRPC& Spec, FPredictionKey PredictionKey);
    void NetMulticast_InvokeGameplayCueAdded_WithParams(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters Parameters);
    void NetMulticast_InvokeGameplayCueAdded(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext);
    FGameplayEffectSpecHandle MakeOutgoingSpec(TSubclassOf<class UGameplayEffect> GameplayEffectClass, float Level, FGameplayEffectContextHandle Context);
    FGameplayEffectContextHandle MakeEffectContext();
    void K2_InitStats(TSubclassOf<class UAttributeSet> Attributes, const class UDataTable* DataTable);
    FGameplayAbilitySpecHandle K2_GiveAbilityAndActivateOnce(TSubclassOf<class UGameplayAbility> AbilityClass, int32 Level, int32 InputID);
    FGameplayAbilitySpecHandle K2_GiveAbility(TSubclassOf<class UGameplayAbility> AbilityClass, int32 Level, int32 InputID);
    bool IsGameplayCueActive(const FGameplayTag GameplayCueTag);
    void InputConfirm();
    void InputCancel();
    bool GetUserAbilityActivationInhibited();
    int32 GetGameplayTagCount(FGameplayTag GameplayTag);
    float GetGameplayEffectMagnitude(FActiveGameplayEffectHandle Handle, FGameplayAttribute Attribute);
    int32 GetGameplayEffectCount_IfLoaded(TSoftClassPtr<UGameplayEffect> SoftSourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck);
    int32 GetGameplayEffectCount(TSubclassOf<class UGameplayEffect> SourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck);
    float GetGameplayAttributeValue(FGameplayAttribute Attribute, bool& bFound);
    class UAttributeSet* GetAttributeSet(TSubclassOf<class UAttributeSet> AttributeSetClass);
    void GetAllAttributes(TArray<FGameplayAttribute>& OutAttributes);
    void GetAllAbilities(TArray<FGameplayAbilitySpecHandle>& OutAbilityHandles);
    TArray<FActiveGameplayEffectHandle> GetActiveEffectsWithAllTags(FGameplayTagContainer Tags);
    TArray<FActiveGameplayEffectHandle> GetActiveEffects(const FGameplayEffectQuery& Query);
    void FindAllAbilitiesWithTags(TArray<FGameplayAbilitySpecHandle>& OutAbilityHandles, FGameplayTagContainer Tags, bool bExactMatch);
    void FindAllAbilitiesWithInputID(TArray<FGameplayAbilitySpecHandle>& OutAbilityHandles, int32 InputID);
    void FindAllAbilitiesMatchingQuery(TArray<FGameplayAbilitySpecHandle>& OutAbilityHandles, FGameplayTagQuery Query);
    void ClientTryActivateAbility(FGameplayAbilitySpecHandle AbilityToActivate);
    void ClientSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent::Type> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey);
    void ClientPrintDebug_Response(const TArray<FString>& Strings, int32 GameFlags);
    void ClientEndAbility(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo);
    void ClientCancelAbility(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo);
    void ClientActivateAbilitySucceedWithEventData(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData);
    void ClientActivateAbilitySucceed(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey);
    void ClientActivateAbilityFailed(FGameplayAbilitySpecHandle AbilityToActivate, int16 PredictionKey);
    void ClearAllAbilitiesWithInputID(int32 InputID);
    void ClearAllAbilities();
    void ClearAbility(const FGameplayAbilitySpecHandle& Handle);
    FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(TSubclassOf<class UGameplayEffect> GameplayEffectClass, class UAbilitySystemComponent* Target, float Level, FGameplayEffectContextHandle Context);
    FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(TSubclassOf<class UGameplayEffect> GameplayEffectClass, float Level, FGameplayEffectContextHandle EffectContext);
    FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(const FGameplayEffectSpecHandle& SpecHandle, class UAbilitySystemComponent* Target);
    FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(const FGameplayEffectSpecHandle& SpecHandle);
    void AbilityConfirmOrCancel__DelegateSignature();
    void AbilityAbilityKey__DelegateSignature(int32 InputID);
}; // Size: 0x1240

class UAbilitySystemDebugHUDExtension : public UObject
{
}; // Size: 0x28

class UAbilitySystemDebugHUDExtension_Attributes : public UAbilitySystemDebugHUDExtension
{
}; // Size: 0x80

class UAbilitySystemDebugHUDExtension_BlockedAbilityTags : public UAbilitySystemDebugHUDExtension
{
}; // Size: 0x80

class UAbilitySystemDebugHUDExtension_Tags : public UAbilitySystemDebugHUDExtension
{
}; // Size: 0x80

class UAbilitySystemGlobals : public UObject
{
    FSoftClassPath AbilitySystemGlobalsClassName;                                     // 0x0028 (size: 0x20)
    FGameplayTag ActivateFailIsDeadTag;                                               // 0x0074 (size: 0x8)
    FName ActivateFailIsDeadName;                                                     // 0x007C (size: 0x8)
    FGameplayTag ActivateFailCooldownTag;                                             // 0x0084 (size: 0x8)
    FName ActivateFailCooldownName;                                                   // 0x008C (size: 0x8)
    FGameplayTag ActivateFailCostTag;                                                 // 0x0094 (size: 0x8)
    FName ActivateFailCostName;                                                       // 0x009C (size: 0x8)
    FGameplayTag ActivateFailTagsBlockedTag;                                          // 0x00A4 (size: 0x8)
    FName ActivateFailTagsBlockedName;                                                // 0x00AC (size: 0x8)
    FGameplayTag ActivateFailTagsMissingTag;                                          // 0x00B4 (size: 0x8)
    FName ActivateFailTagsMissingName;                                                // 0x00BC (size: 0x8)
    FGameplayTag ActivateFailNetworkingTag;                                           // 0x00C4 (size: 0x8)
    FName ActivateFailNetworkingName;                                                 // 0x00CC (size: 0x8)
    int32 MinimalReplicationTagCountBits;                                             // 0x00D4 (size: 0x4)
    FNetSerializeScriptStructCache TargetDataStructCache;                             // 0x00D8 (size: 0x10)
    FNetSerializeScriptStructCache EffectContextStructCache;                          // 0x00E8 (size: 0x10)
    bool bAllowGameplayModEvaluationChannels;                                         // 0x00F8 (size: 0x1)
    EGameplayModEvaluationChannel DefaultGameplayModEvaluationChannel;                // 0x00F9 (size: 0x1)
    FName GameplayModEvaluationChannelAliases;                                        // 0x00FC (size: 0x50)
    FSoftObjectPath GlobalCurveTableName;                                             // 0x0150 (size: 0x20)
    class UCurveTable* GlobalCurveTable;                                              // 0x0170 (size: 0x8)
    FSoftObjectPath GlobalAttributeMetaDataTableName;                                 // 0x0178 (size: 0x20)
    class UDataTable* GlobalAttributeMetaDataTable;                                   // 0x0198 (size: 0x8)
    FSoftObjectPath GlobalAttributeSetDefaultsTableName;                              // 0x01A0 (size: 0x20)
    TArray<FSoftObjectPath> GlobalAttributeSetDefaultsTableNames;                     // 0x01C0 (size: 0x10)
    TArray<class UCurveTable*> GlobalAttributeDefaultsTables;                         // 0x01D0 (size: 0x10)
    FSoftObjectPath GlobalGameplayCueManagerClass;                                    // 0x01E0 (size: 0x20)
    FSoftObjectPath GlobalGameplayCueManagerName;                                     // 0x0200 (size: 0x20)
    TArray<FString> GameplayCueNotifyPaths;                                           // 0x0220 (size: 0x10)
    FSoftObjectPath GameplayTagResponseTableName;                                     // 0x0230 (size: 0x20)
    class UGameplayTagReponseTable* GameplayTagResponseTable;                         // 0x0250 (size: 0x8)
    bool PredictTargetGameplayEffects;                                                // 0x0259 (size: 0x1)
    bool ReplicateActivationOwnedTags;                                                // 0x025A (size: 0x1)
    class UGameplayCueManager* GlobalGameplayCueManager;                              // 0x0260 (size: 0x8)

}; // Size: 0x2F8

class UAbilitySystemTestAttributeSet : public UAttributeSet
{
    float MaxHealth;                                                                  // 0x0030 (size: 0x4)
    float Health;                                                                     // 0x0034 (size: 0x4)
    FGameplayAttributeData Mana;                                                      // 0x0038 (size: 0x10)
    float MaxMana;                                                                    // 0x0048 (size: 0x4)
    float Damage;                                                                     // 0x004C (size: 0x4)
    float SpellDamage;                                                                // 0x0050 (size: 0x4)
    float PhysicalDamage;                                                             // 0x0054 (size: 0x4)
    float CritChance;                                                                 // 0x0058 (size: 0x4)
    float CritMultiplier;                                                             // 0x005C (size: 0x4)
    float ArmorDamageReduction;                                                       // 0x0060 (size: 0x4)
    float DodgeChance;                                                                // 0x0064 (size: 0x4)
    float LifeSteal;                                                                  // 0x0068 (size: 0x4)
    float Strength;                                                                   // 0x006C (size: 0x4)
    float StackingAttribute1;                                                         // 0x0070 (size: 0x4)
    float StackingAttribute2;                                                         // 0x0074 (size: 0x4)
    float NoStackAttribute;                                                           // 0x0078 (size: 0x4)

}; // Size: 0x80

class UAbilityTask : public UGameplayTask
{
    class UGameplayAbility* Ability;                                                  // 0x0068 (size: 0x8)
    TWeakObjectPtr<class UAbilitySystemComponent> AbilitySystemComponent;             // 0x0070 (size: 0x8)

}; // Size: 0x80

class UAbilityTask_ApplyRootMotionConstantForce : public UAbilityTask_ApplyRootMotion_Base
{
    FAbilityTask_ApplyRootMotionConstantForceOnFinish OnFinish;                       // 0x00C8 (size: 0x10)
    void ApplyRootMotionConstantForceDelegate();
    FVector WorldDirection;                                                           // 0x00D8 (size: 0x18)
    float Strength;                                                                   // 0x00F0 (size: 0x4)
    float Duration;                                                                   // 0x00F4 (size: 0x4)
    bool bIsAdditive;                                                                 // 0x00F8 (size: 0x1)
    class UCurveFloat* StrengthOverTime;                                              // 0x0100 (size: 0x8)
    bool bEnableGravity;                                                              // 0x0108 (size: 0x1)

    class UAbilityTask_ApplyRootMotionConstantForce* ApplyRootMotionConstantForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector WorldDirection, float Strength, float Duration, bool bIsAdditive, class UCurveFloat* StrengthOverTime, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bEnableGravity);
}; // Size: 0x110

class UAbilityTask_ApplyRootMotionJumpForce : public UAbilityTask_ApplyRootMotion_Base
{
    FAbilityTask_ApplyRootMotionJumpForceOnFinish OnFinish;                           // 0x00C8 (size: 0x10)
    void ApplyRootMotionJumpForceDelegate();
    FAbilityTask_ApplyRootMotionJumpForceOnLanded OnLanded;                           // 0x00D8 (size: 0x10)
    void ApplyRootMotionJumpForceDelegate();
    FRotator Rotation;                                                                // 0x00E8 (size: 0x18)
    float Distance;                                                                   // 0x0100 (size: 0x4)
    float Height;                                                                     // 0x0104 (size: 0x4)
    float Duration;                                                                   // 0x0108 (size: 0x4)
    float MinimumLandedTriggerTime;                                                   // 0x010C (size: 0x4)
    bool bFinishOnLanded;                                                             // 0x0110 (size: 0x1)
    class UCurveVector* PathOffsetCurve;                                              // 0x0118 (size: 0x8)
    class UCurveFloat* TimeMappingCurve;                                              // 0x0120 (size: 0x8)

    void OnLandedCallback(const FHitResult& hit);
    void Finish();
    class UAbilityTask_ApplyRootMotionJumpForce* ApplyRootMotionJumpForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FRotator Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve);
}; // Size: 0x130

class UAbilityTask_ApplyRootMotionMoveToActorForce : public UAbilityTask_ApplyRootMotion_Base
{
    FAbilityTask_ApplyRootMotionMoveToActorForceOnFinished OnFinished;                // 0x00C8 (size: 0x10)
    void ApplyRootMotionMoveToActorForceDelegate(bool DestinationReached, bool TimedOut, FVector FinalTargetLocation);
    FVector StartLocation;                                                            // 0x00E0 (size: 0x18)
    FVector TargetLocation;                                                           // 0x00F8 (size: 0x18)
    class AActor* TargetActor;                                                        // 0x0110 (size: 0x8)
    class USceneComponent* TargetComponent;                                           // 0x0118 (size: 0x8)
    FVector TargetComponentRelativeLocation;                                          // 0x0120 (size: 0x18)
    FVector TargetLocationOffset;                                                     // 0x0138 (size: 0x18)
    ERootMotionMoveToActorTargetOffsetType OffsetAlignment;                           // 0x0150 (size: 0x1)
    float Duration;                                                                   // 0x0154 (size: 0x4)
    bool bDisableDestinationReachedInterrupt;                                         // 0x0158 (size: 0x1)
    float ReachedDestinationDistance;                                                 // 0x015C (size: 0x4)
    bool bSetNewMovementMode;                                                         // 0x0160 (size: 0x1)
    TEnumAsByte<EMovementMode> NewMovementMode;                                       // 0x0161 (size: 0x1)
    bool bRestrictSpeedToExpected;                                                    // 0x0162 (size: 0x1)
    class UCurveVector* PathOffsetCurve;                                              // 0x0168 (size: 0x8)
    class UCurveFloat* TimeMappingCurve;                                              // 0x0170 (size: 0x8)
    class UCurveFloat* TargetLerpSpeedHorizontalCurve;                                // 0x0178 (size: 0x8)
    class UCurveFloat* TargetLerpSpeedVerticalCurve;                                  // 0x0180 (size: 0x8)

    void OnTargetActorSwapped(class AActor* OriginalTarget, class AActor* NewTarget);
    void OnRep_TargetLocation();
    class UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToTargetDataActorForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FGameplayAbilityTargetDataHandle TargetDataHandle, int32 TargetDataIndex, int32 TargetActorIndex, FVector TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt, float ReachedDestinationDistance);
    class UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToComponentForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, class USceneComponent* TargetComponent, FVector TargetComponentRelativeLocation, FVector TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt, float ReachedDestinationDistance);
    class UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToActorForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, class AActor* TargetActor, FVector TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt, float ReachedDestinationDistance);
}; // Size: 0x190

class UAbilityTask_ApplyRootMotionMoveToForce : public UAbilityTask_ApplyRootMotion_Base
{
    FAbilityTask_ApplyRootMotionMoveToForceOnTimedOut OnTimedOut;                     // 0x00C8 (size: 0x10)
    void ApplyRootMotionMoveToForceDelegate();
    FAbilityTask_ApplyRootMotionMoveToForceOnTimedOutAndDestinationReached OnTimedOutAndDestinationReached; // 0x00D8 (size: 0x10)
    void ApplyRootMotionMoveToForceDelegate();
    FVector StartLocation;                                                            // 0x00E8 (size: 0x18)
    FVector TargetLocation;                                                           // 0x0100 (size: 0x18)
    float Duration;                                                                   // 0x0118 (size: 0x4)
    bool bSetNewMovementMode;                                                         // 0x011C (size: 0x1)
    TEnumAsByte<EMovementMode> NewMovementMode;                                       // 0x011D (size: 0x1)
    bool bRestrictSpeedToExpected;                                                    // 0x011E (size: 0x1)
    class UCurveVector* PathOffsetCurve;                                              // 0x0120 (size: 0x8)

    class UAbilityTask_ApplyRootMotionMoveToForce* ApplyRootMotionMoveToForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector TargetLocation, float Duration, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish);
}; // Size: 0x130

class UAbilityTask_ApplyRootMotionRadialForce : public UAbilityTask_ApplyRootMotion_Base
{
    FAbilityTask_ApplyRootMotionRadialForceOnFinish OnFinish;                         // 0x00C8 (size: 0x10)
    void ApplyRootMotionRadialForceDelegate();
    FVector Location;                                                                 // 0x00D8 (size: 0x18)
    class AActor* LocationActor;                                                      // 0x00F0 (size: 0x8)
    float Strength;                                                                   // 0x00F8 (size: 0x4)
    float Duration;                                                                   // 0x00FC (size: 0x4)
    float Radius;                                                                     // 0x0100 (size: 0x4)
    bool bIsPush;                                                                     // 0x0104 (size: 0x1)
    bool bIsAdditive;                                                                 // 0x0105 (size: 0x1)
    bool bNoZForce;                                                                   // 0x0106 (size: 0x1)
    class UCurveFloat* StrengthDistanceFalloff;                                       // 0x0108 (size: 0x8)
    class UCurveFloat* StrengthOverTime;                                              // 0x0110 (size: 0x8)
    bool bUseFixedWorldDirection;                                                     // 0x0118 (size: 0x1)
    FRotator FixedWorldDirection;                                                     // 0x0120 (size: 0x18)

    class UAbilityTask_ApplyRootMotionRadialForce* ApplyRootMotionRadialForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector Location, class AActor* LocationActor, float Strength, float Duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, class UCurveFloat* StrengthDistanceFalloff, class UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, FRotator FixedWorldDirection, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish);
}; // Size: 0x138

class UAbilityTask_ApplyRootMotion_Base : public UAbilityTask
{
    FName ForceName;                                                                  // 0x0080 (size: 0x8)
    ERootMotionFinishVelocityMode FinishVelocityMode;                                 // 0x0088 (size: 0x1)
    FVector FinishSetVelocity;                                                        // 0x0090 (size: 0x18)
    float FinishClampVelocity;                                                        // 0x00A8 (size: 0x4)
    class UCharacterMovementComponent* MovementComponent;                             // 0x00B0 (size: 0x8)

}; // Size: 0xC8

class UAbilityTask_MoveToLocation : public UAbilityTask
{
    FAbilityTask_MoveToLocationOnTargetLocationReached OnTargetLocationReached;       // 0x0080 (size: 0x10)
    void MoveToLocationDelegate();
    FVector StartLocation;                                                            // 0x0098 (size: 0x18)
    FVector TargetLocation;                                                           // 0x00B0 (size: 0x18)
    float DurationOfMovement;                                                         // 0x00C8 (size: 0x4)
    class UCurveFloat* LerpCurve;                                                     // 0x00D8 (size: 0x8)
    class UCurveVector* LerpCurveVector;                                              // 0x00E0 (size: 0x8)

    class UAbilityTask_MoveToLocation* MoveToLocation(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector Location, float Duration, class UCurveFloat* OptionalInterpolationCurve, class UCurveVector* OptionalVectorInterpolationCurve);
}; // Size: 0xE8

class UAbilityTask_NetworkSyncPoint : public UAbilityTask
{
    FAbilityTask_NetworkSyncPointOnSync OnSync;                                       // 0x0080 (size: 0x10)
    void NetworkSyncDelegate();

    class UAbilityTask_NetworkSyncPoint* WaitNetSync(class UGameplayAbility* OwningAbility, EAbilityTaskNetSyncType SyncType);
    void OnSignalCallback();
}; // Size: 0x98

class UAbilityTask_PlayAnimAndWait : public UAbilityTask
{
    FAbilityTask_PlayAnimAndWaitOnCompleted OnCompleted;                              // 0x0080 (size: 0x10)
    void PlayAnimWaitSimpleDelegate();
    FAbilityTask_PlayAnimAndWaitOnBlendOut OnBlendOut;                                // 0x0090 (size: 0x10)
    void PlayAnimWaitSimpleDelegate();
    FAbilityTask_PlayAnimAndWaitOnBlendIn OnBlendIn;                                  // 0x00A0 (size: 0x10)
    void PlayAnimWaitSimpleDelegate();
    FAbilityTask_PlayAnimAndWaitOnInterrupted OnInterrupted;                          // 0x00B0 (size: 0x10)
    void PlayAnimWaitSimpleDelegate();
    FAbilityTask_PlayAnimAndWaitOnCancelled OnCancelled;                              // 0x00C0 (size: 0x10)
    void PlayAnimWaitSimpleDelegate();
    class UAnimSequence* AnimSequenceToPlay;                                          // 0x0108 (size: 0x8)

    void OnMontageInterrupted();
    void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
    void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
    void OnMontageBlendedIn(class UAnimMontage* Montage);
    class UAbilityTask_PlayAnimAndWait* CreatePlayAnimAndWaitProxy(class UGameplayAbility* OwningAbility, FName TaskInstanceName, class UAnimSequence* AnimSequence, FName SlotName, float BlendInTime, float BlendOutTime, float InPlayRate, float StartTimeSeconds, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale);
}; // Size: 0x130

class UAbilityTask_PlayMontageAndWait : public UAbilityTask
{
    FAbilityTask_PlayMontageAndWaitOnCompleted OnCompleted;                           // 0x0080 (size: 0x10)
    void MontageWaitSimpleDelegate();
    FAbilityTask_PlayMontageAndWaitOnBlendedIn OnBlendedIn;                           // 0x0090 (size: 0x10)
    void MontageWaitSimpleDelegate();
    FAbilityTask_PlayMontageAndWaitOnBlendOut OnBlendOut;                             // 0x00A0 (size: 0x10)
    void MontageWaitSimpleDelegate();
    FAbilityTask_PlayMontageAndWaitOnInterrupted OnInterrupted;                       // 0x00B0 (size: 0x10)
    void MontageWaitSimpleDelegate();
    FAbilityTask_PlayMontageAndWaitOnCancelled OnCancelled;                           // 0x00C0 (size: 0x10)
    void MontageWaitSimpleDelegate();
    class UAnimMontage* MontageToPlay;                                                // 0x0108 (size: 0x8)
    float Rate;                                                                       // 0x0110 (size: 0x4)
    FName StartSection;                                                               // 0x0114 (size: 0x8)
    float AnimRootMotionTranslationScale;                                             // 0x011C (size: 0x4)
    float StartTimeSeconds;                                                           // 0x0120 (size: 0x4)
    bool bStopWhenAbilityEnds;                                                        // 0x0124 (size: 0x1)
    bool bAllowInterruptAfterBlendOut;                                                // 0x0125 (size: 0x1)

    void OnMontageInterrupted();
    void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
    void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
    void OnMontageBlendedIn(class UAnimMontage* Montage);
    void OnGameplayAbilityCancelled();
    class UAbilityTask_PlayMontageAndWait* CreatePlayMontageAndWaitProxy(class UGameplayAbility* OwningAbility, FName TaskInstanceName, class UAnimMontage* MontageToPlay, float Rate, FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float StartTimeSeconds, bool bAllowInterruptAfterBlendOut);
}; // Size: 0x128

class UAbilityTask_Repeat : public UAbilityTask
{
    FAbilityTask_RepeatOnPerformAction OnPerformAction;                               // 0x0080 (size: 0x10)
    void RepeatedActionDelegate(int32 ActionNumber);
    FAbilityTask_RepeatOnFinished OnFinished;                                         // 0x0090 (size: 0x10)
    void RepeatedActionDelegate(int32 ActionNumber);

    class UAbilityTask_Repeat* RepeatAction(class UGameplayAbility* OwningAbility, float TimeBetweenActions, int32 TotalActionCount);
}; // Size: 0xB8

class UAbilityTask_SpawnActor : public UAbilityTask
{
    FAbilityTask_SpawnActorSuccess Success;                                           // 0x0080 (size: 0x10)
    void SpawnActorDelegate(class AActor* SpawnedActor);
    FAbilityTask_SpawnActorDidNotSpawn DidNotSpawn;                                   // 0x0090 (size: 0x10)
    void SpawnActorDelegate(class AActor* SpawnedActor);

    class UAbilityTask_SpawnActor* SpawnActor(class UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, TSubclassOf<class AActor> Class);
    void FinishSpawningActor(class UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, class AActor* SpawnedActor);
    bool BeginSpawningActor(class UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, TSubclassOf<class AActor> Class, class AActor*& SpawnedActor);
}; // Size: 0xC8

class UAbilityTask_StartAbilityState : public UAbilityTask
{
    FAbilityTask_StartAbilityStateOnStateEnded OnStateEnded;                          // 0x0080 (size: 0x10)
    void AbilityStateDelegate();
    FAbilityTask_StartAbilityStateOnStateInterrupted OnStateInterrupted;              // 0x0090 (size: 0x10)
    void AbilityStateDelegate();

    class UAbilityTask_StartAbilityState* StartAbilityState(class UGameplayAbility* OwningAbility, FName StateName, bool bEndCurrentState);
}; // Size: 0xB8

class UAbilityTask_VisualizeTargeting : public UAbilityTask
{
    FAbilityTask_VisualizeTargetingTimeElapsed TimeElapsed;                           // 0x0080 (size: 0x10)
    void VisualizeTargetingDelegate();

    class UAbilityTask_VisualizeTargeting* VisualizeTargetingUsingActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* TargetActor, FName TaskInstanceName, float Duration);
    class UAbilityTask_VisualizeTargeting* VisualizeTargeting(class UGameplayAbility* OwningAbility, TSubclassOf<class AGameplayAbilityTargetActor> Class, FName TaskInstanceName, float Duration);
    void FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor);
    bool BeginSpawningActor(class UGameplayAbility* OwningAbility, TSubclassOf<class AGameplayAbilityTargetActor> Class, class AGameplayAbilityTargetActor*& SpawnedActor);
}; // Size: 0xA8

class UAbilityTask_WaitAbilityActivate : public UAbilityTask
{
    FAbilityTask_WaitAbilityActivateOnActivate OnActivate;                            // 0x0080 (size: 0x10)
    void WaitAbilityActivateDelegate(class UGameplayAbility* ActivatedAbility);

    class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivateWithTagRequirements(class UGameplayAbility* OwningAbility, FGameplayTagRequirements TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce);
    class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate_Query(class UGameplayAbility* OwningAbility, FGameplayTagQuery Query, bool IncludeTriggeredAbilities, bool TriggerOnce);
    class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate(class UGameplayAbility* OwningAbility, FGameplayTag WithTag, FGameplayTag WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce);
    void OnAbilityActivate(class UGameplayAbility* ActivatedAbility);
}; // Size: 0x180

class UAbilityTask_WaitAbilityCommit : public UAbilityTask
{
    FAbilityTask_WaitAbilityCommitOnCommit OnCommit;                                  // 0x0080 (size: 0x10)
    void WaitAbilityCommitDelegate(class UGameplayAbility* ActivatedAbility);

    class UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit_Query(class UGameplayAbility* OwningAbility, FGameplayTagQuery Query, bool TriggerOnce);
    class UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit(class UGameplayAbility* OwningAbility, FGameplayTag WithTag, FGameplayTag WithoutTage, bool TriggerOnce);
    void OnAbilityCommit(class UGameplayAbility* ActivatedAbility);
}; // Size: 0xF8

class UAbilityTask_WaitAttributeChange : public UAbilityTask
{
    FAbilityTask_WaitAttributeChangeOnChange OnChange;                                // 0x0080 (size: 0x10)
    void WaitAttributeChangeDelegate();
    class UAbilitySystemComponent* ExternalOwner;                                     // 0x00F0 (size: 0x8)

    class UAbilityTask_WaitAttributeChange* WaitForAttributeChangeWithComparison(class UGameplayAbility* OwningAbility, FGameplayAttribute InAttribute, FGameplayTag InWithTag, FGameplayTag InWithoutTag, TEnumAsByte<EWaitAttributeChangeComparison::Type> InComparisonType, float InComparisonValue, bool TriggerOnce, class AActor* OptionalExternalOwner);
    class UAbilityTask_WaitAttributeChange* WaitForAttributeChange(class UGameplayAbility* OwningAbility, FGameplayAttribute Attribute, FGameplayTag WithSrcTag, FGameplayTag WithoutSrcTag, bool TriggerOnce, class AActor* OptionalExternalOwner);
}; // Size: 0xF8

class UAbilityTask_WaitAttributeChangeRatioThreshold : public UAbilityTask
{
    FAbilityTask_WaitAttributeChangeRatioThresholdOnChange OnChange;                  // 0x0080 (size: 0x10)
    void WaitAttributeChangeRatioThresholdDelegate(bool bMatchesComparison, float CurrentRatio);
    class UAbilitySystemComponent* ExternalOwner;                                     // 0x0138 (size: 0x8)

    class UAbilityTask_WaitAttributeChangeRatioThreshold* WaitForAttributeChangeRatioThreshold(class UGameplayAbility* OwningAbility, FGameplayAttribute AttributeNumerator, FGameplayAttribute AttributeDenominator, TEnumAsByte<EWaitAttributeChangeComparison::Type> ComparisonType, float ComparisonValue, bool bTriggerOnce, class AActor* OptionalExternalOwner);
}; // Size: 0x140

class UAbilityTask_WaitAttributeChangeThreshold : public UAbilityTask
{
    FAbilityTask_WaitAttributeChangeThresholdOnChange OnChange;                       // 0x0080 (size: 0x10)
    void WaitAttributeChangeThresholdDelegate(bool bMatchesComparison, float CurrentValue);
    class UAbilitySystemComponent* ExternalOwner;                                     // 0x00E8 (size: 0x8)

    class UAbilityTask_WaitAttributeChangeThreshold* WaitForAttributeChangeThreshold(class UGameplayAbility* OwningAbility, FGameplayAttribute Attribute, TEnumAsByte<EWaitAttributeChangeComparison::Type> ComparisonType, float ComparisonValue, bool bTriggerOnce, class AActor* OptionalExternalOwner);
}; // Size: 0xF0

class UAbilityTask_WaitCancel : public UAbilityTask
{
    FAbilityTask_WaitCancelOnCancel OnCancel;                                         // 0x0080 (size: 0x10)
    void WaitCancelDelegate();

    class UAbilityTask_WaitCancel* WaitCancel(class UGameplayAbility* OwningAbility);
    void OnLocalCancelCallback();
    void OnCancelCallback();
}; // Size: 0x98

class UAbilityTask_WaitConfirm : public UAbilityTask
{
    FAbilityTask_WaitConfirmOnConfirm OnConfirm;                                      // 0x0080 (size: 0x10)
    void GenericGameplayTaskDelegate();

    class UAbilityTask_WaitConfirm* WaitConfirm(class UGameplayAbility* OwningAbility);
    void OnConfirmCallback(class UGameplayAbility* InAbility);
}; // Size: 0xA0

class UAbilityTask_WaitConfirmCancel : public UAbilityTask
{
    FAbilityTask_WaitConfirmCancelOnConfirm OnConfirm;                                // 0x0080 (size: 0x10)
    void WaitConfirmCancelDelegate();
    FAbilityTask_WaitConfirmCancelOnCancel OnCancel;                                  // 0x0090 (size: 0x10)
    void WaitConfirmCancelDelegate();

    class UAbilityTask_WaitConfirmCancel* WaitConfirmCancel(class UGameplayAbility* OwningAbility);
    void OnLocalConfirmCallback();
    void OnLocalCancelCallback();
    void OnConfirmCallback();
    void OnCancelCallback();
}; // Size: 0xA8

class UAbilityTask_WaitDelay : public UAbilityTask
{
    FAbilityTask_WaitDelayOnFinish OnFinish;                                          // 0x0080 (size: 0x10)
    void WaitDelayDelegate();

    class UAbilityTask_WaitDelay* WaitDelay(class UGameplayAbility* OwningAbility, float Time);
}; // Size: 0x98

class UAbilityTask_WaitGameplayEffectApplied : public UAbilityTask
{
    class UAbilitySystemComponent* ExternalOwner;                                     // 0x0238 (size: 0x8)

    void OnApplyGameplayEffectCallback(class UAbilitySystemComponent* Target, const FGameplayEffectSpec& SpecApplied, FActiveGameplayEffectHandle ActiveHandle);
}; // Size: 0x248

class UAbilityTask_WaitGameplayEffectApplied_Self : public UAbilityTask_WaitGameplayEffectApplied
{
    FAbilityTask_WaitGameplayEffectApplied_SelfOnApplied OnApplied;                   // 0x0248 (size: 0x10)
    void GameplayEffectAppliedSelfDelegate(class AActor* Source, FGameplayEffectSpecHandle SpecHandle, FActiveGameplayEffectHandle ActiveHandle);

    class UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf_Query(class UGameplayAbility* OwningAbility, const FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagQuery SourceTagQuery, FGameplayTagQuery TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
    class UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf(class UGameplayAbility* OwningAbility, const FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
}; // Size: 0x268

class UAbilityTask_WaitGameplayEffectApplied_Target : public UAbilityTask_WaitGameplayEffectApplied
{
    FAbilityTask_WaitGameplayEffectApplied_TargetOnApplied OnApplied;                 // 0x0248 (size: 0x10)
    void GameplayEffectAppliedTargetDelegate(class AActor* Target, FGameplayEffectSpecHandle SpecHandle, FActiveGameplayEffectHandle ActiveHandle);

    class UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget_Query(class UGameplayAbility* OwningAbility, const FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagQuery SourceTagQuery, FGameplayTagQuery TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
    class UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget(class UGameplayAbility* OwningAbility, const FGameplayTargetDataFilterHandle TargetFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffects);
}; // Size: 0x268

class UAbilityTask_WaitGameplayEffectBlockedImmunity : public UAbilityTask
{
    FAbilityTask_WaitGameplayEffectBlockedImmunityBLocked bLocked;                    // 0x0080 (size: 0x10)
    void GameplayEffectBlockedDelegate(FGameplayEffectSpecHandle BlockedSpec, FActiveGameplayEffectHandle ImmunityGameplayEffectHandle);
    class UAbilitySystemComponent* ExternalOwner;                                     // 0x01A8 (size: 0x8)

    class UAbilityTask_WaitGameplayEffectBlockedImmunity* WaitGameplayEffectBlockedByImmunity(class UGameplayAbility* OwningAbility, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce);
}; // Size: 0x1B8

class UAbilityTask_WaitGameplayEffectRemoved : public UAbilityTask
{
    FAbilityTask_WaitGameplayEffectRemovedOnRemoved OnRemoved;                        // 0x0080 (size: 0x10)
    void WaitGameplayEffectRemovedDelegate(const FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo);
    FAbilityTask_WaitGameplayEffectRemovedInvalidHandle InvalidHandle;                // 0x0090 (size: 0x10)
    void WaitGameplayEffectRemovedDelegate(const FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo);

    class UAbilityTask_WaitGameplayEffectRemoved* WaitForGameplayEffectRemoved(class UGameplayAbility* OwningAbility, FActiveGameplayEffectHandle Handle);
    void OnGameplayEffectRemoved(const FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo);
}; // Size: 0xC0

class UAbilityTask_WaitGameplayEffectStackChange : public UAbilityTask
{
    FAbilityTask_WaitGameplayEffectStackChangeOnChange OnChange;                      // 0x0080 (size: 0x10)
    void WaitGameplayEffectStackChangeDelegate(FActiveGameplayEffectHandle Handle, int32 NewCount, int32 OldCount);
    FAbilityTask_WaitGameplayEffectStackChangeInvalidHandle InvalidHandle;            // 0x0090 (size: 0x10)
    void WaitGameplayEffectStackChangeDelegate(FActiveGameplayEffectHandle Handle, int32 NewCount, int32 OldCount);

    class UAbilityTask_WaitGameplayEffectStackChange* WaitForGameplayEffectStackChange(class UGameplayAbility* OwningAbility, FActiveGameplayEffectHandle Handle);
    void OnGameplayEffectStackChange(FActiveGameplayEffectHandle Handle, int32 NewCount, int32 OldCount);
}; // Size: 0xB8

class UAbilityTask_WaitGameplayEvent : public UAbilityTask
{
    FAbilityTask_WaitGameplayEventEventReceived EventReceived;                        // 0x0080 (size: 0x10)
    void WaitGameplayEventDelegate(FGameplayEventData Payload);
    class UAbilitySystemComponent* OptionalExternalTarget;                            // 0x0098 (size: 0x8)

    class UAbilityTask_WaitGameplayEvent* WaitGameplayEvent(class UGameplayAbility* OwningAbility, FGameplayTag EventTag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact);
}; // Size: 0xB0

class UAbilityTask_WaitGameplayTag : public UAbilityTask
{
    class UAbilitySystemComponent* OptionalExternalTarget;                            // 0x0090 (size: 0x8)

    void GameplayTagCallback(const FGameplayTag Tag, int32 NewCount);
}; // Size: 0xA8

class UAbilityTask_WaitGameplayTagAdded : public UAbilityTask_WaitGameplayTag
{
    FAbilityTask_WaitGameplayTagAddedAdded Added;                                     // 0x00A8 (size: 0x10)
    void WaitGameplayTagDelegate();

    class UAbilityTask_WaitGameplayTagAdded* WaitGameplayTagAdd(class UGameplayAbility* OwningAbility, FGameplayTag Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce);
}; // Size: 0xB8

class UAbilityTask_WaitGameplayTagCountChanged : public UAbilityTask
{
    FAbilityTask_WaitGameplayTagCountChangedTagCountChanged TagCountChanged;          // 0x0080 (size: 0x10)
    void WaitGameplayTagCountDelegate(int32 TagCount);
    class UAbilitySystemComponent* OptionalExternalTarget;                            // 0x0098 (size: 0x8)

    class UAbilityTask_WaitGameplayTagCountChanged* WaitGameplayTagCountChange(class UGameplayAbility* OwningAbility, FGameplayTag Tag, class AActor* InOptionalExternalTarget);
}; // Size: 0xA8

class UAbilityTask_WaitGameplayTagQuery : public UAbilityTask
{
    FAbilityTask_WaitGameplayTagQueryTriggered Triggered;                             // 0x0140 (size: 0x10)
    void WaitGameplayTagQueryDelegate();
    class UAbilitySystemComponent* OptionalExternalTarget;                            // 0x0150 (size: 0x8)

    class UAbilityTask_WaitGameplayTagQuery* WaitGameplayTagQuery(class UGameplayAbility* OwningAbility, const FGameplayTagQuery TagQuery, const class AActor* InOptionalExternalTarget, const EWaitGameplayTagQueryTriggerCondition TriggerCondition, const bool bOnlyTriggerOnce);
    void UpdateTargetTags(const FGameplayTag Tag, int32 NewCount);
}; // Size: 0x160

class UAbilityTask_WaitGameplayTagRemoved : public UAbilityTask_WaitGameplayTag
{
    FAbilityTask_WaitGameplayTagRemovedRemoved Removed;                               // 0x00A8 (size: 0x10)
    void WaitGameplayTagDelegate();

    class UAbilityTask_WaitGameplayTagRemoved* WaitGameplayTagRemove(class UGameplayAbility* OwningAbility, FGameplayTag Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce);
}; // Size: 0xB8

class UAbilityTask_WaitInputPress : public UAbilityTask
{
    FAbilityTask_WaitInputPressOnPress OnPress;                                       // 0x0080 (size: 0x10)
    void InputPressDelegate(float TimeWaited);

    class UAbilityTask_WaitInputPress* WaitInputPress(class UGameplayAbility* OwningAbility, bool bTestAlreadyPressed);
    void OnPressCallback();
}; // Size: 0xA0

class UAbilityTask_WaitInputRelease : public UAbilityTask
{
    FAbilityTask_WaitInputReleaseOnRelease OnRelease;                                 // 0x0080 (size: 0x10)
    void InputReleaseDelegate(float TimeHeld);

    class UAbilityTask_WaitInputRelease* WaitInputRelease(class UGameplayAbility* OwningAbility, bool bTestAlreadyReleased);
    void OnReleaseCallback();
}; // Size: 0xA0

class UAbilityTask_WaitMovementModeChange : public UAbilityTask
{
    FAbilityTask_WaitMovementModeChangeOnChange OnChange;                             // 0x0080 (size: 0x10)
    void MovementModeChangedDelegate(TEnumAsByte<EMovementMode> NewMovementMode);

    void OnMovementModeChange(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    class UAbilityTask_WaitMovementModeChange* CreateWaitMovementModeChange(class UGameplayAbility* OwningAbility, TEnumAsByte<EMovementMode> NewMode);
}; // Size: 0xA0

class UAbilityTask_WaitOverlap : public UAbilityTask
{
    FAbilityTask_WaitOverlapOnOverlap OnOverlap;                                      // 0x0080 (size: 0x10)
    void WaitOverlapDelegate(const FGameplayAbilityTargetDataHandle& TargetData);

    class UAbilityTask_WaitOverlap* WaitForOverlap(class UGameplayAbility* OwningAbility);
    void OnHitCallback(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& hit);
}; // Size: 0x90

class UAbilityTask_WaitTargetData : public UAbilityTask
{
    FAbilityTask_WaitTargetDataValidData ValidData;                                   // 0x0080 (size: 0x10)
    void WaitTargetDataDelegate(const FGameplayAbilityTargetDataHandle& Data);
    FAbilityTask_WaitTargetDataCancelled Cancelled;                                   // 0x0090 (size: 0x10)
    void WaitTargetDataDelegate(const FGameplayAbilityTargetDataHandle& Data);
    TSubclassOf<class AGameplayAbilityTargetActor> TargetClass;                       // 0x00A0 (size: 0x8)
    class AGameplayAbilityTargetActor* TargetActor;                                   // 0x00A8 (size: 0x8)

    class UAbilityTask_WaitTargetData* WaitTargetDataUsingActor(class UGameplayAbility* OwningAbility, FName TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation::Type> ConfirmationType, class AGameplayAbilityTargetActor* TargetActor);
    class UAbilityTask_WaitTargetData* WaitTargetData(class UGameplayAbility* OwningAbility, FName TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation::Type> ConfirmationType, TSubclassOf<class AGameplayAbilityTargetActor> Class);
    void OnTargetDataReplicatedCancelledCallback();
    void OnTargetDataReplicatedCallback(const FGameplayAbilityTargetDataHandle& Data, FGameplayTag ActivationTag);
    void OnTargetDataReadyCallback(const FGameplayAbilityTargetDataHandle& Data);
    void OnTargetDataCancelledCallback(const FGameplayAbilityTargetDataHandle& Data);
    void FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor);
    bool BeginSpawningActor(class UGameplayAbility* OwningAbility, TSubclassOf<class AGameplayAbilityTargetActor> Class, class AGameplayAbilityTargetActor*& SpawnedActor);
}; // Size: 0xC0

class UAbilityTask_WaitVelocityChange : public UAbilityTask
{
    FAbilityTask_WaitVelocityChangeOnVelocityChage OnVelocityChage;                   // 0x0080 (size: 0x10)
    void WaitVelocityChangeDelegate();
    TWeakObjectPtr<class UMovementComponent> CachedMovementComponent;                 // 0x0090 (size: 0x8)

    class UAbilityTask_WaitVelocityChange* CreateWaitVelocityChange(class UGameplayAbility* OwningAbility, FVector Direction, float MinimumMagnitude);
}; // Size: 0xB8

class UAdditionalEffectsGameplayEffectComponent : public UGameplayEffectComponent
{
    bool bOnApplicationCopyDataFromOriginalSpec;                                      // 0x0028 (size: 0x1)
    TArray<FConditionalGameplayEffect> OnApplicationGameplayEffects;                  // 0x0030 (size: 0x10)
    TArray<class TSubclassOf<UGameplayEffect>> OnCompleteAlways;                      // 0x0040 (size: 0x10)
    TArray<class TSubclassOf<UGameplayEffect>> OnCompleteNormal;                      // 0x0050 (size: 0x10)
    TArray<class TSubclassOf<UGameplayEffect>> OnCompletePrematurely;                 // 0x0060 (size: 0x10)

}; // Size: 0x70

class UAnimNotify_GameplayCue : public UAnimNotify
{
    FGameplayCueTag GameplayCue;                                                      // 0x0038 (size: 0x8)

}; // Size: 0x40

class UAnimNotify_GameplayCueState : public UAnimNotifyState
{
    FGameplayCueTag GameplayCue;                                                      // 0x0030 (size: 0x8)

}; // Size: 0x38

class UAssetTagsGameplayEffectComponent : public UGameplayEffectComponent
{
    FInheritedTagContainer InheritableAssetTags;                                      // 0x0028 (size: 0x60)

}; // Size: 0x88

class UAttributeSet : public UObject
{
}; // Size: 0x30

class UBlockAbilityTagsGameplayEffectComponent : public UGameplayEffectComponent
{
    FInheritedTagContainer InheritableBlockedAbilityTagsContainer;                    // 0x0028 (size: 0x60)

}; // Size: 0x88

class UChanceToApplyGameplayEffectComponent : public UGameplayEffectComponent
{
    FScalableFloat ChanceToApplyToTarget;                                             // 0x0028 (size: 0x28)

}; // Size: 0x50

class UCustomCanApplyGameplayEffectComponent : public UGameplayEffectComponent
{
    TArray<class TSubclassOf<UGameplayEffectCustomApplicationRequirement>> ApplicationRequirements; // 0x0028 (size: 0x10)

}; // Size: 0x38

class UGameplayAbilitiesDeveloperSettings : public UDeveloperSettings
{
    FSoftClassPath AbilitySystemGlobalsClassName;                                     // 0x0038 (size: 0x20)
    bool bUseDebugTargetFromHud;                                                      // 0x0058 (size: 0x1)
    TArray<FSoftObjectPath> GlobalAttributeSetDefaultsTableNames;                     // 0x0060 (size: 0x10)
    FSoftObjectPath GlobalAttributeMetaDataTableName;                                 // 0x0070 (size: 0x20)
    FSoftClassPath GlobalGameplayCueManagerClass;                                     // 0x0090 (size: 0x20)
    FSoftObjectPath GlobalGameplayCueManagerName;                                     // 0x00B0 (size: 0x20)
    TArray<FString> GameplayCueNotifyPaths;                                           // 0x00D0 (size: 0x10)
    FSoftObjectPath GlobalCurveTableName;                                             // 0x00E0 (size: 0x20)
    bool PredictTargetGameplayEffects;                                                // 0x0100 (size: 0x1)
    bool ReplicateActivationOwnedTags;                                                // 0x0101 (size: 0x1)
    FGameplayTag ActivateFailCanActivateAbilityTag;                                   // 0x0104 (size: 0x8)
    FGameplayTag ActivateFailCooldownTag;                                             // 0x010C (size: 0x8)
    FGameplayTag ActivateFailCostTag;                                                 // 0x0114 (size: 0x8)
    FGameplayTag ActivateFailNetworkingTag;                                           // 0x011C (size: 0x8)
    FGameplayTag ActivateFailTagsBlockedTag;                                          // 0x0124 (size: 0x8)
    FGameplayTag ActivateFailTagsMissingTag;                                          // 0x012C (size: 0x8)
    FSoftObjectPath GameplayTagResponseTableName;                                     // 0x0138 (size: 0x20)
    bool bAllowGameplayModEvaluationChannels;                                         // 0x0158 (size: 0x1)
    EGameplayModEvaluationChannel DefaultGameplayModEvaluationChannel;                // 0x0159 (size: 0x1)
    FName GameplayModEvaluationChannelAliases;                                        // 0x015C (size: 0x50)
    int32 MinimalReplicationTagCountBits;                                             // 0x01AC (size: 0x4)

}; // Size: 0x1B0

class UGameplayAbilitiesEditorDeveloperSettings : public UDeveloperSettingsBackedByCVars
{
    bool bIgnoreCooldowns;                                                            // 0x0038 (size: 0x1)
    bool bIgnoreCosts;                                                                // 0x0039 (size: 0x1)
    float AbilitySystemGlobalScaler;                                                  // 0x003C (size: 0x4)
    float DebugDrawMaxDistance;                                                       // 0x0040 (size: 0x4)

}; // Size: 0x48

class UGameplayAbility : public UObject
{
    FGameplayTagContainer AbilityTags;                                                // 0x00A8 (size: 0x20)
    bool bReplicateInputDirectly;                                                     // 0x00C8 (size: 0x1)
    bool RemoteInstanceEnded;                                                         // 0x00C9 (size: 0x1)
    TEnumAsByte<EGameplayAbilityReplicationPolicy::Type> ReplicationPolicy;           // 0x00CE (size: 0x1)
    TEnumAsByte<EGameplayAbilityInstancingPolicy::Type> InstancingPolicy;             // 0x00CF (size: 0x1)
    bool bServerRespectsRemoteAbilityCancellation;                                    // 0x00D0 (size: 0x1)
    bool bRetriggerInstancedAbility;                                                  // 0x00D1 (size: 0x1)
    FGameplayAbilityActivationInfo CurrentActivationInfo;                             // 0x00D4 (size: 0x14)
    FGameplayEventData CurrentEventData;                                              // 0x00E8 (size: 0xB0)
    TEnumAsByte<EGameplayAbilityNetExecutionPolicy::Type> NetExecutionPolicy;         // 0x0198 (size: 0x1)
    TEnumAsByte<EGameplayAbilityNetSecurityPolicy::Type> NetSecurityPolicy;           // 0x0199 (size: 0x1)
    TSubclassOf<class UGameplayEffect> CostGameplayEffectClass;                       // 0x01A0 (size: 0x8)
    TArray<FAbilityTriggerData> AbilityTriggers;                                      // 0x01A8 (size: 0x10)
    TSubclassOf<class UGameplayEffect> CooldownGameplayEffectClass;                   // 0x01B8 (size: 0x8)
    FGameplayTagContainer CancelAbilitiesWithTag;                                     // 0x01C0 (size: 0x20)
    FGameplayTagContainer BlockAbilitiesWithTag;                                      // 0x01E0 (size: 0x20)
    FGameplayTagContainer ActivationOwnedTags;                                        // 0x0200 (size: 0x20)
    FGameplayTagContainer ActivationRequiredTags;                                     // 0x0220 (size: 0x20)
    FGameplayTagContainer ActivationBlockedTags;                                      // 0x0240 (size: 0x20)
    FGameplayTagContainer SourceRequiredTags;                                         // 0x0260 (size: 0x20)
    FGameplayTagContainer SourceBlockedTags;                                          // 0x0280 (size: 0x20)
    FGameplayTagContainer TargetRequiredTags;                                         // 0x02A0 (size: 0x20)
    FGameplayTagContainer TargetBlockedTags;                                          // 0x02C0 (size: 0x20)
    TArray<class UGameplayTask*> ActiveTasks;                                         // 0x0300 (size: 0x10)
    class UAnimMontage* CurrentMontage;                                               // 0x0320 (size: 0x8)
    bool bIsActive;                                                                   // 0x0388 (size: 0x1)
    bool bIsAbilityEnding;                                                            // 0x0389 (size: 0x1)
    bool bIsCancelable;                                                               // 0x038A (size: 0x1)
    bool bIsBlockingOtherAbilities;                                                   // 0x038B (size: 0x1)
    bool bMarkPendingKillOnAbilityEnd;                                                // 0x03A0 (size: 0x1)

    void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities);
    void SetCanBeCanceled(bool bCanBeCanceled);
    void SendGameplayEvent(FGameplayTag EventTag, FGameplayEventData Payload);
    void RemoveGrantedByEffect();
    void MontageStop(float OverrideBlendOutTime);
    void MontageSetNextSectionName(FName FromSectionName, FName ToSectionName);
    void MontageJumpToSection(FName SectionName);
    FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(FName SocketName);
    FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor();
    FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(TSubclassOf<class UGameplayEffect> GameplayEffectClass, float Level);
    bool K2_ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo ActorInfo, FGameplayEventData Payload);
    void K2_RemoveGameplayCue(FGameplayTag GameplayCueTag);
    void K2_OnEndAbility(bool bWasCancelled);
    bool K2_HasAuthority();
    void K2_ExecuteGameplayCueWithParams(FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters);
    void K2_ExecuteGameplayCue(FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context);
    void K2_EndAbilityLocally();
    void K2_EndAbility();
    void K2_CommitExecute();
    bool K2_CommitAbilityCost(bool BroadcastCommitEvent);
    bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown);
    bool K2_CommitAbility();
    bool K2_CheckAbilityCost();
    bool K2_CheckAbilityCooldown();
    void K2_CancelAbility();
    bool K2_CanActivateAbility(FGameplayAbilityActorInfo ActorInfo, const FGameplayAbilitySpecHandle Handle, FGameplayTagContainer& RelevantTags);
    TArray<FActiveGameplayEffectHandle> K2_ApplyGameplayEffectSpecToTarget(const FGameplayEffectSpecHandle EffectSpecHandle, FGameplayAbilityTargetDataHandle TargetData);
    FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(const FGameplayEffectSpecHandle EffectSpecHandle);
    void K2_AddGameplayCueWithParams(FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd);
    void K2_AddGameplayCue(FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context, bool bRemoveOnAbilityEnd);
    void K2_ActivateAbilityFromEvent(const FGameplayEventData& EventData);
    void K2_ActivateAbility();
    bool IsLocallyControlled();
    void InvalidateClientPredictionKey();
    class UObject* GetSourceObject_BP(FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo& ActorInfo);
    class USkeletalMeshComponent* GetOwningComponentFromActorInfo();
    class AActor* GetOwningActorFromActorInfo();
    FGameplayEffectContextHandle GetGrantedByEffectContext();
    class UObject* GetCurrentSourceObject();
    class UAnimMontage* GetCurrentMontage();
    float GetCooldownTimeRemaining();
    FGameplayEffectContextHandle GetContextFromOwner(FGameplayAbilityTargetDataHandle OptionalTargetData);
    class AActor* GetAvatarActorFromActorInfo();
    FGameplayAbilityActorInfo GetActorInfo();
    class UAbilitySystemComponent* GetAbilitySystemComponentFromActorInfo();
    int32 GetAbilityLevel_BP(FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo& ActorInfo);
    int32 GetAbilityLevel();
    void EndTaskByInstanceName(FName InstanceName);
    void EndAbilityState(FName OptionalStateNameToEnd);
    void ConfirmTaskByInstanceName(FName InstanceName, bool bEndTask);
    void CancelTaskByInstanceName(FName InstanceName);
    void BP_RemoveGameplayEffectFromOwnerWithHandle(FActiveGameplayEffectHandle Handle, int32 StacksToRemove);
    void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(FGameplayTagContainer WithGrantedTags, int32 StacksToRemove);
    void BP_RemoveGameplayEffectFromOwnerWithAssetTags(FGameplayTagContainer WithAssetTags, int32 StacksToRemove);
    TArray<FActiveGameplayEffectHandle> BP_ApplyGameplayEffectToTarget(FGameplayAbilityTargetDataHandle TargetData, TSubclassOf<class UGameplayEffect> GameplayEffectClass, int32 GameplayEffectLevel, int32 Stacks);
    FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(TSubclassOf<class UGameplayEffect> GameplayEffectClass, int32 GameplayEffectLevel, int32 Stacks);
}; // Size: 0x3A8

class UGameplayAbilityBlueprint : public UBlueprint
{
}; // Size: 0xA8

class UGameplayAbilitySet : public UDataAsset
{
    TArray<FGameplayAbilityBindInfo> Abilities;                                       // 0x0030 (size: 0x10)

}; // Size: 0x40

class UGameplayAbility_CharacterJump : public UGameplayAbility
{
}; // Size: 0x3A8

class UGameplayAbility_Montage : public UGameplayAbility
{
    class UAnimMontage* MontageToPlay;                                                // 0x03A8 (size: 0x8)
    float PlayRate;                                                                   // 0x03B0 (size: 0x4)
    FName SectionName;                                                                // 0x03B4 (size: 0x8)
    TArray<class TSubclassOf<UGameplayEffect>> GameplayEffectClassesWhileAnimating;   // 0x03C0 (size: 0x10)
    TArray<class UGameplayEffect*> GameplayEffectsWhileAnimating;                     // 0x03D0 (size: 0x10)

}; // Size: 0x3E0

class UGameplayCueFunctionLibrary : public UBlueprintFunctionLibrary
{

    void RemoveGameplayCueOnActor(class AActor* Target, const FGameplayTag GameplayCueTag, const FGameplayCueParameters& Parameters);
    FGameplayCueParameters MakeGameplayCueParametersFromHitResult(const FHitResult& HitResult);
    void ExecuteGameplayCueOnActor(class AActor* Target, const FGameplayTag GameplayCueTag, const FGameplayCueParameters& Parameters);
    void AddGameplayCueOnActor(class AActor* Target, const FGameplayTag GameplayCueTag, const FGameplayCueParameters& Parameters);
}; // Size: 0x28

class UGameplayCueManager : public UDataAsset
{
    FGameplayCueObjectLibrary RuntimeGameplayCueObjectLibrary;                        // 0x0048 (size: 0x50)
    FGameplayCueObjectLibrary EditorGameplayCueObjectLibrary;                         // 0x0098 (size: 0x50)
    TArray<class UClass*> LoadedGameplayCueNotifyClasses;                             // 0x0260 (size: 0x10)
    TArray<class TSubclassOf<AGameplayCueNotify_Actor>> GameplayCueClassesForPreallocation; // 0x0270 (size: 0x10)
    TArray<FGameplayCuePendingExecute> PendingExecuteCues;                            // 0x0280 (size: 0x10)
    int32 GameplayCueSendContextCount;                                                // 0x0290 (size: 0x4)
    TArray<FPreallocationInfo> PreallocationInfoList_Internal;                        // 0x0298 (size: 0x10)

}; // Size: 0x2C0

class UGameplayCueNotify_Burst : public UGameplayCueNotify_Static
{
    FGameplayCueNotify_SpawnCondition DefaultSpawnCondition;                          // 0x0040 (size: 0x38)
    FGameplayCueNotify_PlacementInfo DefaultPlacementInfo;                            // 0x0078 (size: 0x40)
    FGameplayCueNotify_BurstEffects BurstEffects;                                     // 0x00B8 (size: 0x298)

    void OnBurst(class AActor* Target, const FGameplayCueParameters& Parameters, const FGameplayCueNotify_SpawnResult& SpawnResults);
}; // Size: 0x350

class UGameplayCueNotify_HitImpact : public UGameplayCueNotify_Static
{
    class USoundBase* Sound;                                                          // 0x0040 (size: 0x8)
    class UParticleSystem* ParticleSystem;                                            // 0x0048 (size: 0x8)

}; // Size: 0x50

class UGameplayCueNotify_Static : public UObject
{
    FGameplayTag GameplayCueTag;                                                      // 0x0028 (size: 0x8)
    FName GameplayCueName;                                                            // 0x0030 (size: 0x8)
    bool IsOverride;                                                                  // 0x0038 (size: 0x1)

    bool WhileActive(class AActor* MyTarget, const FGameplayCueParameters& Parameters);
    bool OnRemove(class AActor* MyTarget, const FGameplayCueParameters& Parameters);
    bool OnExecute(class AActor* MyTarget, const FGameplayCueParameters& Parameters);
    bool OnActive(class AActor* MyTarget, const FGameplayCueParameters& Parameters);
    void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent::Type> EventType, const FGameplayCueParameters& Parameters);
}; // Size: 0x40

class UGameplayCueNotify_UnitTest : public UGameplayCueNotify_Static
{
}; // Size: 0x50

class UGameplayCueSet : public UDataAsset
{
    TArray<FGameplayCueNotifyData> GameplayCueData;                                   // 0x0030 (size: 0x10)

}; // Size: 0x90

class UGameplayCueTranslator : public UObject
{
}; // Size: 0x28

class UGameplayCueTranslator_Test : public UGameplayCueTranslator
{
}; // Size: 0x28

class UGameplayEffect : public UObject
{
    EGameplayEffectDurationType DurationPolicy;                                       // 0x0030 (size: 0x1)
    FGameplayEffectModifierMagnitude DurationMagnitude;                               // 0x0038 (size: 0x1E0)
    FScalableFloat Period;                                                            // 0x0218 (size: 0x28)
    bool bExecutePeriodicEffectOnApplication;                                         // 0x0240 (size: 0x1)
    EGameplayEffectPeriodInhibitionRemovedPolicy PeriodicInhibitionPolicy;            // 0x0241 (size: 0x1)
    TArray<FGameplayModifierInfo> Modifiers;                                          // 0x0248 (size: 0x10)
    TArray<FGameplayEffectExecutionDefinition> Executions;                            // 0x0258 (size: 0x10)
    FScalableFloat ChanceToApplyToTarget;                                             // 0x0268 (size: 0x28)
    TArray<class TSubclassOf<UGameplayEffectCustomApplicationRequirement>> ApplicationRequirements; // 0x0290 (size: 0x10)
    TArray<FConditionalGameplayEffect> ConditionalGameplayEffects;                    // 0x02A0 (size: 0x10)
    TArray<class TSubclassOf<UGameplayEffect>> OverflowEffects;                       // 0x02B0 (size: 0x10)
    bool bDenyOverflowApplication;                                                    // 0x02C0 (size: 0x1)
    bool bClearStackOnOverflow;                                                       // 0x02C1 (size: 0x1)
    TArray<class TSubclassOf<UGameplayEffect>> PrematureExpirationEffectClasses;      // 0x02C8 (size: 0x10)
    TArray<class TSubclassOf<UGameplayEffect>> RoutineExpirationEffectClasses;        // 0x02D8 (size: 0x10)
    bool bRequireModifierSuccessToTriggerCues;                                        // 0x02E8 (size: 0x1)
    bool bSuppressStackingCues;                                                       // 0x02E9 (size: 0x1)
    TArray<FGameplayEffectCue> GameplayCues;                                          // 0x02F0 (size: 0x10)
    class UGameplayEffectUIData* UIData;                                              // 0x0300 (size: 0x8)
    FInheritedTagContainer InheritableGameplayEffectTags;                             // 0x0308 (size: 0x60)
    FInheritedTagContainer InheritableOwnedTagsContainer;                             // 0x0368 (size: 0x60)
    FInheritedTagContainer InheritableBlockedAbilityTagsContainer;                    // 0x03C8 (size: 0x60)
    FGameplayTagRequirements OngoingTagRequirements;                                  // 0x0428 (size: 0x88)
    FGameplayTagRequirements ApplicationTagRequirements;                              // 0x04B0 (size: 0x88)
    FGameplayTagRequirements RemovalTagRequirements;                                  // 0x0538 (size: 0x88)
    FInheritedTagContainer RemoveGameplayEffectsWithTags;                             // 0x05C0 (size: 0x60)
    FGameplayTagRequirements GrantedApplicationImmunityTags;                          // 0x0620 (size: 0x88)
    FGameplayEffectQuery GrantedApplicationImmunityQuery;                             // 0x06A8 (size: 0x198)
    FGameplayEffectQuery RemoveGameplayEffectQuery;                                   // 0x0848 (size: 0x198)
    EGameplayEffectStackingType StackingType;                                         // 0x09E1 (size: 0x1)
    int32 StackLimitCount;                                                            // 0x09E4 (size: 0x4)
    EGameplayEffectStackingDurationPolicy StackDurationRefreshPolicy;                 // 0x09E8 (size: 0x1)
    EGameplayEffectStackingPeriodPolicy StackPeriodResetPolicy;                       // 0x09E9 (size: 0x1)
    EGameplayEffectStackingExpirationPolicy StackExpirationPolicy;                    // 0x09EA (size: 0x1)
    TArray<FGameplayAbilitySpecDef> GrantedAbilities;                                 // 0x09F0 (size: 0x10)
    TArray<class UGameplayEffectComponent*> GEComponents;                             // 0x0A60 (size: 0x10)

}; // Size: 0xA70

class UGameplayEffectCalculation : public UObject
{
    TArray<FGameplayEffectAttributeCaptureDefinition> RelevantAttributesToCapture;    // 0x0028 (size: 0x10)

}; // Size: 0x38

class UGameplayEffectComponent : public UObject
{
}; // Size: 0x28

class UGameplayEffectCustomApplicationRequirement : public UObject
{

    bool CanApplyGameplayEffect(const class UGameplayEffect* GameplayEffect, const FGameplayEffectSpec& Spec, class UAbilitySystemComponent* ASC);
}; // Size: 0x28

class UGameplayEffectExecutionCalculation : public UGameplayEffectCalculation
{
    bool bRequiresPassedInTags;                                                       // 0x0038 (size: 0x1)

    void Execute(const FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput);
}; // Size: 0x40

class UGameplayEffectUIData : public UGameplayEffectComponent
{
}; // Size: 0x28

class UGameplayEffectUIData_TextOnly : public UGameplayEffectUIData
{
    FText Description;                                                                // 0x0028 (size: 0x10)

}; // Size: 0x38

class UGameplayModMagnitudeCalculation : public UGameplayEffectCalculation
{
    bool bAllowNonNetAuthorityDependencyRegistration;                                 // 0x0038 (size: 0x1)

    float K2_GetCapturedAttributeMagnitude(const FGameplayEffectSpec& EffectSpec, FGameplayAttribute Attribute, const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags);
    FGameplayTagContainer GetTargetSpecTags(const FGameplayEffectSpec& EffectSpec);
    FGameplayTagContainer GetTargetAggregatedTags(const FGameplayEffectSpec& EffectSpec);
    FGameplayTagContainer GetTargetActorTags(const FGameplayEffectSpec& EffectSpec);
    FGameplayTagContainer GetSourceSpecTags(const FGameplayEffectSpec& EffectSpec);
    FGameplayTagContainer GetSourceAggregatedTags(const FGameplayEffectSpec& EffectSpec);
    FGameplayTagContainer GetSourceActorTags(const FGameplayEffectSpec& EffectSpec);
    float GetSetByCallerMagnitudeByTag(const FGameplayEffectSpec& EffectSpec, const FGameplayTag& Tag);
    float GetSetByCallerMagnitudeByName(const FGameplayEffectSpec& EffectSpec, const FName& MagnitudeName);
    float CalculateBaseMagnitude(const FGameplayEffectSpec& Spec);
}; // Size: 0x40

class UGameplayTagReponseTable : public UDataAsset
{
    TArray<FGameplayTagResponseTableEntry> Entries;                                   // 0x0030 (size: 0x10)

    void TagResponseEvent(const FGameplayTag Tag, int32 NewCount, class UAbilitySystemComponent* ASC, int32 idx);
}; // Size: 0x230

class UImmunityGameplayEffectComponent : public UGameplayEffectComponent
{
    TArray<FGameplayEffectQuery> ImmunityQueries;                                     // 0x0028 (size: 0x10)

}; // Size: 0x38

class UMovieSceneGameplayCueSection : public UMovieSceneHookSection
{
    FMovieSceneGameplayCueKey Cue;                                                    // 0x0110 (size: 0x90)

}; // Size: 0x1A0

class UMovieSceneGameplayCueTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;                                       // 0x00F8 (size: 0x10)

    void SetSequencerTrackHandler(FSetSequencerTrackHandlerInGameplayCueTrackHandler InGameplayCueTrackHandler);
}; // Size: 0x108

class UMovieSceneGameplayCueTriggerSection : public UMovieSceneHookSection
{
    FMovieSceneGameplayCueChannel Channel;                                            // 0x0110 (size: 0xF8)

}; // Size: 0x208

class URemoveOtherGameplayEffectComponent : public UGameplayEffectComponent
{
    TArray<FGameplayEffectQuery> RemoveGameplayEffectQueries;                         // 0x0028 (size: 0x10)

}; // Size: 0x38

class UTargetTagRequirementsGameplayEffectComponent : public UGameplayEffectComponent
{
    FGameplayTagRequirements ApplicationTagRequirements;                              // 0x0028 (size: 0x88)
    FGameplayTagRequirements OngoingTagRequirements;                                  // 0x00B0 (size: 0x88)
    FGameplayTagRequirements RemovalTagRequirements;                                  // 0x0138 (size: 0x88)

}; // Size: 0x1C0

class UTargetTagsGameplayEffectComponent : public UGameplayEffectComponent
{
    FInheritedTagContainer InheritableGrantedTagsContainer;                           // 0x0028 (size: 0x60)

}; // Size: 0x88

#endif
