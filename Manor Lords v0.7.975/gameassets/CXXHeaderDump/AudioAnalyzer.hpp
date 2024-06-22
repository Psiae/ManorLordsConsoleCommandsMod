#ifndef UE4SS_SDK_AudioAnalyzer_HPP
#define UE4SS_SDK_AudioAnalyzer_HPP

class UAudioAnalyzerAsset : public UObject
{
}; // Size: 0x28

class UAudioAnalyzerNRT : public UAudioAnalyzerAsset
{
    class USoundWave* sound;                                                          // 0x0028 (size: 0x8)
    float durationInSeconds;                                                          // 0x0030 (size: 0x4)

}; // Size: 0x78

class UAudioAnalyzerNRTSettings : public UAudioAnalyzerAsset
{
}; // Size: 0x28

#endif
