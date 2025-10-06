#ifndef UE4SS_SDK_RigLogicModule_HPP
#define UE4SS_SDK_RigLogicModule_HPP

#include "RigLogicModule_enums.hpp"

struct FAnimNode_RigLogic : public FAnimNode_Base
{
    FPoseLink AnimSequence;                                                           // 0x0010 (size: 0x10)
    int32 LODThreshold;                                                               // 0x0020 (size: 0x4)

}; // Size: 0x80

struct FBoneIndexControlAttributeMapping
{
}; // Size: 0x18

struct FCoordinateSystem
{
    EDirection XAxis;                                                                 // 0x0000 (size: 0x1)
    EDirection YAxis;                                                                 // 0x0001 (size: 0x1)
    EDirection ZAxis;                                                                 // 0x0002 (size: 0x1)

}; // Size: 0x3

struct FMeshBlendShapeChannelMapping
{
    int32 MeshIndex;                                                                  // 0x0000 (size: 0x4)
    int32 BlendShapeChannelIndex;                                                     // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FRigLogicConfiguration
{
    ERigLogicCalculationType CalculationType;                                         // 0x0000 (size: 0x1)
    bool LoadJoints;                                                                  // 0x0001 (size: 0x1)
    bool LoadBlendShapes;                                                             // 0x0002 (size: 0x1)
    bool LoadAnimatedMaps;                                                            // 0x0003 (size: 0x1)
    bool LoadMachineLearnedBehavior;                                                  // 0x0004 (size: 0x1)
    bool LoadRBFBehavior;                                                             // 0x0005 (size: 0x1)
    bool LoadTwistSwingBehavior;                                                      // 0x0006 (size: 0x1)
    ERigLogicTranslationType TranslationType;                                         // 0x0007 (size: 0x1)
    ERigLogicRotationType RotationType;                                               // 0x0008 (size: 0x1)
    ERigLogicRotationOrder RotationOrder;                                             // 0x0009 (size: 0x1)
    ERigLogicScaleType ScaleType;                                                     // 0x000A (size: 0x1)

}; // Size: 0xB

struct FRigUnit_RigLogic : public FRigUnitMutable
{
    FRigUnit_RigLogic_Data Data;                                                      // 0x01F0 (size: 0xA8)
    bool bIsInitialized;                                                              // 0x0298 (size: 0x1)

}; // Size: 0x2A0

struct FRigUnit_RigLogic_Data
{
    TWeakObjectPtr<class USkeletalMeshComponent> SkelMeshComponent;                   // 0x0000 (size: 0x8)
    TArray<int32> InputCurveIndices;                                                  // 0x0020 (size: 0x10)
    TArray<int32> NeuralNetMaskCurveIndices;                                          // 0x0030 (size: 0x10)
    TArray<int32> HierarchyBoneIndices;                                               // 0x0040 (size: 0x10)
    TArray<FBoneIndexControlAttributeMapping> DriverJointsToControlAttributesMap;     // 0x0050 (size: 0x10)
    TArray<FRigUnit_RigLogic_IntArray> MorphTargetCurveIndices;                       // 0x0060 (size: 0x10)
    TArray<FRigUnit_RigLogic_IntArray> BlendShapeIndices;                             // 0x0070 (size: 0x10)
    TArray<FRigUnit_RigLogic_IntArray> CurveElementIndicesForAnimMaps;                // 0x0080 (size: 0x10)
    TArray<FRigUnit_RigLogic_IntArray> RigLogicIndicesForAnimMaps;                    // 0x0090 (size: 0x10)
    uint32 CurrentLOD;                                                                // 0x00A0 (size: 0x4)

}; // Size: 0xA8

struct FRigUnit_RigLogic_IntArray
{
    TArray<int32> Values;                                                             // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FTextureCoordinate
{
    float U;                                                                          // 0x0000 (size: 0x4)
    float V;                                                                          // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FVertexLayout
{
    int32 position;                                                                   // 0x0000 (size: 0x4)
    int32 TextureCoordinate;                                                          // 0x0004 (size: 0x4)
    int32 Normal;                                                                     // 0x0008 (size: 0x4)

}; // Size: 0xC

class UDEPRECATED_DNAIndexMapping : public UAssetUserData
{
}; // Size: 0x28

class UDNAAsset : public UAssetUserData
{
    FString DnaFileName;                                                              // 0x0028 (size: 0x10)
    bool bKeepDNAAfterInitialization;                                                 // 0x0038 (size: 0x1)
    TMap<class FString, class FString> MetaData;                                      // 0x0040 (size: 0x50)

}; // Size: 0x128

class USkelMeshDNAUtils : public UObject
{
}; // Size: 0x28

#endif
