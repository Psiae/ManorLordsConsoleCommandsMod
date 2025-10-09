#ifndef UE4SS_SDK_CoreOnline_HPP
#define UE4SS_SDK_CoreOnline_HPP

#include "CoreOnline_enums.hpp"

struct FJoinabilitySettings
{
    FName SessionName;                                                                // 0x0000 (size: 0x8)
    bool bPublicSearchable;                                                           // 0x0008 (size: 0x1)
    bool bAllowInvites;                                                               // 0x0009 (size: 0x1)
    bool bJoinViaPresence;                                                            // 0x000A (size: 0x1)
    bool bJoinViaPresenceFriendsOnly;                                                 // 0x000B (size: 0x1)
    int32 MaxPlayers;                                                                 // 0x000C (size: 0x4)
    int32 MaxPartySize;                                                               // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FUniqueNetIdWrapper
{
}; // Size: 0x1

#endif
