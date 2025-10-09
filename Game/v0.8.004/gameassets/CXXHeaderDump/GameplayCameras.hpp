#ifndef UE4SS_SDK_GameplayCameras_HPP
#define UE4SS_SDK_GameplayCameras_HPP

#include "GameplayCameras_enums.hpp"

struct FActiveCameraAnimationInfo
{
    class UCameraAnimationSequence* Sequence;                                         // 0x0000 (size: 0x8)
    FCameraAnimationParams Params;                                                    // 0x0008 (size: 0x48)
    FCameraAnimationHandle Handle;                                                    // 0x0050 (size: 0x4)
    class UCameraAnimationSequencePlayer* Player;                                     // 0x0058 (size: 0x8)
    class UCameraAnimationSequenceCameraStandIn* CameraStandIn;                       // 0x0060 (size: 0x8)
    float EaseInCurrentTime;                                                          // 0x0068 (size: 0x4)
    float EaseOutCurrentTime;                                                         // 0x006C (size: 0x4)
    bool bIsEasingIn;                                                                 // 0x0070 (size: 0x1)
    bool bIsEasingOut;                                                                // 0x0071 (size: 0x1)

}; // Size: 0x78

struct FCameraAnimationHandle
{
}; // Size: 0x4

struct FCameraAnimationParams
{
    float PlayRate;                                                                   // 0x0000 (size: 0x4)
    float Scale;                                                                      // 0x0004 (size: 0x4)
    ECameraAnimationEasingType EaseInType;                                            // 0x0008 (size: 0x1)
    float EaseInDuration;                                                             // 0x000C (size: 0x4)
    ECameraAnimationEasingType EaseOutType;                                           // 0x0010 (size: 0x1)
    float EaseOutDuration;                                                            // 0x0014 (size: 0x4)
    bool bLoop;                                                                       // 0x0018 (size: 0x1)
    int32 StartOffset;                                                                // 0x001C (size: 0x4)
    bool bRandomStartTime;                                                            // 0x0020 (size: 0x1)
    float DurationOverride;                                                           // 0x0024 (size: 0x4)
    ECameraAnimationPlaySpace PlaySpace;                                              // 0x0028 (size: 0x1)
    FRotator UserPlaySpaceRot;                                                        // 0x0030 (size: 0x18)

}; // Size: 0x48

struct FCameraModeTransition
{
    TArray<class UCameraModeTransitionCondition*> Conditions;                         // 0x0000 (size: 0x10)
    class UBlendCameraNode* Blend;                                                    // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FCameraPose
{
    FVector3d Location;                                                               // 0x0000 (size: 0x18)
    FRotator3d Rotation;                                                              // 0x0018 (size: 0x18)
    double TargetDistance;                                                            // 0x0030 (size: 0x8)
    float FieldOfView;                                                                // 0x0038 (size: 0x4)
    float AspectRatio;                                                                // 0x003C (size: 0x4)
    float FocalLength;                                                                // 0x0040 (size: 0x4)
    float Aperture;                                                                   // 0x0044 (size: 0x4)
    float FocusDistance;                                                              // 0x0048 (size: 0x4)
    float SensorWidth;                                                                // 0x004C (size: 0x4)
    float SensorHeight;                                                               // 0x0050 (size: 0x4)
    float SqueezeFactor;                                                              // 0x0054 (size: 0x4)
    float NearClippingPlane;                                                          // 0x0058 (size: 0x4)
    float FarClippingPlane;                                                           // 0x005C (size: 0x4)
    bool bConstrainAspectRatio;                                                       // 0x0060 (size: 0x1)

}; // Size: 0x70

struct FFOscillator
{
    float Amplitude;                                                                  // 0x0000 (size: 0x4)
    float Frequency;                                                                  // 0x0004 (size: 0x4)
    TEnumAsByte<EInitialOscillatorOffset> InitialOffset;                              // 0x0008 (size: 0x1)
    EOscillatorWaveform Waveform;                                                     // 0x0009 (size: 0x1)

}; // Size: 0xC

struct FPerlinNoiseShaker
{
    float Amplitude;                                                                  // 0x0000 (size: 0x4)
    float Frequency;                                                                  // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FROscillator
{
    FFOscillator Pitch;                                                               // 0x0000 (size: 0xC)
    FFOscillator Yaw;                                                                 // 0x000C (size: 0xC)
    FFOscillator roll;                                                                // 0x0018 (size: 0xC)

}; // Size: 0x24

struct FVOscillator
{
    FFOscillator X;                                                                   // 0x0000 (size: 0xC)
    FFOscillator Y;                                                                   // 0x000C (size: 0xC)
    FFOscillator Z;                                                                   // 0x0018 (size: 0xC)

}; // Size: 0x24

struct FWaveOscillator
{
    float Amplitude;                                                                  // 0x0000 (size: 0x4)
    float Frequency;                                                                  // 0x0004 (size: 0x4)
    EInitialWaveOscillatorOffsetType InitialOffsetType;                               // 0x0008 (size: 0x1)

}; // Size: 0xC

class AGameplayCameraActor : public AActor
{
    class USceneComponent* SceneComponent;                                            // 0x0290 (size: 0x8)
    class UGameplayCameraComponent* CameraComponent;                                  // 0x0298 (size: 0x8)

