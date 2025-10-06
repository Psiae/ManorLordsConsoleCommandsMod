#ifndef UE4SS_SDK_AnimGraphRuntime_HPP
#define UE4SS_SDK_AnimGraphRuntime_HPP

#include "AnimGraphRuntime_enums.hpp"

struct FAngularRangeLimit
{
    FVector LimitMin;                                                                 // 0x0000 (size: 0x18)
    FVector LimitMax;                                                                 // 0x0018 (size: 0x18)
    FBoneReference bone;                                                              // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FAnimLegIKData
{
}; // Size: 0xF0

struct FAnimLegIKDefinition
{
    FBoneReference IKFootBone;                                                        // 0x0000 (size: 0x10)
    FBoneReference FKFootBone;                                                        // 0x0010 (size: 0x10)
    int32 NumBonesInLimb;                                                             // 0x0020 (size: 0x4)
    float MinRotationAngle;                                                           // 0x0024 (size: 0x4)
    TEnumAsByte<EAxis::Type> FootBoneForwardAxis;                                     // 0x0028 (size: 0x1)
    TEnumAsByte<EAxis::Type> HingeRotationAxis;                                       // 0x0029 (size: 0x1)
    bool bEnableRotationLimit;                                                        // 0x002A (size: 0x1)
    bool bEnableKneeTwistCorrection;                                                  // 0x002B (size: 0x1)
    FName TwistOffsetCurveName;                                                       // 0x002C (size: 0x8)

}; // Size: 0x34

struct FAnimNode_AimOffsetLookAt : public FAnimNode_BlendSpacePlayer
{
    FPoseLink BasePose;                                                               // 0x0130 (size: 0x10)
    int32 LODThreshold;                                                               // 0x0140 (size: 0x4)
    FName SourceSocketName;                                                           // 0x0144 (size: 0x8)
    FName PivotSocketName;                                                            // 0x014C (size: 0x8)
    FVector LookAtLocation;                                                           // 0x0158 (size: 0x18)
    FVector SocketAxis;                                                               // 0x0170 (size: 0x18)
    float Alpha;                                                                      // 0x0188 (size: 0x4)

}; // Size: 0x1D0

struct FAnimNode_AnimDynamics : public FAnimNode_SkeletalControlBase
{
    float LinearDampingOverride;                                                      // 0x00C8 (size: 0x4)
    float AngularDampingOverride;                                                     // 0x00CC (size: 0x4)
    FBoneReference RelativeSpaceBone;                                                 // 0x0190 (size: 0x10)
    FBoneReference BoundBone;                                                         // 0x01A0 (size: 0x10)
    FBoneReference ChainEnd;                                                          // 0x01B0 (size: 0x10)
    TArray<FAnimPhysBodyDefinition> PhysicsBodyDefinitions;                           // 0x01C0 (size: 0x10)
    float GravityScale;                                                               // 0x01D0 (size: 0x4)
    FVector GravityOverride;                                                          // 0x01D8 (size: 0x18)
    float LinearSpringConstant;                                                       // 0x01F0 (size: 0x4)
    float AngularSpringConstant;                                                      // 0x01F4 (size: 0x4)
    float WindScale;                                                                  // 0x01F8 (size: 0x4)
    FVector ComponentLinearAccScale;                                                  // 0x0200 (size: 0x18)
    FVector ComponentLinearVelScale;                                                  // 0x0218 (size: 0x18)
    FVector ComponentAppliedLinearAccClamp;                                           // 0x0230 (size: 0x18)
    float AngularBiasOverride;                                                        // 0x0248 (size: 0x4)
    int32 NumSolverIterationsPreUpdate;                                               // 0x024C (size: 0x4)
    int32 NumSolverIterationsPostUpdate;                                              // 0x0250 (size: 0x4)
    TArray<FAnimPhysSphericalLimit> SphericalLimits;                                  // 0x0258 (size: 0x10)
    FVector ExternalForce;                                                            // 0x0268 (size: 0x18)
    TArray<FAnimPhysPlanarLimit> PlanarLimits;                                        // 0x0280 (size: 0x10)
    AnimPhysSimSpaceType SimulationSpace;                                             // 0x0290 (size: 0x1)
    uint8 bUseSphericalLimits;                                                        // 0x0293 (size: 0x1)
    uint8 bUsePlanarLimit;                                                            // 0x0293 (size: 0x1)
    uint8 bDoUpdate;                                                                  // 0x0293 (size: 0x1)
    uint8 bDoEval;                                                                    // 0x0293 (size: 0x1)
    uint8 bOverrideLinearDamping;                                                     // 0x0293 (size: 0x1)
    uint8 bOverrideAngularBias;                                                       // 0x0293 (size: 0x1)
    uint8 bOverrideAngularDamping;                                                    // 0x0293 (size: 0x1)
    uint8 bEnableWind;                                                                // 0x0293 (size: 0x1)
    uint8 bUseGravityOverride;                                                        // 0x0294 (size: 0x1)
    uint8 bGravityOverrideInSimSpace;                                                 // 0x0294 (size: 0x1)
    uint8 bLinearSpring;                                                              // 0x0294 (size: 0x1)
    uint8 bAngularSpring;                                                             // 0x0294 (size: 0x1)
    uint8 bChain;                                                                     // 0x0294 (size: 0x1)
    FRotationRetargetingInfo RetargetingSettings;                                     // 0x02A0 (size: 0x1A0)

}; // Size: 0x520

struct FAnimNode_ApplyAdditive : public FAnimNode_Base
{
    FPoseLink base;                                                                   // 0x0010 (size: 0x10)
    FPoseLink Additive;                                                               // 0x0020 (size: 0x10)
    float Alpha;                                                                      // 0x0030 (size: 0x4)
    FInputScaleBias AlphaScaleBias;                                                   // 0x0034 (size: 0x8)
    int32 LODThreshold;                                                               // 0x003C (size: 0x4)
    FInputAlphaBoolBlend AlphaBoolBlend;                                              // 0x0040 (size: 0x48)
    FName AlphaCurveName;                                                             // 0x0088 (size: 0x8)
    FInputScaleBiasClamp AlphaScaleBiasClamp;                                         // 0x0090 (size: 0x30)
    EAnimAlphaInputType AlphaInputType;                                               // 0x00C4 (size: 0x1)
    bool bAlphaBoolEnabled;                                                           // 0x00C5 (size: 0x1)

}; // Size: 0xC8

struct FAnimNode_ApplyLimits : public FAnimNode_SkeletalControlBase
{
    TArray<FAngularRangeLimit> AngularRangeLimits;                                    // 0x00C8 (size: 0x10)
    TArray<FVector> AngularOffsets;                                                   // 0x00D8 (size: 0x10)

}; // Size: 0xE8

struct FAnimNode_BlendBoneByChannel : public FAnimNode_Base
{
    FPoseLink A;                                                                      // 0x0010 (size: 0x10)
    FPoseLink B;                                                                      // 0x0020 (size: 0x10)
    TArray<FBlendBoneByChannelEntry> BoneDefinitions;                                 // 0x0030 (size: 0x10)
    float Alpha;                                                                      // 0x0050 (size: 0x4)
    FInputScaleBias AlphaScaleBias;                                                   // 0x0058 (size: 0x8)
    TEnumAsByte<EBoneControlSpace> TransformsSpace;                                   // 0x0060 (size: 0x1)

}; // Size: 0x68

struct FAnimNode_BlendListBase : public FAnimNode_Base
{
    TArray<FPoseLink> BlendPose;                                                      // 0x0010 (size: 0x10)

}; // Size: 0x48

struct FAnimNode_BlendListByBool : public FAnimNode_BlendListBase
{
}; // Size: 0x48

struct FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
{
}; // Size: 0x48

struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
{
}; // Size: 0x48

struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
{
    float NormalizedTime;                                                             // 0x0070 (size: 0x4)
    bool bTeleportToNormalizedTime;                                                   // 0x0074 (size: 0x1)

}; // Size: 0x78

struct FAnimNode_BlendSpaceGraph : public FAnimNode_BlendSpaceGraphBase
{
}; // Size: 0x68

struct FAnimNode_BlendSpaceGraphBase : public FAnimNode_Base
{
    float X;                                                                          // 0x0010 (size: 0x4)
    float Y;                                                                          // 0x0014 (size: 0x4)
    FName GroupName;                                                                  // 0x0018 (size: 0x8)
    TEnumAsByte<EAnimGroupRole::Type> GroupRole;                                      // 0x0020 (size: 0x1)
    class UBlendSpace* BlendSpace;                                                    // 0x0028 (size: 0x8)
    TArray<FPoseLink> SamplePoseLinks;                                                // 0x0030 (size: 0x10)

}; // Size: 0x68

struct FAnimNode_BlendSpacePlayer : public FAnimNode_BlendSpacePlayerBase
{
    class UBlendSpace* BlendSpace;                                                    // 0x0068 (size: 0x8)

}; // Size: 0x70

struct FAnimNode_BlendSpacePlayerBase : public FAnimNode_AssetPlayerBase
{
    class UBlendSpace* PreviousBlendSpace;                                            // 0x0060 (size: 0x8)

}; // Size: 0x68

struct FAnimNode_BlendSpacePlayer_Standalone : public FAnimNode_BlendSpacePlayerBase
{
    FName GroupName;                                                                  // 0x0068 (size: 0x8)
    TEnumAsByte<EAnimGroupRole::Type> GroupRole;                                      // 0x0070 (size: 0x1)
    bool bOverridePositionWhenJoiningSyncGroupAsLeader;                               // 0x0071 (size: 0x1)
    EAnimSyncMethod Method;                                                           // 0x0072 (size: 0x1)
    bool bIgnoreForRelevancyTest;                                                     // 0x0073 (size: 0x1)
    float X;                                                                          // 0x0074 (size: 0x4)
    float Y;                                                                          // 0x0078 (size: 0x4)
    float PlayRate;                                                                   // 0x007C (size: 0x4)
    bool bLoop;                                                                       // 0x0080 (size: 0x1)
    bool bResetPlayTimeWhenBlendSpaceChanges;                                         // 0x0081 (size: 0x1)
    float StartPosition;                                                              // 0x0084 (size: 0x4)
    class UBlendSpace* BlendSpace;                                                    // 0x0088 (size: 0x8)

}; // Size: 0x90

struct FAnimNode_BlendSpaceSampleResult : public FAnimNode_Root
{
}; // Size: 0x20

struct FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
{
    FBoneReference SourceBone;                                                        // 0x00C8 (size: 0x10)
    class UCurveFloat* DrivingCurve;                                                  // 0x00D8 (size: 0x8)
    float Multiplier;                                                                 // 0x00E0 (size: 0x4)
    double RangeMin;                                                                  // 0x00E8 (size: 0x8)
    double RangeMax;                                                                  // 0x00F0 (size: 0x8)
    double RemappedMin;                                                               // 0x00F8 (size: 0x8)
    double RemappedMax;                                                               // 0x0100 (size: 0x8)
    FName ParameterName;                                                              // 0x0108 (size: 0x8)
    FBoneReference TargetBone;                                                        // 0x0110 (size: 0x10)
    EDrivenDestinationMode DestinationMode;                                           // 0x0120 (size: 0x1)
    EDrivenBoneModificationMode ModificationMode;                                     // 0x0121 (size: 0x1)
    TEnumAsByte<EComponentType::Type> SourceComponent;                                // 0x0122 (size: 0x1)
    uint8 bUseRange;                                                                  // 0x0123 (size: 0x1)
    uint8 bAffectTargetTranslationX;                                                  // 0x0123 (size: 0x1)
    uint8 bAffectTargetTranslationY;                                                  // 0x0123 (size: 0x1)
    uint8 bAffectTargetTranslationZ;                                                  // 0x0123 (size: 0x1)
    uint8 bAffectTargetRotationX;                                                     // 0x0123 (size: 0x1)
    uint8 bAffectTargetRotationY;                                                     // 0x0123 (size: 0x1)
    uint8 bAffectTargetRotationZ;                                                     // 0x0123 (size: 0x1)
    uint8 bAffectTargetScaleX;                                                        // 0x0123 (size: 0x1)
    uint8 bAffectTargetScaleY;                                                        // 0x0124 (size: 0x1)
    uint8 bAffectTargetScaleZ;                                                        // 0x0124 (size: 0x1)

}; // Size: 0x128

struct FAnimNode_CCDIK : public FAnimNode_SkeletalControlBase
{
    FVector EffectorLocation;                                                         // 0x00C8 (size: 0x18)
    TEnumAsByte<EBoneControlSpace> EffectorLocationSpace;                             // 0x00E0 (size: 0x1)
    FBoneSocketTarget EffectorTarget;                                                 // 0x00F0 (size: 0x90)
    FBoneReference TipBone;                                                           // 0x0180 (size: 0x10)
    FBoneReference RootBone;                                                          // 0x0190 (size: 0x10)
    float Precision;                                                                  // 0x01A0 (size: 0x4)
    int32 MaxIterations;                                                              // 0x01A4 (size: 0x4)
    bool bStartFromTail;                                                              // 0x01A8 (size: 0x1)
    bool bEnableRotationLimit;                                                        // 0x01A9 (size: 0x1)
    TArray<float> RotationLimitPerJoints;                                             // 0x01B0 (size: 0x10)

}; // Size: 0x1C0

struct FAnimNode_CallFunction : public FAnimNode_Base
{
    FPoseLink Source;                                                                 // 0x0010 (size: 0x10)
    EAnimFunctionCallSite CallSite;                                                   // 0x0034 (size: 0x4)

}; // Size: 0x38

struct FAnimNode_Constraint : public FAnimNode_SkeletalControlBase
{
    FBoneReference BoneToModify;                                                      // 0x00C8 (size: 0x10)
    TArray<FConstraint> ConstraintSetup;                                              // 0x00D8 (size: 0x10)
    TArray<float> ConstraintWeights;                                                  // 0x00E8 (size: 0x10)

}; // Size: 0x108

struct FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
{
    FBoneReference SourceBone;                                                        // 0x00C8 (size: 0x10)
    FBoneReference TargetBone;                                                        // 0x00D8 (size: 0x10)
    bool bCopyTranslation;                                                            // 0x00E8 (size: 0x1)
    bool bCopyRotation;                                                               // 0x00E9 (size: 0x1)
    bool bCopyScale;                                                                  // 0x00EA (size: 0x1)
    TEnumAsByte<EBoneControlSpace> ControlSpace;                                      // 0x00EB (size: 0x1)

}; // Size: 0xF0

struct FAnimNode_CopyBoneDelta : public FAnimNode_SkeletalControlBase
{
    FBoneReference SourceBone;                                                        // 0x00C8 (size: 0x10)
    FBoneReference TargetBone;                                                        // 0x00D8 (size: 0x10)
    bool bCopyTranslation;                                                            // 0x00E8 (size: 0x1)
    bool bCopyRotation;                                                               // 0x00E9 (size: 0x1)
    bool bCopyScale;                                                                  // 0x00EA (size: 0x1)
    CopyBoneDeltaMode CopyMode;                                                       // 0x00EB (size: 0x1)
    float TranslationMultiplier;                                                      // 0x00EC (size: 0x4)
    float RotationMultiplier;                                                         // 0x00F0 (size: 0x4)
    float ScaleMultiplier;                                                            // 0x00F4 (size: 0x4)

}; // Size: 0xF8

struct FAnimNode_CopyPoseFromMesh : public FAnimNode_Base
{
    TWeakObjectPtr<class USkeletalMeshComponent> SourceMeshComponent;                 // 0x0010 (size: 0x8)
    uint8 bUseAttachedParent;                                                         // 0x0018 (size: 0x1)
    uint8 bCopyCurves;                                                                // 0x0018 (size: 0x1)
    bool bCopyCustomAttributes;                                                       // 0x0019 (size: 0x1)
    uint8 bUseMeshPose;                                                               // 0x001A (size: 0x1)
    FName RootBoneToCopy;                                                             // 0x001C (size: 0x8)

}; // Size: 0x158

struct FAnimNode_CurveSource : public FAnimNode_Base
{
    FPoseLink SourcePose;                                                             // 0x0010 (size: 0x10)
    FName SourceBinding;                                                              // 0x0020 (size: 0x8)
    float Alpha;                                                                      // 0x0028 (size: 0x4)
    TScriptInterface<class ICurveSourceInterface> CurveSource;                        // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
{
    FTransform EffectorTransform;                                                     // 0x00D0 (size: 0x60)
    FBoneSocketTarget EffectorTarget;                                                 // 0x0130 (size: 0x90)
    FBoneReference TipBone;                                                           // 0x01C0 (size: 0x10)
    FBoneReference RootBone;                                                          // 0x01D0 (size: 0x10)
    float Precision;                                                                  // 0x01E0 (size: 0x4)
    int32 MaxIterations;                                                              // 0x01E4 (size: 0x4)
    TEnumAsByte<EBoneControlSpace> EffectorTransformSpace;                            // 0x01E8 (size: 0x1)
    TEnumAsByte<EBoneRotationSource> EffectorRotationSource;                          // 0x01E9 (size: 0x1)

}; // Size: 0x1F0

struct FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
{
    FBoneReference RightHandFK;                                                       // 0x00C8 (size: 0x10)
    FBoneReference LeftHandFK;                                                        // 0x00D8 (size: 0x10)
    FBoneReference RightHandIK;                                                       // 0x00E8 (size: 0x10)
    FBoneReference LeftHandIK;                                                        // 0x00F8 (size: 0x10)
    TArray<FBoneReference> IKBonesToMove;                                             // 0x0108 (size: 0x10)
    FVector PerAxisAlpha;                                                             // 0x0118 (size: 0x18)
    float HandFKWeight;                                                               // 0x0130 (size: 0x4)

}; // Size: 0x138

struct FAnimNode_LayeredBoneBlend : public FAnimNode_Base
{
    FPoseLink BasePose;                                                               // 0x0010 (size: 0x10)
    TArray<FPoseLink> BlendPoses;                                                     // 0x0020 (size: 0x10)
    ELayeredBoneBlendMode BlendMode;                                                  // 0x0030 (size: 0x1)
    TArray<class UBlendProfile*> BlendMasks;                                          // 0x0038 (size: 0x10)
    TArray<FInputBlendPose> LayerSetup;                                               // 0x0048 (size: 0x10)
    TArray<float> BlendWeights;                                                       // 0x0058 (size: 0x10)
    TArray<FPerBoneBlendWeight> PerBoneBlendWeights;                                  // 0x0088 (size: 0x10)
    FGuid SkeletonGuid;                                                               // 0x00B8 (size: 0x10)
    FGuid VirtualBoneGuid;                                                            // 0x00C8 (size: 0x10)
    int32 LODThreshold;                                                               // 0x00DC (size: 0x4)
    bool bMeshSpaceRotationBlend;                                                     // 0x00E0 (size: 0x1)
    bool bMeshSpaceScaleBlend;                                                        // 0x00E1 (size: 0x1)
    TEnumAsByte<ECurveBlendOption::Type> CurveBlendOption;                            // 0x00E2 (size: 0x1)
    bool bBlendRootMotionBasedOnRootBone;                                             // 0x00E3 (size: 0x1)

}; // Size: 0xE8

struct FAnimNode_LegIK : public FAnimNode_SkeletalControlBase
{
    float ReachPrecision;                                                             // 0x00C8 (size: 0x4)
    int32 MaxIterations;                                                              // 0x00CC (size: 0x4)
    float SoftPercentLength;                                                          // 0x00D0 (size: 0x4)
    float SoftAlpha;                                                                  // 0x00D4 (size: 0x4)
    TArray<FAnimLegIKDefinition> LegsDefinition;                                      // 0x00D8 (size: 0x10)

}; // Size: 0x100

struct FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
{
    FBoneReference BoneToModify;                                                      // 0x00C8 (size: 0x10)
    FBoneSocketTarget LookAtTarget;                                                   // 0x00E0 (size: 0x90)
    FVector LookAtLocation;                                                           // 0x0170 (size: 0x18)
    FAxis LookAt_Axis;                                                                // 0x0188 (size: 0x20)
    bool bUseLookUpAxis;                                                              // 0x01A8 (size: 0x1)
    TEnumAsByte<EInterpolationBlend::Type> InterpolationType;                         // 0x01A9 (size: 0x1)
    FAxis LookUp_Axis;                                                                // 0x01B0 (size: 0x20)
    float LookAtClamp;                                                                // 0x01D0 (size: 0x4)
    float InterpolationTime;                                                          // 0x01D4 (size: 0x4)
    float InterpolationTriggerThreashold;                                             // 0x01D8 (size: 0x4)

}; // Size: 0x250

struct FAnimNode_MakeDynamicAdditive : public FAnimNode_Base
{
    FPoseLink base;                                                                   // 0x0010 (size: 0x10)
    FPoseLink Additive;                                                               // 0x0020 (size: 0x10)
    bool bMeshSpaceAdditive;                                                          // 0x0030 (size: 0x1)

}; // Size: 0x38

struct FAnimNode_MeshSpaceRefPose : public FAnimNode_Base
{
}; // Size: 0x10

struct FAnimNode_Mirror : public FAnimNode_MirrorBase
{
}; // Size: 0x48

struct FAnimNode_MirrorBase : public FAnimNode_Base
{
    FPoseLink Source;                                                                 // 0x0010 (size: 0x10)

}; // Size: 0x48

struct FAnimNode_Mirror_Standalone : public FAnimNode_MirrorBase
{
    bool bMirror;                                                                     // 0x0048 (size: 0x1)
    class UMirrorDataTable* MirrorDataTable;                                          // 0x0050 (size: 0x8)
    float BlendTime;                                                                  // 0x0058 (size: 0x4)
    bool bResetChild;                                                                 // 0x005C (size: 0x1)
    bool bBoneMirroring;                                                              // 0x005D (size: 0x1)
    bool bCurveMirroring;                                                             // 0x005E (size: 0x1)
    bool bAttributeMirroring;                                                         // 0x005F (size: 0x1)

}; // Size: 0x60

struct FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
{
    FBoneReference BoneToModify;                                                      // 0x00C8 (size: 0x10)
    FVector Translation;                                                              // 0x00D8 (size: 0x18)
    FRotator Rotation;                                                                // 0x00F0 (size: 0x18)
    FVector scale;                                                                    // 0x0108 (size: 0x18)
    TEnumAsByte<EBoneModificationMode> TranslationMode;                               // 0x0120 (size: 0x1)
    TEnumAsByte<EBoneModificationMode> RotationMode;                                  // 0x0121 (size: 0x1)
    TEnumAsByte<EBoneModificationMode> ScaleMode;                                     // 0x0122 (size: 0x1)
    TEnumAsByte<EBoneControlSpace> TranslationSpace;                                  // 0x0123 (size: 0x1)
    TEnumAsByte<EBoneControlSpace> RotationSpace;                                     // 0x0124 (size: 0x1)
    TEnumAsByte<EBoneControlSpace> ScaleSpace;                                        // 0x0125 (size: 0x1)

}; // Size: 0x128

struct FAnimNode_ModifyCurve : public FAnimNode_Base
{
    FPoseLink SourcePose;                                                             // 0x0010 (size: 0x10)
    TMap<FName, float> CurveMap;                                                      // 0x0020 (size: 0x50)
    TArray<float> CurveValues;                                                        // 0x0070 (size: 0x10)
    TArray<FName> CurveNames;                                                         // 0x0080 (size: 0x10)
    float Alpha;                                                                      // 0x0118 (size: 0x4)
    EModifyCurveApplyMode ApplyMode;                                                  // 0x011C (size: 0x1)

}; // Size: 0x120

struct FAnimNode_MultiWayBlend : public FAnimNode_Base
{
    TArray<FPoseLink> Poses;                                                          // 0x0010 (size: 0x10)
    TArray<float> DesiredAlphas;                                                      // 0x0020 (size: 0x10)
    FInputScaleBias AlphaScaleBias;                                                   // 0x0040 (size: 0x8)
    bool bAdditiveNode;                                                               // 0x0048 (size: 0x1)
    bool bNormalizeAlpha;                                                             // 0x0049 (size: 0x1)

}; // Size: 0x50

struct FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase
{
    FBoneReference BoneToObserve;                                                     // 0x00C8 (size: 0x10)
    TEnumAsByte<EBoneControlSpace> DisplaySpace;                                      // 0x00D8 (size: 0x1)
    bool bRelativeToRefPose;                                                          // 0x00D9 (size: 0x1)
    FVector Translation;                                                              // 0x00E0 (size: 0x18)
    FRotator Rotation;                                                                // 0x00F8 (size: 0x18)
    FVector scale;                                                                    // 0x0110 (size: 0x18)

}; // Size: 0x128

struct FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler
{
    FPoseLink SourcePose;                                                             // 0x00A0 (size: 0x10)
    EAlphaBlendOption BlendOption;                                                    // 0x00B0 (size: 0x1)
    class UCurveFloat* CustomCurve;                                                   // 0x00B8 (size: 0x8)

}; // Size: 0xD8

struct FAnimNode_PoseByName : public FAnimNode_PoseHandler
{
    FName PoseName;                                                                   // 0x00A0 (size: 0x8)
    float PoseWeight;                                                                 // 0x00A8 (size: 0x4)

}; // Size: 0xB8

struct FAnimNode_PoseDriver : public FAnimNode_PoseHandler
{
    FPoseLink SourcePose;                                                             // 0x00A0 (size: 0x10)
    TArray<FBoneReference> SourceBones;                                               // 0x00B0 (size: 0x10)
    FBoneReference EvalSpaceBone;                                                     // 0x00C0 (size: 0x10)
    bool bEvalFromRefPose;                                                            // 0x00D0 (size: 0x1)
    TArray<FBoneReference> OnlyDriveBones;                                            // 0x00D8 (size: 0x10)
    TArray<FPoseDriverTarget> PoseTargets;                                            // 0x00E8 (size: 0x10)
    FRBFParams RBFParams;                                                             // 0x00F8 (size: 0x38)
    EPoseDriverSource DriveSource;                                                    // 0x0130 (size: 0x1)
    EPoseDriverOutput DriveOutput;                                                    // 0x0131 (size: 0x1)
    int32 LODThreshold;                                                               // 0x0174 (size: 0x4)

}; // Size: 0x1A8

struct FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase
{
    class UPoseAsset* PoseAsset;                                                      // 0x0038 (size: 0x8)

}; // Size: 0xA0

struct FAnimNode_PoseSnapshot : public FAnimNode_Base
{
    FName SnapshotName;                                                               // 0x0010 (size: 0x8)
    FPoseSnapshot Snapshot;                                                           // 0x0018 (size: 0x38)
    ESnapshotSourceMode Mode;                                                         // 0x0050 (size: 0x1)

}; // Size: 0x90

struct FAnimNode_RandomPlayer : public FAnimNode_AssetPlayerRelevancyBase
{
    TArray<FRandomPlayerSequenceEntry> Entries;                                       // 0x0010 (size: 0x10)
    float BlendWeight;                                                                // 0x0070 (size: 0x4)
    bool bShuffleMode;                                                                // 0x0074 (size: 0x1)

}; // Size: 0x78

struct FAnimNode_RefPose : public FAnimNode_Base
{
}; // Size: 0x10

struct FAnimNode_ResetRoot : public FAnimNode_SkeletalControlBase
{
}; // Size: 0xD8

struct FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase
{
    class UPhysicsAsset* OverridePhysicsAsset;                                        // 0x00C8 (size: 0x8)
    bool bDefaultToSkeletalMeshPhysicsAsset;                                          // 0x00D0 (size: 0x1)
    bool bUseLocalLODThresholdOnly;                                                   // 0x0208 (size: 0x1)
    FVector OverrideWorldGravity;                                                     // 0x0210 (size: 0x18)
    FVector ExternalForce;                                                            // 0x0228 (size: 0x18)
    FVector ComponentLinearAccScale;                                                  // 0x0240 (size: 0x18)
    FVector ComponentLinearVelScale;                                                  // 0x0258 (size: 0x18)
    FVector ComponentAppliedLinearAccClamp;                                           // 0x0270 (size: 0x18)
    FSimSpaceSettings SimSpaceSettings;                                               // 0x0288 (size: 0x60)
    float CachedBoundsScale;                                                          // 0x02E8 (size: 0x4)
    FBoneReference BaseBoneRef;                                                       // 0x02EC (size: 0x10)
    TEnumAsByte<ECollisionChannel> OverlapChannel;                                    // 0x02FC (size: 0x1)
    ESimulationSpace SimulationSpace;                                                 // 0x02FD (size: 0x1)
    bool bForceDisableCollisionBetweenConstraintBodies;                               // 0x02FE (size: 0x1)
    bool bUseExternalClothCollision;                                                  // 0x02FF (size: 0x1)
    uint8 bEnableWorldGeometry;                                                       // 0x0301 (size: 0x1)
    uint8 bOverrideWorldGravity;                                                      // 0x0301 (size: 0x1)
    uint8 bTransferBoneVelocities;                                                    // 0x0301 (size: 0x1)
    uint8 bFreezeIncomingPoseOnStart;                                                 // 0x0301 (size: 0x1)
    uint8 bClampLinearTranslationLimitToRefPose;                                      // 0x0301 (size: 0x1)
    float WorldSpaceMinimumScale;                                                     // 0x0304 (size: 0x4)
    float EvaluationResetTime;                                                        // 0x0308 (size: 0x4)
    ESimulationTiming SimulationTiming;                                               // 0x030D (size: 0x1)

}; // Size: 0x970

struct FAnimNode_RotateRootBone : public FAnimNode_Base
{
    FPoseLink BasePose;                                                               // 0x0010 (size: 0x10)
    float Pitch;                                                                      // 0x0020 (size: 0x4)
    float Yaw;                                                                        // 0x0024 (size: 0x4)
    FInputScaleBiasClamp PitchScaleBiasClamp;                                         // 0x0028 (size: 0x30)
    FInputScaleBiasClamp YawScaleBiasClamp;                                           // 0x0058 (size: 0x30)
    FRotator MeshToComponent;                                                         // 0x0088 (size: 0x18)
    bool bRotateRootMotionAttribute;                                                  // 0x00A0 (size: 0x1)

}; // Size: 0xB0

struct FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
{
    FBoneReference TargetBone;                                                        // 0x00C8 (size: 0x10)
    FBoneReference SourceBone;                                                        // 0x00D8 (size: 0x10)
    float Multiplier;                                                                 // 0x00E8 (size: 0x4)
    TEnumAsByte<EBoneAxis> RotationAxisToRefer;                                       // 0x00EC (size: 0x1)
    bool bIsAdditive;                                                                 // 0x00ED (size: 0x1)

}; // Size: 0xF0

struct FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
{
    FPoseLink BasePose;                                                               // 0x0070 (size: 0x10)
    int32 LODThreshold;                                                               // 0x0080 (size: 0x4)
    float Alpha;                                                                      // 0x0084 (size: 0x4)
    FInputScaleBias AlphaScaleBias;                                                   // 0x0088 (size: 0x8)
    FInputAlphaBoolBlend AlphaBoolBlend;                                              // 0x0090 (size: 0x48)
    FName AlphaCurveName;                                                             // 0x00D8 (size: 0x8)
    FInputScaleBiasClamp AlphaScaleBiasClamp;                                         // 0x00E0 (size: 0x30)
    EAnimAlphaInputType AlphaInputType;                                               // 0x0114 (size: 0x1)
    bool bAlphaBoolEnabled;                                                           // 0x0115 (size: 0x1)

}; // Size: 0x118

struct FAnimNode_RotationOffsetBlendSpaceGraph : public FAnimNode_BlendSpaceGraphBase
{
    FPoseLink BasePose;                                                               // 0x0068 (size: 0x10)
    int32 LODThreshold;                                                               // 0x0078 (size: 0x4)
    float Alpha;                                                                      // 0x007C (size: 0x4)
    FInputScaleBias AlphaScaleBias;                                                   // 0x0080 (size: 0x8)
    FInputAlphaBoolBlend AlphaBoolBlend;                                              // 0x0088 (size: 0x48)
    FName AlphaCurveName;                                                             // 0x00D0 (size: 0x8)
    FInputScaleBiasClamp AlphaScaleBiasClamp;                                         // 0x00D8 (size: 0x30)
    EAnimAlphaInputType AlphaInputType;                                               // 0x010C (size: 0x1)
    bool bAlphaBoolEnabled;                                                           // 0x010D (size: 0x1)

}; // Size: 0x110

struct FAnimNode_ScaleChainLength : public FAnimNode_Base
{
    FPoseLink InputPose;                                                              // 0x0010 (size: 0x10)
    float DefaultChainLength;                                                         // 0x0020 (size: 0x4)
    FBoneReference ChainStartBone;                                                    // 0x0024 (size: 0x10)
    FBoneReference ChainEndBone;                                                      // 0x0034 (size: 0x10)
    FVector TargetLocation;                                                           // 0x0048 (size: 0x18)
    float Alpha;                                                                      // 0x0060 (size: 0x4)
    FInputScaleBias AlphaScaleBias;                                                   // 0x0068 (size: 0x8)
    EScaleChainInitialLength ChainInitialLength;                                      // 0x0070 (size: 0x1)

}; // Size: 0x88

struct FAnimNode_SequenceEvaluator : public FAnimNode_SequenceEvaluatorBase
{
}; // Size: 0x40

struct FAnimNode_SequenceEvaluatorBase : public FAnimNode_AssetPlayerBase
{
}; // Size: 0x40

struct FAnimNode_SequenceEvaluator_Standalone : public FAnimNode_SequenceEvaluatorBase
{
    FName GroupName;                                                                  // 0x0040 (size: 0x8)
    TEnumAsByte<EAnimGroupRole::Type> GroupRole;                                      // 0x0048 (size: 0x1)
    EAnimSyncMethod Method;                                                           // 0x0049 (size: 0x1)
    bool bIgnoreForRelevancyTest;                                                     // 0x004A (size: 0x1)
    class UAnimSequenceBase* Sequence;                                                // 0x0050 (size: 0x8)
    float ExplicitTime;                                                               // 0x0058 (size: 0x4)
    bool bUseExplicitFrame;                                                           // 0x005C (size: 0x1)
    int32 ExplicitFrame;                                                              // 0x0060 (size: 0x4)
    bool bShouldLoop;                                                                 // 0x0064 (size: 0x1)
    bool bTeleportToExplicitTime;                                                     // 0x0065 (size: 0x1)
    TEnumAsByte<ESequenceEvalReinit::Type> ReinitializationBehavior;                  // 0x0066 (size: 0x1)
    float StartPosition;                                                              // 0x0068 (size: 0x4)

}; // Size: 0x70

struct FAnimNode_SkeletalControlBase : public FAnimNode_Base
{
    FComponentSpacePoseLink ComponentPose;                                            // 0x0010 (size: 0x10)
    int32 LODThreshold;                                                               // 0x0020 (size: 0x4)
    float ActualAlpha;                                                                // 0x0024 (size: 0x4)
    EAnimAlphaInputType AlphaInputType;                                               // 0x0028 (size: 0x1)
    bool bAlphaBoolEnabled;                                                           // 0x0029 (size: 0x1)
    float Alpha;                                                                      // 0x002C (size: 0x4)
    FInputScaleBias AlphaScaleBias;                                                   // 0x0030 (size: 0x8)
    FInputAlphaBoolBlend AlphaBoolBlend;                                              // 0x0038 (size: 0x48)
    FName AlphaCurveName;                                                             // 0x0080 (size: 0x8)
    FInputScaleBiasClamp AlphaScaleBiasClamp;                                         // 0x0088 (size: 0x30)

}; // Size: 0xC8

struct FAnimNode_Slot : public FAnimNode_Base
{
    FPoseLink Source;                                                                 // 0x0010 (size: 0x10)
    FName SlotName;                                                                   // 0x0020 (size: 0x8)
    bool bAlwaysUpdateSourcePose;                                                     // 0x0028 (size: 0x1)

}; // Size: 0x48

struct FAnimNode_SplineIK : public FAnimNode_SkeletalControlBase
{
    FBoneReference StartBone;                                                         // 0x00C8 (size: 0x10)
    FBoneReference EndBone;                                                           // 0x00D8 (size: 0x10)
    ESplineBoneAxis BoneAxis;                                                         // 0x00E8 (size: 0x1)
    bool bAutoCalculateSpline;                                                        // 0x00E9 (size: 0x1)
    int32 PointCount;                                                                 // 0x00EC (size: 0x4)
    TArray<FTransform> ControlPoints;                                                 // 0x00F0 (size: 0x10)
    float Roll;                                                                       // 0x0100 (size: 0x4)
    float TwistStart;                                                                 // 0x0104 (size: 0x4)
    float TwistEnd;                                                                   // 0x0108 (size: 0x4)
    FAlphaBlend TwistBlend;                                                           // 0x0110 (size: 0x30)
    float Stretch;                                                                    // 0x0140 (size: 0x4)
    float Offset;                                                                     // 0x0144 (size: 0x4)

}; // Size: 0x260

struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
{
    FBoneReference SpringBone;                                                        // 0x00C8 (size: 0x10)
    double MaxDisplacement;                                                           // 0x00D8 (size: 0x8)
    double SpringStiffness;                                                           // 0x00E0 (size: 0x8)
    double SpringDamping;                                                             // 0x00E8 (size: 0x8)
    double ErrorResetThresh;                                                          // 0x00F0 (size: 0x8)
    uint8 bLimitDisplacement;                                                         // 0x0164 (size: 0x1)
    uint8 bTranslateX;                                                                // 0x0164 (size: 0x1)
    uint8 bTranslateY;                                                                // 0x0164 (size: 0x1)
    uint8 bTranslateZ;                                                                // 0x0164 (size: 0x1)
    uint8 bRotateX;                                                                   // 0x0164 (size: 0x1)
    uint8 bRotateY;                                                                   // 0x0164 (size: 0x1)
    uint8 bRotateZ;                                                                   // 0x0164 (size: 0x1)

}; // Size: 0x168

struct FAnimNode_Sync : public FAnimNode_Base
{
    FPoseLink Source;                                                                 // 0x0010 (size: 0x10)
    FName GroupName;                                                                  // 0x0020 (size: 0x8)
    TEnumAsByte<EAnimGroupRole::Type> GroupRole;                                      // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FAnimNode_Trail : public FAnimNode_SkeletalControlBase
{
    FBoneReference TrailBone;                                                         // 0x0130 (size: 0x10)
    int32 ChainLength;                                                                // 0x0140 (size: 0x4)
    TEnumAsByte<EAxis::Type> ChainBoneAxis;                                           // 0x0144 (size: 0x1)
    uint8 bInvertChainBoneAxis;                                                       // 0x0145 (size: 0x1)
    uint8 bLimitStretch;                                                              // 0x0145 (size: 0x1)
    uint8 bLimitRotation;                                                             // 0x0145 (size: 0x1)
    uint8 bUsePlanarLimit;                                                            // 0x0145 (size: 0x1)
    uint8 bActorSpaceFakeVel;                                                         // 0x0145 (size: 0x1)
    uint8 bReorientParentToChild;                                                     // 0x0145 (size: 0x1)
    float MaxDeltaTime;                                                               // 0x0148 (size: 0x4)
    float RelaxationSpeedScale;                                                       // 0x014C (size: 0x4)
    FRuntimeFloatCurve TrailRelaxationSpeed;                                          // 0x0150 (size: 0x88)
    FInputScaleBiasClamp RelaxationSpeedScaleInputProcessor;                          // 0x01D8 (size: 0x30)
    TArray<FRotationLimit> RotationLimits;                                            // 0x0208 (size: 0x10)
    TArray<FVector> RotationOffsets;                                                  // 0x0218 (size: 0x10)
    TArray<FAnimPhysPlanarLimit> PlanarLimits;                                        // 0x0228 (size: 0x10)
    float StretchLimit;                                                               // 0x0238 (size: 0x4)
    FVector FakeVelocity;                                                             // 0x0240 (size: 0x18)
    FBoneReference BaseJoint;                                                         // 0x0258 (size: 0x10)
    float LastBoneRotationAnimAlphaBlend;                                             // 0x0268 (size: 0x4)

}; // Size: 0x2A0

struct FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase
{
    FReferenceBoneFrame BaseFrame;                                                    // 0x00C8 (size: 0x30)
    FReferenceBoneFrame TwistFrame;                                                   // 0x00F8 (size: 0x30)
    FAxis TwistPlaneNormalAxis;                                                       // 0x0128 (size: 0x20)
    float RangeMax;                                                                   // 0x0148 (size: 0x4)
    float RemappedMin;                                                                // 0x014C (size: 0x4)
    float RemappedMax;                                                                // 0x0150 (size: 0x4)
    FName CurveName;                                                                  // 0x0154 (size: 0x8)

}; // Size: 0x168

struct FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
{
    FBoneReference IKBone;                                                            // 0x00C8 (size: 0x10)
    double StartStretchRatio;                                                         // 0x00D8 (size: 0x8)
    double MaxStretchScale;                                                           // 0x00E0 (size: 0x8)
    FVector EffectorLocation;                                                         // 0x00E8 (size: 0x18)
    FBoneSocketTarget EffectorTarget;                                                 // 0x0110 (size: 0x90)
    FVector JointTargetLocation;                                                      // 0x01A0 (size: 0x18)
    FBoneSocketTarget JointTarget;                                                    // 0x01C0 (size: 0x90)
    FAxis TwistAxis;                                                                  // 0x0250 (size: 0x20)
    TEnumAsByte<EBoneControlSpace> EffectorLocationSpace;                             // 0x0270 (size: 0x1)
    TEnumAsByte<EBoneControlSpace> JointTargetLocationSpace;                          // 0x0271 (size: 0x1)
    uint8 bAllowStretching;                                                           // 0x0272 (size: 0x1)
    uint8 bTakeRotationFromEffectorSpace;                                             // 0x0272 (size: 0x1)
    uint8 bMaintainEffectorRelRot;                                                    // 0x0272 (size: 0x1)
    uint8 bAllowTwist;                                                                // 0x0272 (size: 0x1)

}; // Size: 0x280

struct FAnimNode_TwoWayBlend : public FAnimNode_Base
{
    FPoseLink A;                                                                      // 0x0010 (size: 0x10)
    FPoseLink B;                                                                      // 0x0020 (size: 0x10)
    EAnimAlphaInputType AlphaInputType;                                               // 0x0030 (size: 0x1)
    uint8 bAlphaBoolEnabled;                                                          // 0x0031 (size: 0x1)
    uint8 bResetChildOnActivation;                                                    // 0x0031 (size: 0x1)
    uint8 bAlwaysUpdateChildren;                                                      // 0x0031 (size: 0x1)
    float Alpha;                                                                      // 0x0034 (size: 0x4)
    FInputScaleBias AlphaScaleBias;                                                   // 0x0038 (size: 0x8)
    FInputAlphaBoolBlend AlphaBoolBlend;                                              // 0x0040 (size: 0x48)
    FName AlphaCurveName;                                                             // 0x0088 (size: 0x8)
    FInputScaleBiasClamp AlphaScaleBiasClamp;                                         // 0x0090 (size: 0x30)

}; // Size: 0xC8

struct FAnimPhysBodyDefinition
{
    FBoneReference BoundBone;                                                         // 0x0000 (size: 0x10)
    FVector BoxExtents;                                                               // 0x0010 (size: 0x18)
    FVector LocalJointOffset;                                                         // 0x0028 (size: 0x18)
    FAnimPhysConstraintSetup ConstraintSetup;                                         // 0x0040 (size: 0x88)
    AnimPhysCollisionType CollisionType;                                              // 0x00C8 (size: 0x1)
    float SphereCollisionRadius;                                                      // 0x00CC (size: 0x4)

}; // Size: 0xD0

struct FAnimPhysConstraintSetup
{
    AnimPhysLinearConstraintType LinearXLimitType;                                    // 0x0000 (size: 0x1)
    AnimPhysLinearConstraintType LinearYLimitType;                                    // 0x0001 (size: 0x1)
    AnimPhysLinearConstraintType LinearZLimitType;                                    // 0x0002 (size: 0x1)
    FVector LinearAxesMin;                                                            // 0x0008 (size: 0x18)
    FVector LinearAxesMax;                                                            // 0x0020 (size: 0x18)
    AnimPhysAngularConstraintType AngularConstraintType;                              // 0x0038 (size: 0x1)
    AnimPhysTwistAxis TwistAxis;                                                      // 0x0039 (size: 0x1)
    AnimPhysTwistAxis AngularTargetAxis;                                              // 0x003A (size: 0x1)
    float ConeAngle;                                                                  // 0x003C (size: 0x4)
    FVector AngularLimitsMin;                                                         // 0x0040 (size: 0x18)
    FVector AngularLimitsMax;                                                         // 0x0058 (size: 0x18)
    FVector AngularTarget;                                                            // 0x0070 (size: 0x18)

}; // Size: 0x88

struct FAnimPhysPlanarLimit
{
    FBoneReference DrivingBone;                                                       // 0x0000 (size: 0x10)
    FTransform PlaneTransform;                                                        // 0x0010 (size: 0x60)

}; // Size: 0x70

struct FAnimPhysSphericalLimit
{
    FBoneReference DrivingBone;                                                       // 0x0000 (size: 0x10)
    FVector SphereLocalOffset;                                                        // 0x0010 (size: 0x18)
    float LimitRadius;                                                                // 0x0028 (size: 0x4)
    ESphericalLimitType LimitType;                                                    // 0x002C (size: 0x1)

}; // Size: 0x30

struct FAnimSequencerInstanceProxy : public FAnimInstanceProxy
{
}; // Size: 0xC00

struct FAnimationStateMachineReference : public FAnimNodeReference
{
}; // Size: 0x10

struct FAnimationStateResultReference : public FAnimNodeReference
{
}; // Size: 0x10

struct FBlendBoneByChannelEntry
{
    FBoneReference SourceBone;                                                        // 0x0000 (size: 0x10)
    FBoneReference TargetBone;                                                        // 0x0010 (size: 0x10)
    bool bBlendTranslation;                                                           // 0x0020 (size: 0x1)
    bool bBlendRotation;                                                              // 0x0021 (size: 0x1)
    bool bBlendScale;                                                                 // 0x0022 (size: 0x1)

}; // Size: 0x24

struct FBlendListBaseReference : public FAnimNodeReference
{
}; // Size: 0x10

struct FBlendSpacePlayerReference : public FAnimNodeReference
{
}; // Size: 0x10

struct FBlendSpaceReference : public FAnimNodeReference
{
}; // Size: 0x10

struct FConstraint
{
    FBoneReference TargetBone;                                                        // 0x0000 (size: 0x10)
    EConstraintOffsetOption OffsetOption;                                             // 0x0010 (size: 0x1)
    ETransformConstraintType TransformType;                                           // 0x0011 (size: 0x1)
    FFilterOptionPerAxis PerAxis;                                                     // 0x0012 (size: 0x3)

}; // Size: 0x1C

struct FIKChain
{
}; // Size: 0x50

struct FIKChainLink
{
}; // Size: 0x70

struct FIKFootPelvisPullDownSolver
{
    FVectorRK4SpringInterpolator PelvisAdjustmentInterp;                              // 0x0000 (size: 0x8)
    double PelvisAdjustmentInterpAlpha;                                               // 0x0060 (size: 0x8)
    double PelvisAdjustmentMaxDistance;                                               // 0x0068 (size: 0x8)
    double PelvisAdjustmentErrorTolerance;                                            // 0x0070 (size: 0x8)
    int32 PelvisAdjustmentMaxIter;                                                    // 0x0078 (size: 0x4)

}; // Size: 0x80

struct FLayeredBoneBlendReference : public FAnimNodeReference
{
}; // Size: 0x10

struct FLinkedAnimGraphReference : public FAnimNodeReference
{
}; // Size: 0x10

struct FMirrorAnimNodeReference : public FAnimNodeReference
{
}; // Size: 0x10

struct FModifyCurveAnimNodeReference : public FAnimNodeReference
{
}; // Size: 0x10

struct FPoseDriverTarget
{
    TArray<FPoseDriverTransform> BoneTransforms;                                      // 0x0000 (size: 0x10)
    FRotator TargetRotation;                                                          // 0x0010 (size: 0x18)
    float TargetScale;                                                                // 0x0028 (size: 0x4)
    ERBFDistanceMethod DistanceMethod;                                                // 0x002C (size: 0x1)
    ERBFFunctionType FunctionType;                                                    // 0x002D (size: 0x1)
    bool bApplyCustomCurve;                                                           // 0x002E (size: 0x1)
    FRichCurve CustomCurve;                                                           // 0x0030 (size: 0x80)
    FName DrivenName;                                                                 // 0x00B0 (size: 0x8)
    bool bIsHidden;                                                                   // 0x00C0 (size: 0x1)

}; // Size: 0xC8

struct FPoseDriverTransform
{
    FVector TargetTranslation;                                                        // 0x0000 (size: 0x18)
    FRotator TargetRotation;                                                          // 0x0018 (size: 0x18)

}; // Size: 0x30

struct FPositionHistory
{
    TArray<FVector> Positions;                                                        // 0x0000 (size: 0x10)
    float Range;                                                                      // 0x0010 (size: 0x4)

}; // Size: 0x30

struct FRBFEntry
{
    TArray<float> Values;                                                             // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FRBFParams
{
    int32 TargetDimensions;                                                           // 0x0000 (size: 0x4)
    ERBFSolverType SolverType;                                                        // 0x0004 (size: 0x1)
    float Radius;                                                                     // 0x0008 (size: 0x4)
    bool bAutomaticRadius;                                                            // 0x000C (size: 0x1)
    ERBFFunctionType Function;                                                        // 0x000D (size: 0x1)
    ERBFDistanceMethod DistanceMethod;                                                // 0x000E (size: 0x1)
    TEnumAsByte<EBoneAxis> TwistAxis;                                                 // 0x000F (size: 0x1)
    float WeightThreshold;                                                            // 0x0010 (size: 0x4)
    ERBFNormalizeMethod NormalizeMethod;                                              // 0x0014 (size: 0x1)
    FVector MedianReference;                                                          // 0x0018 (size: 0x18)
    float MedianMin;                                                                  // 0x0030 (size: 0x4)
    float MedianMax;                                                                  // 0x0034 (size: 0x4)

}; // Size: 0x38

struct FRBFTarget : public FRBFEntry
{
    float ScaleFactor;                                                                // 0x0010 (size: 0x4)
    bool bApplyCustomCurve;                                                           // 0x0014 (size: 0x1)
    FRichCurve CustomCurve;                                                           // 0x0018 (size: 0x80)
    ERBFDistanceMethod DistanceMethod;                                                // 0x0098 (size: 0x1)
    ERBFFunctionType FunctionType;                                                    // 0x0099 (size: 0x1)

}; // Size: 0xA0

struct FRandomPlayerSequenceEntry
{
    class UAnimSequenceBase* Sequence;                                                // 0x0000 (size: 0x8)
    float ChanceToPlay;                                                               // 0x0008 (size: 0x4)
    int32 MinLoopCount;                                                               // 0x000C (size: 0x4)
    int32 MaxLoopCount;                                                               // 0x0010 (size: 0x4)
    float MinPlayRate;                                                                // 0x0014 (size: 0x4)
    float MaxPlayRate;                                                                // 0x0018 (size: 0x4)
    FAlphaBlend BlendIn;                                                              // 0x0020 (size: 0x30)

}; // Size: 0x50

struct FReferenceBoneFrame
{
    FBoneReference bone;                                                              // 0x0000 (size: 0x10)
    FAxis Axis;                                                                       // 0x0010 (size: 0x20)

}; // Size: 0x30

struct FRigidBodyAnimNodeReference : public FAnimNodeReference
{
}; // Size: 0x10

struct FRotationLimit
{
    FVector LimitMin;                                                                 // 0x0000 (size: 0x18)
    FVector LimitMax;                                                                 // 0x0018 (size: 0x18)

}; // Size: 0x30

struct FRotationRetargetingInfo
{
    bool bEnabled;                                                                    // 0x0000 (size: 0x1)
    FTransform Source;                                                                // 0x0010 (size: 0x60)
    FTransform Target;                                                                // 0x0070 (size: 0x60)
    ERotationComponent RotationComponent;                                             // 0x00D0 (size: 0x1)
    FVector TwistAxis;                                                                // 0x00D8 (size: 0x18)
    bool bUseAbsoluteAngle;                                                           // 0x00F0 (size: 0x1)
    float SourceMinimum;                                                              // 0x00F4 (size: 0x4)
    float SourceMaximum;                                                              // 0x00F8 (size: 0x4)
    float TargetMinimum;                                                              // 0x00FC (size: 0x4)
    float TargetMaximum;                                                              // 0x0100 (size: 0x4)
    EEasingFuncType EasingType;                                                       // 0x0104 (size: 0x1)
    FRuntimeFloatCurve CustomCurve;                                                   // 0x0108 (size: 0x88)
    bool bFlipEasing;                                                                 // 0x0190 (size: 0x1)
    float EasingWeight;                                                               // 0x0194 (size: 0x4)
    bool bClamp;                                                                      // 0x0198 (size: 0x1)

}; // Size: 0x1A0

struct FSequenceEvaluatorReference : public FAnimNodeReference
{
}; // Size: 0x10

struct FSequencePlayerReference : public FAnimNodeReference
{
}; // Size: 0x10

struct FSimSpaceSettings
{
    float WorldAlpha;                                                                 // 0x0000 (size: 0x4)
    float VelocityScaleZ;                                                             // 0x0004 (size: 0x4)
    float MaxLinearVelocity;                                                          // 0x0008 (size: 0x4)
    float MaxAngularVelocity;                                                         // 0x000C (size: 0x4)
    float MaxLinearAcceleration;                                                      // 0x0010 (size: 0x4)
    float MaxAngularAcceleration;                                                     // 0x0014 (size: 0x4)
    FVector ExternalLinearDragV;                                                      // 0x0018 (size: 0x18)
    FVector ExternalLinearVelocity;                                                   // 0x0030 (size: 0x18)
    FVector ExternalAngularVelocity;                                                  // 0x0048 (size: 0x18)

}; // Size: 0x60

struct FSkeletalControlReference : public FAnimNodeReference
{
}; // Size: 0x10

struct FSplineIKCachedBoneData
{
    FBoneReference bone;                                                              // 0x0000 (size: 0x10)
    int32 RefSkeletonIndex;                                                           // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FWarpingVectorValue
{
    EWarpingVectorMode Mode;                                                          // 0x0000 (size: 0x1)
    FVector Value;                                                                    // 0x0008 (size: 0x18)

}; // Size: 0x20

class ISequencerAnimationOverride : public IInterface
{

