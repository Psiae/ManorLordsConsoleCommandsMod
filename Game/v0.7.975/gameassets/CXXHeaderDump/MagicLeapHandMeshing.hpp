#ifndef UE4SS_SDK_MagicLeapHandMeshing_HPP
#define UE4SS_SDK_MagicLeapHandMeshing_HPP

struct FMagicLeapHandMesh
{
    int32 Version;                                                                    // 0x0000 (size: 0x4)
    int32 DataCount;                                                                  // 0x0004 (size: 0x4)
    TArray<FMagicLeapHandMeshBlock> Data;                                             // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FMagicLeapHandMeshBlock
{
    int32 IndexCount;                                                                 // 0x0000 (size: 0x4)
    int32 VertexCount;                                                                // 0x0004 (size: 0x4)
    TArray<FVector> Vertex;                                                           // 0x0008 (size: 0x10)
    TArray<int32> Index;                                                              // 0x0018 (size: 0x10)

}; // Size: 0x28

class UMagicLeapHandMeshingComponent : public UActorComponent
{

    void SetUseWeightedNormals(const bool bInUseWeightedNormals);
    bool DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
    bool ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
}; // Size: 0xB0

class UMagicLeapHandMeshingFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
    bool DestroyClient();
    bool CreateClient();
    bool ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
}; // Size: 0x28

#endif
