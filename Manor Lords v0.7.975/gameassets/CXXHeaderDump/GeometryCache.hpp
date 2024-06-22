#ifndef UE4SS_SDK_GeometryCache_HPP
#define UE4SS_SDK_GeometryCache_HPP

struct FGeometryCacheMeshBatchInfo
{
}; // Size: 0xC

struct FGeometryCacheMeshData
{
}; // Size: 0xB0

struct FGeometryCacheVertexInfo
{
}; // Size: 0x8

struct FTrackRenderData
{
}; // Size: 0x70

class AGeometryCacheActor : public AActor
{
    class UGeometryCacheComponent* GeometryCacheComponent;                            // 0x0220 (size: 0x8)

    class UGeometryCacheComponent* GetGeometryCacheComponent();
}; // Size: 0x228

class UDEPRECATED_GeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{
    uint32 NumMeshSamples;                                                            // 0x0058 (size: 0x4)

    void AddMeshSample(const FGeometryCacheMeshData& MeshData, const float SampleTime);
}; // Size: 0x80

class UDEPRECATED_GeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{

    void SetMesh(const FGeometryCacheMeshData& NewMeshData);
}; // Size: 0x108

class UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{

    void SetMesh(const FGeometryCacheMeshData& NewMeshData);
}; // Size: 0x108

class UGeometryCache : public UObject
{
    TArray<class UMaterialInterface*> Materials;                                      // 0x0030 (size: 0x10)
    TArray<class UGeometryCacheTrack*> Tracks;                                        // 0x0040 (size: 0x10)
    int32 StartFrame;                                                                 // 0x0060 (size: 0x4)
    int32 EndFrame;                                                                   // 0x0064 (size: 0x4)
    uint64 Hash;                                                                      // 0x0068 (size: 0x8)

}; // Size: 0x70

class UGeometryCacheCodecBase : public UObject
{
    TArray<int32> TopologyRanges;                                                     // 0x0028 (size: 0x10)

}; // Size: 0x38

class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase
{
    int32 DummyProperty;                                                              // 0x0038 (size: 0x4)

}; // Size: 0x40

class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase
{
}; // Size: 0x40

class UGeometryCacheComponent : public UMeshComponent
{
    class UGeometryCache* GeometryCache;                                              // 0x0478 (size: 0x8)
    bool bRunning;                                                                    // 0x0480 (size: 0x1)
    bool bLooping;                                                                    // 0x0481 (size: 0x1)
    bool bExtrapolateFrames;                                                          // 0x0482 (size: 0x1)
    float StartTimeOffset;                                                            // 0x0484 (size: 0x4)
    float PlaybackSpeed;                                                              // 0x0488 (size: 0x4)
    float MotionVectorScale;                                                          // 0x048C (size: 0x4)
    int32 NumTracks;                                                                  // 0x0490 (size: 0x4)
    float ElapsedTime;                                                                // 0x0494 (size: 0x4)
    float Duration;                                                                   // 0x04CC (size: 0x4)
    bool bManualTick;                                                                 // 0x04D0 (size: 0x1)

    void TickAtThisTime(const float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);
    void Stop();
    void SetStartTimeOffset(const float NewStartTimeOffset);
    void SetPlaybackSpeed(const float NewPlaybackSpeed);
    void SetMotionVectorScale(const float NewMotionVectorScale);
    void SetLooping(const bool bNewLooping);
    bool SetGeometryCache(class UGeometryCache* NewGeomCache);
    void SetExtrapolateFrames(const bool bNewExtrapolating);
    void PlayReversedFromEnd();
    void PlayReversed();
    void PlayFromStart();
    void Play();
    void Pause();
    bool IsPlayingReversed();
    bool IsPlaying();
    bool IsLooping();
    bool IsExtrapolatingFrames();
    float GetStartTimeOffset();
    float GetPlaybackSpeed();
    float GetPlaybackDirection();
    int32 GetNumberOfFrames();
    float GetMotionVectorScale();
    float GetDuration();
    float GetAnimationTime();
}; // Size: 0x4E0

class UGeometryCacheTrack : public UObject
{
    float Duration;                                                                   // 0x0028 (size: 0x4)

}; // Size: 0x58

class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
{
    class UGeometryCacheCodecBase* Codec;                                             // 0x0058 (size: 0x8)
    float StartSampleTime;                                                            // 0x00C8 (size: 0x4)

}; // Size: 0xD8

#endif
