#ifndef UE4SS_SDK_GeometryCollectionNodes_HPP
#define UE4SS_SDK_GeometryCollectionNodes_HPP

#include "GeometryCollectionNodes_enums.hpp"

struct FAbsDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x0198 (size: 0x4)
    float ReturnValue;                                                                // 0x019C (size: 0x4)

}; // Size: 0x1A0

struct FAddCustomCollectionAttributeDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    EStandardGroupNameEnum GroupName;                                                 // 0x0248 (size: 0x1)
    FString CustomGroupName;                                                          // 0x0250 (size: 0x10)
    FString AttrName;                                                                 // 0x0260 (size: 0x10)
    ECustomAttributeTypeEnum CustomAttributeType;                                     // 0x0270 (size: 0x1)
    int32 NumElements;                                                                // 0x0274 (size: 0x4)

}; // Size: 0x278

struct FAddDataflowNode : public FDataflowNode
{
    float FloatA;                                                                     // 0x0198 (size: 0x4)
    float FloatB;                                                                     // 0x019C (size: 0x4)
    float ReturnValue;                                                                // 0x01A0 (size: 0x4)

}; // Size: 0x1A8

struct FAddMaterialToCollectionDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FDataflowFaceSelection FaceSelection;                                             // 0x0248 (size: 0x20)
    TArray<class UMaterial*> Materials;                                               // 0x0268 (size: 0x10)
    class UMaterial* OutsideMaterial;                                                 // 0x0278 (size: 0x8)
    class UMaterial* InsideMaterial;                                                  // 0x0280 (size: 0x8)
    bool bAssignOutsideMaterial;                                                      // 0x0288 (size: 0x1)
    bool bAssignInsideMaterial;                                                       // 0x0289 (size: 0x1)

}; // Size: 0x290

struct FAppendCollectionAssetsDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection1;                                              // 0x0198 (size: 0xB0)
    FManagedArrayCollection Collection2;                                              // 0x0248 (size: 0xB0)
    TArray<FString> GeometryGroupGuidsOut1;                                           // 0x02F8 (size: 0x10)
    TArray<FString> GeometryGroupGuidsOut2;                                           // 0x0308 (size: 0x10)

}; // Size: 0x318

struct FArcCosDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x0198 (size: 0x4)
    float ReturnValue;                                                                // 0x019C (size: 0x4)

}; // Size: 0x1A0

struct FArcSinDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x0198 (size: 0x4)
    float ReturnValue;                                                                // 0x019C (size: 0x4)

}; // Size: 0x1A0

struct FArcTan2DataflowNode : public FDataflowNode
{
    float Y;                                                                          // 0x0198 (size: 0x4)
    float X;                                                                          // 0x019C (size: 0x4)
    float ReturnValue;                                                                // 0x01A0 (size: 0x4)

}; // Size: 0x1A8

struct FArcTanDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x0198 (size: 0x4)
    float ReturnValue;                                                                // 0x019C (size: 0x4)

}; // Size: 0x1A0

struct FAutoClusterDataflowNode : public FDataflowNode
{
    EClusterSizeMethodEnum ClusterSizeMethod;                                         // 0x0198 (size: 0x1)
    int32 ClusterSites;                                                               // 0x019C (size: 0x4)
    float ClusterFraction;                                                            // 0x01A0 (size: 0x4)
    float SiteSize;                                                                   // 0x01A4 (size: 0x4)
    int32 ClusterGridWidth;                                                           // 0x01A8 (size: 0x4)
    int32 ClusterGridDepth;                                                           // 0x01AC (size: 0x4)
    int32 ClusterGridHeight;                                                          // 0x01B0 (size: 0x4)
    int32 DriftIterations;                                                            // 0x01B4 (size: 0x4)
    float MinimumSize;                                                                // 0x01B8 (size: 0x4)
    bool bPreferConvexity;                                                            // 0x01BC (size: 0x1)
    float ConcavityTolerance;                                                         // 0x01C0 (size: 0x4)
    bool AutoCluster;                                                                 // 0x01C4 (size: 0x1)
    bool EnforceSiteParameters;                                                       // 0x01C5 (size: 0x1)
    bool AvoidIsolated;                                                               // 0x01C6 (size: 0x1)
    FManagedArrayCollection Collection;                                               // 0x01C8 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0278 (size: 0x20)

}; // Size: 0x298

struct FBakeTransformsInCollectionDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)

}; // Size: 0x248

struct FBlueprintToCollectionDataflowNode : public FDataflowNode
{
    class UBlueprint* Blueprint;                                                      // 0x0198 (size: 0x8)
    bool bSplitComponents;                                                            // 0x01A0 (size: 0x1)
    FManagedArrayCollection Collection;                                               // 0x01A8 (size: 0xB0)
    TArray<class UMaterial*> Materials;                                               // 0x0258 (size: 0x10)
    TArray<class UMaterialInterface*> MaterialInstances;                              // 0x0268 (size: 0x10)
    TArray<FGeometryCollectionAutoInstanceMesh> InstancedMeshes;                      // 0x0278 (size: 0x10)

}; // Size: 0x288

struct FBoolArrayToFaceSelectionDataflowNode : public FDataflowNode
{
    TArray<bool> BoolAttributeData;                                                   // 0x0198 (size: 0x10)
    FDataflowFaceSelection FaceSelection;                                             // 0x01A8 (size: 0x20)

}; // Size: 0x1C8

struct FBoolToIntDataflowNode : public FDataflowNode
{
    bool bool;                                                                        // 0x0198 (size: 0x1)
    int32 int;                                                                        // 0x019C (size: 0x4)

}; // Size: 0x1A0

struct FBoolToStringDataflowNode : public FDataflowNode
{
    bool bool;                                                                        // 0x0198 (size: 0x1)
    FString String;                                                                   // 0x01A0 (size: 0x10)

}; // Size: 0x1B0

struct FBoundingBoxDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FBox BoundingBox;                                                                 // 0x0248 (size: 0x38)

}; // Size: 0x280

struct FBoxFalloffFieldDataflowNode : public FDataflowNode
{
    TArray<FVector3f> SamplePositions;                                                // 0x0198 (size: 0x10)
    FDataflowVertexSelection SampleIndices;                                           // 0x01A8 (size: 0x20)
    FBox Box;                                                                         // 0x01C8 (size: 0x38)
    FTransform Transform;                                                             // 0x0200 (size: 0x60)
    float Magnitude;                                                                  // 0x0260 (size: 0x4)
    float MinRange;                                                                   // 0x0264 (size: 0x4)
    float MaxRange;                                                                   // 0x0268 (size: 0x4)
    float Default;                                                                    // 0x026C (size: 0x4)
    EDataflowFieldFalloffType FalloffType;                                            // 0x0270 (size: 0x1)
    TArray<float> FieldFloatResult;                                                   // 0x0278 (size: 0x10)
    TArray<int32> FieldRemap;                                                         // 0x0288 (size: 0x10)
    FDataflowVertexSelection FieldSelectionMask;                                      // 0x0298 (size: 0x20)
    int32 NumSamplePositions;                                                         // 0x02B8 (size: 0x4)

}; // Size: 0x2C0

struct FBoxToMeshDataflowNode : public FDataflowNode
{
    FBox Box;                                                                         // 0x0198 (size: 0x38)
    class UDynamicMesh* Mesh;                                                         // 0x01D0 (size: 0x8)
    int32 TriangleCount;                                                              // 0x01D8 (size: 0x4)

}; // Size: 0x1E0

struct FBranchCollectionDataflowNode : public FDataflowNode
{
    FManagedArrayCollection TrueCollection;                                           // 0x0198 (size: 0xB0)
    FManagedArrayCollection FalseCollection;                                          // 0x0248 (size: 0xB0)
    bool bCondition;                                                                  // 0x02F8 (size: 0x1)
    FManagedArrayCollection ChosenCollection;                                         // 0x0300 (size: 0xB0)

}; // Size: 0x3B0

struct FBranchFloatDataflowNode : public FDataflowNode
{
    float A;                                                                          // 0x0198 (size: 0x4)
    float B;                                                                          // 0x019C (size: 0x4)
    bool bCondition;                                                                  // 0x01A0 (size: 0x1)
    float ReturnValue;                                                                // 0x01A4 (size: 0x4)

}; // Size: 0x1A8

struct FBranchIntDataflowNode : public FDataflowNode
{
    int32 A;                                                                          // 0x0198 (size: 0x4)
    int32 B;                                                                          // 0x019C (size: 0x4)
    bool bCondition;                                                                  // 0x01A0 (size: 0x1)
    int32 ReturnValue;                                                                // 0x01A4 (size: 0x4)

}; // Size: 0x1A8

struct FBranchMeshDataflowNode : public FDataflowNode
{
    class UDynamicMesh* MeshA;                                                        // 0x0198 (size: 0x8)
    class UDynamicMesh* MeshB;                                                        // 0x01A0 (size: 0x8)
    bool bCondition;                                                                  // 0x01A8 (size: 0x1)
    class UDynamicMesh* Mesh;                                                         // 0x01B0 (size: 0x8)

}; // Size: 0x1B8

struct FBrickCutterDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FBox BoundingBox;                                                                 // 0x0248 (size: 0x38)
    FDataflowTransformSelection TransformSelection;                                   // 0x0280 (size: 0x20)
    FTransform Transform;                                                             // 0x02A0 (size: 0x60)
    EFractureBrickBondEnum Bond;                                                      // 0x0300 (size: 0x1)
    float BrickLength;                                                                // 0x0304 (size: 0x4)
    float BrickHeight;                                                                // 0x0308 (size: 0x4)
    float BrickDepth;                                                                 // 0x030C (size: 0x4)
    int32 RandomSeed;                                                                 // 0x0310 (size: 0x4)
    float ChanceToFracture;                                                           // 0x0314 (size: 0x4)
    bool SplitIslands;                                                                // 0x0318 (size: 0x1)
    float Grout;                                                                      // 0x031C (size: 0x4)
    float Amplitude;                                                                  // 0x0320 (size: 0x4)
    float Frequency;                                                                  // 0x0324 (size: 0x4)
    float Persistence;                                                                // 0x0328 (size: 0x4)
    float Lacunarity;                                                                 // 0x032C (size: 0x4)
    int32 OctaveNumber;                                                               // 0x0330 (size: 0x4)
    float PointSpacing;                                                               // 0x0334 (size: 0x4)
    bool AddSamplesForCollision;                                                      // 0x0338 (size: 0x1)
    float CollisionSampleSpacing;                                                     // 0x033C (size: 0x4)
    FDataflowTransformSelection NewGeometryTransformSelection;                        // 0x0340 (size: 0x20)

}; // Size: 0x360

struct FCeilDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x0198 (size: 0x4)
    float ReturnValue;                                                                // 0x019C (size: 0x4)

}; // Size: 0x1A0

struct FClampDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x0198 (size: 0x4)
    float min;                                                                        // 0x019C (size: 0x4)
    float max;                                                                        // 0x01A0 (size: 0x4)
    float ReturnValue;                                                                // 0x01A4 (size: 0x4)

}; // Size: 0x1A8

struct FClearConvexHullsDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0248 (size: 0x20)

}; // Size: 0x268

struct FCloseGeometryOnCollectionDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)

}; // Size: 0x248

struct FClusterDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0248 (size: 0x20)

}; // Size: 0x268

struct FClusterFlattenDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FDataflowTransformSelection OptionalTransformSelection;                           // 0x0248 (size: 0x20)

}; // Size: 0x268

struct FClusterIsolatedRootsDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)

}; // Size: 0x248

struct FClusterMagnetDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0248 (size: 0x20)
    int32 Iterations;                                                                 // 0x0268 (size: 0x4)

}; // Size: 0x270

struct FClusterMergeDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0248 (size: 0x20)

}; // Size: 0x268

struct FClusterMergeToNeighborsDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0248 (size: 0x20)
    EClusterNeighborSelectionMethodEnum NeighborSelectionMethod;                      // 0x0268 (size: 0x1)
    float MinVolumeCubeRoot;                                                          // 0x026C (size: 0x4)
    bool bOnlyToConnected;                                                            // 0x0270 (size: 0x1)
    bool bOnlySameParent;                                                             // 0x0271 (size: 0x1)

}; // Size: 0x278

struct FClusterUnclusterDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0248 (size: 0x20)

}; // Size: 0x268

struct FCollectionFaceSelectionCustomDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FString FaceIndicies;                                                             // 0x0248 (size: 0x10)
    FDataflowFaceSelection FaceSelection;                                             // 0x0258 (size: 0x20)

}; // Size: 0x278

struct FCollectionFaceSelectionInvertDataflowNode : public FDataflowNode
{
    FDataflowFaceSelection FaceSelection;                                             // 0x0198 (size: 0x20)

}; // Size: 0x1B8

struct FCollectionSelectionByAttrDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FCollectionAttributeKey AttributeKey;                                             // 0x0248 (size: 0x20)
    ESelectionByAttrGroup Group;                                                      // 0x0268 (size: 0x1)
    FString Attribute;                                                                // 0x0270 (size: 0x10)
    ESelectionByAttrOperation Operation;                                              // 0x0280 (size: 0x1)
    FString Value;                                                                    // 0x0288 (size: 0x10)
    FDataflowVertexSelection VertexSelection;                                         // 0x0298 (size: 0x20)
    FDataflowFaceSelection FaceSelection;                                             // 0x02B8 (size: 0x20)
    FDataflowTransformSelection TransformSelection;                                   // 0x02D8 (size: 0x20)
    FDataflowGeometrySelection GeometrySelection;                                     // 0x02F8 (size: 0x20)
    FDataflowMaterialSelection MaterialSelection;                                     // 0x0318 (size: 0x20)

}; // Size: 0x338

struct FCollectionSelectionConvertDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0248 (size: 0x20)
    FDataflowFaceSelection FaceSelection;                                             // 0x0268 (size: 0x20)
    FDataflowVertexSelection VertexSelection;                                         // 0x0288 (size: 0x20)
    bool bAllElementsMustBeSelected;                                                  // 0x02A8 (size: 0x1)

}; // Size: 0x2B0

