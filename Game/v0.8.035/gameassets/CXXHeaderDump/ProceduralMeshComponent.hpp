#ifndef UE4SS_SDK_ProceduralMeshComponent_HPP
#define UE4SS_SDK_ProceduralMeshComponent_HPP

#include "ProceduralMeshComponent_enums.hpp"

struct FProcMeshSection
{
    TArray<FProcMeshVertex> ProcVertexBuffer;                                         // 0x0000 (size: 0x10)
    TArray<uint32> ProcIndexBuffer;                                                   // 0x0010 (size: 0x10)
    FBox SectionLocalBox;                                                             // 0x0020 (size: 0x38)
    bool bEnableCollision;                                                            // 0x0058 (size: 0x1)
    bool bSectionVisible;                                                             // 0x0059 (size: 0x1)

}; // Size: 0x60

struct FProcMeshTangent
{
    FVector TangentX;                                                                 // 0x0000 (size: 0x18)
    bool bFlipTangentY;                                                               // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FProcMeshVertex
{
    FVector position;                                                                 // 0x0000 (size: 0x18)
    FVector Normal;                                                                   // 0x0018 (size: 0x18)
    FProcMeshTangent Tangent;                                                         // 0x0030 (size: 0x20)
    FColor Color;                                                                     // 0x0050 (size: 0x4)
    FVector2D UV0;                                                                    // 0x0058 (size: 0x10)
    FVector2D UV1;                                                                    // 0x0068 (size: 0x10)
    FVector2D UV2;                                                                    // 0x0078 (size: 0x10)
    FVector2D UV3;                                                                    // 0x0088 (size: 0x10)

}; // Size: 0x98

class UKismetProceduralMeshLibrary : public UBlueprintFunctionLibrary
{

    void SliceProceduralMesh(class UProceduralMeshComponent* InProcMesh, FVector PlanePosition, FVector PlaneNormal, bool bCreateOtherHalf, class UProceduralMeshComponent*& OutOtherHalfProcMesh, EProcMeshSliceCapOption CapOption, class UMaterialInterface* CapMaterial);
    void GetSectionFromStaticMesh(class UStaticMesh* InMesh, int32 LODIndex, int32 SectionIndex, TArray<FVector>& Vertices, TArray<int32>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UVs, TArray<FProcMeshTangent>& Tangents);
    void GetSectionFromProceduralMesh(class UProceduralMeshComponent* InProcMesh, int32 SectionIndex, TArray<FVector>& Vertices, TArray<int32>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UVs, TArray<FProcMeshTangent>& Tangents);
    void GenerateBoxMesh(FVector BoxRadius, TArray<FVector>& Vertices, TArray<int32>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UVs, TArray<FProcMeshTangent>& Tangents);
    void CreateGridMeshWelded(int32 NumX, int32 NumY, TArray<int32>& Triangles, TArray<FVector>& Vertices, TArray<FVector2D>& UVs, float GridSpacing);
    void CreateGridMeshTriangles(int32 NumX, int32 NumY, bool bWinding, TArray<int32>& Triangles);
    void CreateGridMeshSplit(int32 NumX, int32 NumY, TArray<int32>& Triangles, TArray<FVector>& Vertices, TArray<FVector2D>& UVs, TArray<FVector2D>& UV1s, float GridSpacing);
    void CopyProceduralMeshFromStaticMeshComponent(class UStaticMeshComponent* StaticMeshComponent, int32 LODIndex, class UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision);
    void ConvertQuadToTriangles(TArray<int32>& Triangles, int32 Vert0, int32 Vert1, int32 Vert2, int32 Vert3);
    void CalculateTangentsForMesh(const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector2D>& UVs, TArray<FVector>& Normals, TArray<FProcMeshTangent>& Tangents);
}; // Size: 0x28

class UProceduralMeshComponent : public UMeshComponent
{
    bool bUseComplexAsSimpleCollision;                                                // 0x0520 (size: 0x1)
    bool bUseAsyncCooking;                                                            // 0x0521 (size: 0x1)
    class UBodySetup* ProcMeshBodySetup;                                              // 0x0528 (size: 0x8)
    TArray<FProcMeshSection> ProcMeshSections;                                        // 0x0530 (size: 0x10)
    TArray<FKConvexElem> CollisionConvexElems;                                        // 0x0540 (size: 0x10)
    FBoxSphereBounds LocalBounds;                                                     // 0x0550 (size: 0x38)
    TArray<class UBodySetup*> AsyncBodySetupQueue;                                    // 0x0588 (size: 0x10)

    void UpdateMeshSection_LinearColor(int32 SectionIndex, const TArray<FVector>& Vertices, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FVector2D>& UV1, const TArray<FVector2D>& UV2, const TArray<FVector2D>& UV3, const TArray<FLinearColor>& VertexColors, const TArray<FProcMeshTangent>& Tangents, bool bSRGBConversion);
    void UpdateMeshSection(int32 SectionIndex, const TArray<FVector>& Vertices, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FColor>& VertexColors, const TArray<FProcMeshTangent>& Tangents);
    void SetMeshSectionVisible(int32 SectionIndex, bool bNewVisibility);
    bool IsMeshSectionVisible(int32 SectionIndex);
    int32 GetNumSections();
    void CreateMeshSection_LinearColor(int32 SectionIndex, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FVector2D>& UV1, const TArray<FVector2D>& UV2, const TArray<FVector2D>& UV3, const TArray<FLinearColor>& VertexColors, const TArray<FProcMeshTangent>& Tangents, bool bCreateCollision, bool bSRGBConversion);
    void CreateMeshSection(int32 SectionIndex, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FColor>& VertexColors, const TArray<FProcMeshTangent>& Tangents, bool bCreateCollision);
    void ClearMeshSection(int32 SectionIndex);
    void ClearCollisionConvexMeshes();
    void ClearAllMeshSections();
    void AddCollisionConvexMesh(TArray<FVector> ConvexVerts);
}; // Size: 0x5A0

#endif
