#ifndef UE4SS_SDK_UniversalObjectLocator_HPP
#define UE4SS_SDK_UniversalObjectLocator_HPP

#include "UniversalObjectLocator_enums.hpp"

struct FDirectPathObjectLocator
{
    FSoftObjectPath Path;                                                             // 0x0000 (size: 0x20)

}; // Size: 0x20

struct FLocatorSpawnedCacheResolveParameter
{
}; // Size: 0x8

struct FSubObjectLocator
{
    FString PathWithinContext;                                                        // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FUniversalObjectLocator
{
    TArray<FUniversalObjectLocatorFragment> Fragments;                                // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FUniversalObjectLocatorEmptyPayload
{
}; // Size: 0x1

struct FUniversalObjectLocatorFragment
{
}; // Size: 0x20

#endif