    TArray<FName> GetSequencerAnimSlotNames();
    bool AllowsCinematicOverride();
}; // Size: 0x28

class ISequencerAnimationSupport : public IInterface
{
}; // Size: 0x28

class UAnimExecutionContextLibrary : public UBlueprintFunctionLibrary
{

    bool IsActive(const FAnimExecutionContext& Context);
    float GetDeltaTime(const FAnimUpdateContext& Context);
    float GetCurrentWeight(const FAnimUpdateContext& Context);
    FAnimNodeReference GetAnimNodeReference(class UAnimInstance* Instance, int32 Index);
    class UAnimInstance* GetAnimInstance(const FAnimExecutionContext& Context);
    FAnimUpdateContext ConvertToUpdateContext(const FAnimExecutionContext& Context, EAnimExecutionContextConversionResult& Result);
    FAnimPoseContext ConvertToPoseContext(const FAnimExecutionContext& Context, EAnimExecutionContextConversionResult& Result);
    FAnimInitializationContext ConvertToInitializationContext(const FAnimExecutionContext& Context, EAnimExecutionContextConversionResult& Result);
    FAnimComponentSpacePoseContext ConvertToComponentSpacePoseContext(const FAnimExecutionContext& Context, EAnimExecutionContextConversionResult& Result);
}; // Size: 0x28

class UAnimNodeRigidBodyLibrary : public UBlueprintFunctionLibrary
{

