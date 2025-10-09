#ifndef UE4SS_SDK_MotoSynth_HPP
#define UE4SS_SDK_MotoSynth_HPP

struct FGrainTableEntry
{
    int32 SampleIndex;                                                                // 0x0000 (size: 0x4)
    float RPM;                                                                        // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FMotoSynthRuntimeSettings
{
    bool bSynthToneEnabled;                                                           // 0x0000 (size: 0x1)
    float SynthToneVolume;                                                            // 0x0004 (size: 0x4)
    float SynthToneFilterFrequency;                                                   // 0x0008 (size: 0x4)
    int32 SynthOctaveShift;                                                           // 0x000C (size: 0x4)
    bool bGranularEngineEnabled;                                                      // 0x0010 (size: 0x1)
    float GranularEngineVolume;                                                       // 0x0014 (size: 0x4)
    float GranularEnginePitchScale;                                                   // 0x0018 (size: 0x4)
    int32 NumSamplesToCrossfadeBetweenGrains;                                         // 0x001C (size: 0x4)
    int32 NumGrainTableEntriesPerGrain;                                               // 0x0020 (size: 0x4)
    int32 GrainTableRandomOffsetForConstantRPMs;                                      // 0x0024 (size: 0x4)
    int32 GrainCrossfadeSamplesForConstantRPMs;                                       // 0x0028 (size: 0x4)
    class UMotoSynthSource* AccelerationSource;                                       // 0x0030 (size: 0x8)
    class UMotoSynthSource* DecelerationSource;                                       // 0x0038 (size: 0x8)
    bool bStereoWidenerEnabled;                                                       // 0x0040 (size: 0x1)
    float StereoDelayMsec;                                                            // 0x0044 (size: 0x4)
    float StereoFeedback;                                                             // 0x0048 (size: 0x4)
    float StereoWidenerWetlevel;                                                      // 0x004C (size: 0x4)
    float StereoWidenerDryLevel;                                                      // 0x0050 (size: 0x4)
    float StereoWidenerDelayRatio;                                                    // 0x0054 (size: 0x4)
    bool bStereoWidenerFilterEnabled;                                                 // 0x0058 (size: 0x1)
    float StereoWidenerFilterFrequency;                                               // 0x005C (size: 0x4)
    float StereoWidenerFilterQ;                                                       // 0x0060 (size: 0x4)

}; // Size: 0x68

class UMotoSynthPreset : public UObject
{
    FMotoSynthRuntimeSettings Settings;                                               // 0x0028 (size: 0x68)

}; // Size: 0x90

class UMotoSynthSource : public UObject
{
    bool bConvertTo8Bit;                                                              // 0x0028 (size: 0x1)
    float DownSampleFactor;                                                           // 0x002C (size: 0x4)
    FRuntimeFloatCurve RPMCurve;                                                      // 0x0030 (size: 0x88)
    TArray<float> SourceData;                                                         // 0x00B8 (size: 0x10)
    TArray<int16> SourceDataPCM;                                                      // 0x00C8 (size: 0x10)
    int32 SourceSampleRate;                                                           // 0x00D8 (size: 0x4)
    TArray<FGrainTableEntry> GrainTable;                                              // 0x00E0 (size: 0x10)

}; // Size: 0xF8

class USynthComponentMoto : public USynthComponent
{
    class UMotoSynthPreset* MotoSynthPreset;                                          // 0x06C0 (size: 0x8)
    float RPM;                                                                        // 0x06C8 (size: 0x4)

    void SetSettings(const FMotoSynthRuntimeSettings& InSettings);
    void SetRPM(float InRPM, float InTimeSec);
    bool IsEnabled();
    void GetRPMRange(float& OutMinRPM, float& OutMaxRPM);
}; // Size: 0x780

#endif
