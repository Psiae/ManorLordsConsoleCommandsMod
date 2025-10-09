#ifndef UE4SS_SDK_SpatialSystem_HPP
#define UE4SS_SDK_SpatialSystem_HPP

#include "SpatialSystem_enums.hpp"

struct FSpatialEntity
{
}; // Size: 0x50

struct FSpatialGrid
{
}; // Size: 0xC8

struct FSpatialGridInfo
{
    int32 Total;                                                                      // 0x0000 (size: 0x4)
    int32 Visible;                                                                    // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FSpatialSettings
{
    FVector Size;                                                                     // 0x0000 (size: 0x18)
    TEnumAsByte<ESpatialDimension> Dimension;                                         // 0x0018 (size: 0x1)
    bool bCullDistanceEnabled;                                                        // 0x0019 (size: 0x1)
    int32 CullDistance;                                                               // 0x001C (size: 0x4)
    float CullScale;                                                                  // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FSpatialTile
{
}; // Size: 0x98

class USpatialEntityComponent : public UActorComponent
{
    float Radius;                                                                     // 0x00B0 (size: 0x4)
    bool bGenerateOverlapEvents;                                                      // 0x00B4 (size: 0x1)
    bool bStatic;                                                                     // 0x00B5 (size: 0x1)
    TSubclassOf<class USpatialGridSettings> GridSettingsAsset;                        // 0x00B8 (size: 0x8)
    FSpatialEntityComponentOnOverlap OnOverlap;                                       // 0x00C0 (size: 0x10)
    void OnOverlapSignature(const TArray<class USpatialEntityComponent*>& Components);

    void RemoveEntity();
}; // Size: 0x130

class USpatialGridSettings : public UObject
{
    FSpatialSettings Settings;                                                        // 0x0028 (size: 0x28)

}; // Size: 0x50

class USpatialSystemBPLibrary : public UBlueprintFunctionLibrary
{
}; // Size: 0x28

class USpatialWorldSubsystem : public UTickableWorldSubsystem
{
    FSpatialGridInfo Info;                                                            // 0x0134 (size: 0x8)

}; // Size: 0x1C8

#endif
