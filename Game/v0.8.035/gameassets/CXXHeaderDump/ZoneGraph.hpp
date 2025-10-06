#ifndef UE4SS_SDK_ZoneGraph_HPP
#define UE4SS_SDK_ZoneGraph_HPP

#include "ZoneGraph_enums.hpp"

struct FRegisteredZoneGraphData
{
    class AZoneGraphData* ZoneGraphData;                                              // 0x0000 (size: 0x8)

}; // Size: 0x10

struct FZoneData
{
    int32 BoundaryPointsBegin;                                                        // 0x0000 (size: 0x4)
    int32 BoundaryPointsEnd;                                                          // 0x0004 (size: 0x4)
    int32 LanesBegin;                                                                 // 0x0008 (size: 0x4)
    int32 LanesEnd;                                                                   // 0x000C (size: 0x4)
    FBox Bounds;                                                                      // 0x0010 (size: 0x38)
    FZoneGraphTagMask Tags;                                                           // 0x0048 (size: 0x4)

}; // Size: 0x50

struct FZoneGraphBVNode
{
    uint16 MinX;                                                                      // 0x0000 (size: 0x2)
    uint16 MinY;                                                                      // 0x0002 (size: 0x2)
    uint16 MinZ;                                                                      // 0x0004 (size: 0x2)
    uint16 MaxX;                                                                      // 0x0006 (size: 0x2)
    uint16 MaxY;                                                                      // 0x0008 (size: 0x2)
    uint16 MaxZ;                                                                      // 0x000A (size: 0x2)
    int32 Index;                                                                      // 0x000C (size: 0x4)

}; // Size: 0x10

