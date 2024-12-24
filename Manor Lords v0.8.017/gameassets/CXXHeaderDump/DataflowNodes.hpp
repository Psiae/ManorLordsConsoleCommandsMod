#ifndef UE4SS_SDK_DataflowNodes_HPP
#define UE4SS_SDK_DataflowNodes_HPP

struct FDataflowCollectionAddScalarVertexPropertyNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FString Name;                                                                     // 0x0198 (size: 0x10)
    TArray<float> VertexWeights;                                                      // 0x01A8 (size: 0x10)

}; // Size: 0x1B8

struct FFloatOverrideDataflowNode : public FDataflowNode
{
    FName PropertyName;                                                               // 0x00E8 (size: 0x8)
    FName KeyName;                                                                    // 0x00F0 (size: 0x8)
    float ValueOut;                                                                   // 0x00F8 (size: 0x4)

}; // Size: 0x100

struct FGetSkeletalMeshDataflowNode : public FDataflowNode
{
    class USkeletalMesh* SkeletalMesh;                                                // 0x00E8 (size: 0x8)
    FName PropertyName;                                                               // 0x00F0 (size: 0x8)

}; // Size: 0xF8

struct FGetSkeletonDataflowNode : public FDataflowNode
{
    class USkeleton* Skeleton;                                                        // 0x00E8 (size: 0x8)
    FName PropertyName;                                                               // 0x00F0 (size: 0x8)

}; // Size: 0xF8

struct FGetStaticMeshDataflowNode : public FDataflowNode
{
    class UStaticMesh* StaticMesh;                                                    // 0x00E8 (size: 0x8)
    FName PropertyName;                                                               // 0x00F0 (size: 0x8)

}; // Size: 0xF8

struct FSelectionSetDataflowNode : public FDataflowNode
{
    FString Indices;                                                                  // 0x00E8 (size: 0x10)
    TArray<int32> IndicesOut;                                                         // 0x00F8 (size: 0x10)

}; // Size: 0x108

struct FSkeletalMeshBoneDataflowNode : public FDataflowNode
{
    FName BoneName;                                                                   // 0x00E8 (size: 0x8)
    class USkeletalMesh* SkeletalMesh;                                                // 0x00F0 (size: 0x8)
    int32 BoneIndexOut;                                                               // 0x00F8 (size: 0x4)
    FName PropertyName;                                                               // 0x00FC (size: 0x8)

}; // Size: 0x108

struct FSkeletalMeshReferenceTransformDataflowNode : public FDataflowNode
{
    class USkeletalMesh* SkeletalMeshIn;                                              // 0x00E8 (size: 0x8)
    int32 BoneIndexIn;                                                                // 0x00F0 (size: 0x4)
    FTransform TransformOut;                                                          // 0x0100 (size: 0x60)

}; // Size: 0x160

#endif
