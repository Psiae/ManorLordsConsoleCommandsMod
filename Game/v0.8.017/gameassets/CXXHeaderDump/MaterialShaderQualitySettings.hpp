#ifndef UE4SS_SDK_MaterialShaderQualitySettings_HPP
#define UE4SS_SDK_MaterialShaderQualitySettings_HPP

#include "MaterialShaderQualitySettings_enums.hpp"

struct FMaterialQualityOverrides
{
    bool bDiscardQualityDuringCook;                                                   // 0x0000 (size: 0x1)
    bool bEnableOverride;                                                             // 0x0001 (size: 0x1)
    bool bForceFullyRough;                                                            // 0x0002 (size: 0x1)
    bool bForceNonMetal;                                                              // 0x0003 (size: 0x1)
    bool bForceDisableLMDirectionality;                                               // 0x0004 (size: 0x1)
    bool bForceDisablePreintegratedGF;                                                // 0x0005 (size: 0x1)
    bool bDisableMaterialNormalCalculation;                                           // 0x0006 (size: 0x1)
    EMobileShadowQuality MobileShadowQuality;                                         // 0x0007 (size: 0x1)

}; // Size: 0x8

class UMaterialShaderQualitySettings : public UObject
{
    TMap<class FName, class UShaderPlatformQualitySettings*> ForwardSettingMap;       // 0x0028 (size: 0x50)

}; // Size: 0x78

class UShaderPlatformQualitySettings : public UObject
{
    FMaterialQualityOverrides QualityOverrides;                                       // 0x0028 (size: 0x20)

}; // Size: 0x58

#endif
