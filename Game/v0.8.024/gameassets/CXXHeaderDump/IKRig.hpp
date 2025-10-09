#ifndef UE4SS_SDK_IKRig_HPP
#define UE4SS_SDK_IKRig_HPP

#include "IKRig_enums.hpp"

struct FAnimNode_IKRig : public FAnimNode_CustomProperty
{
    FPoseLink Source;                                                                 // 0x0058 (size: 0x10)
    class UIKRigDefinition* RigDefinitionAsset;                                       // 0x0068 (size: 0x8)
    TArray<FIKRigGoal> goals;                                                         // 0x0070 (size: 0x10)
    bool bStartFromRefPose;                                                           // 0x0080 (size: 0x1)
    EAnimAlphaInputType AlphaInputType;                                               // 0x0081 (size: 0x1)
    bool bAlphaBoolEnabled;                                                           // 0x0082 (size: 0x1)
    float Alpha;                                                                      // 0x0084 (size: 0x4)
    FInputScaleBias AlphaScaleBias;                                                   // 0x0088 (size: 0x8)
    FInputAlphaBoolBlend AlphaBoolBlend;                                              // 0x0090 (size: 0x48)
    FName AlphaCurveName;                                                             // 0x00D8 (size: 0x8)
    FInputScaleBiasClamp AlphaScaleBiasClamp;                                         // 0x00E0 (size: 0x30)
    class UIKRigProcessor* IKRigProcessor;                                            // 0x0110 (size: 0x8)
    float ActualAlpha;                                                                // 0x01D8 (size: 0x4)

}; // Size: 0x1E0

struct FAnimNode_RetargetPoseFromMesh : public FAnimNode_Base
{
    TWeakObjectPtr<class USkeletalMeshComponent> SourceMeshComponent;                 // 0x0010 (size: 0x8)
    bool bUseAttachedParent;                                                          // 0x0018 (size: 0x1)
    class UIKRetargeter* IKRetargeterAsset;                                           // 0x0020 (size: 0x8)
    FRetargetProfile CustomRetargetProfile;                                           // 0x0028 (size: 0x108)
    bool bSuppressWarnings;                                                           // 0x0130 (size: 0x1)
    bool bCopyCurves;                                                                 // 0x0131 (size: 0x1)
    int32 LODThreshold;                                                               // 0x0134 (size: 0x4)
    int32 LODThresholdForIK;                                                          // 0x0138 (size: 0x4)
    class UIKRetargetProcessor* Processor;                                            // 0x0140 (size: 0x8)

}; // Size: 0x1E0

