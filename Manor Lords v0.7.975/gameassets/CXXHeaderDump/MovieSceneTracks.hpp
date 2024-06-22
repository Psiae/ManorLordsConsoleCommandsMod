#ifndef UE4SS_SDK_MovieSceneTracks_HPP
#define UE4SS_SDK_MovieSceneTracks_HPP

#include "MovieSceneTracks_enums.hpp"

struct FBoolParameterNameAndCurve
{
    FName ParameterName;                                                              // 0x0000 (size: 0x8)
    FMovieSceneBoolChannel ParameterCurve;                                            // 0x0008 (size: 0x90)

}; // Size: 0x98

struct FColorParameterNameAndCurves
{
    FName ParameterName;                                                              // 0x0000 (size: 0x8)
    FMovieSceneFloatChannel RedCurve;                                                 // 0x0008 (size: 0xA0)
    FMovieSceneFloatChannel GreenCurve;                                               // 0x00A8 (size: 0xA0)
    FMovieSceneFloatChannel BlueCurve;                                                // 0x0148 (size: 0xA0)
    FMovieSceneFloatChannel AlphaCurve;                                               // 0x01E8 (size: 0xA0)

}; // Size: 0x288

struct FEventPayload
{
    FName EventName;                                                                  // 0x0000 (size: 0x8)
    FMovieSceneEventParameters Parameters;                                            // 0x0008 (size: 0x28)

}; // Size: 0x30

struct FLevelVisibilityComponentData
{
    class UMovieSceneLevelVisibilitySection* Section;                                 // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FMovieScene3DLocationKeyStruct : public FMovieSceneKeyStruct
{
    FVector Location;                                                                 // 0x0008 (size: 0xC)
    FFrameNumber Time;                                                                // 0x0014 (size: 0x4)

}; // Size: 0x30

struct FMovieScene3DPathSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneObjectBindingID PathBindingID;                                         // 0x0020 (size: 0x18)
    FMovieSceneFloatChannel TimingCurve;                                              // 0x0038 (size: 0xA0)
    MovieScene3DPathSection_Axis FrontAxisEnum;                                       // 0x00D8 (size: 0x1)
    MovieScene3DPathSection_Axis UpAxisEnum;                                          // 0x00D9 (size: 0x1)
    uint8 bFollow;                                                                    // 0x00DC (size: 0x1)
    uint8 bReverse;                                                                   // 0x00DC (size: 0x1)
    uint8 bForceUpright;                                                              // 0x00DC (size: 0x1)

}; // Size: 0xE0

struct FMovieScene3DRotationKeyStruct : public FMovieSceneKeyStruct
{
    FRotator Rotation;                                                                // 0x0008 (size: 0xC)
    FFrameNumber Time;                                                                // 0x0014 (size: 0x4)

}; // Size: 0x30

struct FMovieScene3DScaleKeyStruct : public FMovieSceneKeyStruct
{
    FVector Scale;                                                                    // 0x0008 (size: 0xC)
    FFrameNumber Time;                                                                // 0x0014 (size: 0x4)

}; // Size: 0x30

struct FMovieScene3DTransformKeyStruct : public FMovieSceneKeyStruct
{
    FVector Location;                                                                 // 0x0008 (size: 0xC)
    FRotator Rotation;                                                                // 0x0014 (size: 0xC)
    FVector Scale;                                                                    // 0x0020 (size: 0xC)
    FFrameNumber Time;                                                                // 0x002C (size: 0x4)

}; // Size: 0x48

struct FMovieSceneActorReferenceData : public FMovieSceneChannel
{
    TArray<FFrameNumber> KeyTimes;                                                    // 0x0008 (size: 0x10)
    FMovieSceneActorReferenceKey DefaultValue;                                        // 0x0018 (size: 0x28)
    TArray<FMovieSceneActorReferenceKey> KeyValues;                                   // 0x0040 (size: 0x10)

}; // Size: 0xB0

struct FMovieSceneActorReferenceKey
{
    FMovieSceneObjectBindingID Object;                                                // 0x0000 (size: 0x18)
    FName ComponentName;                                                              // 0x0018 (size: 0x8)
    FName SocketName;                                                                 // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FMovieSceneActorReferenceSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieScenePropertySectionData PropertyData;                                      // 0x0020 (size: 0x18)
    FMovieSceneActorReferenceData ActorReferenceData;                                 // 0x0038 (size: 0xB0)

}; // Size: 0xE8

struct FMovieSceneAudioSectionTemplate : public FMovieSceneEvalTemplate
{
    class UMovieSceneAudioSection* AudioSection;                                      // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FMovieSceneBoolPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
    FMovieSceneBoolChannel BoolCurve;                                                 // 0x0038 (size: 0x90)

}; // Size: 0xC8

struct FMovieSceneCameraAnimSectionData
{
    class UCameraAnim* CameraAnim;                                                    // 0x0000 (size: 0x8)
    float PlayRate;                                                                   // 0x0008 (size: 0x4)
    float PlayScale;                                                                  // 0x000C (size: 0x4)
    float BlendInTime;                                                                // 0x0010 (size: 0x4)
    float BlendOutTime;                                                               // 0x0014 (size: 0x4)
    bool bLooping;                                                                    // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FMovieSceneCameraAnimSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneCameraAnimSectionData SourceData;                                      // 0x0020 (size: 0x20)
    FFrameNumber SectionStartTime;                                                    // 0x0040 (size: 0x4)

}; // Size: 0x48