struct FCollectionSetPivotDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FTransform Transform;                                                             // 0x0250 (size: 0x60)

}; // Size: 0x2B0

struct FCollectionToMeshDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    bool bCenterPivot;                                                                // 0x0248 (size: 0x1)
    class UDynamicMesh* Mesh;                                                         // 0x0250 (size: 0x8)

}; // Size: 0x258

struct FCollectionTransformSelectionAllDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0248 (size: 0x20)

}; // Size: 0x268

struct FCollectionTransformSelectionByFloatAttrDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FString GroupName;                                                                // 0x0248 (size: 0x10)
    FString AttrName;                                                                 // 0x0258 (size: 0x10)
    float min;                                                                        // 0x0268 (size: 0x4)
    float max;                                                                        // 0x026C (size: 0x4)
    ERangeSettingEnum RangeSetting;                                                   // 0x0270 (size: 0x1)
    bool bInclusive;                                                                  // 0x0271 (size: 0x1)
    FDataflowTransformSelection TransformSelection;                                   // 0x0278 (size: 0x20)

}; // Size: 0x298

struct FCollectionTransformSelectionByIntAttrDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FString GroupName;                                                                // 0x0248 (size: 0x10)
    FString AttrName;                                                                 // 0x0258 (size: 0x10)
    int32 min;                                                                        // 0x0268 (size: 0x4)
    int32 max;                                                                        // 0x026C (size: 0x4)
    ERangeSettingEnum RangeSetting;                                                   // 0x0270 (size: 0x1)
    bool bInclusive;                                                                  // 0x0271 (size: 0x1)
    FDataflowTransformSelection TransformSelection;                                   // 0x0278 (size: 0x20)

}; // Size: 0x298

struct FCollectionTransformSelectionByPercentageDataflowNode : public FDataflowNode
{
    FDataflowTransformSelection TransformSelection;                                   // 0x0198 (size: 0x20)
    int32 Percentage;                                                                 // 0x01B8 (size: 0x4)
    bool bDeterministic;                                                              // 0x01BC (size: 0x1)
    float RandomSeed;                                                                 // 0x01C0 (size: 0x4)

}; // Size: 0x1C8

struct FCollectionTransformSelectionBySizeDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    float SizeMin;                                                                    // 0x0248 (size: 0x4)
    float SizeMax;                                                                    // 0x024C (size: 0x4)
    ERangeSettingEnum RangeSetting;                                                   // 0x0250 (size: 0x1)
    bool bInclusive;                                                                  // 0x0251 (size: 0x1)
    bool bUseRelativeSize;                                                            // 0x0252 (size: 0x1)
    FDataflowTransformSelection TransformSelection;                                   // 0x0258 (size: 0x20)

}; // Size: 0x278

struct FCollectionTransformSelectionByVolumeDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    float VolumeMin;                                                                  // 0x0248 (size: 0x4)
    float VolumeMax;                                                                  // 0x024C (size: 0x4)
    ERangeSettingEnum RangeSetting;                                                   // 0x0250 (size: 0x1)
    bool bInclusive;                                                                  // 0x0251 (size: 0x1)
    FDataflowTransformSelection TransformSelection;                                   // 0x0258 (size: 0x20)

}; // Size: 0x278

struct FCollectionTransformSelectionChildrenDataflowNode : public FDataflowNode
{
    FDataflowTransformSelection TransformSelection;                                   // 0x0198 (size: 0x20)
    FManagedArrayCollection Collection;                                               // 0x01B8 (size: 0xB0)

}; // Size: 0x268

struct FCollectionTransformSelectionClusterDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0248 (size: 0x20)

}; // Size: 0x268

struct FCollectionTransformSelectionClusterDataflowNode_v2 : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0248 (size: 0x20)

}; // Size: 0x268

struct FCollectionTransformSelectionContactDataflowNode : public FDataflowNode
{
    FDataflowTransformSelection TransformSelection;                                   // 0x0198 (size: 0x20)
    FManagedArrayCollection Collection;                                               // 0x01B8 (size: 0xB0)
    bool bAllowContactInParentLevels;                                                 // 0x0268 (size: 0x1)

}; // Size: 0x270

struct FCollectionTransformSelectionCustomDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FString BoneIndicies;                                                             // 0x0248 (size: 0x10)
    FDataflowTransformSelection TransformSelection;                                   // 0x0258 (size: 0x20)

}; // Size: 0x278

struct FCollectionTransformSelectionFromIndexArrayDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    TArray<int32> BoneIndices;                                                        // 0x0248 (size: 0x10)
    FDataflowTransformSelection TransformSelection;                                   // 0x0258 (size: 0x20)

}; // Size: 0x278

struct FCollectionTransformSelectionInBoxDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FBox Box;                                                                         // 0x0248 (size: 0x38)
    FTransform Transform;                                                             // 0x0280 (size: 0x60)
    ESelectSubjectTypeEnum Type;                                                      // 0x02E0 (size: 0x1)
    bool bAllVerticesMustContainedInBox;                                              // 0x02E1 (size: 0x1)
    FDataflowTransformSelection TransformSelection;                                   // 0x02E8 (size: 0x20)

}; // Size: 0x310

struct FCollectionTransformSelectionInSphereDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FSphere Sphere;                                                                   // 0x0248 (size: 0x20)
    FTransform Transform;                                                             // 0x0270 (size: 0x60)
    ESelectSubjectTypeEnum Type;                                                      // 0x02D0 (size: 0x1)
    bool bAllVerticesMustContainedInSphere;                                           // 0x02D1 (size: 0x1)
    FDataflowTransformSelection TransformSelection;                                   // 0x02D8 (size: 0x20)

}; // Size: 0x300

struct FCollectionTransformSelectionInfoDataflowNode : public FDataflowNode
{
    FDataflowTransformSelection TransformSelection;                                   // 0x0198 (size: 0x20)
    FManagedArrayCollection Collection;                                               // 0x01B8 (size: 0xB0)
    FString String;                                                                   // 0x0268 (size: 0x10)

}; // Size: 0x278

struct FCollectionTransformSelectionInvertDataflowNode : public FDataflowNode
{
    FDataflowTransformSelection TransformSelection;                                   // 0x0198 (size: 0x20)

}; // Size: 0x1B8

struct FCollectionTransformSelectionLeafDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0248 (size: 0x20)

}; // Size: 0x268

struct FCollectionTransformSelectionLevelDataflowNode : public FDataflowNode
{
    FDataflowTransformSelection TransformSelection;                                   // 0x0198 (size: 0x20)
    FManagedArrayCollection Collection;                                               // 0x01B8 (size: 0xB0)

}; // Size: 0x268

struct FCollectionTransformSelectionNoneDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0248 (size: 0x20)

}; // Size: 0x268

struct FCollectionTransformSelectionParentDataflowNode : public FDataflowNode
{
    FDataflowTransformSelection TransformSelection;                                   // 0x0198 (size: 0x20)
    FManagedArrayCollection Collection;                                               // 0x01B8 (size: 0xB0)

}; // Size: 0x268

struct FCollectionTransformSelectionRandomDataflowNode : public FDataflowNode
{
    bool bDeterministic;                                                              // 0x0198 (size: 0x1)
    float RandomSeed;                                                                 // 0x019C (size: 0x4)
    float RandomThreshold;                                                            // 0x01A0 (size: 0x4)
    FManagedArrayCollection Collection;                                               // 0x01A8 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0258 (size: 0x20)

}; // Size: 0x278

struct FCollectionTransformSelectionRootDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0248 (size: 0x20)

}; // Size: 0x268

struct FCollectionTransformSelectionSetOperationDataflowNode : public FDataflowNode
{
    ESetOperationEnum Operation;                                                      // 0x0198 (size: 0x1)
    FDataflowTransformSelection TransformSelectionA;                                  // 0x01A0 (size: 0x20)
    FDataflowTransformSelection TransformSelectionB;                                  // 0x01C0 (size: 0x20)
    FDataflowTransformSelection TransformSelection;                                   // 0x01E0 (size: 0x20)

}; // Size: 0x200

struct FCollectionTransformSelectionSiblingsDataflowNode : public FDataflowNode
{
    FDataflowTransformSelection TransformSelection;                                   // 0x0198 (size: 0x20)
    FManagedArrayCollection Collection;                                               // 0x01B8 (size: 0xB0)

}; // Size: 0x268

struct FCollectionTransformSelectionTargetLevelDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    int32 TargetLevel;                                                                // 0x0248 (size: 0x4)
    bool bSkipEmbedded;                                                               // 0x024C (size: 0x1)
    FDataflowTransformSelection TransformSelection;                                   // 0x0250 (size: 0x20)

}; // Size: 0x270

struct FCollectionVertexSelectionByPercentageDataflowNode : public FDataflowNode
{
    FDataflowVertexSelection VertexSelection;                                         // 0x0198 (size: 0x20)
    int32 Percentage;                                                                 // 0x01B8 (size: 0x4)
    bool bDeterministic;                                                              // 0x01BC (size: 0x1)
    float RandomSeed;                                                                 // 0x01C0 (size: 0x4)

}; // Size: 0x1C8

struct FCollectionVertexSelectionCustomDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FString VertexIndicies;                                                           // 0x0248 (size: 0x10)
    FDataflowVertexSelection VertexSelection;                                         // 0x0258 (size: 0x20)

}; // Size: 0x278

struct FCollectionVertexSelectionSetOperationDataflowNode : public FDataflowNode
{
    ESetOperationEnum Operation;                                                      // 0x0198 (size: 0x1)
    FDataflowVertexSelection VertexSelectionA;                                        // 0x01A0 (size: 0x20)
    FDataflowVertexSelection VertexSelectionB;                                        // 0x01C0 (size: 0x20)
    FDataflowVertexSelection VertexSelection;                                         // 0x01E0 (size: 0x20)

}; // Size: 0x200

struct FCompareFloatDataflowNode : public FDataflowNode
{
    ECompareOperationEnum Operation;                                                  // 0x0198 (size: 0x1)
    float FloatA;                                                                     // 0x019C (size: 0x4)
    float FloatB;                                                                     // 0x01A0 (size: 0x4)
    bool Result;                                                                      // 0x01A4 (size: 0x1)

}; // Size: 0x1A8

struct FCompareIntDataflowNode : public FDataflowNode
{
    ECompareOperationEnum Operation;                                                  // 0x0198 (size: 0x1)
    int32 IntA;                                                                       // 0x019C (size: 0x4)
    int32 IntB;                                                                       // 0x01A0 (size: 0x4)
    bool Result;                                                                      // 0x01A4 (size: 0x1)

}; // Size: 0x1A8

struct FConvexHullToMeshDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FDataflowTransformSelection OptionalSelectionFilter;                              // 0x0248 (size: 0x20)
    class UDynamicMesh* Mesh;                                                         // 0x0268 (size: 0x8)

}; // Size: 0x270

struct FCosDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x0198 (size: 0x4)
    float ReturnValue;                                                                // 0x019C (size: 0x4)

}; // Size: 0x1A0

struct FCreateColorArrayFromFloatArrayDataflowNode : public FDataflowNode
{
    TArray<float> FloatArray;                                                         // 0x0198 (size: 0x10)
    TArray<FLinearColor> ColorArray;                                                  // 0x01A8 (size: 0x10)
    bool bNormalizeInput;                                                             // 0x01B8 (size: 0x1)
    FLinearColor Color;                                                               // 0x01BC (size: 0x10)

}; // Size: 0x1D0

struct FCreateGeometryCollectionFromSourcesDataflowNode : public FDataflowNode
{
    TArray<FGeometryCollectionSource> Sources;                                        // 0x0198 (size: 0x10)
    FManagedArrayCollection Collection;                                               // 0x01A8 (size: 0xB0)
    TArray<class UMaterial*> Materials;                                               // 0x0258 (size: 0x10)
    TArray<class UMaterialInterface*> MaterialInstances;                              // 0x0268 (size: 0x10)
    TArray<FGeometryCollectionAutoInstanceMesh> InstancedMeshes;                      // 0x0278 (size: 0x10)

}; // Size: 0x288

struct FCreateLeafConvexHullsDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FDataflowTransformSelection OptionalSelectionFilter;                              // 0x0248 (size: 0x20)
    EGenerateConvexMethod GenerateMethod;                                             // 0x0268 (size: 0x1)
    float IntersectIfComputedIsSmallerByFactor;                                       // 0x026C (size: 0x4)
    float MinExternalVolumeToIntersect;                                               // 0x0270 (size: 0x4)
    bool bComputeIntersectionsBeforeHull;                                             // 0x0274 (size: 0x1)
    float SimplificationDistanceThreshold;                                            // 0x0278 (size: 0x4)
    FDataflowConvexDecompositionSettings ConvexDecompositionSettings;                 // 0x027C (size: 0x18)

}; // Size: 0x298

struct FCreateNonOverlappingConvexHullsDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    float CanExceedFraction;                                                          // 0x0248 (size: 0x4)
    float SimplificationDistanceThreshold;                                            // 0x024C (size: 0x4)
    EConvexOverlapRemovalMethodEnum OverlapRemovalMethod;                             // 0x0250 (size: 0x1)
    float OverlapRemovalShrinkPercent;                                                // 0x0254 (size: 0x4)
    float CanRemoveFraction;                                                          // 0x0258 (size: 0x4)

}; // Size: 0x260

struct FCrossProductDataflowNode : public FDataflowNode
{
    FVector VectorA;                                                                  // 0x0198 (size: 0x18)
    FVector VectorB;                                                                  // 0x01B0 (size: 0x18)
    FVector ReturnValue;                                                              // 0x01C8 (size: 0x18)

}; // Size: 0x1E0

struct FCubeDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x0198 (size: 0x4)
    float ReturnValue;                                                                // 0x019C (size: 0x4)

}; // Size: 0x1A0

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
    float Degrees;                                                                    // 0x0198 (size: 0x4)
    float Radians;                                                                    // 0x019C (size: 0x4)

}; // Size: 0x1A0

