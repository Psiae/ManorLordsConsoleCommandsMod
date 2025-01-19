#ifndef UE4SS_SDK_DLSS_HPP
#define UE4SS_SDK_DLSS_HPP

#include "DLSS_enums.hpp"

class UDLSSOverrideSettings : public UObject
{
    EDLSSSettingOverride EnableDLSSInEditorViewportsOverride;                         // 0x0028 (size: 0x1)
    EDLSSSettingOverride EnableDLSSInPlayInEditorViewportsOverride;                   // 0x0029 (size: 0x1)
    bool bShowDLSSIncompatiblePluginsToolsWarnings;                                   // 0x002A (size: 0x1)
    EDLSSSettingOverride ShowDLSSSDebugOnScreenMessages;                              // 0x002B (size: 0x1)

}; // Size: 0x30

class UDLSSSettings : public UObject
{
    bool bEnableDLSSD3D12;                                                            // 0x0028 (size: 0x1)
    bool bEnableDLSSD3D11;                                                            // 0x0029 (size: 0x1)
    bool bEnableDLSSVulkan;                                                           // 0x002A (size: 0x1)
    bool bEnableDLSSInEditorViewports;                                                // 0x002B (size: 0x1)
    bool bEnableDLSSInPlayInEditorViewports;                                          // 0x002C (size: 0x1)
    bool bShowDLSSSDebugOnScreenMessages;                                             // 0x002D (size: 0x1)
    FString GenericDLSSBinaryPath;                                                    // 0x0030 (size: 0x10)
    bool bGenericDLSSBinaryExists;                                                    // 0x0040 (size: 0x1)
    uint32 NVIDIANGXApplicationId;                                                    // 0x0044 (size: 0x4)
    FString CustomDLSSBinaryPath;                                                     // 0x0048 (size: 0x10)
    bool bCustomDLSSBinaryExists;                                                     // 0x0058 (size: 0x1)
    bool bAllowOTAUpdate;                                                             // 0x0059 (size: 0x1)
    bool bShowDLSSIncompatiblePluginsToolsWarnings;                                   // 0x005A (size: 0x1)
    EDLSSPreset DLAAPreset;                                                           // 0x005B (size: 0x1)
    EDLSSPreset DLSSQualityPreset;                                                    // 0x005D (size: 0x1)
    EDLSSPreset DLSSBalancedPreset;                                                   // 0x005E (size: 0x1)
    EDLSSPreset DLSSPerformancePreset;                                                // 0x005F (size: 0x1)
    EDLSSPreset DLSSUltraPerformancePreset;                                           // 0x0060 (size: 0x1)

}; // Size: 0x68

#endif
