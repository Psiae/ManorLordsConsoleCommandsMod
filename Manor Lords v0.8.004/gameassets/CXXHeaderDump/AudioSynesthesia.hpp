#ifndef UE4SS_SDK_AudioSynesthesia_HPP
#define UE4SS_SDK_AudioSynesthesia_HPP

#include "AudioSynesthesia_enums.hpp"

struct FConstantQResults
{
    float TimeSeconds;                                                                // 0x0000 (size: 0x4)
    TArray<float> SpectrumValues;                                                     // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FLoudnessResults
{
    float Loudness;                                                                   // 0x0000 (size: 0x4)
    float NormalizedLoudness;                                                         // 0x0004 (size: 0x4)
    float PerceptualEnergy;                                                           // 0x0008 (size: 0x4)
    float TimeSeconds;                                                                // 0x000C (size: 0x4)

}; // Size: 0x10

struct FMeterResults
{
    float TimeSeconds;                                                                // 0x0000 (size: 0x4)
    float MeterValue;                                                                 // 0x0004 (size: 0x4)
    float PeakValue;                                                                  // 0x0008 (size: 0x4)
    int32 NumSamplesClipping;                                                         // 0x000C (size: 0x4)
    float ClippingValue;                                                              // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FSynesthesiaSpectrumResults
{
    float TimeSeconds;                                                                // 0x0000 (size: 0x4)
    TArray<float> SpectrumValues;                                                     // 0x0008 (size: 0x10)

}; // Size: 0x18

class UAudioSynesthesiaNRT : public UAudioAnalyzerNRT
{
}; // Size: 0x78

class UAudioSynesthesiaNRTSettings : public UAudioAnalyzerNRTSettings
{
}; // Size: 0x28

class UAudioSynesthesiaSettings : public UAudioAnalyzerSettings
{
}; // Size: 0x28

class UConstantQAnalyzer : public UAudioAnalyzer
{
    class UConstantQSettings* Settings;                                               // 0x00A0 (size: 0x8)
    FConstantQAnalyzerOnConstantQResults OnConstantQResults;                          // 0x00A8 (size: 0x10)
    void OnConstantQResults(int32 ChannelIndex, const TArray<FConstantQResults>& ConstantQResults);
    FConstantQAnalyzerOnLatestConstantQResults OnLatestConstantQResults;              // 0x00D0 (size: 0x10)
    void OnLatestConstantQResults(int32 ChannelIndex, const FConstantQResults& LatestConstantQResults);

    int32 GetNumCenterFrequencies();
    void GetCenterFrequencies(TArray<float>& OutCenterFrequencies);
}; // Size: 0xF8

class UConstantQNRT : public UAudioSynesthesiaNRT
{
    class UConstantQNRTSettings* Settings;                                            // 0x0078 (size: 0x8)

