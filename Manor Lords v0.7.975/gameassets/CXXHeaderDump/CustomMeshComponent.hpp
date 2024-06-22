#ifndef UE4SS_SDK_CustomMeshComponent_HPP
#define UE4SS_SDK_CustomMeshComponent_HPP

struct FCustomMeshTriangle
{
    FVector Vertex0;                                                                  // 0x0000 (size: 0xC)
    FVector Vertex1;                                                                  // 0x000C (size: 0xC)
    FVector Vertex2;                                                                  // 0x0018 (size: 0xC)

}; // Size: 0x24

class UCustomMeshComponent : public UMeshComponent
{

    bool SetCustomMeshTriangles(const TArray<FCustomMeshTriangle>& Triangles);
    void ClearCustomMeshTriangles();
    void AddCustomMeshTriangles(const TArray<FCustomMeshTriangle>& Triangles);
}; // Size: 0x490

#endif
