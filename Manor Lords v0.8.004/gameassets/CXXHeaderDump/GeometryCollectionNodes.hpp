#ifndef UE4SS_SDK_GeometryCollectionNodes_HPP
#define UE4SS_SDK_GeometryCollectionNodes_HPP

#include "GeometryCollectionNodes_enums.hpp"

struct FAbsDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x00E8 (size: 0x4)
    float ReturnValue;                                                                // 0x00EC (size: 0x4)

}; // Size: 0xF0

struct FAddCustomCollectionAttributeDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    EStandardGroupNameEnum GroupName;                                                 // 0x0198 (size: 0x1)
    FString CustomGroupName;                                                          // 0x01A0 (size: 0x10)
    FString AttrName;                                                                 // 0x01B0 (size: 0x10)
    ECustomAttributeTypeEnum CustomAttributeType;                                     // 0x01C0 (size: 0x1)
    int32 NumElements;                                                                // 0x01C4 (size: 0x4)

}; // Size: 0x1C8

struct FAddDataflowNode : public FDataflowNode
{
    float FloatA;                                                                     // 0x00E8 (size: 0x4)
    float FloatB;                                                                     // 0x00EC (size: 0x4)
    float ReturnValue;                                                                // 0x00F0 (size: 0x4)

}; // Size: 0xF8

struct FAddMaterialToCollectionDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FDataflowFaceSelection FaceSelection;                                             // 0x0198 (size: 0x20)
    TArray<class UMaterial*> Materials;                                               // 0x01B8 (size: 0x10)
    class UMaterial* OutsideMaterial;                                                 // 0x01C8 (size: 0x8)
    class UMaterial* InsideMaterial;                                                  // 0x01D0 (size: 0x8)
    bool bAssignOutsideMaterial;                                                      // 0x01D8 (size: 0x1)
    bool bAssignInsideMaterial;                                                       // 0x01D9 (size: 0x1)

}; // Size: 0x1E0

struct FAppendCollectionAssetsDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection1;                                              // 0x00E8 (size: 0xB0)
    FManagedArrayCollection Collection2;                                              // 0x0198 (size: 0xB0)
    TArray<FString> GeometryGroupGuidsOut1;                                           // 0x0248 (size: 0x10)
    TArray<FString> GeometryGroupGuidsOut2;                                           // 0x0258 (size: 0x10)

}; // Size: 0x268

struct FArcCosDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x00E8 (size: 0x4)
    float ReturnValue;                                                                // 0x00EC (size: 0x4)

}; // Size: 0xF0

struct FArcSinDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x00E8 (size: 0x4)
    float ReturnValue;                                                                // 0x00EC (size: 0x4)

}; // Size: 0xF0

struct FArcTan2DataflowNode : public FDataflowNode
{
    float Y;                                                                          // 0x00E8 (size: 0x4)
    float X;                                                                          // 0x00EC (size: 0x4)
    float ReturnValue;                                                                // 0x00F0 (size: 0x4)

}; // Size: 0xF8

struct FArcTanDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x00E8 (size: 0x4)
    float ReturnValue;                                                                // 0x00EC (size: 0x4)

}; // Size: 0xF0

struct FAutoClusterDataflowNode : public FDataflowNode
{
    EClusterSizeMethodEnum ClusterSizeMethod;                                         // 0x00E8 (size: 0x1)
    int32 ClusterSites;                                                               // 0x00EC (size: 0x4)
    float ClusterFraction;                                                            // 0x00F0 (size: 0x4)
    float SiteSize;                                                                   // 0x00F4 (size: 0x4)
    int32 ClusterGridWidth;                                                           // 0x00F8 (size: 0x4)
    int32 ClusterGridDepth;                                                           // 0x00FC (size: 0x4)
    int32 ClusterGridHeight;                                                          // 0x0100 (size: 0x4)
    int32 DriftIterations;                                                            // 0x0104 (size: 0x4)
    float MinimumSize;                                                                // 0x0108 (size: 0x4)
    bool bPreferConvexity;                                                            // 0x010C (size: 0x1)
    float ConcavityTolerance;                                                         // 0x0110 (size: 0x4)
    bool AutoCluster;                                                                 // 0x0114 (size: 0x1)
    bool EnforceSiteParameters;                                                       // 0x0115 (size: 0x1)
    bool AvoidIsolated;                                                               // 0x0116 (size: 0x1)
    FManagedArrayCollection Collection;                                               // 0x0118 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x01C8 (size: 0x20)

}; // Size: 0x1E8

struct FBakeTransformsInCollectionDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)

}; // Size: 0x198

struct FBoolArrayToFaceSelectionDataflowNode : public FDataflowNode
{
    TArray<bool> BoolAttributeData;                                                   // 0x00E8 (size: 0x10)
    FDataflowFaceSelection FaceSelection;                                             // 0x00F8 (size: 0x20)

}; // Size: 0x118

struct FBoolToIntDataflowNode : public FDataflowNode
{
    bool bool;                                                                        // 0x00E8 (size: 0x1)
    int32 Int;                                                                        // 0x00EC (size: 0x4)

}; // Size: 0xF0

struct FBoolToStringDataflowNode : public FDataflowNode
{
    bool bool;                                                                        // 0x00E8 (size: 0x1)
    FString String;                                                                   // 0x00F0 (size: 0x10)

}; // Size: 0x100

struct FBoundingBoxDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FBox BoundingBox;                                                                 // 0x0198 (size: 0x38)

}; // Size: 0x1D0

struct FBoxFalloffFieldDataflowNode : public FDataflowNode
{
    TArray<FVector3f> SamplePositions;                                                // 0x00E8 (size: 0x10)
    FDataflowVertexSelection SampleIndices;                                           // 0x00F8 (size: 0x20)
    FBox Box;                                                                         // 0x0118 (size: 0x38)
    FTransform Transform;                                                             // 0x0150 (size: 0x60)
    float Magnitude;                                                                  // 0x01B0 (size: 0x4)
    float MinRange;                                                                   // 0x01B4 (size: 0x4)
    float MaxRange;                                                                   // 0x01B8 (size: 0x4)
    float Default;                                                                    // 0x01BC (size: 0x4)
    EDataflowFieldFalloffType FalloffType;                                            // 0x01C0 (size: 0x1)
    TArray<float> FieldFloatResult;                                                   // 0x01C8 (size: 0x10)
    TArray<int32> FieldRemap;                                                         // 0x01D8 (size: 0x10)
    FDataflowVertexSelection FieldSelectionMask;                                      // 0x01E8 (size: 0x20)
    int32 NumSamplePositions;                                                         // 0x0208 (size: 0x4)

}; // Size: 0x210

struct FBoxToMeshDataflowNode : public FDataflowNode
{
    FBox Box;                                                                         // 0x00E8 (size: 0x38)
    class UDynamicMesh* Mesh;                                                         // 0x0120 (size: 0x8)
    int32 TriangleCount;                                                              // 0x0128 (size: 0x4)

}; // Size: 0x130

struct FBranchCollectionDataflowNode : public FDataflowNode
{
    FManagedArrayCollection TrueCollection;                                           // 0x00E8 (size: 0xB0)
    FManagedArrayCollection FalseCollection;                                          // 0x0198 (size: 0xB0)
    bool bCondition;                                                                  // 0x0248 (size: 0x1)
    FManagedArrayCollection ChosenCollection;                                         // 0x0250 (size: 0xB0)

}; // Size: 0x300

struct FBranchFloatDataflowNode : public FDataflowNode
{
    float A;                                                                          // 0x00E8 (size: 0x4)
    float B;                                                                          // 0x00EC (size: 0x4)
    bool bCondition;                                                                  // 0x00F0 (size: 0x1)
    float ReturnValue;                                                                // 0x00F4 (size: 0x4)

}; // Size: 0xF8

struct FBranchIntDataflowNode : public FDataflowNode
{
    int32 A;                                                                          // 0x00E8 (size: 0x4)
    int32 B;                                                                          // 0x00EC (size: 0x4)
    bool bCondition;                                                                  // 0x00F0 (size: 0x1)
    int32 ReturnValue;                                                                // 0x00F4 (size: 0x4)

}; // Size: 0xF8

struct FBranchMeshDataflowNode : public FDataflowNode
{
    class UDynamicMesh* MeshA;                                                        // 0x00E8 (size: 0x8)
    class UDynamicMesh* MeshB;                                                        // 0x00F0 (size: 0x8)
    bool bCondition;                                                                  // 0x00F8 (size: 0x1)
    class UDynamicMesh* Mesh;                                                         // 0x0100 (size: 0x8)

}; // Size: 0x108

struct FCeilDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x00E8 (size: 0x4)
    float ReturnValue;                                                                // 0x00EC (size: 0x4)

}; // Size: 0xF0

struct FClampDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x00E8 (size: 0x4)
    float Min;                                                                        // 0x00EC (size: 0x4)
    float Max;                                                                        // 0x00F0 (size: 0x4)
    float ReturnValue;                                                                // 0x00F4 (size: 0x4)

}; // Size: 0xF8

struct FClearConvexHullsDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0198 (size: 0x20)

}; // Size: 0x1B8

struct FCloseGeometryOnCollectionDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)

}; // Size: 0x198

struct FClusterDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0198 (size: 0x20)

}; // Size: 0x1B8

struct FClusterFlattenDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FDataflowTransformSelection OptionalTransformSelection;                           // 0x0198 (size: 0x20)

}; // Size: 0x1B8

struct FClusterIsolatedRootsDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)

}; // Size: 0x198

struct FClusterMagnetDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0198 (size: 0x20)
    int32 Iterations;                                                                 // 0x01B8 (size: 0x4)

}; // Size: 0x1C0

struct FClusterMergeDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0198 (size: 0x20)

}; // Size: 0x1B8

struct FClusterMergeToNeighborsDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0198 (size: 0x20)
    EClusterNeighborSelectionMethodEnum NeighborSelectionMethod;                      // 0x01B8 (size: 0x1)
    float MinVolumeCubeRoot;                                                          // 0x01BC (size: 0x4)
    bool bOnlyToConnected;                                                            // 0x01C0 (size: 0x1)
    bool bOnlySameParent;                                                             // 0x01C1 (size: 0x1)

}; // Size: 0x1C8

struct FClusterUnclusterDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0198 (size: 0x20)

}; // Size: 0x1B8

struct FCollectionFaceSelectionCustomDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FString FaceIndicies;                                                             // 0x0198 (size: 0x10)
    FDataflowFaceSelection FaceSelection;                                             // 0x01A8 (size: 0x20)

}; // Size: 0x1C8

struct FCollectionFaceSelectionInvertDataflowNode : public FDataflowNode
{
    FDataflowFaceSelection FaceSelection;                                             // 0x00E8 (size: 0x20)

}; // Size: 0x108

struct FCollectionSelectionConvertDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0198 (size: 0x20)
    FDataflowFaceSelection FaceSelection;                                             // 0x01B8 (size: 0x20)
    FDataflowVertexSelection VertexSelection;                                         // 0x01D8 (size: 0x20)
    bool bAllElementsMustBeSelected;                                                  // 0x01F8 (size: 0x1)

}; // Size: 0x200