struct FBoneChain
{
    FName ChainName;                                                                  // 0x0000 (size: 0x8)
    FBoneReference StartBone;                                                         // 0x0008 (size: 0x10)
    FBoneReference EndBone;                                                           // 0x0018 (size: 0x10)
    FName IKGoalName;                                                                 // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FCurveRemapPair
{
    FName SourceCurve;                                                                // 0x0000 (size: 0x8)
    FName TargetCurve;                                                                // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FGoalBone
{
}; // Size: 0x10

struct FIKRetargetPose
{
    FVector RootTranslationOffset;                                                    // 0x0000 (size: 0x18)
    TMap<class FName, class FQuat> BoneRotationOffsets;                               // 0x0018 (size: 0x50)

}; // Size: 0x70

struct FIKRigGoal
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    EIKRigGoalTransformSource TransformSource;                                        // 0x0008 (size: 0x1)
    FBoneReference SourceBone;                                                        // 0x000C (size: 0x10)
    FVector Position;                                                                 // 0x0020 (size: 0x18)
    FRotator Rotation;                                                                // 0x0038 (size: 0x18)
    float PositionAlpha;                                                              // 0x0050 (size: 0x4)
    float RotationAlpha;                                                              // 0x0054 (size: 0x4)
    EIKRigGoalSpace PositionSpace;                                                    // 0x0058 (size: 0x1)
    EIKRigGoalSpace RotationSpace;                                                    // 0x0059 (size: 0x1)
    FVector FinalBlendedPosition;                                                     // 0x0060 (size: 0x18)
    FQuat FinalBlendedRotation;                                                       // 0x0080 (size: 0x20)

}; // Size: 0xA0

struct FIKRigGoalContainer
{
}; // Size: 0x10

struct FIKRigInputSkeleton
{
}; // Size: 0x38

struct FIKRigSkeleton
{
    TArray<FName> BoneNames;                                                          // 0x0000 (size: 0x10)
    TArray<int32> ParentIndices;                                                      // 0x0010 (size: 0x10)
    TArray<FName> ExcludedBones;                                                      // 0x0020 (size: 0x10)
    TArray<FTransform> CurrentPoseGlobal;                                             // 0x0030 (size: 0x10)
    TArray<FTransform> CurrentPoseLocal;                                              // 0x0040 (size: 0x10)
    TArray<FTransform> RefPoseGlobal;                                                 // 0x0050 (size: 0x10)

}; // Size: 0x70

struct FLimbLink
{
}; // Size: 0x68

struct FLimbSolver
{
}; // Size: 0x18

struct FLimbSolverSettings
{
    float ReachPrecision;                                                             // 0x0000 (size: 0x4)
    TEnumAsByte<EAxis::Type> HingeRotationAxis;                                       // 0x0004 (size: 0x1)
    int32 MaxIterations;                                                              // 0x0008 (size: 0x4)
    bool bEnableLimit;                                                                // 0x000C (size: 0x1)
    float MinRotationAngle;                                                           // 0x0010 (size: 0x4)
    bool bAveragePull;                                                                // 0x0014 (size: 0x1)
    float PullDistribution;                                                           // 0x0018 (size: 0x4)
    float ReachStepAlpha;                                                             // 0x001C (size: 0x4)
    bool bEnableTwistCorrection;                                                      // 0x0020 (size: 0x1)
    TEnumAsByte<EAxis::Type> EndBoneForwardAxis;                                      // 0x0021 (size: 0x1)

}; // Size: 0x24

struct FPinBoneData
{
    FName BoneToPin;                                                                  // 0x0000 (size: 0x8)
    FName BoneToPinTo;                                                                // 0x0008 (size: 0x8)

}; // Size: 0x80

struct FRetargetChainMap
{
    FName SourceChain;                                                                // 0x0000 (size: 0x8)
    FName TargetChain;                                                                // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FRetargetDefinition
{
    FName RootBone;                                                                   // 0x0000 (size: 0x8)
    TArray<FBoneChain> BoneChains;                                                    // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FRetargetGlobalSettings
{
    bool bEnableRoot;                                                                 // 0x0000 (size: 0x1)
    bool bEnableFK;                                                                   // 0x0001 (size: 0x1)
    bool bEnableIK;                                                                   // 0x0002 (size: 0x1)
    bool bEnablePost;                                                                 // 0x0003 (size: 0x1)
    bool bWarping;                                                                    // 0x0004 (size: 0x1)
    EWarpingDirectionSource DirectionSource;                                          // 0x0008 (size: 0x4)
    EBasicAxis ForwardDirection;                                                      // 0x000C (size: 0x4)
    FName DirectionChain;                                                             // 0x0010 (size: 0x8)
    float WarpForwards;                                                               // 0x0018 (size: 0x4)
    float SidewaysOffset;                                                             // 0x001C (size: 0x4)
    float WarpSplay;                                                                  // 0x0020 (size: 0x4)

}; // Size: 0x24

struct FRetargetProfile
{
    bool bApplyTargetRetargetPose;                                                    // 0x0000 (size: 0x1)
    FName TargetRetargetPoseName;                                                     // 0x0004 (size: 0x8)
    bool bApplySourceRetargetPose;                                                    // 0x000C (size: 0x1)
    FName SourceRetargetPoseName;                                                     // 0x0010 (size: 0x8)
    bool bApplyChainSettings;                                                         // 0x0018 (size: 0x1)
    TMap<class FName, class FTargetChainSettings> ChainSettings;                      // 0x0020 (size: 0x50)
    bool bApplyRootSettings;                                                          // 0x0070 (size: 0x1)
    FTargetRootSettings RootSettings;                                                 // 0x0078 (size: 0x68)
    bool bApplyGlobalSettings;                                                        // 0x00E0 (size: 0x1)
    FRetargetGlobalSettings GlobalSettings;                                           // 0x00E4 (size: 0x24)

}; // Size: 0x108

struct FTargetChainFKSettings
{
    bool EnableFK;                                                                    // 0x0000 (size: 0x1)
    ERetargetRotationMode RotationMode;                                               // 0x0001 (size: 0x1)
    float RotationAlpha;                                                              // 0x0004 (size: 0x4)
    ERetargetTranslationMode TranslationMode;                                         // 0x0008 (size: 0x1)
    float TranslationAlpha;                                                           // 0x000C (size: 0x4)
    float PoleVectorMatching;                                                         // 0x0010 (size: 0x4)
    bool PoleVectorMaintainOffset;                                                    // 0x0014 (size: 0x1)
    float PoleVectorOffset;                                                           // 0x0018 (size: 0x4)

}; // Size: 0x1C

struct FTargetChainIKSettings
{
    bool EnableIK;                                                                    // 0x0000 (size: 0x1)
    float BlendToSource;                                                              // 0x0004 (size: 0x4)
    FVector BlendToSourceWeights;                                                     // 0x0008 (size: 0x18)
    FVector StaticOffset;                                                             // 0x0020 (size: 0x18)
    FVector StaticLocalOffset;                                                        // 0x0038 (size: 0x18)
    FRotator StaticRotationOffset;                                                    // 0x0050 (size: 0x18)
    float ScaleVertical;                                                              // 0x0068 (size: 0x4)
    float Extension;                                                                  // 0x006C (size: 0x4)
    bool bAffectedByIKWarping;                                                        // 0x0070 (size: 0x1)

}; // Size: 0x78

struct FTargetChainSettings
{
    FTargetChainFKSettings FK;                                                        // 0x0000 (size: 0x1C)
    FTargetChainIKSettings IK;                                                        // 0x0020 (size: 0x78)
    FTargetChainSpeedPlantSettings SpeedPlanting;                                     // 0x0098 (size: 0x18)

}; // Size: 0xB0

struct FTargetChainSpeedPlantSettings
{
    bool EnableSpeedPlanting;                                                         // 0x0000 (size: 0x1)
    FName SpeedCurveName;                                                             // 0x0004 (size: 0x8)
    float SpeedThreshold;                                                             // 0x000C (size: 0x4)
    float UnplantStiffness;                                                           // 0x0010 (size: 0x4)
    float UnplantCriticalDamping;                                                     // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FTargetRootSettings
{
    float RotationAlpha;                                                              // 0x0000 (size: 0x4)
    float TranslationAlpha;                                                           // 0x0004 (size: 0x4)
    float BlendToSource;                                                              // 0x0008 (size: 0x4)
    FVector BlendToSourceWeights;                                                     // 0x0010 (size: 0x18)
    float ScaleHorizontal;                                                            // 0x0028 (size: 0x4)
    float ScaleVertical;                                                              // 0x002C (size: 0x4)
    FVector TranslationOffset;                                                        // 0x0030 (size: 0x18)
    FRotator RotationOffset;                                                          // 0x0048 (size: 0x18)
    float AffectIKHorizontal;                                                         // 0x0060 (size: 0x4)
    float AffectIKVertical;                                                           // 0x0064 (size: 0x4)

}; // Size: 0x68

class IIKGoalCreatorInterface : public IInterface
{

    void AddIKGoals(TMap<class FName, class FIKRigGoal>& OutGoals);
}; // Size: 0x28

class UCurveRemapOp : public URetargetOpBase
{
    TArray<FCurveRemapPair> CurvesToRemap;                                            // 0x0030 (size: 0x10)
    bool bCopyAllSourceCurves;                                                        // 0x0040 (size: 0x1)

}; // Size: 0x48

class UIKRetargetGlobalSettings : public UObject
{
    FRetargetGlobalSettings Settings;                                                 // 0x0028 (size: 0x24)

}; // Size: 0x50

class UIKRetargetProcessor : public UObject
{
    class UIKRigProcessor* IKRigProcessor;                                            // 0x0188 (size: 0x8)
    TArray<class URetargetOpBase*> OpStack;                                           // 0x0388 (size: 0x10)

}; // Size: 0x3A0

class UIKRetargeter : public UObject
{
    int32 Version;                                                                    // 0x0028 (size: 0x4)
    TSoftObjectPtr<UIKRigDefinition> SourceIKRigAsset;                                // 0x0030 (size: 0x28)
    TSoftObjectPtr<UIKRigDefinition> TargetIKRigAsset;                                // 0x0058 (size: 0x28)
    TArray<FRetargetChainMap> ChainMapping;                                           // 0x0080 (size: 0x10)
    TArray<class URetargetChainSettings*> ChainSettings;                              // 0x0090 (size: 0x10)
    class URetargetRootSettings* RootSettings;                                        // 0x00A0 (size: 0x8)
    class UIKRetargetGlobalSettings* GlobalSettings;                                  // 0x00A8 (size: 0x8)
    class URetargetOpStack* OpStack;                                                  // 0x00B0 (size: 0x8)
    TMap<class FName, class FRetargetProfile> Profiles;                               // 0x00B8 (size: 0x50)
    FName CurrentProfile;                                                             // 0x0108 (size: 0x8)
    TMap<class FName, class FIKRetargetPose> SourceRetargetPoses;                     // 0x0110 (size: 0x50)
    TMap<class FName, class FIKRetargetPose> TargetRetargetPoses;                     // 0x0160 (size: 0x50)
    FName CurrentSourceRetargetPose;                                                  // 0x01B0 (size: 0x8)
    FName CurrentTargetRetargetPose;                                                  // 0x01B8 (size: 0x8)
    TMap<class FName, class FIKRetargetPose> RetargetPoses;                           // 0x01C0 (size: 0x50)
    FName CurrentRetargetPose;                                                        // 0x0210 (size: 0x8)

    void SetRootSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, const FTargetRootSettings& RootSettings);
    void SetGlobalSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, const FRetargetGlobalSettings& GlobalSettings);
    void SetChainSpeedPlantSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, const FTargetChainSpeedPlantSettings& SpeedPlantSettings, const FName TargetChainName);
    void SetChainSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, const FTargetChainSettings& ChainSettings, const FName TargetChainName);
    void SetChainIKSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, const FTargetChainIKSettings& IKSettings, const FName TargetChainName);
    void SetChainFKSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, const FTargetChainFKSettings& FKSettings, const FName TargetChainName);
    bool HasTargetIKRig();
    bool HasSourceIKRig();
    FTargetRootSettings GetRootSettingsFromRetargetProfile(FRetargetProfile& RetargetProfile);
    void GetRootSettingsFromRetargetAsset(const class UIKRetargeter* RetargetAsset, const FName OptionalProfileName, FTargetRootSettings& OutSettings);
    FRetargetGlobalSettings GetGlobalSettingsFromRetargetProfile(FRetargetProfile& RetargetProfile);
    void GetGlobalSettingsFromRetargetAsset(const class UIKRetargeter* RetargetAsset, const FName OptionalProfileName, FRetargetGlobalSettings& OutSettings);
    FTargetChainSettings GetChainUsingGoalFromRetargetAsset(const class UIKRetargeter* RetargetAsset, const FName IKGoalName);
    FTargetChainSettings GetChainSettingsFromRetargetProfile(FRetargetProfile& RetargetProfile, const FName TargetChainName);
    FTargetChainSettings GetChainSettingsFromRetargetAsset(const class UIKRetargeter* RetargetAsset, const FName TargetChainName, const FName OptionalProfileName);
}; // Size: 0x218