    class USceneComponent* GetSceneComponent();
    class UGameplayCameraComponent* GetCameraComponent();
}; // Size: 0x2A0

class AGameplayCameraSystemActor : public AActor
{
    class UGameplayCameraSystemComponent* CameraSystemComponent;                      // 0x0290 (size: 0x8)
    TEnumAsByte<EAutoReceiveInput::Type> AutoActivateForPlayer;                       // 0x0298 (size: 0x1)

    class UGameplayCameraSystemComponent* GetCameraSystemComponent();
    void ActivateForPlayer(int32 PlayerIndex);
}; // Size: 0x2A0

class UArrayCameraNode : public UCameraNode
{
    TArray<class UCameraNode*> Children;                                              // 0x0030 (size: 0x10)

}; // Size: 0x40

class UBlendCameraNode : public UCameraNode
{
}; // Size: 0x30

class UBlendStackCameraNode : public UCameraNode
{
    bool bAutoPop;                                                                    // 0x0030 (size: 0x1)
    bool bBlendFirstCameraMode;                                                       // 0x0031 (size: 0x1)

}; // Size: 0x48

class UBlendStackRootCameraNode : public UCameraNode
{
    class UBlendCameraNode* Blend;                                                    // 0x0030 (size: 0x8)
    class UCameraNode* RootNode;                                                      // 0x0038 (size: 0x8)

}; // Size: 0x50

class UCameraAnimationCameraModifier : public UCameraModifier
{
    TArray<FActiveCameraAnimationInfo> ActiveAnimations;                              // 0x0048 (size: 0x10)
    uint16 NextInstanceSerialNumber;                                                  // 0x0058 (size: 0x2)

    void StopCameraAnimation(const FCameraAnimationHandle& Handle, bool bImmediate);
    void StopAllCameraAnimationsOf(class UCameraAnimationSequence* Sequence, bool bImmediate);
    void StopAllCameraAnimations(bool bImmediate);
    FCameraAnimationHandle PlayCameraAnimation(class UCameraAnimationSequence* Sequence, FCameraAnimationParams Params);
    bool IsCameraAnimationActive(const FCameraAnimationHandle& Handle);
    class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifierFromPlayerController(const class APlayerController* PlayerController);
    class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifierFromID(const class UObject* WorldContextObject, int32 ControllerId);
    class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifier(const class UObject* WorldContextObject, int32 PlayerIndex);
}; // Size: 0x60

class UCameraAsset : public UObject
{
    class UCameraDirector* CameraDirector;                                            // 0x0028 (size: 0x8)
    TArray<FCameraModeTransition> EnterTransitions;                                   // 0x0030 (size: 0x10)
    TArray<FCameraModeTransition> ExitTransitions;                                    // 0x0040 (size: 0x10)

}; // Size: 0x50

class UCameraDirector : public UObject
{
}; // Size: 0x28

class UCameraEvaluationContext : public UObject
{
    class UCameraAsset* CameraAsset;                                                  // 0x0028 (size: 0x8)

}; // Size: 0xA8

class UCameraInstantiableObject : public UObject
{
}; // Size: 0x28

class UCameraMode : public UObject
{
    class UCameraNode* RootNode;                                                      // 0x0028 (size: 0x8)
    TArray<FCameraModeTransition> EnterTransitions;                                   // 0x0030 (size: 0x10)
    TArray<FCameraModeTransition> ExitTransitions;                                    // 0x0040 (size: 0x10)

}; // Size: 0x50

class UCameraModeTransitionCondition : public UObject
{
}; // Size: 0x28

class UCameraNode : public UCameraInstantiableObject
{
    bool bIsEnabled;                                                                  // 0x0028 (size: 0x1)

}; // Size: 0x30

class UCameraSystemEvaluator : public UObject
{
    class URootCameraNode* RootNode;                                                  // 0x0028 (size: 0x8)

}; // Size: 0x188

class UCompositeCameraShakePattern : public UCameraShakePattern
{
    TArray<class UCameraShakePattern*> ChildPatterns;                                 // 0x0028 (size: 0x10)

}; // Size: 0x38

class UConstantCameraShakePattern : public USimpleCameraShakePattern
{
    FVector LocationOffset;                                                           // 0x0058 (size: 0x18)
    FRotator RotationOffset;                                                          // 0x0070 (size: 0x18)

}; // Size: 0x88

class UDefaultCameraShakeBase : public UCameraShakeBase
{
}; // Size: 0xE0

class UDefaultRootCameraNode : public URootCameraNode
{
    class UCameraNode* BaseLayer;                                                     // 0x0030 (size: 0x8)
    class UCameraNode* MainLayer;                                                     // 0x0038 (size: 0x8)
    class UCameraNode* GlobalLayer;                                                   // 0x0040 (size: 0x8)
    class UCameraNode* VisualLayer;                                                   // 0x0048 (size: 0x8)

}; // Size: 0x50

class UGameplayCameraComponent : public USceneComponent
{
    class UCameraAsset* Camera;                                                       // 0x0230 (size: 0x8)
    class UGameplayCameraComponentEvaluationContext* EvaluationContext;               // 0x0238 (size: 0x8)

