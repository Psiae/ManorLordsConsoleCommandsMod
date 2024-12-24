#ifndef UE4SS_SDK_IrisCore_HPP
#define UE4SS_SDK_IrisCore_HPP

#include "IrisCore_enums.hpp"

struct FArrayPropertyNetSerializerConfig : public FNetSerializerConfig
{
    uint16 MaxElementCount;                                                           // 0x0010 (size: 0x2)
    uint16 ElementCountBitCount;                                                      // 0x0012 (size: 0x2)
    TFieldPath<FArrayProperty> Property;                                              // 0x0018 (size: 0x20)

}; // Size: 0x40

struct FBitfieldNetSerializerConfig : public FNetSerializerConfig
{
    uint8 BitMask;                                                                    // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FBoolNetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x10

struct FDataStreamDefinition
{
    FName DataStreamName;                                                             // 0x0000 (size: 0x8)
    FName ClassName;                                                                  // 0x0008 (size: 0x8)
    UClass* Class;                                                                    // 0x0010 (size: 0x8)
    EDataStreamSendStatus DefaultSendStatus;                                          // 0x0018 (size: 0x1)
    bool bAutoCreate;                                                                 // 0x0019 (size: 0x1)

}; // Size: 0x20

struct FDateTimeNetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x10

struct FDoubleNetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x10

struct FEnumInt16NetSerializerConfig : public FNetSerializerConfig
{
    int16 LowerBound;                                                                 // 0x0010 (size: 0x2)
    int16 UpperBound;                                                                 // 0x0012 (size: 0x2)
    uint8 BitCount;                                                                   // 0x0014 (size: 0x1)

}; // Size: 0x20

struct FEnumInt32NetSerializerConfig : public FNetSerializerConfig
{
    int32 LowerBound;                                                                 // 0x0010 (size: 0x4)
    int32 UpperBound;                                                                 // 0x0014 (size: 0x4)
    uint8 BitCount;                                                                   // 0x0018 (size: 0x1)

}; // Size: 0x28

struct FEnumInt64NetSerializerConfig : public FNetSerializerConfig
{
    int64 LowerBound;                                                                 // 0x0010 (size: 0x8)
    int64 UpperBound;                                                                 // 0x0018 (size: 0x8)
    uint8 BitCount;                                                                   // 0x0020 (size: 0x1)

}; // Size: 0x30

struct FEnumInt8NetSerializerConfig : public FNetSerializerConfig
{
    int8 LowerBound;                                                                  // 0x0010 (size: 0x1)
    int8 UpperBound;                                                                  // 0x0011 (size: 0x1)
    uint8 BitCount;                                                                   // 0x0012 (size: 0x1)

}; // Size: 0x20

struct FEnumUint16NetSerializerConfig : public FNetSerializerConfig
{
    uint16 LowerBound;                                                                // 0x0010 (size: 0x2)
    uint16 UpperBound;                                                                // 0x0012 (size: 0x2)
    uint8 BitCount;                                                                   // 0x0014 (size: 0x1)

}; // Size: 0x20

struct FEnumUint32NetSerializerConfig : public FNetSerializerConfig
{
    uint32 LowerBound;                                                                // 0x0010 (size: 0x4)
    uint32 UpperBound;                                                                // 0x0014 (size: 0x4)
    uint8 BitCount;                                                                   // 0x0018 (size: 0x1)

}; // Size: 0x28

struct FEnumUint64NetSerializerConfig : public FNetSerializerConfig
{
    uint64 LowerBound;                                                                // 0x0010 (size: 0x8)
    uint64 UpperBound;                                                                // 0x0018 (size: 0x8)
    uint8 BitCount;                                                                   // 0x0020 (size: 0x1)

}; // Size: 0x30

struct FEnumUint8NetSerializerConfig : public FNetSerializerConfig
{
    uint8 LowerBound;                                                                 // 0x0010 (size: 0x1)
    uint8 UpperBound;                                                                 // 0x0011 (size: 0x1)
    uint8 BitCount;                                                                   // 0x0012 (size: 0x1)

}; // Size: 0x20

struct FFieldPathNetSerializerConfig : public FNetSerializerConfig
{
    TFieldPath<FProperty> Property;                                                   // 0x0010 (size: 0x20)

}; // Size: 0x30

struct FFieldPathNetSerializerSerializationHelper
{
    TWeakObjectPtr<class UStruct> Owner;                                              // 0x0000 (size: 0x8)
    TArray<FName> PropertyPath;                                                       // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FFloatNetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x10

struct FGuidNetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x10

struct FInt16RangeNetSerializerConfig : public FNetSerializerConfig
{
    int16 LowerBound;                                                                 // 0x0010 (size: 0x2)
    int16 UpperBound;                                                                 // 0x0012 (size: 0x2)
    uint8 BitCount;                                                                   // 0x0014 (size: 0x1)

}; // Size: 0x18

struct FInt32RangeNetSerializerConfig : public FNetSerializerConfig
{
    int32 LowerBound;                                                                 // 0x0010 (size: 0x4)
    int32 UpperBound;                                                                 // 0x0014 (size: 0x4)
    uint8 BitCount;                                                                   // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FInt64RangeNetSerializerConfig : public FNetSerializerConfig
{
    int64 LowerBound;                                                                 // 0x0010 (size: 0x8)
    int64 UpperBound;                                                                 // 0x0018 (size: 0x8)
    uint8 BitCount;                                                                   // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FInt8RangeNetSerializerConfig : public FNetSerializerConfig
{
    int8 LowerBound;                                                                  // 0x0010 (size: 0x1)
    int8 UpperBound;                                                                  // 0x0011 (size: 0x1)
    uint8 BitCount;                                                                   // 0x0012 (size: 0x1)

}; // Size: 0x18

struct FIntNetSerializerConfig : public FNetSerializerConfig
{
    uint8 BitCount;                                                                   // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FIrisFastArraySerializer : public FFastArraySerializer
{
    uint32 ChangeMaskStorage;                                                         // 0x010C (size: 0x10)

}; // Size: 0x120

struct FLastResortPropertyNetSerializerConfig : public FNetSerializerConfig
{
    TFieldPath<FProperty> Property;                                                   // 0x0010 (size: 0x20)
    uint32 MaxAllowedObjectReferences;                                                // 0x0030 (size: 0x4)

}; // Size: 0x38

struct FNameNetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x10

struct FNetBlobHandlerDefinition
{
    FName ClassName;                                                                  // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FNetObjectFilterDefinition
{
    FName FilterName;                                                                 // 0x0000 (size: 0x8)
    FName ClassName;                                                                  // 0x0008 (size: 0x8)
    FName ConfigClassName;                                                            // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FNetObjectGridFilterProfile
{
    FName FilterProfileName;                                                          // 0x0000 (size: 0x8)
    uint16 FrameCountBeforeCulling;                                                   // 0x0008 (size: 0x2)

}; // Size: 0xC

struct FNetObjectPrioritizerDefinition
{
    FName PrioritizerName;                                                            // 0x0000 (size: 0x8)
    FName ClassName;                                                                  // 0x0008 (size: 0x8)
    UClass* Class;                                                                    // 0x0010 (size: 0x8)
    FName ConfigClassName;                                                            // 0x0018 (size: 0x8)
    UClass* ConfigClass;                                                              // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FNetRoleNetSerializerConfig : public FNetSerializerConfig
{
    int32 RelativeInternalOffsetToOtherRole;                                          // 0x0010 (size: 0x4)
    int32 RelativeExternalOffsetToOtherRole;                                          // 0x0014 (size: 0x4)
    uint8 LowerBound;                                                                 // 0x0018 (size: 0x1)
    uint8 UpperBound;                                                                 // 0x0019 (size: 0x1)
    uint8 BitCount;                                                                   // 0x001A (size: 0x1)
    uint8 AutonomousProxyValue;                                                       // 0x001B (size: 0x1)
    uint8 SimulatedProxyValue;                                                        // 0x001C (size: 0x1)

}; // Size: 0x28

struct FNetSerializerConfig
{
}; // Size: 0x10

struct FNopNetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x10

struct FObjectNetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x10

struct FObjectReplicatedBridgeCriticalClassConfig
{
    FName ClassName;                                                                  // 0x0000 (size: 0x8)
    bool bDisconnectOnProtocolMismatch;                                               // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FObjectReplicationBridgeDeltaCompressionConfig
{
    FName ClassName;                                                                  // 0x0000 (size: 0x8)
    bool bEnableDeltaCompression;                                                     // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FObjectReplicationBridgeFilterConfig
{
    FName ClassName;                                                                  // 0x0000 (size: 0x8)
    FName DynamicFilterName;                                                          // 0x0008 (size: 0x8)
    FName FilterProfile;                                                              // 0x0010 (size: 0x8)
    bool bForceEnableOnAllInstances;                                                  // 0x0018 (size: 0x1)

}; // Size: 0x1C

struct FObjectReplicationBridgePollConfig
{
    FName ClassName;                                                                  // 0x0000 (size: 0x8)
    float PollFrequency;                                                              // 0x0008 (size: 0x4)
    bool bIncludeSubclasses;                                                          // 0x000C (size: 0x1)

}; // Size: 0x10

struct FObjectReplicationBridgePrioritizerConfig
{
    FName ClassName;                                                                  // 0x0000 (size: 0x8)
    FName PrioritizerName;                                                            // 0x0008 (size: 0x8)
    bool bForceEnableOnAllInstances;                                                  // 0x0010 (size: 0x1)

}; // Size: 0x14

struct FObjectReplicationBridgeTypeStatsConfig
{
    FName ClassName;                                                                  // 0x0000 (size: 0x8)
    FName TypeStatsName;                                                              // 0x0008 (size: 0x8)
    bool bIncludeInMinimalCSVStats;                                                   // 0x0010 (size: 0x1)

}; // Size: 0x14

struct FPackedInt32NetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x10

struct FPackedInt64NetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x10

struct FPackedUint32NetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x10

struct FPackedUint64NetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x10

struct FPolymorphicArrayStructNetSerializerConfig : public FPolymorphicStructNetSerializerConfig
{
}; // Size: 0x28

struct FPolymorphicStructNetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x28

struct FRotator3dNetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x10

struct FRotator3fNetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x10

struct FRotatorAsByteNetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x10

struct FRotatorAsShortNetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x10

struct FRotatorNetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x10

struct FScriptInterfaceNetSerializerConfig : public FNetSerializerConfig
{
    UClass* InterfaceClass;                                                           // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FSoftClassPathNetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x10

struct FSoftObjectNetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x10

struct FSoftObjectPathNetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x10

struct FStringNetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x10

struct FStructNetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x18

struct FSupportsStructNetSerializerConfig
{
    FName StructName;                                                                 // 0x0000 (size: 0x8)
    bool bCanUseStructNetSerializer;                                                  // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FUint16RangeNetSerializerConfig : public FNetSerializerConfig
{
    uint16 LowerBound;                                                                // 0x0010 (size: 0x2)
    uint16 UpperBound;                                                                // 0x0012 (size: 0x2)
    uint8 BitCount;                                                                   // 0x0014 (size: 0x1)

}; // Size: 0x18

struct FUint32RangeNetSerializerConfig : public FNetSerializerConfig
{
    uint32 LowerBound;                                                                // 0x0010 (size: 0x4)
    uint32 UpperBound;                                                                // 0x0014 (size: 0x4)
    uint8 BitCount;                                                                   // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FUint64RangeNetSerializerConfig : public FNetSerializerConfig
{
    uint64 LowerBound;                                                                // 0x0010 (size: 0x8)
    uint64 UpperBound;                                                                // 0x0018 (size: 0x8)
    uint8 BitCount;                                                                   // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FUint8RangeNetSerializerConfig : public FNetSerializerConfig
{
    uint8 LowerBound;                                                                 // 0x0010 (size: 0x1)
    uint8 UpperBound;                                                                 // 0x0011 (size: 0x1)
    uint8 BitCount;                                                                   // 0x0012 (size: 0x1)

}; // Size: 0x18

struct FUintNetSerializerConfig : public FNetSerializerConfig
{
    uint8 BitCount;                                                                   // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FUnitQuat4dNetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x10

struct FUnitQuat4fNetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x10

struct FUnitQuatNetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x10

struct FVector3dNetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x10

struct FVector3fNetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x10

struct FVectorNetQuantize100NetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x10

struct FVectorNetQuantize10NetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x10

struct FVectorNetQuantizeNetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x10

struct FVectorNetQuantizeNormalNetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x10

struct FVectorNetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x10

struct FWeakObjectNetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x10

class UDataStream : public UObject
{
}; // Size: 0x28

class UDataStreamDefinitions : public UObject
{
    TArray<FDataStreamDefinition> DataStreamDefinitions;                              // 0x0028 (size: 0x10)

}; // Size: 0x40

class UDataStreamManager : public UDataStream
{
}; // Size: 0x30

class UFilterOutNetObjectFilter : public UNetObjectFilter
{
}; // Size: 0x50

class UFilterOutNetObjectFilterConfig : public UNetObjectFilterConfig
{
}; // Size: 0x30

class UIrisObjectReferencePackageMap : public UPackageMap
{
}; // Size: 0xE8

class ULocationBasedNetObjectPrioritizer : public UNetObjectPrioritizer
{
}; // Size: 0x60

class UNetBlobHandler : public UObject
{
}; // Size: 0x38

class UNetBlobHandlerDefinitions : public UObject
{
    TArray<FNetBlobHandlerDefinition> NetBlobHandlerDefinitions;                      // 0x0028 (size: 0x10)

}; // Size: 0x38

class UNetObjectBlobHandler : public UNetBlobHandler
{
}; // Size: 0x38

class UNetObjectConnectionFilter : public UNetObjectFilter
{
}; // Size: 0xA0

class UNetObjectConnectionFilterConfig : public UNetObjectFilterConfig
{
    uint16 MaxObjectCount;                                                            // 0x0030 (size: 0x2)

}; // Size: 0x38

class UNetObjectCountLimiter : public UNetObjectPrioritizer
{
}; // Size: 0x90

class UNetObjectCountLimiterConfig : public UNetObjectPrioritizerConfig
{
    ENetObjectCountLimiterMode Mode;                                                  // 0x0028 (size: 0x4)
    uint32 MaxObjectCount;                                                            // 0x002C (size: 0x4)
    float Priority;                                                                   // 0x0030 (size: 0x4)
    float OwningConnectionPriority;                                                   // 0x0034 (size: 0x4)
    bool bEnableOwnedObjectsFastLane;                                                 // 0x0038 (size: 0x1)

}; // Size: 0x40

class UNetObjectFilter : public UObject
{
}; // Size: 0x50

class UNetObjectFilterConfig : public UObject
{
    ENetFilterType FilterType;                                                        // 0x0028 (size: 0x1)

}; // Size: 0x30

class UNetObjectFilterDefinitions : public UObject
{
    TArray<FNetObjectFilterDefinition> NetObjectFilterDefinitions;                    // 0x0028 (size: 0x10)

}; // Size: 0x38

class UNetObjectGridFilter : public UNetObjectFilter
{
}; // Size: 0x100

class UNetObjectGridFilterConfig : public UNetObjectFilterConfig
{
    uint32 ViewPosRelevancyFrameCount;                                                // 0x0030 (size: 0x4)
    uint16 DefaultFrameCountBeforeCulling;                                            // 0x0034 (size: 0x2)
    float CellSizeX;                                                                  // 0x0038 (size: 0x4)
    float CellSizeY;                                                                  // 0x003C (size: 0x4)
    float MaxCullDistance;                                                            // 0x0040 (size: 0x4)
    float DefaultCullDistance;                                                        // 0x0044 (size: 0x4)
    FVector MinPos;                                                                   // 0x0048 (size: 0x18)
    FVector MaxPos;                                                                   // 0x0060 (size: 0x18)
    bool bUseExactCullDistance;                                                       // 0x0078 (size: 0x1)
    TArray<FNetObjectGridFilterProfile> FilterProfiles;                               // 0x0080 (size: 0x10)

}; // Size: 0x90

class UNetObjectGridFragmentLocFilter : public UNetObjectGridFilter
{
}; // Size: 0x150

class UNetObjectGridWorldLocFilter : public UNetObjectGridFilter
{
}; // Size: 0x108

class UNetObjectPrioritizer : public UObject
{
}; // Size: 0x28

class UNetObjectPrioritizerConfig : public UObject
{
}; // Size: 0x28

class UNetObjectPrioritizerDefinitions : public UObject
{
    TArray<FNetObjectPrioritizerDefinition> NetObjectPrioritizerDefinitions;          // 0x0028 (size: 0x10)

}; // Size: 0x38

class UNetRPCHandler : public UNetBlobHandler
{
}; // Size: 0x40

class UNetTokenDataStream : public UDataStream
{
}; // Size: 0x78

class UNopNetObjectFilter : public UNetObjectFilter
{
}; // Size: 0x50

class UNopNetObjectFilterConfig : public UNetObjectFilterConfig
{
}; // Size: 0x30

class UObjectReplicationBridge : public UReplicationBridge
{
}; // Size: 0x550

class UObjectReplicationBridgeConfig : public UObject
{
    TArray<FObjectReplicationBridgePollConfig> PollConfigs;                           // 0x0028 (size: 0x10)
    TArray<FObjectReplicationBridgeFilterConfig> FilterConfigs;                       // 0x0038 (size: 0x10)
    TArray<FObjectReplicationBridgePrioritizerConfig> PrioritizerConfigs;             // 0x0048 (size: 0x10)
    TArray<FObjectReplicationBridgeDeltaCompressionConfig> DeltaCompressionConfigs;   // 0x0058 (size: 0x10)
    TArray<FObjectReplicatedBridgeCriticalClassConfig> CriticalClassConfigs;          // 0x0068 (size: 0x10)
    bool bAllClassesCritical;                                                         // 0x0078 (size: 0x1)
    TArray<FObjectReplicationBridgeTypeStatsConfig> TypeStatsConfigs;                 // 0x0080 (size: 0x10)
    FName DefaultSpatialFilterName;                                                   // 0x0090 (size: 0x8)
    FName RequiredNetDriverChannelClassName;                                          // 0x0098 (size: 0x8)
    TArray<FName> CriticalActorClasses;                                               // 0x00A0 (size: 0x10)

}; // Size: 0xB0

class UPartialNetObjectAttachmentHandler : public USequentialPartialNetBlobHandler
{
}; // Size: 0x48

class UPartialNetObjectAttachmentHandlerConfig : public USequentialPartialNetBlobHandlerConfig
{
    uint32 BitCountSplitThreshold;                                                    // 0x0030 (size: 0x4)
    uint32 ClientUnreliableBitCountSplitThreshold;                                    // 0x0034 (size: 0x4)
    uint32 ServerUnreliableBitCountSplitThreshold;                                    // 0x0038 (size: 0x4)

}; // Size: 0x40

class UReplicationBridge : public UObject
{
}; // Size: 0x110

class UReplicationDataStream : public UDataStream
{
}; // Size: 0x38

class UReplicationStateDescriptorConfig : public UObject
{
    TArray<FSupportsStructNetSerializerConfig> SupportsStructNetSerializerList;       // 0x0028 (size: 0x10)

}; // Size: 0x38

class UReplicationSystem : public UObject
{
    class UReplicationBridge* ReplicationBridge;                                      // 0x0038 (size: 0x8)

}; // Size: 0x58

class USequentialPartialNetBlobHandler : public UNetBlobHandler
{
}; // Size: 0x48

class USequentialPartialNetBlobHandlerConfig : public UObject
{
    uint32 MaxPartBitCount;                                                           // 0x0028 (size: 0x4)
    uint32 MaxPartCount;                                                              // 0x002C (size: 0x4)

}; // Size: 0x30

class USphereNetObjectPrioritizer : public ULocationBasedNetObjectPrioritizer
{
}; // Size: 0x68

class USphereNetObjectPrioritizerConfig : public UNetObjectPrioritizerConfig
{
    float InnerRadius;                                                                // 0x0028 (size: 0x4)
    float OuterRadius;                                                                // 0x002C (size: 0x4)
    float InnerPriority;                                                              // 0x0030 (size: 0x4)
    float OuterPriority;                                                              // 0x0034 (size: 0x4)
    float OutsidePriority;                                                            // 0x0038 (size: 0x4)

}; // Size: 0x40

class USphereWithOwnerBoostNetObjectPrioritizer : public USphereNetObjectPrioritizer
{
}; // Size: 0xA0

class USphereWithOwnerBoostNetObjectPrioritizerConfig : public USphereNetObjectPrioritizerConfig
{
    float OwnerPriorityBoost;                                                         // 0x0040 (size: 0x4)

}; // Size: 0x48

#endif