struct FMovieSceneCameraShakeSectionData
{
    TSubclassOf<class UCameraShakeBase> ShakeClass;                                   // 0x0000 (size: 0x8)
    float PlayScale;                                                                  // 0x0008 (size: 0x4)
    ECameraShakePlaySpace PlaySpace;                                                  // 0x000C (size: 0x1)
    FRotator UserDefinedPlaySpace;                                                    // 0x0010 (size: 0xC)

}; // Size: 0x20

struct FMovieSceneCameraShakeSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneCameraShakeSectionData SourceData;                                     // 0x0020 (size: 0x20)
    FFrameNumber SectionStartTime;                                                    // 0x0040 (size: 0x4)

}; // Size: 0x48

struct FMovieSceneCameraShakeSourceShakeSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneCameraShakeSectionData SourceData;                                     // 0x0020 (size: 0x20)
    FFrameNumber SectionStartTime;                                                    // 0x0040 (size: 0x4)
    FFrameNumber SectionEndTime;                                                      // 0x0044 (size: 0x4)

}; // Size: 0x48

struct FMovieSceneCameraShakeSourceTrigger
{
    TSubclassOf<class UCameraShakeBase> ShakeClass;                                   // 0x0000 (size: 0x8)
    float PlayScale;                                                                  // 0x0008 (size: 0x4)
    ECameraShakePlaySpace PlaySpace;                                                  // 0x000C (size: 0x1)
    FRotator UserDefinedPlaySpace;                                                    // 0x0010 (size: 0xC)

}; // Size: 0x20

struct FMovieSceneCameraShakeSourceTriggerChannel : public FMovieSceneChannel
{
    TArray<FFrameNumber> KeyTimes;                                                    // 0x0008 (size: 0x10)
    TArray<FMovieSceneCameraShakeSourceTrigger> KeyValues;                            // 0x0018 (size: 0x10)

}; // Size: 0x88

struct FMovieSceneCameraShakeSourceTriggerSectionTemplate : public FMovieSceneEvalTemplate
{
    TArray<FFrameNumber> TriggerTimes;                                                // 0x0020 (size: 0x10)
    TArray<FMovieSceneCameraShakeSourceTrigger> TriggerValues;                        // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FMovieSceneColorKeyStruct : public FMovieSceneKeyStruct
{
    FLinearColor Color;                                                               // 0x0008 (size: 0x10)
    FFrameNumber Time;                                                                // 0x0018 (size: 0x4)

}; // Size: 0x38

struct FMovieSceneColorSectionTemplate : public FMovieScenePropertySectionTemplate
{
    FMovieSceneFloatChannel Curves;                                                   // 0x0038 (size: 0x280)
    EMovieSceneBlendType BlendType;                                                   // 0x02B8 (size: 0x1)

}; // Size: 0x2C0

struct FMovieSceneComponentMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{
    int32 MaterialIndex;                                                              // 0x0080 (size: 0x4)

}; // Size: 0x88

struct FMovieSceneEvent
{
    FMovieSceneEventPtrs Ptrs;                                                        // 0x0000 (size: 0x28)

}; // Size: 0x28

struct FMovieSceneEventChannel : public FMovieSceneChannel
{
    TArray<FFrameNumber> KeyTimes;                                                    // 0x0008 (size: 0x10)
    TArray<FMovieSceneEvent> KeyValues;                                               // 0x0018 (size: 0x10)

}; // Size: 0x88

struct FMovieSceneEventParameters
{
}; // Size: 0x28

struct FMovieSceneEventPayloadVariable
{
    FString Value;                                                                    // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMovieSceneEventPtrs
{
    class UFunction* Function;                                                        // 0x0000 (size: 0x8)
    TFieldPath<FProperty> BoundObjectProperty;                                        // 0x0008 (size: 0x20)

}; // Size: 0x28

struct FMovieSceneEventSectionData : public FMovieSceneChannel
{
    TArray<FFrameNumber> Times;                                                       // 0x0008 (size: 0x10)
    TArray<FEventPayload> KeyValues;                                                  // 0x0018 (size: 0x10)

}; // Size: 0x88

struct FMovieSceneEventSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneEventSectionData EventData;                                            // 0x0020 (size: 0x88)
    uint8 bFireEventsWhenForwards;                                                    // 0x00A8 (size: 0x1)
    uint8 bFireEventsWhenBackwards;                                                   // 0x00A8 (size: 0x1)

}; // Size: 0xB0

struct FMovieSceneEventTriggerData
{
    FMovieSceneEventPtrs Ptrs;                                                        // 0x0000 (size: 0x28)
    FGuid ObjectBindingID;                                                            // 0x0028 (size: 0x10)

}; // Size: 0x48

struct FMovieSceneFadeSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneFloatChannel FadeCurve;                                                // 0x0020 (size: 0xA0)
    FLinearColor FadeColor;                                                           // 0x00C0 (size: 0x10)
    uint8 bFadeAudio;                                                                 // 0x00D0 (size: 0x1)

}; // Size: 0xD8

struct FMovieSceneMaterialParameterCollectionTemplate : public FMovieSceneParameterSectionTemplate
{
    class UMaterialParameterCollection* MPC;                                          // 0x0080 (size: 0x8)

}; // Size: 0x88