struct FCollectionSetPivotDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FTransform Transform;                                                             // 0x01A0 (size: 0x60)

}; // Size: 0x200

struct FCollectionToMeshDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    bool bCenterPivot;                                                                // 0x0198 (size: 0x1)
    class UDynamicMesh* Mesh;                                                         // 0x01A0 (size: 0x8)

}; // Size: 0x1A8

struct FCollectionTransformSelectionAllDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0198 (size: 0x20)

}; // Size: 0x1B8

struct FCollectionTransformSelectionByFloatAttrDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FString GroupName;                                                                // 0x0198 (size: 0x10)
    FString AttrName;                                                                 // 0x01A8 (size: 0x10)
    float Min;                                                                        // 0x01B8 (size: 0x4)
    float Max;                                                                        // 0x01BC (size: 0x4)
    ERangeSettingEnum RangeSetting;                                                   // 0x01C0 (size: 0x1)
    bool bInclusive;                                                                  // 0x01C1 (size: 0x1)
    FDataflowTransformSelection TransformSelection;                                   // 0x01C8 (size: 0x20)

}; // Size: 0x1E8

struct FCollectionTransformSelectionByIntAttrDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FString GroupName;                                                                // 0x0198 (size: 0x10)
    FString AttrName;                                                                 // 0x01A8 (size: 0x10)
    int32 Min;                                                                        // 0x01B8 (size: 0x4)
    int32 Max;                                                                        // 0x01BC (size: 0x4)
    ERangeSettingEnum RangeSetting;                                                   // 0x01C0 (size: 0x1)
    bool bInclusive;                                                                  // 0x01C1 (size: 0x1)
    FDataflowTransformSelection TransformSelection;                                   // 0x01C8 (size: 0x20)

}; // Size: 0x1E8

struct FCollectionTransformSelectionByPercentageDataflowNode : public FDataflowNode
{
    FDataflowTransformSelection TransformSelection;                                   // 0x00E8 (size: 0x20)
    int32 Percentage;                                                                 // 0x0108 (size: 0x4)
    bool bDeterministic;                                                              // 0x010C (size: 0x1)
    float RandomSeed;                                                                 // 0x0110 (size: 0x4)

}; // Size: 0x118

struct FCollectionTransformSelectionBySizeDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    float SizeMin;                                                                    // 0x0198 (size: 0x4)
    float SizeMax;                                                                    // 0x019C (size: 0x4)
    ERangeSettingEnum RangeSetting;                                                   // 0x01A0 (size: 0x1)
    bool bInclusive;                                                                  // 0x01A1 (size: 0x1)
    bool bUseRelativeSize;                                                            // 0x01A2 (size: 0x1)
    FDataflowTransformSelection TransformSelection;                                   // 0x01A8 (size: 0x20)

}; // Size: 0x1C8

struct FCollectionTransformSelectionByVolumeDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    float VolumeMin;                                                                  // 0x0198 (size: 0x4)
    float VolumeMax;                                                                  // 0x019C (size: 0x4)
    ERangeSettingEnum RangeSetting;                                                   // 0x01A0 (size: 0x1)
    bool bInclusive;                                                                  // 0x01A1 (size: 0x1)
    FDataflowTransformSelection TransformSelection;                                   // 0x01A8 (size: 0x20)

}; // Size: 0x1C8

struct FCollectionTransformSelectionChildrenDataflowNode : public FDataflowNode
{
    FDataflowTransformSelection TransformSelection;                                   // 0x00E8 (size: 0x20)
    FManagedArrayCollection Collection;                                               // 0x0108 (size: 0xB0)

}; // Size: 0x1B8

struct FCollectionTransformSelectionClusterDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0198 (size: 0x20)

}; // Size: 0x1B8

struct FCollectionTransformSelectionContactDataflowNode : public FDataflowNode
{
    FDataflowTransformSelection TransformSelection;                                   // 0x00E8 (size: 0x20)
    FManagedArrayCollection Collection;                                               // 0x0108 (size: 0xB0)

}; // Size: 0x1B8

struct FCollectionTransformSelectionCustomDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FString BoneIndicies;                                                             // 0x0198 (size: 0x10)
    FDataflowTransformSelection TransformSelection;                                   // 0x01A8 (size: 0x20)

}; // Size: 0x1C8

struct FCollectionTransformSelectionFromIndexArrayDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    TArray<int32> BoneIndices;                                                        // 0x0198 (size: 0x10)
    FDataflowTransformSelection TransformSelection;                                   // 0x01A8 (size: 0x20)

}; // Size: 0x1C8

struct FCollectionTransformSelectionInBoxDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FBox Box;                                                                         // 0x0198 (size: 0x38)
    FTransform Transform;                                                             // 0x01D0 (size: 0x60)
    ESelectSubjectTypeEnum Type;                                                      // 0x0230 (size: 0x1)
    bool bAllVerticesMustContainedInBox;                                              // 0x0231 (size: 0x1)
    FDataflowTransformSelection TransformSelection;                                   // 0x0238 (size: 0x20)

}; // Size: 0x260

struct FCollectionTransformSelectionInSphereDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FSphere Sphere;                                                                   // 0x0198 (size: 0x20)
    FTransform Transform;                                                             // 0x01C0 (size: 0x60)
    ESelectSubjectTypeEnum Type;                                                      // 0x0220 (size: 0x1)
    bool bAllVerticesMustContainedInSphere;                                           // 0x0221 (size: 0x1)
    FDataflowTransformSelection TransformSelection;                                   // 0x0228 (size: 0x20)

}; // Size: 0x250

struct FCollectionTransformSelectionInfoDataflowNode : public FDataflowNode
{
    FDataflowTransformSelection TransformSelection;                                   // 0x00E8 (size: 0x20)
    FManagedArrayCollection Collection;                                               // 0x0108 (size: 0xB0)
    FString String;                                                                   // 0x01B8 (size: 0x10)

}; // Size: 0x1C8

struct FCollectionTransformSelectionInvertDataflowNode : public FDataflowNode
{
    FDataflowTransformSelection TransformSelection;                                   // 0x00E8 (size: 0x20)

}; // Size: 0x108

struct FCollectionTransformSelectionLeafDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0198 (size: 0x20)

}; // Size: 0x1B8

struct FCollectionTransformSelectionLevelDataflowNode : public FDataflowNode
{
    FDataflowTransformSelection TransformSelection;                                   // 0x00E8 (size: 0x20)
    FManagedArrayCollection Collection;                                               // 0x0108 (size: 0xB0)

}; // Size: 0x1B8

struct FCollectionTransformSelectionNoneDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0198 (size: 0x20)

}; // Size: 0x1B8

struct FCollectionTransformSelectionParentDataflowNode : public FDataflowNode
{
    FDataflowTransformSelection TransformSelection;                                   // 0x00E8 (size: 0x20)
    FManagedArrayCollection Collection;                                               // 0x0108 (size: 0xB0)

}; // Size: 0x1B8

struct FCollectionTransformSelectionRandomDataflowNode : public FDataflowNode
{
    bool bDeterministic;                                                              // 0x00E8 (size: 0x1)
    float RandomSeed;                                                                 // 0x00EC (size: 0x4)
    float RandomThreshold;                                                            // 0x00F0 (size: 0x4)
    FManagedArrayCollection Collection;                                               // 0x00F8 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x01A8 (size: 0x20)

}; // Size: 0x1C8

struct FCollectionTransformSelectionRootDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0198 (size: 0x20)

}; // Size: 0x1B8

struct FCollectionTransformSelectionSetOperationDataflowNode : public FDataflowNode
{
    ESetOperationEnum Operation;                                                      // 0x00E8 (size: 0x1)
    FDataflowTransformSelection TransformSelectionA;                                  // 0x00F0 (size: 0x20)
    FDataflowTransformSelection TransformSelectionB;                                  // 0x0110 (size: 0x20)
    FDataflowTransformSelection TransformSelection;                                   // 0x0130 (size: 0x20)

}; // Size: 0x150

struct FCollectionTransformSelectionSiblingsDataflowNode : public FDataflowNode
{
    FDataflowTransformSelection TransformSelection;                                   // 0x00E8 (size: 0x20)
    FManagedArrayCollection Collection;                                               // 0x0108 (size: 0xB0)

}; // Size: 0x1B8

struct FCollectionTransformSelectionTargetLevelDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    int32 TargetLevel;                                                                // 0x0198 (size: 0x4)
    bool bSkipEmbedded;                                                               // 0x019C (size: 0x1)
    FDataflowTransformSelection TransformSelection;                                   // 0x01A0 (size: 0x20)

}; // Size: 0x1C0

struct FCollectionVertexSelectionByPercentageDataflowNode : public FDataflowNode
{
    FDataflowVertexSelection VertexSelection;                                         // 0x00E8 (size: 0x20)
    int32 Percentage;                                                                 // 0x0108 (size: 0x4)
    bool bDeterministic;                                                              // 0x010C (size: 0x1)
    float RandomSeed;                                                                 // 0x0110 (size: 0x4)

}; // Size: 0x118

struct FCollectionVertexSelectionCustomDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FString VertexIndicies;                                                           // 0x0198 (size: 0x10)
    FDataflowVertexSelection VertexSelection;                                         // 0x01A8 (size: 0x20)

}; // Size: 0x1C8

struct FCollectionVertexSelectionSetOperationDataflowNode : public FDataflowNode
{
    ESetOperationEnum Operation;                                                      // 0x00E8 (size: 0x1)
    FDataflowVertexSelection VertexSelectionA;                                        // 0x00F0 (size: 0x20)
    FDataflowVertexSelection VertexSelectionB;                                        // 0x0110 (size: 0x20)
    FDataflowVertexSelection VertexSelection;                                         // 0x0130 (size: 0x20)

}; // Size: 0x150

struct FCompareFloatDataflowNode : public FDataflowNode
{
    ECompareOperationEnum Operation;                                                  // 0x00E8 (size: 0x1)
    float FloatA;                                                                     // 0x00EC (size: 0x4)
    float FloatB;                                                                     // 0x00F0 (size: 0x4)
    bool Result;                                                                      // 0x00F4 (size: 0x1)

}; // Size: 0xF8

struct FCompareIntDataflowNode : public FDataflowNode
{
    ECompareOperationEnum Operation;                                                  // 0x00E8 (size: 0x1)
    int32 IntA;                                                                       // 0x00EC (size: 0x4)
    int32 IntB;                                                                       // 0x00F0 (size: 0x4)
    bool Result;                                                                      // 0x00F4 (size: 0x1)

}; // Size: 0xF8

struct FConvexHullToMeshDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FDataflowTransformSelection OptionalSelectionFilter;                              // 0x0198 (size: 0x20)
    class UDynamicMesh* Mesh;                                                         // 0x01B8 (size: 0x8)

}; // Size: 0x1C0

