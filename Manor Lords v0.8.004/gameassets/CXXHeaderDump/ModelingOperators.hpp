#ifndef UE4SS_SDK_ModelingOperators_HPP
#define UE4SS_SDK_ModelingOperators_HPP

#include "ModelingOperators_enums.hpp"

class URecomputeUVsOpFactory : public UObject
{
    class URecomputeUVsToolProperties* Settings;                                      // 0x0030 (size: 0x8)

}; // Size: 0x140

class URecomputeUVsToolProperties : public UInteractiveToolPropertySet
{
    bool bEnablePolygroupSupport;                                                     // 0x00A8 (size: 0x1)
    ERecomputeUVsPropertiesIslandMode IslandGeneration;                               // 0x00AC (size: 0x4)
    ERecomputeUVsPropertiesUnwrapType UnwrapType;                                     // 0x00B0 (size: 0x4)
    ERecomputeUVsToolOrientationMode AutoRotation;                                    // 0x00B4 (size: 0x4)
    bool bPreserveIrregularity;                                                       // 0x00B8 (size: 0x1)
    int32 SmoothingSteps;                                                             // 0x00BC (size: 0x4)
    float SmoothingAlpha;                                                             // 0x00C0 (size: 0x4)
    float MergingDistortionThreshold;                                                 // 0x00C4 (size: 0x4)
    float MergingAngleThreshold;                                                      // 0x00C8 (size: 0x4)
    ERecomputeUVsPropertiesLayoutType LayoutType;                                     // 0x00CC (size: 0x4)
    int32 TextureResolution;                                                          // 0x00D0 (size: 0x4)
    float NormalizeScale;                                                             // 0x00D4 (size: 0x4)
    bool bEnableUDIMLayout;                                                           // 0x00D8 (size: 0x1)
    bool bUDIMCVAREnabled;                                                            // 0x00D9 (size: 0x1)

}; // Size: 0xE0

class UUVLayoutOperatorFactory : public UObject
{
    class UUVLayoutProperties* Settings;                                              // 0x0030 (size: 0x8)

}; // Size: 0x1A0

class UUVLayoutProperties : public UInteractiveToolPropertySet
{
    EUVLayoutType LayoutType;                                                         // 0x00A8 (size: 0x4)
    int32 TextureResolution;                                                          // 0x00AC (size: 0x4)
    float Scale;                                                                      // 0x00B0 (size: 0x4)
    FVector2D Translation;                                                            // 0x00B8 (size: 0x10)
    bool bAllowFlips;                                                                 // 0x00C8 (size: 0x1)
    bool bEnableUDIMLayout;                                                           // 0x00C9 (size: 0x1)
    bool bUDIMCVAREnabled;                                                            // 0x00CA (size: 0x1)

}; // Size: 0xD0

#endif