struct FMovieSceneObjectPropertyTemplate : public FMovieScenePropertySectionTemplate
{
    FMovieSceneObjectPathChannel ObjectChannel;                                       // 0x0038 (size: 0xC0)

}; // Size: 0xF8

struct FMovieSceneParameterSectionTemplate : public FMovieSceneEvalTemplate
{
    TArray<FScalarParameterNameAndCurve> Scalars;                                     // 0x0020 (size: 0x10)
    TArray<FBoolParameterNameAndCurve> Bools;                                         // 0x0030 (size: 0x10)
    TArray<FVector2DParameterNameAndCurves> Vector2Ds;                                // 0x0040 (size: 0x10)
    TArray<FVectorParameterNameAndCurves> Vectors;                                    // 0x0050 (size: 0x10)
    TArray<FColorParameterNameAndCurves> Colors;                                      // 0x0060 (size: 0x10)
    TArray<FTransformParameterNameAndCurves> Transforms;                              // 0x0070 (size: 0x10)

}; // Size: 0x80

struct FMovieSceneParticleChannel : public FMovieSceneByteChannel
{
}; // Size: 0x98

struct FMovieSceneParticleParameterSectionTemplate : public FMovieSceneParameterSectionTemplate
{
}; // Size: 0x80

struct FMovieSceneParticleSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneParticleChannel ParticleKeys;                                          // 0x0020 (size: 0x98)

}; // Size: 0xB8

struct FMovieScenePrimitiveMaterialTemplate : public FMovieSceneEvalTemplate
{
    int32 MaterialIndex;                                                              // 0x0020 (size: 0x4)
    FMovieSceneObjectPathChannel MaterialChannel;                                     // 0x0028 (size: 0xC0)

}; // Size: 0xE8

struct FMovieSceneSkeletalAnimRootMotionTrackParams
{
}; // Size: 0x30

struct FMovieSceneSkeletalAnimationParams
{
    class UAnimSequenceBase* Animation;                                               // 0x0000 (size: 0x8)
    FFrameNumber FirstLoopStartFrameOffset;                                           // 0x0008 (size: 0x4)
    FFrameNumber StartFrameOffset;                                                    // 0x000C (size: 0x4)
    FFrameNumber EndFrameOffset;                                                      // 0x0010 (size: 0x4)
    float PlayRate;                                                                   // 0x0014 (size: 0x4)
    uint8 bReverse;                                                                   // 0x0018 (size: 0x1)
    FName SlotName;                                                                   // 0x001C (size: 0x8)
    FMovieSceneFloatChannel Weight;                                                   // 0x0028 (size: 0xA0)
    bool bSkipAnimNotifiers;                                                          // 0x00C8 (size: 0x1)
    bool bForceCustomMode;                                                            // 0x00C9 (size: 0x1)
    float StartOffset;                                                                // 0x00CC (size: 0x4)
    float EndOffset;                                                                  // 0x00D0 (size: 0x4)

}; // Size: 0xD8

struct FMovieSceneSkeletalAnimationSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneSkeletalAnimationSectionTemplateParameters Params;                     // 0x0020 (size: 0xE0)

}; // Size: 0x100

struct FMovieSceneSkeletalAnimationSectionTemplateParameters : public FMovieSceneSkeletalAnimationParams
{
    FFrameNumber SectionStartTime;                                                    // 0x00D8 (size: 0x4)
    FFrameNumber SectionEndTime;                                                      // 0x00DC (size: 0x4)

}; // Size: 0xE0

struct FMovieSceneSlomoSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneFloatChannel SlomoCurve;                                               // 0x0020 (size: 0xA0)

}; // Size: 0xC0

struct FMovieSceneStringChannel : public FMovieSceneChannel
{
    TArray<FFrameNumber> Times;                                                       // 0x0008 (size: 0x10)
    TArray<FString> Values;                                                           // 0x0018 (size: 0x10)
    FString DefaultValue;                                                             // 0x0028 (size: 0x10)
    bool bHasDefaultValue;                                                            // 0x0038 (size: 0x1)

}; // Size: 0xA0

struct FMovieSceneStringPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
    FMovieSceneStringChannel StringCurve;                                             // 0x0038 (size: 0xA0)

}; // Size: 0xD8

