#ifndef UE4SS_SDK_TextureUtilitiesCommon_HPP
#define UE4SS_SDK_TextureUtilitiesCommon_HPP

#include "TextureUtilitiesCommon_enums.hpp"

class UTextureImportSettings : public UDeveloperSettings
{
    int32 AutoVTSize;                                                                 // 0x0038 (size: 0x4)
    bool bEnableNormalizeNormals;                                                     // 0x003C (size: 0x1)
    bool bEnableFastMipFilter;                                                        // 0x003D (size: 0x1)
    ETextureImportFloatingPointFormat CompressedFormatForFloatTextures;               // 0x003E (size: 0x1)
    ETextureImportPNGInfill PNGInfill;                                                // 0x003F (size: 0x1)

}; // Size: 0x40

#endif