struct FCosDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x00E8 (size: 0x4)
    float ReturnValue;                                                                // 0x00EC (size: 0x4)

}; // Size: 0xF0

struct FCreateGeometryCollectionFromSourcesDataflowNode : public FDataflowNode
{
    TArray<FGeometryCollectionSource> Sources;                                        // 0x00E8 (size: 0x10)
    FManagedArrayCollection Collection;                                               // 0x00F8 (size: 0xB0)
    TArray<class UMaterial*> Materials;                                               // 0x01A8 (size: 0x10)
    TArray<FGeometryCollectionAutoInstanceMesh> InstancedMeshes;                      // 0x01B8 (size: 0x10)

}; // Size: 0x1C8

struct FCreateLeafConvexHullsDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FDataflowTransformSelection OptionalSelectionFilter;                              // 0x0198 (size: 0x20)
    EGenerateConvexMethod GenerateMethod;                                             // 0x01B8 (size: 0x1)
    float IntersectIfComputedIsSmallerByFactor;                                       // 0x01BC (size: 0x4)
    float MinExternalVolumeToIntersect;                                               // 0x01C0 (size: 0x4)
    bool bComputeIntersectionsBeforeHull;                                             // 0x01C4 (size: 0x1)
    float SimplificationDistanceThreshold;                                            // 0x01C8 (size: 0x4)
    FDataflowConvexDecompositionSettings ConvexDecompositionSettings;                 // 0x01CC (size: 0x18)

}; // Size: 0x1E8

struct FCreateNonOverlappingConvexHullsDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    float CanExceedFraction;                                                          // 0x0198 (size: 0x4)
    float SimplificationDistanceThreshold;                                            // 0x019C (size: 0x4)
    EConvexOverlapRemovalMethodEnum OverlapRemovalMethod;                             // 0x01A0 (size: 0x1)
    float OverlapRemovalShrinkPercent;                                                // 0x01A4 (size: 0x4)
    float CanRemoveFraction;                                                          // 0x01A8 (size: 0x4)

}; // Size: 0x1B0

struct FCrossProductDataflowNode : public FDataflowNode
{
    FVector VectorA;                                                                  // 0x00E8 (size: 0x18)
    FVector VectorB;                                                                  // 0x0100 (size: 0x18)
    FVector ReturnValue;                                                              // 0x0118 (size: 0x18)

}; // Size: 0x130

struct FCubeDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x00E8 (size: 0x4)
    float ReturnValue;                                                                // 0x00EC (size: 0x4)

}; // Size: 0xF0

struct FDataflowConvexDecompositionSettings
{
    float MinSizeToDecompose;                                                         // 0x0000 (size: 0x4)
    float MaxGeoToHullVolumeRatioToDecompose;                                         // 0x0004 (size: 0x4)
    float ErrorTolerance;                                                             // 0x0008 (size: 0x4)
    int32 MaxHullsPerGeometry;                                                        // 0x000C (size: 0x4)
    float MinThicknessTolerance;                                                      // 0x0010 (size: 0x4)
    int32 NumAdditionalSplits;                                                        // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FDataflowSphereCovering
{
}; // Size: 0x20

struct FDegreesToRadiansDataflowNode : public FDataflowNode
{
    float Degrees;                                                                    // 0x00E8 (size: 0x4)
    float Radians;                                                                    // 0x00EC (size: 0x4)

}; // Size: 0xF0

struct FDistanceDataflowNode : public FDataflowNode
{
    FVector PointA;                                                                   // 0x00E8 (size: 0x18)
    FVector PointB;                                                                   // 0x0100 (size: 0x18)
    float ReturnValue;                                                                // 0x0118 (size: 0x4)

}; // Size: 0x120

struct FDivideDataflowNode : public FSafeDivideDataflowNode
{
}; // Size: 0xF8

struct FDivisionDataflowNode : public FDataflowNode
{
    float Dividend;                                                                   // 0x00E8 (size: 0x4)
    float Divisor;                                                                    // 0x00EC (size: 0x4)
    float Remainder;                                                                  // 0x00F0 (size: 0x4)
    int32 ReturnValue;                                                                // 0x00F4 (size: 0x4)

}; // Size: 0xF8

struct FDotProductDataflowNode : public FDataflowNode
{
    FVector VectorA;                                                                  // 0x00E8 (size: 0x18)
    FVector VectorB;                                                                  // 0x0100 (size: 0x18)
    float ReturnValue;                                                                // 0x0118 (size: 0x4)

}; // Size: 0x120

struct FEFitDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x00E8 (size: 0x4)
    float OldMin;                                                                     // 0x00EC (size: 0x4)
    float OldMax;                                                                     // 0x00F0 (size: 0x4)
    float NewMin;                                                                     // 0x00F4 (size: 0x4)
    float NewMax;                                                                     // 0x00F8 (size: 0x4)
    float ReturnValue;                                                                // 0x00FC (size: 0x4)

}; // Size: 0x100

struct FExpDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x00E8 (size: 0x4)
    float ReturnValue;                                                                // 0x00EC (size: 0x4)

}; // Size: 0xF0

struct FExpandBoundingBoxDataflowNode : public FDataflowNode
{
    FBox BoundingBox;                                                                 // 0x00E8 (size: 0x38)
    FVector Min;                                                                      // 0x0120 (size: 0x18)
    FVector Max;                                                                      // 0x0138 (size: 0x18)
    FVector Center;                                                                   // 0x0150 (size: 0x18)
    FVector HalfExtents;                                                              // 0x0168 (size: 0x18)
    float Volume;                                                                     // 0x0180 (size: 0x4)

}; // Size: 0x188

struct FExpandVectorDataflowNode : public FDataflowNode
{
    FVector Vector;                                                                   // 0x00E8 (size: 0x18)
    float X;                                                                          // 0x0100 (size: 0x4)
    float Y;                                                                          // 0x0104 (size: 0x4)
    float Z;                                                                          // 0x0108 (size: 0x4)

}; // Size: 0x110

struct FExplodedViewDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    float UniformScale;                                                               // 0x0198 (size: 0x4)
    FVector Scale;                                                                    // 0x01A0 (size: 0x18)

}; // Size: 0x1B8

struct FFieldMakeDenseFloatArrayDataflowNode : public FDataflowNode
{
    TArray<float> FieldFloatInput;                                                    // 0x00E8 (size: 0x10)
    TArray<int32> FieldRemap;                                                         // 0x00F8 (size: 0x10)
    int32 NumSamplePositions;                                                         // 0x0108 (size: 0x4)
    float Default;                                                                    // 0x010C (size: 0x4)
    TArray<float> FieldFloatResult;                                                   // 0x0110 (size: 0x10)

}; // Size: 0x120

struct FFitDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x00E8 (size: 0x4)
    float OldMin;                                                                     // 0x00EC (size: 0x4)
    float OldMax;                                                                     // 0x00F0 (size: 0x4)
    float NewMin;                                                                     // 0x00F4 (size: 0x4)
    float NewMax;                                                                     // 0x00F8 (size: 0x4)
    float ReturnValue;                                                                // 0x00FC (size: 0x4)

}; // Size: 0x100

struct FFloatArrayComputeStatisticsDataflowNode : public FDataflowNode
{
    TArray<float> FloatArray;                                                         // 0x00E8 (size: 0x10)
    FDataflowTransformSelection TransformSelection;                                   // 0x00F8 (size: 0x20)
    EStatisticsOperationEnum OperationName;                                           // 0x0118 (size: 0x1)
    float Value;                                                                      // 0x011C (size: 0x4)
    TArray<int32> Indices;                                                            // 0x0120 (size: 0x10)

}; // Size: 0x130

struct FFloatArrayNormalizeDataflowNode : public FDataflowNode
{
    TArray<float> InFloatArray;                                                       // 0x00E8 (size: 0x10)
    FDataflowVertexSelection selection;                                               // 0x00F8 (size: 0x20)
    float MinRange;                                                                   // 0x0118 (size: 0x4)
    float MaxRange;                                                                   // 0x011C (size: 0x4)
    TArray<float> OutFloatArray;                                                      // 0x0120 (size: 0x10)

}; // Size: 0x130

struct FFloatArrayToIntArrayDataflowNode : public FDataflowNode
{
    EFloatArrayToIntArrayFunctionEnum Function;                                       // 0x00E8 (size: 0x1)
    TArray<float> FloatArray;                                                         // 0x00F0 (size: 0x10)
    TArray<int32> IntArray;                                                           // 0x0100 (size: 0x10)

}; // Size: 0x110

struct FFloatArrayToVertexSelectionDataflowNode : public FDataflowNode
{
    TArray<float> FloatArray;                                                         // 0x00E8 (size: 0x10)
    ECompareOperation1Enum Operation;                                                 // 0x00F8 (size: 0x1)
    float Threshold;                                                                  // 0x00FC (size: 0x4)
    FDataflowVertexSelection VertexSelection;                                         // 0x0100 (size: 0x20)

}; // Size: 0x120

struct FFloatToDoubleDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x00E8 (size: 0x4)
    double Double;                                                                    // 0x00F0 (size: 0x8)

}; // Size: 0xF8

struct FFloatToIntDataflowNode : public FDataflowNode
{
    EFloatToIntFunctionEnum Function;                                                 // 0x00E8 (size: 0x1)
    float float;                                                                      // 0x00EC (size: 0x4)
    int32 Int;                                                                        // 0x00F0 (size: 0x4)

}; // Size: 0xF8

struct FFloatToStringDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x00E8 (size: 0x4)
    FString String;                                                                   // 0x00F0 (size: 0x10)

}; // Size: 0x100

struct FFloorDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x00E8 (size: 0x4)
    float ReturnValue;                                                                // 0x00EC (size: 0x4)

}; // Size: 0xF0

struct FFracDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x00E8 (size: 0x4)
    float ReturnValue;                                                                // 0x00EC (size: 0x4)

}; // Size: 0xF0

struct FGenerateClusterConvexHullsFromChildrenHullsDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FDataflowSphereCovering SphereCovering;                                           // 0x0198 (size: 0x20)
    int32 ConvexCount;                                                                // 0x01B8 (size: 0x4)
    double ErrorTolerance;                                                            // 0x01C0 (size: 0x8)
    bool bPreferExternalCollisionShapes;                                              // 0x01C8 (size: 0x1)
    FDataflowTransformSelection OptionalSelectionFilter;                              // 0x01D0 (size: 0x20)
    bool bProtectNegativeSpace;                                                       // 0x01F0 (size: 0x1)
    ENegativeSpaceSampleMethodDataflowEnum SampleMethod;                              // 0x01F1 (size: 0x1)
    bool bRequireSearchSampleCoverage;                                                // 0x01F2 (size: 0x1)
    bool bOnlyConnectedToHull;                                                        // 0x01F3 (size: 0x1)
    int32 TargetNumSamples;                                                           // 0x01F4 (size: 0x4)
    double MinSampleSpacing;                                                          // 0x01F8 (size: 0x8)
    double NegativeSpaceTolerance;                                                    // 0x0200 (size: 0x8)
    double MinRadius;                                                                 // 0x0208 (size: 0x8)

}; // Size: 0x210

