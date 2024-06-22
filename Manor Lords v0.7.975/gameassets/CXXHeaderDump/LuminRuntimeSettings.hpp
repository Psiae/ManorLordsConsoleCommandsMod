#ifndef UE4SS_SDK_LuminRuntimeSettings_HPP
#define UE4SS_SDK_LuminRuntimeSettings_HPP

#include "LuminRuntimeSettings_enums.hpp"

struct FLocalizedAppName
{
    FString LanguageCode;                                                             // 0x0000 (size: 0x10)
    FString AppName;                                                                  // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FLocalizedIconInfo
{
    FString LanguageCode;                                                             // 0x0000 (size: 0x10)
    FDirectoryPath IconModelPath;                                                     // 0x0010 (size: 0x10)
    FDirectoryPath IconPortalPath;                                                    // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FLocalizedIconInfos
{
    TArray<FLocalizedIconInfo> IconData;                                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLuminComponentElement
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FString VisibleName;                                                              // 0x0010 (size: 0x10)
    FString ExecutableName;                                                           // 0x0020 (size: 0x10)
    ELuminComponentType ComponentType;                                                // 0x0030 (size: 0x1)
    TArray<FLuminComponentSubElement> ExtraComponentSubElements;                      // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FLuminComponentSubElement
{
    ELuminComponentSubElementType ElementType;                                        // 0x0000 (size: 0x1)
    FString Value;                                                                    // 0x0008 (size: 0x10)

}; // Size: 0x18

class ULuminRuntimeSettings : public UObject
{
    FString PackageName;                                                              // 0x0028 (size: 0x10)
    FString ApplicationDisplayName;                                                   // 0x0038 (size: 0x10)
    ELuminFrameTimingHint FrameTimingHint;                                            // 0x0048 (size: 0x1)
    bool bProtectedContent;                                                           // 0x0049 (size: 0x1)
    bool bManualCallToAppReady;                                                       // 0x004A (size: 0x1)
    bool bUseMobileRendering;                                                         // 0x004B (size: 0x1)
    bool bUseVulkan;                                                                  // 0x004C (size: 0x1)
    FFilePath Certificate;                                                            // 0x0050 (size: 0x10)
    FDirectoryPath IconModelPath;                                                     // 0x0060 (size: 0x10)
    FDirectoryPath IconPortalPath;                                                    // 0x0070 (size: 0x10)
    FLocalizedIconInfos LocalizedIconInfos;                                           // 0x0080 (size: 0x10)
    int32 VersionCode;                                                                // 0x0090 (size: 0x4)
    int32 MinimumAPILevel;                                                            // 0x0094 (size: 0x4)
    TArray<ELuminPrivilege> AppPrivileges;                                            // 0x0098 (size: 0x10)
    TArray<FLuminComponentSubElement> ExtraComponentSubElements;                      // 0x00A8 (size: 0x10)
    TArray<FLuminComponentElement> ExtraComponentElements;                            // 0x00B8 (size: 0x10)
    FString SpatializationPlugin;                                                     // 0x00C8 (size: 0x10)
    FString ReverbPlugin;                                                             // 0x00D8 (size: 0x10)
    FString OcclusionPlugin;                                                          // 0x00E8 (size: 0x10)
    int32 SoundCueCookQualityIndex;                                                   // 0x00F8 (size: 0x4)
    bool bRemoveDebugInfo;                                                            // 0x00FC (size: 0x1)
    FDirectoryPath VulkanValidationLayerLibs;                                         // 0x0100 (size: 0x10)
    bool bFrameVignette;                                                              // 0x0110 (size: 0x1)
    TArray<FLocalizedAppName> LocalizedAppNames;                                      // 0x0118 (size: 0x10)

}; // Size: 0x148

#endif
