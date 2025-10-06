#ifndef UE4SS_SDK_NNERuntimeORT_HPP
#define UE4SS_SDK_NNERuntimeORT_HPP

#include "NNERuntimeORT_enums.hpp"

struct FThreadingOptions
{
    bool bUseGlobalThreadPool;                                                        // 0x0000 (size: 0x1)
    int32 IntraOpNumThreads;                                                          // 0x0004 (size: 0x4)
    int32 InterOpNumThreads;                                                          // 0x0008 (size: 0x4)
    TEnumAsByte<EExecutionMode> ExecutionMode;                                        // 0x000C (size: 0x1)

}; // Size: 0x10

class UNNERuntimeORTCpu : public UObject
{
}; // Size: 0x48

class UNNERuntimeORTDml : public UObject
{
}; // Size: 0x60

class UNNERuntimeORTSettings : public UDeveloperSettings
{
    FThreadingOptions EditorThreadingOptions;                                         // 0x0038 (size: 0x10)
    FThreadingOptions GameThreadingOptions;                                           // 0x0048 (size: 0x10)

}; // Size: 0x58

#endif
