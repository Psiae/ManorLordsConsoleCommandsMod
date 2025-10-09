#ifndef UE4SS_SDK_SteamAudio_HPP
#define UE4SS_SDK_SteamAudio_HPP

#include "SteamAudio_enums.hpp"

struct FBakedDataInfo
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    int32 Size;                                                                       // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FSubmixEffectReverbPluginSettings
{
}; // Size: 0x1

class APhononProbeVolume : public AVolume
{
    EPhononProbePlacementStrategy PlacementStrategy;                                  // 0x0258 (size: 0x1)
    float HorizontalSpacing;                                                          // 0x025C (size: 0x4)
    float HeightAboveFloor;                                                           // 0x0260 (size: 0x4)
    int32 NumProbes;                                                                  // 0x0264 (size: 0x4)
    int32 ProbeDataSize;                                                              // 0x0268 (size: 0x4)
    TArray<FBakedDataInfo> BakedDataInfo;                                             // 0x0270 (size: 0x10)
    class UPhononProbeComponent* PhononProbeComponent;                                // 0x0280 (size: 0x8)
    FString ProbeBoxFileName;                                                         // 0x0288 (size: 0x10)
    FString ProbeBatchFileName;                                                       // 0x0298 (size: 0x10)

}; // Size: 0x2A8

class UPhononGeometryComponent : public USceneComponent
{
    bool ExportAllChildren;                                                           // 0x01F8 (size: 0x1)
    uint32 NumVertices;                                                               // 0x01FC (size: 0x4)
    uint32 NumTriangles;                                                              // 0x0200 (size: 0x4)

}; // Size: 0x220

class UPhononMaterialComponent : public UActorComponent
{
    int32 MaterialIndex;                                                              // 0x00B0 (size: 0x4)
    EPhononMaterial MaterialPreset;                                                   // 0x00B4 (size: 0x1)
    float LowFreqAbsorption;                                                          // 0x00B8 (size: 0x4)
    float MidFreqAbsorption;                                                          // 0x00BC (size: 0x4)
    float HighFreqAbsorption;                                                         // 0x00C0 (size: 0x4)
    float LowFreqTransmission;                                                        // 0x00C4 (size: 0x4)
    float MidFreqTransmission;                                                        // 0x00C8 (size: 0x4)
    float HighFreqTransmission;                                                       // 0x00CC (size: 0x4)
    float Scattering;                                                                 // 0x00D0 (size: 0x4)

}; // Size: 0xD8

class UPhononOcclusionSourceSettings : public UOcclusionPluginSourceSettingsBase
{
    EIplDirectOcclusionMode DirectOcclusionMode;                                      // 0x0028 (size: 0x1)
    EIplDirectOcclusionMethod DirectOcclusionMethod;                                  // 0x0029 (size: 0x1)
    float DirectOcclusionSourceRadius;                                                // 0x002C (size: 0x4)
    bool DirectAttenuation;                                                           // 0x0030 (size: 0x1)
    bool AirAbsorption;                                                               // 0x0031 (size: 0x1)

}; // Size: 0x38

class UPhononProbeComponent : public USceneComponent
{
    TArray<FVector> ProbeLocations;                                                   // 0x01F8 (size: 0x10)

}; // Size: 0x230

class UPhononReverbSourceSettings : public UReverbPluginSourceSettingsBase
{
    EIplSimulationType SourceReverbSimulationType;                                    // 0x0028 (size: 0x1)
    float SourceReverbContribution;                                                   // 0x002C (size: 0x4)

}; // Size: 0x30

class UPhononSourceComponent : public USceneComponent
{
    float BakingRadius;                                                               // 0x01F8 (size: 0x4)
    FName UniqueIdentifier;                                                           // 0x01FC (size: 0x8)

}; // Size: 0x210

class UPhononSpatializationSourceSettings : public USpatializationPluginSourceSettingsBase
{
    EIplSpatializationMethod SpatializationMethod;                                    // 0x0028 (size: 0x1)
    EIplHrtfInterpolationMethod HrtfInterpolationMethod;                              // 0x0029 (size: 0x1)

}; // Size: 0x30

