#ifndef UE4SS_SDK_FSR2TemporalUpscaling_HPP
#define UE4SS_SDK_FSR2TemporalUpscaling_HPP

#include "FSR2TemporalUpscaling_enums.hpp"

class UFSR2Settings : public UDeveloperSettings
{
    bool bEnabled;                                                                    // 0x0038 (size: 0x1)
    bool AutoExposure;                                                                // 0x0039 (size: 0x1)
    bool EnabledInEditorViewport;                                                     // 0x003A (size: 0x1)
    bool UseSSRExperimentalDenoiser;                                                  // 0x003B (size: 0x1)
    bool UseNativeDX12;                                                               // 0x003C (size: 0x1)
    bool UseNativeVulkan;                                                             // 0x003D (size: 0x1)
    EFSR2QualityMode QualityMode;                                                     // 0x0040 (size: 0x4)
    EFSR2HistoryFormat HistoryFormat;                                                 // 0x0044 (size: 0x4)
    EFSR2DeDitherMode DeDither;                                                       // 0x0048 (size: 0x4)
    float Sharpness;                                                                  // 0x004C (size: 0x4)
    bool AdjustMipBias;                                                               // 0x0050 (size: 0x1)
    bool ReactiveMask;                                                                // 0x0051 (size: 0x1)
    bool ForceVertexDeformationOutputsVelocity;                                       // 0x0052 (size: 0x1)
    EFSR2LandscapeHISMMode ForceLandscapeHISMMobility;                                // 0x0054 (size: 0x4)
    float ReflectionScale;                                                            // 0x0058 (size: 0x4)
    float ReflectionLuminanceBias;                                                    // 0x005C (size: 0x4)
    float RoughnessScale;                                                             // 0x0060 (size: 0x4)
    float RoughnessBias;                                                              // 0x0064 (size: 0x4)
    float RoughnessMaxDistance;                                                       // 0x0068 (size: 0x4)
    bool ReactiveMaskRoughnessForceMaxDistance;                                       // 0x006C (size: 0x1)
    float TranslucencyBias;                                                           // 0x0070 (size: 0x4)
    float TranslucencyLuminanceBias;                                                  // 0x0074 (size: 0x4)
    float TranslucencyMaxDistance;                                                    // 0x0078 (size: 0x4)
    float PreDOFTranslucencyScale;                                                    // 0x007C (size: 0x4)
    bool PreDOFTranslucencyMax;                                                       // 0x0080 (size: 0x1)
    TEnumAsByte<EMaterialShadingModel> ReactiveShadingModelID;                        // 0x0081 (size: 0x1)
    float ForceReactiveMaterialValue;                                                 // 0x0084 (size: 0x4)
    float ReactiveHistoryTranslucencyBias;                                            // 0x0088 (size: 0x4)
    float ReactiveHistoryTranslucencyLumaBias;                                        // 0x008C (size: 0x4)

}; // Size: 0x90

#endif
