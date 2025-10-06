#ifndef UE4SS_SDK_OptimusSettings_HPP
#define UE4SS_SDK_OptimusSettings_HPP

#include "OptimusSettings_enums.hpp"

class UOptimusSettings : public UDeveloperSettings
{
    EOptimusDefaultDeformerMode DefaultMode;                                          // 0x0038 (size: 0x1)
    TSoftObjectPtr<UMeshDeformer> DefaultDeformer;                                    // 0x0040 (size: 0x28)
    TSoftObjectPtr<UMeshDeformer> DefaultRecomputeTangentDeformer;                    // 0x0068 (size: 0x28)

}; // Size: 0x90

#endif