    FRigidBodyAnimNodeReference SetOverridePhysicsAsset(const FRigidBodyAnimNodeReference& Node, class UPhysicsAsset* PhysicsAsset);
    void ConvertToRigidBodyAnimNodePure(const FAnimNodeReference& Node, FRigidBodyAnimNodeReference& RigidBodyAnimNode, bool& Result);
    FRigidBodyAnimNodeReference ConvertToRigidBodyAnimNode(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
}; // Size: 0x28

class UAnimNotify_PlayMontageNotify : public UAnimNotify
{
    FName NotifyName;                                                                 // 0x0038 (size: 0x8)

}; // Size: 0x40

class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState
{
    FName NotifyName;                                                                 // 0x0030 (size: 0x8)

}; // Size: 0x38

class UAnimSequencerInstance : public UAnimInstance
{
}; // Size: 0x3C0

class UAnimationStateMachineLibrary : public UBlueprintFunctionLibrary
{

    void SetState(const FAnimUpdateContext& UpdateContext, const FAnimationStateMachineReference& Node, FName TargetState, float Duration, TEnumAsByte<ETransitionLogicType::Type> BlendType, class UBlendProfile* BlendProfile, EAlphaBlendOption AlphaBlendOption, class UCurveFloat* CustomBlendCurve);
    bool IsStateBlendingOut(const FAnimUpdateContext& UpdateContext, const FAnimationStateResultReference& Node);
    bool IsStateBlendingIn(const FAnimUpdateContext& UpdateContext, const FAnimationStateResultReference& Node);
    FName GetState(const FAnimUpdateContext& UpdateContext, const FAnimationStateMachineReference& Node);
    float GetRelevantAnimTimeRemainingFraction(const FAnimUpdateContext& UpdateContext, const FAnimationStateResultReference& Node);
    float GetRelevantAnimTimeRemaining(const FAnimUpdateContext& UpdateContext, const FAnimationStateResultReference& Node);
    void ConvertToAnimationStateResultPure(const FAnimNodeReference& Node, FAnimationStateResultReference& AnimationState, bool& Result);
    void ConvertToAnimationStateResult(const FAnimNodeReference& Node, FAnimationStateResultReference& AnimationState, EAnimNodeReferenceConversionResult& Result);
    void ConvertToAnimationStateMachinePure(const FAnimNodeReference& Node, FAnimationStateMachineReference& AnimationState, bool& Result);
    void ConvertToAnimationStateMachine(const FAnimNodeReference& Node, FAnimationStateMachineReference& AnimationState, EAnimNodeReferenceConversionResult& Result);
}; // Size: 0x28

class UBlendListBaseLibrary : public UBlueprintFunctionLibrary
{

