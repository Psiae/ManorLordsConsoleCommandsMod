#ifndef UE4SS_SDK_GeometryCache_HPP
#define UE4SS_SDK_GeometryCache_HPP

struct FGeometryCacheMeshBatchInfo
{
}; // Size: 0xC

struct FGeometryCacheMeshData
{
}; // Size: 0xC8

struct FGeometryCacheVertexInfo
{
}; // Size: 0x9

struct FNiagaraGeometryCacheMICOverride
{
    class UMaterialInterface* OriginalMaterial;                                       // 0x0000 (size: 0x8)
    class UMaterialInstanceConstant* ReplacementMaterial;                             // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FNiagaraGeometryCacheReference
{
    class UGeometryCache* GeometryCache;                                              // 0x0000 (size: 0x8)
    FNiagaraUserParameterBinding GeometryCacheUserParamBinding;                       // 0x0008 (size: 0x20)
    TArray<class UMaterialInterface*> OverrideMaterials;                              // 0x0028 (size: 0x10)
    TArray<FNiagaraGeometryCacheMICOverride> MICOverrideMaterials;                    // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FTrackRenderData
{
}; // Size: 0xC0

class AGeometryCacheActor : public AActor
{
    class UGeometryCacheComponent* GeometryCacheComponent;                            // 0x0290 (size: 0x8)

    class UGeometryCacheComponent* GetGeometryCacheComponent();
}; // Size: 0x298

class UDEPRECATED_GeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{
    uint32 NumMeshSamples;                                                            // 0x0058 (size: 0x4)

    void AddMeshSample(const FGeometryCacheMeshData& MeshData, const float SampleTime);
}; // Size: 0x80

class UDEPRECATED_GeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{

    void SetMesh(const FGeometryCacheMeshData& NewMeshData);
}; // Size: 0x120

class UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{

    void SetMesh(const FGeometryCacheMeshData& NewMeshData);
}; // Size: 0x120

class UGeometryCache : public UObject
{
    TArray<class UMaterialInterface*> Materials;                                      // 0x0030 (size: 0x10)
    TArray<FName> MaterialSlotNames;                                                  // 0x0040 (size: 0x10)
    TArray<class UGeometryCacheTrack*> Tracks;                                        // 0x0050 (size: 0x10)
    TArray<class UAssetUserData*> AssetUserData;                                      // 0x0060 (size: 0x10)
    int32 StartFrame;                                                                 // 0x0078 (size: 0x4)
    int32 EndFrame;                                                                   // 0x007C (size: 0x4)
    uint64 Hash;                                                                      // 0x0080 (size: 0x8)

}; // Size: 0x88

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
    class UGeometryCache* GeometryCache;                                              // 0x0550 (size: 0x8)
    bool bRunning;                                                                    // 0x0558 (size: 0x1)
    bool bLooping;                                                                    // 0x0559 (size: 0x1)
    bool bExtrapolateFrames;                                                          // 0x055A (size: 0x1)
    float StartTimeOffset;                                                            // 0x055C (size: 0x4)
    float PlaybackSpeed;                                                              // 0x0560 (size: 0x4)
    float MotionVectorScale;                                                          // 0x0564 (size: 0x4)
    int32 NumTracks;                                                                  // 0x0568 (size: 0x4)
    float ElapsedTime;                                                                // 0x056C (size: 0x4)
    float Duration;                                                                   // 0x05BC (size: 0x4)
    bool bManualTick;                                                                 // 0x05C0 (size: 0x1)
    bool bOverrideWireframeColor;                                                     // 0x05C1 (size: 0x1)
    FLinearColor WireframeOverrideColor;                                              // 0x05C4 (size: 0x10)

    void TickAtThisTime(const float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);
    void Stop();
    void SetWireframeOverrideColor(const FLinearColor Color);
    void SetStartTimeOffset(const float NewStartTimeOffset);
    void SetPlaybackSpeed(const float NewPlaybackSpeed);
    void SetOverrideWireframeColor(bool bOverride);
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
    FLinearColor GetWireframeOverrideColor();
    float GetStartTimeOffset();
    float GetPlaybackSpeed();
    float GetPlaybackDirection();
    bool GetOverrideWireframeColor();
    int32 GetNumberOfFrames();
    float GetMotionVectorScale();
    float GetDuration();
    float GetAnimationTime();
}; // Size: 0x5E0

class UGeometryCacheTrack : public UObject
{
    float Duration;                                                                   // 0x0028 (size: 0x4)

}; // Size: 0x58

class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
{
    class UGeometryCacheCodecBase* Codec;                                             // 0x0058 (size: 0x8)
    float StartSampleTime;                                                            // 0x00C0 (size: 0x4)

}; // Size: 0xD0

class UNiagaraGeometryCacheRendererProperties : public UNiagaraRendererProperties
{
    TArray<FNiagaraGeometryCacheReference> GeometryCaches;                            // 0x00C0 (size: 0x10)
    ENiagaraRendererSourceDataMode SourceMode;                                        // 0x00D0 (size: 0x1)
    bool bIsLooping;                                                                  // 0x00D1 (size: 0x1)
    uint32 ComponentCountLimit;                                                       // 0x00D4 (size: 0x4)
    FNiagaraVariableAttributeBinding PositionBinding;                                 // 0x00D8 (size: 0x38)
    FNiagaraVariableAttributeBinding RotationBinding;                                 // 0x0110 (size: 0x38)
    FNiagaraVariableAttributeBinding ScaleBinding;                                    // 0x0148 (size: 0x38)
    FNiagaraVariableAttributeBinding ElapsedTimeBinding;                              // 0x0180 (size: 0x38)
    FNiagaraVariableAttributeBinding EnabledBinding;                                  // 0x01B8 (size: 0x38)
    FNiagaraVariableAttributeBinding ArrayIndexBinding;                               // 0x01F0 (size: 0x38)
    FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;                    // 0x0228 (size: 0x38)
    int32 RendererVisibility;                                                         // 0x0260 (size: 0x4)
    bool bAssignComponentsOnParticleID;                                               // 0x0264 (size: 0x1)
    FNiagaraRendererMaterialParameters MaterialParameters;                            // 0x0268 (size: 0x50)

}; // Size: 0x2E8

#endif