struct FMovieSceneTransformMask
{
    uint32 Mask;                                                                      // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FMovieSceneVector2DKeyStruct : public FMovieSceneVectorKeyStructBase
{
    FVector2D Vector;                                                                 // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FMovieSceneVector4KeyStruct : public FMovieSceneVectorKeyStructBase
{
    FVector4 Vector;                                                                  // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FMovieSceneVectorKeyStruct : public FMovieSceneVectorKeyStructBase
{
    FVector Vector;                                                                   // 0x0028 (size: 0xC)

}; // Size: 0x38

struct FMovieSceneVectorKeyStructBase : public FMovieSceneKeyStruct
{
    FFrameNumber Time;                                                                // 0x0008 (size: 0x4)

}; // Size: 0x28

struct FMovieSceneVisibilitySectionTemplate : public FMovieSceneBoolPropertySectionTemplate
{
}; // Size: 0xC8

struct FScalarParameterNameAndCurve
{
    FName ParameterName;                                                              // 0x0000 (size: 0x8)
    FMovieSceneFloatChannel ParameterCurve;                                           // 0x0008 (size: 0xA0)

}; // Size: 0xA8

struct FTransformParameterNameAndCurves
{
    FName ParameterName;                                                              // 0x0000 (size: 0x8)
    FMovieSceneFloatChannel Translation;                                              // 0x0008 (size: 0x1E0)
    FMovieSceneFloatChannel Rotation;                                                 // 0x01E8 (size: 0x1E0)
    FMovieSceneFloatChannel Scale;                                                    // 0x03C8 (size: 0x1E0)

}; // Size: 0x5A8

struct FVector2DParameterNameAndCurves
{
    FName ParameterName;                                                              // 0x0000 (size: 0x8)
    FMovieSceneFloatChannel XCurve;                                                   // 0x0008 (size: 0xA0)
    FMovieSceneFloatChannel YCurve;                                                   // 0x00A8 (size: 0xA0)

}; // Size: 0x148

struct FVectorParameterNameAndCurves
{
    FName ParameterName;                                                              // 0x0000 (size: 0x8)
    FMovieSceneFloatChannel XCurve;                                                   // 0x0008 (size: 0xA0)
    FMovieSceneFloatChannel YCurve;                                                   // 0x00A8 (size: 0xA0)
    FMovieSceneFloatChannel ZCurve;                                                   // 0x0148 (size: 0xA0)

}; // Size: 0x1E8

class IMovieSceneTransformOrigin : public IInterface
{

    FTransform BP_GetTransformOrigin();
}; // Size: 0x28

class UByteChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x40

class UFloatChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x40

class UIntegerChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x40

class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
{
    FName AttachSocketName;                                                           // 0x0118 (size: 0x8)
    FName AttachComponentName;                                                        // 0x0120 (size: 0x8)
    EAttachmentRule AttachmentLocationRule;                                           // 0x0128 (size: 0x1)
    EAttachmentRule AttachmentRotationRule;                                           // 0x0129 (size: 0x1)
    EAttachmentRule AttachmentScaleRule;                                              // 0x012A (size: 0x1)
    EDetachmentRule DetachmentLocationRule;                                           // 0x012B (size: 0x1)
    EDetachmentRule DetachmentRotationRule;                                           // 0x012C (size: 0x1)
    EDetachmentRule DetachmentScaleRule;                                              // 0x012D (size: 0x1)

}; // Size: 0x130

class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack
{
}; // Size: 0xA0

class UMovieScene3DConstraintSection : public UMovieSceneSection
{
    FGuid ConstraintId;                                                               // 0x00E8 (size: 0x10)
    FMovieSceneObjectBindingID ConstraintBindingID;                                   // 0x00F8 (size: 0x18)

    void SetConstraintBindingID(const FMovieSceneObjectBindingID& InConstraintBindingID);
    FMovieSceneObjectBindingID GetConstraintBindingID();
}; // Size: 0x110

class UMovieScene3DConstraintTrack : public UMovieSceneTrack
{
    TArray<class UMovieSceneSection*> ConstraintSections;                             // 0x0090 (size: 0x10)

}; // Size: 0xA0

class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
{
    FMovieSceneFloatChannel TimingCurve;                                              // 0x0110 (size: 0xA0)
    MovieScene3DPathSection_Axis FrontAxisEnum;                                       // 0x01B0 (size: 0x1)
    MovieScene3DPathSection_Axis UpAxisEnum;                                          // 0x01B1 (size: 0x1)
    uint8 bFollow;                                                                    // 0x01B4 (size: 0x1)
    uint8 bReverse;                                                                   // 0x01B4 (size: 0x1)
    uint8 bForceUpright;                                                              // 0x01B4 (size: 0x1)

}; // Size: 0x1B8

class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack
{
}; // Size: 0xA8

class UMovieScene3DTransformPropertySystem : public UMovieScenePropertySystem
{
}; // Size: 0x58

class UMovieScene3DTransformSection : public UMovieSceneSection
{
    FMovieSceneTransformMask TransformMask;                                           // 0x00F0 (size: 0x4)
    FMovieSceneFloatChannel Translation;                                              // 0x00F8 (size: 0x1E0)
    FMovieSceneFloatChannel Rotation;                                                 // 0x02D8 (size: 0x1E0)
    FMovieSceneFloatChannel Scale;                                                    // 0x04B8 (size: 0x1E0)
    FMovieSceneFloatChannel ManualWeight;                                             // 0x0698 (size: 0xA0)
    bool bUseQuaternionInterpolation;                                                 // 0x0738 (size: 0x1)

}; // Size: 0x740

class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack
{
}; // Size: 0xC0

class UMovieSceneActorReferenceSection : public UMovieSceneSection
{
    FMovieSceneActorReferenceData ActorReferenceData;                                 // 0x00E8 (size: 0xB0)
    FIntegralCurve ActorGuidIndexCurve;                                               // 0x0198 (size: 0x80)
    TArray<FString> ActorGuidStrings;                                                 // 0x0218 (size: 0x10)

}; // Size: 0x228

class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack
{
}; // Size: 0xC8

class UMovieSceneAudioSection : public UMovieSceneSection
{
    class USoundBase* sound;                                                          // 0x00E8 (size: 0x8)
    FFrameNumber StartFrameOffset;                                                    // 0x00F0 (size: 0x4)
    float StartOffset;                                                                // 0x00F4 (size: 0x4)
    float AudioStartTime;                                                             // 0x00F8 (size: 0x4)
    float AudioDilationFactor;                                                        // 0x00FC (size: 0x4)
    float AudioVolume;                                                                // 0x0100 (size: 0x4)
    FMovieSceneFloatChannel SoundVolume;                                              // 0x0108 (size: 0xA0)
    FMovieSceneFloatChannel PitchMultiplier;                                          // 0x01A8 (size: 0xA0)
    FMovieSceneActorReferenceData AttachActorData;                                    // 0x0248 (size: 0xB0)
    bool bLooping;                                                                    // 0x02F8 (size: 0x1)
    bool bSuppressSubtitles;                                                          // 0x02F9 (size: 0x1)
    bool bOverrideAttenuation;                                                        // 0x02FA (size: 0x1)
    class USoundAttenuation* AttenuationSettings;                                     // 0x0300 (size: 0x8)
    FMovieSceneAudioSectionOnQueueSubtitles OnQueueSubtitles;                         // 0x0308 (size: 0x10)
    void OnQueueSubtitles(const TArray<FSubtitleCue>& Subtitles, float CueDuration);
    FMovieSceneAudioSectionOnAudioFinished OnAudioFinished;                           // 0x0318 (size: 0x10)
    void OnAudioFinished();
    FMovieSceneAudioSectionOnAudioPlaybackPercent OnAudioPlaybackPercent;             // 0x0328 (size: 0x10)
    void OnAudioPlaybackPercent(const class USoundWave* PlayingSoundWave, const float PlaybackPercent);

    void SetStartOffset(FFrameNumber InStartOffset);
    void SetSound(class USoundBase* InSound);
    FFrameNumber GetStartOffset();
    class USoundBase* GetSound();
}; // Size: 0x338

class UMovieSceneAudioTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> AudioSections;                                  // 0x0098 (size: 0x10)

}; // Size: 0xA8

class UMovieSceneBaseValueEvaluatorSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x40

class UMovieSceneBoolPropertySystem : public UMovieScenePropertySystem
{
}; // Size: 0x58

class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
{
}; // Size: 0xC8

class UMovieSceneBytePropertySystem : public UMovieScenePropertySystem
{
}; // Size: 0x58

class UMovieSceneByteSection : public UMovieSceneSection
{
    FMovieSceneByteChannel ByteCurve;                                                 // 0x00F0 (size: 0x98)

}; // Size: 0x188

class UMovieSceneByteTrack : public UMovieScenePropertyTrack
{
    class UEnum* Enum;                                                                // 0x00C0 (size: 0x8)

}; // Size: 0xC8

class UMovieSceneCameraAnimSection : public UMovieSceneSection
{
    FMovieSceneCameraAnimSectionData animData;                                        // 0x00E8 (size: 0x20)
    class UCameraAnim* CameraAnim;                                                    // 0x0108 (size: 0x8)
    float PlayRate;                                                                   // 0x0110 (size: 0x4)
    float PlayScale;                                                                  // 0x0114 (size: 0x4)
    float BlendInTime;                                                                // 0x0118 (size: 0x4)
    float BlendOutTime;                                                               // 0x011C (size: 0x4)
    bool bLooping;                                                                    // 0x0120 (size: 0x1)

}; // Size: 0x128

class UMovieSceneCameraAnimTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> CameraAnimSections;                             // 0x0098 (size: 0x10)

}; // Size: 0xA8

class UMovieSceneCameraCutSection : public UMovieSceneSection
{
    bool bLockPreviousCamera;                                                         // 0x00F0 (size: 0x1)
    FGuid CameraGuid;                                                                 // 0x00F4 (size: 0x10)
    FMovieSceneObjectBindingID CameraBindingID;                                       // 0x0104 (size: 0x18)
    FTransform InitialCameraCutTransform;                                             // 0x0120 (size: 0x30)
    bool bHasInitialCameraCutTransform;                                               // 0x0150 (size: 0x1)

