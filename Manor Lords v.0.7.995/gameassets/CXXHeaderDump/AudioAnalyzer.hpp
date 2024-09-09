#ifndef UE4SS_SDK_AudioAnalyzer_HPP
#define UE4SS_SDK_AudioAnalyzer_HPP

class UAudioAnalyzer : public UObject
{
    class UAudioBus* AudioBus;                                                        // 0x0028 (size: 0x8)
    class UAudioAnalyzerSubsystem* AudioAnalyzerSubsystem;                            // 0x0038 (size: 0x8)

    void StopAnalyzing(const class UObject* WorldContextObject);
    void StartAnalyzing(const class UObject* WorldContextObject, class UAudioBus* AudioBusToAnalyze);
}; // Size: 0xA0

class UAudioAnalyzerAssetBase : public UObject
{
}; // Size: 0x28

class UAudioAnalyzerNRT : public UAudioAnalyzerAssetBase
{
    class USoundWave* Sound;                                                          // 0x0028 (size: 0x8)
    float durationInSeconds;                                                          // 0x0030 (size: 0x4)

}; // Size: 0x78

class UAudioAnalyzerNRTSettings : public UAudioAnalyzerAssetBase
{
}; // Size: 0x28

class UAudioAnalyzerSettings : public UAudioAnalyzerAssetBase
{
}; // Size: 0x28

class UAudioAnalyzerSubsystem : public UEngineSubsystem
{
    TArray<class UAudioAnalyzer*> AudioAnalyzers;                                     // 0x0030 (size: 0x10)

}; // Size: 0x50

#endif
