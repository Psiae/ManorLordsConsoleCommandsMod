#ifndef UE4SS_SDK_StaticMeshDescription_HPP
#define UE4SS_SDK_StaticMeshDescription_HPP

struct FUVMapSettings
{
    FVector Size;                                                                     // 0x0000 (size: 0xC)
    FVector2D UVTile;                                                                 // 0x000C (size: 0x8)
    FVector Position;                                                                 // 0x0014 (size: 0xC)
    FRotator Rotation;                                                                // 0x0020 (size: 0xC)
    FVector Scale;                                                                    // 0x002C (size: 0xC)

}; // Size: 0x38

class UStaticMeshDescription : public UMeshDescriptionBase
{

    void SetVertexInstanceUV(FVertexInstanceID VertexInstanceID, FVector2D uv, int32 UVIndex);
    void SetPolygonGroupMaterialSlotName(FPolygonGroupID PolygonGroupID, const FName& SlotName);
    FVector2D GetVertexInstanceUV(FVertexInstanceID VertexInstanceID, int32 UVIndex);
    void CreateCube(FVector Center, FVector HalfExtents, FPolygonGroupID PolygonGroup, FPolygonID& PolygonID_PlusX, FPolygonID& PolygonID_MinusX, FPolygonID& PolygonID_PlusY, FPolygonID& PolygonID_MinusY, FPolygonID& PolygonID_PlusZ, FPolygonID& PolygonID_MinusZ);
}; // Size: 0x390

#endif