    void SetCameraBindingID(const FMovieSceneObjectBindingID& InCameraBindingID);
    FMovieSceneObjectBindingID GetCameraBindingID();
}; // Size: 0x160

class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack
{
    bool bCanBlend;                                                                   // 0x0090 (size: 0x1)
    TArray<class UMovieSceneSection*> Sections;                                       // 0x0098 (size: 0x10)

}; // Size: 0xA8

class UMovieSceneCameraCutTrackInstance : public UMovieSceneTrackInstance
{
}; // Size: 0xB8

class UMovieSceneCameraShakeEvaluator : public UObject
{
}; // Size: 0x28

class UMovieSceneCameraShakeSection : public UMovieSceneSection
{
    FMovieSceneCameraShakeSectionData ShakeData;                                      // 0x00E8 (size: 0x20)
    TSubclassOf<class UCameraShakeBase> ShakeClass;                                   // 0x0108 (size: 0x8)
    float PlayScale;                                                                  // 0x0110 (size: 0x4)
    ECameraShakePlaySpace PlaySpace;                                                  // 0x0114 (size: 0x1)
    FRotator UserDefinedPlaySpace;                                                    // 0x0118 (size: 0xC)

}; // Size: 0x128

class UMovieSceneCameraShakeSourceShakeSection : public UMovieSceneSection
{
    FMovieSceneCameraShakeSectionData ShakeData;                                      // 0x00E8 (size: 0x20)

}; // Size: 0x108

class UMovieSceneCameraShakeSourceShakeTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> CameraShakeSections;                            // 0x0098 (size: 0x10)

}; // Size: 0xA8