    void ResetNode(const FBlendListBaseReference& BlendListBase);
    FBlendListBaseReference ConvertToBlendListBase(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
}; // Size: 0x28

class UBlendSpaceLibrary : public UBlueprintFunctionLibrary
{

    void SnapToPosition(const FBlendSpaceReference& BlendSpace, FVector NewPosition);
    FVector GetPosition(const FBlendSpaceReference& BlendSpace);
    FVector GetFilteredPosition(const FBlendSpaceReference& BlendSpace);
    void ConvertToBlendSpacePure(const FAnimNodeReference& Node, FBlendSpaceReference& BlendSpace, bool& Result);
    FBlendSpaceReference ConvertToBlendSpace(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
}; // Size: 0x28

class UBlendSpacePlayerLibrary : public UBlueprintFunctionLibrary
{

    void SnapToPosition(const FBlendSpacePlayerReference& BlendSpacePlayer, FVector NewPosition);
    bool ShouldResetPlayTimeWhenBlendSpaceChanges(const FBlendSpacePlayerReference& BlendSpacePlayer);
    FBlendSpacePlayerReference SetResetPlayTimeWhenBlendSpaceChanges(const FBlendSpacePlayerReference& BlendSpacePlayer, bool bReset);
    FBlendSpacePlayerReference SetPlayRate(const FBlendSpacePlayerReference& BlendSpacePlayer, float PlayRate);
    FBlendSpacePlayerReference SetLoop(const FBlendSpacePlayerReference& BlendSpacePlayer, bool bLoop);
    FBlendSpacePlayerReference SetBlendSpaceWithInertialBlending(const FAnimUpdateContext& UpdateContext, const FBlendSpacePlayerReference& BlendSpacePlayer, class UBlendSpace* BlendSpace, float BlendTime);
    FBlendSpacePlayerReference SetBlendSpace(const FBlendSpacePlayerReference& BlendSpacePlayer, class UBlendSpace* BlendSpace);
    float GetStartPosition(const FBlendSpacePlayerReference& BlendSpacePlayer);
    FVector GetPosition(const FBlendSpacePlayerReference& BlendSpacePlayer);
    float GetPlayRate(const FBlendSpacePlayerReference& BlendSpacePlayer);
    bool GetLoop(const FBlendSpacePlayerReference& BlendSpacePlayer);
    class UBlendSpace* GetBlendSpace(const FBlendSpacePlayerReference& BlendSpacePlayer);
    void ConvertToBlendSpacePlayerPure(const FAnimNodeReference& Node, FBlendSpacePlayerReference& BlendSpacePlayer, bool& Result);
    FBlendSpacePlayerReference ConvertToBlendSpacePlayer(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
}; // Size: 0x28

class UKismetAnimationLibrary : public UBlueprintFunctionLibrary
{