struct FGenerateClusterConvexHullsFromLeafHullsDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FDataflowSphereCovering SphereCovering;                                           // 0x0198 (size: 0x20)
    int32 ConvexCount;                                                                // 0x01B8 (size: 0x4)
    double ErrorTolerance;                                                            // 0x01C0 (size: 0x8)
    bool bPreferExternalCollisionShapes;                                              // 0x01C8 (size: 0x1)
    EAllowConvexMergeMethod AllowMerges;                                              // 0x01C9 (size: 0x1)
    FDataflowTransformSelection OptionalSelectionFilter;                              // 0x01D0 (size: 0x20)
    bool bProtectNegativeSpace;                                                       // 0x01F0 (size: 0x1)
    ENegativeSpaceSampleMethodDataflowEnum SampleMethod;                              // 0x01F1 (size: 0x1)
    bool bRequireSearchSampleCoverage;                                                // 0x01F2 (size: 0x1)
    bool bOnlyConnectedToHull;                                                        // 0x01F3 (size: 0x1)
    int32 TargetNumSamples;                                                           // 0x01F4 (size: 0x4)
    double MinSampleSpacing;                                                          // 0x01F8 (size: 0x8)
    double NegativeSpaceTolerance;                                                    // 0x0200 (size: 0x8)
    double MinRadius;                                                                 // 0x0208 (size: 0x8)

}; // Size: 0x210

struct FGeometryCollectionTerminalDataflowNode : public FDataflowTerminalNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    TArray<class UMaterial*> Materials;                                               // 0x0198 (size: 0x10)
    TArray<FGeometryCollectionAutoInstanceMesh> InstancedMeshes;                      // 0x01A8 (size: 0x10)

}; // Size: 0x1B8

struct FGeometryCollectionVertexScalarToVertexIndicesNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FString VertexAttributeName;                                                      // 0x0198 (size: 0x10)
    float SelectionThreshold;                                                         // 0x01A8 (size: 0x4)
    TArray<int32> Indices;                                                            // 0x01B0 (size: 0x10)

}; // Size: 0x1C0

struct FGetArrayElementDataflowNode : public FDataflowNode
{
    int32 Index;                                                                      // 0x00E8 (size: 0x4)
    TArray<FVector> Points;                                                           // 0x00F0 (size: 0x10)
    FVector Point;                                                                    // 0x0100 (size: 0x18)

}; // Size: 0x118

struct FGetBoolOverrideFromAssetDataflowNode : public FDataflowOverrideNode
{
    bool bool;                                                                        // 0x0108 (size: 0x1)
    bool BoolDefault;                                                                 // 0x0109 (size: 0x1)

}; // Size: 0x110

struct FGetBoundingBoxesFromCollectionDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0198 (size: 0x20)
    TArray<FBox> BoundingBoxes;                                                       // 0x01B8 (size: 0x10)

}; // Size: 0x1C8

struct FGetBoxLengthsDataflowNode : public FDataflowNode
{
    TArray<FBox> Boxes;                                                               // 0x00E8 (size: 0x10)
    TArray<float> Lengths;                                                            // 0x00F8 (size: 0x10)
    EBoxLengthMeasurementMethod MeasurementMethod;                                    // 0x0108 (size: 0x1)

}; // Size: 0x110

struct FGetCentroidsFromCollectionDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0198 (size: 0x20)
    TArray<FVector> Centroids;                                                        // 0x01B8 (size: 0x10)

}; // Size: 0x1C8

struct FGetCollectionAttributeDataTypedDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    EStandardGroupNameEnum GroupName;                                                 // 0x0198 (size: 0x1)
    FString CustomGroupName;                                                          // 0x01A0 (size: 0x10)
    FString AttrName;                                                                 // 0x01B0 (size: 0x10)
    TArray<bool> BoolAttributeData;                                                   // 0x01C0 (size: 0x10)
    TArray<float> FloatAttributeData;                                                 // 0x01D0 (size: 0x10)
    TArray<double> DoubleAttributeData;                                               // 0x01E0 (size: 0x10)
    TArray<int32> Int32AttributeData;                                                 // 0x01F0 (size: 0x10)
    TArray<FString> StringAttributeData;                                              // 0x0200 (size: 0x10)
    TArray<FVector3f> Vector3fAttributeData;                                          // 0x0210 (size: 0x10)
    TArray<FVector3d> Vector3dAttributeData;                                          // 0x0220 (size: 0x10)

}; // Size: 0x230

struct FGetCollectionFromAssetDataflowNode : public FDataflowNode
{
    class UGeometryCollection* CollectionAsset;                                       // 0x00E8 (size: 0x8)
    FManagedArrayCollection Collection;                                               // 0x00F0 (size: 0xB0)

}; // Size: 0x1A0

struct FGetConvexHullVolumeDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0198 (size: 0x20)
    float Volume;                                                                     // 0x01B8 (size: 0x4)
    bool bSumChildrenForClustersWithoutHulls;                                         // 0x01BC (size: 0x1)
    bool bVolumeOfUnion;                                                              // 0x01BD (size: 0x1)

}; // Size: 0x1C0

struct FGetFloatArrayElementDataflowNode : public FDataflowNode
{
    int32 Index;                                                                      // 0x00E8 (size: 0x4)
    TArray<float> FloatArray;                                                         // 0x00F0 (size: 0x10)
    float FloatValue;                                                                 // 0x0100 (size: 0x4)

}; // Size: 0x108

struct FGetFloatOverrideFromAssetDataflowNode : public FDataflowOverrideNode
{
    float float;                                                                      // 0x0108 (size: 0x4)
    float FloatDefault;                                                               // 0x010C (size: 0x4)

}; // Size: 0x110

struct FGetGeometryCollectionAssetDataflowNode : public FDataflowNode
{
    class UGeometryCollection* Asset;                                                 // 0x00E8 (size: 0x8)

}; // Size: 0xF0

struct FGetGeometryCollectionSourcesDataflowNode : public FDataflowNode
{
    class UGeometryCollection* Asset;                                                 // 0x00E8 (size: 0x8)
    TArray<FGeometryCollectionSource> Sources;                                        // 0x00F0 (size: 0x10)

}; // Size: 0x100

struct FGetIntOverrideFromAssetDataflowNode : public FDataflowOverrideNode
{
    int32 Int;                                                                        // 0x0108 (size: 0x4)
    int32 IntDefault;                                                                 // 0x010C (size: 0x4)

}; // Size: 0x110

struct FGetMaterialFromMaterialsArrayDataflowNode : public FDataflowNode
{
    TArray<class UMaterial*> Materials;                                               // 0x00E8 (size: 0x10)
    class UMaterial* Material;                                                        // 0x00F8 (size: 0x8)
    int32 MaterialIdx;                                                                // 0x0100 (size: 0x4)

}; // Size: 0x108

struct FGetMeshDataDataflowNode : public FDataflowNode
{
    class UDynamicMesh* Mesh;                                                         // 0x00E8 (size: 0x8)
    int32 VertexCount;                                                                // 0x00F0 (size: 0x4)
    int32 EdgeCount;                                                                  // 0x00F4 (size: 0x4)
    int32 TriangleCount;                                                              // 0x00F8 (size: 0x4)

}; // Size: 0x100

struct FGetNumArrayElementsDataflowNode : public FDataflowNode
{
    TArray<float> FloatArray;                                                         // 0x00E8 (size: 0x10)
    TArray<int32> IntArray;                                                           // 0x00F8 (size: 0x10)
    TArray<FVector> Points;                                                           // 0x0108 (size: 0x10)
    TArray<FVector3f> Vector3fArray;                                                  // 0x0118 (size: 0x10)
    int32 NumElements;                                                                // 0x0128 (size: 0x4)

}; // Size: 0x130

struct FGetNumElementsInCollectionGroupDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    EStandardGroupNameEnum GroupName;                                                 // 0x0198 (size: 0x1)
    FString CustomGroupName;                                                          // 0x01A0 (size: 0x10)
    int32 NumElements;                                                                // 0x01B0 (size: 0x4)

}; // Size: 0x1B8

struct FGetRootIndexFromCollectionDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    int32 RootIndex;                                                                  // 0x0198 (size: 0x4)

}; // Size: 0x1A0

struct FGetSchemaDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FString String;                                                                   // 0x0198 (size: 0x10)

}; // Size: 0x1A8

struct FGetStringOverrideFromAssetDataflowNode : public FDataflowOverrideNode
{
    FString String;                                                                   // 0x0108 (size: 0x10)
    FString StringDefault;                                                            // 0x0118 (size: 0x10)

}; // Size: 0x128

struct FHashStringDataflowNode : public FDataflowNode
{
    FString String;                                                                   // 0x00E8 (size: 0x10)
    int32 Hash;                                                                       // 0x00F8 (size: 0x4)

}; // Size: 0x100

struct FHashVectorDataflowNode : public FDataflowNode
{
    FVector Vector;                                                                   // 0x00E8 (size: 0x18)
    int32 Hash;                                                                       // 0x0100 (size: 0x4)

}; // Size: 0x108

struct FIntToBoolDataflowNode : public FDataflowNode
{
    int32 Int;                                                                        // 0x00E8 (size: 0x4)
    bool bool;                                                                        // 0x00EC (size: 0x1)

}; // Size: 0xF0

struct FIntToDoubleDataflowNode : public FDataflowNode
{
    int32 Int;                                                                        // 0x00E8 (size: 0x4)
    double Double;                                                                    // 0x00F0 (size: 0x8)

}; // Size: 0xF8

struct FIntToFloatDataflowNode : public FDataflowNode
{
    int32 Int;                                                                        // 0x00E8 (size: 0x4)
    float float;                                                                      // 0x00EC (size: 0x4)

}; // Size: 0xF0

struct FIntToStringDataflowNode : public FDataflowNode
{
    int32 Int;                                                                        // 0x00E8 (size: 0x4)
    FString String;                                                                   // 0x00F0 (size: 0x10)

}; // Size: 0x100

struct FInverseSqrtDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x00E8 (size: 0x4)
    float ReturnValue;                                                                // 0x00EC (size: 0x4)

}; // Size: 0xF0

struct FInvertTransformDataflowNode : public FDataflowNode
{
    FTransform InTransform;                                                           // 0x00F0 (size: 0x60)
    FTransform OutTransform;                                                          // 0x0150 (size: 0x60)

}; // Size: 0x1B0

struct FIsNearlyZeroDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x00E8 (size: 0x4)
    bool ReturnValue;                                                                 // 0x00EC (size: 0x1)

}; // Size: 0xF0

struct FLengthDataflowNode : public FDataflowNode
{
    FVector Vector;                                                                   // 0x00E8 (size: 0x18)
    float ReturnValue;                                                                // 0x0100 (size: 0x4)

}; // Size: 0x108