class UMovieSceneCameraShakeSourceTriggerSection : public UMovieSceneSection
{
    FMovieSceneCameraShakeSourceTriggerChannel Channel;                               // 0x00E8 (size: 0x88)

}; // Size: 0x170

class UMovieSceneCameraShakeSourceTriggerTrack : public UMovieSceneTrack
{
    TArray<class UMovieSceneSection*> Sections;                                       // 0x0098 (size: 0x10)

}; // Size: 0xA8

class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> CameraShakeSections;                            // 0x0098 (size: 0x10)

}; // Size: 0xA8

class UMovieSceneCinematicShotSection : public UMovieSceneSubSection
{
    FString ShotDisplayName;                                                          // 0x0168 (size: 0x10)
    FText DisplayName;                                                                // 0x0178 (size: 0x18)

    void SetShotDisplayName(FString InShotDisplayName);
    FString GetShotDisplayName();
}; // Size: 0x190

class UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack
{
}; // Size: 0xA0

class UMovieSceneColorPropertySystem : public UMovieScenePropertySystem
{
}; // Size: 0x58

class UMovieSceneColorSection : public UMovieSceneSection
{
    FMovieSceneFloatChannel RedCurve;                                                 // 0x00F0 (size: 0xA0)
    FMovieSceneFloatChannel GreenCurve;                                               // 0x0190 (size: 0xA0)
    FMovieSceneFloatChannel BlueCurve;                                                // 0x0230 (size: 0xA0)
    FMovieSceneFloatChannel AlphaCurve;                                               // 0x02D0 (size: 0xA0)

}; // Size: 0x370

class UMovieSceneColorTrack : public UMovieScenePropertyTrack
{
    bool bIsSlateColor;                                                               // 0x00C0 (size: 0x1)

}; // Size: 0xC8

class UMovieSceneComponentAttachmentInvalidatorSystem : public UMovieSceneEntityInstantiatorSystem
{
}; // Size: 0x40

class UMovieSceneComponentAttachmentSystem : public UMovieSceneEntityInstantiatorSystem
{
}; // Size: 0x1C0

class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
{
    int32 MaterialIndex;                                                              // 0x00A8 (size: 0x4)

}; // Size: 0xB0

class UMovieSceneComponentMobilitySystem : public UMovieSceneEntityInstantiatorSystem
{
}; // Size: 0x220

class UMovieSceneComponentTransformSystem : public UMovieScenePropertySystem
{
}; // Size: 0x58

class UMovieSceneDeferredComponentMovementSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x58

class UMovieSceneEnumPropertySystem : public UMovieScenePropertySystem
{
}; // Size: 0x58

class UMovieSceneEnumSection : public UMovieSceneSection
{
    FMovieSceneByteChannel EnumCurve;                                                 // 0x00F0 (size: 0x98)

}; // Size: 0x188

class UMovieSceneEnumTrack : public UMovieScenePropertyTrack
{
    class UEnum* Enum;                                                                // 0x00C0 (size: 0x8)

}; // Size: 0xC8

class UMovieSceneEulerTransformPropertySystem : public UMovieScenePropertySystem
{
}; // Size: 0x58

class UMovieSceneEulerTransformTrack : public UMovieScenePropertyTrack
{
}; // Size: 0xC0

class UMovieSceneEventRepeaterSection : public UMovieSceneEventSectionBase
{
    FMovieSceneEvent Event;                                                           // 0x00F0 (size: 0x28)

}; // Size: 0x118

class UMovieSceneEventSection : public UMovieSceneSection
{
    FNameCurve events;                                                                // 0x00E8 (size: 0x78)
    FMovieSceneEventSectionData EventData;                                            // 0x0160 (size: 0x88)

}; // Size: 0x1E8

class UMovieSceneEventSectionBase : public UMovieSceneSection
{
}; // Size: 0xE8

class UMovieSceneEventSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x90

class UMovieSceneEventTrack : public UMovieSceneNameableTrack
{
    uint8 bFireEventsWhenForwards;                                                    // 0x00A0 (size: 0x1)
    uint8 bFireEventsWhenBackwards;                                                   // 0x00A0 (size: 0x1)
    EFireEventsAtPosition EventPosition;                                              // 0x00A4 (size: 0x1)
    TArray<class UMovieSceneSection*> Sections;                                       // 0x00A8 (size: 0x10)

}; // Size: 0xB8

class UMovieSceneEventTriggerSection : public UMovieSceneEventSectionBase
{
    FMovieSceneEventChannel EventChannel;                                             // 0x00F0 (size: 0x88)

}; // Size: 0x178

class UMovieSceneFadeSection : public UMovieSceneSection
{
    FMovieSceneFloatChannel FloatCurve;                                               // 0x00E8 (size: 0xA0)
    FLinearColor FadeColor;                                                           // 0x0188 (size: 0x10)
    uint8 bFadeAudio;                                                                 // 0x0198 (size: 0x1)

}; // Size: 0x1A0