struct FDistanceDataflowNode : public FDataflowNode
{
    FVector PointA;                                                                   // 0x0198 (size: 0x18)
    FVector PointB;                                                                   // 0x01B0 (size: 0x18)
    float ReturnValue;                                                                // 0x01C8 (size: 0x4)

}; // Size: 0x1D0

struct FDivideDataflowNode : public FSafeDivideDataflowNode
{
}; // Size: 0x1A8

struct FDivisionDataflowNode : public FDataflowNode
{
    float Dividend;                                                                   // 0x0198 (size: 0x4)
    float Divisor;                                                                    // 0x019C (size: 0x4)
    float Remainder;                                                                  // 0x01A0 (size: 0x4)
    int32 ReturnValue;                                                                // 0x01A4 (size: 0x4)

}; // Size: 0x1A8

struct FDotProductDataflowNode : public FDataflowNode
{
    FVector VectorA;                                                                  // 0x0198 (size: 0x18)
    FVector VectorB;                                                                  // 0x01B0 (size: 0x18)
    float ReturnValue;                                                                // 0x01C8 (size: 0x4)

}; // Size: 0x1D0

struct FEFitDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x0198 (size: 0x4)
    float OldMin;                                                                     // 0x019C (size: 0x4)
    float OldMax;                                                                     // 0x01A0 (size: 0x4)
    float NewMin;                                                                     // 0x01A4 (size: 0x4)
    float NewMax;                                                                     // 0x01A8 (size: 0x4)
    float ReturnValue;                                                                // 0x01AC (size: 0x4)

}; // Size: 0x1B0

struct FExpDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x0198 (size: 0x4)
    float ReturnValue;                                                                // 0x019C (size: 0x4)

}; // Size: 0x1A0

struct FExpandBoundingBoxDataflowNode : public FDataflowNode
{
    FBox BoundingBox;                                                                 // 0x0198 (size: 0x38)
    FVector min;                                                                      // 0x01D0 (size: 0x18)
    FVector max;                                                                      // 0x01E8 (size: 0x18)
    FVector Center;                                                                   // 0x0200 (size: 0x18)
    FVector HalfExtents;                                                              // 0x0218 (size: 0x18)
    float Volume;                                                                     // 0x0230 (size: 0x4)

}; // Size: 0x238

struct FExpandVectorDataflowNode : public FDataflowNode
{
    FVector Vector;                                                                   // 0x0198 (size: 0x18)
    float X;                                                                          // 0x01B0 (size: 0x4)
    float Y;                                                                          // 0x01B4 (size: 0x4)
    float Z;                                                                          // 0x01B8 (size: 0x4)

}; // Size: 0x1C0

struct FExplodedViewDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    float UniformScale;                                                               // 0x0248 (size: 0x4)
    FVector scale;                                                                    // 0x0250 (size: 0x18)

}; // Size: 0x268

struct FFieldMakeDenseFloatArrayDataflowNode : public FDataflowNode
{
    TArray<float> FieldFloatInput;                                                    // 0x0198 (size: 0x10)
    TArray<int32> FieldRemap;                                                         // 0x01A8 (size: 0x10)
    int32 NumSamplePositions;                                                         // 0x01B8 (size: 0x4)
    float Default;                                                                    // 0x01BC (size: 0x4)
    TArray<float> FieldFloatResult;                                                   // 0x01C0 (size: 0x10)

}; // Size: 0x1D0

struct FFitDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x0198 (size: 0x4)
    float OldMin;                                                                     // 0x019C (size: 0x4)
    float OldMax;                                                                     // 0x01A0 (size: 0x4)
    float NewMin;                                                                     // 0x01A4 (size: 0x4)
    float NewMax;                                                                     // 0x01A8 (size: 0x4)
    float ReturnValue;                                                                // 0x01AC (size: 0x4)

}; // Size: 0x1B0

struct FFixTinyGeoDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0248 (size: 0x20)
    EFixTinyGeoMergeType MergeType;                                                   // 0x0268 (size: 0x1)
    bool bOnFractureLevel;                                                            // 0x0269 (size: 0x1)
    bool bOnlyClusters;                                                               // 0x026A (size: 0x1)
    bool bOnlySameParent;                                                             // 0x026B (size: 0x1)
    bool bFractureLevelIsAll;                                                         // 0x026C (size: 0x1)
    EFixTinyGeoNeighborSelectionMethod NeighborSelection;                             // 0x026D (size: 0x1)
    bool bOnlyToConnected;                                                            // 0x026E (size: 0x1)
    EFixTinyGeoUseBoneSelection UseBoneSelection;                                     // 0x026F (size: 0x1)
    EFixTinyGeoGeometrySelectionMethod SelectionMethod;                               // 0x0270 (size: 0x1)
    float MinVolumeCubeRoot;                                                          // 0x0274 (size: 0x4)
    float RelativeVolume;                                                             // 0x0278 (size: 0x4)
    bool AddSamplesForCollision;                                                      // 0x027C (size: 0x1)
    float CollisionSampleSpacing;                                                     // 0x0280 (size: 0x4)

}; // Size: 0x288

struct FFloatArrayComputeStatisticsDataflowNode : public FDataflowNode
{
    TArray<float> FloatArray;                                                         // 0x0198 (size: 0x10)
    FDataflowTransformSelection TransformSelection;                                   // 0x01A8 (size: 0x20)
    EStatisticsOperationEnum OperationName;                                           // 0x01C8 (size: 0x1)
    float Value;                                                                      // 0x01CC (size: 0x4)
    TArray<int32> Indices;                                                            // 0x01D0 (size: 0x10)

}; // Size: 0x1E0

struct FFloatArrayNormalizeDataflowNode : public FDataflowNode
{
    TArray<float> InFloatArray;                                                       // 0x0198 (size: 0x10)
    FDataflowVertexSelection Selection;                                               // 0x01A8 (size: 0x20)
    float MinRange;                                                                   // 0x01C8 (size: 0x4)
    float MaxRange;                                                                   // 0x01CC (size: 0x4)
    TArray<float> OutFloatArray;                                                      // 0x01D0 (size: 0x10)

}; // Size: 0x1E0

struct FFloatArrayToIntArrayDataflowNode : public FDataflowNode
{
    EFloatArrayToIntArrayFunctionEnum Function;                                       // 0x0198 (size: 0x1)
    TArray<float> FloatArray;                                                         // 0x01A0 (size: 0x10)
    TArray<int32> IntArray;                                                           // 0x01B0 (size: 0x10)

}; // Size: 0x1C0

struct FFloatArrayToVertexSelectionDataflowNode : public FDataflowNode
{
    TArray<float> FloatArray;                                                         // 0x0198 (size: 0x10)
    ECompareOperation1Enum Operation;                                                 // 0x01A8 (size: 0x1)
    float Threshold;                                                                  // 0x01AC (size: 0x4)
    FDataflowVertexSelection VertexSelection;                                         // 0x01B0 (size: 0x20)

}; // Size: 0x1D0

struct FFloatMathExpressionDataflowNode : public FDataflowNode
{
    float A;                                                                          // 0x0198 (size: 0x4)
    float B;                                                                          // 0x019C (size: 0x4)
    float C;                                                                          // 0x01A0 (size: 0x4)
    float D;                                                                          // 0x01A4 (size: 0x4)
    FString Expression;                                                               // 0x01A8 (size: 0x10)
    float ReturnValue;                                                                // 0x01B8 (size: 0x4)

}; // Size: 0x1C0

struct FFloatToDoubleDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x0198 (size: 0x4)
    double Double;                                                                    // 0x01A0 (size: 0x8)

}; // Size: 0x1A8

struct FFloatToIntDataflowNode : public FDataflowNode
{
    EFloatToIntFunctionEnum Function;                                                 // 0x0198 (size: 0x1)
    float float;                                                                      // 0x019C (size: 0x4)
    int32 int;                                                                        // 0x01A0 (size: 0x4)

}; // Size: 0x1A8

struct FFloatToStringDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x0198 (size: 0x4)
    FString String;                                                                   // 0x01A0 (size: 0x10)

}; // Size: 0x1B0

struct FFloorDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x0198 (size: 0x4)
    float ReturnValue;                                                                // 0x019C (size: 0x4)

}; // Size: 0x1A0

struct FFracDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x0198 (size: 0x4)
    float ReturnValue;                                                                // 0x019C (size: 0x4)

}; // Size: 0x1A0

struct FGenerateClusterConvexHullsFromChildrenHullsDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FDataflowSphereCovering SphereCovering;                                           // 0x0248 (size: 0x20)
    int32 ConvexCount;                                                                // 0x0268 (size: 0x4)
    double ErrorTolerance;                                                            // 0x0270 (size: 0x8)
    bool bPreferExternalCollisionShapes;                                              // 0x0278 (size: 0x1)
    FDataflowTransformSelection OptionalSelectionFilter;                              // 0x0280 (size: 0x20)
    bool bProtectNegativeSpace;                                                       // 0x02A0 (size: 0x1)
    ENegativeSpaceSampleMethodDataflowEnum SampleMethod;                              // 0x02A1 (size: 0x1)
    bool bRequireSearchSampleCoverage;                                                // 0x02A2 (size: 0x1)
    bool bOnlyConnectedToHull;                                                        // 0x02A3 (size: 0x1)
    int32 TargetNumSamples;                                                           // 0x02A4 (size: 0x4)
    double MinSampleSpacing;                                                          // 0x02A8 (size: 0x8)
    double NegativeSpaceTolerance;                                                    // 0x02B0 (size: 0x8)
    double MinRadius;                                                                 // 0x02B8 (size: 0x8)

}; // Size: 0x2C0

struct FGenerateClusterConvexHullsFromLeafHullsDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FDataflowSphereCovering SphereCovering;                                           // 0x0248 (size: 0x20)
    int32 ConvexCount;                                                                // 0x0268 (size: 0x4)
    double ErrorTolerance;                                                            // 0x0270 (size: 0x8)
    bool bPreferExternalCollisionShapes;                                              // 0x0278 (size: 0x1)
    EAllowConvexMergeMethod AllowMerges;                                              // 0x0279 (size: 0x1)
    FDataflowTransformSelection OptionalSelectionFilter;                              // 0x0280 (size: 0x20)
    bool bProtectNegativeSpace;                                                       // 0x02A0 (size: 0x1)
    ENegativeSpaceSampleMethodDataflowEnum SampleMethod;                              // 0x02A1 (size: 0x1)
    bool bRequireSearchSampleCoverage;                                                // 0x02A2 (size: 0x1)
    bool bOnlyConnectedToHull;                                                        // 0x02A3 (size: 0x1)
    int32 TargetNumSamples;                                                           // 0x02A4 (size: 0x4)
    double MinSampleSpacing;                                                          // 0x02A8 (size: 0x8)
    double NegativeSpaceTolerance;                                                    // 0x02B0 (size: 0x8)
    double MinRadius;                                                                 // 0x02B8 (size: 0x8)

}; // Size: 0x2C0

struct FGeometryCollectionSetKinematicVertexSelectionNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FDataflowVertexSelection VertexSelection;                                         // 0x0248 (size: 0x20)

}; // Size: 0x268

struct FGeometryCollectionTerminalDataflowNode : public FDataflowTerminalNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    TArray<class UMaterial*> Materials;                                               // 0x0248 (size: 0x10)
    TArray<class UMaterialInterface*> MaterialInstances;                              // 0x0258 (size: 0x10)
    TArray<FGeometryCollectionAutoInstanceMesh> InstancedMeshes;                      // 0x0268 (size: 0x10)

}; // Size: 0x278

struct FGeometryCollectionToCollectionDataflowNode : public FDataflowNode
{
    class UGeometryCollection* GeometryCollection;                                    // 0x0198 (size: 0x8)
    FManagedArrayCollection Collection;                                               // 0x01A0 (size: 0xB0)
    TArray<class UMaterial*> Materials;                                               // 0x0250 (size: 0x10)
    TArray<class UMaterialInterface*> MaterialInstances;                              // 0x0260 (size: 0x10)
    TArray<FGeometryCollectionAutoInstanceMesh> InstancedMeshes;                      // 0x0270 (size: 0x10)

}; // Size: 0x280

struct FGeometryCollectionTransferVertexAttributeNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FManagedArrayCollection FromCollection;                                           // 0x0248 (size: 0xB0)
    FCollectionAttributeKey AttributeKey;                                             // 0x02F8 (size: 0x20)
    EDataflowTransferVertexAttributeNodeBoundingVolume BoundingVolumeType;            // 0x0318 (size: 0x1)
    EDataflowTransferVertexAttributeNodeSourceScale SourceScale;                      // 0x0319 (size: 0x1)
    EDataflowTransferVertexAttributeNodeFalloff Falloff;                              // 0x031A (size: 0x1)
    float FalloffThreshold;                                                           // 0x031C (size: 0x4)
    float EdgeMultiplier;                                                             // 0x0320 (size: 0x4)
    float BoundMultiplier;                                                            // 0x0324 (size: 0x4)

}; // Size: 0x328

struct FGeometryCollectionTransferVertexSkinWeightsNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FManagedArrayCollection FromCollection;                                           // 0x0248 (size: 0xB0)
    EDataflowTransferVertexAttributeNodeBoundingVolume BoundingVolumeType;            // 0x02F8 (size: 0x1)
    EDataflowTransferVertexAttributeNodeSourceScale SourceScale;                      // 0x02F9 (size: 0x1)
    EDataflowTransferVertexAttributeNodeFalloff Falloff;                              // 0x02FA (size: 0x1)
    float FalloffThreshold;                                                           // 0x02FC (size: 0x4)
    float EdgeMultiplier;                                                             // 0x0300 (size: 0x4)
    float BoundMultiplier;                                                            // 0x0304 (size: 0x4)

}; // Size: 0x308

