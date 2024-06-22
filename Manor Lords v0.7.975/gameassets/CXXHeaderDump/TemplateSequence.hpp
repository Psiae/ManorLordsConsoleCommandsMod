#ifndef UE4SS_SDK_TemplateSequence_HPP
#define UE4SS_SDK_TemplateSequence_HPP

#include "TemplateSequence_enums.hpp"

struct FTemplateSectionPropertyScale
{
    FGuid ObjectBinding;                                                              // 0x0000 (size: 0x10)
    FMovieScenePropertyBinding PropertyBinding;                                       // 0x0010 (size: 0x14)
    ETemplateSectionPropertyScaleType PropertyScaleType;                              // 0x0024 (size: 0x4)
    FMovieSceneFloatChannel FloatChannel;                                             // 0x0028 (size: 0xA0)

}; // Size: 0xC8

struct FTemplateSequenceBindingOverrideData
{
    TWeakObjectPtr<class UObject> Object;                                             // 0x0000 (size: 0x8)
    bool bOverridesDefault;                                                           // 0x0008 (size: 0x1)

}; // Size: 0xC

class ATemplateSequenceActor : public AActor
{
    FMovieSceneSequencePlaybackSettings PlaybackSettings;                             // 0x0230 (size: 0x14)
    class UTemplateSequencePlayer* SequencePlayer;                                    // 0x0248 (size: 0x8)
    FSoftObjectPath TemplateSequence;                                                 // 0x0250 (size: 0x18)
    FTemplateSequenceBindingOverrideData BindingOverride;                             // 0x0268 (size: 0xC)

    void SetSequence(class UTemplateSequence* InSequence);
    void SetBinding(class AActor* Actor, bool bOverridesDefault);
    class UTemplateSequence* LoadSequence();
    class UTemplateSequencePlayer* GetSequencePlayer();
    class UTemplateSequence* GetSequence();
}; // Size: 0x278

class UCameraAnimationSequence : public UTemplateSequence
{
}; // Size: 0x108

class USequenceCameraShakeCameraStandIn : public UObject
{
    float FieldOfView;                                                                // 0x0030 (size: 0x4)
    uint8 bConstrainAspectRatio;                                                      // 0x0034 (size: 0x1)
    float AspectRatio;                                                                // 0x0038 (size: 0x4)
    FPostProcessSettings PostProcessSettings;                                         // 0x0040 (size: 0x560)
    float PostProcessBlendWeight;                                                     // 0x05A0 (size: 0x4)
    FCameraFilmbackSettings Filmback;                                                 // 0x05A4 (size: 0xC)
    FCameraLensSettings LensSettings;                                                 // 0x05B0 (size: 0x18)
    FCameraFocusSettings FocusSettings;                                               // 0x05C8 (size: 0x58)
    float CurrentFocalLength;                                                         // 0x0620 (size: 0x4)
    float CurrentAperture;                                                            // 0x0624 (size: 0x4)
    float CurrentFocusDistance;                                                       // 0x0628 (size: 0x4)

}; // Size: 0x670

class USequenceCameraShakePattern : public UCameraShakePattern
{
    class UCameraAnimationSequence* Sequence;                                         // 0x0028 (size: 0x8)
    float PlayRate;                                                                   // 0x0030 (size: 0x4)
    float Scale;                                                                      // 0x0034 (size: 0x4)
    float BlendInTime;                                                                // 0x0038 (size: 0x4)
    float BlendOutTime;                                                               // 0x003C (size: 0x4)
    float RandomSegmentDuration;                                                      // 0x0040 (size: 0x4)
    bool bRandomSegment;                                                              // 0x0044 (size: 0x1)
    class USequenceCameraShakeSequencePlayer* Player;                                 // 0x0048 (size: 0x8)
    class USequenceCameraShakeCameraStandIn* CameraStandIn;                           // 0x0050 (size: 0x8)

}; // Size: 0x58

class USequenceCameraShakeSequencePlayer : public UObject
{
    class UObject* BoundObjectOverride;                                               // 0x02D0 (size: 0x8)
    class UMovieSceneSequence* Sequence;                                              // 0x02D8 (size: 0x8)
    FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;                   // 0x02E0 (size: 0xE8)

}; // Size: 0x428

class UTemplateSequence : public UMovieSceneSequence
{
    class UMovieScene* MovieScene;                                                    // 0x0060 (size: 0x8)
    TSoftClassPtr<AActor> BoundActorClass;                                            // 0x0068 (size: 0x28)
    TSoftObjectPtr<AActor> BoundPreviewActor;                                         // 0x0090 (size: 0x28)
    TMap<class FGuid, class FName> BoundActorComponents;                              // 0x00B8 (size: 0x50)

}; // Size: 0x108

class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
{

    class UTemplateSequencePlayer* CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, FMovieSceneSequencePlaybackSettings Settings, class ATemplateSequenceActor*& OutActor);
}; // Size: 0x4F0

class UTemplateSequencePropertyScalingEvaluatorSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x90

class UTemplateSequencePropertyScalingInstantiatorSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x98

class UTemplateSequenceSection : public UMovieSceneSubSection
{
    TArray<FTemplateSectionPropertyScale> PropertyScales;                             // 0x0170 (size: 0x10)

}; // Size: 0x180

class UTemplateSequenceSystem : public UMovieSceneEntitySystem
{
}; // Size: 0xB0

class UTemplateSequenceTrack : public UMovieSceneSubTrack
{
}; // Size: 0xA0

#endif