class UMovieSceneFadeTrack : public UMovieSceneFloatTrack
{
}; // Size: 0xC8

class UMovieSceneFloatPropertySystem : public UMovieScenePropertySystem
{
}; // Size: 0x58

class UMovieSceneFloatSection : public UMovieSceneSection
{
    FMovieSceneFloatChannel FloatCurve;                                               // 0x00F0 (size: 0xA0)

}; // Size: 0x190

class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
{
}; // Size: 0xC0

class UMovieSceneHierarchicalBiasSystem : public UMovieSceneEntityInstantiatorSystem
{
}; // Size: 0x40

class UMovieSceneHierarchicalEasingInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
}; // Size: 0x90

class UMovieSceneInitialValueSystem : public UMovieSceneEntityInstantiatorSystem
{
}; // Size: 0x40

class UMovieSceneIntegerPropertySystem : public UMovieScenePropertySystem
{
}; // Size: 0x58

class UMovieSceneIntegerSection : public UMovieSceneSection
{
    FMovieSceneIntegerChannel IntegerCurve;                                           // 0x00F0 (size: 0x90)

}; // Size: 0x180

class UMovieSceneIntegerTrack : public UMovieScenePropertyTrack
{
}; // Size: 0xC0

class UMovieSceneInterrogatedPropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
}; // Size: 0x1E8

class UMovieSceneLevelVisibilitySection : public UMovieSceneSection
{
    ELevelVisibility Visibility;                                                      // 0x00F0 (size: 0x1)
    TArray<FName> LevelNames;                                                         // 0x00F8 (size: 0x10)

    void SetVisibility(ELevelVisibility InVisibility);
    void SetLevelNames(const TArray<FName>& InLevelNames);
    ELevelVisibility GetVisibility();
    TArray<FName> GetLevelNames();
}; // Size: 0x108

class UMovieSceneLevelVisibilitySystem : public UMovieSceneEntitySystem
{
}; // Size: 0x1A8

class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;                                       // 0x0090 (size: 0x10)

}; // Size: 0xA0

class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack
{
    class UMaterialParameterCollection* MPC;                                          // 0x00A8 (size: 0x8)

}; // Size: 0xB0

class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;                                       // 0x0090 (size: 0x10)

}; // Size: 0xA0

class UMovieSceneMotionVectorSimulationSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x98

class UMovieSceneObjectPropertySection : public UMovieSceneSection
{
    FMovieSceneObjectPathChannel ObjectChannel;                                       // 0x00E8 (size: 0xC0)

}; // Size: 0x1A8

class UMovieSceneObjectPropertyTrack : public UMovieScenePropertyTrack
{
    UClass* PropertyClass;                                                            // 0x00C8 (size: 0x8)

}; // Size: 0xD0

class UMovieSceneParameterSection : public UMovieSceneSection
{
    TArray<FBoolParameterNameAndCurve> BoolParameterNamesAndCurves;                   // 0x00E8 (size: 0x10)
    TArray<FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves;               // 0x00F8 (size: 0x10)
    TArray<FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves;          // 0x0108 (size: 0x10)
    TArray<FVectorParameterNameAndCurves> VectorParameterNamesAndCurves;              // 0x0118 (size: 0x10)
    TArray<FColorParameterNameAndCurves> ColorParameterNamesAndCurves;                // 0x0128 (size: 0x10)
    TArray<FTransformParameterNameAndCurves> TransformParameterNamesAndCurves;        // 0x0138 (size: 0x10)

    bool RemoveVectorParameter(FName InParameterName);
    bool RemoveVector2DParameter(FName InParameterName);
    bool RemoveTransformParameter(FName InParameterName);
    bool RemoveScalarParameter(FName InParameterName);
    bool RemoveColorParameter(FName InParameterName);
    bool RemoveBoolParameter(FName InParameterName);
    void GetParameterNames(TSet<FName>& ParameterNames);
    void AddVectorParameterKey(FName InParameterName, FFrameNumber InTime, FVector InValue);
    void AddVector2DParameterKey(FName InParameterName, FFrameNumber InTime, FVector2D InValue);
    void AddTransformParameterKey(FName InParameterName, FFrameNumber InTime, const FTransform& InValue);
    void AddScalarParameterKey(FName InParameterName, FFrameNumber InTime, float InValue);
    void AddColorParameterKey(FName InParameterName, FFrameNumber InTime, FLinearColor InValue);
    void AddBoolParameterKey(FName InParameterName, FFrameNumber InTime, bool InValue);
}; // Size: 0x148

class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;                                       // 0x0098 (size: 0x10)

}; // Size: 0xA8

class UMovieSceneParticleSection : public UMovieSceneSection
{
    FMovieSceneParticleChannel ParticleKeys;                                          // 0x00E8 (size: 0x98)

}; // Size: 0x180

class UMovieSceneParticleTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> ParticleSections;                               // 0x0098 (size: 0x10)

}; // Size: 0xA8

class UMovieScenePiecewiseBoolBlenderSystem : public UMovieSceneBlenderSystem
{
}; // Size: 0x90

class UMovieScenePiecewiseByteBlenderSystem : public UMovieSceneBlenderSystem
{
}; // Size: 0x90

class UMovieScenePiecewiseEnumBlenderSystem : public UMovieSceneBlenderSystem
{
}; // Size: 0x90