struct FGeometryCollectionVertexScalarToVertexIndicesNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FCollectionAttributeKey AttributeKey;                                             // 0x0248 (size: 0x20)
    float SelectionThreshold;                                                         // 0x0268 (size: 0x4)
    TArray<int32> VertexIndices;                                                      // 0x0270 (size: 0x10)

}; // Size: 0x280

struct FGeometrySelectionToVertexSelectionDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FString GeometryIndices;                                                          // 0x0248 (size: 0x10)
    FDataflowGeometrySelection GeometrySelection;                                     // 0x0258 (size: 0x20)
    FDataflowVertexSelection VertexSelection;                                         // 0x0278 (size: 0x20)

}; // Size: 0x298

struct FGetArrayElementDataflowNode : public FDataflowNode
{
    int32 Index;                                                                      // 0x0198 (size: 0x4)
    TArray<FVector> Points;                                                           // 0x01A0 (size: 0x10)
    FVector Point;                                                                    // 0x01B0 (size: 0x18)

}; // Size: 0x1C8

struct FGetBoolOverrideFromAssetDataflowNode : public FDataflowOverrideNode
{
    bool bool;                                                                        // 0x01B8 (size: 0x1)
    bool BoolDefault;                                                                 // 0x01B9 (size: 0x1)

}; // Size: 0x1C0

struct FGetBoundingBoxesFromCollectionDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0248 (size: 0x20)
    TArray<FBox> BoundingBoxes;                                                       // 0x0268 (size: 0x10)

}; // Size: 0x278

struct FGetBoxLengthsDataflowNode : public FDataflowNode
{
    TArray<FBox> Boxes;                                                               // 0x0198 (size: 0x10)
    TArray<float> Lengths;                                                            // 0x01A8 (size: 0x10)
    EBoxLengthMeasurementMethod MeasurementMethod;                                    // 0x01B8 (size: 0x1)

}; // Size: 0x1C0

struct FGetCentroidsFromCollectionDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0248 (size: 0x20)
    TArray<FVector> Centroids;                                                        // 0x0268 (size: 0x10)

}; // Size: 0x278

struct FGetCollectionAttributeDataTypedDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FCollectionAttributeKey AttributeKey;                                             // 0x0248 (size: 0x20)
    EStandardGroupNameEnum GroupName;                                                 // 0x0268 (size: 0x1)
    FString CustomGroupName;                                                          // 0x0270 (size: 0x10)
    FString AttrName;                                                                 // 0x0280 (size: 0x10)
    TArray<bool> BoolAttributeData;                                                   // 0x0290 (size: 0x10)
    TArray<float> FloatAttributeData;                                                 // 0x02A0 (size: 0x10)
    TArray<double> DoubleAttributeData;                                               // 0x02B0 (size: 0x10)
    TArray<int32> Int32AttributeData;                                                 // 0x02C0 (size: 0x10)
    TArray<FString> StringAttributeData;                                              // 0x02D0 (size: 0x10)
    TArray<FVector3f> Vector3fAttributeData;                                          // 0x02E0 (size: 0x10)
    TArray<FVector3d> Vector3dAttributeData;                                          // 0x02F0 (size: 0x10)
    TArray<FLinearColor> LinearColorAttributeData;                                    // 0x0300 (size: 0x10)

}; // Size: 0x310

struct FGetCollectionFromAssetDataflowNode : public FDataflowNode
{
    class UGeometryCollection* CollectionAsset;                                       // 0x0198 (size: 0x8)
    FManagedArrayCollection Collection;                                               // 0x01A0 (size: 0xB0)

}; // Size: 0x250

struct FGetConvexHullVolumeDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0248 (size: 0x20)
    float Volume;                                                                     // 0x0268 (size: 0x4)
    bool bSumChildrenForClustersWithoutHulls;                                         // 0x026C (size: 0x1)
    bool bVolumeOfUnion;                                                              // 0x026D (size: 0x1)

}; // Size: 0x270

struct FGetFloatArrayElementDataflowNode : public FDataflowNode
{
    int32 Index;                                                                      // 0x0198 (size: 0x4)
    TArray<float> FloatArray;                                                         // 0x01A0 (size: 0x10)
    float FloatValue;                                                                 // 0x01B0 (size: 0x4)

}; // Size: 0x1B8

struct FGetFloatOverrideFromAssetDataflowNode : public FDataflowOverrideNode
{
    float float;                                                                      // 0x01B8 (size: 0x4)
    float FloatDefault;                                                               // 0x01BC (size: 0x4)

}; // Size: 0x1C0

struct FGetGeometryCollectionAssetDataflowNode : public FDataflowNode
{
    class UGeometryCollection* Asset;                                                 // 0x0198 (size: 0x8)

}; // Size: 0x1A0

struct FGetGeometryCollectionSourcesDataflowNode : public FDataflowNode
{
    class UGeometryCollection* Asset;                                                 // 0x0198 (size: 0x8)
    TArray<FGeometryCollectionSource> Sources;                                        // 0x01A0 (size: 0x10)

}; // Size: 0x1B0

struct FGetIntOverrideFromAssetDataflowNode : public FDataflowOverrideNode
{
    int32 int;                                                                        // 0x01B8 (size: 0x4)
    int32 IntDefault;                                                                 // 0x01BC (size: 0x4)

}; // Size: 0x1C0

struct FGetMaterialFromMaterialsArrayDataflowNode : public FDataflowNode
{
    TArray<class UMaterial*> Materials;                                               // 0x0198 (size: 0x10)
    class UMaterial* Material;                                                        // 0x01A8 (size: 0x8)
    int32 MaterialIdx;                                                                // 0x01B0 (size: 0x4)

}; // Size: 0x1B8

struct FGetMeshDataDataflowNode : public FDataflowNode
{
    class UDynamicMesh* Mesh;                                                         // 0x0198 (size: 0x8)
    int32 vertexcount;                                                                // 0x01A0 (size: 0x4)
    int32 EdgeCount;                                                                  // 0x01A4 (size: 0x4)
    int32 TriangleCount;                                                              // 0x01A8 (size: 0x4)

}; // Size: 0x1B0

struct FGetNumArrayElementsDataflowNode : public FDataflowNode
{
    TArray<float> FloatArray;                                                         // 0x0198 (size: 0x10)
    TArray<int32> IntArray;                                                           // 0x01A8 (size: 0x10)
    TArray<FVector> Points;                                                           // 0x01B8 (size: 0x10)
    TArray<FVector3f> Vector3fArray;                                                  // 0x01C8 (size: 0x10)
    int32 NumElements;                                                                // 0x01D8 (size: 0x4)

}; // Size: 0x1E0

struct FGetNumElementsInCollectionGroupDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    EStandardGroupNameEnum GroupName;                                                 // 0x0248 (size: 0x1)
    FString CustomGroupName;                                                          // 0x0250 (size: 0x10)
    int32 NumElements;                                                                // 0x0260 (size: 0x4)

}; // Size: 0x268

struct FGetRootIndexFromCollectionDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    int32 RootIndex;                                                                  // 0x0248 (size: 0x4)

}; // Size: 0x250

struct FGetSchemaDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FString String;                                                                   // 0x0248 (size: 0x10)

}; // Size: 0x258

struct FGetStringOverrideFromAssetDataflowNode : public FDataflowOverrideNode
{
    FString String;                                                                   // 0x01B8 (size: 0x10)
    FString StringDefault;                                                            // 0x01C8 (size: 0x10)

}; // Size: 0x1D8

struct FGridScatterPointsDataflowNode : public FDataflowNode
{
    int32 NumberOfPointsInX;                                                          // 0x0198 (size: 0x4)
    int32 NumberOfPointsInY;                                                          // 0x019C (size: 0x4)
    int32 NumberOfPointsInZ;                                                          // 0x01A0 (size: 0x4)
    int32 RandomSeed;                                                                 // 0x01A4 (size: 0x4)
    float MaxRandomDisplacementX;                                                     // 0x01A8 (size: 0x4)
    float MaxRandomDisplacementY;                                                     // 0x01AC (size: 0x4)
    float MaxRandomDisplacementZ;                                                     // 0x01B0 (size: 0x4)
    FBox BoundingBox;                                                                 // 0x01B8 (size: 0x38)
    TArray<FVector> Points;                                                           // 0x01F0 (size: 0x10)

}; // Size: 0x200

struct FHashStringDataflowNode : public FDataflowNode
{
    FString String;                                                                   // 0x0198 (size: 0x10)
    int32 Hash;                                                                       // 0x01A8 (size: 0x4)

}; // Size: 0x1B0

struct FHashVectorDataflowNode : public FDataflowNode
{
    FVector Vector;                                                                   // 0x0198 (size: 0x18)
    int32 Hash;                                                                       // 0x01B0 (size: 0x4)

}; // Size: 0x1B8

struct FIntToBoolDataflowNode : public FDataflowNode
{
    int32 int;                                                                        // 0x0198 (size: 0x4)
    bool bool;                                                                        // 0x019C (size: 0x1)

}; // Size: 0x1A0

struct FIntToDoubleDataflowNode : public FDataflowNode
{
    int32 int;                                                                        // 0x0198 (size: 0x4)
    double Double;                                                                    // 0x01A0 (size: 0x8)

}; // Size: 0x1A8

struct FIntToFloatDataflowNode : public FDataflowNode
{
    int32 int;                                                                        // 0x0198 (size: 0x4)
    float float;                                                                      // 0x019C (size: 0x4)

}; // Size: 0x1A0

struct FIntToStringDataflowNode : public FDataflowNode
{
    int32 int;                                                                        // 0x0198 (size: 0x4)
    FString String;                                                                   // 0x01A0 (size: 0x10)

}; // Size: 0x1B0

struct FInverseSqrtDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x0198 (size: 0x4)
    float ReturnValue;                                                                // 0x019C (size: 0x4)

}; // Size: 0x1A0

struct FInvertTransformDataflowNode : public FDataflowNode
{
    FTransform InTransform;                                                           // 0x01A0 (size: 0x60)
    FTransform OutTransform;                                                          // 0x0200 (size: 0x60)

}; // Size: 0x260

struct FIsNearlyZeroDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x0198 (size: 0x4)
    bool ReturnValue;                                                                 // 0x019C (size: 0x1)

}; // Size: 0x1A0

struct FLengthDataflowNode : public FDataflowNode
{
    FVector Vector;                                                                   // 0x0198 (size: 0x18)
    float ReturnValue;                                                                // 0x01B0 (size: 0x4)

}; // Size: 0x1B8

struct FLerpDataflowNode : public FDataflowNode
{
    float A;                                                                          // 0x0198 (size: 0x4)
    float B;                                                                          // 0x019C (size: 0x4)
    float Alpha;                                                                      // 0x01A0 (size: 0x4)
    float ReturnValue;                                                                // 0x01A4 (size: 0x4)

}; // Size: 0x1A8

struct FLogDataflowNode : public FDataflowNode
{
    float base;                                                                       // 0x0198 (size: 0x4)
    float A;                                                                          // 0x019C (size: 0x4)
    float ReturnValue;                                                                // 0x01A0 (size: 0x4)

}; // Size: 0x1A8

struct FLogStringDataflowNode : public FDataflowNode
{
    bool bPrintToLog;                                                                 // 0x0198 (size: 0x1)
    FString String;                                                                   // 0x01A0 (size: 0x10)

}; // Size: 0x1B0

struct FLogeDataflowNode : public FDataflowNode
{
    float A;                                                                          // 0x0198 (size: 0x4)
    float ReturnValue;                                                                // 0x019C (size: 0x4)

}; // Size: 0x1A0

struct FMakeBoxDataflowNode : public FDataflowNode
{
    EMakeBoxDataTypeEnum DataType;                                                    // 0x0198 (size: 0x1)
    FVector min;                                                                      // 0x01A0 (size: 0x18)
    FVector max;                                                                      // 0x01B8 (size: 0x18)
    FVector Center;                                                                   // 0x01D0 (size: 0x18)
    FVector Size;                                                                     // 0x01E8 (size: 0x18)
    FBox Box;                                                                         // 0x0200 (size: 0x38)

}; // Size: 0x238

struct FMakeDataflowConvexDecompositionSettingsNode : public FDataflowNode
{
    float MinSizeToDecompose;                                                         // 0x0198 (size: 0x4)
    float MaxGeoToHullVolumeRatioToDecompose;                                         // 0x019C (size: 0x4)
    float ErrorTolerance;                                                             // 0x01A0 (size: 0x4)
    int32 MaxHullsPerGeometry;                                                        // 0x01A4 (size: 0x4)
    float MinThicknessTolerance;                                                      // 0x01A8 (size: 0x4)
    int32 NumAdditionalSplits;                                                        // 0x01AC (size: 0x4)
    FDataflowConvexDecompositionSettings DecompositionSettings;                       // 0x01B0 (size: 0x18)

}; // Size: 0x1C8

struct FMakeFloatArrayDataflowNode : public FDataflowNode
{
    int32 NumElements;                                                                // 0x0198 (size: 0x4)
    float Value;                                                                      // 0x019C (size: 0x4)
    TArray<float> FloatArray;                                                         // 0x01A0 (size: 0x10)

}; // Size: 0x1B0

struct FMakeLiteralBoolDataflowNode : public FDataflowNode
{
    bool Value;                                                                       // 0x0198 (size: 0x1)
    bool bool;                                                                        // 0x0199 (size: 0x1)

}; // Size: 0x1A0

struct FMakeLiteralFloatDataflowNode : public FDataflowNode
{
    float Value;                                                                      // 0x0198 (size: 0x4)
    float float;                                                                      // 0x019C (size: 0x4)

}; // Size: 0x1A0

struct FMakeLiteralIntDataflowNode : public FDataflowNode
{
    int32 Value;                                                                      // 0x0198 (size: 0x4)
    int32 int;                                                                        // 0x019C (size: 0x4)

}; // Size: 0x1A0

struct FMakeLiteralStringDataflowNode : public FDataflowNode
{
    FString Value;                                                                    // 0x0198 (size: 0x10)
    FString String;                                                                   // 0x01A8 (size: 0x10)

}; // Size: 0x1B8