struct FLerpDataflowNode : public FDataflowNode
{
    float A;                                                                          // 0x00E8 (size: 0x4)
    float B;                                                                          // 0x00EC (size: 0x4)
    float Alpha;                                                                      // 0x00F0 (size: 0x4)
    float ReturnValue;                                                                // 0x00F4 (size: 0x4)

}; // Size: 0xF8

struct FLogDataflowNode : public FDataflowNode
{
    float base;                                                                       // 0x00E8 (size: 0x4)
    float A;                                                                          // 0x00EC (size: 0x4)
    float ReturnValue;                                                                // 0x00F0 (size: 0x4)

}; // Size: 0xF8

struct FLogStringDataflowNode : public FDataflowNode
{
    bool bPrintToLog;                                                                 // 0x00E8 (size: 0x1)
    FString String;                                                                   // 0x00F0 (size: 0x10)

}; // Size: 0x100

struct FLogeDataflowNode : public FDataflowNode
{
    float A;                                                                          // 0x00E8 (size: 0x4)
    float ReturnValue;                                                                // 0x00EC (size: 0x4)

}; // Size: 0xF0

struct FMakeBoxDataflowNode : public FDataflowNode
{
    EMakeBoxDataTypeEnum DataType;                                                    // 0x00E8 (size: 0x1)
    FVector Min;                                                                      // 0x00F0 (size: 0x18)
    FVector Max;                                                                      // 0x0108 (size: 0x18)
    FVector Center;                                                                   // 0x0120 (size: 0x18)
    FVector Size;                                                                     // 0x0138 (size: 0x18)
    FBox Box;                                                                         // 0x0150 (size: 0x38)

}; // Size: 0x188

struct FMakeDataflowConvexDecompositionSettingsNode : public FDataflowNode
{
    float MinSizeToDecompose;                                                         // 0x00E8 (size: 0x4)
    float MaxGeoToHullVolumeRatioToDecompose;                                         // 0x00EC (size: 0x4)
    float ErrorTolerance;                                                             // 0x00F0 (size: 0x4)
    int32 MaxHullsPerGeometry;                                                        // 0x00F4 (size: 0x4)
    float MinThicknessTolerance;                                                      // 0x00F8 (size: 0x4)
    int32 NumAdditionalSplits;                                                        // 0x00FC (size: 0x4)
    FDataflowConvexDecompositionSettings DecompositionSettings;                       // 0x0100 (size: 0x18)

}; // Size: 0x118

struct FMakeLiteralBoolDataflowNode : public FDataflowNode
{
    bool Value;                                                                       // 0x00E8 (size: 0x1)
    bool bool;                                                                        // 0x00E9 (size: 0x1)

}; // Size: 0xF0

struct FMakeLiteralFloatDataflowNode : public FDataflowNode
{
    float Value;                                                                      // 0x00E8 (size: 0x4)
    float float;                                                                      // 0x00EC (size: 0x4)

}; // Size: 0xF0

struct FMakeLiteralIntDataflowNode : public FDataflowNode
{
    int32 Value;                                                                      // 0x00E8 (size: 0x4)
    int32 Int;                                                                        // 0x00EC (size: 0x4)

}; // Size: 0xF0

struct FMakeLiteralStringDataflowNode : public FDataflowNode
{
    FString Value;                                                                    // 0x00E8 (size: 0x10)
    FString String;                                                                   // 0x00F8 (size: 0x10)

}; // Size: 0x108

struct FMakeLiteralVectorDataflowNode : public FDataflowNode
{
    float X;                                                                          // 0x00E8 (size: 0x4)
    float Y;                                                                          // 0x00EC (size: 0x4)
    float Z;                                                                          // 0x00F0 (size: 0x4)
    FVector Vector;                                                                   // 0x00F8 (size: 0x18)

}; // Size: 0x110

struct FMakeMaterialDataflowNode : public FDataflowNode
{
    class UMaterial* InMaterial;                                                      // 0x00E8 (size: 0x8)
    class UMaterial* Material;                                                        // 0x00F0 (size: 0x8)

}; // Size: 0xF8

struct FMakeMaterialsArrayDataflowNode : public FDataflowNode
{
    TArray<class UMaterial*> Materials;                                               // 0x00E8 (size: 0x10)

}; // Size: 0xF8

struct FMakePointsDataflowNode : public FDataflowNode
{
    TArray<FVector> Point;                                                            // 0x00E8 (size: 0x10)
    TArray<FVector> Points;                                                           // 0x00F8 (size: 0x10)

}; // Size: 0x108

struct FMakeQuaternionDataflowNode : public FDataflowNode
{
    float X;                                                                          // 0x00E8 (size: 0x4)
    float Y;                                                                          // 0x00EC (size: 0x4)
    float Z;                                                                          // 0x00F0 (size: 0x4)
    float W;                                                                          // 0x00F4 (size: 0x4)
    FQuat Quaternion;                                                                 // 0x0100 (size: 0x20)

}; // Size: 0x120

struct FMakeSphereDataflowNode : public FDataflowNode
{
    FVector Center;                                                                   // 0x00E8 (size: 0x18)
    float Radius;                                                                     // 0x0100 (size: 0x4)
    FSphere Sphere;                                                                   // 0x0108 (size: 0x20)

}; // Size: 0x128

struct FMakeTransformDataflowNode : public FDataflowNode
{
    FVector InTranslation;                                                            // 0x00E8 (size: 0x18)
    FVector InRotation;                                                               // 0x0100 (size: 0x18)
    FVector InScale;                                                                  // 0x0118 (size: 0x18)
    FTransform OutTransform;                                                          // 0x0130 (size: 0x60)

}; // Size: 0x190

struct FMaterialsInfoDataflowNode : public FDataflowNode
{
    TArray<class UMaterial*> Materials;                                               // 0x00E8 (size: 0x10)
    FString String;                                                                   // 0x00F8 (size: 0x10)

}; // Size: 0x108

struct FMathConstantsDataflowNode : public FDataflowNode
{
    EMathConstantsEnum Constant;                                                      // 0x00E8 (size: 0x1)
    float ReturnValue;                                                                // 0x00EC (size: 0x4)

}; // Size: 0xF0

struct FMax3DataflowNode : public FDataflowNode
{
    float FloatA;                                                                     // 0x00E8 (size: 0x4)
    float FloatB;                                                                     // 0x00EC (size: 0x4)
    float FloatC;                                                                     // 0x00F0 (size: 0x4)
    float ReturnValue;                                                                // 0x00F4 (size: 0x4)

}; // Size: 0xF8

struct FMaxDataflowNode : public FDataflowNode
{
    float FloatA;                                                                     // 0x00E8 (size: 0x4)
    float FloatB;                                                                     // 0x00EC (size: 0x4)
    float ReturnValue;                                                                // 0x00F0 (size: 0x4)

}; // Size: 0xF8

struct FMergeConvexHullsDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FDataflowSphereCovering SphereCovering;                                           // 0x0198 (size: 0x20)
    int32 MaxConvexCount;                                                             // 0x01B8 (size: 0x4)
    double ErrorTolerance;                                                            // 0x01C0 (size: 0x8)
    FDataflowTransformSelection OptionalSelectionFilter;                              // 0x01C8 (size: 0x20)
    bool bProtectNegativeSpace;                                                       // 0x01E8 (size: 0x1)
    bool bComputeNegativeSpacePerBone;                                                // 0x01E9 (size: 0x1)
    ENegativeSpaceSampleMethodDataflowEnum SampleMethod;                              // 0x01EA (size: 0x1)
    bool bRequireSearchSampleCoverage;                                                // 0x01EB (size: 0x1)
    bool bOnlyConnectedToHull;                                                        // 0x01EC (size: 0x1)
    int32 TargetNumSamples;                                                           // 0x01F0 (size: 0x4)
    double MinSampleSpacing;                                                          // 0x01F8 (size: 0x8)
    double NegativeSpaceTolerance;                                                    // 0x0200 (size: 0x8)
    double MinRadius;                                                                 // 0x0208 (size: 0x8)

}; // Size: 0x210

struct FMergeInCollectionDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0198 (size: 0x20)

}; // Size: 0x1B8

struct FMeshAppendDataflowNode : public FDataflowNode
{
    class UDynamicMesh* Mesh1;                                                        // 0x00E8 (size: 0x8)
    class UDynamicMesh* Mesh2;                                                        // 0x00F0 (size: 0x8)
    class UDynamicMesh* Mesh;                                                         // 0x00F8 (size: 0x8)

}; // Size: 0x100

struct FMeshBooleanDataflowNode : public FDataflowNode
{
    EMeshBooleanOperationEnum Operation;                                              // 0x00E8 (size: 0x1)
    class UDynamicMesh* Mesh1;                                                        // 0x00F0 (size: 0x8)
    class UDynamicMesh* Mesh2;                                                        // 0x00F8 (size: 0x8)
    class UDynamicMesh* Mesh;                                                         // 0x0100 (size: 0x8)

}; // Size: 0x108

struct FMeshCopyToPointsDataflowNode : public FDataflowNode
{
    TArray<FVector> Points;                                                           // 0x00E8 (size: 0x10)
    class UDynamicMesh* MeshToCopy;                                                   // 0x00F8 (size: 0x8)
    float Scale;                                                                      // 0x0100 (size: 0x4)
    class UDynamicMesh* Mesh;                                                         // 0x0108 (size: 0x8)

}; // Size: 0x110

struct FMeshInfoDataflowNode : public FDataflowNode
{
    class UDynamicMesh* Mesh;                                                         // 0x00E8 (size: 0x8)
    FString InfoString;                                                               // 0x00F0 (size: 0x10)

}; // Size: 0x100

struct FMeshToCollectionDataflowNode : public FDataflowNode
{
    class UDynamicMesh* Mesh;                                                         // 0x00E8 (size: 0x8)
    FManagedArrayCollection Collection;                                               // 0x00F0 (size: 0xB0)

}; // Size: 0x1A0

struct FMeshToOBJStringDebugDataflowNode : public FDataflowNode
{
    class UDynamicMesh* Mesh;                                                         // 0x00E8 (size: 0x8)
    bool bInvertFaces;                                                                // 0x00F0 (size: 0x1)
    FString StringOBJ;                                                                // 0x00F8 (size: 0x10)

}; // Size: 0x108

struct FMin3DataflowNode : public FDataflowNode
{
    float FloatA;                                                                     // 0x00E8 (size: 0x4)
    float FloatB;                                                                     // 0x00EC (size: 0x4)
    float FloatC;                                                                     // 0x00F0 (size: 0x4)
    float ReturnValue;                                                                // 0x00F4 (size: 0x4)

}; // Size: 0xF8

struct FMinDataflowNode : public FDataflowNode
{
    float FloatA;                                                                     // 0x00E8 (size: 0x4)
    float FloatB;                                                                     // 0x00EC (size: 0x4)
    float ReturnValue;                                                                // 0x00F0 (size: 0x4)

}; // Size: 0xF8

struct FMultiplyDataflowNode : public FDataflowNode
{
    float FloatA;                                                                     // 0x00E8 (size: 0x4)
    float FloatB;                                                                     // 0x00EC (size: 0x4)
    float ReturnValue;                                                                // 0x00F0 (size: 0x4)

}; // Size: 0xF8

