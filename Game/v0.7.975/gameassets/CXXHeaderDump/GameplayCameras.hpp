#ifndef UE4SS_SDK_GameplayCameras_HPP
#define UE4SS_SDK_GameplayCameras_HPP

#include "GameplayCameras_enums.hpp"

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

class UCompositeCameraShakePattern : public UCameraShakePattern
{
    TArray<class UCameraShakePattern*> ChildPatterns;                                 // 0x0028 (size: 0x10)

}; // Size: 0x48

class UConstantCameraShakePattern : public USimpleCameraShakePattern
{
    FVector LocationOffset;                                                           // 0x0038 (size: 0xC)
    FRotator RotationOffset;                                                          // 0x0044 (size: 0xC)

}; // Size: 0x50

class UDefaultCameraShakeBase : public UCameraShakeBase
{
}; // Size: 0xB0

class UMatineeCameraShake : public UCameraShakeBase
{
    float OscillationDuration;                                                        // 0x00A8 (size: 0x4)
    float OscillationBlendInTime;                                                     // 0x00AC (size: 0x4)
    float OscillationBlendOutTime;                                                    // 0x00B0 (size: 0x4)
    FROscillator RotOscillation;                                                      // 0x00B4 (size: 0x24)
    FVOscillator LocOscillation;                                                      // 0x00D8 (size: 0x24)
    FFOscillator FOVOscillation;                                                      // 0x00FC (size: 0xC)
    float AnimPlayRate;                                                               // 0x0108 (size: 0x4)
    float AnimScale;                                                                  // 0x010C (size: 0x4)
    float AnimBlendInTime;                                                            // 0x0110 (size: 0x4)
    float AnimBlendOutTime;                                                           // 0x0114 (size: 0x4)
    float RandomAnimSegmentDuration;                                                  // 0x0118 (size: 0x4)
    class UCameraAnim* anim;                                                          // 0x0120 (size: 0x8)
    class UCameraAnimationSequence* AnimSequence;                                     // 0x0128 (size: 0x8)
    uint8 bRandomAnimSegment;                                                         // 0x0130 (size: 0x1)
    float OscillatorTimeRemaining;                                                    // 0x0134 (size: 0x4)
    class UCameraAnimInst* AnimInst;                                                  // 0x0138 (size: 0x8)
    class USequenceCameraShakePattern* SequenceShakePattern;                          // 0x0180 (size: 0x8)

    class UMatineeCameraShake* StartMatineeCameraShakeFromSource(class APlayerCameraManager* PlayerCameraManager, TSubclassOf<class UMatineeCameraShake> ShakeClass, class UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);
    class UMatineeCameraShake* StartMatineeCameraShake(class APlayerCameraManager* PlayerCameraManager, TSubclassOf<class UMatineeCameraShake> ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);
    void ReceiveStopShake(bool bImmediately);
    void ReceivePlayShake(float Scale);
    bool ReceiveIsFinished();
    void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, const FMinimalViewInfo& POV, FMinimalViewInfo& ModifiedPOV);
}; // Size: 0x1B0

class UMatineeCameraShakeFunctionLibrary : public UBlueprintFunctionLibrary
{

    class UMatineeCameraShake* Conv_MatineeCameraShake(class UCameraShakeBase* CameraShake);
}; // Size: 0x28

class UMatineeCameraShakePattern : public UCameraShakePattern
{
}; // Size: 0x28

class UMovieSceneMatineeCameraShakeEvaluator : public UMovieSceneCameraShakeEvaluator
{
}; // Size: 0x28

class UPerlinNoiseCameraShakePattern : public USimpleCameraShakePattern
{
    float LocationAmplitudeMultiplier;                                                // 0x0038 (size: 0x4)
    float LocationFrequencyMultiplier;                                                // 0x003C (size: 0x4)
    FPerlinNoiseShaker X;                                                             // 0x0040 (size: 0x8)
    FPerlinNoiseShaker Y;                                                             // 0x0048 (size: 0x8)
    FPerlinNoiseShaker Z;                                                             // 0x0050 (size: 0x8)
    float RotationAmplitudeMultiplier;                                                // 0x0058 (size: 0x4)
    float RotationFrequencyMultiplier;                                                // 0x005C (size: 0x4)
    FPerlinNoiseShaker Pitch;                                                         // 0x0060 (size: 0x8)
    FPerlinNoiseShaker Yaw;                                                           // 0x0068 (size: 0x8)
    FPerlinNoiseShaker roll;                                                          // 0x0070 (size: 0x8)
    FPerlinNoiseShaker FOV;                                                           // 0x0078 (size: 0x8)

}; // Size: 0xB8

class USimpleCameraShakePattern : public UCameraShakePattern
{
    float Duration;                                                                   // 0x0028 (size: 0x4)
    float BlendInTime;                                                                // 0x002C (size: 0x4)
    float BlendOutTime;                                                               // 0x0030 (size: 0x4)

}; // Size: 0x38

class UTestCameraShake : public UCameraShakeBase
{
}; // Size: 0xB0

class UWaveOscillatorCameraShakePattern : public USimpleCameraShakePattern
{
    float LocationAmplitudeMultiplier;                                                // 0x0038 (size: 0x4)
    float LocationFrequencyMultiplier;                                                // 0x003C (size: 0x4)
    FWaveOscillator X;                                                                // 0x0040 (size: 0xC)
    FWaveOscillator Y;                                                                // 0x004C (size: 0xC)
    FWaveOscillator Z;                                                                // 0x0058 (size: 0xC)
    float RotationAmplitudeMultiplier;                                                // 0x0064 (size: 0x4)
    float RotationFrequencyMultiplier;                                                // 0x0068 (size: 0x4)
    FWaveOscillator Pitch;                                                            // 0x006C (size: 0xC)
    FWaveOscillator Yaw;                                                              // 0x0078 (size: 0xC)
    FWaveOscillator roll;                                                             // 0x0084 (size: 0xC)
    FWaveOscillator FOV;                                                              // 0x0090 (size: 0xC)

}; // Size: 0xD8

#endif