class UIKRigComponent : public UActorComponent
{

    void SetIKRigGoalTransform(const FName GoalName, const FTransform Transform, const float PositionAlpha, const float RotationAlpha);
    void SetIKRigGoalPositionAndRotation(const FName GoalName, const FVector Position, const FQuat Rotation, const float PositionAlpha, const float RotationAlpha);
    void SetIKRigGoal(const FIKRigGoal& Goal);
    void ClearAllGoals();
}; // Size: 0xB8

class UIKRigDefinition : public UObject
{
    TSoftObjectPtr<USkeletalMesh> PreviewSkeletalMesh;                                // 0x0030 (size: 0x28)
    FIKRigSkeleton Skeleton;                                                          // 0x0058 (size: 0x70)
    TArray<class UIKRigEffectorGoal*> goals;                                          // 0x00C8 (size: 0x10)
    TArray<class UIKRigSolver*> Solvers;                                              // 0x00D8 (size: 0x10)
    FRetargetDefinition RetargetDefinition;                                           // 0x00E8 (size: 0x18)

}; // Size: 0x100

class UIKRigEffectorGoal : public UObject
{
    FName GoalName;                                                                   // 0x0028 (size: 0x8)
    FName BoneName;                                                                   // 0x0030 (size: 0x8)
    float PositionAlpha;                                                              // 0x0038 (size: 0x4)
    float RotationAlpha;                                                              // 0x003C (size: 0x4)
    FTransform CurrentTransform;                                                      // 0x0040 (size: 0x60)
    FTransform InitialTransform;                                                      // 0x00A0 (size: 0x60)

}; // Size: 0x100