    void K2_TwoBoneIK(const FVector& RootPos, const FVector& JointPos, const FVector& EndPos, const FVector& JointTarget, const FVector& Effector, FVector& OutJointPos, FVector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale);
    void K2_StartProfilingTimer();
    FVector K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ);
    float K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax);
    FTransform K2_LookAt(const FTransform& CurrentTransform, const FVector& TargetPosition, FVector LookAtVector, bool bUseUpVector, FVector UpVector, float ClampConeInDegree);
    float K2_EndProfilingTimer(bool bLog, FString LogPrefix);
    float K2_DistanceBetweenTwoSocketsAndMapRange(const class USkeletalMeshComponent* Component, const FName SocketOrBoneNameA, TEnumAsByte<ERelativeTransformSpace> SocketSpaceA, const FName SocketOrBoneNameB, TEnumAsByte<ERelativeTransformSpace> SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax);
    FVector K2_DirectionBetweenSockets(const class USkeletalMeshComponent* Component, const FName SocketOrBoneNameFrom, const FName SocketOrBoneNameTo);
    float K2_CalculateVelocityFromSockets(float DeltaSeconds, class USkeletalMeshComponent* Component, const FName SocketOrBoneName, const FName ReferenceSocketOrBone, TEnumAsByte<ERelativeTransformSpace> SocketSpace, FVector OffsetInBoneSpace, FPositionHistory& History, int32 NumberOfSamples, float VelocityMin, float VelocityMax, EEasingFuncType EasingType, const FRuntimeFloatCurve& CustomCurve);
    float K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, FVector position, FPositionHistory& History, int32 NumberOfSamples, float VelocityMin, float VelocityMax);
    float CalculateDirection(const FVector& Velocity, const FRotator& BaseRotation);
}; // Size: 0x28

class ULayeredBoneBlendLibrary : public UBlueprintFunctionLibrary
{

