#ifndef UE4SS_SDK_Renderer_HPP
#define UE4SS_SDK_Renderer_HPP

struct FLightPropagationVolumeSettings
{
    uint8 bOverride_LPVIntensity;                                                     // 0x0000 (size: 0x1)
    uint8 bOverride_LPVDirectionalOcclusionIntensity;                                 // 0x0000 (size: 0x1)
    uint8 bOverride_LPVDirectionalOcclusionRadius;                                    // 0x0000 (size: 0x1)
    uint8 bOverride_LPVDiffuseOcclusionExponent;                                      // 0x0000 (size: 0x1)
    uint8 bOverride_LPVSpecularOcclusionExponent;                                     // 0x0000 (size: 0x1)
    uint8 bOverride_LPVDiffuseOcclusionIntensity;                                     // 0x0000 (size: 0x1)
    uint8 bOverride_LPVSpecularOcclusionIntensity;                                    // 0x0000 (size: 0x1)
    uint8 bOverride_LPVSize;                                                          // 0x0000 (size: 0x1)
    uint8 bOverride_LPVSecondaryOcclusionIntensity;                                   // 0x0001 (size: 0x1)
    uint8 bOverride_LPVSecondaryBounceIntensity;                                      // 0x0001 (size: 0x1)
    uint8 bOverride_LPVGeometryVolumeBias;                                            // 0x0001 (size: 0x1)
    uint8 bOverride_LPVVplInjectionBias;                                              // 0x0001 (size: 0x1)
    uint8 bOverride_LPVEmissiveInjectionIntensity;                                    // 0x0001 (size: 0x1)
    float LPVIntensity;                                                               // 0x0004 (size: 0x4)
    float LPVVplInjectionBias;                                                        // 0x0008 (size: 0x4)
    float LPVSize;                                                                    // 0x000C (size: 0x4)
    float LPVSecondaryOcclusionIntensity;                                             // 0x0010 (size: 0x4)
    float LPVSecondaryBounceIntensity;                                                // 0x0014 (size: 0x4)
    float LPVGeometryVolumeBias;                                                      // 0x0018 (size: 0x4)
    float LPVEmissiveInjectionIntensity;                                              // 0x001C (size: 0x4)
    float LPVDirectionalOcclusionIntensity;                                           // 0x0020 (size: 0x4)
    float LPVDirectionalOcclusionRadius;                                              // 0x0024 (size: 0x4)
    float LPVDiffuseOcclusionExponent;                                                // 0x0028 (size: 0x4)
    float LPVSpecularOcclusionExponent;                                               // 0x002C (size: 0x4)
    float LPVDiffuseOcclusionIntensity;                                               // 0x0030 (size: 0x4)
    float LPVSpecularOcclusionIntensity;                                              // 0x0034 (size: 0x4)
    float LPVFadeRange;                                                               // 0x0038 (size: 0x4)
    float LPVDirectionalOcclusionFadeRange;                                           // 0x003C (size: 0x4)

}; // Size: 0x40

#endif
