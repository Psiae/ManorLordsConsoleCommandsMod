#ifndef UE4SS_SDK_MeshDescription_HPP
#define UE4SS_SDK_MeshDescription_HPP

#include "MeshDescription_enums.hpp"

struct FEdgeID : public FElementID
{
}; // Size: 0x4

struct FElementID
{
    int32 IDValue;                                                                    // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FPolygonGroupID : public FElementID
{
}; // Size: 0x4

struct FPolygonID : public FElementID
{
}; // Size: 0x4

struct FTriangleID : public FElementID
{
}; // Size: 0x4

struct FUVID : public FElementID
{
}; // Size: 0x4

struct FVertexID : public FElementID
{
}; // Size: 0x4

struct FVertexInstanceID : public FElementID
{
}; // Size: 0x4

class UMeshDescriptionBase : public UObject
{

    void SetVertexPosition(FVertexID VertexID, const FVector& Position);
    void SetPolygonVertexInstances(FPolygonID PolygonID, const TArray<FVertexInstanceID>& VertexInstanceIDs);
    void SetPolygonPolygonGroup(FPolygonID PolygonID, FPolygonGroupID PolygonGroupID);
    void ReversePolygonFacing(FPolygonID PolygonID);
    void ReserveNewVertices(int32 NumberOfNewVertices);
    void ReserveNewVertexInstances(int32 NumberOfNewVertexInstances);
    void ReserveNewTriangles(int32 NumberOfNewTriangles);
    void ReserveNewPolygons(const int32 NumberOfNewPolygons);
    void ReserveNewPolygonGroups(int32 NumberOfNewPolygonGroups);
    void ReserveNewEdges(int32 NumberOfNewEdges);
    bool IsVertexValid(FVertexID VertexID);
    bool IsVertexOrphaned(FVertexID VertexID);
    bool IsVertexInstanceValid(FVertexInstanceID VertexInstanceID);
    bool IsTriangleValid(const FTriangleID TriangleID);
    bool IsTrianglePartOfNgon(FTriangleID TriangleID);
    bool IsPolygonValid(FPolygonID PolygonID);
    bool IsPolygonGroupValid(FPolygonGroupID PolygonGroupID);
    bool IsEmpty();
    bool IsEdgeValid(FEdgeID EdgeID);
    bool IsEdgeInternalToPolygon(FEdgeID EdgeID, FPolygonID PolygonID);
    bool IsEdgeInternal(FEdgeID EdgeID);
    void GetVertexVertexInstances(FVertexID VertexID, TArray<FVertexInstanceID>& OutVertexInstanceIDs);
    FVector GetVertexPosition(FVertexID VertexID);
    FEdgeID GetVertexPairEdge(FVertexID VertexID0, FVertexID VertexID1);
    FVertexID GetVertexInstanceVertex(FVertexInstanceID VertexInstanceID);
    FEdgeID GetVertexInstancePairEdge(FVertexInstanceID VertexInstanceID0, FVertexInstanceID VertexInstanceID1);
    FVertexInstanceID GetVertexInstanceForTriangleVertex(FTriangleID TriangleID, FVertexID VertexID);
    FVertexInstanceID GetVertexInstanceForPolygonVertex(FPolygonID PolygonID, FVertexID VertexID);
    int32 GetVertexInstanceCount();
    void GetVertexInstanceConnectedTriangles(FVertexInstanceID VertexInstanceID, TArray<FTriangleID>& OutConnectedTriangleIDs);
    void GetVertexInstanceConnectedPolygons(FVertexInstanceID VertexInstanceID, TArray<FPolygonID>& OutConnectedPolygonIDs);
    int32 GetVertexCount();
    void GetVertexConnectedTriangles(FVertexID VertexID, TArray<FTriangleID>& OutConnectedTriangleIDs);
    void GetVertexConnectedPolygons(FVertexID VertexID, TArray<FPolygonID>& OutConnectedPolygonIDs);
    void GetVertexConnectedEdges(FVertexID VertexID, TArray<FEdgeID>& OutEdgeIDs);
    void GetVertexAdjacentVertices(FVertexID VertexID, TArray<FVertexID>& OutAdjacentVertexIDs);
    void GetTriangleVertices(FTriangleID TriangleID, TArray<FVertexID>& OutVertexIDs);
    void GetTriangleVertexInstances(FTriangleID TriangleID, TArray<FVertexInstanceID>& OutVertexInstanceIDs);
    FVertexInstanceID GetTriangleVertexInstance(FTriangleID TriangleID, int32 Index);
    FPolygonGroupID GetTrianglePolygonGroup(FTriangleID TriangleID);
    FPolygonID GetTrianglePolygon(FTriangleID TriangleID);
    void GetTriangleEdges(FTriangleID TriangleID, TArray<FEdgeID>& OutEdgeIDs);
    int32 GetTriangleCount();
    void GetTriangleAdjacentTriangles(FTriangleID TriangleID, TArray<FTriangleID>& OutTriangleIDs);
    void GetPolygonVertices(FPolygonID PolygonID, TArray<FVertexID>& OutVertexIDs);
    void GetPolygonVertexInstances(FPolygonID PolygonID, TArray<FVertexInstanceID>& OutVertexInstanceIDs);
    void GetPolygonTriangles(FPolygonID PolygonID, TArray<FTriangleID>& OutTriangleIDs);
    FPolygonGroupID GetPolygonPolygonGroup(FPolygonID PolygonID);
    void GetPolygonPerimeterEdges(FPolygonID PolygonID, TArray<FEdgeID>& OutEdgeIDs);
    void GetPolygonInternalEdges(FPolygonID PolygonID, TArray<FEdgeID>& OutEdgeIDs);
    void GetPolygonGroupPolygons(FPolygonGroupID PolygonGroupID, TArray<FPolygonID>& OutPolygonIDs);
    int32 GetPolygonGroupCount();
    int32 GetPolygonCount();
    void GetPolygonAdjacentPolygons(FPolygonID PolygonID, TArray<FPolygonID>& OutPolygonIDs);
    int32 GetNumVertexVertexInstances(FVertexID VertexID);
    int32 GetNumVertexInstanceConnectedTriangles(FVertexInstanceID VertexInstanceID);
    int32 GetNumVertexInstanceConnectedPolygons(FVertexInstanceID VertexInstanceID);
    int32 GetNumVertexConnectedTriangles(FVertexID VertexID);
    int32 GetNumVertexConnectedPolygons(FVertexID VertexID);
    int32 GetNumVertexConnectedEdges(FVertexID VertexID);
    int32 GetNumPolygonVertices(FPolygonID PolygonID);
    int32 GetNumPolygonTriangles(FPolygonID PolygonID);
    int32 GetNumPolygonInternalEdges(FPolygonID PolygonID);
    int32 GetNumPolygonGroupPolygons(FPolygonGroupID PolygonGroupID);
    int32 GetNumEdgeConnectedTriangles(FEdgeID EdgeID);
    int32 GetNumEdgeConnectedPolygons(FEdgeID EdgeID);
    void GetEdgeVertices(const FEdgeID EdgeID, TArray<FVertexID>& OutVertexIDs);
    FVertexID GetEdgeVertex(FEdgeID EdgeID, int32 VertexNumber);
    int32 GetEdgeCount();
    void GetEdgeConnectedTriangles(FEdgeID EdgeID, TArray<FTriangleID>& OutConnectedTriangleIDs);
    void GetEdgeConnectedPolygons(FEdgeID EdgeID, TArray<FPolygonID>& OutConnectedPolygonIDs);
    void Empty();
    void DeleteVertexInstance(FVertexInstanceID VertexInstanceID, TArray<FVertexID>& OrphanedVertices);
    void DeleteVertex(FVertexID VertexID);
    void DeleteTriangle(FTriangleID TriangleID, TArray<FEdgeID>& OrphanedEdges, TArray<FVertexInstanceID>& OrphanedVertexInstances, TArray<FPolygonGroupID>& OrphanedPolygonGroupsPtr);
    void DeletePolygonGroup(FPolygonGroupID PolygonGroupID);
    void DeletePolygon(FPolygonID PolygonID, TArray<FEdgeID>& OrphanedEdges, TArray<FVertexInstanceID>& OrphanedVertexInstances, TArray<FPolygonGroupID>& OrphanedPolygonGroups);
    void DeleteEdge(FEdgeID EdgeID, TArray<FVertexID>& OrphanedVertices);
    void CreateVertexWithID(FVertexID VertexID);
    void CreateVertexInstanceWithID(FVertexInstanceID VertexInstanceID, FVertexID VertexID);
    FVertexInstanceID CreateVertexInstance(FVertexID VertexID);
    FVertexID CreateVertex();
    void CreateTriangleWithID(FTriangleID TriangleID, FPolygonGroupID PolygonGroupID, const TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs);
    FTriangleID CreateTriangle(FPolygonGroupID PolygonGroupID, const TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs);
    void CreatePolygonWithID(FPolygonID PolygonID, FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs);
    void CreatePolygonGroupWithID(FPolygonGroupID PolygonGroupID);
    FPolygonGroupID CreatePolygonGroup();
    FPolygonID CreatePolygon(FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs);
    void CreateEdgeWithID(FEdgeID EdgeID, FVertexID VertexID0, FVertexID VertexID1);
    FEdgeID CreateEdge(FVertexID VertexID0, FVertexID VertexID1);
    void ComputePolygonTriangulation(FPolygonID PolygonID);
}; // Size: 0x2F0

class UMeshDescriptionBaseBulkData : public UObject
{
}; // Size: 0x28

#endif