    FLayeredBoneBlendReference SetBlendMask(const FAnimUpdateContext& UpdateContext, const FLayeredBoneBlendReference& LayeredBoneBlend, int32 PoseIndex, FName BlendMaskName);
    int32 GetNumPoses(const FLayeredBoneBlendReference& LayeredBoneBlend);
    FLayeredBoneBlendReference ConvertToLayeredBoneBlend(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
    void ConvertToLayeredBlendPerBonePure(const FAnimNodeReference& Node, FLayeredBoneBlendReference& LayeredBoneBlend, bool& Result);
}; // Size: 0x28

class ULinkedAnimGraphLibrary : public UBlueprintFunctionLibrary
{

    bool HasLinkedAnimInstance(const FLinkedAnimGraphReference& Node);
    class UAnimInstance* GetLinkedAnimInstance(const FLinkedAnimGraphReference& Node);
    void ConvertToLinkedAnimGraphPure(const FAnimNodeReference& Node, FLinkedAnimGraphReference& LinkedAnimGraph, bool& Result);
    FLinkedAnimGraphReference ConvertToLinkedAnimGraph(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
}; // Size: 0x28

class UMirrorAnimLibrary : public UBlueprintFunctionLibrary
{

    FMirrorAnimNodeReference SetMirrorTransitionBlendTime(const FMirrorAnimNodeReference& MirrorNode, float InBlendTime);
    FMirrorAnimNodeReference SetMirror(const FMirrorAnimNodeReference& MirrorNode, bool bInMirror);
    float GetMirrorTransitionBlendTime(const FMirrorAnimNodeReference& MirrorNode);
    class UMirrorDataTable* GetMirrorDataTable(const FMirrorAnimNodeReference& MirrorNode);
    bool GetMirror(const FMirrorAnimNodeReference& MirrorNode);
    void ConvertToMirrorNodePure(const FAnimNodeReference& Node, FMirrorAnimNodeReference& MirrorNode, bool& Result);
    FMirrorAnimNodeReference ConvertToMirrorNode(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
}; // Size: 0x28

class UModifyCurveAnimLibrary : public UBlueprintFunctionLibrary
{