    void ActivateCamera(int32 PlayerIndex);
}; // Size: 0x240

class UGameplayCameraComponentEvaluationContext : public UCameraEvaluationContext
{
}; // Size: 0xA8

class UGameplayCameraSystemComponent : public USceneComponent
{
    class UCameraSystemEvaluator* Evaluator;                                          // 0x0230 (size: 0x8)

    class UCameraSystemEvaluator* GetCameraSystemEvaluator();
}; // Size: 0x240

class UGameplayCamerasFunctionLibrary : public UBlueprintFunctionLibrary
{

    ECameraShakePlaySpace Conv_CameraShakePlaySpace(ECameraAnimationPlaySpace CameraAnimationPlaySpace);
    ECameraAnimationPlaySpace Conv_CameraAnimationPlaySpace(ECameraShakePlaySpace CameraShakePlaySpace);
    class UCameraAnimationCameraModifier* Conv_CameraAnimationCameraModifier(class APlayerCameraManager* PlayerCameraManager);
}; // Size: 0x28

class UGameplayCamerasSubsystem : public UWorldSubsystem
{

    void StopCameraAnimation(class APlayerController* PlayerController, const FCameraAnimationHandle& Handle, bool bImmediate);
    void StopAllCameraAnimationsOf(class APlayerController* PlayerController, class UCameraAnimationSequence* Sequence, bool bImmediate);
    void StopAllCameraAnimations(class APlayerController* PlayerController, bool bImmediate);
    FCameraAnimationHandle PlayCameraAnimation(class APlayerController* PlayerController, class UCameraAnimationSequence* Sequence, FCameraAnimationParams Params);
    bool IsCameraAnimationActive(class APlayerController* PlayerController, const FCameraAnimationHandle& Handle);
}; // Size: 0x30

class ULegacyCameraShake : public UCameraShakeBase
{
    float OscillationDuration;                                                        // 0x00D8 (size: 0x4)
    float OscillationBlendInTime;                                                     // 0x00DC (size: 0x4)
    float OscillationBlendOutTime;                                                    // 0x00E0 (size: 0x4)
    FROscillator RotOscillation;                                                      // 0x00E4 (size: 0x24)
    FVOscillator LocOscillation;                                                      // 0x0108 (size: 0x24)
    FFOscillator FOVOscillation;                                                      // 0x012C (size: 0xC)
    float AnimPlayRate;                                                               // 0x0138 (size: 0x4)
    float AnimScale;                                                                  // 0x013C (size: 0x4)
    float AnimBlendInTime;                                                            // 0x0140 (size: 0x4)
    float AnimBlendOutTime;                                                           // 0x0144 (size: 0x4)
    float RandomAnimSegmentDuration;                                                  // 0x0148 (size: 0x4)
    class UCameraAnimationSequence* AnimSequence;                                     // 0x0150 (size: 0x8)
    uint8 bRandomAnimSegment;                                                         // 0x0158 (size: 0x1)
    float OscillatorTimeRemaining;                                                    // 0x015C (size: 0x4)
    class USequenceCameraShakePattern* SequenceShakePattern;                          // 0x01D8 (size: 0x8)