class UMovieScenePiecewiseFloatBlenderSystem : public UMovieSceneBlenderSystem
{
}; // Size: 0x128

class UMovieScenePiecewiseIntegerBlenderSystem : public UMovieSceneBlenderSystem
{
}; // Size: 0xB0

class UMovieScenePostEvalEventSystem : public UMovieSceneEventSystem
{
}; // Size: 0x90

class UMovieScenePostSpawnEventSystem : public UMovieSceneEventSystem
{
}; // Size: 0x90

class UMovieScenePreSpawnEventSystem : public UMovieSceneEventSystem
{
}; // Size: 0x90

class UMovieScenePrimitiveMaterialSection : public UMovieSceneSection
{
    FMovieSceneObjectPathChannel MaterialChannel;                                     // 0x00E8 (size: 0xC0)

}; // Size: 0x1A8

class UMovieScenePrimitiveMaterialTrack : public UMovieScenePropertyTrack
{
    int32 MaterialIndex;                                                              // 0x00C8 (size: 0x4)

}; // Size: 0xD0

class UMovieScenePropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
}; // Size: 0x248

class UMovieScenePropertySystem : public UMovieSceneEntitySystem
{
    class UMovieScenePropertyInstantiatorSystem* InstantiatorSystem;                  // 0x0048 (size: 0x8)

}; // Size: 0x58

class UMovieScenePropertyTrack : public UMovieSceneNameableTrack
{
    class UMovieSceneSection* SectionToKey;                                           // 0x0090 (size: 0x8)
    FMovieScenePropertyBinding PropertyBinding;                                       // 0x0098 (size: 0x14)
    TArray<class UMovieSceneSection*> Sections;                                       // 0x00B0 (size: 0x10)

}; // Size: 0xC0

class UMovieSceneQuaternionInterpolationRotationSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x40

class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
{
    FMovieSceneSkeletalAnimationParams Params;                                        // 0x00E8 (size: 0xD8)
    class UAnimSequence* AnimSequence;                                                // 0x01C0 (size: 0x8)
    class UAnimSequenceBase* Animation;                                               // 0x01C8 (size: 0x8)
    float StartOffset;                                                                // 0x01D0 (size: 0x4)
    float EndOffset;                                                                  // 0x01D4 (size: 0x4)
    float PlayRate;                                                                   // 0x01D8 (size: 0x4)
    uint8 bReverse;                                                                   // 0x01DC (size: 0x1)
    FName SlotName;                                                                   // 0x01E0 (size: 0x8)
    FVector StartLocationOffset;                                                      // 0x01E8 (size: 0xC)
    FRotator StartRotationOffset;                                                     // 0x01F4 (size: 0xC)
    bool bMatchWithPrevious;                                                          // 0x0200 (size: 0x1)
    FName MatchedBoneName;                                                            // 0x0204 (size: 0x8)
    FVector MatchedLocationOffset;                                                    // 0x020C (size: 0xC)
    FRotator MatchedRotationOffset;                                                   // 0x0218 (size: 0xC)
    bool bMatchTranslation;                                                           // 0x0224 (size: 0x1)
    bool bMatchIncludeZHeight;                                                        // 0x0225 (size: 0x1)
    bool bMatchRotationYaw;                                                           // 0x0226 (size: 0x1)
    bool bMatchRotationPitch;                                                         // 0x0227 (size: 0x1)
    bool bMatchRotationRoll;                                                          // 0x0228 (size: 0x1)

}; // Size: 0x270

class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> AnimationSections;                              // 0x0098 (size: 0x10)
    bool bUseLegacySectionIndexBlend;                                                 // 0x00A8 (size: 0x1)
    FMovieSceneSkeletalAnimRootMotionTrackParams RootMotionParams;                    // 0x00B0 (size: 0x30)
    bool bBlendFirstChildOfRoot;                                                      // 0x00E0 (size: 0x1)

}; // Size: 0xE8

class UMovieSceneSlomoSection : public UMovieSceneSection
{
    FMovieSceneFloatChannel FloatCurve;                                               // 0x00E8 (size: 0xA0)

}; // Size: 0x188

class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack
{
}; // Size: 0xC8

class UMovieSceneStringSection : public UMovieSceneSection
{
    FMovieSceneStringChannel StringCurve;                                             // 0x00E8 (size: 0xA0)

}; // Size: 0x188

class UMovieSceneStringTrack : public UMovieScenePropertyTrack
{
}; // Size: 0xC8

class UMovieSceneTransformOriginSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x78

class UMovieSceneTransformTrack : public UMovieScenePropertyTrack
{
}; // Size: 0xC0

class UMovieSceneVectorPropertySystem : public UMovieScenePropertySystem
{
}; // Size: 0x58

class UMovieSceneVectorSection : public UMovieSceneSection
{
    FMovieSceneFloatChannel Curves;                                                   // 0x00F0 (size: 0x280)
    int32 ChannelsUsed;                                                               // 0x0370 (size: 0x4)

}; // Size: 0x378

class UMovieSceneVectorTrack : public UMovieScenePropertyTrack
{
    int32 NumChannelsUsed;                                                            // 0x00C0 (size: 0x4)

}; // Size: 0xC8

class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack
{
}; // Size: 0xC8

class UWeightAndEasingEvaluatorSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x78

#endif