    void GetNormalizedChannelConstantQAtTime(const float InSeconds, const int32 InChannel, TArray<float>& OutConstantQ);
    void GetChannelConstantQAtTime(const float InSeconds, const int32 InChannel, TArray<float>& OutConstantQ);
}; // Size: 0x80

class UConstantQNRTSettings : public UAudioSynesthesiaNRTSettings
{
    float StartingFrequency;                                                          // 0x0028 (size: 0x4)
    int32 NumBands;                                                                   // 0x002C (size: 0x4)
    float NumBandsPerOctave;                                                          // 0x0030 (size: 0x4)
    float AnalysisPeriod;                                                             // 0x0034 (size: 0x4)
    bool bDownmixToMono;                                                              // 0x0038 (size: 0x1)
    EConstantQFFTSizeEnum FFTSize;                                                    // 0x0039 (size: 0x1)
    EFFTWindowType WindowType;                                                        // 0x003A (size: 0x1)
    EAudioSpectrumType SpectrumType;                                                  // 0x003B (size: 0x1)
    float BandWidthStretch;                                                           // 0x003C (size: 0x4)
    EConstantQNormalizationEnum CQTNormalization;                                     // 0x0040 (size: 0x1)
    float NoiseFloorDb;                                                               // 0x0044 (size: 0x4)

}; // Size: 0x48

class UConstantQSettings : public UAudioSynesthesiaSettings
{
    float StartingFrequencyHz;                                                        // 0x0028 (size: 0x4)
    int32 NumBands;                                                                   // 0x002C (size: 0x4)
    float NumBandsPerOctave;                                                          // 0x0030 (size: 0x4)
    float AnalysisPeriodInSeconds;                                                    // 0x0034 (size: 0x4)
    bool bDownmixToMono;                                                              // 0x0038 (size: 0x1)
    EConstantQFFTSizeEnum FFTSize;                                                    // 0x0039 (size: 0x1)
    EFFTWindowType WindowType;                                                        // 0x003A (size: 0x1)
    EAudioSpectrumType SpectrumType;                                                  // 0x003B (size: 0x1)
    float BandWidthStretch;                                                           // 0x003C (size: 0x4)
    EConstantQNormalizationEnum CQTNormalization;                                     // 0x0040 (size: 0x1)
    float NoiseFloorDb;                                                               // 0x0044 (size: 0x4)

}; // Size: 0x48

class ULoudnessAnalyzer : public UAudioAnalyzer
{
    class ULoudnessSettings* Settings;                                                // 0x00A0 (size: 0x8)
    FLoudnessAnalyzerOnOverallLoudnessResults OnOverallLoudnessResults;               // 0x00A8 (size: 0x10)
    void OnOverallLoudnessResults(const TArray<FLoudnessResults>& OverallLoudnessResults);
    FLoudnessAnalyzerOnPerChannelLoudnessResults OnPerChannelLoudnessResults;         // 0x00B8 (size: 0x10)
    void OnPerChannelLoudnessResults(int32 ChannelIndex, const TArray<FLoudnessResults>& LoudnessResults);
    FLoudnessAnalyzerOnLatestOverallLoudnessResults OnLatestOverallLoudnessResults;   // 0x00C8 (size: 0x10)
    void OnLatestOverallLoudnessResults(const FLoudnessResults& LatestOverallLoudnessResults);
    FLoudnessAnalyzerOnLatestPerChannelLoudnessResults OnLatestPerChannelLoudnessResults; // 0x00D8 (size: 0x10)
    void OnLatestPerChannelLoudnessResults(int32 ChannelIndex, const FLoudnessResults& LatestLoudnessResults);

}; // Size: 0xE8

class ULoudnessNRT : public UAudioSynesthesiaNRT
{
    class ULoudnessNRTSettings* Settings;                                             // 0x0078 (size: 0x8)

    void GetNormalizedLoudnessAtTime(const float InSeconds, float& OutLoudness);
    void GetNormalizedChannelLoudnessAtTime(const float InSeconds, const int32 InChannel, float& OutLoudness);
    void GetLoudnessAtTime(const float InSeconds, float& OutLoudness);
    void GetChannelLoudnessAtTime(const float InSeconds, const int32 InChannel, float& OutLoudness);
}; // Size: 0x80

class ULoudnessNRTSettings : public UAudioSynesthesiaNRTSettings
{
    float AnalysisPeriod;                                                             // 0x0028 (size: 0x4)
    float MinimumFrequency;                                                           // 0x002C (size: 0x4)
    float MaximumFrequency;                                                           // 0x0030 (size: 0x4)
    ELoudnessNRTCurveTypeEnum CurveType;                                              // 0x0034 (size: 0x1)
    float NoiseFloorDb;                                                               // 0x0038 (size: 0x4)

}; // Size: 0x40

class ULoudnessSettings : public UAudioSynesthesiaSettings
{
    float AnalysisPeriod;                                                             // 0x0028 (size: 0x4)
    float MinimumFrequency;                                                           // 0x002C (size: 0x4)
    float MaximumFrequency;                                                           // 0x0030 (size: 0x4)
    ELoudnessCurveTypeEnum CurveType;                                                 // 0x0034 (size: 0x1)
    float NoiseFloorDb;                                                               // 0x0038 (size: 0x4)
    float ExpectedMaxLoudness;                                                        // 0x003C (size: 0x4)

}; // Size: 0x40

class UMeterAnalyzer : public UAudioAnalyzer
{
    class UMeterSettings* Settings;                                                   // 0x00A0 (size: 0x8)
    FMeterAnalyzerOnOverallMeterResults OnOverallMeterResults;                        // 0x00A8 (size: 0x10)
    void OnOverallMeterResults(const TArray<FMeterResults>& MeterResults);
    FMeterAnalyzerOnPerChannelMeterResults OnPerChannelMeterResults;                  // 0x00D0 (size: 0x10)
    void OnPerChannelMeterResults(int32 ChannelIndex, const TArray<FMeterResults>& MeterResults);
    FMeterAnalyzerOnLatestOverallMeterResults OnLatestOverallMeterResults;            // 0x00F8 (size: 0x10)
    void OnLatestOverallMeterResults(const FMeterResults& LatestOverallMeterResults);
    FMeterAnalyzerOnLatestPerChannelMeterResults OnLatestPerChannelMeterResults;      // 0x0120 (size: 0x10)
    void OnLatestPerChannelMeterResults(int32 ChannelIndex, const FMeterResults& LatestMeterResults);

}; // Size: 0x148

class UMeterSettings : public UAudioSynesthesiaSettings
{
    float AnalysisPeriod;                                                             // 0x0028 (size: 0x4)
    EMeterPeakType PeakMode;                                                          // 0x002C (size: 0x1)
    int32 MeterAttackTime;                                                            // 0x0030 (size: 0x4)
    int32 MeterReleaseTime;                                                           // 0x0034 (size: 0x4)
    int32 PeakHoldTime;                                                               // 0x0038 (size: 0x4)
    float ClippingThreshold;                                                          // 0x003C (size: 0x4)

}; // Size: 0x40

class UOnsetNRT : public UAudioSynesthesiaNRT
{
    class UOnsetNRTSettings* Settings;                                                // 0x0078 (size: 0x8)