class UIKRigFBIKSolver : public UIKRigSolver
{
    FName RootBone;                                                                   // 0x0030 (size: 0x8)
    int32 Iterations;                                                                 // 0x0038 (size: 0x4)
    int32 SubIterations;                                                              // 0x003C (size: 0x4)
    float MassMultiplier;                                                             // 0x0040 (size: 0x4)
    bool bAllowStretch;                                                               // 0x0044 (size: 0x1)
    EPBIKRootBehavior RootBehavior;                                                   // 0x0045 (size: 0x1)
    FRootPrePullSettings PrePullRootSettings;                                         // 0x0048 (size: 0x20)
    float PullChainAlpha;                                                             // 0x0068 (size: 0x4)
    float MaxAngle;                                                                   // 0x006C (size: 0x4)
    float OverRelaxation;                                                             // 0x0070 (size: 0x4)
    bool bStartSolveFromInputPose;                                                    // 0x0074 (size: 0x1)
    TArray<class UIKRig_FBIKEffector*> Effectors;                                     // 0x0078 (size: 0x10)
    TArray<class UIKRig_FBIKBoneSettings*> BoneSettings;                              // 0x0088 (size: 0x10)

}; // Size: 0xF0

class UIKRigProcessor : public UObject
{
    TArray<class UIKRigSolver*> Solvers;                                              // 0x0060 (size: 0x10)

}; // Size: 0x148

