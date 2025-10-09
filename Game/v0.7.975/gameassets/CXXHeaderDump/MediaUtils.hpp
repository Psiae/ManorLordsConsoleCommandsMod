#ifndef UE4SS_SDK_MediaUtils_HPP
#define UE4SS_SDK_MediaUtils_HPP

#include "MediaUtils_enums.hpp"

struct FMediaPlayerOptions
{
    FMediaPlayerTrackOptions Tracks;                                                  // 0x0000 (size: 0x1C)
    FTimespan SeekTime;                                                               // 0x0020 (size: 0x8)
    EMediaPlayerOptionBooleanOverride PlayOnOpen;                                     // 0x0028 (size: 0x1)
    EMediaPlayerOptionBooleanOverride Loop;                                           // 0x0029 (size: 0x1)

}; // Size: 0x30

struct FMediaPlayerTrackOptions
{
    int32 Audio;                                                                      // 0x0000 (size: 0x4)
    int32 Caption;                                                                    // 0x0004 (size: 0x4)
    int32 MetaData;                                                                   // 0x0008 (size: 0x4)
    int32 Script;                                                                     // 0x000C (size: 0x4)
    int32 Subtitle;                                                                   // 0x0010 (size: 0x4)
    int32 Text;                                                                       // 0x0014 (size: 0x4)
    int32 Video;                                                                      // 0x0018 (size: 0x4)

}; // Size: 0x1C

#endif
