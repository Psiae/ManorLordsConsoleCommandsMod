#ifndef UE4SS_SDK_AudioSynesthesia_HPP
#define UE4SS_SDK_AudioSynesthesia_HPP

#include "AudioSynesthesia_enums.hpp"

class UAudioSynesthesiaNRT : public UAudioAnalyzerNRT
{
}; // Size: 0x78

class UAudioSynesthesiaNRTSettings : public UAudioAnalyzerNRTSettings
{
}; // Size: 0x28

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

#endif