struct FMakeLiteralVectorDataflowNode : public FDataflowNode
{
    float X;                                                                          // 0x0198 (size: 0x4)
    float Y;                                                                          // 0x019C (size: 0x4)
    float Z;                                                                          // 0x01A0 (size: 0x4)
    FVector Vector;                                                                   // 0x01A8 (size: 0x18)

}; // Size: 0x1C0

struct FMakeMaterialDataflowNode : public FDataflowNode
{
    class UMaterial* InMaterial;                                                      // 0x0198 (size: 0x8)
    class UMaterial* Material;                                                        // 0x01A0 (size: 0x8)

}; // Size: 0x1A8

struct FMakeMaterialsArrayDataflowNode : public FDataflowNode
{
    TArray<class UMaterial*> Materials;                                               // 0x0198 (size: 0x10)

}; // Size: 0x1A8

struct FMakePointsDataflowNode : public FDataflowNode
{
    TArray<FVector> Point;                                                            // 0x0198 (size: 0x10)
    TArray<FVector> Points;                                                           // 0x01A8 (size: 0x10)

}; // Size: 0x1B8

struct FMakeQuaternionDataflowNode : public FDataflowNode
{
    float X;                                                                          // 0x0198 (size: 0x4)
    float Y;                                                                          // 0x019C (size: 0x4)
    float Z;                                                                          // 0x01A0 (size: 0x4)
    float W;                                                                          // 0x01A4 (size: 0x4)
    FQuat Quaternion;                                                                 // 0x01B0 (size: 0x20)

}; // Size: 0x1D0

struct FMakeSphereDataflowNode : public FDataflowNode
{
    FVector Center;                                                                   // 0x0198 (size: 0x18)
    float Radius;                                                                     // 0x01B0 (size: 0x4)
    FSphere Sphere;                                                                   // 0x01B8 (size: 0x20)

}; // Size: 0x1D8

struct FMakeTransformDataflowNode : public FDataflowNode
{
    FVector InTranslation;                                                            // 0x0198 (size: 0x18)
    FVector InRotation;                                                               // 0x01B0 (size: 0x18)
    FVector InScale;                                                                  // 0x01C8 (size: 0x18)
    FTransform OutTransform;                                                          // 0x01E0 (size: 0x60)

}; // Size: 0x240

struct FMaterialsInfoDataflowNode : public FDataflowNode
{
    TArray<class UMaterial*> Materials;                                               // 0x0198 (size: 0x10)
    FString String;                                                                   // 0x01A8 (size: 0x10)

}; // Size: 0x1B8

struct FMathConstantsDataflowNode : public FDataflowNode
{
    EMathConstantsEnum Constant;                                                      // 0x0198 (size: 0x1)
    float ReturnValue;                                                                // 0x019C (size: 0x4)

}; // Size: 0x1A0

struct FMathExpressionDataflowNode : public FDataflowNode
{
    FDataflowNumericTypes A;                                                          // 0x0198 (size: 0x8)
    FDataflowNumericTypes B;                                                          // 0x01A0 (size: 0x8)
    FDataflowNumericTypes C;                                                          // 0x01A8 (size: 0x8)
    FDataflowNumericTypes D;                                                          // 0x01B0 (size: 0x8)
    FString Expression;                                                               // 0x01B8 (size: 0x10)
    FDataflowNumericTypes ReturnValue;                                                // 0x01C8 (size: 0x8)

}; // Size: 0x1D0

struct FMax3DataflowNode : public FDataflowNode
{
    float FloatA;                                                                     // 0x0198 (size: 0x4)
    float FloatB;                                                                     // 0x019C (size: 0x4)
    float FloatC;                                                                     // 0x01A0 (size: 0x4)
    float ReturnValue;                                                                // 0x01A4 (size: 0x4)

}; // Size: 0x1A8

struct FMaxDataflowNode : public FDataflowNode
{
    float FloatA;                                                                     // 0x0198 (size: 0x4)
    float FloatB;                                                                     // 0x019C (size: 0x4)
    float ReturnValue;                                                                // 0x01A0 (size: 0x4)

}; // Size: 0x1A8

struct FMergeConvexHullsDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FDataflowSphereCovering SphereCovering;                                           // 0x0248 (size: 0x20)
    int32 MaxConvexCount;                                                             // 0x0268 (size: 0x4)
    double ErrorTolerance;                                                            // 0x0270 (size: 0x8)
    FDataflowTransformSelection OptionalSelectionFilter;                              // 0x0278 (size: 0x20)
    bool bProtectNegativeSpace;                                                       // 0x0298 (size: 0x1)
    bool bComputeNegativeSpacePerBone;                                                // 0x0299 (size: 0x1)
    ENegativeSpaceSampleMethodDataflowEnum SampleMethod;                              // 0x029A (size: 0x1)
    bool bRequireSearchSampleCoverage;                                                // 0x029B (size: 0x1)
    bool bOnlyConnectedToHull;                                                        // 0x029C (size: 0x1)
    int32 TargetNumSamples;                                                           // 0x02A0 (size: 0x4)
    double MinSampleSpacing;                                                          // 0x02A8 (size: 0x8)
    double NegativeSpaceTolerance;                                                    // 0x02B0 (size: 0x8)
    double MinRadius;                                                                 // 0x02B8 (size: 0x8)

}; // Size: 0x2C0

struct FMergeInCollectionDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0248 (size: 0x20)

}; // Size: 0x268

struct FMeshAppendDataflowNode : public FDataflowNode
{
    class UDynamicMesh* Mesh1;                                                        // 0x0198 (size: 0x8)
    class UDynamicMesh* Mesh2;                                                        // 0x01A0 (size: 0x8)
    class UDynamicMesh* Mesh;                                                         // 0x01A8 (size: 0x8)

}; // Size: 0x1B0

struct FMeshBooleanDataflowNode : public FDataflowNode
{
    EMeshBooleanOperationEnum Operation;                                              // 0x0198 (size: 0x1)
    class UDynamicMesh* Mesh1;                                                        // 0x01A0 (size: 0x8)
    class UDynamicMesh* Mesh2;                                                        // 0x01A8 (size: 0x8)
    class UDynamicMesh* Mesh;                                                         // 0x01B0 (size: 0x8)

}; // Size: 0x1B8

struct FMeshCopyToPointsDataflowNode : public FDataflowNode
{
    TArray<FVector> Points;                                                           // 0x0198 (size: 0x10)
    class UDynamicMesh* MeshToCopy;                                                   // 0x01A8 (size: 0x8)
    float scale;                                                                      // 0x01B0 (size: 0x4)
    class UDynamicMesh* Mesh;                                                         // 0x01B8 (size: 0x8)

}; // Size: 0x1C0

struct FMeshCutterDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FBox BoundingBox;                                                                 // 0x0248 (size: 0x38)
    FDataflowTransformSelection TransformSelection;                                   // 0x0280 (size: 0x20)
    FTransform Transform;                                                             // 0x02A0 (size: 0x60)
    class UStaticMesh* CuttingStaticMesh;                                             // 0x0300 (size: 0x8)
    bool bUseHiRes;                                                                   // 0x0308 (size: 0x1)
    int32 LODLevel;                                                                   // 0x030C (size: 0x4)
    EMeshCutterCutDistribution CutDistribution;                                       // 0x0310 (size: 0x1)
    int32 NumberToScatter;                                                            // 0x0314 (size: 0x4)
    int32 GridX;                                                                      // 0x0318 (size: 0x4)
    int32 GridY;                                                                      // 0x031C (size: 0x4)
    int32 GridZ;                                                                      // 0x0320 (size: 0x4)
    float Variability;                                                                // 0x0324 (size: 0x4)
    float MinScaleFactor;                                                             // 0x0328 (size: 0x4)
    float MaxScaleFactor;                                                             // 0x032C (size: 0x4)
    bool bRandomOrientation;                                                          // 0x0330 (size: 0x1)
    float RollRange;                                                                  // 0x0334 (size: 0x4)
    float PitchRange;                                                                 // 0x0338 (size: 0x4)
    float YawRange;                                                                   // 0x033C (size: 0x4)
    int32 RandomSeed;                                                                 // 0x0340 (size: 0x4)
    float ChanceToFracture;                                                           // 0x0344 (size: 0x4)
    bool SplitIslands;                                                                // 0x0348 (size: 0x1)
    bool AddSamplesForCollision;                                                      // 0x0349 (size: 0x1)
    float CollisionSampleSpacing;                                                     // 0x034C (size: 0x4)
    FDataflowTransformSelection NewGeometryTransformSelection;                        // 0x0350 (size: 0x20)

}; // Size: 0x370

struct FMeshInfoDataflowNode : public FDataflowNode
{
    class UDynamicMesh* Mesh;                                                         // 0x0198 (size: 0x8)
    FString InfoString;                                                               // 0x01A0 (size: 0x10)

}; // Size: 0x1B0

struct FMeshToCollectionDataflowNode : public FDataflowNode
{
    class UDynamicMesh* Mesh;                                                         // 0x0198 (size: 0x8)
    FManagedArrayCollection Collection;                                               // 0x01A0 (size: 0xB0)

}; // Size: 0x250

struct FMeshToOBJStringDebugDataflowNode : public FDataflowNode
{
    class UDynamicMesh* Mesh;                                                         // 0x0198 (size: 0x8)
    bool bInvertFaces;                                                                // 0x01A0 (size: 0x1)
    FString StringOBJ;                                                                // 0x01A8 (size: 0x10)

}; // Size: 0x1B8

struct FMin3DataflowNode : public FDataflowNode
{
    float FloatA;                                                                     // 0x0198 (size: 0x4)
    float FloatB;                                                                     // 0x019C (size: 0x4)
    float FloatC;                                                                     // 0x01A0 (size: 0x4)
    float ReturnValue;                                                                // 0x01A4 (size: 0x4)

}; // Size: 0x1A8

struct FMinDataflowNode : public FDataflowNode
{
    float FloatA;                                                                     // 0x0198 (size: 0x4)
    float FloatB;                                                                     // 0x019C (size: 0x4)
    float ReturnValue;                                                                // 0x01A0 (size: 0x4)

}; // Size: 0x1A8

struct FMultiplyDataflowNode : public FDataflowNode
{
    float FloatA;                                                                     // 0x0198 (size: 0x4)
    float FloatB;                                                                     // 0x019C (size: 0x4)
    float ReturnValue;                                                                // 0x01A0 (size: 0x4)

}; // Size: 0x1A8

struct FMultiplyTransformDataflowNode : public FDataflowNode
{
    FTransform InLeftTransform;                                                       // 0x01A0 (size: 0x60)
    FTransform InRightTransform;                                                      // 0x0200 (size: 0x60)
    FTransform OutTransform;                                                          // 0x0260 (size: 0x60)

}; // Size: 0x2C0

struct FNegateDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x0198 (size: 0x4)
    float ReturnValue;                                                                // 0x019C (size: 0x4)

}; // Size: 0x1A0

struct FNoiseFieldDataflowNode : public FDataflowNode
{
    TArray<FVector3f> SamplePositions;                                                // 0x0198 (size: 0x10)
    FDataflowVertexSelection SampleIndices;                                           // 0x01A8 (size: 0x20)
    float MinRange;                                                                   // 0x01C8 (size: 0x4)
    float MaxRange;                                                                   // 0x01CC (size: 0x4)
    FTransform Transform;                                                             // 0x01D0 (size: 0x60)
    TArray<float> FieldFloatResult;                                                   // 0x0230 (size: 0x10)
    TArray<int32> FieldRemap;                                                         // 0x0240 (size: 0x10)
    int32 NumSamplePositions;                                                         // 0x0250 (size: 0x4)

}; // Size: 0x260

struct FNonUniformPointSamplingDataflowNode : public FDataflowNode
{
    class UDynamicMesh* TargetMesh;                                                   // 0x0198 (size: 0x8)
    float SamplingRadius;                                                             // 0x01A0 (size: 0x4)
    int32 MaxNumSamples;                                                              // 0x01A4 (size: 0x4)
    float SubSampleDensity;                                                           // 0x01A8 (size: 0x4)
    int32 RandomSeed;                                                                 // 0x01AC (size: 0x4)
    float MaxSamplingRadius;                                                          // 0x01B0 (size: 0x4)
    ENonUniformSamplingDistributionMode SizeDistribution;                             // 0x01B4 (size: 0x1)
    float SizeDistributionPower;                                                      // 0x01B8 (size: 0x4)
    TArray<FVector> SamplePoints;                                                     // 0x01C0 (size: 0x10)
    TArray<float> SampleRadii;                                                        // 0x01D0 (size: 0x10)
    TArray<int32> SampleTriangleIDs;                                                  // 0x01E0 (size: 0x10)
    TArray<FVector> SampleBarycentricCoords;                                          // 0x01F0 (size: 0x10)
    int32 NumSamplePoints;                                                            // 0x0200 (size: 0x4)

}; // Size: 0x208

struct FNormalizeDataflowNode : public FDataflowNode
{
    FVector VectorA;                                                                  // 0x0198 (size: 0x18)
    float Tolerance;                                                                  // 0x01B0 (size: 0x4)
    FVector ReturnValue;                                                              // 0x01B8 (size: 0x18)

}; // Size: 0x1D0

struct FNormalizeToRangeDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x0198 (size: 0x4)
    float RangeMin;                                                                   // 0x019C (size: 0x4)
    float RangeMax;                                                                   // 0x01A0 (size: 0x4)
    float ReturnValue;                                                                // 0x01A4 (size: 0x4)

}; // Size: 0x1A8

struct FOneMinusDataflowNode : public FDataflowNode
{
    float A;                                                                          // 0x0198 (size: 0x4)
    float ReturnValue;                                                                // 0x019C (size: 0x4)

}; // Size: 0x1A0