    FModifyCurveAnimNodeReference SetCurveMap(const FModifyCurveAnimNodeReference& ModifyCurveNode, const TMap<FName, float>& InCurveMap);
    FModifyCurveAnimNodeReference SetApplyMode(const FModifyCurveAnimNodeReference& ModifyCurveNode, EModifyCurveApplyMode InMode);
    FModifyCurveAnimNodeReference SetAlpha(const FModifyCurveAnimNodeReference& ModifyCurveNode, float InAlpha);
    EModifyCurveApplyMode GetApplyMode(const FModifyCurveAnimNodeReference& ModifyCurveNode);
    float GetAlpha(const FModifyCurveAnimNodeReference& ModifyCurveNode);
    void ConvertToModifyCurveNodePure(const FAnimNodeReference& Node, FModifyCurveAnimNodeReference& ModifyCurveNode, bool& Result);
    FModifyCurveAnimNodeReference ConvertToModifyCurveNode(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
}; // Size: 0x28

class UPlayMontageCallbackProxy : public UObject
{
    FPlayMontageCallbackProxyOnCompleted OnCompleted;                                 // 0x0028 (size: 0x10)
    void OnMontagePlayDelegate(FName NotifyName);
    FPlayMontageCallbackProxyOnBlendOut OnBlendOut;                                   // 0x0038 (size: 0x10)
    void OnMontagePlayDelegate(FName NotifyName);
    FPlayMontageCallbackProxyOnInterrupted OnInterrupted;                             // 0x0048 (size: 0x10)
    void OnMontagePlayDelegate(FName NotifyName);
    FPlayMontageCallbackProxyOnNotifyBegin OnNotifyBegin;                             // 0x0058 (size: 0x10)
    void OnMontagePlayDelegate(FName NotifyName);
    FPlayMontageCallbackProxyOnNotifyEnd OnNotifyEnd;                                 // 0x0068 (size: 0x10)
    void OnMontagePlayDelegate(FName NotifyName);

