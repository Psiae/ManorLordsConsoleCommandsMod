#ifndef UE4SS_SDK_PropertyAccess_HPP
#define UE4SS_SDK_PropertyAccess_HPP

#include "PropertyAccess_enums.hpp"

struct FPropertyAccessCopy
{
    int32 AccessIndex;                                                                // 0x0000 (size: 0x4)
    int32 DestAccessStartIndex;                                                       // 0x0004 (size: 0x4)
    int32 DestAccessEndIndex;                                                         // 0x0008 (size: 0x4)
    EPropertyAccessCopyType Type;                                                     // 0x000C (size: 0x1)

}; // Size: 0x10

struct FPropertyAccessCopyBatch
{
    TArray<FPropertyAccessCopy> Copies;                                               // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FPropertyAccessIndirection
{
    TFieldPath<FArrayProperty> ArrayProperty;                                         // 0x0000 (size: 0x20)
    class UFunction* Function;                                                        // 0x0020 (size: 0x8)
    int32 ReturnBufferSize;                                                           // 0x0028 (size: 0x4)
    int32 ReturnBufferAlignment;                                                      // 0x002C (size: 0x4)
    int32 ArrayIndex;                                                                 // 0x0030 (size: 0x4)
    uint32 Offset;                                                                    // 0x0034 (size: 0x4)
    EPropertyAccessObjectType ObjectType;                                             // 0x0038 (size: 0x1)
    EPropertyAccessIndirectionType Type;                                              // 0x0039 (size: 0x1)

}; // Size: 0x40

struct FPropertyAccessIndirectionChain
{
    TFieldPath<FProperty> Property;                                                   // 0x0000 (size: 0x20)
    int32 IndirectionStartIndex;                                                      // 0x0020 (size: 0x4)
    int32 IndirectionEndIndex;                                                        // 0x0024 (size: 0x4)
    int32 EventId;                                                                    // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FPropertyAccessLibrary
{
    TArray<FPropertyAccessSegment> PathSegments;                                      // 0x0000 (size: 0x10)
    TArray<FPropertyAccessPath> SrcPaths;                                             // 0x0010 (size: 0x10)
    TArray<FPropertyAccessPath> DestPaths;                                            // 0x0020 (size: 0x10)
    FPropertyAccessCopyBatch CopyBatches;                                             // 0x0030 (size: 0x40)
    TArray<FPropertyAccessIndirectionChain> SrcAccesses;                              // 0x0070 (size: 0x10)
    TArray<FPropertyAccessIndirectionChain> DestAccesses;                             // 0x0080 (size: 0x10)
    TArray<FPropertyAccessIndirection> Indirections;                                  // 0x0090 (size: 0x10)
    TArray<int32> EventAccessIndices;                                                 // 0x00A0 (size: 0x10)

}; // Size: 0xC8

struct FPropertyAccessPath
{
    int32 PathSegmentStartIndex;                                                      // 0x0000 (size: 0x4)
    int32 PathSegmentCount;                                                           // 0x0004 (size: 0x4)
    uint8 bHasEvents;                                                                 // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FPropertyAccessSegment
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    class UStruct* Struct;                                                            // 0x0008 (size: 0x8)
    TFieldPath<FProperty> Property;                                                   // 0x0010 (size: 0x20)
    class UFunction* Function;                                                        // 0x0030 (size: 0x8)
    int32 ArrayIndex;                                                                 // 0x0038 (size: 0x4)
    uint16 Flags;                                                                     // 0x003C (size: 0x2)

}; // Size: 0x40

class IPropertyAccess : public IInterface
{
}; // Size: 0x28

class IPropertyEventBroadcaster : public IInterface
{
}; // Size: 0x28

class IPropertyEventSubscriber : public IInterface
{
}; // Size: 0x28

#endif
