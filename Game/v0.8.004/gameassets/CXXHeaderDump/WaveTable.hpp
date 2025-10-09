#ifndef UE4SS_SDK_WaveTable_HPP
#define UE4SS_SDK_WaveTable_HPP

#include "WaveTable_enums.hpp"

struct FWaveTableBankEntry
{
    FWaveTableTransform Transform;                                                    // 0x0000 (size: 0xB8)

}; // Size: 0xB8

struct FWaveTableData
{
    EWaveTableBitDepth BitDepth;                                                      // 0x0000 (size: 0x1)
    TArray<uint8> Data;                                                               // 0x0008 (size: 0x10)
    float FinalValue;                                                                 // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FWaveTableSettings
{
    FFilePath FilePath;                                                               // 0x0000 (size: 0x10)
    int32 ChannelIndex;                                                               // 0x0010 (size: 0x4)
    FWaveTableData SourceData;                                                        // 0x0018 (size: 0x20)
    int32 SourceSampleRate;                                                           // 0x0038 (size: 0x4)
    float Phase;                                                                      // 0x003C (size: 0x4)
    float Top;                                                                        // 0x0040 (size: 0x4)
    float Tail;                                                                       // 0x0044 (size: 0x4)
    float FadeIn;                                                                     // 0x0048 (size: 0x4)
    float FadeOut;                                                                    // 0x004C (size: 0x4)
    bool bNormalize;                                                                  // 0x0050 (size: 0x1)
    bool bRemoveOffset;                                                               // 0x0051 (size: 0x1)

}; // Size: 0x58

struct FWaveTableTransform
{
    EWaveTableCurve Curve;                                                            // 0x0000 (size: 0x1)
    float Scalar;                                                                     // 0x0004 (size: 0x4)
    FRichCurve CurveCustom;                                                           // 0x0008 (size: 0x80)
    class UCurveFloat* CurveShared;                                                   // 0x0088 (size: 0x8)
    FWaveTableData TableData;                                                         // 0x0090 (size: 0x20)
    float Duration;                                                                   // 0x00B0 (size: 0x4)

}; // Size: 0xB8

class UWaveTableBank : public UObject
{
    EWaveTableSamplingMode SampleMode;                                                // 0x0030 (size: 0x1)
    EWaveTableResolution Resolution;                                                  // 0x0031 (size: 0x1)
    int32 SampleRate;                                                                 // 0x0034 (size: 0x4)
    bool bBipolar;                                                                    // 0x0038 (size: 0x1)
    TArray<FWaveTableBankEntry> Entries;                                              // 0x0040 (size: 0x10)

}; // Size: 0x60

#endif