struct FPlaneCutterDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FBox BoundingBox;                                                                 // 0x0248 (size: 0x38)
    FDataflowTransformSelection TransformSelection;                                   // 0x0280 (size: 0x20)
    int32 NumPlanes;                                                                  // 0x02A0 (size: 0x4)
    float RandomSeed;                                                                 // 0x02A4 (size: 0x4)
    float Grout;                                                                      // 0x02A8 (size: 0x4)
    float Amplitude;                                                                  // 0x02AC (size: 0x4)
    float Frequency;                                                                  // 0x02B0 (size: 0x4)
    float Persistence;                                                                // 0x02B4 (size: 0x4)
    float Lacunarity;                                                                 // 0x02B8 (size: 0x4)
    int32 OctaveNumber;                                                               // 0x02BC (size: 0x4)
    float PointSpacing;                                                               // 0x02C0 (size: 0x4)
    bool AddSamplesForCollision;                                                      // 0x02C4 (size: 0x1)
    float CollisionSampleSpacing;                                                     // 0x02C8 (size: 0x4)

}; // Size: 0x2D0

struct FPlaneCutterDataflowNode_v2 : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FBox BoundingBox;                                                                 // 0x0248 (size: 0x38)
    FDataflowTransformSelection TransformSelection;                                   // 0x0280 (size: 0x20)
    FTransform Transform;                                                             // 0x02A0 (size: 0x60)
    int32 NumPlanes;                                                                  // 0x0300 (size: 0x4)
    int32 RandomSeed;                                                                 // 0x0304 (size: 0x4)
    float ChanceToFracture;                                                           // 0x0308 (size: 0x4)
    bool SplitIslands;                                                                // 0x030C (size: 0x1)
    float Grout;                                                                      // 0x0310 (size: 0x4)
    float Amplitude;                                                                  // 0x0314 (size: 0x4)
    float Frequency;                                                                  // 0x0318 (size: 0x4)
    float Persistence;                                                                // 0x031C (size: 0x4)
    float Lacunarity;                                                                 // 0x0320 (size: 0x4)
    int32 OctaveNumber;                                                               // 0x0324 (size: 0x4)
    float PointSpacing;                                                               // 0x0328 (size: 0x4)
    bool AddSamplesForCollision;                                                      // 0x032C (size: 0x1)
    float CollisionSampleSpacing;                                                     // 0x0330 (size: 0x4)
    FDataflowTransformSelection NewGeometryTransformSelection;                        // 0x0338 (size: 0x20)

}; // Size: 0x360

struct FPlaneFalloffFieldDataflowNode : public FDataflowNode
{
    TArray<FVector3f> SamplePositions;                                                // 0x0198 (size: 0x10)
    FDataflowVertexSelection SampleIndices;                                           // 0x01A8 (size: 0x20)
    FVector position;                                                                 // 0x01C8 (size: 0x18)
    FVector Normal;                                                                   // 0x01E0 (size: 0x18)
    float Distance;                                                                   // 0x01F8 (size: 0x4)
    FVector Translation;                                                              // 0x0200 (size: 0x18)
    float Magnitude;                                                                  // 0x0218 (size: 0x4)
    float MinRange;                                                                   // 0x021C (size: 0x4)
    float MaxRange;                                                                   // 0x0220 (size: 0x4)
    float Default;                                                                    // 0x0224 (size: 0x4)
    EDataflowFieldFalloffType FalloffType;                                            // 0x0228 (size: 0x1)
    TArray<float> FieldFloatResult;                                                   // 0x0230 (size: 0x10)
    TArray<int32> FieldRemap;                                                         // 0x0240 (size: 0x10)
    FDataflowVertexSelection FieldSelectionMask;                                      // 0x0250 (size: 0x20)
    int32 NumSamplePositions;                                                         // 0x0270 (size: 0x4)

}; // Size: 0x278

struct FPointsToMeshDataflowNode : public FDataflowNode
{
    TArray<FVector> Points;                                                           // 0x0198 (size: 0x10)
    class UDynamicMesh* Mesh;                                                         // 0x01A8 (size: 0x8)
    int32 TriangleCount;                                                              // 0x01B0 (size: 0x4)

}; // Size: 0x1B8

struct FPowDataflowNode : public FDataflowNode
{
    float base;                                                                       // 0x0198 (size: 0x4)
    float exp;                                                                        // 0x019C (size: 0x4)
    float ReturnValue;                                                                // 0x01A0 (size: 0x4)

}; // Size: 0x1A8

struct FPrintStringDataflowNode : public FDataflowNode
{
    bool bPrintToScreen;                                                              // 0x0198 (size: 0x1)
    bool bPrintToLog;                                                                 // 0x0199 (size: 0x1)
    FColor Color;                                                                     // 0x019C (size: 0x4)
    float Duration;                                                                   // 0x01A0 (size: 0x4)
    FString String;                                                                   // 0x01A8 (size: 0x10)

}; // Size: 0x1B8

struct FProximityDataflowNode : public FDataflowNode
{
    EProximityMethodEnum ProximityMethod;                                             // 0x0198 (size: 0x1)
    float DistanceThreshold;                                                          // 0x019C (size: 0x4)
    float ContactThreshold;                                                           // 0x01A0 (size: 0x4)
    EProximityContactFilteringMethodEnum FilterContactMethod;                         // 0x01A4 (size: 0x1)
    bool bUseAsConnectionGraph;                                                       // 0x01A5 (size: 0x1)
    EConnectionContactAreaMethodEnum ContactAreaMethod;                               // 0x01A6 (size: 0x1)
    bool bRecomputeConvexHulls;                                                       // 0x01A7 (size: 0x1)
    FManagedArrayCollection Collection;                                               // 0x01A8 (size: 0xB0)

}; // Size: 0x258

struct FPruneInCollectionDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0248 (size: 0x20)

}; // Size: 0x268

struct FRadialFalloffFieldDataflowNode : public FDataflowNode
{
    TArray<FVector3f> SamplePositions;                                                // 0x0198 (size: 0x10)
    FDataflowVertexSelection SampleIndices;                                           // 0x01A8 (size: 0x20)
    FSphere Sphere;                                                                   // 0x01C8 (size: 0x20)
    FVector Translation;                                                              // 0x01E8 (size: 0x18)
    float Magnitude;                                                                  // 0x0200 (size: 0x4)
    float MinRange;                                                                   // 0x0204 (size: 0x4)
    float MaxRange;                                                                   // 0x0208 (size: 0x4)
    float Default;                                                                    // 0x020C (size: 0x4)
    EDataflowFieldFalloffType FalloffType;                                            // 0x0210 (size: 0x1)
    TArray<float> FieldFloatResult;                                                   // 0x0218 (size: 0x10)
    TArray<int32> FieldRemap;                                                         // 0x0228 (size: 0x10)
    FDataflowVertexSelection FieldSelectionMask;                                      // 0x0238 (size: 0x20)
    int32 NumSamplePositions;                                                         // 0x0258 (size: 0x4)

}; // Size: 0x260

struct FRadialIntMaskFieldDataflowNode : public FDataflowNode
{
    TArray<FVector3f> SamplePositions;                                                // 0x0198 (size: 0x10)
    FDataflowVertexSelection SampleIndices;                                           // 0x01A8 (size: 0x20)
    FSphere Sphere;                                                                   // 0x01C8 (size: 0x20)
    FVector Translation;                                                              // 0x01E8 (size: 0x18)
    int32 InteriorValue;                                                              // 0x0200 (size: 0x4)
    int32 ExteriorValue;                                                              // 0x0204 (size: 0x4)
    EDataflowSetMaskConditionType SetMaskConditionType;                               // 0x0208 (size: 0x1)
    TArray<int32> FieldIntResult;                                                     // 0x0210 (size: 0x10)
    TArray<int32> FieldRemap;                                                         // 0x0220 (size: 0x10)
    int32 NumSamplePositions;                                                         // 0x0230 (size: 0x4)

}; // Size: 0x238

struct FRadialScatterPointsDataflowNode : public FDataflowNode
{
    FVector Center;                                                                   // 0x0198 (size: 0x18)
    FVector Normal;                                                                   // 0x01B0 (size: 0x18)
    float Radius;                                                                     // 0x01C8 (size: 0x4)
    int32 AngularSteps;                                                               // 0x01CC (size: 0x4)
    int32 RadialSteps;                                                                // 0x01D0 (size: 0x4)
    float AngleOffset;                                                                // 0x01D4 (size: 0x4)
    float Variability;                                                                // 0x01D8 (size: 0x4)
    float RandomSeed;                                                                 // 0x01DC (size: 0x4)
    TArray<FVector> Points;                                                           // 0x01E0 (size: 0x10)

}; // Size: 0x1F0

struct FRadialScatterPointsDataflowNode_v2 : public FDataflowNode
{
    FBox BoundingBox;                                                                 // 0x0198 (size: 0x38)
    FVector Center;                                                                   // 0x01D0 (size: 0x18)
    FVector Normal;                                                                   // 0x01E8 (size: 0x18)
    int32 RandomSeed;                                                                 // 0x0200 (size: 0x4)
    int32 AngularSteps;                                                               // 0x0204 (size: 0x4)
    float AngleOffset;                                                                // 0x0208 (size: 0x4)
    float AngularNoise;                                                               // 0x020C (size: 0x4)
    float Radius;                                                                     // 0x0210 (size: 0x4)
    int32 RadialSteps;                                                                // 0x0214 (size: 0x4)
    float RadialStepExponent;                                                         // 0x0218 (size: 0x4)
    float RadialMinStep;                                                              // 0x021C (size: 0x4)
    float RadialNoise;                                                                // 0x0220 (size: 0x4)
    float RadialVariability;                                                          // 0x0224 (size: 0x4)
    float AngularVariability;                                                         // 0x0228 (size: 0x4)
    float AxialVariability;                                                           // 0x022C (size: 0x4)
    TArray<FVector> Points;                                                           // 0x0230 (size: 0x10)

}; // Size: 0x240

struct FRadialVectorFieldDataflowNode : public FDataflowNode
{
    TArray<FVector3f> SamplePositions;                                                // 0x0198 (size: 0x10)
    FDataflowVertexSelection SampleIndices;                                           // 0x01A8 (size: 0x20)
    float Magnitude;                                                                  // 0x01C8 (size: 0x4)
    FVector position;                                                                 // 0x01D0 (size: 0x18)
    TArray<FVector> FieldVectorResult;                                                // 0x01E8 (size: 0x10)
    TArray<int32> FieldRemap;                                                         // 0x01F8 (size: 0x10)
    int32 NumSamplePositions;                                                         // 0x0208 (size: 0x4)

}; // Size: 0x210

struct FRadiansToDegreesDataflowNode : public FDataflowNode
{
    float Radians;                                                                    // 0x0198 (size: 0x4)
    float Degrees;                                                                    // 0x019C (size: 0x4)

}; // Size: 0x1A0

struct FRandomFloatDataflowNode : public FDataflowNode
{
    bool bDeterministic;                                                              // 0x0198 (size: 0x1)
    float RandomSeed;                                                                 // 0x019C (size: 0x4)
    float ReturnValue;                                                                // 0x01A0 (size: 0x4)

}; // Size: 0x1A8

struct FRandomFloatInRangeDataflowNode : public FDataflowNode
{
    bool bDeterministic;                                                              // 0x0198 (size: 0x1)
    float RandomSeed;                                                                 // 0x019C (size: 0x4)
    float min;                                                                        // 0x01A0 (size: 0x4)
    float max;                                                                        // 0x01A4 (size: 0x4)
    float ReturnValue;                                                                // 0x01A8 (size: 0x4)

}; // Size: 0x1B0

struct FRandomUnitVectorDataflowNode : public FDataflowNode
{
    bool bDeterministic;                                                              // 0x0198 (size: 0x1)
    float RandomSeed;                                                                 // 0x019C (size: 0x4)
    FVector ReturnValue;                                                              // 0x01A0 (size: 0x18)

}; // Size: 0x1B8

struct FRandomUnitVectorInConeDataflowNode : public FDataflowNode
{
    bool bDeterministic;                                                              // 0x0198 (size: 0x1)
    float RandomSeed;                                                                 // 0x019C (size: 0x4)
    FVector ConeDirection;                                                            // 0x01A0 (size: 0x18)
    float ConeHalfAngle;                                                              // 0x01B8 (size: 0x4)
    FVector ReturnValue;                                                              // 0x01C0 (size: 0x18)

}; // Size: 0x1D8

struct FRandomVectorFieldDataflowNode : public FDataflowNode
{
    TArray<FVector3f> SamplePositions;                                                // 0x0198 (size: 0x10)
    FDataflowVertexSelection SampleIndices;                                           // 0x01A8 (size: 0x20)
    float Magnitude;                                                                  // 0x01C8 (size: 0x4)
    TArray<FVector> FieldVectorResult;                                                // 0x01D0 (size: 0x10)
    TArray<int32> FieldRemap;                                                         // 0x01E0 (size: 0x10)
    int32 NumSamplePositions;                                                         // 0x01F0 (size: 0x4)

}; // Size: 0x1F8

struct FRandomizeFloatArrayDataflowNode : public FDataflowNode
{
    TArray<float> FloatArray;                                                         // 0x0198 (size: 0x10)
    float RandomRangeMin;                                                             // 0x01A8 (size: 0x4)
    float RandomRangeMax;                                                             // 0x01AC (size: 0x4)
    int32 RandomSeed;                                                                 // 0x01B0 (size: 0x4)

}; // Size: 0x1B8

struct FReAssignMaterialInCollectionDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FDataflowFaceSelection FaceSelection;                                             // 0x0248 (size: 0x20)
    TArray<class UMaterial*> Materials;                                               // 0x0268 (size: 0x10)
    int32 OutsideMaterialIdx;                                                         // 0x0278 (size: 0x4)
    int32 InsideMaterialIdx;                                                          // 0x027C (size: 0x4)
    bool bAssignOutsideMaterial;                                                      // 0x0280 (size: 0x1)
    bool bAssignInsideMaterial;                                                       // 0x0281 (size: 0x1)

}; // Size: 0x288

