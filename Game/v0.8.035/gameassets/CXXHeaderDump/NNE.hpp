#ifndef UE4SS_SDK_NNE_HPP
#define UE4SS_SDK_NNE_HPP

#include "NNE_enums.hpp"

struct FNNEAttributeValue
{
    ENNEAttributeDataType Type;                                                       // 0x0000 (size: 0x1)
    TArray<uint8> Value;                                                              // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FNNEFormatAttributeDesc
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FNNEAttributeValue Value;                                                         // 0x0010 (size: 0x18)

}; // Size: 0x28

struct FNNEFormatOperatorDesc
{
    FString TypeName;                                                                 // 0x0000 (size: 0x10)
    FString DomainName;                                                               // 0x0010 (size: 0x10)
    TOptional<uint32> Version;                                                        // 0x0020 (size: 0x8)
    TArray<uint32> InTensors;                                                         // 0x0028 (size: 0x10)
    TArray<uint32> OutTensors;                                                        // 0x0038 (size: 0x10)
    TArray<FNNEFormatAttributeDesc> Attributes;                                       // 0x0048 (size: 0x10)

}; // Size: 0x58

struct FNNEFormatTensorDesc
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    TArray<int32> Shape;                                                              // 0x0010 (size: 0x10)
    ENNEFormatTensorType Type;                                                        // 0x0020 (size: 0x1)
    ENNETensorDataType DataType;                                                      // 0x0021 (size: 0x1)
    uint64 DataSize;                                                                  // 0x0028 (size: 0x8)
    uint64 DataOffset;                                                                // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FNNERuntimeFormat
{
    TArray<FNNEFormatTensorDesc> Tensors;                                             // 0x0000 (size: 0x10)
    TArray<FNNEFormatOperatorDesc> Operators;                                         // 0x0010 (size: 0x10)

}; // Size: 0x40

class INNERuntime : public IInterface
{
}; // Size: 0x28

class INNERuntimeCPU : public IInterface
{
}; // Size: 0x28

class INNERuntimeGPU : public IInterface
{
}; // Size: 0x28

class INNERuntimeNPU : public IInterface
{
}; // Size: 0x28

class INNERuntimeRDG : public IInterface
{
}; // Size: 0x28

class UNNEModelData : public UObject
{
}; // Size: 0x110

#endif