class UIKRigSolver : public UObject
{
    bool bIsEnabled;                                                                  // 0x0028 (size: 0x1)

}; // Size: 0x30

class UIKRig_BodyMover : public UIKRigSolver
{
    FName RootBone;                                                                   // 0x0030 (size: 0x8)
    float PositionAlpha;                                                              // 0x0038 (size: 0x4)
    float PositionPositiveX;                                                          // 0x003C (size: 0x4)
    float PositionNegativeX;                                                          // 0x0040 (size: 0x4)
    float PositionPositiveY;                                                          // 0x0044 (size: 0x4)
    float PositionNegativeY;                                                          // 0x0048 (size: 0x4)
    float PositionPositiveZ;                                                          // 0x004C (size: 0x4)
    float PositionNegativeZ;                                                          // 0x0050 (size: 0x4)
    float RotationAlpha;                                                              // 0x0054 (size: 0x4)
    float RotateXAlpha;                                                               // 0x0058 (size: 0x4)
    float RotateYAlpha;                                                               // 0x005C (size: 0x4)
    float RotateZAlpha;                                                               // 0x0060 (size: 0x4)
    TArray<class UIKRig_BodyMoverEffector*> Effectors;                                // 0x0068 (size: 0x10)

}; // Size: 0x80

class UIKRig_BodyMoverEffector : public UObject
{
    FName GoalName;                                                                   // 0x0028 (size: 0x8)
    FName BoneName;                                                                   // 0x0030 (size: 0x8)
    float InfluenceMultiplier;                                                        // 0x0038 (size: 0x4)

}; // Size: 0x40