    void OnNotifyEndReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
    void OnNotifyBeginReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
    void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
    void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
    class UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, FName StartingSection, bool bShouldStopAllMontages);
}; // Size: 0xA8

class USequenceEvaluatorLibrary : public UBlueprintFunctionLibrary
{

    FSequenceEvaluatorReference SetSequenceWithInertialBlending(const FAnimUpdateContext& UpdateContext, const FSequenceEvaluatorReference& SequenceEvaluator, class UAnimSequenceBase* Sequence, float BlendTime);
    FSequenceEvaluatorReference SetSequence(const FSequenceEvaluatorReference& SequenceEvaluator, class UAnimSequenceBase* Sequence);
    FSequenceEvaluatorReference SetExplicitTime(const FSequenceEvaluatorReference& SequenceEvaluator, float Time);
    FSequenceEvaluatorReference SetExplicitFrame(const FSequenceEvaluatorReference& SequenceEvaluator, int32 Frame);
    class UAnimSequenceBase* GetSequence(const FSequenceEvaluatorReference& SequenceEvaluator);
    float GetAccumulatedTime(const FSequenceEvaluatorReference& SequenceEvaluator);
    void ConvertToSequenceEvaluatorPure(const FAnimNodeReference& Node, FSequenceEvaluatorReference& SequenceEvaluator, bool& Result);
    FSequenceEvaluatorReference ConvertToSequenceEvaluator(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
    FSequenceEvaluatorReference AdvanceTime(const FAnimUpdateContext& UpdateContext, const FSequenceEvaluatorReference& SequenceEvaluator, float PlayRate);
}; // Size: 0x28

class USequencePlayerLibrary : public UBlueprintFunctionLibrary
{

    FSequencePlayerReference SetStartPosition(const FSequencePlayerReference& SequencePlayer, float StartPosition);
    FSequencePlayerReference SetSequenceWithInertialBlending(const FAnimUpdateContext& UpdateContext, const FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase* Sequence, float BlendTime);
    FSequencePlayerReference SetSequence(const FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase* Sequence);
    FSequencePlayerReference SetPlayRate(const FSequencePlayerReference& SequencePlayer, float PlayRate);
    FSequencePlayerReference SetAccumulatedTime(const FSequencePlayerReference& SequencePlayer, float Time);
    float GetStartPosition(const FSequencePlayerReference& SequencePlayer);
    class UAnimSequenceBase* GetSequencePure(const FSequencePlayerReference& SequencePlayer);
    FSequencePlayerReference GetSequence(const FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase*& SequenceBase);
    float GetPlayRate(const FSequencePlayerReference& SequencePlayer);
    bool GetLoopAnimation(const FSequencePlayerReference& SequencePlayer);
    float GetAccumulatedTime(const FSequencePlayerReference& SequencePlayer);
    void ConvertToSequencePlayerPure(const FAnimNodeReference& Node, FSequencePlayerReference& SequencePlayer, bool& Result);
    FSequencePlayerReference ConvertToSequencePlayer(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
    float ComputePlayRateFromDuration(const FSequencePlayerReference& SequencePlayer, float Duration);
}; // Size: 0x28

class USkeletalControlLibrary : public UBlueprintFunctionLibrary
{

    FSkeletalControlReference SetAlpha(const FSkeletalControlReference& SkeletalControl, float Alpha);
    float GetAlpha(const FSkeletalControlReference& SkeletalControl);
    void ConvertToSkeletalControlPure(const FAnimNodeReference& Node, FSkeletalControlReference& SkeletalControl, bool& Result);
    FSkeletalControlReference ConvertToSkeletalControl(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
}; // Size: 0x28

#endif
