#ifndef UE4SS_SDK_PropertyBindingUtils_HPP
#define UE4SS_SDK_PropertyBindingUtils_HPP

#include "PropertyBindingUtils_enums.hpp"

struct FBindableStructDesc
{
    class UStruct* Struct;                                                            // 0x0000 (size: 0x8)
    FName Name;                                                                       // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FPropertyBindingPath
{
    TArray<FPropertyBindingPathSegment> Segments;                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FPropertyBindingPathSegment
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    int32 ArrayIndex;                                                                 // 0x0008 (size: 0x4)
    class UStruct* InstanceStruct;                                                    // 0x0010 (size: 0x8)

}; // Size: 0x18

#endif