class UIKRig_FBIKBoneSettings : public UObject
{
    FName bone;                                                                       // 0x0028 (size: 0x8)
    float RotationStiffness;                                                          // 0x0030 (size: 0x4)
    float PositionStiffness;                                                          // 0x0034 (size: 0x4)
    EPBIKLimitType X;                                                                 // 0x0038 (size: 0x1)
    float MinX;                                                                       // 0x003C (size: 0x4)
    float MaxX;                                                                       // 0x0040 (size: 0x4)
    EPBIKLimitType Y;                                                                 // 0x0044 (size: 0x1)
    float MinY;                                                                       // 0x0048 (size: 0x4)
    float MaxY;                                                                       // 0x004C (size: 0x4)
    EPBIKLimitType Z;                                                                 // 0x0050 (size: 0x1)
    float MinZ;                                                                       // 0x0054 (size: 0x4)
    float MaxZ;                                                                       // 0x0058 (size: 0x4)
    bool bUsePreferredAngles;                                                         // 0x005C (size: 0x1)
    FVector PreferredAngles;                                                          // 0x0060 (size: 0x18)

}; // Size: 0x78

class UIKRig_FBIKEffector : public UObject
{
    FName GoalName;                                                                   // 0x0028 (size: 0x8)
    FName BoneName;                                                                   // 0x0030 (size: 0x8)
    int32 ChainDepth;                                                                 // 0x0038 (size: 0x4)
    float StrengthAlpha;                                                              // 0x003C (size: 0x4)
    float PullChainAlpha;                                                             // 0x0040 (size: 0x4)
    float PinRotation;                                                                // 0x0044 (size: 0x4)
    int32 IndexInSolver;                                                              // 0x0048 (size: 0x4)

}; // Size: 0x50

class UIKRig_LimbEffector : public UObject
{
    FName GoalName;                                                                   // 0x0028 (size: 0x8)
    FName BoneName;                                                                   // 0x0030 (size: 0x8)

}; // Size: 0x38

class UIKRig_LimbSolver : public UIKRigSolver
{
    FName RootName;                                                                   // 0x0030 (size: 0x8)
    float ReachPrecision;                                                             // 0x0038 (size: 0x4)
    TEnumAsByte<EAxis::Type> HingeRotationAxis;                                       // 0x003C (size: 0x1)
    int32 MaxIterations;                                                              // 0x0040 (size: 0x4)
    bool bEnableLimit;                                                                // 0x0044 (size: 0x1)
    float MinRotationAngle;                                                           // 0x0048 (size: 0x4)
    bool bAveragePull;                                                                // 0x004C (size: 0x1)
    float PullDistribution;                                                           // 0x0050 (size: 0x4)
    float ReachStepAlpha;                                                             // 0x0054 (size: 0x4)
    bool bEnableTwistCorrection;                                                      // 0x0058 (size: 0x1)
    TEnumAsByte<EAxis::Type> EndBoneForwardAxis;                                      // 0x0059 (size: 0x1)
    class UIKRig_LimbEffector* Effector;                                              // 0x0060 (size: 0x8)

}; // Size: 0x90

