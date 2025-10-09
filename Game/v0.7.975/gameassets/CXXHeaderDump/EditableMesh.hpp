#ifndef UE4SS_SDK_EditableMesh_HPP
#define UE4SS_SDK_EditableMesh_HPP

#include "EditableMesh_enums.hpp"

struct FAdaptorPolygon
{
    FPolygonGroupID PolygonGroupID;                                                   // 0x0000 (size: 0x4)
    TArray<FAdaptorTriangleID> TriangulatedPolygonTriangleIndices;                    // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FAdaptorPolygon2Group
{
    uint32 RenderingSectionIndex;                                                     // 0x0000 (size: 0x4)
    int32 MaterialIndex;                                                              // 0x0004 (size: 0x4)
    int32 MaxTriangles;                                                               // 0x0008 (size: 0x4)

}; // Size: 0x48

struct FAdaptorTriangleID : public FElementID
{
}; // Size: 0x4

struct FAttributesForEdge
{
    FEdgeID EdgeID;                                                                   // 0x0000 (size: 0x4)
    FMeshElementAttributeList EdgeAttributes;                                         // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FAttributesForVertex
{
    FVertexID VertexID;                                                               // 0x0000 (size: 0x4)
    FMeshElementAttributeList VertexAttributes;                                       // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FAttributesForVertexInstance
{
    FVertexInstanceID VertexInstanceID;                                               // 0x0000 (size: 0x4)
    FMeshElementAttributeList VertexInstanceAttributes;                               // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FChangeVertexInstancesForPolygon
{
    FPolygonID PolygonID;                                                             // 0x0000 (size: 0x4)
    TArray<FVertexIndexAndInstanceID> PerimeterVertexIndicesAndInstanceIDs;           // 0x0008 (size: 0x10)
    TArray<FVertexInstancesForPolygonHole> VertexIndicesAndInstanceIDsForEachHole;    // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FEdgeToCreate
{
    FVertexID VertexID0;                                                              // 0x0000 (size: 0x4)
    FVertexID VertexID1;                                                              // 0x0004 (size: 0x4)
    FMeshElementAttributeList EdgeAttributes;                                         // 0x0008 (size: 0x10)
    FEdgeID OriginalEdgeID;                                                           // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FMeshElementAttributeData
{
    FName AttributeName;                                                              // 0x0000 (size: 0x8)
    int32 AttributeIndex;                                                             // 0x0008 (size: 0x4)
    FMeshElementAttributeValue AttributeValue;                                        // 0x0010 (size: 0x50)

}; // Size: 0x60

struct FMeshElementAttributeList
{
    TArray<FMeshElementAttributeData> Attributes;                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMeshElementAttributeValue
{
}; // Size: 0x50

struct FPolygonGroupForPolygon
{
    FPolygonID PolygonID;                                                             // 0x0000 (size: 0x4)
    FPolygonGroupID PolygonGroupID;                                                   // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FPolygonGroupToCreate
{
    FMeshElementAttributeList PolygonGroupAttributes;                                 // 0x0000 (size: 0x10)
    FPolygonGroupID OriginalPolygonGroupID;                                           // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FPolygonToCreate
{
    FPolygonGroupID PolygonGroupID;                                                   // 0x0000 (size: 0x4)
    TArray<FVertexAndAttributes> PerimeterVertices;                                   // 0x0008 (size: 0x10)
    FPolygonID OriginalPolygonID;                                                     // 0x0018 (size: 0x4)
    EPolygonEdgeHardness PolygonEdgeHardness;                                         // 0x001C (size: 0x1)

}; // Size: 0x20

struct FPolygonToSplit
{
    FPolygonID PolygonID;                                                             // 0x0000 (size: 0x4)
    TArray<FVertexPair> VertexPairsToSplitAt;                                         // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FRenderingPolygon
{
    FPolygonGroupID PolygonGroupID;                                                   // 0x0000 (size: 0x4)
    TArray<FTriangleID> TriangulatedPolygonTriangleIndices;                           // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FRenderingPolygonGroup
{
    uint32 RenderingSectionIndex;                                                     // 0x0000 (size: 0x4)
    int32 MaterialIndex;                                                              // 0x0004 (size: 0x4)
    int32 MaxTriangles;                                                               // 0x0008 (size: 0x4)

}; // Size: 0x48

struct FSubdividedQuad
{
    FSubdividedQuadVertex QuadVertex0;                                                // 0x0000 (size: 0x34)
    FSubdividedQuadVertex QuadVertex1;                                                // 0x0034 (size: 0x34)
    FSubdividedQuadVertex QuadVertex2;                                                // 0x0068 (size: 0x34)
    FSubdividedQuadVertex QuadVertex3;                                                // 0x009C (size: 0x34)

}; // Size: 0xD0

struct FSubdividedQuadVertex
{
    int32 VertexPositionIndex;                                                        // 0x0000 (size: 0x4)
    FVector2D TextureCoordinate0;                                                     // 0x0004 (size: 0x8)
    FVector2D TextureCoordinate1;                                                     // 0x000C (size: 0x8)
    FColor VertexColor;                                                               // 0x0014 (size: 0x4)
    FVector VertexNormal;                                                             // 0x0018 (size: 0xC)
    FVector VertexTangent;                                                            // 0x0024 (size: 0xC)
    float VertexBinormalSign;                                                         // 0x0030 (size: 0x4)

}; // Size: 0x34

struct FSubdividedWireEdge
{
    int32 EdgeVertex0PositionIndex;                                                   // 0x0000 (size: 0x4)
    int32 EdgeVertex1PositionIndex;                                                   // 0x0004 (size: 0x4)

}; // Size: 0xC

struct FSubdivisionLimitData
{
    TArray<FVector> VertexPositions;                                                  // 0x0000 (size: 0x10)
    TArray<FSubdivisionLimitSection> Sections;                                        // 0x0010 (size: 0x10)
    TArray<FSubdividedWireEdge> SubdividedWireEdges;                                  // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FSubdivisionLimitSection
{
    TArray<FSubdividedQuad> SubdividedQuads;                                          // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FVertexAndAttributes
{
    FVertexInstanceID VertexInstanceID;                                               // 0x0000 (size: 0x4)
    FVertexID VertexID;                                                               // 0x0004 (size: 0x4)
    FMeshElementAttributeList PolygonVertexAttributes;                                // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FVertexAttributesForPolygon
{
    FPolygonID PolygonID;                                                             // 0x0000 (size: 0x4)
    TArray<FMeshElementAttributeList> PerimeterVertexAttributeLists;                  // 0x0008 (size: 0x10)
    TArray<FVertexAttributesForPolygonHole> VertexAttributeListsForEachHole;          // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FVertexAttributesForPolygonHole
{
    TArray<FMeshElementAttributeList> VertexAttributeList;                            // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FVertexIndexAndInstanceID
{
    int32 ContourIndex;                                                               // 0x0000 (size: 0x4)
    FVertexInstanceID VertexInstanceID;                                               // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FVertexInstanceToCreate
{
    FVertexID VertexID;                                                               // 0x0000 (size: 0x4)
    FMeshElementAttributeList VertexInstanceAttributes;                               // 0x0008 (size: 0x10)
    FVertexInstanceID OriginalVertexInstanceID;                                       // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FVertexInstancesForPolygonHole
{
    TArray<FVertexIndexAndInstanceID> VertexIndicesAndInstanceIDs;                    // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FVertexPair
{
    FVertexID VertexID0;                                                              // 0x0000 (size: 0x4)
    FVertexID VertexID1;                                                              // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FVertexToCreate
{
    FMeshElementAttributeList VertexAttributes;                                       // 0x0000 (size: 0x10)
    FVertexID OriginalVertexID;                                                       // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FVertexToMove
{
    FVertexID VertexID;                                                               // 0x0000 (size: 0x4)
    FVector NewVertexPosition;                                                        // 0x0004 (size: 0xC)

}; // Size: 0x10

class UEditableGeometryCollectionAdapter : public UEditableMeshAdapter
{
    class UGeometryCollection* GeometryCollection;                                    // 0x0028 (size: 0x8)
    class UGeometryCollection* OriginalGeometryCollection;                            // 0x0030 (size: 0x8)
    int32 GeometryCollectionLODIndex;                                                 // 0x0038 (size: 0x4)

}; // Size: 0xD8

class UEditableMesh : public UObject
{
    TArray<class UEditableMeshAdapter*> Adapters;                                     // 0x03B8 (size: 0x10)
    int32 TextureCoordinateCount;                                                     // 0x03D0 (size: 0x4)
    int32 PendingCompactCounter;                                                      // 0x051C (size: 0x4)
    int32 SubdivisionCount;                                                           // 0x0520 (size: 0x4)

    void WeldVertices(const TArray<FVertexID>& VertexIDs, FVertexID& OutNewVertexID);
    void TryToRemoveVertex(const FVertexID VertexID, bool& bOutWasVertexRemoved, FEdgeID& OutNewEdgeID);
    void TryToRemovePolygonEdge(const FEdgeID EdgeID, bool& bOutWasEdgeRemoved, FPolygonID& OutNewPolygonID);
    void TriangulatePolygons(const TArray<FPolygonID>& PolygonIDs, TArray<FPolygonID>& OutNewTrianglePolygons);
    void TessellatePolygons(const TArray<FPolygonID>& PolygonIDs, const ETriangleTessellationMode TriangleTessellationMode, TArray<FPolygonID>& OutNewPolygonIDs);
    void StartModification(const EMeshModificationType MeshModificationType, const EMeshTopologyChange MeshTopologyChange);
    void SplitPolygons(const TArray<FPolygonToSplit>& PolygonsToSplit, TArray<FEdgeID>& OutNewEdgeIDs);
    void SplitPolygonalMesh(const FPlane& InPlane, TArray<FPolygonID>& PolygonIDs1, TArray<FPolygonID>& PolygonIDs2, TArray<FEdgeID>& BoundaryIDs);
    void SplitEdge(const FEdgeID EdgeID, const TArray<float>& Splits, TArray<FVertexID>& OutNewVertexIDs);
    void SetVerticesCornerSharpness(const TArray<FVertexID>& VertexIDs, const TArray<float>& VerticesNewCornerSharpness);
    void SetVerticesAttributes(const TArray<FAttributesForVertex>& AttributesForVertices);
    void SetVertexInstancesAttributes(const TArray<FAttributesForVertexInstance>& AttributesForVertexInstances);
    void SetTextureCoordinateCount(const int32 NumTexCoords);
    void SetSubdivisionCount(const int32 NewSubdivisionCount);
    void SetPolygonsVertexAttributes(const TArray<FVertexAttributesForPolygon>& VertexAttributesForPolygons);
    void SetEdgesHardnessAutomatically(const TArray<FEdgeID>& EdgeIDs, const float MaxDotProductForSoftEdge);
    void SetEdgesHardness(const TArray<FEdgeID>& EdgeIDs, const TArray<bool>& EdgesNewIsHard);
    void SetEdgesCreaseSharpness(const TArray<FEdgeID>& EdgeIDs, const TArray<float>& EdgesNewCreaseSharpness);
    void SetEdgesAttributes(const TArray<FAttributesForEdge>& AttributesForEdges);
    void SetAllowUndo(const bool bInAllowUndo);
    void SetAllowSpatialDatabase(const bool bInAllowSpatialDatabase);
    void SetAllowCompact(const bool bInAllowCompact);
    void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(const FPlane& InPlane, TArray<FPolygonID>& OutPolygons);
    void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(const FVector LineSegmentStart, const FVector LineSegmentEnd, TArray<FPolygonID>& OutPolygons);
    void SearchSpatialDatabaseForPolygonsInVolume(const TArray<FPlane>& Planes, TArray<FPolygonID>& OutPolygons);
    class UEditableMesh* RevertInstance();
    void Revert();
    void RebuildRenderMesh();
    void QuadrangulateMesh(TArray<FPolygonID>& OutNewPolygonIDs);
    void PropagateInstanceChanges();
    void MoveVertices(const TArray<FVertexToMove>& VerticesToMove);
    FVertexID MakeVertexID(const int32 VertexIndex);
    FPolygonID MakePolygonID(const int32 PolygonIndex);
    FPolygonGroupID MakePolygonGroupID(const int32 PolygonGroupIndex);
    FEdgeID MakeEdgeID(const int32 EdgeIndex);
    bool IsValidVertex(const FVertexID VertexID);
    bool IsValidPolygonGroup(const FPolygonGroupID PolygonGroupID);
    bool IsValidPolygon(const FPolygonID PolygonID);
    bool IsValidEdge(const FEdgeID EdgeID);
    bool IsUndoAllowed();
    bool IsSpatialDatabaseAllowed();
    bool IsPreviewingSubdivisions();
    bool IsOrphanedVertex(const FVertexID VertexID);
    bool IsCompactAllowed();
    bool IsCommittedAsInstance();
    bool IsCommitted();
    bool IsBeingModified();
    FVertexID InvalidVertexID();
    FPolygonID InvalidPolygonID();
    FPolygonGroupID InvalidPolygonGroupID();
    FEdgeID InvalidEdgeID();
    void InsetPolygons(const TArray<FPolygonID>& PolygonIDs, const float InsetFixedDistance, const float InsetProgressTowardCenter, const EInsetPolygonsMode Mode, TArray<FPolygonID>& OutNewCenterPolygonIDs, TArray<FPolygonID>& OutNewSidePolygonIDs);
    void InsertEdgeLoop(const FEdgeID EdgeID, const TArray<float>& Splits, TArray<FEdgeID>& OutNewEdgeIDs);
    void InitializeAdapters();
    FEdgeID GetVertexPairEdge(const FVertexID VertexID, const FVertexID NextVertexID, bool& bOutEdgeWindingIsReversed);
    FVertexID GetVertexInstanceVertex(const FVertexInstanceID VertexInstanceID);
    int32 GetVertexInstanceCount();
    void GetVertexInstanceConnectedPolygons(const FVertexInstanceID VertexInstanceID, TArray<FPolygonID>& OutConnectedPolygonIDs);
    int32 GetVertexInstanceConnectedPolygonCount(const FVertexInstanceID VertexInstanceID);
    FPolygonID GetVertexInstanceConnectedPolygon(const FVertexInstanceID VertexInstanceID, const int32 ConnectedPolygonNumber);
    int32 GetVertexCount();
    void GetVertexConnectedPolygons(const FVertexID VertexID, TArray<FPolygonID>& OutConnectedPolygonIDs);
    void GetVertexConnectedEdges(const FVertexID VertexID, TArray<FEdgeID>& OutConnectedEdgeIDs);
    int32 GetVertexConnectedEdgeCount(const FVertexID VertexID);
    FEdgeID GetVertexConnectedEdge(const FVertexID VertexID, const int32 ConnectedEdgeNumber);
    void GetVertexAdjacentVertices(const FVertexID VertexID, TArray<FVertexID>& OutAdjacentVertexIDs);
    int32 GetTextureCoordinateCount();
    FSubdivisionLimitData GetSubdivisionLimitData();
    int32 GetSubdivisionCount();
    int32 GetPolygonTriangulatedTriangleCount(const FPolygonID PolygonID);
    FTriangleID GetPolygonTriangulatedTriangle(const FPolygonID PolygonID, int32 PolygonTriangleNumber);
    void GetPolygonPerimeterVertices(const FPolygonID PolygonID, TArray<FVertexID>& OutPolygonPerimeterVertexIDs);
    void GetPolygonPerimeterVertexInstances(const FPolygonID PolygonID, TArray<FVertexInstanceID>& OutPolygonPerimeterVertexInstanceIDs);
    FVertexInstanceID GetPolygonPerimeterVertexInstance(const FPolygonID PolygonID, const int32 PolygonVertexNumber);
    int32 GetPolygonPerimeterVertexCount(const FPolygonID PolygonID);
    FVertexID GetPolygonPerimeterVertex(const FPolygonID PolygonID, const int32 PolygonVertexNumber);
    void GetPolygonPerimeterEdges(const FPolygonID PolygonID, TArray<FEdgeID>& OutPolygonPerimeterEdgeIDs);
    int32 GetPolygonPerimeterEdgeCount(const FPolygonID PolygonID);
    FEdgeID GetPolygonPerimeterEdge(const FPolygonID PolygonID, const int32 PerimeterEdgeNumber, bool& bOutEdgeWindingIsReversedForPolygon);
    FPolygonID GetPolygonInGroup(const FPolygonGroupID PolygonGroupID, const int32 PolygonNumber);
    int32 GetPolygonGroupCount();
    int32 GetPolygonCountInGroup(const FPolygonGroupID PolygonGroupID);
    int32 GetPolygonCount();
    void GetPolygonAdjacentPolygons(const FPolygonID PolygonID, TArray<FPolygonID>& OutAdjacentPolygons);
    FPolygonGroupID GetGroupForPolygon(const FPolygonID PolygonID);
    FPolygonGroupID GetFirstValidPolygonGroup();
    void GetEdgeVertices(const FEdgeID EdgeID, FVertexID& OutEdgeVertexID0, FVertexID& OutEdgeVertexID1);
    FVertexID GetEdgeVertex(const FEdgeID EdgeID, const int32 EdgeVertexNumber);
    FEdgeID GetEdgeThatConnectsVertices(const FVertexID VertexID0, const FVertexID VertexID1);
    void GetEdgeLoopElements(const FEdgeID EdgeID, TArray<FEdgeID>& EdgeLoopIDs);
    int32 GetEdgeCount();
    void GetEdgeConnectedPolygons(const FEdgeID EdgeID, TArray<FPolygonID>& OutConnectedPolygonIDs);
    int32 GetEdgeConnectedPolygonCount(const FEdgeID EdgeID);
    FPolygonID GetEdgeConnectedPolygon(const FEdgeID EdgeID, const int32 ConnectedPolygonNumber);
    void GeneratePolygonTangentsAndNormals(const TArray<FPolygonID>& PolygonIDs);
    void FlipPolygons(const TArray<FPolygonID>& PolygonIDs);
    int32 FindPolygonPerimeterVertexNumberForVertex(const FPolygonID PolygonID, const FVertexID VertexID);
    int32 FindPolygonPerimeterEdgeNumberForVertices(const FPolygonID PolygonID, const FVertexID EdgeVertexID0, const FVertexID EdgeVertexID1);
    void FindPolygonLoop(const FEdgeID EdgeID, TArray<FEdgeID>& OutEdgeLoopEdgeIDs, TArray<FEdgeID>& OutFlippedEdgeIDs, TArray<FEdgeID>& OutReversedEdgeIDPathToTake, TArray<FPolygonID>& OutPolygonIDsToSplit);
    void ExtrudePolygons(const TArray<FPolygonID>& Polygons, const float ExtrudeDistance, const bool bKeepNeighborsTogether, TArray<FPolygonID>& OutNewExtrudedFrontPolygons);
    void ExtendVertices(const TArray<FVertexID>& VertexIDs, const bool bOnlyExtendClosestEdge, const FVector ReferencePosition, TArray<FVertexID>& OutNewExtendedVertexIDs);
    void ExtendEdges(const TArray<FEdgeID>& EdgeIDs, const bool bWeldNeighbors, TArray<FEdgeID>& OutNewExtendedEdgeIDs);
    void EndModification(const bool bFromUndo);
    void DeleteVertexInstances(const TArray<FVertexInstanceID>& VertexInstanceIDsToDelete, const bool bDeleteOrphanedVertices);
    void DeleteVertexAndConnectedEdgesAndPolygons(const FVertexID VertexID, const bool bDeleteOrphanedEdges, const bool bDeleteOrphanedVertices, const bool bDeleteOrphanedVertexInstances, const bool bDeleteEmptyPolygonGroups);
    void DeletePolygons(const TArray<FPolygonID>& PolygonIDsToDelete, const bool bDeleteOrphanedEdges, const bool bDeleteOrphanedVertices, const bool bDeleteOrphanedVertexInstances, const bool bDeleteEmptyPolygonGroups);
    void DeletePolygonGroups(const TArray<FPolygonGroupID>& PolygonGroupIDs);
    void DeleteOrphanVertices(const TArray<FVertexID>& VertexIDsToDelete);
    void DeleteEdges(const TArray<FEdgeID>& EdgeIDsToDelete, const bool bDeleteOrphanedVertices);
    void DeleteEdgeAndConnectedPolygons(const FEdgeID EdgeID, const bool bDeleteOrphanedEdges, const bool bDeleteOrphanedVertices, const bool bDeleteOrphanedVertexInstances, const bool bDeleteEmptyPolygonGroups);
    void CreateVertices(const TArray<FVertexToCreate>& VerticesToCreate, TArray<FVertexID>& OutNewVertexIDs);
    void CreateVertexInstances(const TArray<FVertexInstanceToCreate>& VertexInstancesToCreate, TArray<FVertexInstanceID>& OutNewVertexInstanceIDs);
    void CreatePolygons(const TArray<FPolygonToCreate>& PolygonsToCreate, TArray<FPolygonID>& OutNewPolygonIDs, TArray<FEdgeID>& OutNewEdgeIDs);
    void CreatePolygonGroups(const TArray<FPolygonGroupToCreate>& PolygonGroupsToCreate, TArray<FPolygonGroupID>& OutNewPolygonGroupIDs);
    void CreateMissingPolygonPerimeterEdges(const FPolygonID PolygonID, TArray<FEdgeID>& OutNewEdgeIDs);
    void CreateEmptyVertexRange(const int32 NumVerticesToCreate, TArray<FVertexID>& OutNewVertexIDs);
    void CreateEdges(const TArray<FEdgeToCreate>& EdgesToCreate, TArray<FEdgeID>& OutNewEdgeIDs);
    void ComputePolygonsSharedEdges(const TArray<FPolygonID>& PolygonIDs, TArray<FEdgeID>& OutSharedEdgeIDs);
    FPlane ComputePolygonPlane(const FPolygonID PolygonID);
    FVector ComputePolygonNormal(const FPolygonID PolygonID);
    FVector ComputePolygonCenter(const FPolygonID PolygonID);
    FBoxSphereBounds ComputeBoundingBoxAndSphere();
    FBox ComputeBoundingBox();
    class UEditableMesh* CommitInstance(class UPrimitiveComponent* ComponentToInstanceTo);
    void Commit();
    void ChangePolygonsVertexInstances(const TArray<FChangeVertexInstancesForPolygon>& VertexInstancesForPolygons);
    void BevelPolygons(const TArray<FPolygonID>& PolygonIDs, const float BevelFixedDistance, const float BevelProgressTowardCenter, TArray<FPolygonID>& OutNewCenterPolygonIDs, TArray<FPolygonID>& OutNewSidePolygonIDs);
    void AssignPolygonsToPolygonGroups(const TArray<FPolygonGroupForPolygon>& PolygonGroupForPolygons, const bool bDeleteOrphanedPolygonGroups);
    bool AnyChangesToUndo();
}; // Size: 0x708

class UEditableMeshAdapter : public UObject
{
}; // Size: 0x28

class UEditableMeshFactory : public UObject
{

    class UEditableMesh* MakeEditableMesh(class UPrimitiveComponent* PrimitiveComponent, const int32 LODIndex);
}; // Size: 0x28

class UEditableStaticMeshAdapter : public UEditableMeshAdapter
{
    class UStaticMesh* StaticMesh;                                                    // 0x0028 (size: 0x8)
    class UStaticMesh* OriginalStaticMesh;                                            // 0x0030 (size: 0x8)
    int32 StaticMeshLODIndex;                                                         // 0x0038 (size: 0x4)

}; // Size: 0xE0

#endif
