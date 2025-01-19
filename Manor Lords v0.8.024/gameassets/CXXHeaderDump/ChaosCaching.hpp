#ifndef UE4SS_SDK_ChaosCaching_HPP
#define UE4SS_SDK_ChaosCaching_HPP

#include "ChaosCaching_enums.hpp"

struct FBreakingEvent : public FCacheEventBase
{
    int32 Index;                                                                      // 0x0008 (size: 0x4)
    FVector Location;                                                                 // 0x0010 (size: 0x18)
    FVector Velocity;                                                                 // 0x0028 (size: 0x18)
    FVector AngularVelocity;                                                          // 0x0040 (size: 0x18)
    float Mass;                                                                       // 0x0058 (size: 0x4)
    FVector BoundingBoxMin;                                                           // 0x0060 (size: 0x18)
    FVector BoundingBoxMax;                                                           // 0x0078 (size: 0x18)

}; // Size: 0x90

struct FCacheEventBase
{
}; // Size: 0x8

struct FCacheEventTrack
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    class UScriptStruct* Struct;                                                      // 0x0008 (size: 0x8)
    TArray<float> TimeStamps;                                                         // 0x0010 (size: 0x10)

}; // Size: 0x38

struct FCacheSpawnableTemplate
{
    class UObject* DuplicatedTemplate;                                                // 0x0000 (size: 0x8)
    FTransform InitialTransform;                                                      // 0x0010 (size: 0x60)
    FTransform ComponentTransform;                                                    // 0x0070 (size: 0x60)

}; // Size: 0xD0

struct FCollisionEvent : public FCacheEventBase
{
    FVector Location;                                                                 // 0x0008 (size: 0x18)
    FVector AccumulatedImpulse;                                                       // 0x0020 (size: 0x18)
    FVector Normal;                                                                   // 0x0038 (size: 0x18)
    FVector Velocity1;                                                                // 0x0050 (size: 0x18)
    FVector Velocity2;                                                                // 0x0068 (size: 0x18)
    FVector DeltaVelocity1;                                                           // 0x0080 (size: 0x18)
    FVector DeltaVelocity2;                                                           // 0x0098 (size: 0x18)
    FVector AngularVelocity1;                                                         // 0x00B0 (size: 0x18)
    FVector AngularVelocity2;                                                         // 0x00C8 (size: 0x18)
    float Mass1;                                                                      // 0x00E0 (size: 0x4)
    float Mass2;                                                                      // 0x00E4 (size: 0x4)
    float PenetrationDepth;                                                           // 0x00E8 (size: 0x4)

}; // Size: 0xF0

struct FCompressedRichCurves
{
    TArray<FCompressedRichCurve> CompressedRichCurves;                                // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FEnableStateEvent : public FCacheEventBase
{
    int32 Index;                                                                      // 0x0008 (size: 0x4)
    bool bEnable;                                                                     // 0x000C (size: 0x1)

}; // Size: 0x10

struct FMovieSceneChaosCacheParams : public FMovieSceneBaseCacheParams
{
    class UChaosCacheCollection* CacheCollection;                                     // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FMovieSceneChaosCacheSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneChaosCacheSectionTemplateParameters Params;                            // 0x0020 (size: 0x30)

}; // Size: 0x50

struct FMovieSceneChaosCacheSectionTemplateParameters : public FMovieSceneBaseCacheSectionTemplateParameters
{
    FMovieSceneChaosCacheParams ChaosCacheParams;                                     // 0x0008 (size: 0x28)

}; // Size: 0x30

struct FObservedComponent
{
    FName CacheName;                                                                  // 0x0000 (size: 0x8)
    FComponentReference ComponentRef;                                                 // 0x0008 (size: 0x28)
    FSoftComponentReference SoftComponentRef;                                         // 0x0030 (size: 0x48)
    bool bIsSimulating;                                                               // 0x0078 (size: 0x1)
    bool bPlaybackEnabled;                                                            // 0x0079 (size: 0x1)
    FDirectoryPath USDCacheDirectory;                                                 // 0x0080 (size: 0x10)

}; // Size: 0x180

struct FParticleTransformTrack
{
    FRawAnimSequenceTrack RawTransformTrack;                                          // 0x0000 (size: 0x30)
    float BeginOffset;                                                                // 0x0030 (size: 0x4)
    bool bDeactivateOnEnd;                                                            // 0x0034 (size: 0x1)
    TArray<float> KeyTimestamps;                                                      // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FPerParticleCacheData
{
    FParticleTransformTrack TransformData;                                            // 0x0000 (size: 0x48)
    TMap<class FName, class FRichCurve> CurveData;                                    // 0x0048 (size: 0x50)

}; // Size: 0x98

struct FRichCurves
{
    TArray<FRichCurve> RichCurves;                                                    // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FTrailingEvent : public FCacheEventBase
{
    int32 Index;                                                                      // 0x0008 (size: 0x4)
    FVector Location;                                                                 // 0x0010 (size: 0x18)
    FVector Velocity;                                                                 // 0x0028 (size: 0x18)
    FVector AngularVelocity;                                                          // 0x0040 (size: 0x18)
    FVector BoundingBoxMin;                                                           // 0x0058 (size: 0x18)
    FVector BoundingBoxMax;                                                           // 0x0070 (size: 0x18)

}; // Size: 0x88

class AChaosCacheManager : public AActor
{
    class UChaosCacheCollection* CacheCollection;                                     // 0x0290 (size: 0x8)
    ECacheMode CacheMode;                                                             // 0x0298 (size: 0x1)
    EStartMode StartMode;                                                             // 0x0299 (size: 0x1)
    float StartTime;                                                                  // 0x029C (size: 0x4)
    TArray<FObservedComponent> ObservedComponents;                                    // 0x02A8 (size: 0x10)

