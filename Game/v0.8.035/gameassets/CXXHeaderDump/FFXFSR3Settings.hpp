#ifndef UE4SS_SDK_FFXFSR3Settings_HPP
#define UE4SS_SDK_FFXFSR3Settings_HPP

#include "FFXFSR3Settings_enums.hpp"

class UFFXFSR3Settings : public UDeveloperSettings
{
    bool bEnabled;                                                                    // 0x0038 (size: 0x1)
    bool bAutoExposure;                                                               // 0x0039 (size: 0x1)
    bool bEnabledInEditorViewport;                                                    // 0x003A (size: 0x1)
    bool bUseSSRExperimentalDenoiser;                                                 // 0x003B (size: 0x1)
    bool bRHIBackend;                                                                 // 0x003C (size: 0x1)
    bool bD3D12Backend;                                                               // 0x003D (size: 0x1)
    bool bFrameGenEnabled;                                                            // 0x003E (size: 0x1)
    bool bCaptureDebugUI;                                                             // 0x003F (size: 0x1)
    bool bUpdateGlobalFrameTime;                                                      // 0x0040 (size: 0x1)
    bool bModifySlateDeltaTime;                                                       // 0x0041 (size: 0x1)
    EFFXFSR3FrameGenUIMode UIMode;                                                    // 0x0044 (size: 0x4)
    bool bUseDistortionTexture;                                                       // 0x0048 (size: 0x1)
    bool bD3D12AsyncInterpolation;                                                    // 0x0049 (size: 0x1)
    bool bD3D12AsyncPresent;                                                          // 0x004A (size: 0x1)
    EFFXFSR3PaceRHIFrameMode PaceMode;                                                // 0x004C (size: 0x4)
    EFFXFSR3QualityMode QualityMode;                                                  // 0x0050 (size: 0x4)
    EFFXFSR3HistoryFormat HistoryFormat;                                              // 0x0054 (size: 0x4)
    EFFXFSR3DeDitherMode DeDither;                                                    // 0x0058 (size: 0x4)
    float Sharpness;                                                                  // 0x005C (size: 0x4)
    bool bAdjustMipBias;                                                              // 0x0060 (size: 0x1)
    bool bForceVertexDeformationOutputsVelocity;                                      // 0x0061 (size: 0x1)
    EFFXFSR3LandscapeHISMMode ForceLandscapeHISMMobility;                             // 0x0064 (size: 0x4)
    float VelocityFactor;                                                             // 0x0068 (size: 0x4)
    bool bReactiveMask;                                                               // 0x006C (size: 0x1)
    float ReflectionScale;                                                            // 0x0070 (size: 0x4)
    float ReflectionLuminanceBias;                                                    // 0x0074 (size: 0x4)
    float RoughnessScale;                                                             // 0x0078 (size: 0x4)
    float RoughnessBias;                                                              // 0x007C (size: 0x4)
    float RoughnessMaxDistance;                                                       // 0x0080 (size: 0x4)
    bool bReactiveMaskRoughnessForceMaxDistance;                                      // 0x0084 (size: 0x1)
    float TranslucencyBias;                                                           // 0x0088 (size: 0x4)
    float TranslucencyLuminanceBias;                                                  // 0x008C (size: 0x4)
    float TranslucencyMaxDistance;                                                    // 0x0090 (size: 0x4)
    TEnumAsByte<EMaterialShadingModel> ReactiveShadingModelID;                        // 0x0094 (size: 0x1)
    float ForceReactiveMaterialValue;                                                 // 0x0098 (size: 0x4)
    float ReactiveHistoryTranslucencyBias;                                            // 0x009C (size: 0x4)
    float ReactiveHistoryTranslucencyLumaBias;                                        // 0x00A0 (size: 0x4)
    float PreDOFTranslucencyScale;                                                    // 0x00A4 (size: 0x4)
    bool bPreDOFTranslucencyMax;                                                      // 0x00A8 (size: 0x1)
    float ReactiveMaskDeferredDecalScale;                                             // 0x00AC (size: 0x4)
    float ReactiveHistoryDeferredDecalScale;                                          // 0x00B0 (size: 0x4)
    float ReactiveMaskTAAResponsiveValue;                                             // 0x00B4 (size: 0x4)
    float ReactiveHistoryTAAResponsiveValue;                                          // 0x00B8 (size: 0x4)
    float ReactiveMaskCustomStencilScale;                                             // 0x00BC (size: 0x4)
    float ReactiveHistoryCustomStencilScale;                                          // 0x00C0 (size: 0x4)
    int32 CustomStencilMask;                                                          // 0x00C4 (size: 0x4)
    int32 CustomStencilShift;                                                         // 0x00C8 (size: 0x4)

}; // Size: 0xD0

#endif