struct FZoneGraphBVTree
{
    FVector Origin;                                                                   // 0x0000 (size: 0x18)
    float QuantizationScale;                                                          // 0x0018 (size: 0x4)
    TArray<FZoneGraphBVNode> Nodes;                                                   // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FZoneGraphBuildData
{
    TMap<class UZoneShapeComponent*, class FZoneShapeComponentBuildData> ZoneShapeComponentBuildData; // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FZoneGraphBuildSettings
{
    float CommonTessellationTolerance;                                                // 0x0000 (size: 0x4)
    TArray<FZoneGraphTessellationSettings> SpecificTessellationTolerances;            // 0x0008 (size: 0x10)
    float LaneConnectionAngle;                                                        // 0x0018 (size: 0x4)
    FZoneGraphTagMask LaneConnectionMask;                                             // 0x001C (size: 0x4)
    float TurnThresholdAngle;                                                         // 0x0020 (size: 0x4)
    TArray<FZoneGraphLaneRoutingRule> PolygonRoutingRules;                            // 0x0028 (size: 0x10)
    float ConnectionSnapDistance;                                                     // 0x0038 (size: 0x4)
    float ConnectionSnapAngle;                                                        // 0x003C (size: 0x4)
    double DragEndpointAutoConnectRange;                                              // 0x0040 (size: 0x8)
    double DragEndpointAutoIntersectionRange;                                         // 0x0048 (size: 0x8)
    double SnapAutoIntersectionToClosestPointTolerance;                               // 0x0050 (size: 0x8)
    bool bShow3DRadiusForAutoConnectionAndIntersection;                               // 0x0058 (size: 0x1)

}; // Size: 0x60

struct FZoneGraphBuilder
{
    TArray<FZoneGraphBuilderRegisteredComponent> ShapeComponents;                     // 0x0000 (size: 0x10)
    TArray<int32> ShapeComponentsFreeList;                                            // 0x0010 (size: 0x10)
    TMap<UZoneShapeComponent*, int32> ShapeComponentToIndex;                          // 0x0020 (size: 0x50)
    FZoneGraphBuildData BuildData;                                                    // 0x0070 (size: 0x50)

}; // Size: 0x198

struct FZoneGraphBuilderRegisteredComponent
{
    class UZoneShapeComponent* Component;                                             // 0x0000 (size: 0x8)
    uint32 ShapeHash;                                                                 // 0x0008 (size: 0x4)

}; // Size: 0x18

struct FZoneGraphCompactLaneLocation
{
    FZoneGraphLaneHandle LaneHandle;                                                  // 0x0000 (size: 0x8)
    float DistanceAlongLane;                                                          // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FZoneGraphDataHandle
{
    uint16 Index;                                                                     // 0x0000 (size: 0x2)
    uint16 Generation;                                                                // 0x0002 (size: 0x2)

}; // Size: 0x4

struct FZoneGraphLaneHandle
{
    int32 Index;                                                                      // 0x0000 (size: 0x4)
    FZoneGraphDataHandle DataHandle;                                                  // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FZoneGraphLaneLocation
{
    FVector position;                                                                 // 0x0000 (size: 0x18)
    FVector Direction;                                                                // 0x0018 (size: 0x18)
    FVector Tangent;                                                                  // 0x0030 (size: 0x18)
    FVector Up;                                                                       // 0x0048 (size: 0x18)
    FZoneGraphLaneHandle LaneHandle;                                                  // 0x0060 (size: 0x8)
    int32 LaneSegment;                                                                // 0x0068 (size: 0x4)
    float DistanceAlongLane;                                                          // 0x006C (size: 0x4)

}; // Size: 0x70

struct FZoneGraphLaneRoutingRule
{
    bool bEnabled;                                                                    // 0x0000 (size: 0x1)
    FString Comment;                                                                  // 0x0008 (size: 0x10)
    FZoneGraphTagFilter ZoneTagFilter;                                                // 0x0018 (size: 0xC)
    FZoneLaneProfileRef SourceLaneProfile;                                            // 0x0024 (size: 0x18)
    FZoneLaneProfileRef DestinationLaneProfile;                                       // 0x003C (size: 0x18)
    EZoneGraphLaneRoutingCountRule SourceOutgoingConnections;                         // 0x0054 (size: 0x1)
    EZoneGraphLaneRoutingCountRule DestinationIncomingConnections;                    // 0x0055 (size: 0x1)
    int32 ConnectionRestrictions;                                                     // 0x0058 (size: 0x4)

}; // Size: 0x60

struct FZoneGraphLaneSection
{
    FZoneGraphLaneHandle LaneHandle;                                                  // 0x0000 (size: 0x8)
    float StartDistanceAlongLane;                                                     // 0x0008 (size: 0x4)
    float EndDistanceAlongLane;                                                       // 0x000C (size: 0x4)

}; // Size: 0x10

struct FZoneGraphLinkedLane
{
    FZoneGraphLaneHandle DestLane;                                                    // 0x0000 (size: 0x8)
    EZoneLaneLinkType Type;                                                           // 0x0008 (size: 0x1)
    uint8 Flags;                                                                      // 0x0009 (size: 0x1)

}; // Size: 0xC

struct FZoneGraphStorage
{
    TArray<FZoneData> Zones;                                                          // 0x0000 (size: 0x10)
    TArray<FZoneLaneData> Lanes;                                                      // 0x0010 (size: 0x10)
    TArray<FVector> BoundaryPoints;                                                   // 0x0020 (size: 0x10)
    TArray<FVector> LanePoints;                                                       // 0x0030 (size: 0x10)
    TArray<FVector> LaneUpVectors;                                                    // 0x0040 (size: 0x10)
    TArray<FVector> LaneTangentVectors;                                               // 0x0050 (size: 0x10)
    TArray<float> LanePointProgressions;                                              // 0x0060 (size: 0x10)
    TArray<FZoneLaneLinkData> LaneLinks;                                              // 0x0070 (size: 0x10)
    FBox Bounds;                                                                      // 0x0080 (size: 0x38)
    FZoneGraphBVTree ZoneBVTree;                                                      // 0x00B8 (size: 0x30)

}; // Size: 0xF0

struct FZoneGraphTag
{
    uint8 Bit;                                                                        // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FZoneGraphTagFilter
{
    FZoneGraphTagMask AnyTags;                                                        // 0x0000 (size: 0x4)
    FZoneGraphTagMask AllTags;                                                        // 0x0004 (size: 0x4)
    FZoneGraphTagMask NotTags;                                                        // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FZoneGraphTagInfo
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FColor Color;                                                                     // 0x0008 (size: 0x4)
    FZoneGraphTag Tag;                                                                // 0x000C (size: 0x1)

}; // Size: 0x10

struct FZoneGraphTagMask
{
    uint32 Mask;                                                                      // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FZoneGraphTessellationSettings
{
    FZoneGraphTagFilter LaneFilter;                                                   // 0x0000 (size: 0xC)
    float TessellationTolerance;                                                      // 0x000C (size: 0x4)

}; // Size: 0x10

struct FZoneHandle
{
    uint32 Index;                                                                     // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FZoneLaneData
{
    float Width;                                                                      // 0x0000 (size: 0x4)
    FZoneGraphTagMask Tags;                                                           // 0x0004 (size: 0x4)
    int32 PointsBegin;                                                                // 0x0008 (size: 0x4)
    int32 PointsEnd;                                                                  // 0x000C (size: 0x4)
    int32 LinksBegin;                                                                 // 0x0010 (size: 0x4)
    int32 LinksEnd;                                                                   // 0x0014 (size: 0x4)
    int32 ZoneIndex;                                                                  // 0x0018 (size: 0x4)
    uint16 StartEntryId;                                                              // 0x001C (size: 0x2)
    uint16 EndEntryId;                                                                // 0x001E (size: 0x2)

}; // Size: 0x20

struct FZoneLaneDesc
{
    float Width;                                                                      // 0x0000 (size: 0x4)
    EZoneLaneDirection Direction;                                                     // 0x0004 (size: 0x1)
    FZoneGraphTagMask Tags;                                                           // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FZoneLaneLinkData
{
    int32 DestLaneIndex;                                                              // 0x0000 (size: 0x4)
    EZoneLaneLinkType Type;                                                           // 0x0004 (size: 0x1)
    uint8 Flags;                                                                      // 0x0005 (size: 0x1)

}; // Size: 0x8

struct FZoneLaneProfile
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FGuid ID;                                                                         // 0x0008 (size: 0x10)
    TArray<FZoneLaneDesc> Lanes;                                                      // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FZoneLaneProfileRef
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FGuid ID;                                                                         // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FZoneShapeComponentBuildData
{
    int32 ZoneIndex;                                                                  // 0x0000 (size: 0x4)
    TArray<FZoneGraphLaneHandle> Lanes;                                               // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FZoneShapeConnection
{
    TWeakObjectPtr<class UZoneShapeComponent> ShapeComponent;                         // 0x0000 (size: 0x8)
    int32 ConnectorIndex;                                                             // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FZoneShapeConnector
{
    FVector position;                                                                 // 0x0000 (size: 0x18)
    FVector Normal;                                                                   // 0x0018 (size: 0x18)
    FVector Up;                                                                       // 0x0030 (size: 0x18)
    int32 PointIndex;                                                                 // 0x0048 (size: 0x4)
    FZoneLaneProfileRef LaneProfile;                                                  // 0x004C (size: 0x18)
    bool bReverseLaneProfile;                                                         // 0x0064 (size: 0x1)
    FZoneShapeType ShapeType;                                                         // 0x0065 (size: 0x1)

}; // Size: 0x68

struct FZoneShapeLaneInternalLink
{
    int32 LaneIndex;                                                                  // 0x0000 (size: 0x4)
    FZoneLaneLinkData LinkData;                                                       // 0x0004 (size: 0x8)

}; // Size: 0xC

struct FZoneShapePoint
{
    FVector position;                                                                 // 0x0000 (size: 0x18)
    FVector InControlPoint;                                                           // 0x0018 (size: 0x18)
    FVector OutControlPoint;                                                          // 0x0030 (size: 0x18)
    float TangentLength;                                                              // 0x0048 (size: 0x4)
    float InnerTurnRadius;                                                            // 0x004C (size: 0x4)
    FRotator Rotation;                                                                // 0x0050 (size: 0x18)
    FZoneShapePointType Type;                                                         // 0x0068 (size: 0x1)
    uint8 LaneProfile;                                                                // 0x0069 (size: 0x1)
    bool bReverseLaneProfile;                                                         // 0x006A (size: 0x1)
    int32 LaneConnectionRestrictions;                                                 // 0x006C (size: 0x4)

}; // Size: 0x70

class AZoneGraphData : public AActor
{
    bool bEnableDrawing;                                                              // 0x02A9 (size: 0x1)
    class UZoneGraphRenderingComponent* RenderingComp;                                // 0x02B0 (size: 0x8)
    FZoneGraphStorage ZoneStorage;                                                    // 0x02B8 (size: 0xF0)
    uint32 CombinedShapeHash;                                                         // 0x03D0 (size: 0x4)

}; // Size: 0x3D8

class AZoneShape : public AActor
{
    class UZoneShapeComponent* ShapeComponent;                                        // 0x02A8 (size: 0x8)

}; // Size: 0x2B0

class UZoneGraphRenderingComponent : public UPrimitiveComponent
{
}; // Size: 0x500

class UZoneGraphSettings : public UDeveloperSettings
{
    TArray<FZoneLaneProfile> LaneProfiles;                                            // 0x0038 (size: 0x10)
    FZoneGraphTagInfo Tags;                                                           // 0x0048 (size: 0x200)
    FZoneGraphTagMask VisualizedTags;                                                 // 0x0248 (size: 0x4)
    float ShapeMaxDrawDistance;                                                       // 0x024C (size: 0x4)
    FZoneGraphBuildSettings BuildSettings;                                            // 0x0250 (size: 0x60)
    bool bBuildZoneGraphWhileEditing;                                                 // 0x02B0 (size: 0x1)

}; // Size: 0x2B8

class UZoneGraphSubsystem : public UTickableWorldSubsystem
{
    TArray<FRegisteredZoneGraphData> RegisteredZoneGraphData;                         // 0x0068 (size: 0x10)

}; // Size: 0x90

class UZoneShapeComponent : public UPrimitiveComponent
{
    FZoneLaneProfileRef LaneProfile;                                                  // 0x04E8 (size: 0x18)
    bool bReverseLaneProfile;                                                         // 0x0500 (size: 0x1)
    TArray<FZoneLaneProfileRef> PerPointLaneProfiles;                                 // 0x0508 (size: 0x10)
    TArray<FZoneShapePoint> Points;                                                   // 0x0518 (size: 0x10)
    FZoneShapeType ShapeType;                                                         // 0x0528 (size: 0x1)
    EZoneShapePolygonRoutingType PolygonRoutingType;                                  // 0x0529 (size: 0x1)
    FZoneGraphTagMask Tags;                                                           // 0x052C (size: 0x4)
    TArray<FZoneShapeConnector> ShapeConnectors;                                      // 0x0530 (size: 0x10)
    TArray<FZoneShapeConnection> ConnectedShapes;                                     // 0x0540 (size: 0x10)

    void SetTags(const FZoneGraphTagMask NewTags);
    void SetShapeType(FZoneShapeType Type);
    bool SetReverseLaneProfile(bool bReverse);
    void SetPolygonRoutingType(const EZoneShapePolygonRoutingType NewType);
    bool IsLaneProfileReversed();
    FZoneGraphTagMask GetTags();
    FZoneShapeType GetShapeType();
}; // Size: 0x550

#endif
