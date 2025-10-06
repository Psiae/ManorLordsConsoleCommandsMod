#ifndef UE4SS_SDK_TextureUtilitiesCommon_HPP
#define UE4SS_SDK_TextureUtilitiesCommon_HPP

#include "TextureUtilitiesCommon_enums.hpp"

class UTextureImportSettings : public UDeveloperSettings
{
    int32 AutoVTSize;                                                                 // 0x0038 (size: 0x4)
    int32 AutoLimitDimension;                                                         // 0x003C (size: 0x4)
    bool bEnableNormalizeNormals;                                                     // 0x0040 (size: 0x1)
    bool bEnableFastMipFilter;                                                        // 0x0041 (size: 0x1)
    ETextureImportFloatingPointFormat CompressedFormatForFloatTextures;               // 0x0042 (size: 0x1)
    ETextureImportPNGInfill PNGInfill;                                                // 0x0043 (size: 0x1)

}; // Size: 0x48

class UTextureImportUserSettings : public UDeveloperSettings
{
    ETextureImportPNGInfill PNGInfill;                                                // 0x0038 (size: 0x1)

}; // Size: 0x40

#endif