struct FRecomputeNormalsInGeometryCollectionDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0248 (size: 0x20)
    bool bOnlyTangents;                                                               // 0x0268 (size: 0x1)
    bool bRecomputeSharpEdges;                                                        // 0x0269 (size: 0x1)
    float SharpEdgeAngleThreshold;                                                    // 0x026C (size: 0x4)
    bool bOnlyInternalSurfaces;                                                       // 0x0270 (size: 0x1)

}; // Size: 0x278

struct FRemoveFloatArrayElementDataflowNode : public FDataflowNode
{
    int32 Index;                                                                      // 0x0198 (size: 0x4)
    bool bPreserveOrder;                                                              // 0x019C (size: 0x1)
    TArray<float> FloatArray;                                                         // 0x01A0 (size: 0x10)

}; // Size: 0x1B0

struct FRemoveOnBreakDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0248 (size: 0x20)
    bool bEnabledRemoval;                                                             // 0x0268 (size: 0x1)
    FVector2f PostBreakTimer;                                                         // 0x026C (size: 0x8)
    FVector2f RemovalTimer;                                                           // 0x0274 (size: 0x8)
    bool bClusterCrumbling;                                                           // 0x027C (size: 0x1)

}; // Size: 0x280

struct FResampleGeometryCollectionDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0248 (size: 0x20)
    bool AddSamplesForCollision;                                                      // 0x0268 (size: 0x1)
    float CollisionSampleSpacing;                                                     // 0x026C (size: 0x4)

}; // Size: 0x270

struct FRoundDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x0198 (size: 0x4)
    float ReturnValue;                                                                // 0x019C (size: 0x4)

}; // Size: 0x1A0

struct FSafeDivideDataflowNode : public FDataflowNode
{
    float FloatA;                                                                     // 0x0198 (size: 0x4)
    float FloatB;                                                                     // 0x019C (size: 0x4)
    float ReturnValue;                                                                // 0x01A0 (size: 0x4)

}; // Size: 0x1A8

struct FSafeReciprocalDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x0198 (size: 0x4)
    float ReturnValue;                                                                // 0x019C (size: 0x4)

}; // Size: 0x1A0

struct FScaleVectorDataflowNode : public FDataflowNode
{
    FVector Vector;                                                                   // 0x0198 (size: 0x18)
    float scale;                                                                      // 0x01B0 (size: 0x4)
    FVector ScaledVector;                                                             // 0x01B8 (size: 0x18)

}; // Size: 0x1D0

struct FSelectFloatArrayIndicesInRangeDataflowNode : public FDataflowNode
{
    TArray<float> Values;                                                             // 0x0198 (size: 0x10)
    float min;                                                                        // 0x01A8 (size: 0x4)
    float max;                                                                        // 0x01AC (size: 0x4)
    ERangeSettingEnum RangeSetting;                                                   // 0x01B0 (size: 0x1)
    bool bInclusive;                                                                  // 0x01B1 (size: 0x1)
    TArray<int32> Indices;                                                            // 0x01B8 (size: 0x10)

}; // Size: 0x1C8

struct FSelectionToVertexListDataflowNode : public FDataflowNode
{
    FDataflowVertexSelection VertexSelection;                                         // 0x0198 (size: 0x20)
    TArray<int32> VertexList;                                                         // 0x01B8 (size: 0x10)

}; // Size: 0x1C8

struct FSetAnchorStateDataflowNode : public FDataflowNode
{
    EAnchorStateEnum AnchorState;                                                     // 0x0198 (size: 0x1)
    bool bSetNotSelectedBonesToOppositeState;                                         // 0x0199 (size: 0x1)
    FManagedArrayCollection Collection;                                               // 0x01A0 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0250 (size: 0x20)

}; // Size: 0x270

struct FSetCollectionAttributeDataTypedDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FCollectionAttributeKey AttributeKey;                                             // 0x0248 (size: 0x20)
    EStandardGroupNameEnum GroupName;                                                 // 0x0268 (size: 0x1)
    FString CustomGroupName;                                                          // 0x0270 (size: 0x10)
    FString AttrName;                                                                 // 0x0280 (size: 0x10)
    TArray<bool> BoolAttributeData;                                                   // 0x0290 (size: 0x10)
    TArray<float> FloatAttributeData;                                                 // 0x02A0 (size: 0x10)
    TArray<double> DoubleAttributeData;                                               // 0x02B0 (size: 0x10)
    TArray<int32> Int32AttributeData;                                                 // 0x02C0 (size: 0x10)
    TArray<FString> StringAttributeData;                                              // 0x02D0 (size: 0x10)
    TArray<FVector3f> Vector3fAttributeData;                                          // 0x02E0 (size: 0x10)
    TArray<FVector3d> Vector3dAttributeData;                                          // 0x02F0 (size: 0x10)
    TArray<FLinearColor> LinearColorAttributeData;                                    // 0x0300 (size: 0x10)

}; // Size: 0x310

struct FSetMaterialInMaterialsArrayDataflowNode : public FDataflowNode
{
    TArray<class UMaterial*> Materials;                                               // 0x0198 (size: 0x10)
    class UMaterial* Material;                                                        // 0x01A8 (size: 0x8)
    ESetMaterialOperationTypeEnum Operation;                                          // 0x01B0 (size: 0x1)
    int32 MaterialIdx;                                                                // 0x01B4 (size: 0x4)

}; // Size: 0x1B8

struct FSetVertexColorFromFloatArrayDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    TArray<float> FloatArray;                                                         // 0x0248 (size: 0x10)
    bool bNormalizeInput;                                                             // 0x0258 (size: 0x1)
    FLinearColor Color;                                                               // 0x025C (size: 0x10)

}; // Size: 0x270

struct FSetVertexColorFromVertexIndicesDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    TArray<int32> VertexIndicesIn;                                                    // 0x0248 (size: 0x10)
    FLinearColor SelectedColor;                                                       // 0x0258 (size: 0x10)

}; // Size: 0x268

struct FSetVertexColorFromVertexSelectionDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FDataflowVertexSelection VertexSelection;                                         // 0x0248 (size: 0x20)
    FLinearColor SelectedColor;                                                       // 0x0268 (size: 0x10)

}; // Size: 0x278

struct FSetVisibilityInCollectionDataflowNode : public FDataflowNode
{
    EVisibiltyOptionsEnum Visibility;                                                 // 0x0198 (size: 0x1)
    FManagedArrayCollection Collection;                                               // 0x01A0 (size: 0xB0)
    FDataflowTransformSelection TransformSelection;                                   // 0x0250 (size: 0x20)
    FDataflowFaceSelection FaceSelection;                                             // 0x0270 (size: 0x20)

}; // Size: 0x290

struct FSignDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x0198 (size: 0x4)
    float ReturnValue;                                                                // 0x019C (size: 0x4)

}; // Size: 0x1A0

struct FSimplifyConvexHullsDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FDataflowTransformSelection OptionalSelectionFilter;                              // 0x0248 (size: 0x20)
    EConvexHullSimplifyMethod SimplifyMethod;                                         // 0x0268 (size: 0x4)
    float SimplificationAngleThreshold;                                               // 0x026C (size: 0x4)
    float SimplificationDistanceThreshold;                                            // 0x0270 (size: 0x4)
    int32 MinTargetTriangleCount;                                                     // 0x0274 (size: 0x4)
    bool bUseExistingVertices;                                                        // 0x0278 (size: 0x1)

}; // Size: 0x280

struct FSinDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x0198 (size: 0x4)
    float ReturnValue;                                                                // 0x019C (size: 0x4)

}; // Size: 0x1A0

struct FSkeletalMeshToCollectionDataflowNode : public FDataflowNode
{
    class USkeletalMesh* SkeletalMesh;                                                // 0x0198 (size: 0x8)
    FManagedArrayCollection Collection;                                               // 0x01A0 (size: 0xB0)
    bool bImportTransformOnly;                                                        // 0x0250 (size: 0x1)

}; // Size: 0x258

struct FSkeletonToCollectionDataflowNode : public FDataflowNode
{
    class USkeleton* Skeleton;                                                        // 0x0198 (size: 0x8)
    FManagedArrayCollection Collection;                                               // 0x01A0 (size: 0xB0)

}; // Size: 0x250

struct FSliceCutterDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FBox BoundingBox;                                                                 // 0x0248 (size: 0x38)
    FDataflowTransformSelection TransformSelection;                                   // 0x0280 (size: 0x20)
    int32 SlicesX;                                                                    // 0x02A0 (size: 0x4)
    int32 SlicesY;                                                                    // 0x02A4 (size: 0x4)
    int32 SlicesZ;                                                                    // 0x02A8 (size: 0x4)
    float SliceAngleVariation;                                                        // 0x02AC (size: 0x4)
    float SliceOffsetVariation;                                                       // 0x02B0 (size: 0x4)
    int32 RandomSeed;                                                                 // 0x02B4 (size: 0x4)
    float ChanceToFracture;                                                           // 0x02B8 (size: 0x4)
    bool SplitIslands;                                                                // 0x02BC (size: 0x1)
    float Grout;                                                                      // 0x02C0 (size: 0x4)
    float Amplitude;                                                                  // 0x02C4 (size: 0x4)
    float Frequency;                                                                  // 0x02C8 (size: 0x4)
    float Persistence;                                                                // 0x02CC (size: 0x4)
    float Lacunarity;                                                                 // 0x02D0 (size: 0x4)
    int32 OctaveNumber;                                                               // 0x02D4 (size: 0x4)
    float PointSpacing;                                                               // 0x02D8 (size: 0x4)
    bool AddSamplesForCollision;                                                      // 0x02DC (size: 0x1)
    float CollisionSampleSpacing;                                                     // 0x02E0 (size: 0x4)
    FDataflowTransformSelection NewGeometryTransformSelection;                        // 0x02E8 (size: 0x20)

}; // Size: 0x308

struct FSphereCoveringCountSpheresNode : public FDataflowNode
{
    FDataflowSphereCovering SphereCovering;                                           // 0x0198 (size: 0x20)
    int32 NumSpheres;                                                                 // 0x01B8 (size: 0x4)

}; // Size: 0x1C0

struct FSphereCoveringToMeshDataflowNode : public FDataflowNode
{
    FDataflowSphereCovering SphereCovering;                                           // 0x0198 (size: 0x20)
    int32 VerticesAlongEachSide;                                                      // 0x01B8 (size: 0x4)
    class UDynamicMesh* Mesh;                                                         // 0x01C0 (size: 0x8)

}; // Size: 0x1C8

struct FSquareDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x0198 (size: 0x4)
    float ReturnValue;                                                                // 0x019C (size: 0x4)

}; // Size: 0x1A0

struct FSquareRootDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x0198 (size: 0x4)
    float ReturnValue;                                                                // 0x019C (size: 0x4)

}; // Size: 0x1A0

struct FStaticMeshToCollectionDataflowNode : public FDataflowNode
{
    class UStaticMesh* StaticMesh;                                                    // 0x0198 (size: 0x8)
    FTransform MeshTransform;                                                         // 0x01A0 (size: 0x60)
    bool bSetInternalFromMaterialIndex;                                               // 0x0200 (size: 0x1)
    bool bSplitComponents;                                                            // 0x0201 (size: 0x1)
    FManagedArrayCollection Collection;                                               // 0x0208 (size: 0xB0)
    TArray<class UMaterial*> Materials;                                               // 0x02B8 (size: 0x10)
    TArray<class UMaterialInterface*> MaterialInstances;                              // 0x02C8 (size: 0x10)
    TArray<FGeometryCollectionAutoInstanceMesh> InstancedMeshes;                      // 0x02D8 (size: 0x10)

}; // Size: 0x2F0

struct FStaticMeshToMeshDataflowNode : public FDataflowNode
{
    class UStaticMesh* StaticMesh;                                                    // 0x0198 (size: 0x8)
    bool bUseHiRes;                                                                   // 0x01A0 (size: 0x1)
    int32 LODLevel;                                                                   // 0x01A4 (size: 0x4)
    class UDynamicMesh* Mesh;                                                         // 0x01A8 (size: 0x8)

}; // Size: 0x1B0

struct FStringAppendDataflowNode : public FDataflowNode
{
    FString String1;                                                                  // 0x0198 (size: 0x10)
    FString String2;                                                                  // 0x01A8 (size: 0x10)
    FString String;                                                                   // 0x01B8 (size: 0x10)

}; // Size: 0x1C8

struct FSubtractDataflowNode : public FDataflowNode
{
    float FloatA;                                                                     // 0x0198 (size: 0x4)
    float FloatB;                                                                     // 0x019C (size: 0x4)
    float ReturnValue;                                                                // 0x01A0 (size: 0x4)

}; // Size: 0x1A8

struct FSumScalarFieldDataflowNode : public FDataflowNode
{
    TArray<float> FieldFloatLeft;                                                     // 0x0198 (size: 0x10)
    TArray<int32> FieldRemapLeft;                                                     // 0x01A8 (size: 0x10)
    TArray<float> FieldFloatRight;                                                    // 0x01B8 (size: 0x10)
    TArray<int32> FieldRemapRight;                                                    // 0x01C8 (size: 0x10)
    float Magnitude;                                                                  // 0x01D8 (size: 0x4)
    EDataflowFloatFieldOperationType Operation;                                       // 0x01DC (size: 0x1)
    bool bSwapInputs;                                                                 // 0x01DD (size: 0x1)
    TArray<float> FieldFloatResult;                                                   // 0x01E0 (size: 0x10)
    TArray<int32> FieldRemap;                                                         // 0x01F0 (size: 0x10)

}; // Size: 0x200

