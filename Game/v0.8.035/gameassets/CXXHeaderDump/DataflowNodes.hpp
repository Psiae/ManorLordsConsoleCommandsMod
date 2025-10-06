#ifndef UE4SS_SDK_DataflowNodes_HPP
#define UE4SS_SDK_DataflowNodes_HPP

struct FBreakAttributeKeyDataflowNode : public FDataflowNode
{
    FCollectionAttributeKey AttributeKeyIn;                                           // 0x0198 (size: 0x20)
    FString AttributeOut;                                                             // 0x01B8 (size: 0x10)
    FString GroupOut;                                                                 // 0x01C8 (size: 0x10)

}; // Size: 0x1D8

struct FDataflowCollectionAddScalarVertexPropertyNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FString Name;                                                                     // 0x0248 (size: 0x10)
    FCollectionAttributeKey AttributeKey;                                             // 0x0258 (size: 0x20)
    TArray<float> VertexWeights;                                                      // 0x0278 (size: 0x10)
    FScalarVertexPropertyGroup TargetGroup;                                           // 0x0288 (size: 0x8)

}; // Size: 0x290

struct FDataflowFunctionProperty
{
}; // Size: 0x10

struct FFloatOverrideDataflowNode : public FDataflowNode
{
    FName PropertyName;                                                               // 0x0198 (size: 0x8)
    FName KeyName;                                                                    // 0x01A0 (size: 0x8)
    float ValueOut;                                                                   // 0x01A8 (size: 0x4)

}; // Size: 0x1B0

struct FGetSkeletalMeshDataflowNode : public FDataflowNode
{
    class USkeletalMesh* SkeletalMesh;                                                // 0x0198 (size: 0x8)
    FName PropertyName;                                                               // 0x01A0 (size: 0x8)

}; // Size: 0x1A8

struct FGetSkeletonDataflowNode : public FDataflowNode
{
    class USkeleton* Skeleton;                                                        // 0x0198 (size: 0x8)
    FName PropertyName;                                                               // 0x01A0 (size: 0x8)

}; // Size: 0x1A8

struct FGetStaticMeshDataflowNode : public FDataflowNode
{
    class UStaticMesh* StaticMesh;                                                    // 0x0198 (size: 0x8)
    FName PropertyName;                                                               // 0x01A0 (size: 0x8)

}; // Size: 0x1A8

struct FMakeAttributeKeyDataflowNode : public FDataflowNode
{
    FString GroupIn;                                                                  // 0x0198 (size: 0x10)
    FString AttributeIn;                                                              // 0x01A8 (size: 0x10)
    FCollectionAttributeKey AttributeKeyOut;                                          // 0x01B8 (size: 0x20)

}; // Size: 0x1D8

struct FScalarVertexPropertyGroup
{
    FName Name;                                                                       // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FSelectionSetDataflowNode : public FDataflowNode
{
    FString Indices;                                                                  // 0x0198 (size: 0x10)
    TArray<int32> IndicesOut;                                                         // 0x01A8 (size: 0x10)

}; // Size: 0x1B8

struct FSkeletalMeshBoneDataflowNode : public FDataflowNode
{
    FName BoneName;                                                                   // 0x0198 (size: 0x8)
    class USkeletalMesh* SkeletalMesh;                                                // 0x01A0 (size: 0x8)
    int32 BoneIndexOut;                                                               // 0x01A8 (size: 0x4)
    FName PropertyName;                                                               // 0x01AC (size: 0x8)

}; // Size: 0x1B8

struct FSkeletalMeshReferenceTransformDataflowNode : public FDataflowNode
{
    class USkeletalMesh* SkeletalMeshIn;                                              // 0x0198 (size: 0x8)
    int32 BoneIndexIn;                                                                // 0x01A0 (size: 0x4)
    FTransform TransformOut;                                                          // 0x01B0 (size: 0x60)

}; // Size: 0x210

#endif
