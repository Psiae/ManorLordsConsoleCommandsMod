#ifndef UE4SS_SDK_Landmass_HPP
#define UE4SS_SDK_Landmass_HPP

#include "Landmass_enums.hpp"

struct FBrushEffectBlurring
{
    bool bBlurShape;                                                                  // 0x0000 (size: 0x1)
    int32 Radius;                                                                     // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FBrushEffectCurlNoise
{
    float Curl1Amount;                                                                // 0x0000 (size: 0x4)
    float Curl2Amount;                                                                // 0x0004 (size: 0x4)
    float Curl1Tiling;                                                                // 0x0008 (size: 0x4)
    float Curl2Tiling;                                                                // 0x000C (size: 0x4)

}; // Size: 0x10

struct FBrushEffectCurves
{
    bool bUseCurveChannel;                                                            // 0x0000 (size: 0x1)
    class UCurveFloat* ElevationCurveAsset;                                           // 0x0008 (size: 0x8)
    float ChannelEdgeOffset;                                                          // 0x0010 (size: 0x4)
    float ChannelDepth;                                                               // 0x0014 (size: 0x4)
    float CurveRampWidth;                                                             // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FBrushEffectDisplacement
{
    float DisplacementHeight;                                                         // 0x0000 (size: 0x4)
    float DisplacementTiling;                                                         // 0x0004 (size: 0x4)
    class UTexture2D* Texture;                                                        // 0x0008 (size: 0x8)
    float Midpoint;                                                                   // 0x0010 (size: 0x4)
    FLinearColor Channel;                                                             // 0x0014 (size: 0x10)
    float WeightmapInfluence;                                                         // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FBrushEffectSmoothBlending
{
    float InnerSmoothDistance;                                                        // 0x0000 (size: 0x4)
    float OuterSmoothDistance;                                                        // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FBrushEffectTerracing
{
    float TerraceAlpha;                                                               // 0x0000 (size: 0x4)
    float TerraceSpacing;                                                             // 0x0004 (size: 0x4)
    float TerraceSmoothness;                                                          // 0x0008 (size: 0x4)
    float MaskLength;                                                                 // 0x000C (size: 0x4)
    float MaskStartOffset;                                                            // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FLandmassBrushEffectsList
{
    FBrushEffectBlurring Blurring;                                                    // 0x0000 (size: 0x8)
    FBrushEffectCurlNoise CurlNoise;                                                  // 0x0008 (size: 0x10)
    FBrushEffectDisplacement Displacement;                                            // 0x0018 (size: 0x28)
    FBrushEffectSmoothBlending SmoothBlending;                                        // 0x0040 (size: 0x8)
    FBrushEffectTerracing Terracing;                                                  // 0x0048 (size: 0x14)

}; // Size: 0x60

struct FLandmassFalloffSettings
{
    EBrushFalloffMode FalloffMode;                                                    // 0x0000 (size: 0x1)
    float FalloffAngle;                                                               // 0x0004 (size: 0x4)
    float FalloffWidth;                                                               // 0x0008 (size: 0x4)
    float EdgeOffset;                                                                 // 0x000C (size: 0x4)
    float ZOffset;                                                                    // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FLandmassTerrainCarvingSettings
{
    EBrushBlendType BlendMode;                                                        // 0x0000 (size: 0x1)
    bool bInvertShape;                                                                // 0x0001 (size: 0x1)
    FLandmassFalloffSettings FalloffSettings;                                         // 0x0004 (size: 0x14)
    FLandmassBrushEffectsList Effects;                                                // 0x0018 (size: 0x60)
    int32 Priority;                                                                   // 0x0078 (size: 0x4)

}; // Size: 0x80

#endif