struct FMultiplyTransformDataflowNode : public FDataflowNode
{
    FTransform InLeftTransform;                                                       // 0x00F0 (size: 0x60)
    FTransform InRightTransform;                                                      // 0x0150 (size: 0x60)
    FTransform OutTransform;                                                          // 0x01B0 (size: 0x60)

}; // Size: 0x210

struct FNegateDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x00E8 (size: 0x4)
    float ReturnValue;                                                                // 0x00EC (size: 0x4)

}; // Size: 0xF0

struct FNoiseFieldDataflowNode : public FDataflowNode
{
    TArray<FVector3f> SamplePositions;                                                // 0x00E8 (size: 0x10)
    FDataflowVertexSelection SampleIndices;                                           // 0x00F8 (size: 0x20)
    float MinRange;                                                                   // 0x0118 (size: 0x4)
    float MaxRange;                                                                   // 0x011C (size: 0x4)
    FTransform Transform;                                                             // 0x0120 (size: 0x60)
    TArray<float> FieldFloatResult;                                                   // 0x0180 (size: 0x10)
    TArray<int32> FieldRemap;                                                         // 0x0190 (size: 0x10)
    int32 NumSamplePositions;                                                         // 0x01A0 (size: 0x4)

}; // Size: 0x1B0

struct FNormalizeDataflowNode : public FDataflowNode
{
    FVector VectorA;                                                                  // 0x00E8 (size: 0x18)
    float Tolerance;                                                                  // 0x0100 (size: 0x4)
    FVector ReturnValue;                                                              // 0x0108 (size: 0x18)

}; // Size: 0x120

struct FNormalizeToRangeDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x00E8 (size: 0x4)
    float RangeMin;                                                                   // 0x00EC (size: 0x4)
    float RangeMax;                                                                   // 0x00F0 (size: 0x4)
    float ReturnValue;                                                                // 0x00F4 (size: 0x4)

}; // Size: 0xF8

struct FOneMinusDataflowNode : public FDataflowNode
{
    float A;                                                                          // 0x00E8 (size: 0x4)
    float ReturnValue;                                                                // 0x00EC (size: 0x4)

}; // Size: 0xF0

struct FPlaneCutterDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FBox BoundingBox;                                                                 // 0x0198 (size: 0x38)
    FDataflowTransformSelection TransformSelection;                                   // 0x01D0 (size: 0x20)
    int32 NumPlanes;                                                                  // 0x01F0 (size: 0x4)
    float RandomSeed;                                                                 // 0x01F4 (size: 0x4)
    float Grout;                                                                      // 0x01F8 (size: 0x4)
    float Amplitude;                                                                  // 0x01FC (size: 0x4)
    float Frequency;                                                                  // 0x0200 (size: 0x4)
    float Persistence;                                                                // 0x0204 (size: 0x4)
    float Lacunarity;                                                                 // 0x0208 (size: 0x4)
    int32 OctaveNumber;                                                               // 0x020C (size: 0x4)
    float PointSpacing;                                                               // 0x0210 (size: 0x4)
    bool AddSamplesForCollision;                                                      // 0x0214 (size: 0x1)
    float CollisionSampleSpacing;                                                     // 0x0218 (size: 0x4)

}; // Size: 0x220

struct FPlaneFalloffFieldDataflowNode : public FDataflowNode
{
    TArray<FVector3f> SamplePositions;                                                // 0x00E8 (size: 0x10)
    FDataflowVertexSelection SampleIndices;                                           // 0x00F8 (size: 0x20)
    FVector Position;                                                                 // 0x0118 (size: 0x18)
    FVector Normal;                                                                   // 0x0130 (size: 0x18)
    float Distance;                                                                   // 0x0148 (size: 0x4)
    FVector Translation;                                                              // 0x0150 (size: 0x18)
    float Magnitude;                                                                  // 0x0168 (size: 0x4)
    float MinRange;                                                                   // 0x016C (size: 0x4)
    float MaxRange;                                                                   // 0x0170 (size: 0x4)
    float Default;                                                                    // 0x0174 (size: 0x4)
    EDataflowFieldFalloffType FalloffType;                                            // 0x0178 (size: 0x1)
    TArray<float> FieldFloatResult;                                                   // 0x0180 (size: 0x10)
    TArray<int32> FieldRemap;                                                         // 0x0190 (size: 0x10)
    FDataflowVertexSelection FieldSelectionMask;                                      // 0x01A0 (size: 0x20)
    int32 NumSamplePositions;                                                         // 0x01C0 (size: 0x4)

}; // Size: 0x1C8

struct FPointsToMeshDataflowNode : public FDataflowNode
{
    TArray<FVector> Points;                                                           // 0x00E8 (size: 0x10)
    class UDynamicMesh* Mesh;                                                         // 0x00F8 (size: 0x8)
    int32 TriangleCount;                                                              // 0x0100 (size: 0x4)

}; // Size: 0x108

struct FPowDataflowNode : public FDataflowNode
{
    float base;                                                                       // 0x00E8 (size: 0x4)
    float Exp;                                                                        // 0x00EC (size: 0x4)
    float ReturnValue;                                                                // 0x00F0 (size: 0x4)

}; // Size: 0xF8

struct FPrintStringDataflowNode : public FDataflowNode
{
    bool bPrintToScreen;                                                              // 0x00E8 (size: 0x1)
    bool bPrintToLog;                                                                 // 0x00E9 (size: 0x1)
    FColor Color;                                                                     // 0x00EC (size: 0x4)
    float Duration;                                                                   // 0x00F0 (size: 0x4)
    FString String;                                                                   // 0x00F8 (size: 0x10)

}; // Size: 0x108

struct FProximityDataflowNode : public FDataflowNode
{
    EProximityMethodEnum ProximityMethod;                                             // 0x00E8 (size: 0x1)
    float DistanceThreshold;                                                          // 0x00EC (size: 0x4)
    float ContactThreshold;                                                           // 0x00F0 (size: 0x4)
    EProximityContactFilteringMethodEnum FilterContactMethod;                         // 0x00F4 (size: 0x1)
    bool bUseAsConnectionGraph;                                                       // 0x00F5 (size: 0x1)
    EConnectionContactAreaMethodEnum ContactAreaMethod;                               // 0x00F6 (size: 0x1)
    bool bRecomputeConvexHulls;                                                       // 0x00F7 (size: 0x1)
    FManagedArrayCollection Collection;                                               // 0x00F8 (size: 0xB0)

}; // Size: 0x1A8

struct FPruneInCollectionDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0198 (size: 0x20)

}; // Size: 0x1B8

struct FRadialFalloffFieldDataflowNode : public FDataflowNode
{
    TArray<FVector3f> SamplePositions;                                                // 0x00E8 (size: 0x10)
    FDataflowVertexSelection SampleIndices;                                           // 0x00F8 (size: 0x20)
    FSphere Sphere;                                                                   // 0x0118 (size: 0x20)
    FVector Translation;                                                              // 0x0138 (size: 0x18)
    float Magnitude;                                                                  // 0x0150 (size: 0x4)
    float MinRange;                                                                   // 0x0154 (size: 0x4)
    float MaxRange;                                                                   // 0x0158 (size: 0x4)
    float Default;                                                                    // 0x015C (size: 0x4)
    EDataflowFieldFalloffType FalloffType;                                            // 0x0160 (size: 0x1)
    TArray<float> FieldFloatResult;                                                   // 0x0168 (size: 0x10)
    TArray<int32> FieldRemap;                                                         // 0x0178 (size: 0x10)
    FDataflowVertexSelection FieldSelectionMask;                                      // 0x0188 (size: 0x20)
    int32 NumSamplePositions;                                                         // 0x01A8 (size: 0x4)

}; // Size: 0x1B0

struct FRadialIntMaskFieldDataflowNode : public FDataflowNode
{
    TArray<FVector3f> SamplePositions;                                                // 0x00E8 (size: 0x10)
    FDataflowVertexSelection SampleIndices;                                           // 0x00F8 (size: 0x20)
    FSphere Sphere;                                                                   // 0x0118 (size: 0x20)
    FVector Translation;                                                              // 0x0138 (size: 0x18)
    int32 InteriorValue;                                                              // 0x0150 (size: 0x4)
    int32 ExteriorValue;                                                              // 0x0154 (size: 0x4)
    EDataflowSetMaskConditionType SetMaskConditionType;                               // 0x0158 (size: 0x1)
    TArray<int32> FieldIntResult;                                                     // 0x0160 (size: 0x10)
    TArray<int32> FieldRemap;                                                         // 0x0170 (size: 0x10)
    int32 NumSamplePositions;                                                         // 0x0180 (size: 0x4)

}; // Size: 0x188

struct FRadialScatterPointsDataflowNode : public FDataflowNode
{
    FVector Center;                                                                   // 0x00E8 (size: 0x18)
    FVector Normal;                                                                   // 0x0100 (size: 0x18)
    float Radius;                                                                     // 0x0118 (size: 0x4)
    int32 AngularSteps;                                                               // 0x011C (size: 0x4)
    int32 RadialSteps;                                                                // 0x0120 (size: 0x4)
    float AngleOffset;                                                                // 0x0124 (size: 0x4)
    float Variability;                                                                // 0x0128 (size: 0x4)
    float RandomSeed;                                                                 // 0x012C (size: 0x4)
    TArray<FVector> Points;                                                           // 0x0130 (size: 0x10)

}; // Size: 0x140

struct FRadialVectorFieldDataflowNode : public FDataflowNode
{
    TArray<FVector3f> SamplePositions;                                                // 0x00E8 (size: 0x10)
    FDataflowVertexSelection SampleIndices;                                           // 0x00F8 (size: 0x20)
    float Magnitude;                                                                  // 0x0118 (size: 0x4)
    FVector Position;                                                                 // 0x0120 (size: 0x18)
    TArray<FVector> FieldVectorResult;                                                // 0x0138 (size: 0x10)
    TArray<int32> FieldRemap;                                                         // 0x0148 (size: 0x10)
    int32 NumSamplePositions;                                                         // 0x0158 (size: 0x4)

}; // Size: 0x160

struct FRadiansToDegreesDataflowNode : public FDataflowNode
{
    float Radians;                                                                    // 0x00E8 (size: 0x4)
    float Degrees;                                                                    // 0x00EC (size: 0x4)

}; // Size: 0xF0

struct FRandomFloatDataflowNode : public FDataflowNode
{
    bool bDeterministic;                                                              // 0x00E8 (size: 0x1)
    float RandomSeed;                                                                 // 0x00EC (size: 0x4)
    float ReturnValue;                                                                // 0x00F0 (size: 0x4)

}; // Size: 0xF8

struct FRandomFloatInRangeDataflowNode : public FDataflowNode
{
    bool bDeterministic;                                                              // 0x00E8 (size: 0x1)
    float RandomSeed;                                                                 // 0x00EC (size: 0x4)
    float Min;                                                                        // 0x00F0 (size: 0x4)
    float Max;                                                                        // 0x00F4 (size: 0x4)
    float ReturnValue;                                                                // 0x00F8 (size: 0x4)

}; // Size: 0x100

