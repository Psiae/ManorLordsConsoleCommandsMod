#ifndef UE4SS_SDK_NNEDenoiser_HPP
#define UE4SS_SDK_NNEDenoiser_HPP

#include "NNEDenoiser_enums.hpp"

struct FNNEDenoiserBaseMappingData : public FTableRowBase
{
    int32 TensorIndex;                                                                // 0x0008 (size: 0x4)
    int32 TensorChannel;                                                              // 0x000C (size: 0x4)
    int32 ResourceChannel;                                                            // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FNNEDenoiserInputMappingData : public FNNEDenoiserBaseMappingData
{
    EInputResourceName Resource;                                                      // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FNNEDenoiserOutputMappingData : public FNNEDenoiserBaseMappingData
{
    EOutputResourceName Resource;                                                     // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FNNEDenoiserTemporalInputMappingData : public FNNEDenoiserBaseMappingData
{
    ETemporalInputResourceName Resource;                                              // 0x0018 (size: 0x1)
    int32 FrameIndex;                                                                 // 0x001C (size: 0x4)

}; // Size: 0x20

struct FNNEDenoiserTemporalOutputMappingData : public FNNEDenoiserBaseMappingData
{
    ETemporalOutputResourceName Resource;                                             // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FTilingConfig
{
    int32 Alignment;                                                                  // 0x0000 (size: 0x4)
    int32 Overlap;                                                                    // 0x0004 (size: 0x4)
    int32 MaxSize;                                                                    // 0x0008 (size: 0x4)
    int32 MinSize;                                                                    // 0x000C (size: 0x4)

}; // Size: 0x10

class UNNEDenoiserAsset : public UDataAsset
{
    TSoftObjectPtr<UNNEModelData> ModelData;                                          // 0x0030 (size: 0x28)
    TSoftObjectPtr<UDataTable> InputMapping;                                          // 0x0058 (size: 0x28)
    TSoftObjectPtr<UDataTable> OutputMapping;                                         // 0x0080 (size: 0x28)
    FTilingConfig TilingConfig;                                                       // 0x00A8 (size: 0x10)

}; // Size: 0xB8

class UNNEDenoiserSettings : public UDeveloperSettingsBackedByCVars
{
    TSoftObjectPtr<UNNEDenoiserAsset> DenoiserAsset;                                  // 0x0038 (size: 0x28)
    TEnumAsByte<EDenoiserRuntimeType> RuntimeType;                                    // 0x0088 (size: 0x1)
    FString RuntimeName;                                                              // 0x0090 (size: 0x10)

}; // Size: 0xA0

class UNNEDenoiserTemporalAsset : public UDataAsset
{
    TSoftObjectPtr<UNNEModelData> ModelData;                                          // 0x0030 (size: 0x28)
    TSoftObjectPtr<UDataTable> InputMapping;                                          // 0x0058 (size: 0x28)
    TSoftObjectPtr<UDataTable> OutputMapping;                                         // 0x0080 (size: 0x28)
    FTilingConfig TilingConfig;                                                       // 0x00A8 (size: 0x10)

}; // Size: 0xB8

#endif
