#ifndef UE4SS_SDK_ResonanceAudio_HPP
#define UE4SS_SDK_ResonanceAudio_HPP

#include "ResonanceAudio_enums.hpp"

struct FResonanceAudioReverbPluginSettings
{
    bool bEnableRoomEffects;                                                          // 0x0000 (size: 0x1)
    bool bGetTransformFromAudioVolume;                                                // 0x0001 (size: 0x1)
    FVector RoomPosition;                                                             // 0x0008 (size: 0x18)
    FQuat RoomRotation;                                                               // 0x0020 (size: 0x20)
    FVector RoomDimensions;                                                           // 0x0040 (size: 0x18)
    ERaMaterialName LeftWallMaterial;                                                 // 0x0058 (size: 0x1)
    ERaMaterialName RightWallMaterial;                                                // 0x0059 (size: 0x1)
    ERaMaterialName FloorMaterial;                                                    // 0x005A (size: 0x1)
    ERaMaterialName CeilingMaterial;                                                  // 0x005B (size: 0x1)
    ERaMaterialName FrontWallMaterial;                                                // 0x005C (size: 0x1)
    ERaMaterialName BackWallMaterial;                                                 // 0x005D (size: 0x1)
    float ReflectionScalar;                                                           // 0x0060 (size: 0x4)
    float ReverbGain;                                                                 // 0x0064 (size: 0x4)
    float ReverbTimeModifier;                                                         // 0x0068 (size: 0x4)
    float ReverbBrightness;                                                           // 0x006C (size: 0x4)

}; // Size: 0x70

class AResonanceAudioDirectivityVisualizer : public AActor
{
    class UMaterial* Material;                                                        // 0x0318 (size: 0x8)
    class UResonanceAudioSpatializationSourceSettings* Settings;                      // 0x0320 (size: 0x8)

}; // Size: 0x328

class UResonanceAudioBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetGlobalReverbPreset(class UResonanceAudioReverbPluginPreset* InPreset);
    class UResonanceAudioReverbPluginPreset* GetGlobalReverbPreset();
}; // Size: 0x28

class UResonanceAudioReverbPluginPreset : public USoundEffectSubmixPreset
{
    FResonanceAudioReverbPluginSettings Settings;                                     // 0x0100 (size: 0x70)

    void SetRoomRotation(const FQuat& InRotation);
    void SetRoomPosition(const FVector& InPosition);
    void SetRoomMaterials(const TArray<ERaMaterialName>& InMaterials);
    void SetRoomDimensions(const FVector& InDimensions);
    void SetReverbTimeModifier(float InReverbTimeModifier);
    void SetReverbGain(float InReverbGain);
    void SetReverbBrightness(float InReverbBrightness);
    void SetReflectionScalar(float InReflectionScalar);
    void SetEnableRoomEffects(bool bInEnableRoomEffects);
}; // Size: 0x170

class UResonanceAudioSettings : public UObject
{
    FSoftObjectPath OutputSubmix;                                                     // 0x0028 (size: 0x20)
    ERaQualityMode QualityMode;                                                       // 0x0048 (size: 0x1)
    FSoftObjectPath GlobalReverbPreset;                                               // 0x0050 (size: 0x20)
    FSoftObjectPath GlobalSourcePreset;                                               // 0x0070 (size: 0x20)

}; // Size: 0x90

class UResonanceAudioSoundfieldSettings : public USoundfieldEncodingSettingsBase
{
    EResonanceRenderMode RenderMode;                                                  // 0x0028 (size: 0x1)

}; // Size: 0x30

class UResonanceAudioSpatializationSourceSettings : public USpatializationPluginSourceSettingsBase
{
    ERaSpatializationMethod SpatializationMethod;                                     // 0x0028 (size: 0x1)
    float Pattern;                                                                    // 0x002C (size: 0x4)
    float Sharpness;                                                                  // 0x0030 (size: 0x4)
    bool bToggleVisualization;                                                        // 0x0034 (size: 0x1)
    float scale;                                                                      // 0x0038 (size: 0x4)
    float spread;                                                                     // 0x003C (size: 0x4)
    ERaDistanceRolloffModel Rolloff;                                                  // 0x0040 (size: 0x1)
    float MinDistance;                                                                // 0x0044 (size: 0x4)
    float MaxDistance;                                                                // 0x0048 (size: 0x4)

    void SetSoundSourceSpread(float InSpread);
    void SetSoundSourceDirectivity(float InPattern, float InSharpness);
}; // Size: 0x50

#endif