    void GetNormalizedChannelOnsetsBetweenTimes(const float InStartSeconds, const float InEndSeconds, const int32 InChannel, TArray<float>& OutOnsetTimestamps, TArray<float>& OutOnsetStrengths);
    void GetChannelOnsetsBetweenTimes(const float InStartSeconds, const float InEndSeconds, const int32 InChannel, TArray<float>& OutOnsetTimestamps, TArray<float>& OutOnsetStrengths);
}; // Size: 0x80

class UOnsetNRTSettings : public UAudioSynesthesiaNRTSettings
{
    bool bDownmixToMono;                                                              // 0x0028 (size: 0x1)
    float GranularityInSeconds;                                                       // 0x002C (size: 0x4)
    float Sensitivity;                                                                // 0x0030 (size: 0x4)
    float MinimumFrequency;                                                           // 0x0034 (size: 0x4)
    float MaximumFrequency;                                                           // 0x0038 (size: 0x4)

}; // Size: 0x40

class USynesthesiaSpectrumAnalysisSettings : public UAudioSynesthesiaSettings
{
    float AnalysisPeriod;                                                             // 0x0028 (size: 0x4)
    EFFTSize FFTSize;                                                                 // 0x002C (size: 0x1)
    EAudioSpectrumType SpectrumType;                                                  // 0x002D (size: 0x1)
    EFFTWindowType WindowType;                                                        // 0x002E (size: 0x1)
    bool bDownmixToMono;                                                              // 0x002F (size: 0x1)

}; // Size: 0x30

class USynesthesiaSpectrumAnalyzer : public UAudioAnalyzer
{
    class USynesthesiaSpectrumAnalysisSettings* Settings;                             // 0x00A0 (size: 0x8)
    FSynesthesiaSpectrumAnalyzerOnSpectrumResults OnSpectrumResults;                  // 0x00A8 (size: 0x10)
    void OnSpectrumResults(int32 ChannelIndex, const TArray<FSynesthesiaSpectrumResults>& SpectrumResults);
    FSynesthesiaSpectrumAnalyzerOnLatestSpectrumResults OnLatestSpectrumResults;      // 0x00D0 (size: 0x10)
    void OnLatestSpectrumResults(int32 ChannelIndex, const FSynesthesiaSpectrumResults& LatestSpectrumResults);

    int32 GetNumCenterFrequencies();
    void GetCenterFrequencies(const float InSampleRate, TArray<float>& OutCenterFrequencies);
}; // Size: 0xF8

#endif