struct FRandomUnitVectorDataflowNode : public FDataflowNode
{
    bool bDeterministic;                                                              // 0x00E8 (size: 0x1)
    float RandomSeed;                                                                 // 0x00EC (size: 0x4)
    FVector ReturnValue;                                                              // 0x00F0 (size: 0x18)

}; // Size: 0x108

struct FRandomUnitVectorInConeDataflowNode : public FDataflowNode
{
    bool bDeterministic;                                                              // 0x00E8 (size: 0x1)
    float RandomSeed;                                                                 // 0x00EC (size: 0x4)
    FVector ConeDirection;                                                            // 0x00F0 (size: 0x18)
    float ConeHalfAngle;                                                              // 0x0108 (size: 0x4)
    FVector ReturnValue;                                                              // 0x0110 (size: 0x18)

}; // Size: 0x128

struct FRandomVectorFieldDataflowNode : public FDataflowNode
{
    TArray<FVector3f> SamplePositions;                                                // 0x00E8 (size: 0x10)
    FDataflowVertexSelection SampleIndices;                                           // 0x00F8 (size: 0x20)
    float Magnitude;                                                                  // 0x0118 (size: 0x4)
    TArray<FVector> FieldVectorResult;                                                // 0x0120 (size: 0x10)
    TArray<int32> FieldRemap;                                                         // 0x0130 (size: 0x10)
    int32 NumSamplePositions;                                                         // 0x0140 (size: 0x4)

}; // Size: 0x148

struct FReAssignMaterialInCollectionDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FDataflowFaceSelection FaceSelection;                                             // 0x0198 (size: 0x20)
    TArray<class UMaterial*> Materials;                                               // 0x01B8 (size: 0x10)
    int32 OutsideMaterialIdx;                                                         // 0x01C8 (size: 0x4)
    int32 InsideMaterialIdx;                                                          // 0x01CC (size: 0x4)
    bool bAssignOutsideMaterial;                                                      // 0x01D0 (size: 0x1)
    bool bAssignInsideMaterial;                                                       // 0x01D1 (size: 0x1)

}; // Size: 0x1D8

struct FRemoveFloatArrayElementDataflowNode : public FDataflowNode
{
    int32 Index;                                                                      // 0x00E8 (size: 0x4)
    bool bPreserveOrder;                                                              // 0x00EC (size: 0x1)
    TArray<float> FloatArray;                                                         // 0x00F0 (size: 0x10)

}; // Size: 0x100

struct FRemoveOnBreakDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0198 (size: 0x20)
    bool bEnabledRemoval;                                                             // 0x01B8 (size: 0x1)
    FVector2f PostBreakTimer;                                                         // 0x01BC (size: 0x8)
    FVector2f RemovalTimer;                                                           // 0x01C4 (size: 0x8)
    bool bClusterCrumbling;                                                           // 0x01CC (size: 0x1)

}; // Size: 0x1D0

struct FRoundDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x00E8 (size: 0x4)
    float ReturnValue;                                                                // 0x00EC (size: 0x4)

}; // Size: 0xF0

struct FSafeDivideDataflowNode : public FDataflowNode
{
    float FloatA;                                                                     // 0x00E8 (size: 0x4)
    float FloatB;                                                                     // 0x00EC (size: 0x4)
    float ReturnValue;                                                                // 0x00F0 (size: 0x4)

}; // Size: 0xF8

struct FSafeReciprocalDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x00E8 (size: 0x4)
    float ReturnValue;                                                                // 0x00EC (size: 0x4)

}; // Size: 0xF0

struct FScaleVectorDataflowNode : public FDataflowNode
{
    FVector Vector;                                                                   // 0x00E8 (size: 0x18)
    float Scale;                                                                      // 0x0100 (size: 0x4)
    FVector ScaledVector;                                                             // 0x0108 (size: 0x18)

}; // Size: 0x120

struct FSelectFloatArrayIndicesInRangeDataflowNode : public FDataflowNode
{
    TArray<float> Values;                                                             // 0x00E8 (size: 0x10)
    float Min;                                                                        // 0x00F8 (size: 0x4)
    float Max;                                                                        // 0x00FC (size: 0x4)
    ERangeSettingEnum RangeSetting;                                                   // 0x0100 (size: 0x1)
    bool bInclusive;                                                                  // 0x0101 (size: 0x1)
    TArray<int32> Indices;                                                            // 0x0108 (size: 0x10)

}; // Size: 0x118

struct FSelectionToVertexListDataflowNode : public FDataflowNode
{
    FDataflowVertexSelection VertexSelection;                                         // 0x00E8 (size: 0x20)
    TArray<int32> VertexList;                                                         // 0x0108 (size: 0x10)

}; // Size: 0x118

struct FSetAnchorStateDataflowNode : public FDataflowNode
{
    EAnchorStateEnum AnchorState;                                                     // 0x00E8 (size: 0x1)
    bool bSetNotSelectedBonesToOppositeState;                                         // 0x00E9 (size: 0x1)
    FManagedArrayCollection Collection;                                               // 0x00F0 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x01A0 (size: 0x20)

}; // Size: 0x1C0

struct FSetCollectionAttributeDataTypedDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    EStandardGroupNameEnum GroupName;                                                 // 0x0198 (size: 0x1)
    FString CustomGroupName;                                                          // 0x01A0 (size: 0x10)
    FString AttrName;                                                                 // 0x01B0 (size: 0x10)
    TArray<bool> BoolAttributeData;                                                   // 0x01C0 (size: 0x10)
    TArray<float> FloatAttributeData;                                                 // 0x01D0 (size: 0x10)
    TArray<double> DoubleAttributeData;                                               // 0x01E0 (size: 0x10)
    TArray<int32> Int32AttributeData;                                                 // 0x01F0 (size: 0x10)
    TArray<FString> StringAttributeData;                                              // 0x0200 (size: 0x10)
    TArray<FVector3f> Vector3fAttributeData;                                          // 0x0210 (size: 0x10)
    TArray<FVector3d> Vector3dAttributeData;                                          // 0x0220 (size: 0x10)

}; // Size: 0x230

struct FSetMaterialInMaterialsArrayDataflowNode : public FDataflowNode
{
    TArray<class UMaterial*> Materials;                                               // 0x00E8 (size: 0x10)
    class UMaterial* Material;                                                        // 0x00F8 (size: 0x8)
    ESetMaterialOperationTypeEnum Operation;                                          // 0x0100 (size: 0x1)
    int32 MaterialIdx;                                                                // 0x0104 (size: 0x4)

}; // Size: 0x108

struct FSetVertexColorInCollectionFromFloatArrayDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    TArray<float> FloatArray;                                                         // 0x0198 (size: 0x10)
    float Scale;                                                                      // 0x01A8 (size: 0x4)

}; // Size: 0x1B0

struct FSetVertexColorInCollectionFromVertexSelectionDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FDataflowVertexSelection VertexSelection;                                         // 0x0198 (size: 0x20)
    FLinearColor SelectedColor;                                                       // 0x01B8 (size: 0x10)
    FLinearColor NonSelectedColor;                                                    // 0x01C8 (size: 0x10)

}; // Size: 0x1D8

struct FSetVisibilityInCollectionDataflowNode : public FDataflowNode
{
    EVisibiltyOptionsEnum Visibility;                                                 // 0x00E8 (size: 0x1)
    FManagedArrayCollection Collection;                                               // 0x00F0 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x01A0 (size: 0x20)
    FDataflowFaceSelection FaceSelection;                                             // 0x01C0 (size: 0x20)

}; // Size: 0x1E0

struct FSignDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x00E8 (size: 0x4)
    float ReturnValue;                                                                // 0x00EC (size: 0x4)

}; // Size: 0xF0

struct FSimplifyConvexHullsDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FDataflowTransformSelection OptionalSelectionFilter;                              // 0x0198 (size: 0x20)
    EConvexHullSimplifyMethod SimplifyMethod;                                         // 0x01B8 (size: 0x4)
    float SimplificationAngleThreshold;                                               // 0x01BC (size: 0x4)
    float SimplificationDistanceThreshold;                                            // 0x01C0 (size: 0x4)
    int32 MinTargetTriangleCount;                                                     // 0x01C4 (size: 0x4)
    bool bUseExistingVertices;                                                        // 0x01C8 (size: 0x1)

}; // Size: 0x1D0

struct FSinDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x00E8 (size: 0x4)
    float ReturnValue;                                                                // 0x00EC (size: 0x4)

}; // Size: 0xF0

struct FSkeletonToCollectionDataflowNode : public FDataflowNode
{
    class USkeleton* Skeleton;                                                        // 0x00E8 (size: 0x8)
    FManagedArrayCollection Collection;                                               // 0x00F0 (size: 0xB0)

}; // Size: 0x1A0

struct FSphereCoveringCountSpheresNode : public FDataflowNode
{
    FDataflowSphereCovering SphereCovering;                                           // 0x00E8 (size: 0x20)
    int32 NumSpheres;                                                                 // 0x0108 (size: 0x4)

}; // Size: 0x110

struct FSphereCoveringToMeshDataflowNode : public FDataflowNode
{
    FDataflowSphereCovering SphereCovering;                                           // 0x00E8 (size: 0x20)
    int32 VerticesAlongEachSide;                                                      // 0x0108 (size: 0x4)
    class UDynamicMesh* Mesh;                                                         // 0x0110 (size: 0x8)

}; // Size: 0x118

struct FSquareDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x00E8 (size: 0x4)
    float ReturnValue;                                                                // 0x00EC (size: 0x4)

}; // Size: 0xF0

struct FSquareRootDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x00E8 (size: 0x4)
    float ReturnValue;                                                                // 0x00EC (size: 0x4)

}; // Size: 0xF0

struct FStaticMeshToCollectionDataflowNode : public FDataflowNode
{
    class UStaticMesh* StaticMesh;                                                    // 0x00E8 (size: 0x8)
    bool bSetInternalFromMaterialIndex;                                               // 0x00F0 (size: 0x1)
    bool bSplitComponents;                                                            // 0x00F1 (size: 0x1)
    FManagedArrayCollection Collection;                                               // 0x00F8 (size: 0xB0)
    TArray<class UMaterial*> Materials;                                               // 0x01A8 (size: 0x10)
    TArray<FGeometryCollectionAutoInstanceMesh> InstancedMeshes;                      // 0x01B8 (size: 0x10)

}; // Size: 0x1C8

struct FStaticMeshToMeshDataflowNode : public FDataflowNode
{
    class UStaticMesh* StaticMesh;                                                    // 0x00E8 (size: 0x8)
    bool bUseHiRes;                                                                   // 0x00F0 (size: 0x1)
    int32 LODLevel;                                                                   // 0x00F4 (size: 0x4)
    class UDynamicMesh* Mesh;                                                         // 0x00F8 (size: 0x8)

}; // Size: 0x100