class UIKRig_PoleSolver : public UIKRigSolver
{
    FName RootName;                                                                   // 0x0030 (size: 0x8)
    FName EndName;                                                                    // 0x0038 (size: 0x8)
    class UIKRig_PoleSolverEffector* Effector;                                        // 0x0040 (size: 0x8)

}; // Size: 0x68

class UIKRig_PoleSolverEffector : public UObject
{
    FName GoalName;                                                                   // 0x0028 (size: 0x8)
    FName BoneName;                                                                   // 0x0030 (size: 0x8)
    float Alpha;                                                                      // 0x0038 (size: 0x4)

}; // Size: 0x40

class UIKRig_SetTransform : public UIKRigSolver
{
    FName Goal;                                                                       // 0x0030 (size: 0x8)
    FName RootBone;                                                                   // 0x0038 (size: 0x8)
    class UIKRig_SetTransformEffector* Effector;                                      // 0x0040 (size: 0x8)

}; // Size: 0x50

class UIKRig_SetTransformEffector : public UObject
{
    bool bEnablePosition;                                                             // 0x0028 (size: 0x1)
    bool bEnableRotation;                                                             // 0x0029 (size: 0x1)
    float Alpha;                                                                      // 0x002C (size: 0x4)

}; // Size: 0x30

class UPinBoneOp : public URetargetOpBase
{
    TArray<FPinBoneData> BonesToPin;                                                  // 0x0030 (size: 0x10)
    ERetargetSourceOrTarget PinTo;                                                    // 0x0040 (size: 0x1)
    EPinBoneType PinType;                                                             // 0x0041 (size: 0x1)
    bool bMaintainOffset;                                                             // 0x0042 (size: 0x1)
    FTransform GlobalOffset;                                                          // 0x0050 (size: 0x60)
    FTransform LocalOffset;                                                           // 0x00B0 (size: 0x60)

}; // Size: 0x110

class URetargetChainSettings : public UObject
{
    FName SourceChain;                                                                // 0x0028 (size: 0x8)
    FName TargetChain;                                                                // 0x0030 (size: 0x8)
    FTargetChainSettings Settings;                                                    // 0x0038 (size: 0xB0)

}; // Size: 0xE8

class URetargetOpBase : public UObject
{
    bool bIsEnabled;                                                                  // 0x0028 (size: 0x1)

}; // Size: 0x30

class URetargetOpStack : public UObject
{
    TArray<class URetargetOpBase*> RetargetOps;                                       // 0x0028 (size: 0x10)

}; // Size: 0x38

class URetargetRootSettings : public UObject
{
    FTargetRootSettings Settings;                                                     // 0x0028 (size: 0x68)

}; // Size: 0x90

class URootMotionGeneratorOp : public URetargetOpBase
{
    FName SourceRootBone;                                                             // 0x0030 (size: 0x8)
    FName TargetRootBone;                                                             // 0x0038 (size: 0x8)
    FName TargetPelvisBone;                                                           // 0x0040 (size: 0x8)
    ERootMotionSource RootMotionSource;                                               // 0x0048 (size: 0x1)
    ERootMotionHeightSource RootHeightSource;                                         // 0x0049 (size: 0x1)
    bool bPropagateToNonRetargetedChildren;                                           // 0x004A (size: 0x1)
    bool bMaintainOffsetFromPelvis;                                                   // 0x004B (size: 0x1)
    bool bRotateWithPelvis;                                                           // 0x004C (size: 0x1)
    FTransform GlobalOffset;                                                          // 0x0050 (size: 0x60)

}; // Size: 0x250

#endif