struct FSumVectorFieldDataflowNode : public FDataflowNode
{
    TArray<float> FieldFloat;                                                         // 0x0198 (size: 0x10)
    TArray<int32> FieldFloatRemap;                                                    // 0x01A8 (size: 0x10)
    TArray<FVector> FieldVectorLeft;                                                  // 0x01B8 (size: 0x10)
    TArray<int32> FieldRemapLeft;                                                     // 0x01C8 (size: 0x10)
    TArray<FVector> FieldVectorRight;                                                 // 0x01D8 (size: 0x10)
    TArray<int32> FieldRemapRight;                                                    // 0x01E8 (size: 0x10)
    float Magnitude;                                                                  // 0x01F8 (size: 0x4)
    EDataflowVectorFieldOperationType Operation;                                      // 0x01FC (size: 0x1)
    bool bSwapVectorInputs;                                                           // 0x01FD (size: 0x1)
    TArray<FVector> FieldVectorResult;                                                // 0x0200 (size: 0x10)
    TArray<int32> FieldRemap;                                                         // 0x0210 (size: 0x10)

}; // Size: 0x220

struct FTanDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x0198 (size: 0x4)
    float ReturnValue;                                                                // 0x019C (size: 0x4)

}; // Size: 0x1A0

struct FTransformCollectionAttributeDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FTransform TransformIn;                                                           // 0x0250 (size: 0x60)
    FTransform LocalTransform;                                                        // 0x02B0 (size: 0x60)
    FString GroupName;                                                                // 0x0310 (size: 0x10)
    FString AttributeName;                                                            // 0x0320 (size: 0x10)

}; // Size: 0x330

struct FTransformCollectionDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FVector Translate;                                                                // 0x0248 (size: 0x18)
    ERotationOrderEnum RotationOrder;                                                 // 0x0260 (size: 0x1)
    FVector Rotate;                                                                   // 0x0268 (size: 0x18)
    FVector scale;                                                                    // 0x0280 (size: 0x18)
    float UniformScale;                                                               // 0x0298 (size: 0x4)
    FVector RotatePivot;                                                              // 0x02A0 (size: 0x18)
    FVector ScalePivot;                                                               // 0x02B8 (size: 0x18)
    bool bInvertTransformation;                                                       // 0x02D0 (size: 0x1)

}; // Size: 0x2D8

struct FTransformMeshDataflowNode : public FDataflowNode
{
    class UDynamicMesh* Mesh;                                                         // 0x0198 (size: 0x8)
    FVector Translate;                                                                // 0x01A0 (size: 0x18)
    ERotationOrderEnum RotationOrder;                                                 // 0x01B8 (size: 0x1)
    FVector Rotate;                                                                   // 0x01C0 (size: 0x18)
    FVector scale;                                                                    // 0x01D8 (size: 0x18)
    float UniformScale;                                                               // 0x01F0 (size: 0x4)
    FVector RotatePivot;                                                              // 0x01F8 (size: 0x18)
    FVector ScalePivot;                                                               // 0x0210 (size: 0x18)
    bool bInvertTransformation;                                                       // 0x0228 (size: 0x1)

}; // Size: 0x230

struct FTriangleBoundaryIndicesNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    TArray<int32> BoundaryIndicesOut;                                                 // 0x0248 (size: 0x10)

}; // Size: 0x258

struct FTruncDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x0198 (size: 0x4)
    float ReturnValue;                                                                // 0x019C (size: 0x4)

}; // Size: 0x1A0

struct FUniformIntegerFieldDataflowNode : public FDataflowNode
{
    TArray<FVector3f> SamplePositions;                                                // 0x0198 (size: 0x10)
    FDataflowVertexSelection SampleIndices;                                           // 0x01A8 (size: 0x20)
    int32 Magnitude;                                                                  // 0x01C8 (size: 0x4)
    TArray<int32> FieldIntResult;                                                     // 0x01D0 (size: 0x10)
    TArray<int32> FieldRemap;                                                         // 0x01E0 (size: 0x10)
    int32 NumSamplePositions;                                                         // 0x01F0 (size: 0x4)

}; // Size: 0x1F8

struct FUniformPointSamplingDataflowNode : public FDataflowNode
{
    class UDynamicMesh* TargetMesh;                                                   // 0x0198 (size: 0x8)
    float SamplingRadius;                                                             // 0x01A0 (size: 0x4)
    int32 MaxNumSamples;                                                              // 0x01A4 (size: 0x4)
    float SubSampleDensity;                                                           // 0x01A8 (size: 0x4)
    int32 RandomSeed;                                                                 // 0x01AC (size: 0x4)
    TArray<FVector> SamplePoints;                                                     // 0x01B0 (size: 0x10)
    TArray<int32> SampleTriangleIDs;                                                  // 0x01C0 (size: 0x10)
    TArray<FVector> SampleBarycentricCoords;                                          // 0x01D0 (size: 0x10)
    int32 NumSamplePoints;                                                            // 0x01E0 (size: 0x4)

}; // Size: 0x1E8

struct FUniformScalarFieldDataflowNode : public FDataflowNode
{
    TArray<FVector3f> SamplePositions;                                                // 0x0198 (size: 0x10)
    FDataflowVertexSelection SampleIndices;                                           // 0x01A8 (size: 0x20)
    float Magnitude;                                                                  // 0x01C8 (size: 0x4)
    TArray<float> FieldFloatResult;                                                   // 0x01D0 (size: 0x10)
    TArray<int32> FieldRemap;                                                         // 0x01E0 (size: 0x10)
    int32 NumSamplePositions;                                                         // 0x01F0 (size: 0x4)

}; // Size: 0x1F8

struct FUniformScatterPointsDataflowNode : public FDataflowNode
{
    int32 MinNumberOfPoints;                                                          // 0x0198 (size: 0x4)
    int32 MaxNumberOfPoints;                                                          // 0x019C (size: 0x4)
    float RandomSeed;                                                                 // 0x01A0 (size: 0x4)
    FBox BoundingBox;                                                                 // 0x01A8 (size: 0x38)
    TArray<FVector> Points;                                                           // 0x01E0 (size: 0x10)

}; // Size: 0x1F0

struct FUniformScatterPointsDataflowNode_v2 : public FDataflowNode
{
    int32 MinNumberOfPoints;                                                          // 0x0198 (size: 0x4)
    int32 MaxNumberOfPoints;                                                          // 0x019C (size: 0x4)
    int32 RandomSeed;                                                                 // 0x01A0 (size: 0x4)
    FBox BoundingBox;                                                                 // 0x01A8 (size: 0x38)
    TArray<FVector> Points;                                                           // 0x01E0 (size: 0x10)

}; // Size: 0x1F0

struct FUniformVectorFieldDataflowNode : public FDataflowNode
{
    TArray<FVector3f> SamplePositions;                                                // 0x0198 (size: 0x10)
    FDataflowVertexSelection SampleIndices;                                           // 0x01A8 (size: 0x20)
    float Magnitude;                                                                  // 0x01C8 (size: 0x4)
    FVector Direction;                                                                // 0x01D0 (size: 0x18)
    TArray<FVector> FieldVectorResult;                                                // 0x01E8 (size: 0x10)
    TArray<int32> FieldRemap;                                                         // 0x01F8 (size: 0x10)
    int32 NumSamplePositions;                                                         // 0x0208 (size: 0x4)

}; // Size: 0x210

struct FUnionIntArraysDataflowNode : public FDataflowNode
{
    TArray<int32> InArray1;                                                           // 0x0198 (size: 0x10)
    TArray<int32> InArray2;                                                           // 0x01A8 (size: 0x10)
    TArray<int32> OutArray;                                                           // 0x01B8 (size: 0x10)

}; // Size: 0x1C8

struct FUpdateVolumeAttributesDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)

}; // Size: 0x248

struct FValidateGeometryCollectionDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    bool bRemoveUnreferencedGeometry;                                                 // 0x0248 (size: 0x1)
    bool bRemoveClustersOfOne;                                                        // 0x0249 (size: 0x1)
    bool bRemoveDanglingClusters;                                                     // 0x024A (size: 0x1)

}; // Size: 0x250

struct FVectorArrayNormalizeDataflowNode : public FDataflowNode
{
    TArray<FVector> InVectorArray;                                                    // 0x0198 (size: 0x10)
    FDataflowVertexSelection Selection;                                               // 0x01A8 (size: 0x20)
    float Magnitude;                                                                  // 0x01C8 (size: 0x4)
    TArray<FVector> OutVectorArray;                                                   // 0x01D0 (size: 0x10)

}; // Size: 0x1E0

struct FVectorToStringDataflowNode : public FDataflowNode
{
    FVector Vector;                                                                   // 0x0198 (size: 0x18)
    FString String;                                                                   // 0x01B0 (size: 0x10)

}; // Size: 0x1C0

struct FVertexWeightedPointSamplingDataflowNode : public FDataflowNode
{
    class UDynamicMesh* TargetMesh;                                                   // 0x0198 (size: 0x8)
    TArray<float> VertexWeights;                                                      // 0x01A0 (size: 0x10)
    float SamplingRadius;                                                             // 0x01B0 (size: 0x4)
    int32 MaxNumSamples;                                                              // 0x01B4 (size: 0x4)
    float SubSampleDensity;                                                           // 0x01B8 (size: 0x4)
    int32 RandomSeed;                                                                 // 0x01BC (size: 0x4)
    float MaxSamplingRadius;                                                          // 0x01C0 (size: 0x4)
    ENonUniformSamplingDistributionMode SizeDistribution;                             // 0x01C4 (size: 0x1)
    float SizeDistributionPower;                                                      // 0x01C8 (size: 0x4)
    ENonUniformSamplingWeightMode WeightMode;                                         // 0x01CC (size: 0x1)
    bool bInvertWeights;                                                              // 0x01CD (size: 0x1)
    TArray<FVector> SamplePoints;                                                     // 0x01D0 (size: 0x10)
    TArray<float> SampleRadii;                                                        // 0x01E0 (size: 0x10)
    TArray<int32> SampleTriangleIDs;                                                  // 0x01F0 (size: 0x10)
    TArray<FVector> SampleBarycentricCoords;                                          // 0x0200 (size: 0x10)
    int32 NumSamplePoints;                                                            // 0x0210 (size: 0x4)

}; // Size: 0x218

struct FVoronoiFractureDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    TArray<FVector> Points;                                                           // 0x0248 (size: 0x10)
    FDataflowTransformSelection TransformSelection;                                   // 0x0258 (size: 0x20)
    float RandomSeed;                                                                 // 0x0278 (size: 0x4)
    float ChanceToFracture;                                                           // 0x027C (size: 0x4)
    bool GroupFracture;                                                               // 0x0280 (size: 0x1)
    float Grout;                                                                      // 0x0284 (size: 0x4)
    float Amplitude;                                                                  // 0x0288 (size: 0x4)
    float Frequency;                                                                  // 0x028C (size: 0x4)
    float Persistence;                                                                // 0x0290 (size: 0x4)
    float Lacunarity;                                                                 // 0x0294 (size: 0x4)
    int32 OctaveNumber;                                                               // 0x0298 (size: 0x4)
    float PointSpacing;                                                               // 0x029C (size: 0x4)
    bool AddSamplesForCollision;                                                      // 0x02A0 (size: 0x1)
    float CollisionSampleSpacing;                                                     // 0x02A4 (size: 0x4)

}; // Size: 0x2A8

struct FVoronoiFractureDataflowNode_v2 : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    TArray<FVector> Points;                                                           // 0x0248 (size: 0x10)
    FDataflowTransformSelection TransformSelection;                                   // 0x0258 (size: 0x20)
    FTransform Transform;                                                             // 0x0280 (size: 0x60)
    int32 RandomSeed;                                                                 // 0x02E0 (size: 0x4)
    float ChanceToFracture;                                                           // 0x02E4 (size: 0x4)
    bool SplitIslands;                                                                // 0x02E8 (size: 0x1)
    float Grout;                                                                      // 0x02EC (size: 0x4)
    float Amplitude;                                                                  // 0x02F0 (size: 0x4)
    float Frequency;                                                                  // 0x02F4 (size: 0x4)
    float Persistence;                                                                // 0x02F8 (size: 0x4)
    float Lacunarity;                                                                 // 0x02FC (size: 0x4)
    int32 OctaveNumber;                                                               // 0x0300 (size: 0x4)
    float PointSpacing;                                                               // 0x0304 (size: 0x4)
    bool AddSamplesForCollision;                                                      // 0x0308 (size: 0x1)
    float CollisionSampleSpacing;                                                     // 0x030C (size: 0x4)
    FDataflowTransformSelection NewGeometryTransformSelection;                        // 0x0310 (size: 0x20)

}; // Size: 0x330

struct FWaveScalarFieldDataflowNode : public FDataflowNode
{
    TArray<FVector3f> SamplePositions;                                                // 0x0198 (size: 0x10)
    FDataflowVertexSelection SampleIndices;                                           // 0x01A8 (size: 0x20)
    float Magnitude;                                                                  // 0x01C8 (size: 0x4)
    FVector position;                                                                 // 0x01D0 (size: 0x18)
    FVector Translation;                                                              // 0x01E8 (size: 0x18)
    float WaveLength;                                                                 // 0x0200 (size: 0x4)
    float Period;                                                                     // 0x0204 (size: 0x4)
    EDataflowWaveFunctionType FunctionType;                                           // 0x0208 (size: 0x1)
    EDataflowFieldFalloffType FalloffType;                                            // 0x0209 (size: 0x1)
    TArray<float> FieldFloatResult;                                                   // 0x0210 (size: 0x10)
    TArray<int32> FieldRemap;                                                         // 0x0220 (size: 0x10)
    int32 NumSamplePositions;                                                         // 0x0230 (size: 0x4)

}; // Size: 0x238

struct FWrapDataflowNode : public FDataflowNode
{
    float float;                                                                      // 0x0198 (size: 0x4)
    float min;                                                                        // 0x019C (size: 0x4)
    float max;                                                                        // 0x01A0 (size: 0x4)
    float ReturnValue;                                                                // 0x01A4 (size: 0x4)

}; // Size: 0x1A8

struct FWriteStringToFile : public FDataflowNode
{
    FString FilePath;                                                                 // 0x0198 (size: 0x10)
    FString FileContents;                                                             // 0x01A8 (size: 0x10)

}; // Size: 0x1B8

#endif
