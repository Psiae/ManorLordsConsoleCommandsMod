#ifndef UE4SS_SDK_ClothingSystemRuntimeInterface_HPP
#define UE4SS_SDK_ClothingSystemRuntimeInterface_HPP

struct FClothCollisionData
{
    TArray<FClothCollisionPrim_Sphere> Spheres;                                       // 0x0000 (size: 0x10)
    TArray<FClothCollisionPrim_SphereConnection> SphereConnections;                   // 0x0010 (size: 0x10)
    TArray<FClothCollisionPrim_Convex> Convexes;                                      // 0x0020 (size: 0x10)
    TArray<FClothCollisionPrim_Box> Boxes;                                            // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FClothCollisionPrim_Box
{
    FVector LocalPosition;                                                            // 0x0000 (size: 0x18)
    FQuat LocalRotation;                                                              // 0x0020 (size: 0x20)
    FVector HalfExtents;                                                              // 0x0040 (size: 0x18)
    int32 BoneIndex;                                                                  // 0x0058 (size: 0x4)

}; // Size: 0x60

struct FClothCollisionPrim_Convex
{
    TArray<FClothCollisionPrim_ConvexFace> Faces;                                     // 0x0000 (size: 0x10)
    TArray<FVector> SurfacePoints;                                                    // 0x0010 (size: 0x10)
    int32 BoneIndex;                                                                  // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FClothCollisionPrim_ConvexFace
{
    FPlane Plane;                                                                     // 0x0000 (size: 0x20)
    TArray<int32> Indices;                                                            // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FClothCollisionPrim_Sphere
{
    int32 BoneIndex;                                                                  // 0x0000 (size: 0x4)
    float Radius;                                                                     // 0x0004 (size: 0x4)
    FVector LocalPosition;                                                            // 0x0008 (size: 0x18)

}; // Size: 0x20

struct FClothCollisionPrim_SphereConnection
{
    int32 SphereIndices;                                                              // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FClothVertBoneData
{
    int32 NumInfluences;                                                              // 0x0000 (size: 0x4)
    uint16 BoneIndices;                                                               // 0x0004 (size: 0x18)
    float BoneWeights;                                                                // 0x001C (size: 0x30)

}; // Size: 0x4C

class UClothConfigBase : public UObject
{
}; // Size: 0x28

class UClothPhysicalMeshDataBase_Legacy : public UObject
{
    TArray<FVector3f> Vertices;                                                       // 0x0028 (size: 0x10)
    TArray<FVector3f> Normals;                                                        // 0x0038 (size: 0x10)
    TArray<uint32> Indices;                                                           // 0x0048 (size: 0x10)
    TArray<float> InverseMasses;                                                      // 0x0058 (size: 0x10)
    TArray<FClothVertBoneData> BoneData;                                              // 0x0068 (size: 0x10)
    int32 NumFixedVerts;                                                              // 0x0078 (size: 0x4)
    int32 MaxBoneWeights;                                                             // 0x007C (size: 0x4)
    TArray<uint32> SelfCollisionIndices;                                              // 0x0080 (size: 0x10)

}; // Size: 0xE0

class UClothingAssetBase : public UObject
{
    FString ImportedFilePath;                                                         // 0x0028 (size: 0x10)
    FGuid AssetGuid;                                                                  // 0x0038 (size: 0x10)

}; // Size: 0x48

class UClothingInteractor : public UObject
{
}; // Size: 0x30

class UClothingSimulationFactory : public UObject
{
}; // Size: 0x28

class UClothingSimulationInteractor : public UObject
{
    TMap<class FName, class UClothingInteractor*> ClothingInteractors;                // 0x0028 (size: 0x50)

    void SetNumSubsteps(int32 NumSubsteps);
    void SetNumIterations(int32 NumIterations);
    void SetMaxNumIterations(int32 MaxNumIterations);
    void SetAnimDriveSpringStiffness(float InStiffness);
    void PhysicsAssetUpdated();
    float GetSimulationTime();
    int32 GetNumSubsteps();
    int32 GetNumKinematicParticles();
    int32 GetNumIterations();
    int32 GetNumDynamicParticles();
    int32 GetNumCloths();
    class UClothingInteractor* GetClothingInteractor(FString ClothingAssetName);
    void EnableGravityOverride(const FVector& InVector);
    void DisableGravityOverride();
    void ClothConfigUpdated();
}; // Size: 0x90

class UDEPRECATED_ClothSharedSimConfigBase : public UObject
{
}; // Size: 0x28

#endif
