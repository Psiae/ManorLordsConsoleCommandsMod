#ifndef UE4SS_SDK_StaticMeshDescription_HPP
#define UE4SS_SDK_StaticMeshDescription_HPP

struct FUVMapSettings
{
    FVector Size;                                                                     // 0x0000 (size: 0x18)
    FVector2D UVTile;                                                                 // 0x0018 (size: 0x10)
    FVector Position;                                                                 // 0x0028 (size: 0x18)
    FRotator Rotation;                                                                // 0x0040 (size: 0x18)
    FVector Scale;                                                                    // 0x0058 (size: 0x18)

}; // Size: 0x70

class UStaticMeshDescription : public UMeshDescriptionBase
{

    void SetVertexInstanceUV(FVertexInstanceID VertexInstanceID, FVector2D UV, int32 UVIndex);
    void SetPolygonGroupMaterialSlotName(FPolygonGroupID PolygonGroupID, const FName& SlotName);
    FVector2D GetVertexInstanceUV(FVertexInstanceID VertexInstanceID, int32 UVIndex);
    void CreateCube(FVector Center, FVector HalfExtents, FPolygonGroupID PolygonGroup, FPolygonID& PolygonID_PlusX, FPolygonID& PolygonID_MinusX, FPolygonID& PolygonID_PlusY, FPolygonID& PolygonID_MinusY, FPolygonID& PolygonID_PlusZ, FPolygonID& PolygonID_MinusZ);
}; // Size: 0x2F0

#endif