    class ULegacyCameraShake* StartLegacyCameraShakeFromSource(class APlayerCameraManager* PlayerCameraManager, TSubclassOf<class ULegacyCameraShake> ShakeClass, class UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);
    class ULegacyCameraShake* StartLegacyCameraShake(class APlayerCameraManager* PlayerCameraManager, TSubclassOf<class ULegacyCameraShake> ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);
    void ReceiveStopShake(bool bImmediately);
    void ReceivePlayShake(float Scale);
    bool ReceiveIsFinished();
    void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, const FMinimalViewInfo& POV, FMinimalViewInfo& ModifiedPOV);
}; // Size: 0x1F0

class ULegacyCameraShakeFunctionLibrary : public UBlueprintFunctionLibrary
{

    class ULegacyCameraShake* Conv_LegacyCameraShake(class UCameraShakeBase* CameraShake);
}; // Size: 0x28

class ULegacyCameraShakePattern : public UCameraShakePattern
{
}; // Size: 0x28

class ULinearBlendCameraNode : public USimpleFixedTimeBlendCameraNode
{
}; // Size: 0x40

class UOffsetCameraNode : public UCameraNode
{
    FVector3d Offset;                                                                 // 0x0030 (size: 0x18)

}; // Size: 0x48

class UPerlinNoiseCameraShakePattern : public USimpleCameraShakePattern
{
    float LocationAmplitudeMultiplier;                                                // 0x0058 (size: 0x4)
    float LocationFrequencyMultiplier;                                                // 0x005C (size: 0x4)
    FPerlinNoiseShaker X;                                                             // 0x0060 (size: 0x8)
    FPerlinNoiseShaker Y;                                                             // 0x0068 (size: 0x8)
    FPerlinNoiseShaker Z;                                                             // 0x0070 (size: 0x8)
    float RotationAmplitudeMultiplier;                                                // 0x0078 (size: 0x4)
    float RotationFrequencyMultiplier;                                                // 0x007C (size: 0x4)
    FPerlinNoiseShaker Pitch;                                                         // 0x0080 (size: 0x8)
    FPerlinNoiseShaker Yaw;                                                           // 0x0088 (size: 0x8)
    FPerlinNoiseShaker roll;                                                          // 0x0090 (size: 0x8)
    FPerlinNoiseShaker FOV;                                                           // 0x0098 (size: 0x8)

}; // Size: 0xD8

class UPopBlendCameraNode : public UBlendCameraNode
{
}; // Size: 0x30

class URootCameraNode : public UCameraNode
{
}; // Size: 0x30

class USimpleBlendCameraNode : public UBlendCameraNode
{
}; // Size: 0x38

class USimpleCameraShakePattern : public UCameraShakePattern
{
    float Duration;                                                                   // 0x0028 (size: 0x4)
    float BlendInTime;                                                                // 0x002C (size: 0x4)
    float BlendOutTime;                                                               // 0x0030 (size: 0x4)

}; // Size: 0x58

class USimpleFixedTimeBlendCameraNode : public USimpleBlendCameraNode
{
    float BlendTime;                                                                  // 0x0038 (size: 0x4)

}; // Size: 0x40

class USingleCameraDirector : public UCameraDirector
{
    class UCameraMode* CameraMode;                                                    // 0x0028 (size: 0x8)

}; // Size: 0x30

class USmoothBlendCameraNode : public USimpleFixedTimeBlendCameraNode
{
    ESmoothCameraBlendType BlendType;                                                 // 0x0040 (size: 0x4)

}; // Size: 0x48

class UTestCameraShake : public UCameraShakeBase
{
}; // Size: 0xE0

class UWaveOscillatorCameraShakePattern : public USimpleCameraShakePattern
{
    float LocationAmplitudeMultiplier;                                                // 0x0058 (size: 0x4)
    float LocationFrequencyMultiplier;                                                // 0x005C (size: 0x4)
    FWaveOscillator X;                                                                // 0x0060 (size: 0xC)
    FWaveOscillator Y;                                                                // 0x006C (size: 0xC)
    FWaveOscillator Z;                                                                // 0x0078 (size: 0xC)
    float RotationAmplitudeMultiplier;                                                // 0x0084 (size: 0x4)
    float RotationFrequencyMultiplier;                                                // 0x0088 (size: 0x4)
    FWaveOscillator Pitch;                                                            // 0x008C (size: 0xC)
    FWaveOscillator Yaw;                                                              // 0x0098 (size: 0xC)
    FWaveOscillator roll;                                                             // 0x00A4 (size: 0xC)
    FWaveOscillator FOV;                                                              // 0x00B0 (size: 0xC)

}; // Size: 0xF8

#endif