struct FStringAppendDataflowNode : public FDataflowNode
{
    FString String1;                                                                  // 0x00E8 (size: 0x10)
    FString String2;                                                                  // 0x00F8 (size: 0x10)
    FString String;                                                                   // 0x0108 (size: 0x10)

}; // Size: 0x118

struct FSubtractDataflowNode : public FDataflowNode
{
    float FloatA;                                                                     // 0x00E8 (size: 0x4)
    float FloatB;                                                                     // 0x00EC (size: 0x4)
    float ReturnValue;                                                                // 0x00F0 (size: 0x4)

}; // Size: 0xF8

struct FSumScalarFieldDataflowNode : public FDataflowNode
{
    TArray<float> FieldFloatLeft;                                                     // 0x00E8 (size: 0x10)
    TArray<int32> FieldRemapLeft;                                                     // 0x00F8 (size: 0x10)
    TArray<float> FieldFloatRight;                                                    // 0x0108 (size: 0x10)
    TArray<int32> FieldRemapRight;                                                    // 0x0118 (size: 0x10)
    float Magnitude;                                                                  // 0x0128 (size: 0x4)
    EDataflowFloatFieldOperationType Operation;                                       // 0x012C (size: 0x1)
    bool bSwapInputs;                                                                 // 0x012D (size: 0x1)
    TArray<float> FieldFloatResult;                                                   // 0x0130 (size: 0x10)
    TArray<int32> FieldRemap;                                                         // 0x0140 (size: 0x10)

}; // Size: 0x150

struct FSumVectorFieldDataflowNode : public FDataflowNode
{
    TArray<float> FieldFloat;                                                         // 0x00E8 (size: 0x10)
    TArray<int32> FieldFloatRemap;                                                    // 0x00F8 (size: 0x10)
    TArray<FVector> FieldVectorLeft;                                                  // 0x0108 (size: 0x10)
    TArray<int32> FieldRemapLeft;                                                     // 0x0118 (size: 0x10)
    TArray<FVector> FieldVectorRight;                                                 // 0x0128 (size: 0x10)
    TArray<int32> FieldRemapRight;                                                    // 0x0138 (size: 0x10)
    float Magnitude;                                                                  // 0x0148 (size: 0x4)
    EDataflowVectorFieldOperationType Operation;                                      // 0x014C (size: 0x1)
    bool bSwapVectorInputs;                                                           // 0x014D (size: 0x1)
    TArray<FVector> FieldVectorResult;                                                // 0x0150 (size: 0x10)
    TArray<int32> FieldRemap;                                                         // 0x0160 (size: 0x10)

}; // Size: 0x170

struct FTanDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x00E8 (size: 0x4)
    float ReturnValue;                                                                // 0x00EC (size: 0x4)

}; // Size: 0xF0

struct FTransformCollectionAttributeDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FTransform TransformIn;                                                           // 0x01A0 (size: 0x60)
    FTransform LocalTransform;                                                        // 0x0200 (size: 0x60)
    FString GroupName;                                                                // 0x0260 (size: 0x10)
    FString AttributeName;                                                            // 0x0270 (size: 0x10)

}; // Size: 0x280

struct FTransformCollectionDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FVector Translate;                                                                // 0x0198 (size: 0x18)
    ERotationOrderEnum RotationOrder;                                                 // 0x01B0 (size: 0x1)
    FVector Rotate;                                                                   // 0x01B8 (size: 0x18)
    FVector Scale;                                                                    // 0x01D0 (size: 0x18)
    float UniformScale;                                                               // 0x01E8 (size: 0x4)
    FVector RotatePivot;                                                              // 0x01F0 (size: 0x18)
    FVector ScalePivot;                                                               // 0x0208 (size: 0x18)
    bool bInvertTransformation;                                                       // 0x0220 (size: 0x1)

}; // Size: 0x228

struct FTransformMeshDataflowNode : public FDataflowNode
{
    class UDynamicMesh* Mesh;                                                         // 0x00E8 (size: 0x8)
    FVector Translate;                                                                // 0x00F0 (size: 0x18)
    ERotationOrderEnum RotationOrder;                                                 // 0x0108 (size: 0x1)
    FVector Rotate;                                                                   // 0x0110 (size: 0x18)
    FVector Scale;                                                                    // 0x0128 (size: 0x18)
    float UniformScale;                                                               // 0x0140 (size: 0x4)
    FVector RotatePivot;                                                              // 0x0148 (size: 0x18)
    FVector ScalePivot;                                                               // 0x0160 (size: 0x18)
    bool bInvertTransformation;                                                       // 0x0178 (size: 0x1)

}; // Size: 0x180

struct FTruncDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x00E8 (size: 0x4)
    float ReturnValue;                                                                // 0x00EC (size: 0x4)

}; // Size: 0xF0

struct FUniformIntegerFieldDataflowNode : public FDataflowNode
{
    TArray<FVector3f> SamplePositions;                                                // 0x00E8 (size: 0x10)
    FDataflowVertexSelection SampleIndices;                                           // 0x00F8 (size: 0x20)
    int32 Magnitude;                                                                  // 0x0118 (size: 0x4)
    TArray<int32> FieldIntResult;                                                     // 0x0120 (size: 0x10)
    TArray<int32> FieldRemap;                                                         // 0x0130 (size: 0x10)
    int32 NumSamplePositions;                                                         // 0x0140 (size: 0x4)

}; // Size: 0x148

struct FUniformScalarFieldDataflowNode : public FDataflowNode
{
    TArray<FVector3f> SamplePositions;                                                // 0x00E8 (size: 0x10)
    FDataflowVertexSelection SampleIndices;                                           // 0x00F8 (size: 0x20)
    float Magnitude;                                                                  // 0x0118 (size: 0x4)
    TArray<float> FieldFloatResult;                                                   // 0x0120 (size: 0x10)
    TArray<int32> FieldRemap;                                                         // 0x0130 (size: 0x10)
    int32 NumSamplePositions;                                                         // 0x0140 (size: 0x4)

}; // Size: 0x148

struct FUniformScatterPointsDataflowNode : public FDataflowNode
{
    int32 MinNumberOfPoints;                                                          // 0x00E8 (size: 0x4)
    int32 MaxNumberOfPoints;                                                          // 0x00EC (size: 0x4)
    float RandomSeed;                                                                 // 0x00F0 (size: 0x4)
    FBox BoundingBox;                                                                 // 0x00F8 (size: 0x38)
    TArray<FVector> Points;                                                           // 0x0130 (size: 0x10)

}; // Size: 0x140

struct FUniformVectorFieldDataflowNode : public FDataflowNode
{
    TArray<FVector3f> SamplePositions;                                                // 0x00E8 (size: 0x10)
    FDataflowVertexSelection SampleIndices;                                           // 0x00F8 (size: 0x20)
    float Magnitude;                                                                  // 0x0118 (size: 0x4)
    FVector Direction;                                                                // 0x0120 (size: 0x18)
    TArray<FVector> FieldVectorResult;                                                // 0x0138 (size: 0x10)
    TArray<int32> FieldRemap;                                                         // 0x0148 (size: 0x10)
    int32 NumSamplePositions;                                                         // 0x0158 (size: 0x4)

}; // Size: 0x160

struct FUnionIntArraysDataflowNode : public FDataflowNode
{
    TArray<int32> InArray1;                                                           // 0x00E8 (size: 0x10)
    TArray<int32> InArray2;                                                           // 0x00F8 (size: 0x10)
    TArray<int32> OutArray;                                                           // 0x0108 (size: 0x10)

}; // Size: 0x118

struct FUpdateVolumeAttributesDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)

}; // Size: 0x198

struct FVectorArrayNormalizeDataflowNode : public FDataflowNode
{
    TArray<FVector> InVectorArray;                                                    // 0x00E8 (size: 0x10)
    FDataflowVertexSelection selection;                                               // 0x00F8 (size: 0x20)
    float Magnitude;                                                                  // 0x0118 (size: 0x4)
    TArray<FVector> OutVectorArray;                                                   // 0x0120 (size: 0x10)

}; // Size: 0x130

struct FVectorToStringDataflowNode : public FDataflowNode
{
    FVector Vector;                                                                   // 0x00E8 (size: 0x18)
    FString String;                                                                   // 0x0100 (size: 0x10)

}; // Size: 0x110

struct FVoronoiFractureDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    TArray<FVector> Points;                                                           // 0x0198 (size: 0x10)
    FDataflowTransformSelection TransformSelection;                                   // 0x01A8 (size: 0x20)
    float RandomSeed;                                                                 // 0x01C8 (size: 0x4)
    float ChanceToFracture;                                                           // 0x01CC (size: 0x4)
    bool GroupFracture;                                                               // 0x01D0 (size: 0x1)
    float Grout;                                                                      // 0x01D4 (size: 0x4)
    float Amplitude;                                                                  // 0x01D8 (size: 0x4)
    float Frequency;                                                                  // 0x01DC (size: 0x4)
    float Persistence;                                                                // 0x01E0 (size: 0x4)
    float Lacunarity;                                                                 // 0x01E4 (size: 0x4)
    int32 OctaveNumber;                                                               // 0x01E8 (size: 0x4)
    float PointSpacing;                                                               // 0x01EC (size: 0x4)
    bool AddSamplesForCollision;                                                      // 0x01F0 (size: 0x1)
    float CollisionSampleSpacing;                                                     // 0x01F4 (size: 0x4)

}; // Size: 0x1F8

struct FWaveScalarFieldDataflowNode : public FDataflowNode
{
    TArray<FVector3f> SamplePositions;                                                // 0x00E8 (size: 0x10)
    FDataflowVertexSelection SampleIndices;                                           // 0x00F8 (size: 0x20)
    float Magnitude;                                                                  // 0x0118 (size: 0x4)
    FVector Position;                                                                 // 0x0120 (size: 0x18)
    FVector Translation;                                                              // 0x0138 (size: 0x18)
    float Wavelength;                                                                 // 0x0150 (size: 0x4)
    float Period;                                                                     // 0x0154 (size: 0x4)
    EDataflowWaveFunctionType FunctionType;                                           // 0x0158 (size: 0x1)
    EDataflowFieldFalloffType FalloffType;                                            // 0x0159 (size: 0x1)
    TArray<float> FieldFloatResult;                                                   // 0x0160 (size: 0x10)
    TArray<int32> FieldRemap;                                                         // 0x0170 (size: 0x10)
    int32 NumSamplePositions;                                                         // 0x0180 (size: 0x4)

}; // Size: 0x188

struct FWrapDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x00E8 (size: 0x4)
    float Min;                                                                        // 0x00EC (size: 0x4)
    float Max;                                                                        // 0x00F0 (size: 0x4)
    float ReturnValue;                                                                // 0x00F4 (size: 0x4)

}; // Size: 0xF8

struct FWriteStringToFile : public FDataflowNode
{
    FString FilePath;                                                                 // 0x00E8 (size: 0x10)
    FString FileContents;                                                             // 0x00F8 (size: 0x10)

}; // Size: 0x108

#endif