class USteamAudioSettings : public UObject
{
    FSoftObjectPath OutputSubmix;                                                     // 0x0028 (size: 0x18)
    EIplAudioEngine AudioEngine;                                                      // 0x0040 (size: 0x1)
    EIplRayTracerType RayTracer;                                                      // 0x0041 (size: 0x1)
    EIplConvolutionType ConvolutionType;                                              // 0x0042 (size: 0x1)
    bool ExportBSPGeometry;                                                           // 0x0043 (size: 0x1)
    bool ExportLandscapeGeometry;                                                     // 0x0044 (size: 0x1)
    EPhononMaterial StaticMeshMaterialPreset;                                         // 0x0045 (size: 0x1)
    float StaticMeshLowFreqAbsorption;                                                // 0x0048 (size: 0x4)
    float StaticMeshMidFreqAbsorption;                                                // 0x004C (size: 0x4)
    float StaticMeshHighFreqAbsorption;                                               // 0x0050 (size: 0x4)
    float StaticMeshLowFreqTransmission;                                              // 0x0054 (size: 0x4)
    float StaticMeshMidFreqTransmission;                                              // 0x0058 (size: 0x4)
    float StaticMeshHighFreqTransmission;                                             // 0x005C (size: 0x4)
    float StaticMeshScattering;                                                       // 0x0060 (size: 0x4)
    EPhononMaterial BSPMaterialPreset;                                                // 0x0064 (size: 0x1)
    float BSPLowFreqAbsorption;                                                       // 0x0068 (size: 0x4)
    float BSPMidFreqAbsorption;                                                       // 0x006C (size: 0x4)
    float BSPHighFreqAbsorption;                                                      // 0x0070 (size: 0x4)
    float BSPLowFreqTransmission;                                                     // 0x0074 (size: 0x4)
    float BSPMidFreqTransmission;                                                     // 0x0078 (size: 0x4)
    float BSPHighFreqTransmission;                                                    // 0x007C (size: 0x4)
    float BSPScattering;                                                              // 0x0080 (size: 0x4)
    EPhononMaterial LandscapeMaterialPreset;                                          // 0x0084 (size: 0x1)
    float LandscapeLowFreqAbsorption;                                                 // 0x0088 (size: 0x4)
    float LandscapeMidFreqAbsorption;                                                 // 0x008C (size: 0x4)
    float LandscapeHighFreqAbsorption;                                                // 0x0090 (size: 0x4)
    float LandscapeLowFreqTransmission;                                               // 0x0094 (size: 0x4)
    float LandscapeMidFreqTransmission;                                               // 0x0098 (size: 0x4)
    float LandscapeHighFreqTransmission;                                              // 0x009C (size: 0x4)
    float LandscapeScattering;                                                        // 0x00A0 (size: 0x4)
    int32 OcclusionSampleCount;                                                       // 0x00A4 (size: 0x4)
    EIplSimulationType ListenerReverbSimulationType;                                  // 0x00A8 (size: 0x1)
    float ListenerReverbContribution;                                                 // 0x00AC (size: 0x4)
    int32 IndirectImpulseResponseOrder;                                               // 0x00B0 (size: 0x4)
    float IndirectImpulseResponseDuration;                                            // 0x00B4 (size: 0x4)
    EIplSpatializationMethod IndirectSpatializationMethod;                            // 0x00B8 (size: 0x1)
    float IrradianceMinDistance;                                                      // 0x00BC (size: 0x4)
    uint32 MaxSources;                                                                // 0x00C0 (size: 0x4)
    EQualitySettings RealtimeQualityPreset;                                           // 0x00C4 (size: 0x1)
    int32 RealTimeCPUCoresPercentage;                                                 // 0x00C8 (size: 0x4)
    int32 RealtimeBounces;                                                            // 0x00CC (size: 0x4)
    int32 RealtimeRays;                                                               // 0x00D0 (size: 0x4)
    int32 RealtimeSecondaryRays;                                                      // 0x00D4 (size: 0x4)
    EQualitySettings BakedQualityPreset;                                              // 0x00D8 (size: 0x1)
    int32 BakingCPUCoresPercentage;                                                   // 0x00DC (size: 0x4)
    int32 BakedBounces;                                                               // 0x00E0 (size: 0x4)
    int32 BakedRays;                                                                  // 0x00E4 (size: 0x4)
    int32 BakedSecondaryRays;                                                         // 0x00E8 (size: 0x4)
    int32 MaxComputeUnits;                                                            // 0x00EC (size: 0x4)
    float FractionComputeUnitsForIRUpdate;                                            // 0x00F0 (size: 0x4)
    int32 TANIndirectImpulseResponseOrder;                                            // 0x00F4 (size: 0x4)
    float TANIndirectImpulseResponseDuration;                                         // 0x00F8 (size: 0x4)
    uint32 TANMaxSources;                                                             // 0x00FC (size: 0x4)
    int32 RadeonRaysBakingBatchSize;                                                  // 0x0100 (size: 0x4)

}; // Size: 0x108

class USubmixEffectReverbPluginPreset : public USoundEffectSubmixPreset
{
    FSubmixEffectReverbPluginSettings Settings;                                       // 0x0091 (size: 0x1)

}; // Size: 0x98

#endif
