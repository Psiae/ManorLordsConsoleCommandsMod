#ifndef UE4SS_SDK_AudioPlatformConfiguration_HPP
#define UE4SS_SDK_AudioPlatformConfiguration_HPP

#include "AudioPlatformConfiguration_enums.hpp"

struct FPlatformRuntimeAudioCompressionOverrides
{
    bool bOverrideCompressionTimes;                                                   // 0x0000 (size: 0x1)
    float DurationThreshold;                                                          // 0x0004 (size: 0x4)
    int32 MaxNumRandomBranches;                                                       // 0x0008 (size: 0x4)
    int32 SoundCueQualityIndex;                                                       // 0x000C (size: 0x4)

}; // Size: 0x10

#endif
