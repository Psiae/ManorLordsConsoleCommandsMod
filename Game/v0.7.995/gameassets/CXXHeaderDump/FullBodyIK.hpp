#ifndef UE4SS_SDK_FullBodyIK_HPP
#define UE4SS_SDK_FullBodyIK_HPP

#include "FullBodyIK_enums.hpp"

struct FFBIKBoneLimit
{
    EFBIKBoneLimitType LimitType_X;                                                   // 0x0000 (size: 0x1)
    EFBIKBoneLimitType LimitType_Y;                                                   // 0x0001 (size: 0x1)
    EFBIKBoneLimitType LimitType_Z;                                                   // 0x0002 (size: 0x1)
    FVector Limit;                                                                    // 0x0008 (size: 0x18)

}; // Size: 0x20

struct FFBIKConstraintOption
{
    FRigElementKey Item;                                                              // 0x0000 (size: 0xC)
    bool bEnabled;                                                                    // 0x000C (size: 0x1)
    bool bUseStiffness;                                                               // 0x000D (size: 0x1)
    FVector LinearStiffness;                                                          // 0x0010 (size: 0x18)
    FVector AngularStiffness;                                                         // 0x0028 (size: 0x18)
    bool bUseAngularLimit;                                                            // 0x0040 (size: 0x1)
    FFBIKBoneLimit AngularLimit;                                                      // 0x0048 (size: 0x20)
    bool bUsePoleVector;                                                              // 0x0068 (size: 0x1)
    EPoleVectorOption PoleVectorOption;                                               // 0x0069 (size: 0x1)
    FVector PoleVector;                                                               // 0x0070 (size: 0x18)
    FRotator OffsetRotation;                                                          // 0x0088 (size: 0x18)

}; // Size: 0xA0

struct FFBIKDebugOption
{
    bool bDrawDebugHierarchy;                                                         // 0x0000 (size: 0x1)
    bool bColorAngularMotionStrength;                                                 // 0x0001 (size: 0x1)
    bool bColorLinearMotionStrength;                                                  // 0x0002 (size: 0x1)
    bool bDrawDebugAxes;                                                              // 0x0003 (size: 0x1)
    bool bDrawDebugEffector;                                                          // 0x0004 (size: 0x1)
    bool bDrawDebugConstraints;                                                       // 0x0005 (size: 0x1)
    FTransform DrawWorldOffset;                                                       // 0x0010 (size: 0x60)
    float DrawSize;                                                                   // 0x0070 (size: 0x4)

}; // Size: 0x80

struct FFBIKEndEffector
{
    FRigElementKey Item;                                                              // 0x0000 (size: 0xC)
    FVector Position;                                                                 // 0x0010 (size: 0x18)
    float PositionAlpha;                                                              // 0x0028 (size: 0x4)
    int32 PositionDepth;                                                              // 0x002C (size: 0x4)
    FQuat Rotation;                                                                   // 0x0030 (size: 0x20)
    float RotationAlpha;                                                              // 0x0050 (size: 0x4)
    int32 RotationDepth;                                                              // 0x0054 (size: 0x4)
    float Pull;                                                                       // 0x0058 (size: 0x4)

}; // Size: 0x60

struct FMotionProcessInput
{
    bool bForceEffectorRotationTarget;                                                // 0x0000 (size: 0x1)
    bool bOnlyApplyWhenReachedToTarget;                                               // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FRigUnit_FullbodyIK : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKey Root;                                                              // 0x01D0 (size: 0xC)
    TArray<FFBIKEndEffector> Effectors;                                               // 0x01E0 (size: 0x10)
    TArray<FFBIKConstraintOption> Constraints;                                        // 0x01F0 (size: 0x10)
    FSolverInput SolverProperty;                                                      // 0x0200 (size: 0x24)
    FMotionProcessInput MotionProperty;                                               // 0x0224 (size: 0x2)
    bool bPropagateToChildren;                                                        // 0x0226 (size: 0x1)
    FFBIKDebugOption DebugOption;                                                     // 0x0230 (size: 0x80)
    FRigUnit_FullbodyIK_WorkData WorkData;                                            // 0x02B0 (size: 0x198)

}; // Size: 0x450

struct FRigUnit_FullbodyIK_WorkData
{
}; // Size: 0x198

struct FSolverInput
{
    float LinearMotionStrength;                                                       // 0x0000 (size: 0x4)
    float MinLinearMotionStrength;                                                    // 0x0004 (size: 0x4)
    float AngularMotionStrength;                                                      // 0x0008 (size: 0x4)
    float MinAngularMotionStrength;                                                   // 0x000C (size: 0x4)
    float DefaultTargetClamp;                                                         // 0x0010 (size: 0x4)
    float Precision;                                                                  // 0x0014 (size: 0x4)
    float Damping;                                                                    // 0x0018 (size: 0x4)
    int32 MaxIterations;                                                              // 0x001C (size: 0x4)
    bool bUseJacobianTranspose;                                                       // 0x0020 (size: 0x1)

}; // Size: 0x24

#endif