    void TriggerComponentByCache(FName InCacheName);
    void TriggerComponent(class UPrimitiveComponent* InComponent);
    void TriggerAll();
    void SetStartTime(float InStartTime);
    void SetCurrentTime(float CurrentTime);
    void SetCacheCollection(class UChaosCacheCollection* InCacheCollection);
    void ResetSingleTransform(int32 InIndex);
    void ResetAllComponentTransforms();
    void EnablePlaybackByCache(FName InCacheName, bool bEnable);
    void EnablePlayback(int32 Index, bool bEnable);
}; // Size: 0x340

class AChaosCachePlayer : public AChaosCacheManager
{
}; // Size: 0x340

class UChaosCache : public UObject
{
    float RecordedDuration;                                                           // 0x0028 (size: 0x4)
    uint32 NumRecordedFrames;                                                         // 0x002C (size: 0x4)
    TArray<int32> TrackToParticle;                                                    // 0x0030 (size: 0x10)
    TArray<FPerParticleCacheData> ParticleTracks;                                     // 0x0040 (size: 0x10)
    TArray<int32> ChannelCurveToParticle;                                             // 0x0050 (size: 0x10)
    TMap<class FName, class FRichCurves> ChannelsTracks;                              // 0x0060 (size: 0x50)
    TMap<class FName, class FCompressedRichCurves> CompressedChannelsTracks;          // 0x00B0 (size: 0x50)
    TMap<class FName, class FRichCurve> CurveData;                                    // 0x0100 (size: 0x50)
    TMap<class FName, class FParticleTransformTrack> NamedTransformTracks;            // 0x0150 (size: 0x50)
    bool bCompressChannels;                                                           // 0x01A0 (size: 0x1)
    float ChannelsCompressionErrorThreshold;                                          // 0x01A4 (size: 0x4)
    float ChannelsCompressionSampleRate;                                              // 0x01A8 (size: 0x4)
    TMap<class FName, class FCacheEventTrack> EventTracks;                            // 0x01B0 (size: 0x50)
    FCacheSpawnableTemplate Spawnable;                                                // 0x0200 (size: 0xD0)
    FGuid AdapterGuid;                                                                // 0x02D0 (size: 0x10)
    int32 Version;                                                                    // 0x02E0 (size: 0x4)

}; // Size: 0x360

class UChaosCacheCollection : public UObject
{
    TArray<class UChaosCache*> Caches;                                                // 0x0028 (size: 0x10)

}; // Size: 0x38

class UMovieSceneChaosCacheSection : public UMovieSceneBaseCacheSection
{
    FMovieSceneChaosCacheParams Params;                                               // 0x00F8 (size: 0x28)

}; // Size: 0x120

class UMovieSceneChaosCacheTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> AnimationSections;                              // 0x00A0 (size: 0x10)

}; // Size: 0xB0

#endif
