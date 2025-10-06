#ifndef UE4SS_SDK_ControlRig_HPP
#define UE4SS_SDK_ControlRig_HPP

#include "ControlRig_enums.hpp"

struct FAimTarget
{
    float Weight;                                                                     // 0x0000 (size: 0x4)
    FTransform Transform;                                                             // 0x0010 (size: 0x60)
    FVector AlignVector;                                                              // 0x0070 (size: 0x18)

}; // Size: 0x90

struct FAnimNode_ControlRig : public FAnimNode_ControlRigBase
{
    TSubclassOf<class UControlRig> ControlRigClass;                                   // 0x0258 (size: 0x8)
    TSubclassOf<class UControlRig> DefaultControlRigClass;                            // 0x0260 (size: 0x8)
    class UControlRig* ControlRig;                                                    // 0x0268 (size: 0x8)
    TMap<class UClass*, class UControlRig*> ControlRigPerClass;                       // 0x0270 (size: 0x50)
    float Alpha;                                                                      // 0x02C0 (size: 0x4)
    EAnimAlphaInputType AlphaInputType;                                               // 0x02C4 (size: 0x1)
    uint8 bAlphaBoolEnabled;                                                          // 0x02C5 (size: 0x1)
    uint8 bSetRefPoseFromSkeleton;                                                    // 0x02C5 (size: 0x1)
    FInputScaleBias AlphaScaleBias;                                                   // 0x02C8 (size: 0x8)
    FInputAlphaBoolBlend AlphaBoolBlend;                                              // 0x02D0 (size: 0x48)
    FName AlphaCurveName;                                                             // 0x0318 (size: 0x8)
    FInputScaleBiasClamp AlphaScaleBiasClamp;                                         // 0x0320 (size: 0x30)
    TMap<class FName, class FName> InputMapping;                                      // 0x0350 (size: 0x50)
    TMap<class FName, class FName> OutputMapping;                                     // 0x03A0 (size: 0x50)
    int32 LODThreshold;                                                               // 0x04A0 (size: 0x4)

}; // Size: 0x4E0

struct FAnimNode_ControlRigBase : public FAnimNode_CustomProperty
{
    FPoseLink Source;                                                                 // 0x0058 (size: 0x10)
    bool bResetInputPoseToInitial;                                                    // 0x0068 (size: 0x1)
    bool bTransferInputPose;                                                          // 0x0069 (size: 0x1)
    bool bTransferInputCurves;                                                        // 0x006A (size: 0x1)
    bool bTransferPoseInGlobalSpace;                                                  // 0x006B (size: 0x1)
    TArray<FBoneReference> InputBonesToTransfer;                                      // 0x0070 (size: 0x10)
    TArray<FBoneReference> OutputBonesToTransfer;                                     // 0x0080 (size: 0x10)
    TArray<class UAssetUserData*> AssetUserData;                                      // 0x0090 (size: 0x10)
    TWeakObjectPtr<class UNodeMappingContainer> NodeMappingContainer;                 // 0x00F0 (size: 0x8)
    FControlRigIOSettings InputSettings;                                              // 0x00F8 (size: 0x2)
    FControlRigIOSettings OutputSettings;                                             // 0x00FA (size: 0x2)
    bool bExecute;                                                                    // 0x0230 (size: 0x1)
    TArray<FControlRigAnimNodeEventName> EventQueue;                                  // 0x0238 (size: 0x10)

}; // Size: 0x258

struct FAnimNode_ControlRigInputPose : public FAnimNode_Base
{
    FPoseLink InputPose;                                                              // 0x0010 (size: 0x10)

}; // Size: 0x30

struct FAnimNode_ControlRig_ExternalSource : public FAnimNode_ControlRigBase
{
    TWeakObjectPtr<class UControlRig> ControlRig;                                     // 0x0258 (size: 0x8)

}; // Size: 0x260

struct FAnimationHierarchy : public FNodeHierarchyWithUserData
{
    TArray<FConstraintNodeData> UserData;                                             // 0x0078 (size: 0x10)

}; // Size: 0x88

struct FBlendTarget
{
    FTransform Transform;                                                             // 0x0000 (size: 0x60)
    float Weight;                                                                     // 0x0060 (size: 0x4)

}; // Size: 0x70

struct FCRSimContainer
{
    float TimeStep;                                                                   // 0x0008 (size: 0x4)
    float AccumulatedTime;                                                            // 0x000C (size: 0x4)
    float TimeLeftForStep;                                                            // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FCRSimLinearSpring
{
    int32 SubjectA;                                                                   // 0x0000 (size: 0x4)
    int32 SubjectB;                                                                   // 0x0004 (size: 0x4)
    float Coefficient;                                                                // 0x0008 (size: 0x4)
    float Equilibrium;                                                                // 0x000C (size: 0x4)

}; // Size: 0x10

struct FCRSimPointConstraint
{
    ECRSimConstraintType Type;                                                        // 0x0000 (size: 0x1)
    int32 SubjectA;                                                                   // 0x0004 (size: 0x4)
    int32 SubjectB;                                                                   // 0x0008 (size: 0x4)
    FVector DataA;                                                                    // 0x0010 (size: 0x18)
    FVector DataB;                                                                    // 0x0028 (size: 0x18)

}; // Size: 0x40

struct FCRSimPointContainer : public FCRSimContainer
{
    TArray<FRigVMSimPoint> Points;                                                    // 0x0018 (size: 0x10)
    TArray<FCRSimLinearSpring> Springs;                                               // 0x0028 (size: 0x10)
    TArray<FCRSimPointForce> Forces;                                                  // 0x0038 (size: 0x10)
    TArray<FCRSimSoftCollision> CollisionVolumes;                                     // 0x0048 (size: 0x10)
    TArray<FCRSimPointConstraint> Constraints;                                        // 0x0058 (size: 0x10)
    TArray<FRigVMSimPoint> PreviousStep;                                              // 0x0068 (size: 0x10)

}; // Size: 0x78

struct FCRSimPointForce
{
    ECRSimPointForceType ForceType;                                                   // 0x0000 (size: 0x1)
    FVector Vector;                                                                   // 0x0008 (size: 0x18)
    float Coefficient;                                                                // 0x0020 (size: 0x4)
    bool bNormalize;                                                                  // 0x0024 (size: 0x1)

}; // Size: 0x28

struct FCRSimSoftCollision
{
    FTransform Transform;                                                             // 0x0000 (size: 0x60)
    ECRSimSoftCollisionType ShapeType;                                                // 0x0060 (size: 0x1)
    float MinimumDistance;                                                            // 0x0064 (size: 0x4)
    float MaximumDistance;                                                            // 0x0068 (size: 0x4)
    ERigVMAnimEasingType FalloffType;                                                 // 0x006C (size: 0x1)
    float Coefficient;                                                                // 0x0070 (size: 0x4)
    bool bInverted;                                                                   // 0x0074 (size: 0x1)

}; // Size: 0x80

struct FCachedRigElement
{
    FRigElementKey Key;                                                               // 0x0000 (size: 0xC)
    uint16 Index;                                                                     // 0x000C (size: 0x2)
    int32 ContainerVersion;                                                           // 0x0010 (size: 0x4)

}; // Size: 0x20

struct FChannelMapInfo
{
    int32 ControlIndex;                                                               // 0x0000 (size: 0x4)
    int32 TotalChannelIndex;                                                          // 0x0004 (size: 0x4)
    int32 ChannelIndex;                                                               // 0x0008 (size: 0x4)
    int32 ParentControlIndex;                                                         // 0x000C (size: 0x4)
    FName ChannelTypeName;                                                            // 0x0010 (size: 0x8)
    bool bDoesHaveSpace;                                                              // 0x0018 (size: 0x1)
    int32 SpaceChannelIndex;                                                          // 0x001C (size: 0x4)
    int32 MaskIndex;                                                                  // 0x0020 (size: 0x4)
    int32 CategoryIndex;                                                              // 0x0024 (size: 0x4)
    TArray<uint32> ConstraintsIndex;                                                  // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FConstraintNodeData
{
    FTransform RelativeParent;                                                        // 0x0000 (size: 0x60)
    FConstraintOffset ConstraintOffset;                                               // 0x0060 (size: 0xC0)
    FName LinkedNode;                                                                 // 0x0120 (size: 0x8)
    TArray<FTransformConstraint> Constraints;                                         // 0x0128 (size: 0x10)

}; // Size: 0x140

struct FConstraintParent
{
    FRigElementKey Item;                                                              // 0x0000 (size: 0xC)
    float Weight;                                                                     // 0x000C (size: 0x4)

}; // Size: 0x10

struct FConstraintTarget
{
    FTransform Transform;                                                             // 0x0000 (size: 0x60)
    float Weight;                                                                     // 0x0060 (size: 0x4)
    bool bMaintainOffset;                                                             // 0x0064 (size: 0x1)
    FTransformFilter Filter;                                                          // 0x0065 (size: 0x9)

}; // Size: 0x70

struct FControlRigAnimInstanceProxy : public FAnimInstanceProxy
{
}; // Size: 0x880

struct FControlRigAnimNodeEventName
{
    FName EventName;                                                                  // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FControlRigComponentMappedBone
{
    FName Source;                                                                     // 0x0000 (size: 0x8)
    FName Target;                                                                     // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FControlRigComponentMappedComponent
{
    class USceneComponent* Component;                                                 // 0x0000 (size: 0x8)
    FName ElementName;                                                                // 0x0008 (size: 0x8)
    ERigElementType ElementType;                                                      // 0x0010 (size: 0x1)
    EControlRigComponentMapDirection Direction;                                       // 0x0011 (size: 0x1)

}; // Size: 0x18

struct FControlRigComponentMappedCurve
{
    FName Source;                                                                     // 0x0000 (size: 0x8)
    FName Target;                                                                     // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FControlRigComponentMappedElement
{
    FSoftComponentReference ComponentReference;                                       // 0x0000 (size: 0x48)
    int32 TransformIndex;                                                             // 0x0048 (size: 0x4)
    FName TransformName;                                                              // 0x004C (size: 0x8)
    ERigElementType ElementType;                                                      // 0x0054 (size: 0x1)
    FName ElementName;                                                                // 0x0058 (size: 0x8)
    EControlRigComponentMapDirection Direction;                                       // 0x0060 (size: 0x1)
    FTransform Offset;                                                                // 0x0070 (size: 0x60)
    float Weight;                                                                     // 0x00D0 (size: 0x4)
    EControlRigComponentSpace Space;                                                  // 0x00D4 (size: 0x1)
    class USceneComponent* SceneComponent;                                            // 0x00D8 (size: 0x8)
    int32 ElementIndex;                                                               // 0x00E0 (size: 0x4)
    int32 SubIndex;                                                                   // 0x00E4 (size: 0x4)

}; // Size: 0xF0

struct FControlRigControlPose
{
    TArray<FRigControlCopy> CopyOfControls;                                           // 0x0000 (size: 0x10)

}; // Size: 0x60

struct FControlRigExecuteContext : public FRigVMExecuteContext
{
}; // Size: 0x1E0

struct FControlRigIOSettings
{
    bool bUpdatePose;                                                                 // 0x0000 (size: 0x1)
    bool bUpdateCurves;                                                               // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FControlRigLayerInstanceProxy : public FAnimInstanceProxy
{
}; // Size: 0x840

struct FControlRigReference : public FAnimNodeReference
{
}; // Size: 0x10

struct FControlRigSequenceObjectReference
{
    TSubclassOf<class UControlRig> ControlRigClass;                                   // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FControlRigSequenceObjectReferenceMap
{
    TArray<FGuid> BindingIds;                                                         // 0x0000 (size: 0x10)
    TArray<FControlRigSequenceObjectReferences> References;                           // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FControlRigSequenceObjectReferences
{
    TArray<FControlRigSequenceObjectReference> Array;                                 // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FControlRigSettingsPerPinBool
{
    TMap<class FString, class bool> Values;                                           // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FControlRigShapeDefinition
{
    FName ShapeName;                                                                  // 0x0000 (size: 0x8)
    TSoftObjectPtr<UStaticMesh> StaticMesh;                                           // 0x0008 (size: 0x28)
    FTransform Transform;                                                             // 0x0030 (size: 0x60)

}; // Size: 0xA0

struct FControlRigTestDataFrame
{
    double AbsoluteTime;                                                              // 0x0000 (size: 0x8)
    double DeltaTime;                                                                 // 0x0008 (size: 0x8)
    TArray<FControlRigTestDataVariable> Variables;                                    // 0x0010 (size: 0x10)
    FRigPose Pose;                                                                    // 0x0020 (size: 0x70)

}; // Size: 0x90

struct FControlRigTestDataVariable
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FName CPPType;                                                                    // 0x0008 (size: 0x8)
    FString Value;                                                                    // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FControlRigValidationContext
{
}; // Size: 0x28

struct FControlRotationOrder
{
    EEulerRotationOrder RotationOrder;                                                // 0x0000 (size: 0x1)
    bool bOverrideSetting;                                                            // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FControlShapeActorCreationParam
{
}; // Size: 0x1C0

struct FEnumParameterNameAndCurve
{
    FName ParameterName;                                                              // 0x0000 (size: 0x8)
    FMovieSceneByteChannel ParameterCurve;                                            // 0x0008 (size: 0x110)

}; // Size: 0x118

struct FIntegerParameterNameAndCurve
{
    FName ParameterName;                                                              // 0x0000 (size: 0x8)
    FMovieSceneIntegerChannel ParameterCurve;                                         // 0x0008 (size: 0x108)

}; // Size: 0x110

struct FModularRigConnections
{
    TArray<FModularRigSingleConnection> ConnectionList;                               // 0x0000 (size: 0x10)

}; // Size: 0x60

struct FModularRigModel
{
    TArray<FRigModuleReference> Modules;                                              // 0x0000 (size: 0x10)
    FModularRigConnections Connections;                                               // 0x0030 (size: 0x60)
    class UObject* Controller;                                                        // 0x0090 (size: 0x8)

}; // Size: 0xB0

struct FModularRigResolveResult
{
    FRigElementKey Connector;                                                         // 0x0000 (size: 0xC)
    TArray<FRigElementResolveResult> Matches;                                         // 0x0010 (size: 0x10)
    TArray<FRigElementResolveResult> Excluded;                                        // 0x0020 (size: 0x10)
    EModularRigResolveState State;                                                    // 0x0030 (size: 0x1)
    FText Message;                                                                    // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FModularRigSettings
{
    bool bAutoResolve;                                                                // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FModularRigSingleConnection
{
    FRigElementKey Connector;                                                         // 0x0000 (size: 0xC)
    FRigElementKey Target;                                                            // 0x000C (size: 0xC)

}; // Size: 0x18

struct FMovieSceneControlRigInstanceData : public FMovieSceneSequenceInstanceData
{
    bool bAdditive;                                                                   // 0x0008 (size: 0x1)
    bool bApplyBoneFilter;                                                            // 0x0009 (size: 0x1)
    FInputBlendPose BoneFilter;                                                       // 0x0010 (size: 0x10)
    FMovieSceneFloatChannel Weight;                                                   // 0x0020 (size: 0x110)
    FMovieSceneEvaluationOperand Operand;                                             // 0x0130 (size: 0x14)

}; // Size: 0x148

struct FMovieSceneControlRigParameterTemplate : public FMovieSceneParameterSectionTemplate
{
    TArray<FEnumParameterNameAndCurve> Enums;                                         // 0x0080 (size: 0x10)
    TArray<FIntegerParameterNameAndCurve> Integers;                                   // 0x0090 (size: 0x10)
    TArray<FSpaceControlNameAndChannel> Spaces;                                       // 0x00A0 (size: 0x10)
    TArray<FConstraintAndActiveChannel> Constraints;                                  // 0x00B0 (size: 0x10)

}; // Size: 0xC0

struct FMovieSceneControlRigSpaceBaseKey
{
    EMovieSceneControlRigSpaceType SpaceType;                                         // 0x0000 (size: 0x1)
    FRigElementKey ControlRigElement;                                                 // 0x0004 (size: 0xC)

}; // Size: 0x10

struct FMovieSceneControlRigSpaceChannel : public FMovieSceneChannel
{
    TArray<FFrameNumber> KeyTimes;                                                    // 0x0050 (size: 0x10)
    TArray<FMovieSceneControlRigSpaceBaseKey> KeyValues;                              // 0x0060 (size: 0x10)
    FMovieSceneKeyHandleMap KeyHandles;                                               // 0x0070 (size: 0x88)

}; // Size: 0x110

struct FRegionScaleFactors
{
    float PositiveWidth;                                                              // 0x0000 (size: 0x4)
    float NegativeWidth;                                                              // 0x0004 (size: 0x4)
    float PositiveHeight;                                                             // 0x0008 (size: 0x4)
    float NegativeHeight;                                                             // 0x000C (size: 0x4)

}; // Size: 0x10

struct FRigAndConnectionRule : public FRigConnectionRule
{
    TArray<FRigConnectionRuleStash> ChildRules;                                       // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FRigBaseElement
{
    FRigElementKey Key;                                                               // 0x0010 (size: 0xC)
    int32 Index;                                                                      // 0x001C (size: 0x4)
    int32 SubIndex;                                                                   // 0x0020 (size: 0x4)
    int32 CreatedAtInstructionIndex;                                                  // 0x0024 (size: 0x4)
    bool bSelected;                                                                   // 0x0028 (size: 0x1)

}; // Size: 0x48

struct FRigBaseMetadata
{
    FName Name;                                                                       // 0x0008 (size: 0x8)
    ERigMetadataType Type;                                                            // 0x0010 (size: 0x1)

}; // Size: 0x20

struct FRigBone : public FRigElement
{
    FName ParentName;                                                                 // 0x0018 (size: 0x8)
    int32 ParentIndex;                                                                // 0x0020 (size: 0x4)
    FTransform InitialTransform;                                                      // 0x0030 (size: 0x60)
    FTransform GlobalTransform;                                                       // 0x0090 (size: 0x60)
    FTransform LocalTransform;                                                        // 0x00F0 (size: 0x60)
    TArray<int32> Dependents;                                                         // 0x0150 (size: 0x10)
    ERigBoneType Type;                                                                // 0x0160 (size: 0x1)

}; // Size: 0x170

struct FRigBoneElement : public FRigSingleParentElement
{
    ERigBoneType BoneType;                                                            // 0x0110 (size: 0x1)

}; // Size: 0x118

struct FRigBoneHierarchy
{
    TArray<FRigBone> Bones;                                                           // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FRigBoolArrayMetadata : public FRigBaseMetadata
{
    TArray<bool> Value;                                                               // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FRigBoolMetadata : public FRigBaseMetadata
{
    bool Value;                                                                       // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FRigChildOfPrimaryConnectionRule : public FRigConnectionRule
{
}; // Size: 0x8

struct FRigComputedTransform
{
}; // Size: 0x10

struct FRigConnectionRule
{
}; // Size: 0x8

struct FRigConnectionRuleStash
{
    FString ScriptStructPath;                                                         // 0x0000 (size: 0x10)
    FString ExportedText;                                                             // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FRigConnectorElement : public FRigBaseElement
{
    FRigConnectorSettings Settings;                                                   // 0x0048 (size: 0x28)

}; // Size: 0x70

struct FRigConnectorSettings
{
    FString Description;                                                              // 0x0000 (size: 0x10)
    EConnectorType Type;                                                              // 0x0010 (size: 0x1)
    bool bOptional;                                                                   // 0x0011 (size: 0x1)
    TArray<FRigConnectionRuleStash> Rules;                                            // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FRigConnectorState
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FRigElementKey ResolvedTarget;                                                    // 0x0008 (size: 0xC)
    FRigConnectorSettings Settings;                                                   // 0x0018 (size: 0x28)

}; // Size: 0x40

struct FRigControl : public FRigElement
{
    ERigControlType ControlType;                                                      // 0x0018 (size: 0x1)
    FName DisplayName;                                                                // 0x001C (size: 0x8)
    FName ParentName;                                                                 // 0x0024 (size: 0x8)
    int32 ParentIndex;                                                                // 0x002C (size: 0x4)
    FName SpaceName;                                                                  // 0x0030 (size: 0x8)
    int32 SpaceIndex;                                                                 // 0x0038 (size: 0x4)
    FTransform OffsetTransform;                                                       // 0x0040 (size: 0x60)
    FRigControlValue InitialValue;                                                    // 0x00A0 (size: 0x84)
    FRigControlValue Value;                                                           // 0x0124 (size: 0x84)
    ERigControlAxis PrimaryAxis;                                                      // 0x01A8 (size: 0x1)
    bool bIsCurve;                                                                    // 0x01A9 (size: 0x1)
    bool bAnimatable;                                                                 // 0x01AA (size: 0x1)
    bool bLimitTranslation;                                                           // 0x01AB (size: 0x1)
    bool bLimitRotation;                                                              // 0x01AC (size: 0x1)
    bool bLimitScale;                                                                 // 0x01AD (size: 0x1)
    bool bDrawLimits;                                                                 // 0x01AE (size: 0x1)
    FRigControlValue MinimumValue;                                                    // 0x01B0 (size: 0x84)
    FRigControlValue MaximumValue;                                                    // 0x0234 (size: 0x84)
    bool bGizmoEnabled;                                                               // 0x02B8 (size: 0x1)
    bool bGizmoVisible;                                                               // 0x02B9 (size: 0x1)
    FName GizmoName;                                                                  // 0x02BC (size: 0x8)
    FTransform GizmoTransform;                                                        // 0x02D0 (size: 0x60)
    FLinearColor GizmoColor;                                                          // 0x0330 (size: 0x10)
    TArray<int32> Dependents;                                                         // 0x0340 (size: 0x10)
    bool bIsTransientControl;                                                         // 0x0350 (size: 0x1)
    class UEnum* ControlEnum;                                                         // 0x0358 (size: 0x8)

}; // Size: 0x360

struct FRigControlCopy
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    ERigControlType ControlType;                                                      // 0x0008 (size: 0x1)
    FRigElementKey ParentKey;                                                         // 0x000C (size: 0xC)
    FRigControlValue Value;                                                           // 0x0018 (size: 0x84)
    FTransform OffsetTransform;                                                       // 0x00A0 (size: 0x60)
    FTransform ParentTransform;                                                       // 0x0100 (size: 0x60)
    FTransform LocalTransform;                                                        // 0x0160 (size: 0x60)
    FTransform GlobalTransform;                                                       // 0x01C0 (size: 0x60)

}; // Size: 0x220

struct FRigControlElement : public FRigMultiParentElement
{
    FRigControlSettings Settings;                                                     // 0x0210 (size: 0x1B8)
    FRigPreferredEulerAngles PreferredEulerAngles;                                    // 0x03C8 (size: 0x38)

}; // Size: 0x500

struct FRigControlElementCustomization
{
    TArray<FRigElementKey> AvailableSpaces;                                           // 0x0000 (size: 0x10)
    TArray<FRigElementKey> RemovedSpaces;                                             // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FRigControlHierarchy
{
    TArray<FRigControl> Controls;                                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FRigControlLimitEnabled
{
    bool bMinimum;                                                                    // 0x0000 (size: 0x1)
    bool bMaximum;                                                                    // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FRigControlModifiedContext
{
}; // Size: 0x18

struct FRigControlSettings
{
    ERigControlAnimationType AnimationType;                                           // 0x0000 (size: 0x1)
    ERigControlType ControlType;                                                      // 0x0001 (size: 0x1)
    FName DisplayName;                                                                // 0x0004 (size: 0x8)
    ERigControlAxis PrimaryAxis;                                                      // 0x000C (size: 0x1)
    bool bIsCurve;                                                                    // 0x000D (size: 0x1)
    TArray<FRigControlLimitEnabled> LimitEnabled;                                     // 0x0010 (size: 0x10)
    bool bDrawLimits;                                                                 // 0x0020 (size: 0x1)
    FRigControlValue MinimumValue;                                                    // 0x0024 (size: 0x84)
    FRigControlValue MaximumValue;                                                    // 0x00A8 (size: 0x84)
    bool bShapeVisible;                                                               // 0x012C (size: 0x1)
    ERigControlVisibility ShapeVisibility;                                            // 0x012D (size: 0x1)
    FName ShapeName;                                                                  // 0x0130 (size: 0x8)
    FLinearColor ShapeColor;                                                          // 0x0138 (size: 0x10)
    bool bIsTransientControl;                                                         // 0x0148 (size: 0x1)
    class UEnum* ControlEnum;                                                         // 0x0150 (size: 0x8)
    FRigControlElementCustomization Customization;                                    // 0x0158 (size: 0x20)
    TArray<FRigElementKey> DrivenControls;                                            // 0x0178 (size: 0x10)
    bool bGroupWithParentControl;                                                     // 0x0198 (size: 0x1)
    bool bRestrictSpaceSwitching;                                                     // 0x0199 (size: 0x1)
    TArray<ERigControlTransformChannel> FilteredChannels;                             // 0x01A0 (size: 0x10)
    EEulerRotationOrder PreferredRotationOrder;                                       // 0x01B0 (size: 0x1)
    bool bUsePreferredRotationOrder;                                                  // 0x01B1 (size: 0x1)

}; // Size: 0x1B8

struct FRigControlValue
{
    FRigControlValueStorage FloatStorage;                                             // 0x0000 (size: 0x84)

}; // Size: 0x84

struct FRigControlValueStorage
{
    float Float00;                                                                    // 0x0000 (size: 0x4)
    float Float01;                                                                    // 0x0004 (size: 0x4)
    float Float02;                                                                    // 0x0008 (size: 0x4)
    float Float03;                                                                    // 0x000C (size: 0x4)
    float Float10;                                                                    // 0x0010 (size: 0x4)
    float Float11;                                                                    // 0x0014 (size: 0x4)
    float Float12;                                                                    // 0x0018 (size: 0x4)
    float Float13;                                                                    // 0x001C (size: 0x4)
    float Float20;                                                                    // 0x0020 (size: 0x4)
    float Float21;                                                                    // 0x0024 (size: 0x4)
    float Float22;                                                                    // 0x0028 (size: 0x4)
    float Float23;                                                                    // 0x002C (size: 0x4)
    float Float30;                                                                    // 0x0030 (size: 0x4)
    float Float31;                                                                    // 0x0034 (size: 0x4)
    float Float32;                                                                    // 0x0038 (size: 0x4)
    float Float33;                                                                    // 0x003C (size: 0x4)
    float Float00_2;                                                                  // 0x0040 (size: 0x4)
    float Float01_2;                                                                  // 0x0044 (size: 0x4)
    float Float02_2;                                                                  // 0x0048 (size: 0x4)
    float Float03_2;                                                                  // 0x004C (size: 0x4)
    float Float10_2;                                                                  // 0x0050 (size: 0x4)
    float Float11_2;                                                                  // 0x0054 (size: 0x4)
    float Float12_2;                                                                  // 0x0058 (size: 0x4)
    float Float13_2;                                                                  // 0x005C (size: 0x4)
    float Float20_2;                                                                  // 0x0060 (size: 0x4)
    float Float21_2;                                                                  // 0x0064 (size: 0x4)
    float Float22_2;                                                                  // 0x0068 (size: 0x4)
    float Float23_2;                                                                  // 0x006C (size: 0x4)
    float Float30_2;                                                                  // 0x0070 (size: 0x4)
    float Float31_2;                                                                  // 0x0074 (size: 0x4)
    float Float32_2;                                                                  // 0x0078 (size: 0x4)
    float Float33_2;                                                                  // 0x007C (size: 0x4)
    bool bValid;                                                                      // 0x0080 (size: 0x1)

}; // Size: 0x84

struct FRigCurrentAndInitialDirtyState
{
    FRigLocalAndGlobalDirtyState Current;                                             // 0x0000 (size: 0x20)
    FRigLocalAndGlobalDirtyState Initial;                                             // 0x0020 (size: 0x20)

}; // Size: 0x40

struct FRigCurrentAndInitialTransform
{
    FRigLocalAndGlobalTransform Current;                                              // 0x0000 (size: 0x20)
    FRigLocalAndGlobalTransform Initial;                                              // 0x0020 (size: 0x20)

}; // Size: 0x40

struct FRigCurve : public FRigElement
{
    float Value;                                                                      // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FRigCurveContainer
{
    TArray<FRigCurve> Curves;                                                         // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FRigCurveElement : public FRigBaseElement
{
}; // Size: 0x58

struct FRigDispatchFactory : public FRigVMDispatchFactory
{
}; // Size: 0x70

struct FRigDispatch_AnimAttributeBase : public FRigDispatchFactory
{
}; // Size: 0xA0

struct FRigDispatch_GetAnimAttribute : public FRigDispatch_AnimAttributeBase
{
}; // Size: 0xA0

struct FRigDispatch_GetMetadata : public FRigDispatch_MetadataBase
{
}; // Size: 0xA0

struct FRigDispatch_GetModuleMetadata : public FRigDispatch_GetMetadata
{
}; // Size: 0xA0

struct FRigDispatch_GetUserData : public FRigDispatchFactory
{
}; // Size: 0x70

struct FRigDispatch_MetadataBase : public FRigDispatchFactory
{
}; // Size: 0xA0

struct FRigDispatch_SetAnimAttribute : public FRigDispatch_AnimAttributeBase
{
}; // Size: 0xA0

struct FRigDispatch_SetMetadata : public FRigDispatch_MetadataBase
{
}; // Size: 0xA0

struct FRigDispatch_SetModuleMetadata : public FRigDispatch_SetMetadata
{
}; // Size: 0xA0

struct FRigElement
{
    FName Name;                                                                       // 0x0008 (size: 0x8)
    int32 Index;                                                                      // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FRigElementKey
{
    ERigElementType Type;                                                             // 0x0000 (size: 0x1)
    FName Name;                                                                       // 0x0004 (size: 0x8)

}; // Size: 0xC

struct FRigElementKeyArrayMetadata : public FRigBaseMetadata
{
    TArray<FRigElementKey> Value;                                                     // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FRigElementKeyCollection
{
    TArray<FRigElementKey> keys;                                                      // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FRigElementKeyMetadata : public FRigBaseMetadata
{
    FRigElementKey Value;                                                             // 0x0020 (size: 0xC)

}; // Size: 0x30

struct FRigElementParentConstraint
{
}; // Size: 0x90

struct FRigElementResolveResult
{
    FRigElementKey Key;                                                               // 0x0000 (size: 0xC)
    ERigElementResolveState State;                                                    // 0x000C (size: 0x1)
    FText Message;                                                                    // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FRigElementWeight
{
    float Location;                                                                   // 0x0000 (size: 0x4)
    float Rotation;                                                                   // 0x0004 (size: 0x4)
    float scale;                                                                      // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FRigEventContext
{
}; // Size: 0x28

struct FRigFloatArrayMetadata : public FRigBaseMetadata
{
    TArray<float> Value;                                                              // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FRigFloatMetadata : public FRigBaseMetadata
{
    float Value;                                                                      // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FRigHierarchyContainer
{
    FRigBoneHierarchy BoneHierarchy;                                                  // 0x0000 (size: 0x10)
    FRigSpaceHierarchy SpaceHierarchy;                                                // 0x0010 (size: 0x10)
    FRigControlHierarchy ControlHierarchy;                                            // 0x0020 (size: 0x10)
    FRigCurveContainer CurveContainer;                                                // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FRigHierarchyCopyPasteContent
{
    TArray<FRigHierarchyCopyPasteContentPerElement> Elements;                         // 0x0000 (size: 0x10)
    TArray<ERigElementType> Types;                                                    // 0x0010 (size: 0x10)
    TArray<FString> Contents;                                                         // 0x0020 (size: 0x10)
    TArray<FTransform> LocalTransforms;                                               // 0x0030 (size: 0x10)
    TArray<FTransform> GlobalTransforms;                                              // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FRigHierarchyCopyPasteContentPerElement
{
    FRigElementKey Key;                                                               // 0x0000 (size: 0xC)
    FString Content;                                                                  // 0x0010 (size: 0x10)
    TArray<FRigElementKey> Parents;                                                   // 0x0020 (size: 0x10)
    TArray<FRigElementWeight> ParentWeights;                                          // 0x0030 (size: 0x10)
    TArray<FTransform> Poses;                                                         // 0x0040 (size: 0x10)
    TArray<bool> DirtyStates;                                                         // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FRigHierarchyRef
{
}; // Size: 0x1

struct FRigHierarchySettings
{
    int32 ProceduralElementLimit;                                                     // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FRigInfluenceEntry
{
    FRigElementKey Source;                                                            // 0x0000 (size: 0xC)
    TArray<FRigElementKey> AffectedList;                                              // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FRigInfluenceEntryModifier
{
    TArray<FRigElementKey> AffectedList;                                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FRigInfluenceMap
{
    FName EventName;                                                                  // 0x0000 (size: 0x8)
    TArray<FRigInfluenceEntry> Entries;                                               // 0x0008 (size: 0x10)
    TMap<FRigElementKey, int32> KeyToIndex;                                           // 0x0018 (size: 0x50)

}; // Size: 0x68

struct FRigInfluenceMapPerEvent
{
    TArray<FRigInfluenceMap> Maps;                                                    // 0x0000 (size: 0x10)
    TMap<FName, int32> EventToIndex;                                                  // 0x0010 (size: 0x50)

}; // Size: 0x60

struct FRigInt32ArrayMetadata : public FRigBaseMetadata
{
    TArray<int32> Value;                                                              // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FRigInt32Metadata : public FRigBaseMetadata
{
    int32 Value;                                                                      // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FRigLinearColorArrayMetadata : public FRigBaseMetadata
{
    TArray<FLinearColor> Value;                                                       // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FRigLinearColorMetadata : public FRigBaseMetadata
{
    FLinearColor Value;                                                               // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FRigLocalAndGlobalDirtyState
{
    FRigTransformDirtyState Global;                                                   // 0x0000 (size: 0x10)
    FRigTransformDirtyState Local;                                                    // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FRigLocalAndGlobalTransform
{
    FRigComputedTransform Local;                                                      // 0x0000 (size: 0x10)
    FRigComputedTransform Global;                                                     // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FRigModuleConnector
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FRigConnectorSettings Settings;                                                   // 0x0010 (size: 0x28)

}; // Size: 0x38

struct FRigModuleDescription
{
    FSoftObjectPath Path;                                                             // 0x0000 (size: 0x20)
    FRigModuleSettings Settings;                                                      // 0x0020 (size: 0x80)

}; // Size: 0xA0

struct FRigModuleExecutionElement
{
    FString ModulePath;                                                               // 0x0000 (size: 0x10)
    FName EventName;                                                                  // 0x0018 (size: 0x8)
    bool bExecuted;                                                                   // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FRigModuleIdentifier
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FString Type;                                                                     // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FRigModuleInstance
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    class UControlRig* RigPtr;                                                        // 0x0008 (size: 0x8)
    FString ParentPath;                                                               // 0x0010 (size: 0x10)
    TMap<class FName, class FRigVMExternalVariable> VariableBindings;                 // 0x0020 (size: 0x50)

}; // Size: 0x88

struct FRigModuleReference
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FString ShortName;                                                                // 0x0008 (size: 0x10)
    bool bShortNameBasedOnPath;                                                       // 0x0018 (size: 0x1)
    FString ParentPath;                                                               // 0x0020 (size: 0x10)
    TSoftClassPtr<UControlRig> Class;                                                 // 0x0030 (size: 0x28)
    TMap<class FRigElementKey, class FRigElementKey> Connections;                     // 0x0058 (size: 0x50)
    TMap<class FName, class FString> ConfigValues;                                    // 0x00A8 (size: 0x50)
    TMap<class FName, class FString> Bindings;                                        // 0x00F8 (size: 0x50)
    FName PreviousName;                                                               // 0x0148 (size: 0x8)
    FString PreviousParentPath;                                                       // 0x0150 (size: 0x10)

}; // Size: 0x170

struct FRigModuleSettings
{
    FRigModuleIdentifier Identifier;                                                  // 0x0000 (size: 0x20)
    FSoftObjectPath Icon;                                                             // 0x0020 (size: 0x20)
    FString Category;                                                                 // 0x0040 (size: 0x10)
    FString Keywords;                                                                 // 0x0050 (size: 0x10)
    FString Description;                                                              // 0x0060 (size: 0x10)
    TArray<FRigModuleConnector> ExposedConnectors;                                    // 0x0070 (size: 0x10)

}; // Size: 0x80

struct FRigMultiParentElement : public FRigTransformElement
{
}; // Size: 0x210

struct FRigNameArrayMetadata : public FRigBaseMetadata
{
    TArray<FName> Value;                                                              // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FRigNameMetadata : public FRigBaseMetadata
{
    FName Value;                                                                      // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FRigNullElement : public FRigMultiParentElement
{
}; // Size: 0x210

struct FRigOrConnectionRule : public FRigConnectionRule
{
    TArray<FRigConnectionRuleStash> ChildRules;                                       // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FRigPhysicsElement : public FRigSingleParentElement
{
    FRigPhysicsSolverID Solver;                                                       // 0x0110 (size: 0x10)
    FRigPhysicsSettings Settings;                                                     // 0x0120 (size: 0x4)

}; // Size: 0x128

struct FRigPhysicsSettings
{
    float Mass;                                                                       // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FRigPhysicsSolverDescription
{
    FRigPhysicsSolverID ID;                                                           // 0x0000 (size: 0x10)
    FName Name;                                                                       // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FRigPhysicsSolverID
{
    FGuid Guid;                                                                       // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FRigPose
{
    TArray<FRigPoseElement> Elements;                                                 // 0x0000 (size: 0x10)
    int32 HierarchyTopologyVersion;                                                   // 0x0010 (size: 0x4)
    int32 PoseHash;                                                                   // 0x0014 (size: 0x4)

}; // Size: 0x70

struct FRigPoseElement
{
    FCachedRigElement Index;                                                          // 0x0000 (size: 0x20)
    FTransform GlobalTransform;                                                       // 0x0020 (size: 0x60)
    FTransform LocalTransform;                                                        // 0x0080 (size: 0x60)
    FVector PreferredEulerAngle;                                                      // 0x00E0 (size: 0x18)
    FRigElementKey ActiveParent;                                                      // 0x00F8 (size: 0xC)
    float CurveValue;                                                                 // 0x0104 (size: 0x4)

}; // Size: 0x110

struct FRigPreferredEulerAngles
{
    EEulerRotationOrder RotationOrder;                                                // 0x0000 (size: 0x1)
    FVector Current;                                                                  // 0x0008 (size: 0x18)
    FVector Initial;                                                                  // 0x0020 (size: 0x18)

}; // Size: 0x38

struct FRigQuatArrayMetadata : public FRigBaseMetadata
{
    TArray<FQuat> Value;                                                              // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FRigQuatMetadata : public FRigBaseMetadata
{
    FQuat Value;                                                                      // 0x0020 (size: 0x20)

}; // Size: 0x40

struct FRigReferenceElement : public FRigSingleParentElement
{
}; // Size: 0x120

struct FRigRotatorArrayMetadata : public FRigBaseMetadata
{
    TArray<FRotator> Value;                                                           // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FRigRotatorMetadata : public FRigBaseMetadata
{
    FRotator Value;                                                                   // 0x0020 (size: 0x18)

}; // Size: 0x38

struct FRigSingleParentElement : public FRigTransformElement
{
}; // Size: 0x110

struct FRigSocketElement : public FRigSingleParentElement
{
}; // Size: 0x110

struct FRigSocketState
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FRigElementKey Parent;                                                            // 0x0008 (size: 0xC)
    FTransform InitialLocalTransform;                                                 // 0x0020 (size: 0x60)
    FLinearColor Color;                                                               // 0x0080 (size: 0x10)
    FString Description;                                                              // 0x0090 (size: 0x10)

}; // Size: 0xA0

struct FRigSpace : public FRigElement
{
    ERigSpaceType SpaceType;                                                          // 0x0018 (size: 0x1)
    FName ParentName;                                                                 // 0x001C (size: 0x8)
    int32 ParentIndex;                                                                // 0x0024 (size: 0x4)
    FTransform InitialTransform;                                                      // 0x0030 (size: 0x60)
    FTransform LocalTransform;                                                        // 0x0090 (size: 0x60)

}; // Size: 0xF0

struct FRigSpaceHierarchy
{
    TArray<FRigSpace> Spaces;                                                         // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FRigTagConnectionRule : public FRigConnectionRule
{
    FName Tag;                                                                        // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FRigTransformArrayMetadata : public FRigBaseMetadata
{
    TArray<FTransform> Value;                                                         // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FRigTransformDirtyState
{
}; // Size: 0x10

struct FRigTransformElement : public FRigBaseElement
{
}; // Size: 0x108

struct FRigTransformMetadata : public FRigBaseMetadata
{
    FTransform Value;                                                                 // 0x0020 (size: 0x60)

}; // Size: 0x80

struct FRigTransformStackEntry
{
    FRigElementKey Key;                                                               // 0x0000 (size: 0xC)
    TEnumAsByte<ERigTransformStackEntryType> EntryType;                               // 0x000C (size: 0x1)
    TEnumAsByte<ERigTransformType::Type> TransformType;                               // 0x000D (size: 0x1)
    FTransform OldTransform;                                                          // 0x0010 (size: 0x60)
    FTransform NewTransform;                                                          // 0x0070 (size: 0x60)
    bool bAffectChildren;                                                             // 0x00D0 (size: 0x1)
    TArray<FString> Callstack;                                                        // 0x00D8 (size: 0x10)

}; // Size: 0xF0

struct FRigTypeConnectionRule : public FRigConnectionRule
{
    ERigElementType ElementType;                                                      // 0x0008 (size: 0x1)

}; // Size: 0x10

struct FRigUnit : public FRigVMStruct
{
}; // Size: 0x8

struct FRigUnitMutable : public FRigUnit
{
    FControlRigExecuteContext ExecuteContext;                                         // 0x0010 (size: 0x1E0)

}; // Size: 0x1F0

struct FRigUnit_AddBoneTransform : public FRigUnitMutable
{
    FName bone;                                                                       // 0x01F0 (size: 0x8)
    FTransform Transform;                                                             // 0x0200 (size: 0x60)
    float Weight;                                                                     // 0x0260 (size: 0x4)
    bool bPostMultiply;                                                               // 0x0264 (size: 0x1)
    bool bPropagateToChildren;                                                        // 0x0265 (size: 0x1)
    FCachedRigElement CachedBone;                                                     // 0x0268 (size: 0x20)

}; // Size: 0x290

struct FRigUnit_AddParent : public FRigUnit_DynamicHierarchyBaseMutable
{
    FRigElementKey Child;                                                             // 0x01F0 (size: 0xC)
    FRigElementKey Parent;                                                            // 0x01FC (size: 0xC)

}; // Size: 0x210

struct FRigUnit_Add_FloatFloat : public FRigUnit_BinaryFloatOp
{
}; // Size: 0x18

struct FRigUnit_Add_VectorVector : public FRigUnit_BinaryVectorOp
{
}; // Size: 0x50

struct FRigUnit_AimBone : public FRigUnit_HighlevelBaseMutable
{
    FName bone;                                                                       // 0x01F0 (size: 0x8)
    FRigUnit_AimBone_Target Primary;                                                  // 0x01F8 (size: 0x48)
    FRigUnit_AimBone_Target Secondary;                                                // 0x0240 (size: 0x48)
    float Weight;                                                                     // 0x0288 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x028C (size: 0x1)
    FRigUnit_AimBone_DebugSettings DebugSettings;                                     // 0x0290 (size: 0x70)
    FCachedRigElement CachedBoneIndex;                                                // 0x0300 (size: 0x20)
    FCachedRigElement PrimaryCachedSpace;                                             // 0x0320 (size: 0x20)
    FCachedRigElement SecondaryCachedSpace;                                           // 0x0340 (size: 0x20)
    bool bIsInitialized;                                                              // 0x0360 (size: 0x1)

}; // Size: 0x370

struct FRigUnit_AimBoneMath : public FRigUnit_HighlevelBase
{
    FTransform InputTransform;                                                        // 0x0010 (size: 0x60)
    FRigUnit_AimItem_Target Primary;                                                  // 0x0070 (size: 0x48)
    FRigUnit_AimItem_Target Secondary;                                                // 0x00B8 (size: 0x48)
    float Weight;                                                                     // 0x0100 (size: 0x4)
    FTransform Result;                                                                // 0x0110 (size: 0x60)
    FRigUnit_AimBone_DebugSettings DebugSettings;                                     // 0x0170 (size: 0x70)
    FCachedRigElement PrimaryCachedSpace;                                             // 0x01E0 (size: 0x20)
    FCachedRigElement SecondaryCachedSpace;                                           // 0x0200 (size: 0x20)
    bool bIsInitialized;                                                              // 0x0220 (size: 0x1)

}; // Size: 0x230

struct FRigUnit_AimBone_DebugSettings
{
    bool bEnabled;                                                                    // 0x0000 (size: 0x1)
    float scale;                                                                      // 0x0004 (size: 0x4)
    FTransform WorldOffset;                                                           // 0x0010 (size: 0x60)

}; // Size: 0x70

struct FRigUnit_AimBone_Target
{
    float Weight;                                                                     // 0x0000 (size: 0x4)
    FVector Axis;                                                                     // 0x0008 (size: 0x18)
    FVector Target;                                                                   // 0x0020 (size: 0x18)
    EControlRigVectorKind Kind;                                                       // 0x0038 (size: 0x1)
    FName Space;                                                                      // 0x003C (size: 0x8)

}; // Size: 0x48

struct FRigUnit_AimConstraint : public FRigUnitMutable
{
    FName Joint;                                                                      // 0x01F0 (size: 0x8)
    EAimMode AimMode;                                                                 // 0x01F8 (size: 0x1)
    EAimMode UpMode;                                                                  // 0x01F9 (size: 0x1)
    FVector AimVector;                                                                // 0x0200 (size: 0x18)
    FVector UpVector;                                                                 // 0x0218 (size: 0x18)
    TArray<FAimTarget> AimTargets;                                                    // 0x0230 (size: 0x10)
    TArray<FAimTarget> UpTargets;                                                     // 0x0240 (size: 0x10)
    FRigUnit_AimConstraint_WorkData WorkData;                                         // 0x0250 (size: 0x10)

}; // Size: 0x260

struct FRigUnit_AimConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKey Child;                                                             // 0x01F0 (size: 0xC)
    bool bMaintainOffset;                                                             // 0x01FC (size: 0x1)
    FFilterOptionPerAxis Filter;                                                      // 0x01FD (size: 0x3)
    FVector AimAxis;                                                                  // 0x0200 (size: 0x18)
    FVector UpAxis;                                                                   // 0x0218 (size: 0x18)
    FRigUnit_AimConstraint_WorldUp WorldUp;                                           // 0x0230 (size: 0x28)
    TArray<FConstraintParent> Parents;                                                // 0x0258 (size: 0x10)
    FRigUnit_AimConstraint_AdvancedSettings AdvancedSettings;                         // 0x0270 (size: 0x80)
    float Weight;                                                                     // 0x02F0 (size: 0x4)
    FCachedRigElement WorldUpSpaceCache;                                              // 0x02F8 (size: 0x20)
    FCachedRigElement ChildCache;                                                     // 0x0318 (size: 0x20)
    TArray<FCachedRigElement> ParentCaches;                                           // 0x0338 (size: 0x10)
    bool bIsInitialized;                                                              // 0x0348 (size: 0x1)

}; // Size: 0x350

struct FRigUnit_AimConstraint_AdvancedSettings
{
    FRigUnit_AimBone_DebugSettings DebugSettings;                                     // 0x0000 (size: 0x70)
    EEulerRotationOrder RotationOrderForFilter;                                       // 0x0070 (size: 0x1)

}; // Size: 0x80

struct FRigUnit_AimConstraint_WorkData
{
    TArray<FConstraintData> ConstraintData;                                           // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FRigUnit_AimConstraint_WorldUp
{
    FVector Target;                                                                   // 0x0000 (size: 0x18)
    EControlRigVectorKind Kind;                                                       // 0x0018 (size: 0x1)
    FRigElementKey Space;                                                             // 0x001C (size: 0xC)

}; // Size: 0x28

struct FRigUnit_AimItem : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKey Item;                                                              // 0x01F0 (size: 0xC)
    FRigUnit_AimItem_Target Primary;                                                  // 0x0200 (size: 0x48)
    FRigUnit_AimItem_Target Secondary;                                                // 0x0248 (size: 0x48)
    float Weight;                                                                     // 0x0290 (size: 0x4)
    FRigUnit_AimBone_DebugSettings DebugSettings;                                     // 0x02A0 (size: 0x70)
    FCachedRigElement CachedItem;                                                     // 0x0310 (size: 0x20)
    FCachedRigElement PrimaryCachedSpace;                                             // 0x0330 (size: 0x20)
    FCachedRigElement SecondaryCachedSpace;                                           // 0x0350 (size: 0x20)
    bool bIsInitialized;                                                              // 0x0370 (size: 0x1)

}; // Size: 0x380

struct FRigUnit_AimItem_Target
{
    float Weight;                                                                     // 0x0000 (size: 0x4)
    FVector Axis;                                                                     // 0x0008 (size: 0x18)
    FVector Target;                                                                   // 0x0020 (size: 0x18)
    EControlRigVectorKind Kind;                                                       // 0x0038 (size: 0x1)
    FRigElementKey Space;                                                             // 0x003C (size: 0xC)

}; // Size: 0x48

struct FRigUnit_ApplyFK : public FRigUnitMutable
{
    FName Joint;                                                                      // 0x01F0 (size: 0x8)
    FTransform Transform;                                                             // 0x0200 (size: 0x60)
    FTransformFilter Filter;                                                          // 0x0260 (size: 0x9)
    EApplyTransformMode ApplyTransformMode;                                           // 0x0269 (size: 0x1)
    ETransformSpaceMode ApplyTransformSpace;                                          // 0x026A (size: 0x1)
    FTransform BaseTransform;                                                         // 0x0270 (size: 0x60)
    FName BaseJoint;                                                                  // 0x02D0 (size: 0x8)

}; // Size: 0x2E0

struct FRigUnit_BeginExecution : public FRigUnit
{
    FControlRigExecuteContext ExecuteContext;                                         // 0x0010 (size: 0x1E0)

}; // Size: 0x1F0

struct FRigUnit_BinaryFloatOp : public FRigUnit
{
    float Argument0;                                                                  // 0x0008 (size: 0x4)
    float Argument1;                                                                  // 0x000C (size: 0x4)
    float Result;                                                                     // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FRigUnit_BinaryQuaternionOp : public FRigUnit
{
    FQuat Argument0;                                                                  // 0x0010 (size: 0x20)
    FQuat Argument1;                                                                  // 0x0030 (size: 0x20)
    FQuat Result;                                                                     // 0x0050 (size: 0x20)

}; // Size: 0x70

struct FRigUnit_BinaryTransformOp : public FRigUnit
{
    FTransform Argument0;                                                             // 0x0010 (size: 0x60)
    FTransform Argument1;                                                             // 0x0070 (size: 0x60)
    FTransform Result;                                                                // 0x00D0 (size: 0x60)

}; // Size: 0x130

struct FRigUnit_BinaryVectorOp : public FRigUnit
{
    FVector Argument0;                                                                // 0x0008 (size: 0x18)
    FVector Argument1;                                                                // 0x0020 (size: 0x18)
    FVector Result;                                                                   // 0x0038 (size: 0x18)

}; // Size: 0x50

struct FRigUnit_BlendTransform : public FRigUnit
{
    FTransform Source;                                                                // 0x0010 (size: 0x60)
    TArray<FBlendTarget> Targets;                                                     // 0x0070 (size: 0x10)
    FTransform Result;                                                                // 0x0080 (size: 0x60)

}; // Size: 0xE0

struct FRigUnit_BoneHarmonics : public FRigUnit_HighlevelBaseMutable
{
    TArray<FRigUnit_BoneHarmonics_BoneTarget> Bones;                                  // 0x01F0 (size: 0x10)
    FVector WaveSpeed;                                                                // 0x0200 (size: 0x18)
    FVector WaveFrequency;                                                            // 0x0218 (size: 0x18)
    FVector WaveAmplitude;                                                            // 0x0230 (size: 0x18)
    FVector WaveOffset;                                                               // 0x0248 (size: 0x18)
    FVector WaveNoise;                                                                // 0x0260 (size: 0x18)
    ERigVMAnimEasingType WaveEase;                                                    // 0x0278 (size: 0x1)
    float WaveMinimum;                                                                // 0x027C (size: 0x4)
    float WaveMaximum;                                                                // 0x0280 (size: 0x4)
    EEulerRotationOrder RotationOrder;                                                // 0x0284 (size: 0x1)
    bool bPropagateToChildren;                                                        // 0x0285 (size: 0x1)
    FRigUnit_BoneHarmonics_WorkData WorkData;                                         // 0x0288 (size: 0x28)

}; // Size: 0x2B0

struct FRigUnit_BoneHarmonics_BoneTarget
{
    FName bone;                                                                       // 0x0000 (size: 0x8)
    float Ratio;                                                                      // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FRigUnit_BoneHarmonics_WorkData
{
    TArray<FCachedRigElement> CachedItems;                                            // 0x0000 (size: 0x10)
    FVector WaveTime;                                                                 // 0x0010 (size: 0x18)

}; // Size: 0x28

struct FRigUnit_BoneName : public FRigUnit
{
    FName bone;                                                                       // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FRigUnit_CCDIK : public FRigUnit_HighlevelBaseMutable
{
    FName StartBone;                                                                  // 0x01F0 (size: 0x8)
    FName EffectorBone;                                                               // 0x01F8 (size: 0x8)
    FTransform EffectorTransform;                                                     // 0x0200 (size: 0x60)
    float Precision;                                                                  // 0x0260 (size: 0x4)
    float Weight;                                                                     // 0x0264 (size: 0x4)
    int32 MaxIterations;                                                              // 0x0268 (size: 0x4)
    bool bStartFromTail;                                                              // 0x026C (size: 0x1)
    float BaseRotationLimit;                                                          // 0x0270 (size: 0x4)
    TArray<FRigUnit_CCDIK_RotationLimit> RotationLimits;                              // 0x0278 (size: 0x10)
    bool bPropagateToChildren;                                                        // 0x0288 (size: 0x1)
    FRigUnit_CCDIK_WorkData WorkData;                                                 // 0x0290 (size: 0x60)

}; // Size: 0x2F0

struct FRigUnit_CCDIKItemArray : public FRigUnit_HighlevelBaseMutable
{
    TArray<FRigElementKey> Items;                                                     // 0x01F0 (size: 0x10)
    FTransform EffectorTransform;                                                     // 0x0200 (size: 0x60)
    float Precision;                                                                  // 0x0260 (size: 0x4)
    float Weight;                                                                     // 0x0264 (size: 0x4)
    int32 MaxIterations;                                                              // 0x0268 (size: 0x4)
    bool bStartFromTail;                                                              // 0x026C (size: 0x1)
    float BaseRotationLimit;                                                          // 0x0270 (size: 0x4)
    TArray<FRigUnit_CCDIK_RotationLimitPerItem> RotationLimits;                       // 0x0278 (size: 0x10)
    bool bPropagateToChildren;                                                        // 0x0288 (size: 0x1)
    FRigUnit_CCDIK_WorkData WorkData;                                                 // 0x0290 (size: 0x60)

}; // Size: 0x2F0

struct FRigUnit_CCDIKPerItem : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKeyCollection Items;                                                   // 0x01F0 (size: 0x10)
    FTransform EffectorTransform;                                                     // 0x0200 (size: 0x60)
    float Precision;                                                                  // 0x0260 (size: 0x4)
    float Weight;                                                                     // 0x0264 (size: 0x4)
    int32 MaxIterations;                                                              // 0x0268 (size: 0x4)
    bool bStartFromTail;                                                              // 0x026C (size: 0x1)
    float BaseRotationLimit;                                                          // 0x0270 (size: 0x4)
    TArray<FRigUnit_CCDIK_RotationLimitPerItem> RotationLimits;                       // 0x0278 (size: 0x10)
    bool bPropagateToChildren;                                                        // 0x0288 (size: 0x1)
    FRigUnit_CCDIK_WorkData WorkData;                                                 // 0x0290 (size: 0x60)

}; // Size: 0x2F0

struct FRigUnit_CCDIK_RotationLimit
{
    FName bone;                                                                       // 0x0000 (size: 0x8)
    float Limit;                                                                      // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FRigUnit_CCDIK_RotationLimitPerItem
{
    FRigElementKey Item;                                                              // 0x0000 (size: 0xC)
    float Limit;                                                                      // 0x000C (size: 0x4)

}; // Size: 0x10

struct FRigUnit_CCDIK_WorkData
{
    TArray<FCCDIKChainLink> Chain;                                                    // 0x0000 (size: 0x10)
    TArray<FCachedRigElement> CachedItems;                                            // 0x0010 (size: 0x10)
    TArray<int32> RotationLimitIndex;                                                 // 0x0020 (size: 0x10)
    TArray<float> RotationLimitsPerItem;                                              // 0x0030 (size: 0x10)
    FCachedRigElement CachedEffector;                                                 // 0x0040 (size: 0x20)

}; // Size: 0x60

struct FRigUnit_ChainHarmonics : public FRigUnit_HighlevelBaseMutable
{
    FName ChainRoot;                                                                  // 0x01F0 (size: 0x8)
    FVector Speed;                                                                    // 0x01F8 (size: 0x18)
    FRigUnit_ChainHarmonics_Reach Reach;                                              // 0x0210 (size: 0x48)
    FRigUnit_ChainHarmonics_Wave Wave;                                                // 0x0258 (size: 0x78)
    FRuntimeFloatCurve WaveCurve;                                                     // 0x02D0 (size: 0x88)
    FRigUnit_ChainHarmonics_Pendulum Pendulum;                                        // 0x0358 (size: 0x58)
    bool bDrawDebug;                                                                  // 0x03B0 (size: 0x1)
    FTransform DrawWorldOffset;                                                       // 0x03C0 (size: 0x60)
    FRigUnit_ChainHarmonics_WorkData WorkData;                                        // 0x0420 (size: 0x98)

}; // Size: 0x4C0

struct FRigUnit_ChainHarmonicsPerItem : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKey ChainRoot;                                                         // 0x01F0 (size: 0xC)
    FVector Speed;                                                                    // 0x0200 (size: 0x18)
    FRigUnit_ChainHarmonics_Reach Reach;                                              // 0x0218 (size: 0x48)
    FRigUnit_ChainHarmonics_Wave Wave;                                                // 0x0260 (size: 0x78)
    FRuntimeFloatCurve WaveCurve;                                                     // 0x02D8 (size: 0x88)
    FRigUnit_ChainHarmonics_Pendulum Pendulum;                                        // 0x0360 (size: 0x58)
    bool bDrawDebug;                                                                  // 0x03B8 (size: 0x1)
    FTransform DrawWorldOffset;                                                       // 0x03C0 (size: 0x60)
    FRigUnit_ChainHarmonics_WorkData WorkData;                                        // 0x0420 (size: 0x98)

}; // Size: 0x4C0

struct FRigUnit_ChainHarmonics_Pendulum
{
    bool bEnabled;                                                                    // 0x0000 (size: 0x1)
    float PendulumStiffness;                                                          // 0x0004 (size: 0x4)
    FVector PendulumGravity;                                                          // 0x0008 (size: 0x18)
    float PendulumBlend;                                                              // 0x0020 (size: 0x4)
    float PendulumDrag;                                                               // 0x0024 (size: 0x4)
    float PendulumMinimum;                                                            // 0x0028 (size: 0x4)
    float PendulumMaximum;                                                            // 0x002C (size: 0x4)
    ERigVMAnimEasingType PendulumEase;                                                // 0x0030 (size: 0x1)
    FVector UnwindAxis;                                                               // 0x0038 (size: 0x18)
    float UnwindMinimum;                                                              // 0x0050 (size: 0x4)
    float UnwindMaximum;                                                              // 0x0054 (size: 0x4)

}; // Size: 0x58

struct FRigUnit_ChainHarmonics_Reach
{
    bool bEnabled;                                                                    // 0x0000 (size: 0x1)
    FVector ReachTarget;                                                              // 0x0008 (size: 0x18)
    FVector ReachAxis;                                                                // 0x0020 (size: 0x18)
    float ReachMinimum;                                                               // 0x0038 (size: 0x4)
    float ReachMaximum;                                                               // 0x003C (size: 0x4)
    ERigVMAnimEasingType ReachEase;                                                   // 0x0040 (size: 0x1)

}; // Size: 0x48

struct FRigUnit_ChainHarmonics_Wave
{
    bool bEnabled;                                                                    // 0x0000 (size: 0x1)
    FVector WaveFrequency;                                                            // 0x0008 (size: 0x18)
    FVector WaveAmplitude;                                                            // 0x0020 (size: 0x18)
    FVector WaveOffset;                                                               // 0x0038 (size: 0x18)
    FVector WaveNoise;                                                                // 0x0050 (size: 0x18)
    float WaveMinimum;                                                                // 0x0068 (size: 0x4)
    float WaveMaximum;                                                                // 0x006C (size: 0x4)
    ERigVMAnimEasingType WaveEase;                                                    // 0x0070 (size: 0x1)

}; // Size: 0x78

struct FRigUnit_ChainHarmonics_WorkData
{
    FVector Time;                                                                     // 0x0000 (size: 0x18)
    TArray<FCachedRigElement> Items;                                                  // 0x0018 (size: 0x10)
    TArray<float> Ratio;                                                              // 0x0028 (size: 0x10)
    TArray<FVector> LocalTip;                                                         // 0x0038 (size: 0x10)
    TArray<FVector> PendulumTip;                                                      // 0x0048 (size: 0x10)
    TArray<FVector> PendulumPosition;                                                 // 0x0058 (size: 0x10)
    TArray<FVector> PendulumVelocity;                                                 // 0x0068 (size: 0x10)
    TArray<FVector> HierarchyLine;                                                    // 0x0078 (size: 0x10)
    TArray<FVector> VelocityLines;                                                    // 0x0088 (size: 0x10)

}; // Size: 0x98

struct FRigUnit_Clamp_Float : public FRigUnit
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    float min;                                                                        // 0x000C (size: 0x4)
    float max;                                                                        // 0x0010 (size: 0x4)
    float Result;                                                                     // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FRigUnit_CollectionAddItem : public FRigUnit_CollectionBase
{
    FRigElementKeyCollection Collection;                                              // 0x0008 (size: 0x10)
    FRigElementKey Item;                                                              // 0x0018 (size: 0xC)
    FRigElementKeyCollection Result;                                                  // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FRigUnit_CollectionBase : public FRigUnit
{
}; // Size: 0x8

struct FRigUnit_CollectionBaseMutable : public FRigUnitMutable
{
}; // Size: 0x1F0

struct FRigUnit_CollectionChain : public FRigUnit_CollectionBase
{
    FRigElementKey FirstItem;                                                         // 0x0008 (size: 0xC)
    FRigElementKey LastItem;                                                          // 0x0014 (size: 0xC)
    bool Reverse;                                                                     // 0x0020 (size: 0x1)
    FRigElementKeyCollection Collection;                                              // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FRigUnit_CollectionChainArray : public FRigUnit_CollectionBase
{
    FRigElementKey FirstItem;                                                         // 0x0008 (size: 0xC)
    FRigElementKey LastItem;                                                          // 0x0014 (size: 0xC)
    bool Reverse;                                                                     // 0x0020 (size: 0x1)
    TArray<FRigElementKey> Items;                                                     // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FRigUnit_CollectionChildren : public FRigUnit_CollectionBase
{
    FRigElementKey Parent;                                                            // 0x0008 (size: 0xC)
    bool bIncludeParent;                                                              // 0x0014 (size: 0x1)
    bool bRecursive;                                                                  // 0x0015 (size: 0x1)
    ERigElementType TypeToSearch;                                                     // 0x0016 (size: 0x1)
    FRigElementKeyCollection Collection;                                              // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FRigUnit_CollectionChildrenArray : public FRigUnit_CollectionBase
{
    FRigElementKey Parent;                                                            // 0x0008 (size: 0xC)
    bool bIncludeParent;                                                              // 0x0014 (size: 0x1)
    bool bRecursive;                                                                  // 0x0015 (size: 0x1)
    bool bDefaultChildren;                                                            // 0x0016 (size: 0x1)
    ERigElementType TypeToSearch;                                                     // 0x0017 (size: 0x1)
    TArray<FRigElementKey> Items;                                                     // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FRigUnit_CollectionCount : public FRigUnit_CollectionBase
{
    FRigElementKeyCollection Collection;                                              // 0x0008 (size: 0x10)
    int32 Count;                                                                      // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FRigUnit_CollectionDifference : public FRigUnit_CollectionBase
{
    FRigElementKeyCollection A;                                                       // 0x0008 (size: 0x10)
    FRigElementKeyCollection B;                                                       // 0x0018 (size: 0x10)
    FRigElementKeyCollection Collection;                                              // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FRigUnit_CollectionGetAll : public FRigUnit_CollectionBase
{
    ERigElementType TypeToSearch;                                                     // 0x0008 (size: 0x1)
    TArray<FRigElementKey> Items;                                                     // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FRigUnit_CollectionGetItems : public FRigUnit_CollectionBase
{
    FRigElementKeyCollection Collection;                                              // 0x0008 (size: 0x10)
    TArray<FRigElementKey> Items;                                                     // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FRigUnit_CollectionGetParentIndices : public FRigUnit_CollectionBase
{
    FRigElementKeyCollection Collection;                                              // 0x0008 (size: 0x10)
    TArray<int32> ParentIndices;                                                      // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FRigUnit_CollectionGetParentIndicesItemArray : public FRigUnit_CollectionBase
{
    TArray<FRigElementKey> Items;                                                     // 0x0008 (size: 0x10)
    TArray<int32> ParentIndices;                                                      // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FRigUnit_CollectionIntersection : public FRigUnit_CollectionBase
{
    FRigElementKeyCollection A;                                                       // 0x0008 (size: 0x10)
    FRigElementKeyCollection B;                                                       // 0x0018 (size: 0x10)
    FRigElementKeyCollection Collection;                                              // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FRigUnit_CollectionItemAtIndex : public FRigUnit_CollectionBase
{
    FRigElementKeyCollection Collection;                                              // 0x0008 (size: 0x10)
    int32 Index;                                                                      // 0x0018 (size: 0x4)
    FRigElementKey Item;                                                              // 0x001C (size: 0xC)

}; // Size: 0x28

struct FRigUnit_CollectionItems : public FRigUnit_CollectionBase
{
    TArray<FRigElementKey> Items;                                                     // 0x0008 (size: 0x10)
    bool bAllowDuplicates;                                                            // 0x0018 (size: 0x1)
    FRigElementKeyCollection Collection;                                              // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FRigUnit_CollectionLoop : public FRigUnit_CollectionBaseMutable
{
    FName BlockToRun;                                                                 // 0x01F0 (size: 0x8)
    FRigElementKeyCollection Collection;                                              // 0x01F8 (size: 0x10)
    FRigElementKey Item;                                                              // 0x0208 (size: 0xC)
    int32 Index;                                                                      // 0x0214 (size: 0x4)
    int32 Count;                                                                      // 0x0218 (size: 0x4)
    float Ratio;                                                                      // 0x021C (size: 0x4)
    FControlRigExecuteContext Completed;                                              // 0x0220 (size: 0x1E0)

}; // Size: 0x400

struct FRigUnit_CollectionNameSearch : public FRigUnit_CollectionBase
{
    FName PartialName;                                                                // 0x0008 (size: 0x8)
    ERigElementType TypeToSearch;                                                     // 0x0010 (size: 0x1)
    FRigElementKeyCollection Collection;                                              // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FRigUnit_CollectionNameSearchArray : public FRigUnit_CollectionBase
{
    FName PartialName;                                                                // 0x0008 (size: 0x8)
    ERigElementType TypeToSearch;                                                     // 0x0010 (size: 0x1)
    TArray<FRigElementKey> Items;                                                     // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FRigUnit_CollectionReplaceItems : public FRigUnit_CollectionBase
{
    FRigElementKeyCollection Items;                                                   // 0x0008 (size: 0x10)
    FName Old;                                                                        // 0x0018 (size: 0x8)
    FName New;                                                                        // 0x0020 (size: 0x8)
    bool RemoveInvalidItems;                                                          // 0x0028 (size: 0x1)
    bool bAllowDuplicates;                                                            // 0x0029 (size: 0x1)
    FRigElementKeyCollection Collection;                                              // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FRigUnit_CollectionReplaceItemsArray : public FRigUnit_CollectionBase
{
    TArray<FRigElementKey> Items;                                                     // 0x0008 (size: 0x10)
    FName Old;                                                                        // 0x0018 (size: 0x8)
    FName New;                                                                        // 0x0020 (size: 0x8)
    bool RemoveInvalidItems;                                                          // 0x0028 (size: 0x1)
    bool bAllowDuplicates;                                                            // 0x0029 (size: 0x1)
    TArray<FRigElementKey> Result;                                                    // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FRigUnit_CollectionReverse : public FRigUnit_CollectionBase
{
    FRigElementKeyCollection Collection;                                              // 0x0008 (size: 0x10)
    FRigElementKeyCollection Reversed;                                                // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FRigUnit_CollectionUnion : public FRigUnit_CollectionBase
{
    FRigElementKeyCollection A;                                                       // 0x0008 (size: 0x10)
    FRigElementKeyCollection B;                                                       // 0x0018 (size: 0x10)
    bool bAllowDuplicates;                                                            // 0x0028 (size: 0x1)
    FRigElementKeyCollection Collection;                                              // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FRigUnit_ConnectorExecution : public FRigUnit
{
    FControlRigExecuteContext ExecuteContext;                                         // 0x0010 (size: 0x1E0)

}; // Size: 0x1F0

struct FRigUnit_Control : public FRigUnit
{
    FEulerTransform Transform;                                                        // 0x0008 (size: 0x48)
    FTransform base;                                                                  // 0x0050 (size: 0x60)
    FTransform InitTransform;                                                         // 0x00B0 (size: 0x60)
    FTransform Result;                                                                // 0x0110 (size: 0x60)
    FTransformFilter Filter;                                                          // 0x0170 (size: 0x9)
    bool bIsInitialized;                                                              // 0x0179 (size: 0x1)

}; // Size: 0x180

struct FRigUnit_ControlName : public FRigUnit
{
    FName Control;                                                                    // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FRigUnit_Control_StaticMesh : public FRigUnit_Control
{
    FTransform MeshTransform;                                                         // 0x0180 (size: 0x60)

}; // Size: 0x1E0

struct FRigUnit_ConvertEulerTransform : public FRigUnit
{
    FEulerTransform Input;                                                            // 0x0008 (size: 0x48)
    FTransform Result;                                                                // 0x0050 (size: 0x60)

}; // Size: 0xB0

struct FRigUnit_ConvertQuaternion : public FRigUnit
{
    FQuat Input;                                                                      // 0x0010 (size: 0x20)
    FRotator Result;                                                                  // 0x0030 (size: 0x18)

}; // Size: 0x50

struct FRigUnit_ConvertQuaternionToVector : public FRigUnit
{
    FQuat Input;                                                                      // 0x0010 (size: 0x20)
    FVector Result;                                                                   // 0x0030 (size: 0x18)

}; // Size: 0x50

struct FRigUnit_ConvertRotation : public FRigUnit
{
    FRotator Input;                                                                   // 0x0008 (size: 0x18)
    FQuat Result;                                                                     // 0x0020 (size: 0x20)

}; // Size: 0x40

struct FRigUnit_ConvertRotationToVector : public FRigUnit
{
    FRotator Input;                                                                   // 0x0008 (size: 0x18)
    FVector Result;                                                                   // 0x0020 (size: 0x18)

}; // Size: 0x38

struct FRigUnit_ConvertTransform : public FRigUnit
{
    FTransform Input;                                                                 // 0x0010 (size: 0x60)
    FEulerTransform Result;                                                           // 0x0070 (size: 0x48)

}; // Size: 0xC0

struct FRigUnit_ConvertVectorRotation : public FRigUnit_ConvertRotation
{
}; // Size: 0x40

struct FRigUnit_ConvertVectorToQuaternion : public FRigUnit
{
    FVector Input;                                                                    // 0x0008 (size: 0x18)
    FQuat Result;                                                                     // 0x0020 (size: 0x20)

}; // Size: 0x40

struct FRigUnit_ConvertVectorToRotation : public FRigUnit
{
    FVector Input;                                                                    // 0x0008 (size: 0x18)
    FRotator Result;                                                                  // 0x0020 (size: 0x18)

}; // Size: 0x38

struct FRigUnit_CurveExists : public FRigUnit
{
    FName Curve;                                                                      // 0x0008 (size: 0x8)
    bool Exists;                                                                      // 0x0010 (size: 0x1)
    FCachedRigElement CachedCurveIndex;                                               // 0x0018 (size: 0x20)

}; // Size: 0x38

struct FRigUnit_DebugArc : public FRigUnit_DebugBaseMutable
{
    FTransform Transform;                                                             // 0x01F0 (size: 0x60)
    FLinearColor Color;                                                               // 0x0250 (size: 0x10)
    float Radius;                                                                     // 0x0260 (size: 0x4)
    float MinimumDegrees;                                                             // 0x0264 (size: 0x4)
    float MaximumDegrees;                                                             // 0x0268 (size: 0x4)
    float Thickness;                                                                  // 0x026C (size: 0x4)
    int32 Detail;                                                                     // 0x0270 (size: 0x4)
    FName Space;                                                                      // 0x0274 (size: 0x8)
    FTransform WorldOffset;                                                           // 0x0280 (size: 0x60)
    bool bEnabled;                                                                    // 0x02E0 (size: 0x1)

}; // Size: 0x2F0

struct FRigUnit_DebugArcItemSpace : public FRigUnit_DebugBaseMutable
{
    FTransform Transform;                                                             // 0x01F0 (size: 0x60)
    FLinearColor Color;                                                               // 0x0250 (size: 0x10)
    float Radius;                                                                     // 0x0260 (size: 0x4)
    float MinimumDegrees;                                                             // 0x0264 (size: 0x4)
    float MaximumDegrees;                                                             // 0x0268 (size: 0x4)
    float Thickness;                                                                  // 0x026C (size: 0x4)
    int32 Detail;                                                                     // 0x0270 (size: 0x4)
    FRigElementKey Space;                                                             // 0x0274 (size: 0xC)
    FTransform WorldOffset;                                                           // 0x0280 (size: 0x60)
    bool bEnabled;                                                                    // 0x02E0 (size: 0x1)

}; // Size: 0x2F0

struct FRigUnit_DebugBase : public FRigUnit
{
}; // Size: 0x8

struct FRigUnit_DebugBaseMutable : public FRigUnitMutable
{
}; // Size: 0x1F0

struct FRigUnit_DebugBezier : public FRigVMFunction_DebugBaseMutable
{
    FRigVMFourPointBezier Bezier;                                                     // 0x0120 (size: 0x60)
    float MinimumU;                                                                   // 0x0180 (size: 0x4)
    float MaximumU;                                                                   // 0x0184 (size: 0x4)
    FLinearColor Color;                                                               // 0x0188 (size: 0x10)
    float Thickness;                                                                  // 0x0198 (size: 0x4)
    int32 Detail;                                                                     // 0x019C (size: 0x4)
    FName Space;                                                                      // 0x01A0 (size: 0x8)
    FTransform WorldOffset;                                                           // 0x01B0 (size: 0x60)
    bool bEnabled;                                                                    // 0x0210 (size: 0x1)

}; // Size: 0x220

struct FRigUnit_DebugBezierItemSpace : public FRigVMFunction_DebugBaseMutable
{
    FRigVMFourPointBezier Bezier;                                                     // 0x0120 (size: 0x60)
    float MinimumU;                                                                   // 0x0180 (size: 0x4)
    float MaximumU;                                                                   // 0x0184 (size: 0x4)
    FLinearColor Color;                                                               // 0x0188 (size: 0x10)
    float Thickness;                                                                  // 0x0198 (size: 0x4)
    int32 Detail;                                                                     // 0x019C (size: 0x4)
    FRigElementKey Space;                                                             // 0x01A0 (size: 0xC)
    FTransform WorldOffset;                                                           // 0x01B0 (size: 0x60)
    bool bEnabled;                                                                    // 0x0210 (size: 0x1)

}; // Size: 0x220

struct FRigUnit_DebugHierarchy : public FRigVMFunction_DebugBase
{
    FControlRigExecuteContext ExecuteContext;                                         // 0x0010 (size: 0x1E0)
    TArray<FRigElementKey> Items;                                                     // 0x01F0 (size: 0x10)
    float scale;                                                                      // 0x0200 (size: 0x4)
    FLinearColor Color;                                                               // 0x0204 (size: 0x10)
    float Thickness;                                                                  // 0x0214 (size: 0x4)
    FTransform WorldOffset;                                                           // 0x0220 (size: 0x60)
    bool bEnabled;                                                                    // 0x0280 (size: 0x1)

}; // Size: 0x290

struct FRigUnit_DebugLine : public FRigUnit_DebugBaseMutable
{
    FVector A;                                                                        // 0x01F0 (size: 0x18)
    FVector B;                                                                        // 0x0208 (size: 0x18)
    FLinearColor Color;                                                               // 0x0220 (size: 0x10)
    float Thickness;                                                                  // 0x0230 (size: 0x4)
    FName Space;                                                                      // 0x0234 (size: 0x8)
    FTransform WorldOffset;                                                           // 0x0240 (size: 0x60)
    bool bEnabled;                                                                    // 0x02A0 (size: 0x1)

}; // Size: 0x2B0

struct FRigUnit_DebugLineItemSpace : public FRigUnit_DebugBaseMutable
{
    FVector A;                                                                        // 0x01F0 (size: 0x18)
    FVector B;                                                                        // 0x0208 (size: 0x18)
    FLinearColor Color;                                                               // 0x0220 (size: 0x10)
    float Thickness;                                                                  // 0x0230 (size: 0x4)
    FRigElementKey Space;                                                             // 0x0234 (size: 0xC)
    FTransform WorldOffset;                                                           // 0x0240 (size: 0x60)
    bool bEnabled;                                                                    // 0x02A0 (size: 0x1)

}; // Size: 0x2B0

struct FRigUnit_DebugLineStrip : public FRigUnit_DebugBaseMutable
{
    TArray<FVector> Points;                                                           // 0x01F0 (size: 0x10)
    FLinearColor Color;                                                               // 0x0200 (size: 0x10)
    float Thickness;                                                                  // 0x0210 (size: 0x4)
    FName Space;                                                                      // 0x0214 (size: 0x8)
    FTransform WorldOffset;                                                           // 0x0220 (size: 0x60)
    bool bEnabled;                                                                    // 0x0280 (size: 0x1)

}; // Size: 0x290

struct FRigUnit_DebugLineStripItemSpace : public FRigUnit_DebugBaseMutable
{
    TArray<FVector> Points;                                                           // 0x01F0 (size: 0x10)
    FLinearColor Color;                                                               // 0x0200 (size: 0x10)
    float Thickness;                                                                  // 0x0210 (size: 0x4)
    FRigElementKey Space;                                                             // 0x0214 (size: 0xC)
    FTransform WorldOffset;                                                           // 0x0220 (size: 0x60)
    bool bEnabled;                                                                    // 0x0280 (size: 0x1)

}; // Size: 0x290

struct FRigUnit_DebugPose : public FRigVMFunction_DebugBase
{
    FControlRigExecuteContext ExecuteContext;                                         // 0x0010 (size: 0x1E0)
    FRigPose Pose;                                                                    // 0x01F0 (size: 0x70)
    TArray<FRigElementKey> Items;                                                     // 0x0260 (size: 0x10)
    float scale;                                                                      // 0x0270 (size: 0x4)
    FLinearColor Color;                                                               // 0x0274 (size: 0x10)
    float Thickness;                                                                  // 0x0284 (size: 0x4)
    FTransform WorldOffset;                                                           // 0x0290 (size: 0x60)
    bool bEnabled;                                                                    // 0x02F0 (size: 0x1)

}; // Size: 0x300

struct FRigUnit_DebugRectangle : public FRigUnit_DebugBaseMutable
{
    FTransform Transform;                                                             // 0x01F0 (size: 0x60)
    FLinearColor Color;                                                               // 0x0250 (size: 0x10)
    float scale;                                                                      // 0x0260 (size: 0x4)
    float Thickness;                                                                  // 0x0264 (size: 0x4)
    FName Space;                                                                      // 0x0268 (size: 0x8)
    FTransform WorldOffset;                                                           // 0x0270 (size: 0x60)
    bool bEnabled;                                                                    // 0x02D0 (size: 0x1)

}; // Size: 0x2E0

struct FRigUnit_DebugRectangleItemSpace : public FRigUnit_DebugBaseMutable
{
    FTransform Transform;                                                             // 0x01F0 (size: 0x60)
    FLinearColor Color;                                                               // 0x0250 (size: 0x10)
    float scale;                                                                      // 0x0260 (size: 0x4)
    float Thickness;                                                                  // 0x0264 (size: 0x4)
    FRigElementKey Space;                                                             // 0x0268 (size: 0xC)
    FTransform WorldOffset;                                                           // 0x0280 (size: 0x60)
    bool bEnabled;                                                                    // 0x02E0 (size: 0x1)

}; // Size: 0x2F0

struct FRigUnit_DebugTransform : public FRigUnit_DebugBase
{
    FTransform Transform;                                                             // 0x0010 (size: 0x60)
    ERigUnitDebugTransformMode Mode;                                                  // 0x0070 (size: 0x1)
    FLinearColor Color;                                                               // 0x0074 (size: 0x10)
    float Thickness;                                                                  // 0x0084 (size: 0x4)
    float scale;                                                                      // 0x0088 (size: 0x4)
    FName Space;                                                                      // 0x008C (size: 0x8)
    FTransform WorldOffset;                                                           // 0x00A0 (size: 0x60)
    bool bEnabled;                                                                    // 0x0100 (size: 0x1)

}; // Size: 0x110

struct FRigUnit_DebugTransformArrayMutable : public FRigUnit_DebugBaseMutable
{
    TArray<FTransform> Transforms;                                                    // 0x01F0 (size: 0x10)
    ERigUnitDebugTransformMode Mode;                                                  // 0x0200 (size: 0x1)
    FLinearColor Color;                                                               // 0x0204 (size: 0x10)
    float Thickness;                                                                  // 0x0214 (size: 0x4)
    float scale;                                                                      // 0x0218 (size: 0x4)
    FName Space;                                                                      // 0x021C (size: 0x8)
    FTransform WorldOffset;                                                           // 0x0230 (size: 0x60)
    bool bEnabled;                                                                    // 0x0290 (size: 0x1)
    FRigUnit_DebugTransformArrayMutable_WorkData WorkData;                            // 0x0298 (size: 0x10)

}; // Size: 0x2B0

struct FRigUnit_DebugTransformArrayMutableItemSpace : public FRigUnit_DebugBaseMutable
{
    TArray<FTransform> Transforms;                                                    // 0x01F0 (size: 0x10)
    TArray<int32> ParentIndices;                                                      // 0x0200 (size: 0x10)
    ERigUnitDebugTransformMode Mode;                                                  // 0x0210 (size: 0x1)
    FLinearColor Color;                                                               // 0x0214 (size: 0x10)
    float Thickness;                                                                  // 0x0224 (size: 0x4)
    float scale;                                                                      // 0x0228 (size: 0x4)
    FRigElementKey Space;                                                             // 0x022C (size: 0xC)
    FTransform WorldOffset;                                                           // 0x0240 (size: 0x60)
    bool bEnabled;                                                                    // 0x02A0 (size: 0x1)

}; // Size: 0x2B0

struct FRigUnit_DebugTransformArrayMutable_WorkData
{
    TArray<FTransform> DrawTransforms;                                                // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FRigUnit_DebugTransformMutable : public FRigUnit_DebugBaseMutable
{
    FTransform Transform;                                                             // 0x01F0 (size: 0x60)
    ERigUnitDebugTransformMode Mode;                                                  // 0x0250 (size: 0x1)
    FLinearColor Color;                                                               // 0x0254 (size: 0x10)
    float Thickness;                                                                  // 0x0264 (size: 0x4)
    float scale;                                                                      // 0x0268 (size: 0x4)
    FName Space;                                                                      // 0x026C (size: 0x8)
    FTransform WorldOffset;                                                           // 0x0280 (size: 0x60)
    bool bEnabled;                                                                    // 0x02E0 (size: 0x1)

}; // Size: 0x2F0

struct FRigUnit_DebugTransformMutableItemSpace : public FRigUnit_DebugBaseMutable
{
    FTransform Transform;                                                             // 0x01F0 (size: 0x60)
    ERigUnitDebugTransformMode Mode;                                                  // 0x0250 (size: 0x1)
    FLinearColor Color;                                                               // 0x0254 (size: 0x10)
    float Thickness;                                                                  // 0x0264 (size: 0x4)
    float scale;                                                                      // 0x0268 (size: 0x4)
    FRigElementKey Space;                                                             // 0x026C (size: 0xC)
    FTransform WorldOffset;                                                           // 0x0280 (size: 0x60)
    bool bEnabled;                                                                    // 0x02E0 (size: 0x1)

}; // Size: 0x2F0

struct FRigUnit_DiscardMatches : public FRigUnitMutable
{
    TArray<FRigElementKey> Excluded;                                                  // 0x01F0 (size: 0x10)
    FString Message;                                                                  // 0x0200 (size: 0x10)

}; // Size: 0x210

struct FRigUnit_Distance_VectorVector : public FRigUnit
{
    FVector Argument0;                                                                // 0x0008 (size: 0x18)
    FVector Argument1;                                                                // 0x0020 (size: 0x18)
    float Result;                                                                     // 0x0038 (size: 0x4)

}; // Size: 0x40

struct FRigUnit_DistributeRotation : public FRigUnit_HighlevelBaseMutable
{
    FName StartBone;                                                                  // 0x01F0 (size: 0x8)
    FName EndBone;                                                                    // 0x01F8 (size: 0x8)
    TArray<FRigUnit_DistributeRotation_Rotation> Rotations;                           // 0x0200 (size: 0x10)
    ERigVMAnimEasingType RotationEaseType;                                            // 0x0210 (size: 0x1)
    float Weight;                                                                     // 0x0214 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x0218 (size: 0x1)
    FRigUnit_DistributeRotation_WorkData WorkData;                                    // 0x0220 (size: 0x50)

}; // Size: 0x270

struct FRigUnit_DistributeRotationForCollection : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKeyCollection Items;                                                   // 0x01F0 (size: 0x10)
    TArray<FRigUnit_DistributeRotation_Rotation> Rotations;                           // 0x0200 (size: 0x10)
    ERigVMAnimEasingType RotationEaseType;                                            // 0x0210 (size: 0x1)
    float Weight;                                                                     // 0x0214 (size: 0x4)
    FRigUnit_DistributeRotation_WorkData WorkData;                                    // 0x0218 (size: 0x50)

}; // Size: 0x270

struct FRigUnit_DistributeRotationForItemArray : public FRigUnit_HighlevelBaseMutable
{
    TArray<FRigElementKey> Items;                                                     // 0x01F0 (size: 0x10)
    TArray<FRigUnit_DistributeRotation_Rotation> Rotations;                           // 0x0200 (size: 0x10)
    ERigVMAnimEasingType RotationEaseType;                                            // 0x0210 (size: 0x1)
    float Weight;                                                                     // 0x0214 (size: 0x4)
    FRigUnit_DistributeRotation_WorkData WorkData;                                    // 0x0218 (size: 0x50)

}; // Size: 0x270

struct FRigUnit_DistributeRotation_Rotation
{
    FQuat Rotation;                                                                   // 0x0000 (size: 0x20)
    float Ratio;                                                                      // 0x0020 (size: 0x4)

}; // Size: 0x30

struct FRigUnit_DistributeRotation_WorkData
{
    TArray<FCachedRigElement> CachedItems;                                            // 0x0000 (size: 0x10)
    TArray<int32> ItemRotationA;                                                      // 0x0010 (size: 0x10)
    TArray<int32> ItemRotationB;                                                      // 0x0020 (size: 0x10)
    TArray<float> ItemRotationT;                                                      // 0x0030 (size: 0x10)
    TArray<FTransform> ItemLocalTransforms;                                           // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FRigUnit_Divide_FloatFloat : public FRigUnit_BinaryFloatOp
{
}; // Size: 0x18

struct FRigUnit_Divide_VectorVector : public FRigUnit_BinaryVectorOp
{
}; // Size: 0x50

struct FRigUnit_DrawContainerGetInstruction : public FRigUnit
{
    FName InstructionName;                                                            // 0x0008 (size: 0x8)
    FLinearColor Color;                                                               // 0x0010 (size: 0x10)
    FTransform Transform;                                                             // 0x0020 (size: 0x60)

}; // Size: 0x80

struct FRigUnit_DrawContainerSetColor : public FRigUnitMutable
{
    FName InstructionName;                                                            // 0x01F0 (size: 0x8)
    FLinearColor Color;                                                               // 0x01F8 (size: 0x10)

}; // Size: 0x210

struct FRigUnit_DrawContainerSetThickness : public FRigUnitMutable
{
    FName InstructionName;                                                            // 0x01F0 (size: 0x8)
    float Thickness;                                                                  // 0x01F8 (size: 0x4)

}; // Size: 0x200

struct FRigUnit_DrawContainerSetTransform : public FRigUnitMutable
{
    FName InstructionName;                                                            // 0x01F0 (size: 0x8)
    FTransform Transform;                                                             // 0x0200 (size: 0x60)

}; // Size: 0x260

struct FRigUnit_DynamicHierarchyBase : public FRigUnit
{
}; // Size: 0x8

struct FRigUnit_DynamicHierarchyBaseMutable : public FRigUnitMutable
{
}; // Size: 0x1F0

struct FRigUnit_EndProfilingTimer : public FRigVMFunction_DebugBaseMutable
{
    int32 NumberOfMeasurements;                                                       // 0x0120 (size: 0x4)
    FString Prefix;                                                                   // 0x0128 (size: 0x10)
    float AccumulatedTime;                                                            // 0x0138 (size: 0x4)
    int32 MeasurementsLeft;                                                           // 0x013C (size: 0x4)
    bool bIsInitialized;                                                              // 0x0140 (size: 0x1)

}; // Size: 0x150

struct FRigUnit_FABRIK : public FRigUnit_HighlevelBaseMutable
{
    FName StartBone;                                                                  // 0x01F0 (size: 0x8)
    FName EffectorBone;                                                               // 0x01F8 (size: 0x8)
    FTransform EffectorTransform;                                                     // 0x0200 (size: 0x60)
    float Precision;                                                                  // 0x0260 (size: 0x4)
    float Weight;                                                                     // 0x0264 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x0268 (size: 0x1)
    int32 MaxIterations;                                                              // 0x026C (size: 0x4)
    FRigUnit_FABRIK_WorkData WorkData;                                                // 0x0270 (size: 0x40)
    bool bSetEffectorTransform;                                                       // 0x02B0 (size: 0x1)

}; // Size: 0x2C0

struct FRigUnit_FABRIKItemArray : public FRigUnit_HighlevelBaseMutable
{
    TArray<FRigElementKey> Items;                                                     // 0x01F0 (size: 0x10)
    FTransform EffectorTransform;                                                     // 0x0200 (size: 0x60)
    float Precision;                                                                  // 0x0260 (size: 0x4)
    float Weight;                                                                     // 0x0264 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x0268 (size: 0x1)
    int32 MaxIterations;                                                              // 0x026C (size: 0x4)
    FRigUnit_FABRIK_WorkData WorkData;                                                // 0x0270 (size: 0x40)
    bool bSetEffectorTransform;                                                       // 0x02B0 (size: 0x1)

}; // Size: 0x2C0

struct FRigUnit_FABRIKPerItem : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKeyCollection Items;                                                   // 0x01F0 (size: 0x10)
    FTransform EffectorTransform;                                                     // 0x0200 (size: 0x60)
    float Precision;                                                                  // 0x0260 (size: 0x4)
    float Weight;                                                                     // 0x0264 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x0268 (size: 0x1)
    int32 MaxIterations;                                                              // 0x026C (size: 0x4)
    FRigUnit_FABRIK_WorkData WorkData;                                                // 0x0270 (size: 0x40)
    bool bSetEffectorTransform;                                                       // 0x02B0 (size: 0x1)

}; // Size: 0x2C0

struct FRigUnit_FABRIK_WorkData
{
    TArray<FFABRIKChainLink> Chain;                                                   // 0x0000 (size: 0x10)
    TArray<FCachedRigElement> CachedItems;                                            // 0x0010 (size: 0x10)
    FCachedRigElement CachedEffector;                                                 // 0x0020 (size: 0x20)

}; // Size: 0x40

struct FRigUnit_FilterItemsByMetadataTags : public FRigUnit
{
    TArray<FRigElementKey> Items;                                                     // 0x0008 (size: 0x10)
    TArray<FName> Tags;                                                               // 0x0018 (size: 0x10)
    ERigMetaDataNameSpace NameSpace;                                                  // 0x0028 (size: 0x1)
    bool Inclusive;                                                                   // 0x0029 (size: 0x1)
    TArray<FRigElementKey> Result;                                                    // 0x0030 (size: 0x10)
    TArray<FCachedRigElement> CachedIndices;                                          // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FRigUnit_FindItemsWithMetadata : public FRigUnit
{
    FName Name;                                                                       // 0x0008 (size: 0x8)
    ERigMetadataType Type;                                                            // 0x0010 (size: 0x1)
    ERigMetaDataNameSpace NameSpace;                                                  // 0x0011 (size: 0x1)
    TArray<FRigElementKey> Items;                                                     // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FRigUnit_FindItemsWithMetadataTag : public FRigUnit
{
    FName Tag;                                                                        // 0x0008 (size: 0x8)
    ERigMetaDataNameSpace NameSpace;                                                  // 0x0010 (size: 0x1)
    TArray<FRigElementKey> Items;                                                     // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FRigUnit_FindItemsWithMetadataTagArray : public FRigUnit
{
    TArray<FName> Tags;                                                               // 0x0008 (size: 0x10)
    ERigMetaDataNameSpace NameSpace;                                                  // 0x0018 (size: 0x1)
    TArray<FRigElementKey> Items;                                                     // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FRigUnit_FitChainToCurve : public FRigUnit_HighlevelBaseMutable
{
    FName StartBone;                                                                  // 0x01F0 (size: 0x8)
    FName EndBone;                                                                    // 0x01F8 (size: 0x8)
    FRigVMFourPointBezier Bezier;                                                     // 0x0200 (size: 0x60)
    EControlRigCurveAlignment Alignment;                                              // 0x0260 (size: 0x1)
    float Minimum;                                                                    // 0x0264 (size: 0x4)
    float Maximum;                                                                    // 0x0268 (size: 0x4)
    int32 SamplingPrecision;                                                          // 0x026C (size: 0x4)
    FVector PrimaryAxis;                                                              // 0x0270 (size: 0x18)
    FVector SecondaryAxis;                                                            // 0x0288 (size: 0x18)
    FVector PoleVectorPosition;                                                       // 0x02A0 (size: 0x18)
    TArray<FRigUnit_FitChainToCurve_Rotation> Rotations;                              // 0x02B8 (size: 0x10)
    ERigVMAnimEasingType RotationEaseType;                                            // 0x02C8 (size: 0x1)
    float Weight;                                                                     // 0x02CC (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x02D0 (size: 0x1)
    FRigUnit_FitChainToCurve_DebugSettings DebugSettings;                             // 0x02E0 (size: 0x90)
    FRigUnit_FitChainToCurve_WorkData WorkData;                                       // 0x0370 (size: 0x98)

}; // Size: 0x410

struct FRigUnit_FitChainToCurveItemArray : public FRigUnit_HighlevelBaseMutable
{
    TArray<FRigElementKey> Items;                                                     // 0x01F0 (size: 0x10)
    FRigVMFourPointBezier Bezier;                                                     // 0x0200 (size: 0x60)
    EControlRigCurveAlignment Alignment;                                              // 0x0260 (size: 0x1)
    float Minimum;                                                                    // 0x0264 (size: 0x4)
    float Maximum;                                                                    // 0x0268 (size: 0x4)
    int32 SamplingPrecision;                                                          // 0x026C (size: 0x4)
    FVector PrimaryAxis;                                                              // 0x0270 (size: 0x18)
    FVector SecondaryAxis;                                                            // 0x0288 (size: 0x18)
    FVector PoleVectorPosition;                                                       // 0x02A0 (size: 0x18)
    TArray<FRigUnit_FitChainToCurve_Rotation> Rotations;                              // 0x02B8 (size: 0x10)
    ERigVMAnimEasingType RotationEaseType;                                            // 0x02C8 (size: 0x1)
    float Weight;                                                                     // 0x02CC (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x02D0 (size: 0x1)
    FRigUnit_FitChainToCurve_DebugSettings DebugSettings;                             // 0x02E0 (size: 0x90)
    FRigUnit_FitChainToCurve_WorkData WorkData;                                       // 0x0370 (size: 0x98)

}; // Size: 0x410

struct FRigUnit_FitChainToCurvePerItem : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKeyCollection Items;                                                   // 0x01F0 (size: 0x10)
    FRigVMFourPointBezier Bezier;                                                     // 0x0200 (size: 0x60)
    EControlRigCurveAlignment Alignment;                                              // 0x0260 (size: 0x1)
    float Minimum;                                                                    // 0x0264 (size: 0x4)
    float Maximum;                                                                    // 0x0268 (size: 0x4)
    int32 SamplingPrecision;                                                          // 0x026C (size: 0x4)
    FVector PrimaryAxis;                                                              // 0x0270 (size: 0x18)
    FVector SecondaryAxis;                                                            // 0x0288 (size: 0x18)
    FVector PoleVectorPosition;                                                       // 0x02A0 (size: 0x18)
    TArray<FRigUnit_FitChainToCurve_Rotation> Rotations;                              // 0x02B8 (size: 0x10)
    ERigVMAnimEasingType RotationEaseType;                                            // 0x02C8 (size: 0x1)
    float Weight;                                                                     // 0x02CC (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x02D0 (size: 0x1)
    FRigUnit_FitChainToCurve_DebugSettings DebugSettings;                             // 0x02E0 (size: 0x90)
    FRigUnit_FitChainToCurve_WorkData WorkData;                                       // 0x0370 (size: 0x98)

}; // Size: 0x410

struct FRigUnit_FitChainToCurve_DebugSettings
{
    bool bEnabled;                                                                    // 0x0000 (size: 0x1)
    float scale;                                                                      // 0x0004 (size: 0x4)
    FLinearColor CurveColor;                                                          // 0x0008 (size: 0x10)
    FLinearColor SegmentsColor;                                                       // 0x0018 (size: 0x10)
    FTransform WorldOffset;                                                           // 0x0030 (size: 0x60)

}; // Size: 0x90

struct FRigUnit_FitChainToCurve_Rotation
{
    FQuat Rotation;                                                                   // 0x0000 (size: 0x20)
    float Ratio;                                                                      // 0x0020 (size: 0x4)

}; // Size: 0x30

struct FRigUnit_FitChainToCurve_WorkData
{
    float ChainLength;                                                                // 0x0000 (size: 0x4)
    TArray<FVector> ItemPositions;                                                    // 0x0008 (size: 0x10)
    TArray<float> ItemSegments;                                                       // 0x0018 (size: 0x10)
    TArray<FVector> CurvePositions;                                                   // 0x0028 (size: 0x10)
    TArray<float> CurveSegments;                                                      // 0x0038 (size: 0x10)
    TArray<FCachedRigElement> CachedItems;                                            // 0x0048 (size: 0x10)
    TArray<int32> ItemRotationA;                                                      // 0x0058 (size: 0x10)
    TArray<int32> ItemRotationB;                                                      // 0x0068 (size: 0x10)
    TArray<float> ItemRotationT;                                                      // 0x0078 (size: 0x10)
    TArray<FTransform> ItemLocalTransforms;                                           // 0x0088 (size: 0x10)

}; // Size: 0x98

struct FRigUnit_GetAnimationChannelBase : public FRigUnit
{
    FName Control;                                                                    // 0x0008 (size: 0x8)
    FName Channel;                                                                    // 0x0010 (size: 0x8)
    bool bInitial;                                                                    // 0x0018 (size: 0x1)
    FRigElementKey CachedChannelKey;                                                  // 0x001C (size: 0xC)
    int32 CachedChannelHash;                                                          // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FRigUnit_GetAnimationChannelFromItemBase : public FRigUnit
{
    FRigElementKey Item;                                                              // 0x0008 (size: 0xC)
    bool bInitial;                                                                    // 0x0014 (size: 0x1)

}; // Size: 0x18

struct FRigUnit_GetBoneTransform : public FRigUnit
{
    FName bone;                                                                       // 0x0008 (size: 0x8)
    ERigVMTransformSpace Space;                                                       // 0x0010 (size: 0x1)
    FTransform Transform;                                                             // 0x0020 (size: 0x60)
    FCachedRigElement CachedBone;                                                     // 0x0080 (size: 0x20)
    bool bFirstUpdate;                                                                // 0x00A0 (size: 0x1)

}; // Size: 0xB0

struct FRigUnit_GetBoolAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
    bool Value;                                                                       // 0x0030 (size: 0x1)

}; // Size: 0x38

struct FRigUnit_GetBoolAnimationChannelFromItem : public FRigUnit_GetAnimationChannelFromItemBase
{
    bool Value;                                                                       // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FRigUnit_GetCandidates : public FRigUnit
{
    FRigElementKey Connector;                                                         // 0x0008 (size: 0xC)
    TArray<FRigElementKey> Candidates;                                                // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FRigUnit_GetControlBool : public FRigUnit
{
    FName Control;                                                                    // 0x0008 (size: 0x8)
    bool BoolValue;                                                                   // 0x0010 (size: 0x1)
    FCachedRigElement CachedControlIndex;                                             // 0x0018 (size: 0x20)

}; // Size: 0x38

struct FRigUnit_GetControlColor : public FRigUnit
{
    FName Control;                                                                    // 0x0008 (size: 0x8)
    FLinearColor Color;                                                               // 0x0010 (size: 0x10)
    FCachedRigElement CachedControlIndex;                                             // 0x0020 (size: 0x20)

}; // Size: 0x40

struct FRigUnit_GetControlDrivenList : public FRigUnit
{
    FName Control;                                                                    // 0x0008 (size: 0x8)
    TArray<FRigElementKey> Driven;                                                    // 0x0010 (size: 0x10)
    FCachedRigElement CachedControlIndex;                                             // 0x0020 (size: 0x20)

}; // Size: 0x40

struct FRigUnit_GetControlFloat : public FRigUnit
{
    FName Control;                                                                    // 0x0008 (size: 0x8)
    float FloatValue;                                                                 // 0x0010 (size: 0x4)
    float Minimum;                                                                    // 0x0014 (size: 0x4)
    float Maximum;                                                                    // 0x0018 (size: 0x4)
    FCachedRigElement CachedControlIndex;                                             // 0x0020 (size: 0x20)

}; // Size: 0x40

struct FRigUnit_GetControlInitialTransform : public FRigUnit
{
    FName Control;                                                                    // 0x0008 (size: 0x8)
    ERigVMTransformSpace Space;                                                       // 0x0010 (size: 0x1)
    FTransform Transform;                                                             // 0x0020 (size: 0x60)
    FCachedRigElement CachedControlIndex;                                             // 0x0080 (size: 0x20)

}; // Size: 0xA0

struct FRigUnit_GetControlInteger : public FRigUnit
{
    FName Control;                                                                    // 0x0008 (size: 0x8)
    int32 IntegerValue;                                                               // 0x0010 (size: 0x4)
    int32 Minimum;                                                                    // 0x0014 (size: 0x4)
    int32 Maximum;                                                                    // 0x0018 (size: 0x4)
    FCachedRigElement CachedControlIndex;                                             // 0x0020 (size: 0x20)

}; // Size: 0x40

struct FRigUnit_GetControlRotator : public FRigUnit
{
    FName Control;                                                                    // 0x0008 (size: 0x8)
    ERigVMTransformSpace Space;                                                       // 0x0010 (size: 0x1)
    FRotator Rotator;                                                                 // 0x0018 (size: 0x18)
    FRotator Minimum;                                                                 // 0x0030 (size: 0x18)
    FRotator Maximum;                                                                 // 0x0048 (size: 0x18)
    FCachedRigElement CachedControlIndex;                                             // 0x0060 (size: 0x20)

}; // Size: 0x80

struct FRigUnit_GetControlTransform : public FRigUnit
{
    FName Control;                                                                    // 0x0008 (size: 0x8)
    ERigVMTransformSpace Space;                                                       // 0x0010 (size: 0x1)
    FTransform Transform;                                                             // 0x0020 (size: 0x60)
    FTransform Minimum;                                                               // 0x0080 (size: 0x60)
    FTransform Maximum;                                                               // 0x00E0 (size: 0x60)
    FCachedRigElement CachedControlIndex;                                             // 0x0140 (size: 0x20)

}; // Size: 0x160

struct FRigUnit_GetControlVector : public FRigUnit
{
    FName Control;                                                                    // 0x0008 (size: 0x8)
    ERigVMTransformSpace Space;                                                       // 0x0010 (size: 0x1)
    FVector Vector;                                                                   // 0x0018 (size: 0x18)
    FVector Minimum;                                                                  // 0x0030 (size: 0x18)
    FVector Maximum;                                                                  // 0x0048 (size: 0x18)
    FCachedRigElement CachedControlIndex;                                             // 0x0060 (size: 0x20)

}; // Size: 0x80

struct FRigUnit_GetControlVector2D : public FRigUnit
{
    FName Control;                                                                    // 0x0008 (size: 0x8)
    FVector2D Vector;                                                                 // 0x0010 (size: 0x10)
    FVector2D Minimum;                                                                // 0x0020 (size: 0x10)
    FVector2D Maximum;                                                                // 0x0030 (size: 0x10)
    FCachedRigElement CachedControlIndex;                                             // 0x0040 (size: 0x20)

}; // Size: 0x60

struct FRigUnit_GetControlVisibility : public FRigUnit
{
    FRigElementKey Item;                                                              // 0x0008 (size: 0xC)
    bool bVisible;                                                                    // 0x0014 (size: 0x1)
    FCachedRigElement CachedControlIndex;                                             // 0x0018 (size: 0x20)

}; // Size: 0x38

struct FRigUnit_GetCurrentNameSpace : public FRigUnit_RigModulesBase
{
    FString NameSpace;                                                                // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FRigUnit_GetCurveValue : public FRigUnit
{
    FName Curve;                                                                      // 0x0008 (size: 0x8)
    bool Valid;                                                                       // 0x0010 (size: 0x1)
    float Value;                                                                      // 0x0014 (size: 0x4)
    FCachedRigElement CachedCurveIndex;                                               // 0x0018 (size: 0x20)

}; // Size: 0x38

struct FRigUnit_GetFloatAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
    float Value;                                                                      // 0x0030 (size: 0x4)

}; // Size: 0x38

struct FRigUnit_GetFloatAnimationChannelFromItem : public FRigUnit_GetAnimationChannelFromItemBase
{
    float Value;                                                                      // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FRigUnit_GetInitialBoneTransform : public FRigUnit
{
    FName bone;                                                                       // 0x0008 (size: 0x8)
    ERigVMTransformSpace Space;                                                       // 0x0010 (size: 0x1)
    FTransform Transform;                                                             // 0x0020 (size: 0x60)
    FCachedRigElement CachedBone;                                                     // 0x0080 (size: 0x20)

}; // Size: 0xA0

struct FRigUnit_GetIntAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
    int32 Value;                                                                      // 0x0030 (size: 0x4)

}; // Size: 0x38

struct FRigUnit_GetIntAnimationChannelFromItem : public FRigUnit_GetAnimationChannelFromItemBase
{
    int32 Value;                                                                      // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FRigUnit_GetItemNameSpace : public FRigUnit_RigModulesBase
{
    FRigElementKey Item;                                                              // 0x0008 (size: 0xC)
    bool HasNameSpace;                                                                // 0x0014 (size: 0x1)
    FString NameSpace;                                                                // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FRigUnit_GetItemShortName : public FRigUnit_RigModulesBase
{
    FRigElementKey Item;                                                              // 0x0008 (size: 0xC)
    FName ShortName;                                                                  // 0x0014 (size: 0x8)

}; // Size: 0x20

struct FRigUnit_GetItemsInNameSpace : public FRigUnit_RigModulesBase
{
    ERigElementType TypeToSearch;                                                     // 0x0008 (size: 0x1)
    TArray<FRigElementKey> Items;                                                     // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FRigUnit_GetJointTransform : public FRigUnitMutable
{
    FName Joint;                                                                      // 0x01F0 (size: 0x8)
    ETransformGetterType Type;                                                        // 0x01F8 (size: 0x1)
    ETransformSpaceMode TransformSpace;                                               // 0x01F9 (size: 0x1)
    FTransform BaseTransform;                                                         // 0x0200 (size: 0x60)
    FName BaseJoint;                                                                  // 0x0260 (size: 0x8)
    FTransform Output;                                                                // 0x0270 (size: 0x60)

}; // Size: 0x2D0

struct FRigUnit_GetMetadataTags : public FRigUnit
{
    FRigElementKey Item;                                                              // 0x0008 (size: 0xC)
    TArray<FName> Tags;                                                               // 0x0018 (size: 0x10)
    FCachedRigElement CachedIndex;                                                    // 0x0028 (size: 0x20)

}; // Size: 0x48

struct FRigUnit_GetRelativeBoneTransform : public FRigUnit
{
    FName bone;                                                                       // 0x0008 (size: 0x8)
    FName Space;                                                                      // 0x0010 (size: 0x8)
    FTransform Transform;                                                             // 0x0020 (size: 0x60)
    FCachedRigElement CachedBone;                                                     // 0x0080 (size: 0x20)
    FCachedRigElement CachedSpace;                                                    // 0x00A0 (size: 0x20)

}; // Size: 0xC0

struct FRigUnit_GetRelativeTransform : public FRigUnit_BinaryTransformOp
{
}; // Size: 0x130

struct FRigUnit_GetRelativeTransformForItem : public FRigUnit
{
    FRigElementKey Child;                                                             // 0x0008 (size: 0xC)
    bool bChildInitial;                                                               // 0x0014 (size: 0x1)
    FRigElementKey Parent;                                                            // 0x0018 (size: 0xC)
    bool bParentInitial;                                                              // 0x0024 (size: 0x1)
    FTransform RelativeTransform;                                                     // 0x0030 (size: 0x60)
    FCachedRigElement CachedChild;                                                    // 0x0090 (size: 0x20)
    FCachedRigElement CachedParent;                                                   // 0x00B0 (size: 0x20)

}; // Size: 0xD0

struct FRigUnit_GetRotatorAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
    FRotator Value;                                                                   // 0x0030 (size: 0x18)

}; // Size: 0x48

struct FRigUnit_GetRotatorAnimationChannelFromItem : public FRigUnit_GetAnimationChannelFromItemBase
{
    FRotator Value;                                                                   // 0x0018 (size: 0x18)

}; // Size: 0x30

struct FRigUnit_GetShapeTransform : public FRigUnit
{
    FName Control;                                                                    // 0x0008 (size: 0x8)
    FTransform Transform;                                                             // 0x0010 (size: 0x60)
    FCachedRigElement CachedControlIndex;                                             // 0x0070 (size: 0x20)

}; // Size: 0x90

struct FRigUnit_GetSpaceTransform : public FRigUnit
{
    FName Space;                                                                      // 0x0008 (size: 0x8)
    ERigVMTransformSpace SpaceType;                                                   // 0x0010 (size: 0x1)
    FTransform Transform;                                                             // 0x0020 (size: 0x60)
    FCachedRigElement CachedSpaceIndex;                                               // 0x0080 (size: 0x20)

}; // Size: 0xA0

struct FRigUnit_GetTransform : public FRigUnit
{
    FRigElementKey Item;                                                              // 0x0008 (size: 0xC)
    ERigVMTransformSpace Space;                                                       // 0x0014 (size: 0x1)
    bool bInitial;                                                                    // 0x0015 (size: 0x1)
    FTransform Transform;                                                             // 0x0020 (size: 0x60)
    FCachedRigElement CachedIndex;                                                    // 0x0080 (size: 0x20)

}; // Size: 0xA0

struct FRigUnit_GetTransformAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
    FTransform Value;                                                                 // 0x0030 (size: 0x60)

}; // Size: 0x90

struct FRigUnit_GetTransformAnimationChannelFromItem : public FRigUnit_GetAnimationChannelFromItemBase
{
    FTransform Value;                                                                 // 0x0020 (size: 0x60)

}; // Size: 0x80

struct FRigUnit_GetTransformArray : public FRigUnit
{
    FRigElementKeyCollection Items;                                                   // 0x0008 (size: 0x10)
    ERigVMTransformSpace Space;                                                       // 0x0018 (size: 0x1)
    bool bInitial;                                                                    // 0x0019 (size: 0x1)
    TArray<FTransform> Transforms;                                                    // 0x0020 (size: 0x10)
    TArray<FCachedRigElement> CachedIndex;                                            // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FRigUnit_GetTransformItemArray : public FRigUnit
{
    TArray<FRigElementKey> Items;                                                     // 0x0008 (size: 0x10)
    ERigVMTransformSpace Space;                                                       // 0x0018 (size: 0x1)
    bool bInitial;                                                                    // 0x0019 (size: 0x1)
    TArray<FTransform> Transforms;                                                    // 0x0020 (size: 0x10)
    TArray<FCachedRigElement> CachedIndex;                                            // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FRigUnit_GetVector2DAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
    FVector2D Value;                                                                  // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FRigUnit_GetVector2DAnimationChannelFromItem : public FRigUnit_GetAnimationChannelFromItemBase
{
    FVector2D Value;                                                                  // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FRigUnit_GetVectorAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
    FVector Value;                                                                    // 0x0030 (size: 0x18)

}; // Size: 0x48

struct FRigUnit_GetVectorAnimationChannelFromItem : public FRigUnit_GetAnimationChannelFromItemBase
{
    FVector Value;                                                                    // 0x0018 (size: 0x18)

}; // Size: 0x30

struct FRigUnit_Harmonics_TargetItem
{
    FRigElementKey Item;                                                              // 0x0000 (size: 0xC)
    float Ratio;                                                                      // 0x000C (size: 0x4)

}; // Size: 0x10

struct FRigUnit_HasMetadata : public FRigUnit
{
    FRigElementKey Item;                                                              // 0x0008 (size: 0xC)
    FName Name;                                                                       // 0x0014 (size: 0x8)
    ERigMetadataType Type;                                                            // 0x001C (size: 0x1)
    ERigMetaDataNameSpace NameSpace;                                                  // 0x001D (size: 0x1)
    bool Found;                                                                       // 0x001E (size: 0x1)
    FCachedRigElement CachedIndex;                                                    // 0x0020 (size: 0x20)

}; // Size: 0x40

struct FRigUnit_HasMetadataTag : public FRigUnit
{
    FRigElementKey Item;                                                              // 0x0008 (size: 0xC)
    FName Tag;                                                                        // 0x0014 (size: 0x8)
    ERigMetaDataNameSpace NameSpace;                                                  // 0x001C (size: 0x1)
    bool Found;                                                                       // 0x001D (size: 0x1)
    FCachedRigElement CachedIndex;                                                    // 0x0020 (size: 0x20)

}; // Size: 0x40

struct FRigUnit_HasMetadataTagArray : public FRigUnit
{
    FRigElementKey Item;                                                              // 0x0008 (size: 0xC)
    TArray<FName> Tags;                                                               // 0x0018 (size: 0x10)
    ERigMetaDataNameSpace NameSpace;                                                  // 0x0028 (size: 0x1)
    bool Found;                                                                       // 0x0029 (size: 0x1)
    FCachedRigElement CachedIndex;                                                    // 0x0030 (size: 0x20)

}; // Size: 0x50

struct FRigUnit_HierarchyAddAnimationChannel2DLimitSettings : public FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings
{
    FRigControlLimitEnabled X;                                                        // 0x0000 (size: 0x2)
    FRigControlLimitEnabled Y;                                                        // 0x0002 (size: 0x2)

}; // Size: 0x4

struct FRigUnit_HierarchyAddAnimationChannelBool : public FRigUnit_HierarchyAddElement
{
    bool InitialValue;                                                                // 0x0210 (size: 0x1)
    bool MinimumValue;                                                                // 0x0211 (size: 0x1)
    bool MaximumValue;                                                                // 0x0212 (size: 0x1)
    FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings LimitsEnabled;            // 0x0213 (size: 0x1)

}; // Size: 0x220

struct FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings
{
}; // Size: 0x1

struct FRigUnit_HierarchyAddAnimationChannelFloat : public FRigUnit_HierarchyAddElement
{
    float InitialValue;                                                               // 0x0210 (size: 0x4)
    float MinimumValue;                                                               // 0x0214 (size: 0x4)
    float MaximumValue;                                                               // 0x0218 (size: 0x4)
    FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings LimitsEnabled;           // 0x021C (size: 0x2)

}; // Size: 0x220

struct FRigUnit_HierarchyAddAnimationChannelInteger : public FRigUnit_HierarchyAddElement
{
    int32 InitialValue;                                                               // 0x0210 (size: 0x4)
    int32 MinimumValue;                                                               // 0x0214 (size: 0x4)
    int32 MaximumValue;                                                               // 0x0218 (size: 0x4)
    FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings LimitsEnabled;           // 0x021C (size: 0x2)
    class UEnum* ControlEnum;                                                         // 0x0220 (size: 0x8)

}; // Size: 0x230

struct FRigUnit_HierarchyAddAnimationChannelRotator : public FRigUnit_HierarchyAddElement
{
    FRotator InitialValue;                                                            // 0x0210 (size: 0x18)
    FRotator MinimumValue;                                                            // 0x0228 (size: 0x18)
    FRotator MaximumValue;                                                            // 0x0240 (size: 0x18)
    FRigUnit_HierarchyAddAnimationChannelRotatorLimitSettings LimitsEnabled;          // 0x0258 (size: 0x6)

}; // Size: 0x260

struct FRigUnit_HierarchyAddAnimationChannelRotatorLimitSettings : public FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings
{
    FRigControlLimitEnabled Pitch;                                                    // 0x0000 (size: 0x2)
    FRigControlLimitEnabled Yaw;                                                      // 0x0002 (size: 0x2)
    FRigControlLimitEnabled Roll;                                                     // 0x0004 (size: 0x2)

}; // Size: 0x6

struct FRigUnit_HierarchyAddAnimationChannelScaleFloat : public FRigUnit_HierarchyAddElement
{
    float InitialValue;                                                               // 0x0210 (size: 0x4)
    float MinimumValue;                                                               // 0x0214 (size: 0x4)
    float MaximumValue;                                                               // 0x0218 (size: 0x4)
    FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings LimitsEnabled;           // 0x021C (size: 0x2)

}; // Size: 0x220

struct FRigUnit_HierarchyAddAnimationChannelScaleVector : public FRigUnit_HierarchyAddElement
{
    FVector InitialValue;                                                             // 0x0210 (size: 0x18)
    FVector MinimumValue;                                                             // 0x0228 (size: 0x18)
    FVector MaximumValue;                                                             // 0x0240 (size: 0x18)
    FRigUnit_HierarchyAddAnimationChannelVectorLimitSettings LimitsEnabled;           // 0x0258 (size: 0x6)

}; // Size: 0x260

struct FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings : public FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings
{
    FRigControlLimitEnabled Enabled;                                                  // 0x0000 (size: 0x2)

}; // Size: 0x2

struct FRigUnit_HierarchyAddAnimationChannelVector : public FRigUnit_HierarchyAddElement
{
    FVector InitialValue;                                                             // 0x0210 (size: 0x18)
    FVector MinimumValue;                                                             // 0x0228 (size: 0x18)
    FVector MaximumValue;                                                             // 0x0240 (size: 0x18)
    FRigUnit_HierarchyAddAnimationChannelVectorLimitSettings LimitsEnabled;           // 0x0258 (size: 0x6)

}; // Size: 0x260

struct FRigUnit_HierarchyAddAnimationChannelVector2D : public FRigUnit_HierarchyAddElement
{
    FVector2D InitialValue;                                                           // 0x0210 (size: 0x10)
    FVector2D MinimumValue;                                                           // 0x0220 (size: 0x10)
    FVector2D MaximumValue;                                                           // 0x0230 (size: 0x10)
    FRigUnit_HierarchyAddAnimationChannel2DLimitSettings LimitsEnabled;               // 0x0240 (size: 0x4)

}; // Size: 0x250

struct FRigUnit_HierarchyAddAnimationChannelVectorLimitSettings : public FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings
{
    FRigControlLimitEnabled X;                                                        // 0x0000 (size: 0x2)
    FRigControlLimitEnabled Y;                                                        // 0x0002 (size: 0x2)
    FRigControlLimitEnabled Z;                                                        // 0x0004 (size: 0x2)

}; // Size: 0x6

struct FRigUnit_HierarchyAddBone : public FRigUnit_HierarchyAddElement
{
    FTransform Transform;                                                             // 0x0210 (size: 0x60)
    ERigVMTransformSpace Space;                                                       // 0x0270 (size: 0x1)

}; // Size: 0x280

struct FRigUnit_HierarchyAddControlElement : public FRigUnit_HierarchyAddElement
{
    FTransform OffsetTransform;                                                       // 0x0210 (size: 0x60)
    ERigVMTransformSpace OffsetSpace;                                                 // 0x0270 (size: 0x1)

}; // Size: 0x280

struct FRigUnit_HierarchyAddControlFloat : public FRigUnit_HierarchyAddControlElement
{
    float InitialValue;                                                               // 0x0278 (size: 0x4)
    FRigUnit_HierarchyAddControlFloat_Settings Settings;                              // 0x0280 (size: 0xD0)

}; // Size: 0x350

struct FRigUnit_HierarchyAddControlFloat_LimitSettings
{
    FRigControlLimitEnabled Limit;                                                    // 0x0000 (size: 0x2)
    float MinValue;                                                                   // 0x0004 (size: 0x4)
    float MaxValue;                                                                   // 0x0008 (size: 0x4)
    bool bDrawLimits;                                                                 // 0x000C (size: 0x1)

}; // Size: 0x10

struct FRigUnit_HierarchyAddControlFloat_Settings : public FRigUnit_HierarchyAddControl_Settings
{
    ERigControlAxis PrimaryAxis;                                                      // 0x0010 (size: 0x1)
    bool bIsScale;                                                                    // 0x0011 (size: 0x1)
    FRigUnit_HierarchyAddControlFloat_LimitSettings Limits;                           // 0x0014 (size: 0x10)
    FRigUnit_HierarchyAddControl_ShapeSettings Shape;                                 // 0x0030 (size: 0x80)
    FRigUnit_HierarchyAddControl_ProxySettings Proxy;                                 // 0x00B0 (size: 0x20)

}; // Size: 0xD0

struct FRigUnit_HierarchyAddControlInteger : public FRigUnit_HierarchyAddControlElement
{
    int32 InitialValue;                                                               // 0x0278 (size: 0x4)
    FRigUnit_HierarchyAddControlInteger_Settings Settings;                            // 0x0280 (size: 0xD0)

}; // Size: 0x350

struct FRigUnit_HierarchyAddControlInteger_LimitSettings
{
    FRigControlLimitEnabled Limit;                                                    // 0x0000 (size: 0x2)
    int32 MinValue;                                                                   // 0x0004 (size: 0x4)
    int32 MaxValue;                                                                   // 0x0008 (size: 0x4)
    bool bDrawLimits;                                                                 // 0x000C (size: 0x1)

}; // Size: 0x10

struct FRigUnit_HierarchyAddControlInteger_Settings : public FRigUnit_HierarchyAddControl_Settings
{
    ERigControlAxis PrimaryAxis;                                                      // 0x0010 (size: 0x1)
    class UEnum* ControlEnum;                                                         // 0x0018 (size: 0x8)
    FRigUnit_HierarchyAddControlInteger_LimitSettings Limits;                         // 0x0020 (size: 0x10)
    FRigUnit_HierarchyAddControl_ShapeSettings Shape;                                 // 0x0030 (size: 0x80)
    FRigUnit_HierarchyAddControl_ProxySettings Proxy;                                 // 0x00B0 (size: 0x20)

}; // Size: 0xD0

struct FRigUnit_HierarchyAddControlRotator : public FRigUnit_HierarchyAddControlElement
{
    FRotator InitialValue;                                                            // 0x0278 (size: 0x18)
    FRigUnit_HierarchyAddControlRotator_Settings Settings;                            // 0x0290 (size: 0x110)

}; // Size: 0x3A0

struct FRigUnit_HierarchyAddControlRotator_LimitSettings
{
    FRigControlLimitEnabled LimitPitch;                                               // 0x0000 (size: 0x2)
    FRigControlLimitEnabled LimitYaw;                                                 // 0x0002 (size: 0x2)
    FRigControlLimitEnabled LimitRoll;                                                // 0x0004 (size: 0x2)
    FRotator MinValue;                                                                // 0x0008 (size: 0x18)
    FRotator MaxValue;                                                                // 0x0020 (size: 0x18)
    bool bDrawLimits;                                                                 // 0x0038 (size: 0x1)

}; // Size: 0x40

struct FRigUnit_HierarchyAddControlRotator_Settings : public FRigUnit_HierarchyAddControl_Settings
{
    ERigVMTransformSpace InitialSpace;                                                // 0x0010 (size: 0x1)
    FRigUnit_HierarchyAddControlRotator_LimitSettings Limits;                         // 0x0018 (size: 0x40)
    FRigUnit_HierarchyAddControl_ShapeSettings Shape;                                 // 0x0060 (size: 0x80)
    FRigUnit_HierarchyAddControl_ProxySettings Proxy;                                 // 0x00E0 (size: 0x20)
    TArray<ERigControlTransformChannel> FilteredChannels;                             // 0x0100 (size: 0x10)

}; // Size: 0x110

struct FRigUnit_HierarchyAddControlTransform : public FRigUnit_HierarchyAddControlElement
{
    FTransform InitialValue;                                                          // 0x0280 (size: 0x60)
    FRigUnit_HierarchyAddControlTransform_Settings Settings;                          // 0x02E0 (size: 0x180)

}; // Size: 0x460

struct FRigUnit_HierarchyAddControlTransform_LimitSettings
{
    FRigControlLimitEnabled LimitTranslationX;                                        // 0x0000 (size: 0x2)
    FRigControlLimitEnabled LimitTranslationY;                                        // 0x0002 (size: 0x2)
    FRigControlLimitEnabled LimitTranslationZ;                                        // 0x0004 (size: 0x2)
    FRigControlLimitEnabled LimitPitch;                                               // 0x0006 (size: 0x2)
    FRigControlLimitEnabled LimitYaw;                                                 // 0x0008 (size: 0x2)
    FRigControlLimitEnabled LimitRoll;                                                // 0x000A (size: 0x2)
    FRigControlLimitEnabled LimitScaleX;                                              // 0x000C (size: 0x2)
    FRigControlLimitEnabled LimitScaleY;                                              // 0x000E (size: 0x2)
    FRigControlLimitEnabled LimitScaleZ;                                              // 0x0010 (size: 0x2)
    FEulerTransform MinValue;                                                         // 0x0018 (size: 0x48)
    FEulerTransform MaxValue;                                                         // 0x0060 (size: 0x48)
    bool bDrawLimits;                                                                 // 0x00A8 (size: 0x1)

}; // Size: 0xB0

struct FRigUnit_HierarchyAddControlTransform_Settings : public FRigUnit_HierarchyAddControl_Settings
{
    ERigVMTransformSpace InitialSpace;                                                // 0x0010 (size: 0x1)
    bool bUsePreferredRotationOrder;                                                  // 0x0011 (size: 0x1)
    EEulerRotationOrder PreferredRotationOrder;                                       // 0x0012 (size: 0x1)
    FRigUnit_HierarchyAddControlTransform_LimitSettings Limits;                       // 0x0018 (size: 0xB0)
    FRigUnit_HierarchyAddControl_ShapeSettings Shape;                                 // 0x00D0 (size: 0x80)
    FRigUnit_HierarchyAddControl_ProxySettings Proxy;                                 // 0x0150 (size: 0x20)
    TArray<ERigControlTransformChannel> FilteredChannels;                             // 0x0170 (size: 0x10)

}; // Size: 0x180

struct FRigUnit_HierarchyAddControlVector : public FRigUnit_HierarchyAddControlElement
{
    FVector InitialValue;                                                             // 0x0278 (size: 0x18)
    FRigUnit_HierarchyAddControlVector_Settings Settings;                             // 0x0290 (size: 0x110)

}; // Size: 0x3A0

struct FRigUnit_HierarchyAddControlVector2D : public FRigUnit_HierarchyAddControlElement
{
    FVector2D InitialValue;                                                           // 0x0278 (size: 0x10)
    FRigUnit_HierarchyAddControlVector2D_Settings Settings;                           // 0x0290 (size: 0x100)

}; // Size: 0x390

struct FRigUnit_HierarchyAddControlVector2D_LimitSettings
{
    FRigControlLimitEnabled LimitX;                                                   // 0x0000 (size: 0x2)
    FRigControlLimitEnabled LimitY;                                                   // 0x0002 (size: 0x2)
    FVector2D MinValue;                                                               // 0x0008 (size: 0x10)
    FVector2D MaxValue;                                                               // 0x0018 (size: 0x10)
    bool bDrawLimits;                                                                 // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FRigUnit_HierarchyAddControlVector2D_Settings : public FRigUnit_HierarchyAddControl_Settings
{
    ERigControlAxis PrimaryAxis;                                                      // 0x0010 (size: 0x1)
    FRigUnit_HierarchyAddControlVector2D_LimitSettings Limits;                        // 0x0018 (size: 0x30)
    FRigUnit_HierarchyAddControl_ShapeSettings Shape;                                 // 0x0050 (size: 0x80)
    FRigUnit_HierarchyAddControl_ProxySettings Proxy;                                 // 0x00D0 (size: 0x20)
    TArray<ERigControlTransformChannel> FilteredChannels;                             // 0x00F0 (size: 0x10)

}; // Size: 0x100

struct FRigUnit_HierarchyAddControlVector_LimitSettings
{
    FRigControlLimitEnabled LimitX;                                                   // 0x0000 (size: 0x2)
    FRigControlLimitEnabled LimitY;                                                   // 0x0002 (size: 0x2)
    FRigControlLimitEnabled LimitZ;                                                   // 0x0004 (size: 0x2)
    FVector MinValue;                                                                 // 0x0008 (size: 0x18)
    FVector MaxValue;                                                                 // 0x0020 (size: 0x18)
    bool bDrawLimits;                                                                 // 0x0038 (size: 0x1)

}; // Size: 0x40

struct FRigUnit_HierarchyAddControlVector_Settings : public FRigUnit_HierarchyAddControl_Settings
{
    ERigVMTransformSpace InitialSpace;                                                // 0x0010 (size: 0x1)
    bool bIsPosition;                                                                 // 0x0011 (size: 0x1)
    FRigUnit_HierarchyAddControlVector_LimitSettings Limits;                          // 0x0018 (size: 0x40)
    FRigUnit_HierarchyAddControl_ShapeSettings Shape;                                 // 0x0060 (size: 0x80)
    FRigUnit_HierarchyAddControl_ProxySettings Proxy;                                 // 0x00E0 (size: 0x20)
    TArray<ERigControlTransformChannel> FilteredChannels;                             // 0x0100 (size: 0x10)

}; // Size: 0x110

struct FRigUnit_HierarchyAddControl_ProxySettings
{
    bool bIsProxy;                                                                    // 0x0000 (size: 0x1)
    TArray<FRigElementKey> DrivenControls;                                            // 0x0008 (size: 0x10)
    ERigControlVisibility ShapeVisibility;                                            // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FRigUnit_HierarchyAddControl_Settings
{
    FName DisplayName;                                                                // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FRigUnit_HierarchyAddControl_ShapeSettings
{
    bool bVisible;                                                                    // 0x0000 (size: 0x1)
    FName Name;                                                                       // 0x0004 (size: 0x8)
    FLinearColor Color;                                                               // 0x000C (size: 0x10)
    FTransform Transform;                                                             // 0x0020 (size: 0x60)

}; // Size: 0x80

struct FRigUnit_HierarchyAddElement : public FRigUnit_DynamicHierarchyBaseMutable
{
    FRigElementKey Parent;                                                            // 0x01F0 (size: 0xC)
    FName Name;                                                                       // 0x01FC (size: 0x8)
    FRigElementKey Item;                                                              // 0x0204 (size: 0xC)

}; // Size: 0x210

struct FRigUnit_HierarchyAddNull : public FRigUnit_HierarchyAddElement
{
    FTransform Transform;                                                             // 0x0210 (size: 0x60)
    ERigVMTransformSpace Space;                                                       // 0x0270 (size: 0x1)

}; // Size: 0x280

struct FRigUnit_HierarchyAddPhysicsJoint : public FRigUnit_HierarchyAddElement
{
    FTransform Transform;                                                             // 0x0210 (size: 0x60)
    FRigPhysicsSolverID Solver;                                                       // 0x0270 (size: 0x10)
    FRigPhysicsSettings Settings;                                                     // 0x0280 (size: 0x4)

}; // Size: 0x290

struct FRigUnit_HierarchyAddPhysicsSolver : public FRigUnit_DynamicHierarchyBaseMutable
{
    FName Name;                                                                       // 0x01F0 (size: 0x8)
    FRigPhysicsSolverID Solver;                                                       // 0x01F8 (size: 0x10)

}; // Size: 0x210

struct FRigUnit_HierarchyAddSocket : public FRigUnit_HierarchyAddElement
{
    FTransform Transform;                                                             // 0x0210 (size: 0x60)
    ERigVMTransformSpace Space;                                                       // 0x0270 (size: 0x1)
    FLinearColor Color;                                                               // 0x0274 (size: 0x10)
    FString Description;                                                              // 0x0288 (size: 0x10)

}; // Size: 0x2A0

struct FRigUnit_HierarchyBase : public FRigUnit
{
}; // Size: 0x8

struct FRigUnit_HierarchyBaseMutable : public FRigUnitMutable
{
}; // Size: 0x1F0

struct FRigUnit_HierarchyCreatePoseItemArray : public FRigUnit_HierarchyBase
{
    TArray<FRigUnit_HierarchyCreatePoseItemArray_Entry> Entries;                      // 0x0008 (size: 0x10)
    FRigPose Pose;                                                                    // 0x0018 (size: 0x70)

}; // Size: 0x88

struct FRigUnit_HierarchyCreatePoseItemArray_Entry
{
    FRigElementKey Item;                                                              // 0x0000 (size: 0xC)
    FTransform LocalTransform;                                                        // 0x0010 (size: 0x60)
    FTransform GlobalTransform;                                                       // 0x0070 (size: 0x60)
    bool UseEulerAngles;                                                              // 0x00D0 (size: 0x1)
    FVector EulerAngles;                                                              // 0x00D8 (size: 0x18)
    float CurveValue;                                                                 // 0x00F0 (size: 0x4)

}; // Size: 0x100

struct FRigUnit_HierarchyGetChainItemArray : public FRigUnit_HierarchyBase
{
    FRigElementKey Start;                                                             // 0x0008 (size: 0xC)
    FRigElementKey End;                                                               // 0x0014 (size: 0xC)
    bool bIncludeStart;                                                               // 0x0020 (size: 0x1)
    bool bIncludeEnd;                                                                 // 0x0021 (size: 0x1)
    bool bReverse;                                                                    // 0x0022 (size: 0x1)
    TArray<FRigElementKey> Chain;                                                     // 0x0028 (size: 0x10)
    FCachedRigElement CachedStart;                                                    // 0x0038 (size: 0x20)
    FCachedRigElement CachedEnd;                                                      // 0x0058 (size: 0x20)
    FRigElementKeyCollection CachedChain;                                             // 0x0078 (size: 0x10)

}; // Size: 0x88

struct FRigUnit_HierarchyGetChildren : public FRigUnit_HierarchyBase
{
    FRigElementKey Parent;                                                            // 0x0008 (size: 0xC)
    bool bIncludeParent;                                                              // 0x0014 (size: 0x1)
    bool bRecursive;                                                                  // 0x0015 (size: 0x1)
    FRigElementKeyCollection Children;                                                // 0x0018 (size: 0x10)
    FCachedRigElement CachedParent;                                                   // 0x0028 (size: 0x20)
    FRigElementKeyCollection CachedChildren;                                          // 0x0048 (size: 0x10)

}; // Size: 0x58

struct FRigUnit_HierarchyGetParent : public FRigUnit_HierarchyBase
{
    FRigElementKey Child;                                                             // 0x0008 (size: 0xC)
    bool bDefaultParent;                                                              // 0x0014 (size: 0x1)
    FRigElementKey Parent;                                                            // 0x0018 (size: 0xC)
    FCachedRigElement CachedChild;                                                    // 0x0028 (size: 0x20)
    FCachedRigElement CachedParent;                                                   // 0x0048 (size: 0x20)

}; // Size: 0x68

struct FRigUnit_HierarchyGetParentWeights : public FRigUnit_DynamicHierarchyBase
{
    FRigElementKey Child;                                                             // 0x0008 (size: 0xC)
    TArray<FRigElementWeight> Weights;                                                // 0x0018 (size: 0x10)
    FRigElementKeyCollection Parents;                                                 // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FRigUnit_HierarchyGetParentWeightsArray : public FRigUnit_DynamicHierarchyBase
{
    FRigElementKey Child;                                                             // 0x0008 (size: 0xC)
    TArray<FRigElementWeight> Weights;                                                // 0x0018 (size: 0x10)
    TArray<FRigElementKey> Parents;                                                   // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FRigUnit_HierarchyGetParents : public FRigUnit_HierarchyBase
{
    FRigElementKey Child;                                                             // 0x0008 (size: 0xC)
    bool bIncludeChild;                                                               // 0x0014 (size: 0x1)
    bool bReverse;                                                                    // 0x0015 (size: 0x1)
    FRigElementKeyCollection Parents;                                                 // 0x0018 (size: 0x10)
    FCachedRigElement CachedChild;                                                    // 0x0028 (size: 0x20)
    FRigElementKeyCollection CachedParents;                                           // 0x0048 (size: 0x10)

}; // Size: 0x58

struct FRigUnit_HierarchyGetParentsItemArray : public FRigUnit_HierarchyBase
{
    FRigElementKey Child;                                                             // 0x0008 (size: 0xC)
    bool bIncludeChild;                                                               // 0x0014 (size: 0x1)
    bool bReverse;                                                                    // 0x0015 (size: 0x1)
    bool bDefaultParent;                                                              // 0x0016 (size: 0x1)
    TArray<FRigElementKey> Parents;                                                   // 0x0018 (size: 0x10)
    FCachedRigElement CachedChild;                                                    // 0x0028 (size: 0x20)
    FRigElementKeyCollection CachedParents;                                           // 0x0048 (size: 0x10)

}; // Size: 0x58

struct FRigUnit_HierarchyGetPose : public FRigUnit_HierarchyBase
{
    bool Initial;                                                                     // 0x0008 (size: 0x1)
    ERigElementType ElementType;                                                      // 0x0009 (size: 0x1)
    FRigElementKeyCollection ItemsToGet;                                              // 0x0010 (size: 0x10)
    FRigPose Pose;                                                                    // 0x0020 (size: 0x70)

}; // Size: 0x90

struct FRigUnit_HierarchyGetPoseItemArray : public FRigUnit_HierarchyBase
{
    bool Initial;                                                                     // 0x0008 (size: 0x1)
    ERigElementType ElementType;                                                      // 0x0009 (size: 0x1)
    TArray<FRigElementKey> ItemsToGet;                                                // 0x0010 (size: 0x10)
    FRigPose Pose;                                                                    // 0x0020 (size: 0x70)

}; // Size: 0x90

struct FRigUnit_HierarchyGetShapeSettings : public FRigUnit_DynamicHierarchyBase
{
    FRigElementKey Item;                                                              // 0x0008 (size: 0xC)
    FRigUnit_HierarchyAddControl_ShapeSettings Settings;                              // 0x0020 (size: 0x80)

}; // Size: 0xA0

struct FRigUnit_HierarchyGetSiblings : public FRigUnit_HierarchyBase
{
    FRigElementKey Item;                                                              // 0x0008 (size: 0xC)
    bool bIncludeItem;                                                                // 0x0014 (size: 0x1)
    FRigElementKeyCollection Siblings;                                                // 0x0018 (size: 0x10)
    FCachedRigElement CachedItem;                                                     // 0x0028 (size: 0x20)
    FRigElementKeyCollection CachedSiblings;                                          // 0x0048 (size: 0x10)

}; // Size: 0x58

struct FRigUnit_HierarchyGetSiblingsItemArray : public FRigUnit_HierarchyBase
{
    FRigElementKey Item;                                                              // 0x0008 (size: 0xC)
    bool bIncludeItem;                                                                // 0x0014 (size: 0x1)
    bool bDefaultSiblings;                                                            // 0x0015 (size: 0x1)
    TArray<FRigElementKey> Siblings;                                                  // 0x0018 (size: 0x10)
    FCachedRigElement CachedItem;                                                     // 0x0028 (size: 0x20)
    FRigElementKeyCollection CachedSiblings;                                          // 0x0048 (size: 0x10)

}; // Size: 0x58

struct FRigUnit_HierarchyImportFromSkeleton : public FRigUnit_DynamicHierarchyBaseMutable
{
    FName NameSpace;                                                                  // 0x01F0 (size: 0x8)
    bool bIncludeCurves;                                                              // 0x01F8 (size: 0x1)
    TArray<FRigElementKey> Items;                                                     // 0x0200 (size: 0x10)

}; // Size: 0x210

struct FRigUnit_HierarchyRemoveElement : public FRigUnit_DynamicHierarchyBaseMutable
{
    FRigElementKey Item;                                                              // 0x01F0 (size: 0xC)
    bool bSuccess;                                                                    // 0x01FC (size: 0x1)

}; // Size: 0x200

struct FRigUnit_HierarchyReset : public FRigUnit_DynamicHierarchyBaseMutable
{
}; // Size: 0x1F0

struct FRigUnit_HierarchySetParentWeights : public FRigUnit_DynamicHierarchyBaseMutable
{
    FRigElementKey Child;                                                             // 0x01F0 (size: 0xC)
    TArray<FRigElementWeight> Weights;                                                // 0x0200 (size: 0x10)

}; // Size: 0x210

struct FRigUnit_HierarchySetPose : public FRigUnit_HierarchyBaseMutable
{
    FRigPose Pose;                                                                    // 0x01F0 (size: 0x70)
    ERigElementType ElementType;                                                      // 0x0260 (size: 0x1)
    ERigVMTransformSpace Space;                                                       // 0x0261 (size: 0x1)
    FRigElementKeyCollection ItemsToSet;                                              // 0x0268 (size: 0x10)
    float Weight;                                                                     // 0x0278 (size: 0x4)

}; // Size: 0x280

struct FRigUnit_HierarchySetPoseItemArray : public FRigUnit_HierarchyBaseMutable
{
    FRigPose Pose;                                                                    // 0x01F0 (size: 0x70)
    ERigElementType ElementType;                                                      // 0x0260 (size: 0x1)
    ERigVMTransformSpace Space;                                                       // 0x0261 (size: 0x1)
    TArray<FRigElementKey> ItemsToSet;                                                // 0x0268 (size: 0x10)
    float Weight;                                                                     // 0x0278 (size: 0x4)

}; // Size: 0x280

struct FRigUnit_HierarchySetShapeSettings : public FRigUnit_DynamicHierarchyBaseMutable
{
    FRigElementKey Item;                                                              // 0x01F0 (size: 0xC)
    FRigUnit_HierarchyAddControl_ShapeSettings Settings;                              // 0x0200 (size: 0x80)

}; // Size: 0x280

struct FRigUnit_HighlevelBase : public FRigUnit
{
}; // Size: 0x8

struct FRigUnit_HighlevelBaseMutable : public FRigUnitMutable
{
}; // Size: 0x1F0

struct FRigUnit_InteractionExecution : public FRigUnit
{
    FControlRigExecuteContext ExecuteContext;                                         // 0x0010 (size: 0x1E0)

}; // Size: 0x1F0

struct FRigUnit_InverseExecution : public FRigUnit
{
    FControlRigExecuteContext ExecuteContext;                                         // 0x0010 (size: 0x1E0)

}; // Size: 0x1F0

struct FRigUnit_InverseQuaterion : public FRigUnit_UnaryQuaternionOp
{
}; // Size: 0x50

struct FRigUnit_IsInteracting : public FRigUnit
{
    bool bIsInteracting;                                                              // 0x0008 (size: 0x1)
    bool bIsTranslating;                                                              // 0x0009 (size: 0x1)
    bool bIsRotating;                                                                 // 0x000A (size: 0x1)
    bool bIsScaling;                                                                  // 0x000B (size: 0x1)
    TArray<FRigElementKey> Items;                                                     // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FRigUnit_IsItemInCurrentNameSpace : public FRigUnit_RigModulesBase
{
    FRigElementKey Item;                                                              // 0x0008 (size: 0xC)
    bool Result;                                                                      // 0x0014 (size: 0x1)

}; // Size: 0x18

struct FRigUnit_Item : public FRigUnit
{
    FRigElementKey Item;                                                              // 0x0008 (size: 0xC)

}; // Size: 0x18

struct FRigUnit_ItemArray : public FRigUnit
{
    TArray<FRigElementKey> Items;                                                     // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FRigUnit_ItemBase : public FRigUnit
{
}; // Size: 0x8

struct FRigUnit_ItemBaseMutable : public FRigUnitMutable
{
}; // Size: 0x1F0

struct FRigUnit_ItemEquals : public FRigUnit_ItemBase
{
    FRigElementKey A;                                                                 // 0x0008 (size: 0xC)
    FRigElementKey B;                                                                 // 0x0014 (size: 0xC)
    bool Result;                                                                      // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FRigUnit_ItemExists : public FRigUnit_ItemBase
{
    FRigElementKey Item;                                                              // 0x0008 (size: 0xC)
    bool Exists;                                                                      // 0x0014 (size: 0x1)
    FCachedRigElement CachedIndex;                                                    // 0x0018 (size: 0x20)

}; // Size: 0x38

struct FRigUnit_ItemHarmonics : public FRigUnit_HighlevelBaseMutable
{
    TArray<FRigUnit_Harmonics_TargetItem> Targets;                                    // 0x01F0 (size: 0x10)
    FVector WaveSpeed;                                                                // 0x0200 (size: 0x18)
    FVector WaveFrequency;                                                            // 0x0218 (size: 0x18)
    FVector WaveAmplitude;                                                            // 0x0230 (size: 0x18)
    FVector WaveOffset;                                                               // 0x0248 (size: 0x18)
    FVector WaveNoise;                                                                // 0x0260 (size: 0x18)
    ERigVMAnimEasingType WaveEase;                                                    // 0x0278 (size: 0x1)
    float WaveMinimum;                                                                // 0x027C (size: 0x4)
    float WaveMaximum;                                                                // 0x0280 (size: 0x4)
    EEulerRotationOrder RotationOrder;                                                // 0x0284 (size: 0x1)
    FRigUnit_BoneHarmonics_WorkData WorkData;                                         // 0x0288 (size: 0x28)

}; // Size: 0x2B0

struct FRigUnit_ItemNotEquals : public FRigUnit_ItemBase
{
    FRigElementKey A;                                                                 // 0x0008 (size: 0xC)
    FRigElementKey B;                                                                 // 0x0014 (size: 0xC)
    bool Result;                                                                      // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FRigUnit_ItemReplace : public FRigUnit_ItemBase
{
    FRigElementKey Item;                                                              // 0x0008 (size: 0xC)
    FName Old;                                                                        // 0x0014 (size: 0x8)
    FName New;                                                                        // 0x001C (size: 0x8)
    FRigElementKey Result;                                                            // 0x0024 (size: 0xC)

}; // Size: 0x30

struct FRigUnit_ItemToName : public FRigUnit_ItemBase
{
    FRigElementKey Value;                                                             // 0x0008 (size: 0xC)
    FName Result;                                                                     // 0x0014 (size: 0x8)

}; // Size: 0x20

struct FRigUnit_ItemTypeEquals : public FRigUnit_ItemBase
{
    FRigElementKey A;                                                                 // 0x0008 (size: 0xC)
    FRigElementKey B;                                                                 // 0x0014 (size: 0xC)
    bool Result;                                                                      // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FRigUnit_ItemTypeNotEquals : public FRigUnit_ItemBase
{
    FRigElementKey A;                                                                 // 0x0008 (size: 0xC)
    FRigElementKey B;                                                                 // 0x0014 (size: 0xC)
    bool Result;                                                                      // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FRigUnit_MapRange_Float : public FRigUnit
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    float MinIn;                                                                      // 0x000C (size: 0x4)
    float MaxIn;                                                                      // 0x0010 (size: 0x4)
    float MinOut;                                                                     // 0x0014 (size: 0x4)
    float MaxOut;                                                                     // 0x0018 (size: 0x4)
    float Result;                                                                     // 0x001C (size: 0x4)

}; // Size: 0x20

struct FRigUnit_ModifyBoneTransforms : public FRigUnit_HighlevelBaseMutable
{
    TArray<FRigUnit_ModifyBoneTransforms_PerBone> BoneToModify;                       // 0x01F0 (size: 0x10)
    float Weight;                                                                     // 0x0200 (size: 0x4)
    float WeightMinimum;                                                              // 0x0204 (size: 0x4)
    float WeightMaximum;                                                              // 0x0208 (size: 0x4)
    EControlRigModifyBoneMode Mode;                                                   // 0x020C (size: 0x1)
    FRigUnit_ModifyBoneTransforms_WorkData WorkData;                                  // 0x0210 (size: 0x10)

}; // Size: 0x220

struct FRigUnit_ModifyBoneTransforms_PerBone
{
    FName bone;                                                                       // 0x0000 (size: 0x8)
    FTransform Transform;                                                             // 0x0010 (size: 0x60)

}; // Size: 0x70

struct FRigUnit_ModifyBoneTransforms_WorkData : public FRigUnit_ModifyTransforms_WorkData
{
}; // Size: 0x10

struct FRigUnit_ModifyTransforms : public FRigUnit_HighlevelBaseMutable
{
    TArray<FRigUnit_ModifyTransforms_PerItem> ItemToModify;                           // 0x01F0 (size: 0x10)
    float Weight;                                                                     // 0x0200 (size: 0x4)
    float WeightMinimum;                                                              // 0x0204 (size: 0x4)
    float WeightMaximum;                                                              // 0x0208 (size: 0x4)
    EControlRigModifyBoneMode Mode;                                                   // 0x020C (size: 0x1)
    FRigUnit_ModifyTransforms_WorkData WorkData;                                      // 0x0210 (size: 0x10)

}; // Size: 0x220

struct FRigUnit_ModifyTransforms_PerItem
{
    FRigElementKey Item;                                                              // 0x0000 (size: 0xC)
    FTransform Transform;                                                             // 0x0010 (size: 0x60)

}; // Size: 0x70

struct FRigUnit_ModifyTransforms_WorkData
{
    TArray<FCachedRigElement> CachedItems;                                            // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FRigUnit_MultiFABRIK : public FRigUnit_HighlevelBaseMutable
{
    FName RootBone;                                                                   // 0x01F0 (size: 0x8)
    TArray<FRigUnit_MultiFABRIK_EndEffector> Effectors;                               // 0x01F8 (size: 0x10)
    float Precision;                                                                  // 0x0208 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x020C (size: 0x1)
    int32 MaxIterations;                                                              // 0x0210 (size: 0x4)
    FRigUnit_MultiFABRIK_WorkData WorkData;                                           // 0x0218 (size: 0x68)
    bool bIsInitialized;                                                              // 0x0280 (size: 0x1)

}; // Size: 0x290

struct FRigUnit_MultiFABRIK_EndEffector
{
    FName bone;                                                                       // 0x0000 (size: 0x8)
    FVector Location;                                                                 // 0x0008 (size: 0x18)

}; // Size: 0x20

struct FRigUnit_MultiFABRIK_WorkData
{
}; // Size: 0x68

struct FRigUnit_MultiplyQuaternion : public FRigUnit_BinaryQuaternionOp
{
}; // Size: 0x70

struct FRigUnit_MultiplyTransform : public FRigUnit_BinaryTransformOp
{
}; // Size: 0x130

struct FRigUnit_Multiply_FloatFloat : public FRigUnit_BinaryFloatOp
{
}; // Size: 0x18

struct FRigUnit_Multiply_VectorVector : public FRigUnit_BinaryVectorOp
{
}; // Size: 0x50

struct FRigUnit_OffsetTransformForItem : public FRigUnitMutable
{
    FRigElementKey Item;                                                              // 0x01F0 (size: 0xC)
    FTransform OffsetTransform;                                                       // 0x0200 (size: 0x60)
    float Weight;                                                                     // 0x0260 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x0264 (size: 0x1)
    FCachedRigElement CachedIndex;                                                    // 0x0268 (size: 0x20)

}; // Size: 0x290

struct FRigUnit_ParentConstraint : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKey Child;                                                             // 0x01F0 (size: 0xC)
    bool bMaintainOffset;                                                             // 0x01FC (size: 0x1)
    FTransformFilter Filter;                                                          // 0x01FD (size: 0x9)
    TArray<FConstraintParent> Parents;                                                // 0x0208 (size: 0x10)
    FRigUnit_ParentConstraint_AdvancedSettings AdvancedSettings;                      // 0x0218 (size: 0x2)
    float Weight;                                                                     // 0x021C (size: 0x4)
    FCachedRigElement ChildCache;                                                     // 0x0220 (size: 0x20)
    TArray<FCachedRigElement> ParentCaches;                                           // 0x0240 (size: 0x10)

}; // Size: 0x250

struct FRigUnit_ParentConstraintMath : public FRigUnit_HighlevelBase
{
    FTransform Input;                                                                 // 0x0010 (size: 0x60)
    TArray<FConstraintParent> Parents;                                                // 0x0070 (size: 0x10)
    FRigUnit_ParentConstraintMath_AdvancedSettings AdvancedSettings;                  // 0x0080 (size: 0x1)
    FTransform Output;                                                                // 0x0090 (size: 0x60)
    TArray<FCachedRigElement> ParentCaches;                                           // 0x00F0 (size: 0x10)

}; // Size: 0x100

struct FRigUnit_ParentConstraintMath_AdvancedSettings
{
    EConstraintInterpType InterpolationType;                                          // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FRigUnit_ParentConstraint_AdvancedSettings
{
    EConstraintInterpType InterpolationType;                                          // 0x0000 (size: 0x1)
    EEulerRotationOrder RotationOrderForFilter;                                       // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FRigUnit_ParentSwitchConstraint : public FRigUnitMutable
{
    FRigElementKey Subject;                                                           // 0x01F0 (size: 0xC)
    int32 ParentIndex;                                                                // 0x01FC (size: 0x4)
    FRigElementKeyCollection Parents;                                                 // 0x0200 (size: 0x10)
    FTransform InitialGlobalTransform;                                                // 0x0210 (size: 0x60)
    float Weight;                                                                     // 0x0270 (size: 0x4)
    FTransform Transform;                                                             // 0x0280 (size: 0x60)
    bool Switched;                                                                    // 0x02E0 (size: 0x1)
    FCachedRigElement CachedSubject;                                                  // 0x02E8 (size: 0x20)
    FCachedRigElement CachedParent;                                                   // 0x0308 (size: 0x20)
    FTransform RelativeOffset;                                                        // 0x0330 (size: 0x60)

}; // Size: 0x390

struct FRigUnit_ParentSwitchConstraintArray : public FRigUnitMutable
{
    FRigElementKey Subject;                                                           // 0x01F0 (size: 0xC)
    int32 ParentIndex;                                                                // 0x01FC (size: 0x4)
    TArray<FRigElementKey> Parents;                                                   // 0x0200 (size: 0x10)
    FTransform InitialGlobalTransform;                                                // 0x0210 (size: 0x60)
    float Weight;                                                                     // 0x0270 (size: 0x4)
    FTransform Transform;                                                             // 0x0280 (size: 0x60)
    bool Switched;                                                                    // 0x02E0 (size: 0x1)
    FCachedRigElement CachedSubject;                                                  // 0x02E8 (size: 0x20)
    FCachedRigElement CachedParent;                                                   // 0x0308 (size: 0x20)
    FTransform RelativeOffset;                                                        // 0x0330 (size: 0x60)

}; // Size: 0x390

struct FRigUnit_PointSimulation : public FRigVMFunction_SimBaseMutable
{
    TArray<FRigVMSimPoint> Points;                                                    // 0x0120 (size: 0x10)
    TArray<FCRSimLinearSpring> links;                                                 // 0x0130 (size: 0x10)
    TArray<FCRSimPointForce> Forces;                                                  // 0x0140 (size: 0x10)
    TArray<FCRSimSoftCollision> CollisionVolumes;                                     // 0x0150 (size: 0x10)
    float SimulatedStepsPerSecond;                                                    // 0x0160 (size: 0x4)
    ERigVMSimPointIntegrateType IntegratorType;                                       // 0x0164 (size: 0x1)
    float VerletBlend;                                                                // 0x0168 (size: 0x4)
    TArray<FRigUnit_PointSimulation_BoneTarget> BoneTargets;                          // 0x0170 (size: 0x10)
    bool bLimitLocalPosition;                                                         // 0x0180 (size: 0x1)
    bool bPropagateToChildren;                                                        // 0x0181 (size: 0x1)
    FVector PrimaryAimAxis;                                                           // 0x0188 (size: 0x18)
    FVector SecondaryAimAxis;                                                         // 0x01A0 (size: 0x18)
    FRigUnit_PointSimulation_DebugSettings DebugSettings;                             // 0x01C0 (size: 0x80)
    FRigVMFourPointBezier Bezier;                                                     // 0x0240 (size: 0x60)
    FRigUnit_PointSimulation_WorkData WorkData;                                       // 0x02A0 (size: 0x88)

}; // Size: 0x330

struct FRigUnit_PointSimulation_BoneTarget
{
    FName bone;                                                                       // 0x0000 (size: 0x8)
    int32 TranslationPoint;                                                           // 0x0008 (size: 0x4)
    int32 PrimaryAimPoint;                                                            // 0x000C (size: 0x4)
    int32 SecondaryAimPoint;                                                          // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FRigUnit_PointSimulation_DebugSettings
{
    bool bEnabled;                                                                    // 0x0000 (size: 0x1)
    float scale;                                                                      // 0x0004 (size: 0x4)
    float CollisionScale;                                                             // 0x0008 (size: 0x4)
    bool bDrawPointsAsSpheres;                                                        // 0x000C (size: 0x1)
    FLinearColor Color;                                                               // 0x0010 (size: 0x10)
    FTransform WorldOffset;                                                           // 0x0020 (size: 0x60)

}; // Size: 0x80

struct FRigUnit_PointSimulation_WorkData
{
    FCRSimPointContainer Simulation;                                                  // 0x0000 (size: 0x78)
    TArray<FCachedRigElement> BoneIndices;                                            // 0x0078 (size: 0x10)

}; // Size: 0x88

struct FRigUnit_PoseGetCurve : public FRigUnit_HierarchyBase
{
    FRigPose Pose;                                                                    // 0x0008 (size: 0x70)
    FName Curve;                                                                      // 0x0078 (size: 0x8)
    bool Valid;                                                                       // 0x0080 (size: 0x1)
    float CurveValue;                                                                 // 0x0084 (size: 0x4)
    int32 CachedPoseElementIndex;                                                     // 0x0088 (size: 0x4)
    int32 CachedPoseHash;                                                             // 0x008C (size: 0x4)

}; // Size: 0x90

struct FRigUnit_PoseGetDelta : public FRigUnit_HierarchyBase
{
    FRigPose PoseA;                                                                   // 0x0008 (size: 0x70)
    FRigPose PoseB;                                                                   // 0x0078 (size: 0x70)
    float PositionThreshold;                                                          // 0x00E8 (size: 0x4)
    float RotationThreshold;                                                          // 0x00EC (size: 0x4)
    float ScaleThreshold;                                                             // 0x00F0 (size: 0x4)
    float CurveThreshold;                                                             // 0x00F4 (size: 0x4)
    ERigElementType ElementType;                                                      // 0x00F8 (size: 0x1)
    ERigVMTransformSpace Space;                                                       // 0x00F9 (size: 0x1)
    FRigElementKeyCollection ItemsToCompare;                                          // 0x0100 (size: 0x10)
    bool PosesAreEqual;                                                               // 0x0110 (size: 0x1)
    FRigElementKeyCollection ItemsWithDelta;                                          // 0x0118 (size: 0x10)

}; // Size: 0x128

struct FRigUnit_PoseGetItems : public FRigUnit_HierarchyBase
{
    FRigPose Pose;                                                                    // 0x0008 (size: 0x70)
    ERigElementType ElementType;                                                      // 0x0078 (size: 0x1)
    FRigElementKeyCollection Items;                                                   // 0x0080 (size: 0x10)

}; // Size: 0x90

struct FRigUnit_PoseGetItemsItemArray : public FRigUnit_HierarchyBase
{
    FRigPose Pose;                                                                    // 0x0008 (size: 0x70)
    ERigElementType ElementType;                                                      // 0x0078 (size: 0x1)
    TArray<FRigElementKey> Items;                                                     // 0x0080 (size: 0x10)

}; // Size: 0x90

struct FRigUnit_PoseGetTransform : public FRigUnit_HierarchyBase
{
    FRigPose Pose;                                                                    // 0x0008 (size: 0x70)
    FRigElementKey Item;                                                              // 0x0078 (size: 0xC)
    ERigVMTransformSpace Space;                                                       // 0x0084 (size: 0x1)
    bool Valid;                                                                       // 0x0085 (size: 0x1)
    FTransform Transform;                                                             // 0x0090 (size: 0x60)
    float CurveValue;                                                                 // 0x00F0 (size: 0x4)
    int32 CachedPoseElementIndex;                                                     // 0x00F4 (size: 0x4)
    int32 CachedPoseHash;                                                             // 0x00F8 (size: 0x4)

}; // Size: 0x100

struct FRigUnit_PoseGetTransformArray : public FRigUnit_HierarchyBase
{
    FRigPose Pose;                                                                    // 0x0008 (size: 0x70)
    ERigVMTransformSpace Space;                                                       // 0x0078 (size: 0x1)
    bool Valid;                                                                       // 0x0079 (size: 0x1)
    TArray<FTransform> Transforms;                                                    // 0x0080 (size: 0x10)

}; // Size: 0x90

struct FRigUnit_PoseIsEmpty : public FRigUnit_HierarchyBase
{
    FRigPose Pose;                                                                    // 0x0008 (size: 0x70)
    bool IsEmpty;                                                                     // 0x0078 (size: 0x1)

}; // Size: 0x80

struct FRigUnit_PoseLoop : public FRigUnit_HierarchyBaseMutable
{
    FName BlockToRun;                                                                 // 0x01F0 (size: 0x8)
    FRigPose Pose;                                                                    // 0x01F8 (size: 0x70)
    FRigElementKey Item;                                                              // 0x0268 (size: 0xC)
    FTransform GlobalTransform;                                                       // 0x0280 (size: 0x60)
    FTransform LocalTransform;                                                        // 0x02E0 (size: 0x60)
    float CurveValue;                                                                 // 0x0340 (size: 0x4)
    int32 Index;                                                                      // 0x0344 (size: 0x4)
    int32 Count;                                                                      // 0x0348 (size: 0x4)
    float Ratio;                                                                      // 0x034C (size: 0x4)
    FControlRigExecuteContext Completed;                                              // 0x0350 (size: 0x1E0)

}; // Size: 0x530

struct FRigUnit_PositionConstraint : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKey Child;                                                             // 0x01F0 (size: 0xC)
    bool bMaintainOffset;                                                             // 0x01FC (size: 0x1)
    FFilterOptionPerAxis Filter;                                                      // 0x01FD (size: 0x3)
    TArray<FConstraintParent> Parents;                                                // 0x0200 (size: 0x10)
    float Weight;                                                                     // 0x0210 (size: 0x4)

}; // Size: 0x220

struct FRigUnit_PositionConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKey Child;                                                             // 0x01F0 (size: 0xC)
    bool bMaintainOffset;                                                             // 0x01FC (size: 0x1)
    FFilterOptionPerAxis Filter;                                                      // 0x01FD (size: 0x3)
    TArray<FConstraintParent> Parents;                                                // 0x0200 (size: 0x10)
    float Weight;                                                                     // 0x0210 (size: 0x4)
    FCachedRigElement ChildCache;                                                     // 0x0218 (size: 0x20)
    TArray<FCachedRigElement> ParentCaches;                                           // 0x0238 (size: 0x10)

}; // Size: 0x250

struct FRigUnit_PostBeginExecution : public FRigUnit
{
    FControlRigExecuteContext ExecuteContext;                                         // 0x0010 (size: 0x1E0)

}; // Size: 0x1F0

struct FRigUnit_PostPrepareForExecution : public FRigUnit
{
    FControlRigExecuteContext ExecuteContext;                                         // 0x0010 (size: 0x1E0)

}; // Size: 0x1F0

struct FRigUnit_PreBeginExecution : public FRigUnit
{
    FControlRigExecuteContext ExecuteContext;                                         // 0x0010 (size: 0x1E0)

}; // Size: 0x1F0

struct FRigUnit_PrepareForExecution : public FRigUnit
{
    FControlRigExecuteContext ExecuteContext;                                         // 0x0010 (size: 0x1E0)

}; // Size: 0x1F0

struct FRigUnit_ProjectTransformToNewParent : public FRigUnit
{
    FRigElementKey Child;                                                             // 0x0008 (size: 0xC)
    bool bChildInitial;                                                               // 0x0014 (size: 0x1)
    FRigElementKey OldParent;                                                         // 0x0018 (size: 0xC)
    bool bOldParentInitial;                                                           // 0x0024 (size: 0x1)
    FRigElementKey NewParent;                                                         // 0x0028 (size: 0xC)
    bool bNewParentInitial;                                                           // 0x0034 (size: 0x1)
    FTransform Transform;                                                             // 0x0040 (size: 0x60)
    FCachedRigElement CachedChild;                                                    // 0x00A0 (size: 0x20)
    FCachedRigElement CachedOldParent;                                                // 0x00C0 (size: 0x20)
    FCachedRigElement CachedNewParent;                                                // 0x00E0 (size: 0x20)

}; // Size: 0x100

struct FRigUnit_PropagateTransform : public FRigUnitMutable
{
    FRigElementKey Item;                                                              // 0x01F0 (size: 0xC)
    bool bRecomputeGlobal;                                                            // 0x01FC (size: 0x1)
    bool bApplyToChildren;                                                            // 0x01FD (size: 0x1)
    bool bRecursive;                                                                  // 0x01FE (size: 0x1)
    FCachedRigElement CachedIndex;                                                    // 0x0200 (size: 0x20)

}; // Size: 0x220

struct FRigUnit_QuaternionFromAxisAndAngle : public FRigUnit
{
    FVector Axis;                                                                     // 0x0008 (size: 0x18)
    float Angle;                                                                      // 0x0020 (size: 0x4)
    FQuat Result;                                                                     // 0x0030 (size: 0x20)

}; // Size: 0x50

struct FRigUnit_QuaternionToAngle : public FRigUnit
{
    FVector Axis;                                                                     // 0x0008 (size: 0x18)
    FQuat Argument;                                                                   // 0x0020 (size: 0x20)
    float Angle;                                                                      // 0x0040 (size: 0x4)

}; // Size: 0x50

struct FRigUnit_QuaternionToAxisAndAngle : public FRigUnit
{
    FQuat Argument;                                                                   // 0x0010 (size: 0x20)
    FVector Axis;                                                                     // 0x0030 (size: 0x18)
    float Angle;                                                                      // 0x0048 (size: 0x4)

}; // Size: 0x50

struct FRigUnit_RemoveAllMetadata : public FRigUnitMutable
{
    FRigElementKey Item;                                                              // 0x01F0 (size: 0xC)
    ERigMetaDataNameSpace NameSpace;                                                  // 0x01FC (size: 0x1)
    bool Removed;                                                                     // 0x01FD (size: 0x1)
    FCachedRigElement CachedIndex;                                                    // 0x0200 (size: 0x20)

}; // Size: 0x220

struct FRigUnit_RemoveMetadata : public FRigUnitMutable
{
    FRigElementKey Item;                                                              // 0x01F0 (size: 0xC)
    FName Name;                                                                       // 0x01FC (size: 0x8)
    ERigMetaDataNameSpace NameSpace;                                                  // 0x0204 (size: 0x1)
    bool Removed;                                                                     // 0x0205 (size: 0x1)
    FCachedRigElement CachedIndex;                                                    // 0x0208 (size: 0x20)

}; // Size: 0x230

struct FRigUnit_RemoveMetadataTag : public FRigUnitMutable
{
    FRigElementKey Item;                                                              // 0x01F0 (size: 0xC)
    FName Tag;                                                                        // 0x01FC (size: 0x8)
    ERigMetaDataNameSpace NameSpace;                                                  // 0x0204 (size: 0x1)
    bool Removed;                                                                     // 0x0205 (size: 0x1)
    FCachedRigElement CachedIndex;                                                    // 0x0208 (size: 0x20)

}; // Size: 0x230

struct FRigUnit_ResolveConnector : public FRigUnit_RigModulesBase
{
    FRigElementKey Connector;                                                         // 0x0008 (size: 0xC)
    bool SkipSocket;                                                                  // 0x0014 (size: 0x1)
    FRigElementKey Result;                                                            // 0x0018 (size: 0xC)
    bool bIsConnected;                                                                // 0x0024 (size: 0x1)

}; // Size: 0x28

struct FRigUnit_RigModulesBase : public FRigUnit
{
}; // Size: 0x8

struct FRigUnit_RigModulesBaseMutable : public FRigUnitMutable
{
}; // Size: 0x1F0

struct FRigUnit_RotationConstraint : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKey Child;                                                             // 0x01F0 (size: 0xC)
    bool bMaintainOffset;                                                             // 0x01FC (size: 0x1)
    FFilterOptionPerAxis Filter;                                                      // 0x01FD (size: 0x3)
    TArray<FConstraintParent> Parents;                                                // 0x0200 (size: 0x10)
    FRigUnit_RotationConstraint_AdvancedSettings AdvancedSettings;                    // 0x0210 (size: 0x2)
    float Weight;                                                                     // 0x0214 (size: 0x4)

}; // Size: 0x220

struct FRigUnit_RotationConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKey Child;                                                             // 0x01F0 (size: 0xC)
    bool bMaintainOffset;                                                             // 0x01FC (size: 0x1)
    FFilterOptionPerAxis Filter;                                                      // 0x01FD (size: 0x3)
    TArray<FConstraintParent> Parents;                                                // 0x0200 (size: 0x10)
    FRigUnit_RotationConstraint_AdvancedSettings AdvancedSettings;                    // 0x0210 (size: 0x2)
    float Weight;                                                                     // 0x0214 (size: 0x4)
    FCachedRigElement ChildCache;                                                     // 0x0218 (size: 0x20)
    TArray<FCachedRigElement> ParentCaches;                                           // 0x0238 (size: 0x10)

}; // Size: 0x250

struct FRigUnit_RotationConstraint_AdvancedSettings
{
    EConstraintInterpType InterpolationType;                                          // 0x0000 (size: 0x1)
    EEulerRotationOrder RotationOrderForFilter;                                       // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FRigUnit_ScaleConstraint : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKey Child;                                                             // 0x01F0 (size: 0xC)
    bool bMaintainOffset;                                                             // 0x01FC (size: 0x1)
    FFilterOptionPerAxis Filter;                                                      // 0x01FD (size: 0x3)
    TArray<FConstraintParent> Parents;                                                // 0x0200 (size: 0x10)
    float Weight;                                                                     // 0x0210 (size: 0x4)

}; // Size: 0x220

struct FRigUnit_ScaleConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKey Child;                                                             // 0x01F0 (size: 0xC)
    bool bMaintainOffset;                                                             // 0x01FC (size: 0x1)
    FFilterOptionPerAxis Filter;                                                      // 0x01FD (size: 0x3)
    TArray<FConstraintParent> Parents;                                                // 0x0200 (size: 0x10)
    float Weight;                                                                     // 0x0210 (size: 0x4)
    FCachedRigElement ChildCache;                                                     // 0x0218 (size: 0x20)
    TArray<FCachedRigElement> ParentCaches;                                           // 0x0238 (size: 0x10)

}; // Size: 0x250

struct FRigUnit_SendEvent : public FRigUnitMutable
{
    ERigEvent Event;                                                                  // 0x01F0 (size: 0x1)
    FRigElementKey Item;                                                              // 0x01F4 (size: 0xC)
    float OffsetInSeconds;                                                            // 0x0200 (size: 0x4)
    bool bEnable;                                                                     // 0x0204 (size: 0x1)
    bool bOnlyDuringInteraction;                                                      // 0x0205 (size: 0x1)

}; // Size: 0x210

struct FRigUnit_SequenceExecution : public FRigUnit
{
    FControlRigExecuteContext ExecuteContext;                                         // 0x0010 (size: 0x1E0)
    FControlRigExecuteContext A;                                                      // 0x01F0 (size: 0x1E0)
    FControlRigExecuteContext B;                                                      // 0x03D0 (size: 0x1E0)
    FControlRigExecuteContext C;                                                      // 0x05B0 (size: 0x1E0)
    FControlRigExecuteContext D;                                                      // 0x0790 (size: 0x1E0)

}; // Size: 0x970

struct FRigUnit_SetAnimationChannelBase : public FRigUnit_GetAnimationChannelBase
{
    FControlRigExecuteContext ExecuteContext;                                         // 0x0030 (size: 0x1E0)

}; // Size: 0x210

struct FRigUnit_SetAnimationChannelBaseFromItem : public FRigUnit_GetAnimationChannelFromItemBase
{
    FControlRigExecuteContext ExecuteContext;                                         // 0x0020 (size: 0x1E0)

}; // Size: 0x200

struct FRigUnit_SetBoneInitialTransform : public FRigUnitMutable
{
    FName bone;                                                                       // 0x01F0 (size: 0x8)
    FTransform Transform;                                                             // 0x0200 (size: 0x60)
    FTransform Result;                                                                // 0x0260 (size: 0x60)
    ERigVMTransformSpace Space;                                                       // 0x02C0 (size: 0x1)
    bool bPropagateToChildren;                                                        // 0x02C1 (size: 0x1)
    FCachedRigElement CachedBone;                                                     // 0x02C8 (size: 0x20)

}; // Size: 0x2F0

struct FRigUnit_SetBoneRotation : public FRigUnitMutable
{
    FName bone;                                                                       // 0x01F0 (size: 0x8)
    FQuat Rotation;                                                                   // 0x0200 (size: 0x20)
    ERigVMTransformSpace Space;                                                       // 0x0220 (size: 0x1)
    float Weight;                                                                     // 0x0224 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x0228 (size: 0x1)
    FCachedRigElement CachedBone;                                                     // 0x0230 (size: 0x20)

}; // Size: 0x250

struct FRigUnit_SetBoneTransform : public FRigUnitMutable
{
    FName bone;                                                                       // 0x01F0 (size: 0x8)
    FTransform Transform;                                                             // 0x0200 (size: 0x60)
    FTransform Result;                                                                // 0x0260 (size: 0x60)
    ERigVMTransformSpace Space;                                                       // 0x02C0 (size: 0x1)
    float Weight;                                                                     // 0x02C4 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x02C8 (size: 0x1)
    FCachedRigElement CachedBone;                                                     // 0x02D0 (size: 0x20)

}; // Size: 0x2F0

struct FRigUnit_SetBoneTranslation : public FRigUnitMutable
{
    FName bone;                                                                       // 0x01F0 (size: 0x8)
    FVector Translation;                                                              // 0x01F8 (size: 0x18)
    ERigVMTransformSpace Space;                                                       // 0x0210 (size: 0x1)
    float Weight;                                                                     // 0x0214 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x0218 (size: 0x1)
    FCachedRigElement CachedBone;                                                     // 0x0220 (size: 0x20)

}; // Size: 0x240

struct FRigUnit_SetBoolAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
    bool Value;                                                                       // 0x0210 (size: 0x1)

}; // Size: 0x220

struct FRigUnit_SetBoolAnimationChannelFromItem : public FRigUnit_SetAnimationChannelBaseFromItem
{
    bool Value;                                                                       // 0x0200 (size: 0x1)

}; // Size: 0x210

struct FRigUnit_SetChannelHosts : public FRigUnit_DynamicHierarchyBaseMutable
{
    FRigElementKey Channel;                                                           // 0x01F0 (size: 0xC)
    TArray<FRigElementKey> Hosts;                                                     // 0x0200 (size: 0x10)

}; // Size: 0x210

struct FRigUnit_SetControlBool : public FRigUnitMutable
{
    FName Control;                                                                    // 0x01F0 (size: 0x8)
    bool BoolValue;                                                                   // 0x01F8 (size: 0x1)
    FCachedRigElement CachedControlIndex;                                             // 0x0200 (size: 0x20)

}; // Size: 0x220

struct FRigUnit_SetControlColor : public FRigUnitMutable
{
    FName Control;                                                                    // 0x01F0 (size: 0x8)
    FLinearColor Color;                                                               // 0x01F8 (size: 0x10)
    FCachedRigElement CachedControlIndex;                                             // 0x0208 (size: 0x20)

}; // Size: 0x230

struct FRigUnit_SetControlDrivenList : public FRigUnitMutable
{
    FName Control;                                                                    // 0x01F0 (size: 0x8)
    TArray<FRigElementKey> Driven;                                                    // 0x01F8 (size: 0x10)
    FCachedRigElement CachedControlIndex;                                             // 0x0208 (size: 0x20)

}; // Size: 0x230

struct FRigUnit_SetControlFloat : public FRigUnitMutable
{
    FName Control;                                                                    // 0x01F0 (size: 0x8)
    float Weight;                                                                     // 0x01F8 (size: 0x4)
    float FloatValue;                                                                 // 0x01FC (size: 0x4)
    FCachedRigElement CachedControlIndex;                                             // 0x0200 (size: 0x20)

}; // Size: 0x220

struct FRigUnit_SetControlInteger : public FRigUnitMutable
{
    FName Control;                                                                    // 0x01F0 (size: 0x8)
    int32 Weight;                                                                     // 0x01F8 (size: 0x4)
    int32 IntegerValue;                                                               // 0x01FC (size: 0x4)
    FCachedRigElement CachedControlIndex;                                             // 0x0200 (size: 0x20)

}; // Size: 0x220

struct FRigUnit_SetControlOffset : public FRigUnitMutable
{
    FName Control;                                                                    // 0x01F0 (size: 0x8)
    FTransform Offset;                                                                // 0x0200 (size: 0x60)
    ERigVMTransformSpace Space;                                                       // 0x0260 (size: 0x1)
    FCachedRigElement CachedControlIndex;                                             // 0x0268 (size: 0x20)

}; // Size: 0x290

struct FRigUnit_SetControlRotator : public FRigUnitMutable
{
    FName Control;                                                                    // 0x01F0 (size: 0x8)
    float Weight;                                                                     // 0x01F8 (size: 0x4)
    FRotator Rotator;                                                                 // 0x0200 (size: 0x18)
    ERigVMTransformSpace Space;                                                       // 0x0218 (size: 0x1)
    FCachedRigElement CachedControlIndex;                                             // 0x0220 (size: 0x20)

}; // Size: 0x240

struct FRigUnit_SetControlTransform : public FRigUnitMutable
{
    FName Control;                                                                    // 0x01F0 (size: 0x8)
    float Weight;                                                                     // 0x01F8 (size: 0x4)
    FTransform Transform;                                                             // 0x0200 (size: 0x60)
    ERigVMTransformSpace Space;                                                       // 0x0260 (size: 0x1)
    FCachedRigElement CachedControlIndex;                                             // 0x0268 (size: 0x20)

}; // Size: 0x290

struct FRigUnit_SetControlVector : public FRigUnitMutable
{
    FName Control;                                                                    // 0x01F0 (size: 0x8)
    float Weight;                                                                     // 0x01F8 (size: 0x4)
    FVector Vector;                                                                   // 0x0200 (size: 0x18)
    ERigVMTransformSpace Space;                                                       // 0x0218 (size: 0x1)
    FCachedRigElement CachedControlIndex;                                             // 0x0220 (size: 0x20)

}; // Size: 0x240

struct FRigUnit_SetControlVector2D : public FRigUnitMutable
{
    FName Control;                                                                    // 0x01F0 (size: 0x8)
    float Weight;                                                                     // 0x01F8 (size: 0x4)
    FVector2D Vector;                                                                 // 0x0200 (size: 0x10)
    FCachedRigElement CachedControlIndex;                                             // 0x0210 (size: 0x20)

}; // Size: 0x230

struct FRigUnit_SetControlVisibility : public FRigUnitMutable
{
    FRigElementKey Item;                                                              // 0x01F0 (size: 0xC)
    FString Pattern;                                                                  // 0x0200 (size: 0x10)
    bool bVisible;                                                                    // 0x0210 (size: 0x1)
    TArray<FCachedRigElement> CachedControlIndices;                                   // 0x0218 (size: 0x10)

}; // Size: 0x230

struct FRigUnit_SetCurveValue : public FRigUnitMutable
{
    FName Curve;                                                                      // 0x01F0 (size: 0x8)
    float Value;                                                                      // 0x01F8 (size: 0x4)
    FCachedRigElement CachedCurveIndex;                                               // 0x0200 (size: 0x20)

}; // Size: 0x220

struct FRigUnit_SetDefaultMatch : public FRigUnitMutable
{
    FRigElementKey Default;                                                           // 0x01F0 (size: 0xC)

}; // Size: 0x200

struct FRigUnit_SetDefaultParent : public FRigUnit_DynamicHierarchyBaseMutable
{
    FRigElementKey Child;                                                             // 0x01F0 (size: 0xC)
    FRigElementKey Parent;                                                            // 0x01FC (size: 0xC)

}; // Size: 0x210

struct FRigUnit_SetFloatAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
    float Value;                                                                      // 0x0210 (size: 0x4)

}; // Size: 0x220

struct FRigUnit_SetFloatAnimationChannelFromItem : public FRigUnit_SetAnimationChannelBaseFromItem
{
    float Value;                                                                      // 0x0200 (size: 0x4)

}; // Size: 0x210

struct FRigUnit_SetIntAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
    int32 Value;                                                                      // 0x0210 (size: 0x4)

}; // Size: 0x220

struct FRigUnit_SetIntAnimationChannelFromItem : public FRigUnit_SetAnimationChannelBaseFromItem
{
    int32 Value;                                                                      // 0x0200 (size: 0x4)

}; // Size: 0x210

struct FRigUnit_SetMetadataTag : public FRigUnitMutable
{
    FRigElementKey Item;                                                              // 0x01F0 (size: 0xC)
    FName Tag;                                                                        // 0x01FC (size: 0x8)
    ERigMetaDataNameSpace NameSpace;                                                  // 0x0204 (size: 0x1)
    FCachedRigElement CachedIndex;                                                    // 0x0208 (size: 0x20)

}; // Size: 0x230

struct FRigUnit_SetMetadataTagArray : public FRigUnitMutable
{
    FRigElementKey Item;                                                              // 0x01F0 (size: 0xC)
    TArray<FName> Tags;                                                               // 0x0200 (size: 0x10)
    ERigMetaDataNameSpace NameSpace;                                                  // 0x0210 (size: 0x1)
    FCachedRigElement CachedIndex;                                                    // 0x0218 (size: 0x20)

}; // Size: 0x240

struct FRigUnit_SetMultiControlBool : public FRigUnitMutable
{
    TArray<FRigUnit_SetMultiControlBool_Entry> Entries;                               // 0x01F0 (size: 0x10)
    TArray<FCachedRigElement> CachedControlIndices;                                   // 0x0200 (size: 0x10)

}; // Size: 0x210

struct FRigUnit_SetMultiControlBool_Entry
{
    FName Control;                                                                    // 0x0000 (size: 0x8)
    bool BoolValue;                                                                   // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FRigUnit_SetMultiControlFloat : public FRigUnitMutable
{
    TArray<FRigUnit_SetMultiControlFloat_Entry> Entries;                              // 0x01F0 (size: 0x10)
    float Weight;                                                                     // 0x0200 (size: 0x4)
    TArray<FCachedRigElement> CachedControlIndices;                                   // 0x0208 (size: 0x10)

}; // Size: 0x220

struct FRigUnit_SetMultiControlFloat_Entry
{
    FName Control;                                                                    // 0x0000 (size: 0x8)
    float FloatValue;                                                                 // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FRigUnit_SetMultiControlInteger : public FRigUnitMutable
{
    TArray<FRigUnit_SetMultiControlInteger_Entry> Entries;                            // 0x01F0 (size: 0x10)
    float Weight;                                                                     // 0x0200 (size: 0x4)
    TArray<FCachedRigElement> CachedControlIndices;                                   // 0x0208 (size: 0x10)

}; // Size: 0x220

struct FRigUnit_SetMultiControlInteger_Entry
{
    FName Control;                                                                    // 0x0000 (size: 0x8)
    int32 IntegerValue;                                                               // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FRigUnit_SetMultiControlRotator : public FRigUnitMutable
{
    TArray<FRigUnit_SetMultiControlRotator_Entry> Entries;                            // 0x01F0 (size: 0x10)
    float Weight;                                                                     // 0x0200 (size: 0x4)
    TArray<FCachedRigElement> CachedControlIndices;                                   // 0x0208 (size: 0x10)

}; // Size: 0x220

struct FRigUnit_SetMultiControlRotator_Entry
{
    FName Control;                                                                    // 0x0000 (size: 0x8)
    FRotator Rotator;                                                                 // 0x0008 (size: 0x18)
    ERigVMTransformSpace Space;                                                       // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FRigUnit_SetMultiControlVector2D : public FRigUnitMutable
{
    TArray<FRigUnit_SetMultiControlVector2D_Entry> Entries;                           // 0x01F0 (size: 0x10)
    float Weight;                                                                     // 0x0200 (size: 0x4)
    TArray<FCachedRigElement> CachedControlIndices;                                   // 0x0208 (size: 0x10)

}; // Size: 0x220

struct FRigUnit_SetMultiControlVector2D_Entry
{
    FName Control;                                                                    // 0x0000 (size: 0x8)
    FVector2D Vector;                                                                 // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FRigUnit_SetRelativeBoneTransform : public FRigUnitMutable
{
    FName bone;                                                                       // 0x01F0 (size: 0x8)
    FName Space;                                                                      // 0x01F8 (size: 0x8)
    FTransform Transform;                                                             // 0x0200 (size: 0x60)
    float Weight;                                                                     // 0x0260 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x0264 (size: 0x1)
    FCachedRigElement CachedBone;                                                     // 0x0268 (size: 0x20)
    FCachedRigElement CachedSpaceIndex;                                               // 0x0288 (size: 0x20)

}; // Size: 0x2B0

struct FRigUnit_SetRelativeRotationForItem : public FRigUnitMutable
{
    FRigElementKey Child;                                                             // 0x01F0 (size: 0xC)
    FRigElementKey Parent;                                                            // 0x01FC (size: 0xC)
    bool bParentInitial;                                                              // 0x0208 (size: 0x1)
    FQuat Value;                                                                      // 0x0210 (size: 0x20)
    float Weight;                                                                     // 0x0230 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x0234 (size: 0x1)
    FCachedRigElement CachedChild;                                                    // 0x0238 (size: 0x20)
    FCachedRigElement CachedParent;                                                   // 0x0258 (size: 0x20)

}; // Size: 0x280

struct FRigUnit_SetRelativeTransformForItem : public FRigUnitMutable
{
    FRigElementKey Child;                                                             // 0x01F0 (size: 0xC)
    FRigElementKey Parent;                                                            // 0x01FC (size: 0xC)
    bool bParentInitial;                                                              // 0x0208 (size: 0x1)
    FTransform Value;                                                                 // 0x0210 (size: 0x60)
    float Weight;                                                                     // 0x0270 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x0274 (size: 0x1)
    FCachedRigElement CachedChild;                                                    // 0x0278 (size: 0x20)
    FCachedRigElement CachedParent;                                                   // 0x0298 (size: 0x20)

}; // Size: 0x2C0

struct FRigUnit_SetRelativeTranslationForItem : public FRigUnitMutable
{
    FRigElementKey Child;                                                             // 0x01F0 (size: 0xC)
    FRigElementKey Parent;                                                            // 0x01FC (size: 0xC)
    bool bParentInitial;                                                              // 0x0208 (size: 0x1)
    FVector Value;                                                                    // 0x0210 (size: 0x18)
    float Weight;                                                                     // 0x0228 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x022C (size: 0x1)
    FCachedRigElement CachedChild;                                                    // 0x0230 (size: 0x20)
    FCachedRigElement CachedParent;                                                   // 0x0250 (size: 0x20)

}; // Size: 0x270

struct FRigUnit_SetRotation : public FRigUnitMutable
{
    FRigElementKey Item;                                                              // 0x01F0 (size: 0xC)
    ERigVMTransformSpace Space;                                                       // 0x01FC (size: 0x1)
    bool bInitial;                                                                    // 0x01FD (size: 0x1)
    FQuat Value;                                                                      // 0x0200 (size: 0x20)
    float Weight;                                                                     // 0x0220 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x0224 (size: 0x1)
    FCachedRigElement CachedIndex;                                                    // 0x0228 (size: 0x20)

}; // Size: 0x250

struct FRigUnit_SetRotatorAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
    FRotator Value;                                                                   // 0x0210 (size: 0x18)

}; // Size: 0x230

struct FRigUnit_SetRotatorAnimationChannelFromItem : public FRigUnit_SetAnimationChannelBaseFromItem
{
    FRotator Value;                                                                   // 0x0200 (size: 0x18)

}; // Size: 0x220

struct FRigUnit_SetScale : public FRigUnitMutable
{
    FRigElementKey Item;                                                              // 0x01F0 (size: 0xC)
    ERigVMTransformSpace Space;                                                       // 0x01FC (size: 0x1)
    bool bInitial;                                                                    // 0x01FD (size: 0x1)
    FVector scale;                                                                    // 0x0200 (size: 0x18)
    float Weight;                                                                     // 0x0218 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x021C (size: 0x1)
    FCachedRigElement CachedIndex;                                                    // 0x0220 (size: 0x20)

}; // Size: 0x240

struct FRigUnit_SetShapeTransform : public FRigUnitMutable
{
    FName Control;                                                                    // 0x01F0 (size: 0x8)
    FTransform Transform;                                                             // 0x0200 (size: 0x60)
    FCachedRigElement CachedControlIndex;                                             // 0x0260 (size: 0x20)

}; // Size: 0x280

struct FRigUnit_SetSpaceInitialTransform : public FRigUnitMutable
{
    FName SpaceName;                                                                  // 0x01F0 (size: 0x8)
    FTransform Transform;                                                             // 0x0200 (size: 0x60)
    FTransform Result;                                                                // 0x0260 (size: 0x60)
    ERigVMTransformSpace Space;                                                       // 0x02C0 (size: 0x1)
    FCachedRigElement CachedSpaceIndex;                                               // 0x02C8 (size: 0x20)

}; // Size: 0x2F0

struct FRigUnit_SetSpaceTransform : public FRigUnitMutable
{
    FName Space;                                                                      // 0x01F0 (size: 0x8)
    float Weight;                                                                     // 0x01F8 (size: 0x4)
    FTransform Transform;                                                             // 0x0200 (size: 0x60)
    ERigVMTransformSpace SpaceType;                                                   // 0x0260 (size: 0x1)
    FCachedRigElement CachedSpaceIndex;                                               // 0x0268 (size: 0x20)

}; // Size: 0x290

struct FRigUnit_SetTransform : public FRigUnitMutable
{
    FRigElementKey Item;                                                              // 0x01F0 (size: 0xC)
    ERigVMTransformSpace Space;                                                       // 0x01FC (size: 0x1)
    bool bInitial;                                                                    // 0x01FD (size: 0x1)
    FTransform Value;                                                                 // 0x0200 (size: 0x60)
    float Weight;                                                                     // 0x0260 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x0264 (size: 0x1)
    FCachedRigElement CachedIndex;                                                    // 0x0268 (size: 0x20)

}; // Size: 0x290

struct FRigUnit_SetTransformAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
    FTransform Value;                                                                 // 0x0210 (size: 0x60)

}; // Size: 0x270

struct FRigUnit_SetTransformAnimationChannelFromItem : public FRigUnit_SetAnimationChannelBaseFromItem
{
    FTransform Value;                                                                 // 0x0200 (size: 0x60)

}; // Size: 0x260

struct FRigUnit_SetTransformArray : public FRigUnitMutable
{
    FRigElementKeyCollection Items;                                                   // 0x01F0 (size: 0x10)
    ERigVMTransformSpace Space;                                                       // 0x0200 (size: 0x1)
    bool bInitial;                                                                    // 0x0201 (size: 0x1)
    TArray<FTransform> Transforms;                                                    // 0x0208 (size: 0x10)
    float Weight;                                                                     // 0x0218 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x021C (size: 0x1)
    TArray<FCachedRigElement> CachedIndex;                                            // 0x0220 (size: 0x10)

}; // Size: 0x230

struct FRigUnit_SetTransformItemArray : public FRigUnitMutable
{
    TArray<FRigElementKey> Items;                                                     // 0x01F0 (size: 0x10)
    ERigVMTransformSpace Space;                                                       // 0x0200 (size: 0x1)
    bool bInitial;                                                                    // 0x0201 (size: 0x1)
    TArray<FTransform> Transforms;                                                    // 0x0208 (size: 0x10)
    float Weight;                                                                     // 0x0218 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x021C (size: 0x1)
    TArray<FCachedRigElement> CachedIndex;                                            // 0x0220 (size: 0x10)

}; // Size: 0x230

struct FRigUnit_SetTranslation : public FRigUnitMutable
{
    FRigElementKey Item;                                                              // 0x01F0 (size: 0xC)
    ERigVMTransformSpace Space;                                                       // 0x01FC (size: 0x1)
    bool bInitial;                                                                    // 0x01FD (size: 0x1)
    FVector Value;                                                                    // 0x0200 (size: 0x18)
    float Weight;                                                                     // 0x0218 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x021C (size: 0x1)
    FCachedRigElement CachedIndex;                                                    // 0x0220 (size: 0x20)

}; // Size: 0x240

struct FRigUnit_SetVector2DAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
    FVector2D Value;                                                                  // 0x0210 (size: 0x10)

}; // Size: 0x220

struct FRigUnit_SetVector2DAnimationChannelFromItem : public FRigUnit_SetAnimationChannelBaseFromItem
{
    FVector2D Value;                                                                  // 0x0200 (size: 0x10)

}; // Size: 0x210

struct FRigUnit_SetVectorAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
    FVector Value;                                                                    // 0x0210 (size: 0x18)

}; // Size: 0x230

struct FRigUnit_SetVectorAnimationChannelFromItem : public FRigUnit_SetAnimationChannelBaseFromItem
{
    FVector Value;                                                                    // 0x0200 (size: 0x18)

}; // Size: 0x220

struct FRigUnit_SetupShapeLibraryFromUserData : public FRigUnitMutable
{
    FString NameSpace;                                                                // 0x01F0 (size: 0x10)
    FString Path;                                                                     // 0x0200 (size: 0x10)
    FString LibraryName;                                                              // 0x0210 (size: 0x10)
    bool LogShapeLibraries;                                                           // 0x0220 (size: 0x1)

}; // Size: 0x230

struct FRigUnit_ShapeExists : public FRigUnit
{
    FName ShapeName;                                                                  // 0x0008 (size: 0x8)
    bool Result;                                                                      // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FRigUnit_SlideChain : public FRigUnit_HighlevelBaseMutable
{
    FName StartBone;                                                                  // 0x01F0 (size: 0x8)
    FName EndBone;                                                                    // 0x01F8 (size: 0x8)
    float SlideAmount;                                                                // 0x0200 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x0204 (size: 0x1)
    FRigUnit_SlideChain_WorkData WorkData;                                            // 0x0208 (size: 0x48)

}; // Size: 0x250

struct FRigUnit_SlideChainItemArray : public FRigUnit_HighlevelBaseMutable
{
    TArray<FRigElementKey> Items;                                                     // 0x01F0 (size: 0x10)
    float SlideAmount;                                                                // 0x0200 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x0204 (size: 0x1)
    FRigUnit_SlideChain_WorkData WorkData;                                            // 0x0208 (size: 0x48)

}; // Size: 0x250

struct FRigUnit_SlideChainPerItem : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKeyCollection Items;                                                   // 0x01F0 (size: 0x10)
    float SlideAmount;                                                                // 0x0200 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x0204 (size: 0x1)
    FRigUnit_SlideChain_WorkData WorkData;                                            // 0x0208 (size: 0x48)

}; // Size: 0x250

struct FRigUnit_SlideChain_WorkData
{
    float ChainLength;                                                                // 0x0000 (size: 0x4)
    TArray<float> ItemSegments;                                                       // 0x0008 (size: 0x10)
    TArray<FCachedRigElement> CachedItems;                                            // 0x0018 (size: 0x10)
    TArray<FTransform> Transforms;                                                    // 0x0028 (size: 0x10)
    TArray<FTransform> BlendedTransforms;                                             // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FRigUnit_SpaceName : public FRigUnit
{
    FName Space;                                                                      // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FRigUnit_SphereTraceByObjectTypes : public FRigUnit
{
    FVector Start;                                                                    // 0x0008 (size: 0x18)
    FVector End;                                                                      // 0x0020 (size: 0x18)
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;                                // 0x0038 (size: 0x10)
    float Radius;                                                                     // 0x0048 (size: 0x4)
    bool bHit;                                                                        // 0x004C (size: 0x1)
    FVector HitLocation;                                                              // 0x0050 (size: 0x18)
    FVector HitNormal;                                                                // 0x0068 (size: 0x18)
    FRigUnit_SphereTrace_WorkData WorkData;                                           // 0x0080 (size: 0x38)

}; // Size: 0xB8

struct FRigUnit_SphereTraceByTraceChannel : public FRigUnit
{
    FVector Start;                                                                    // 0x0008 (size: 0x18)
    FVector End;                                                                      // 0x0020 (size: 0x18)
    TEnumAsByte<ETraceTypeQuery> TraceChannel;                                        // 0x0038 (size: 0x1)
    float Radius;                                                                     // 0x003C (size: 0x4)
    bool bHit;                                                                        // 0x0040 (size: 0x1)
    FVector HitLocation;                                                              // 0x0048 (size: 0x18)
    FVector HitNormal;                                                                // 0x0060 (size: 0x18)
    FRigUnit_SphereTrace_WorkData WorkData;                                           // 0x0078 (size: 0x38)

}; // Size: 0xB0

struct FRigUnit_SphereTraceWorld : public FRigUnit
{
    FVector Start;                                                                    // 0x0008 (size: 0x18)
    FVector End;                                                                      // 0x0020 (size: 0x18)
    TEnumAsByte<ECollisionChannel> Channel;                                           // 0x0038 (size: 0x1)
    float Radius;                                                                     // 0x003C (size: 0x4)
    bool bHit;                                                                        // 0x0040 (size: 0x1)
    FVector HitLocation;                                                              // 0x0048 (size: 0x18)
    FVector HitNormal;                                                                // 0x0060 (size: 0x18)
    FRigUnit_SphereTrace_WorkData WorkData;                                           // 0x0078 (size: 0x38)

}; // Size: 0xB0

struct FRigUnit_SphereTrace_WorkData
{
    uint32 Hash;                                                                      // 0x0000 (size: 0x4)
    bool bHit;                                                                        // 0x0004 (size: 0x1)
    FVector HitLocation;                                                              // 0x0008 (size: 0x18)
    FVector HitNormal;                                                                // 0x0020 (size: 0x18)

}; // Size: 0x38

struct FRigUnit_SphericalPoseReader : public FRigUnit_HighlevelBaseMutable
{
    float OutputParam;                                                                // 0x01F0 (size: 0x4)
    FRigElementKey DriverItem;                                                        // 0x01F4 (size: 0xC)
    FVector DriverAxis;                                                               // 0x0200 (size: 0x18)
    FVector RotationOffset;                                                           // 0x0218 (size: 0x18)
    float ActiveRegionSize;                                                           // 0x0230 (size: 0x4)
    FRegionScaleFactors ActiveRegionScaleFactors;                                     // 0x0234 (size: 0x10)
    float FalloffSize;                                                                // 0x0244 (size: 0x4)
    FRegionScaleFactors FalloffRegionScaleFactors;                                    // 0x0248 (size: 0x10)
    bool FlipWidthScaling;                                                            // 0x0258 (size: 0x1)
    bool FlipHeightScaling;                                                           // 0x0259 (size: 0x1)
    FRigElementKey OptionalParentItem;                                                // 0x025C (size: 0xC)
    FSphericalPoseReaderDebugSettings Debug;                                          // 0x0268 (size: 0x10)
    FSphericalRegion InnerRegion;                                                     // 0x0278 (size: 0x14)
    FSphericalRegion OuterRegion;                                                     // 0x028C (size: 0x14)
    FVector DriverNormal;                                                             // 0x02A0 (size: 0x18)
    FVector Driver2D;                                                                 // 0x02B8 (size: 0x18)
    FCachedRigElement DriverCache;                                                    // 0x02D0 (size: 0x20)
    FCachedRigElement OptionalParentCache;                                            // 0x02F0 (size: 0x20)
    FTransform LocalDriverTransformInit;                                              // 0x0310 (size: 0x60)
    FVector CachedRotationOffset;                                                     // 0x0370 (size: 0x18)
    bool bCachedInitTransforms;                                                       // 0x0388 (size: 0x1)

}; // Size: 0x390

struct FRigUnit_SpringIK : public FRigUnit_HighlevelBaseMutable
{
    FName StartBone;                                                                  // 0x01F0 (size: 0x8)
    FName EndBone;                                                                    // 0x01F8 (size: 0x8)
    float HierarchyStrength;                                                          // 0x0200 (size: 0x4)
    float EffectorStrength;                                                           // 0x0204 (size: 0x4)
    float EffectorRatio;                                                              // 0x0208 (size: 0x4)
    float RootStrength;                                                               // 0x020C (size: 0x4)
    float RootRatio;                                                                  // 0x0210 (size: 0x4)
    float Damping;                                                                    // 0x0214 (size: 0x4)
    FVector PoleVector;                                                               // 0x0218 (size: 0x18)
    bool bFlipPolePlane;                                                              // 0x0230 (size: 0x1)
    EControlRigVectorKind PoleVectorKind;                                             // 0x0231 (size: 0x1)
    FName PoleVectorSpace;                                                            // 0x0234 (size: 0x8)
    FVector PrimaryAxis;                                                              // 0x0240 (size: 0x18)
    FVector SecondaryAxis;                                                            // 0x0258 (size: 0x18)
    bool bLiveSimulation;                                                             // 0x0270 (size: 0x1)
    int32 Iterations;                                                                 // 0x0274 (size: 0x4)
    bool bLimitLocalPosition;                                                         // 0x0278 (size: 0x1)
    bool bPropagateToChildren;                                                        // 0x0279 (size: 0x1)
    FRigUnit_SpringIK_DebugSettings DebugSettings;                                    // 0x0280 (size: 0x80)
    FRigUnit_SpringIK_WorkData WorkData;                                              // 0x0300 (size: 0xB8)

}; // Size: 0x3C0

struct FRigUnit_SpringIK_DebugSettings
{
    bool bEnabled;                                                                    // 0x0000 (size: 0x1)
    float scale;                                                                      // 0x0004 (size: 0x4)
    FLinearColor Color;                                                               // 0x0008 (size: 0x10)
    FTransform WorldOffset;                                                           // 0x0020 (size: 0x60)

}; // Size: 0x80

struct FRigUnit_SpringIK_WorkData
{
    TArray<FCachedRigElement> CachedBones;                                            // 0x0000 (size: 0x10)
    FCachedRigElement CachedPoleVector;                                               // 0x0010 (size: 0x20)
    TArray<FTransform> Transforms;                                                    // 0x0030 (size: 0x10)
    FCRSimPointContainer Simulation;                                                  // 0x0040 (size: 0x78)

}; // Size: 0xB8

struct FRigUnit_SpringInterp : public FRigVMFunction_SimBase
{
    float Current;                                                                    // 0x0008 (size: 0x4)
    float Target;                                                                     // 0x000C (size: 0x4)
    float Stiffness;                                                                  // 0x0010 (size: 0x4)
    float CriticalDamping;                                                            // 0x0014 (size: 0x4)
    float Mass;                                                                       // 0x0018 (size: 0x4)
    float Result;                                                                     // 0x001C (size: 0x4)
    FFloatSpringState SpringState;                                                    // 0x0020 (size: 0xC)

}; // Size: 0x30

struct FRigUnit_SpringInterpQuaternionV2 : public FRigVMFunction_SimBase
{
    FQuat Target;                                                                     // 0x0010 (size: 0x20)
    float Strength;                                                                   // 0x0030 (size: 0x4)
    float CriticalDamping;                                                            // 0x0034 (size: 0x4)
    FVector Torque;                                                                   // 0x0038 (size: 0x18)
    bool bUseCurrentInput;                                                            // 0x0050 (size: 0x1)
    FQuat Current;                                                                    // 0x0060 (size: 0x20)
    float TargetVelocityAmount;                                                       // 0x0080 (size: 0x4)
    bool bInitializeFromTarget;                                                       // 0x0084 (size: 0x1)
    FQuat Result;                                                                     // 0x0090 (size: 0x20)
    FVector AngularVelocity;                                                          // 0x00B0 (size: 0x18)
    FQuat SimulatedResult;                                                            // 0x00D0 (size: 0x20)
    FQuaternionSpringState SpringState;                                               // 0x00F0 (size: 0x40)

}; // Size: 0x130

struct FRigUnit_SpringInterpV2 : public FRigVMFunction_SimBase
{
    float Target;                                                                     // 0x0008 (size: 0x4)
    float Strength;                                                                   // 0x000C (size: 0x4)
    float CriticalDamping;                                                            // 0x0010 (size: 0x4)
    float Force;                                                                      // 0x0014 (size: 0x4)
    bool bUseCurrentInput;                                                            // 0x0018 (size: 0x1)
    float Current;                                                                    // 0x001C (size: 0x4)
    float TargetVelocityAmount;                                                       // 0x0020 (size: 0x4)
    bool bInitializeFromTarget;                                                       // 0x0024 (size: 0x1)
    float Result;                                                                     // 0x0028 (size: 0x4)
    float Velocity;                                                                   // 0x002C (size: 0x4)
    float SimulatedResult;                                                            // 0x0030 (size: 0x4)
    FFloatSpringState SpringState;                                                    // 0x0034 (size: 0xC)

}; // Size: 0x40

struct FRigUnit_SpringInterpVector : public FRigVMFunction_SimBase
{
    FVector Current;                                                                  // 0x0008 (size: 0x18)
    FVector Target;                                                                   // 0x0020 (size: 0x18)
    float Stiffness;                                                                  // 0x0038 (size: 0x4)
    float CriticalDamping;                                                            // 0x003C (size: 0x4)
    float Mass;                                                                       // 0x0040 (size: 0x4)
    FVector Result;                                                                   // 0x0048 (size: 0x18)
    FVectorSpringState SpringState;                                                   // 0x0060 (size: 0x38)

}; // Size: 0x98

struct FRigUnit_SpringInterpVectorV2 : public FRigVMFunction_SimBase
{
    FVector Target;                                                                   // 0x0008 (size: 0x18)
    float Strength;                                                                   // 0x0020 (size: 0x4)
    float CriticalDamping;                                                            // 0x0024 (size: 0x4)
    FVector Force;                                                                    // 0x0028 (size: 0x18)
    bool bUseCurrentInput;                                                            // 0x0040 (size: 0x1)
    FVector Current;                                                                  // 0x0048 (size: 0x18)
    float TargetVelocityAmount;                                                       // 0x0060 (size: 0x4)
    bool bInitializeFromTarget;                                                       // 0x0064 (size: 0x1)
    FVector Result;                                                                   // 0x0068 (size: 0x18)
    FVector Velocity;                                                                 // 0x0080 (size: 0x18)
    FVector SimulatedResult;                                                          // 0x0098 (size: 0x18)
    FVectorSpringState SpringState;                                                   // 0x00B0 (size: 0x38)

}; // Size: 0xE8

struct FRigUnit_StartProfilingTimer : public FRigVMFunction_DebugBaseMutable
{
}; // Size: 0x120

struct FRigUnit_Subtract_FloatFloat : public FRigUnit_BinaryFloatOp
{
}; // Size: 0x18

struct FRigUnit_Subtract_VectorVector : public FRigUnit_BinaryVectorOp
{
}; // Size: 0x50

struct FRigUnit_SwitchParent : public FRigUnit_DynamicHierarchyBaseMutable
{
    ERigSwitchParentMode Mode;                                                        // 0x01F0 (size: 0x1)
    FRigElementKey Child;                                                             // 0x01F4 (size: 0xC)
    FRigElementKey Parent;                                                            // 0x0200 (size: 0xC)
    bool bMaintainGlobal;                                                             // 0x020C (size: 0x1)

}; // Size: 0x210

struct FRigUnit_ToRigSpace_Location : public FRigUnit
{
    FVector Value;                                                                    // 0x0008 (size: 0x18)
    FVector Global;                                                                   // 0x0020 (size: 0x18)

}; // Size: 0x38

struct FRigUnit_ToRigSpace_Rotation : public FRigUnit
{
    FQuat Value;                                                                      // 0x0010 (size: 0x20)
    FQuat Global;                                                                     // 0x0030 (size: 0x20)

}; // Size: 0x50

struct FRigUnit_ToRigSpace_Transform : public FRigUnit
{
    FTransform Value;                                                                 // 0x0010 (size: 0x60)
    FTransform Global;                                                                // 0x0070 (size: 0x60)

}; // Size: 0xD0

struct FRigUnit_ToSwingAndTwist : public FRigUnit
{
    FQuat Input;                                                                      // 0x0010 (size: 0x20)
    FVector TwistAxis;                                                                // 0x0030 (size: 0x18)
    FQuat Swing;                                                                      // 0x0050 (size: 0x20)
    FQuat Twist;                                                                      // 0x0070 (size: 0x20)

}; // Size: 0x90

struct FRigUnit_ToWorldSpace_Location : public FRigUnit
{
    FVector Value;                                                                    // 0x0008 (size: 0x18)
    FVector World;                                                                    // 0x0020 (size: 0x18)

}; // Size: 0x38

struct FRigUnit_ToWorldSpace_Rotation : public FRigUnit
{
    FQuat Value;                                                                      // 0x0010 (size: 0x20)
    FQuat World;                                                                      // 0x0030 (size: 0x20)

}; // Size: 0x50

struct FRigUnit_ToWorldSpace_Transform : public FRigUnit
{
    FTransform Value;                                                                 // 0x0010 (size: 0x60)
    FTransform World;                                                                 // 0x0070 (size: 0x60)

}; // Size: 0xD0

struct FRigUnit_TransformConstraint : public FRigUnit_HighlevelBaseMutable
{
    FName bone;                                                                       // 0x01F0 (size: 0x8)
    ETransformSpaceMode BaseTransformSpace;                                           // 0x01F8 (size: 0x1)
    FTransform BaseTransform;                                                         // 0x0200 (size: 0x60)
    FName BaseBone;                                                                   // 0x0260 (size: 0x8)
    TArray<FConstraintTarget> Targets;                                                // 0x0268 (size: 0x10)
    bool bUseInitialTransforms;                                                       // 0x0278 (size: 0x1)
    FRigUnit_TransformConstraint_WorkData WorkData;                                   // 0x0280 (size: 0x60)

}; // Size: 0x2E0

struct FRigUnit_TransformConstraintPerItem : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKey Item;                                                              // 0x01F0 (size: 0xC)
    ETransformSpaceMode BaseTransformSpace;                                           // 0x01FC (size: 0x1)
    FTransform BaseTransform;                                                         // 0x0200 (size: 0x60)
    FRigElementKey BaseItem;                                                          // 0x0260 (size: 0xC)
    TArray<FConstraintTarget> Targets;                                                // 0x0270 (size: 0x10)
    bool bUseInitialTransforms;                                                       // 0x0280 (size: 0x1)
    FRigUnit_TransformConstraint_WorkData WorkData;                                   // 0x0288 (size: 0x60)

}; // Size: 0x2F0

struct FRigUnit_TransformConstraint_WorkData
{
    TArray<FConstraintData> ConstraintData;                                           // 0x0000 (size: 0x10)
    TMap<int32, int32> ConstraintDataToTargets;                                       // 0x0010 (size: 0x50)

}; // Size: 0x60

struct FRigUnit_TwistBones : public FRigUnit_HighlevelBaseMutable
{
    FName StartBone;                                                                  // 0x01F0 (size: 0x8)
    FName EndBone;                                                                    // 0x01F8 (size: 0x8)
    FVector TwistAxis;                                                                // 0x0200 (size: 0x18)
    FVector PoleAxis;                                                                 // 0x0218 (size: 0x18)
    ERigVMAnimEasingType TwistEaseType;                                               // 0x0230 (size: 0x1)
    float Weight;                                                                     // 0x0234 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x0238 (size: 0x1)
    FRigUnit_TwistBones_WorkData WorkData;                                            // 0x0240 (size: 0x30)

}; // Size: 0x270

struct FRigUnit_TwistBonesPerItem : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKeyCollection Items;                                                   // 0x01F0 (size: 0x10)
    FVector TwistAxis;                                                                // 0x0200 (size: 0x18)
    FVector PoleAxis;                                                                 // 0x0218 (size: 0x18)
    ERigVMAnimEasingType TwistEaseType;                                               // 0x0230 (size: 0x1)
    float Weight;                                                                     // 0x0234 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x0238 (size: 0x1)
    FRigUnit_TwistBones_WorkData WorkData;                                            // 0x0240 (size: 0x30)

}; // Size: 0x270

struct FRigUnit_TwistBones_WorkData
{
    TArray<FCachedRigElement> CachedItems;                                            // 0x0000 (size: 0x10)
    TArray<float> ItemRatios;                                                         // 0x0010 (size: 0x10)
    TArray<FTransform> ItemTransforms;                                                // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FRigUnit_TwoBoneIKFK : public FRigUnitMutable
{
    FName StartJoint;                                                                 // 0x01F0 (size: 0x8)
    FName EndJoint;                                                                   // 0x01F8 (size: 0x8)
    FVector PoleTarget;                                                               // 0x0200 (size: 0x18)
    float Spin;                                                                       // 0x0218 (size: 0x4)
    FTransform EndEffector;                                                           // 0x0220 (size: 0x60)
    float IKBlend;                                                                    // 0x0280 (size: 0x4)
    FTransform StartJointFKTransform;                                                 // 0x0290 (size: 0x60)
    FTransform MidJointFKTransform;                                                   // 0x02F0 (size: 0x60)
    FTransform EndJointFKTransform;                                                   // 0x0350 (size: 0x60)
    float PreviousFKIKBlend;                                                          // 0x03B0 (size: 0x4)
    FTransform StartJointIKTransform;                                                 // 0x03C0 (size: 0x60)
    FTransform MidJointIKTransform;                                                   // 0x0420 (size: 0x60)
    FTransform EndJointIKTransform;                                                   // 0x0480 (size: 0x60)
    int32 StartJointIndex;                                                            // 0x04E0 (size: 0x4)
    int32 MidJointIndex;                                                              // 0x04E4 (size: 0x4)
    int32 EndJointIndex;                                                              // 0x04E8 (size: 0x4)
    float UpperLimbLength;                                                            // 0x04EC (size: 0x4)
    float LowerLimbLength;                                                            // 0x04F0 (size: 0x4)
    bool bIsInitialized;                                                              // 0x04F4 (size: 0x1)

}; // Size: 0x500

struct FRigUnit_TwoBoneIKSimple : public FRigUnit_HighlevelBaseMutable
{
    FName BoneA;                                                                      // 0x01F0 (size: 0x8)
    FName BoneB;                                                                      // 0x01F8 (size: 0x8)
    FName EffectorBone;                                                               // 0x0200 (size: 0x8)
    FTransform Effector;                                                              // 0x0210 (size: 0x60)
    FVector PrimaryAxis;                                                              // 0x0270 (size: 0x18)
    FVector SecondaryAxis;                                                            // 0x0288 (size: 0x18)
    float SecondaryAxisWeight;                                                        // 0x02A0 (size: 0x4)
    FVector PoleVector;                                                               // 0x02A8 (size: 0x18)
    EControlRigVectorKind PoleVectorKind;                                             // 0x02C0 (size: 0x1)
    FName PoleVectorSpace;                                                            // 0x02C4 (size: 0x8)
    bool bEnableStretch;                                                              // 0x02CC (size: 0x1)
    float StretchStartRatio;                                                          // 0x02D0 (size: 0x4)
    float StretchMaximumRatio;                                                        // 0x02D4 (size: 0x4)
    float Weight;                                                                     // 0x02D8 (size: 0x4)
    float BoneALength;                                                                // 0x02DC (size: 0x4)
    float BoneBLength;                                                                // 0x02E0 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x02E4 (size: 0x1)
    FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings;                             // 0x02F0 (size: 0x70)
    FCachedRigElement CachedBoneAIndex;                                               // 0x0360 (size: 0x20)
    FCachedRigElement CachedBoneBIndex;                                               // 0x0380 (size: 0x20)
    FCachedRigElement CachedEffectorBoneIndex;                                        // 0x03A0 (size: 0x20)
    FCachedRigElement CachedPoleVectorSpaceIndex;                                     // 0x03C0 (size: 0x20)

}; // Size: 0x3E0

struct FRigUnit_TwoBoneIKSimplePerItem : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKey ItemA;                                                             // 0x01F0 (size: 0xC)
    FRigElementKey ItemB;                                                             // 0x01FC (size: 0xC)
    FRigElementKey EffectorItem;                                                      // 0x0208 (size: 0xC)
    FTransform Effector;                                                              // 0x0220 (size: 0x60)
    FVector PrimaryAxis;                                                              // 0x0280 (size: 0x18)
    FVector SecondaryAxis;                                                            // 0x0298 (size: 0x18)
    float SecondaryAxisWeight;                                                        // 0x02B0 (size: 0x4)
    FVector PoleVector;                                                               // 0x02B8 (size: 0x18)
    EControlRigVectorKind PoleVectorKind;                                             // 0x02D0 (size: 0x1)
    FRigElementKey PoleVectorSpace;                                                   // 0x02D4 (size: 0xC)
    bool bEnableStretch;                                                              // 0x02E0 (size: 0x1)
    float StretchStartRatio;                                                          // 0x02E4 (size: 0x4)
    float StretchMaximumRatio;                                                        // 0x02E8 (size: 0x4)
    float Weight;                                                                     // 0x02EC (size: 0x4)
    float ItemALength;                                                                // 0x02F0 (size: 0x4)
    float ItemBLength;                                                                // 0x02F4 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x02F8 (size: 0x1)
    FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings;                             // 0x0300 (size: 0x70)
    FCachedRigElement CachedItemAIndex;                                               // 0x0370 (size: 0x20)
    FCachedRigElement CachedItemBIndex;                                               // 0x0390 (size: 0x20)
    FCachedRigElement CachedEffectorItemIndex;                                        // 0x03B0 (size: 0x20)
    FCachedRigElement CachedPoleVectorSpaceIndex;                                     // 0x03D0 (size: 0x20)

}; // Size: 0x3F0

struct FRigUnit_TwoBoneIKSimpleTransforms : public FRigUnit_HighlevelBase
{
    FTransform Root;                                                                  // 0x0010 (size: 0x60)
    FVector PoleVector;                                                               // 0x0070 (size: 0x18)
    FTransform Effector;                                                              // 0x0090 (size: 0x60)
    FVector PrimaryAxis;                                                              // 0x00F0 (size: 0x18)
    FVector SecondaryAxis;                                                            // 0x0108 (size: 0x18)
    float SecondaryAxisWeight;                                                        // 0x0120 (size: 0x4)
    bool bEnableStretch;                                                              // 0x0124 (size: 0x1)
    float StretchStartRatio;                                                          // 0x0128 (size: 0x4)
    float StretchMaximumRatio;                                                        // 0x012C (size: 0x4)
    float BoneALength;                                                                // 0x0130 (size: 0x4)
    float BoneBLength;                                                                // 0x0134 (size: 0x4)
    FTransform Elbow;                                                                 // 0x0140 (size: 0x60)

}; // Size: 0x1A0

struct FRigUnit_TwoBoneIKSimpleVectors : public FRigUnit_HighlevelBase
{
    FVector Root;                                                                     // 0x0008 (size: 0x18)
    FVector PoleVector;                                                               // 0x0020 (size: 0x18)
    FVector Effector;                                                                 // 0x0038 (size: 0x18)
    bool bEnableStretch;                                                              // 0x0050 (size: 0x1)
    float StretchStartRatio;                                                          // 0x0054 (size: 0x4)
    float StretchMaximumRatio;                                                        // 0x0058 (size: 0x4)
    float BoneALength;                                                                // 0x005C (size: 0x4)
    float BoneBLength;                                                                // 0x0060 (size: 0x4)
    FVector Elbow;                                                                    // 0x0068 (size: 0x18)

}; // Size: 0x80

struct FRigUnit_TwoBoneIKSimple_DebugSettings
{
    bool bEnabled;                                                                    // 0x0000 (size: 0x1)
    float scale;                                                                      // 0x0004 (size: 0x4)
    FTransform WorldOffset;                                                           // 0x0010 (size: 0x60)

}; // Size: 0x70

struct FRigUnit_UnaryQuaternionOp : public FRigUnit
{
    FQuat Argument;                                                                   // 0x0010 (size: 0x20)
    FQuat Result;                                                                     // 0x0030 (size: 0x20)

}; // Size: 0x50

struct FRigUnit_UnsetCurveValue : public FRigUnitMutable
{
    FName Curve;                                                                      // 0x01F0 (size: 0x8)
    FCachedRigElement CachedCurveIndex;                                               // 0x01F8 (size: 0x20)

}; // Size: 0x220

struct FRigUnit_VisualDebugQuat : public FRigUnit_DebugBase
{
    FQuat Value;                                                                      // 0x0010 (size: 0x20)
    bool bEnabled;                                                                    // 0x0030 (size: 0x1)
    float Thickness;                                                                  // 0x0034 (size: 0x4)
    float scale;                                                                      // 0x0038 (size: 0x4)
    FName BoneSpace;                                                                  // 0x003C (size: 0x8)

}; // Size: 0x50

struct FRigUnit_VisualDebugQuatItemSpace : public FRigUnit_DebugBase
{
    FQuat Value;                                                                      // 0x0010 (size: 0x20)
    bool bEnabled;                                                                    // 0x0030 (size: 0x1)
    float Thickness;                                                                  // 0x0034 (size: 0x4)
    float scale;                                                                      // 0x0038 (size: 0x4)
    FRigElementKey Space;                                                             // 0x003C (size: 0xC)

}; // Size: 0x50

struct FRigUnit_VisualDebugTransform : public FRigUnit_DebugBase
{
    FTransform Value;                                                                 // 0x0010 (size: 0x60)
    bool bEnabled;                                                                    // 0x0070 (size: 0x1)
    float Thickness;                                                                  // 0x0074 (size: 0x4)
    float scale;                                                                      // 0x0078 (size: 0x4)
    FName BoneSpace;                                                                  // 0x007C (size: 0x8)

}; // Size: 0x90

struct FRigUnit_VisualDebugTransformItemSpace : public FRigUnit_DebugBase
{
    FTransform Value;                                                                 // 0x0010 (size: 0x60)
    bool bEnabled;                                                                    // 0x0070 (size: 0x1)
    float Thickness;                                                                  // 0x0074 (size: 0x4)
    float scale;                                                                      // 0x0078 (size: 0x4)
    FRigElementKey Space;                                                             // 0x007C (size: 0xC)

}; // Size: 0x90

struct FRigUnit_VisualDebugVector : public FRigUnit_DebugBase
{
    FVector Value;                                                                    // 0x0008 (size: 0x18)
    bool bEnabled;                                                                    // 0x0020 (size: 0x1)
    ERigUnitVisualDebugPointMode Mode;                                                // 0x0021 (size: 0x1)
    FLinearColor Color;                                                               // 0x0024 (size: 0x10)
    float Thickness;                                                                  // 0x0034 (size: 0x4)
    float scale;                                                                      // 0x0038 (size: 0x4)
    FName BoneSpace;                                                                  // 0x003C (size: 0x8)

}; // Size: 0x48

struct FRigUnit_VisualDebugVectorItemSpace : public FRigUnit_DebugBase
{
    FVector Value;                                                                    // 0x0008 (size: 0x18)
    bool bEnabled;                                                                    // 0x0020 (size: 0x1)
    ERigUnitVisualDebugPointMode Mode;                                                // 0x0021 (size: 0x1)
    FLinearColor Color;                                                               // 0x0024 (size: 0x10)
    float Thickness;                                                                  // 0x0034 (size: 0x4)
    float scale;                                                                      // 0x0038 (size: 0x4)
    FRigElementKey Space;                                                             // 0x003C (size: 0xC)

}; // Size: 0x48

struct FRigVectorArrayMetadata : public FRigBaseMetadata
{
    TArray<FVector> Value;                                                            // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FRigVectorMetadata : public FRigBaseMetadata
{
    FVector Value;                                                                    // 0x0020 (size: 0x18)

}; // Size: 0x38

struct FSpaceControlNameAndChannel
{
    FName ControlName;                                                                // 0x0000 (size: 0x8)
    FMovieSceneControlRigSpaceChannel SpaceCurve;                                     // 0x0008 (size: 0x110)

}; // Size: 0x118

struct FSphericalPoseReaderDebugSettings
{
    bool bDrawDebug;                                                                  // 0x0000 (size: 0x1)
    bool bDraw2D;                                                                     // 0x0001 (size: 0x1)
    bool bDrawLocalAxes;                                                              // 0x0002 (size: 0x1)
    float DebugScale;                                                                 // 0x0004 (size: 0x4)
    int32 DebugSegments;                                                              // 0x0008 (size: 0x4)
    float DebugThickness;                                                             // 0x000C (size: 0x4)

}; // Size: 0x10

struct FSphericalRegion
{
}; // Size: 0x14

struct FStructReference
{
}; // Size: 0x8

class AControlRigControlActor : public AActor
{
    class AActor* ActorToTrack;                                                       // 0x02A8 (size: 0x8)
    TSubclassOf<class UControlRig> ControlRigClass;                                   // 0x02B0 (size: 0x8)
    bool bRefreshOnTick;                                                              // 0x02B8 (size: 0x1)
    bool bIsSelectable;                                                               // 0x02B9 (size: 0x1)
    class UMaterialInterface* MaterialOverride;                                       // 0x02C0 (size: 0x8)
    FString ColorParameter;                                                           // 0x02C8 (size: 0x10)
    bool bCastShadows;                                                                // 0x02D8 (size: 0x1)
    class USceneComponent* ActorRootComponent;                                        // 0x02E0 (size: 0x8)
    TSoftObjectPtr<UControlRig> ControlRig;                                           // 0x02E8 (size: 0x28)
    TArray<FName> ControlNames;                                                       // 0x0310 (size: 0x10)
    TArray<FTransform> ShapeTransforms;                                               // 0x0320 (size: 0x10)
    TArray<class UStaticMeshComponent*> Components;                                   // 0x0330 (size: 0x10)
    TArray<class UMaterialInstanceDynamic*> Materials;                                // 0x0340 (size: 0x10)
    FName ColorParameterName;                                                         // 0x0350 (size: 0x8)

    void ResetControlActor();
    void Refresh();
    void Clear();
}; // Size: 0x358

class AControlRigShapeActor : public AActor
{
    class USceneComponent* ActorRootComponent;                                        // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* StaticMeshComponent;                                  // 0x02B8 (size: 0x8)
    uint32 ControlRigIndex;                                                           // 0x02C0 (size: 0x4)
    TWeakObjectPtr<class UControlRig> ControlRig;                                     // 0x02C4 (size: 0x8)
    FName ControlName;                                                                // 0x02CC (size: 0x8)
    FName ShapeName;                                                                  // 0x02D4 (size: 0x8)
    FName ColorParameterName;                                                         // 0x02DC (size: 0x8)
    uint8 bSelected;                                                                  // 0x0360 (size: 0x1)
    uint8 bHovered;                                                                   // 0x0360 (size: 0x1)

    void SetSelected(bool bInSelected);
    void SetSelectable(bool bInSelectable);
    void SetHovered(bool bInHovered);
    void SetGlobalTransform(const FTransform& InTransform);
    void SetEnabled(bool bInEnabled);
    void OnTransformChanged(const FTransform& NewTransform);
    void OnSelectionChanged(bool bIsSelected);
    void OnManipulatingChanged(bool bIsManipulating);
    void OnHoveredChanged(bool bIsSelected);
    void OnEnabledChanged(bool bIsEnabled);
    bool IsSelectedInEditor();
    bool IsHovered();
    bool IsEnabled();
    FTransform GetGlobalTransform();
}; // Size: 0x370

class IRigHierarchyProvider : public IInterface
{
}; // Size: 0x28

class UAdditiveControlRig : public UControlRig
{
}; // Size: 0xAE0

class UAnimNodeControlRigLibrary : public UBlueprintFunctionLibrary
{

    FControlRigReference SetControlRigClass(const FControlRigReference& Node, TSubclassOf<class UControlRig> ControlRigClass);
    void ConvertToControlRigPure(const FAnimNodeReference& Node, FControlRigReference& ControlRig, bool& Result);
    FControlRigReference ConvertToControlRig(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
}; // Size: 0x28

class UControlRig : public URigVMHost
{
    ERigExecutionType ExecutionType;                                                  // 0x02A0 (size: 0x1)
    FRigHierarchySettings HierarchySettings;                                          // 0x02A4 (size: 0x4)
    TMap<class FRigElementKey, class FRigControlElementCustomization> ControlCustomizations; // 0x02A8 (size: 0x50)
    class URigHierarchy* DynamicHierarchy;                                            // 0x02F8 (size: 0x8)
    TArray<TSoftObjectPtr<UControlRigShapeLibrary>> ShapeLibraries;                   // 0x0300 (size: 0x10)
    TMap<class FString, class FString> ShapeLibraryNameMap;                           // 0x0310 (size: 0x50)
    FRigVMExtendedExecuteContext RigVMExtendedExecuteContext;                         // 0x0370 (size: 0x228)
    class UAnimationDataSourceRegistry* DataSourceRegistry;                           // 0x05A0 (size: 0x8)
    FRigInfluenceMapPerEvent Influences;                                              // 0x0650 (size: 0x60)
    TMap<class FName, class UDataAssetLink*> ExternalVariableDataAssetLinks;          // 0x0768 (size: 0x50)
    FControlRigOnControlSelected_BP OnControlSelected_BP;                             // 0x0888 (size: 0x1)
    void OnControlSelectedBP(class UControlRig* Rig, const FRigControlElement& Control, bool bSelected);
    bool bIsAdditive;                                                                 // 0x08A0 (size: 0x1)
    FRigModuleSettings RigModuleSettings;                                             // 0x0A40 (size: 0x80)
    FString RigModuleNameSpace;                                                       // 0x0AC0 (size: 0x10)

    bool SupportsBackwardsSolve();
    void SetInteractionRigClass(TSubclassOf<class UControlRig> InInteractionRigClass);
    void SetInteractionRig(class UControlRig* InInteractionRig);
    void SelectControl(const FName& InControlName, bool bSelect);
    void RequestConstruction();
    void OnControlSelectedBP__DelegateSignature(class UControlRig* Rig, const FRigControlElement& Control, bool bSelected);
    bool IsControlSelected(const FName& InControlName);
    TSubclassOf<class UControlRig> GetInteractionRigClass();
    class UControlRig* GetInteractionRig();
    class AActor* GetHostingActor();
    class URigHierarchy* GetHierarchy();
    TArray<class UControlRig*> FindControlRigs(class UObject* Outer, TSubclassOf<class UControlRig> OptionalClass);
    TArray<FName> CurrentControlSelection();
    class UTransformableControlHandle* CreateTransformableControlHandle(const FName& ControlName);
    bool ClearControlSelection();
    FRigPhysicsSolverID AddPhysicsSolver(FName InName, bool bSetupUndo, bool bPrintPythonCommand);
}; // Size: 0xAD0

class UControlRigAnimInstance : public UAnimInstance
{
}; // Size: 0x3C0

class UControlRigBlueprintGeneratedClass : public URigVMBlueprintGeneratedClass
{
}; // Size: 0x388

class UControlRigComponent : public UPrimitiveComponent
{
    TSubclassOf<class UControlRig> ControlRigClass;                                   // 0x04E8 (size: 0x8)
    FControlRigComponentOnPreInitializeDelegate OnPreInitializeDelegate;              // 0x04F0 (size: 0x10)
    void ControlRigComponentDelegate(class UControlRigComponent* Component);
    FControlRigComponentOnPostInitializeDelegate OnPostInitializeDelegate;            // 0x0500 (size: 0x10)
    void ControlRigComponentDelegate(class UControlRigComponent* Component);
    FControlRigComponentOnPreConstructionDelegate OnPreConstructionDelegate;          // 0x0510 (size: 0x10)
    void ControlRigComponentDelegate(class UControlRigComponent* Component);
    FControlRigComponentOnPostConstructionDelegate OnPostConstructionDelegate;        // 0x0520 (size: 0x10)
    void ControlRigComponentDelegate(class UControlRigComponent* Component);
    FControlRigComponentOnPreForwardsSolveDelegate OnPreForwardsSolveDelegate;        // 0x0530 (size: 0x10)
    void ControlRigComponentDelegate(class UControlRigComponent* Component);
    FControlRigComponentOnPostForwardsSolveDelegate OnPostForwardsSolveDelegate;      // 0x0540 (size: 0x10)
    void ControlRigComponentDelegate(class UControlRigComponent* Component);
    TArray<FControlRigComponentMappedElement> UserDefinedElements;                    // 0x0550 (size: 0x10)
    TArray<FControlRigComponentMappedElement> MappedElements;                         // 0x0560 (size: 0x10)
    bool bEnableLazyEvaluation;                                                       // 0x0570 (size: 0x1)
    float LazyEvaluationPositionThreshold;                                            // 0x0574 (size: 0x4)
    float LazyEvaluationRotationThreshold;                                            // 0x0578 (size: 0x4)
    float LazyEvaluationScaleThreshold;                                               // 0x057C (size: 0x4)
    bool bResetTransformBeforeTick;                                                   // 0x0580 (size: 0x1)
    bool bResetInitialsBeforeConstruction;                                            // 0x0581 (size: 0x1)
    bool bUpdateRigOnTick;                                                            // 0x0582 (size: 0x1)
    bool bUpdateInEditor;                                                             // 0x0583 (size: 0x1)
    bool bDrawBones;                                                                  // 0x0584 (size: 0x1)
    bool bShowDebugDrawing;                                                           // 0x0585 (size: 0x1)
    class UControlRig* ControlRig;                                                    // 0x0588 (size: 0x8)

    void Update(float DeltaTime);
    void SetObjectBinding(class UObject* InObjectToBind);
    void SetMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements);
    void SetInitialSpaceTransform(FName SpaceName, FTransform InitialTransform, EControlRigComponentSpace Space);
    void SetInitialBoneTransform(FName BoneName, FTransform InitialTransform, EControlRigComponentSpace Space, bool bPropagateToChildren);
    void SetControlVector2D(FName ControlName, FVector2D Value);
    void SetControlTransform(FName ControlName, FTransform Value, EControlRigComponentSpace Space);
    void SetControlScale(FName ControlName, FVector Value, EControlRigComponentSpace Space);
    void SetControlRotator(FName ControlName, FRotator Value, EControlRigComponentSpace Space);
    void SetControlRigClass(TSubclassOf<class UControlRig> InControlRigClass);
    void SetControlPosition(FName ControlName, FVector Value, EControlRigComponentSpace Space);
    void SetControlOffset(FName ControlName, FTransform OffsetTransform, EControlRigComponentSpace Space);
    void SetControlInt(FName ControlName, int32 Value);
    void SetControlFloat(FName ControlName, float Value);
    void SetControlBool(FName ControlName, bool Value);
    void SetBoneTransform(FName BoneName, FTransform Transform, EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren);
    void SetBoneInitialTransformsFromSkeletalMesh(class USkeletalMesh* InSkeletalMesh);
    void OnPreInitialize(class UControlRigComponent* Component);
    void OnPreForwardsSolve(class UControlRigComponent* Component);
    void OnPreConstruction(class UControlRigComponent* Component);
    void OnPostInitialize(class UControlRigComponent* Component);
    void OnPostForwardsSolve(class UControlRigComponent* Component);
    void OnPostConstruction(class UControlRigComponent* Component);
    void Initialize();
    FTransform GetSpaceTransform(FName SpaceName, EControlRigComponentSpace Space);
    FTransform GetInitialSpaceTransform(FName SpaceName, EControlRigComponentSpace Space);
    FTransform GetInitialBoneTransform(FName BoneName, EControlRigComponentSpace Space);
    TArray<FName> GetElementNames(ERigElementType ElementType);
    FVector2D GetControlVector2D(FName ControlName);
    FTransform GetControlTransform(FName ControlName, EControlRigComponentSpace Space);
    FVector GetControlScale(FName ControlName, EControlRigComponentSpace Space);
    FRotator GetControlRotator(FName ControlName, EControlRigComponentSpace Space);
    class UControlRig* GetControlRig();
    FVector GetControlPosition(FName ControlName, EControlRigComponentSpace Space);
    FTransform GetControlOffset(FName ControlName, EControlRigComponentSpace Space);
    int32 GetControlInt(FName ControlName);
    float GetControlFloat(FName ControlName);
    bool GetControlBool(FName ControlName);
    FTransform GetBoneTransform(FName BoneName, EControlRigComponentSpace Space);
    float GetAbsoluteTime();
    bool DoesElementExist(FName Name, ERigElementType ElementType);
    void ClearMappedElements();
    bool CanExecute();
    void AddMappedSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FControlRigComponentMappedBone> Bones, TArray<FControlRigComponentMappedCurve> Curves, const EControlRigComponentMapDirection InDirection);
    void AddMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements);
    void AddMappedComponents(TArray<FControlRigComponentMappedComponent> Components);
    void AddMappedCompleteSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, const EControlRigComponentMapDirection InDirection);
}; // Size: 0x650

class UControlRigEditorSettings : public URigVMEditorSettings
{
}; // Size: 0x38

class UControlRigLayerInstance : public UAnimInstance
{
}; // Size: 0x3C0

class UControlRigNumericalValidationPass : public UControlRigValidationPass
{
    bool bCheckControls;                                                              // 0x0028 (size: 0x1)
    bool bCheckBones;                                                                 // 0x0029 (size: 0x1)
    bool bCheckCurves;                                                                // 0x002A (size: 0x1)
    float TranslationPrecision;                                                       // 0x002C (size: 0x4)
    float RotationPrecision;                                                          // 0x0030 (size: 0x4)
    float ScalePrecision;                                                             // 0x0034 (size: 0x4)
    float CurvePrecision;                                                             // 0x0038 (size: 0x4)
    FName EventNameA;                                                                 // 0x003C (size: 0x8)
    FName EventNameB;                                                                 // 0x0044 (size: 0x8)
    FRigPose Pose;                                                                    // 0x0050 (size: 0x70)

}; // Size: 0xC0

class UControlRigPoseAsset : public UObject
{
    FControlRigControlPose Pose;                                                      // 0x0028 (size: 0x60)

    void SelectControls(class UControlRig* InControlRig, bool bDoMirror);
    void SavePose(class UControlRig* InControlRig, bool bUseAll);
    void ReplaceControlName(const FName& CurrentName, const FName& NewName);
    void PastePose(class UControlRig* InControlRig, bool bDoKey, bool bDoMirror);
    void GetCurrentPose(class UControlRig* InControlRig, FControlRigControlPose& OutPose);
    TArray<FName> GetControlNames();
    bool DoesMirrorMatch(class UControlRig* ControlRig, const FName& ControlName);
}; // Size: 0x88

class UControlRigPoseMirrorSettings : public UObject
{
    FString RightSide;                                                                // 0x0028 (size: 0x10)
    FString LeftSide;                                                                 // 0x0038 (size: 0x10)
    TEnumAsByte<EAxis::Type> MirrorAxis;                                              // 0x0048 (size: 0x1)
    TEnumAsByte<EAxis::Type> AxisToFlip;                                              // 0x0049 (size: 0x1)

}; // Size: 0x50

class UControlRigPoseProjectSettings : public UObject
{
    TArray<FDirectoryPath> RootSaveDirs;                                              // 0x0028 (size: 0x10)

}; // Size: 0x38

class UControlRigSettings : public UDeveloperSettings
{
}; // Size: 0x38

class UControlRigShapeLibrary : public UObject
{
    FControlRigShapeDefinition DefaultShape;                                          // 0x0030 (size: 0xA0)
    TSoftObjectPtr<UMaterial> DefaultMaterial;                                        // 0x00D0 (size: 0x28)
    TSoftObjectPtr<UMaterial> XRayMaterial;                                           // 0x00F8 (size: 0x28)
    FName MaterialColorParameter;                                                     // 0x0120 (size: 0x8)
    TArray<FControlRigShapeDefinition> Shapes;                                        // 0x0128 (size: 0x10)

}; // Size: 0x150

class UControlRigShapeLibraryLink : public UNameSpacedUserData
{
    TSoftObjectPtr<UControlRigShapeLibrary> ShapeLibrary;                             // 0x0100 (size: 0x28)
    TArray<FName> ShapeNames;                                                         // 0x0128 (size: 0x10)
    class UControlRigShapeLibrary* ShapeLibraryCached;                                // 0x0138 (size: 0x8)

    void SetShapeLibrary(TSoftObjectPtr<UControlRigShapeLibrary> InShapeLibrary);
    TSoftObjectPtr<UControlRigShapeLibrary> GetShapeLibrary();
}; // Size: 0x140

class UControlRigTestData : public UObject
{
    FSoftObjectPath ControlRigObjectPath;                                             // 0x0028 (size: 0x20)
    FControlRigTestDataFrame Initial;                                                 // 0x0048 (size: 0x90)
    TArray<FControlRigTestDataFrame> InputFrames;                                     // 0x00D8 (size: 0x10)
    TArray<FControlRigTestDataFrame> OutputFrames;                                    // 0x00E8 (size: 0x10)
    TArray<int32> FramesToSkip;                                                       // 0x00F8 (size: 0x10)
    double Tolerance;                                                                 // 0x0108 (size: 0x8)

    bool SetupReplay(class UControlRig* InControlRig, bool bGroundTruth);
    void ReleaseReplay();
    bool Record(class UControlRig* InControlRig, double InRecordingDuration);
    bool IsReplaying();
    bool IsRecording();
    FVector2D GetTimeRange(bool bInput);
    EControlRigTestDataPlaybackMode GetPlaybackMode();
    int32 GetFrameIndexForTime(double InSeconds, bool bInput);
    class UControlRigTestData* CreateNewAsset(FString InDesiredPackagePath, FString InBlueprintPathName);
}; // Size: 0x150

class UControlRigTransformWorkflowOptions : public UControlRigWorkflowOptions
{
    TEnumAsByte<ERigTransformType::Type> TransformType;                               // 0x00B0 (size: 0x1)

    TArray<FRigVMUserWorkflow> ProvideWorkflows(const class UObject* InSubject);
}; // Size: 0xB8

class UControlRigValidationPass : public UObject
{
}; // Size: 0x28

class UControlRigValidator : public UObject
{
    TArray<class UControlRigValidationPass*> Passes;                                  // 0x0028 (size: 0x10)

}; // Size: 0x68

class UControlRigWorkflowOptions : public URigVMUserWorkflowOptions
{
    class URigHierarchy* Hierarchy;                                                   // 0x0098 (size: 0x8)
    TArray<FRigElementKey> Selection;                                                 // 0x00A0 (size: 0x10)

    bool EnsureAtLeastOneRigElementSelected();
}; // Size: 0xB0

class UDefault__ControlRigBlueprintGeneratedClass
{
}; // Size: 0x0

class UFKControlRig : public UControlRig
{
    TArray<bool> IsControlActive;                                                     // 0x0AD0 (size: 0x10)
    EControlRigFKRigExecuteMode ApplyMode;                                            // 0x0AE0 (size: 0x1)

}; // Size: 0xB10

class UModularRig : public UControlRig
{
    TArray<FRigModuleInstance> Modules;                                               // 0x0AD0 (size: 0x10)
    FModularRigSettings ModularRigSettings;                                           // 0x0B00 (size: 0x1)
    FModularRigModel ModularRigModel;                                                 // 0x0B08 (size: 0xB0)
    TArray<FRigModuleExecutionElement> ExecutionQueue;                                // 0x0BB8 (size: 0x10)

}; // Size: 0xC70

class UModularRigController : public UObject
{

    bool UnBindModuleVariable(FString InModulePath, const FName& InVariableName, bool bSetupUndo);
    bool SwapModulesOfClass(TSubclassOf<class UControlRig> InOldClass, TSubclassOf<class UControlRig> InNewClass, bool bSetupUndo);
    bool SwapModuleClass(FString InModulePath, TSubclassOf<class UControlRig> InNewClass, bool bSetupUndo);
    bool SetModuleShortName(FString InModulePath, FString InNewShortName, bool bSetupUndo);
    bool SetModuleSelection(const TArray<FString>& InModulePaths);
    bool SetConfigValueInModule(FString InModulePath, const FName& InVariableName, FString InValue, bool bSetupUndo);
    bool SelectModule(FString InModulePath, const bool InSelected);
    FString ReparentModule(FString InModulePath, FString InNewParentModulePath, bool bSetupUndo);
    FString RenameModule(FString InModulePath, const FName& InNewName, bool bSetupUndo);
    FString MirrorModule(FString InModulePath, const FRigVMMirrorSettings& InSettings, bool bSetupUndo);
    TArray<FString> GetSelectedModules();
    TArray<FRigElementKey> DisconnectCyclicConnectors(bool bSetupUndo);
    bool DisconnectConnector(const FRigElementKey& InConnectorKey, bool bDisconnectSubModules, bool bSetupUndo);
    bool DeselectModule(FString InModulePath);
    bool DeleteModule(FString InModulePath, bool bSetupUndo);
    bool ConnectConnectorToElement(const FRigElementKey& InConnectorKey, const FRigElementKey& InTargetKey, bool bSetupUndo, bool bAutoResolveOtherConnectors, bool bCheckValidConnection);
    bool CanConnectConnectorToElement(const FRigElementKey& InConnectorKey, const FRigElementKey& InTargetKey, FText& OutErrorMessage);
    bool BindModuleVariable(FString InModulePath, const FName& InVariableName, FString InSourcePath, bool bSetupUndo);
    bool AutoConnectSecondaryConnectors(const TArray<FRigElementKey>& InConnectorKeys, bool bReplaceExistingConnections, bool bSetupUndo);
    bool AutoConnectModules(const TArray<FString>& InModulePaths, bool bReplaceExistingConnections, bool bSetupUndo);
    FString AddModule(const FName& InModuleName, TSubclassOf<class UControlRig> InClass, FString InParentModulePath, bool bSetupUndo);
}; // Size: 0x50

class UModularRigRuleManager : public UObject
{
}; // Size: 0x30

class UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection
{
    class UControlRig* ControlRig;                                                    // 0x01A8 (size: 0x8)
    TSubclassOf<class UControlRig> ControlRigClass;                                   // 0x01B0 (size: 0x8)
    TArray<bool> ControlsMask;                                                        // 0x01B8 (size: 0x10)
    TSet<FName> ControlNameMask;                                                      // 0x01C8 (size: 0x50)
    FMovieSceneTransformMask TransformMask;                                           // 0x0218 (size: 0x4)
    FMovieSceneFloatChannel Weight;                                                   // 0x0220 (size: 0x110)
    TMap<class FName, class FChannelMapInfo> ControlChannelMap;                       // 0x0330 (size: 0x50)
    TArray<FEnumParameterNameAndCurve> EnumParameterNamesAndCurves;                   // 0x0380 (size: 0x10)
    TArray<FIntegerParameterNameAndCurve> IntegerParameterNamesAndCurves;             // 0x0390 (size: 0x10)
    TArray<FSpaceControlNameAndChannel> SpaceChannels;                                // 0x03A0 (size: 0x10)
    TArray<FConstraintAndActiveChannel> ConstraintsChannels;                          // 0x03B0 (size: 0x10)

}; // Size: 0x428

class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack
{
    TMap<class FName, class TWeakObjectPtr<UMovieSceneSection>> SectionToKeyPerControl; // 0x0110 (size: 0x50)
    class UControlRig* ControlRig;                                                    // 0x0198 (size: 0x8)
    class UMovieSceneSection* SectionToKey;                                           // 0x01A0 (size: 0x8)
    TArray<class UMovieSceneSection*> Sections;                                       // 0x01A8 (size: 0x10)
    FName TrackName;                                                                  // 0x01B8 (size: 0x8)
    TMap<class FName, class FControlRotationOrder> ControlsRotationOrder;             // 0x01C0 (size: 0x50)
    int32 PriorityOrder;                                                              // 0x0210 (size: 0x4)
    TMap<class TWeakObjectPtr<UWorld>, class UControlRig*> GameWorldControlRigs;      // 0x0218 (size: 0x50)

}; // Size: 0x268

class URigHierarchy : public UObject
{
    FRigHierarchyModifiedEventDynamic ModifiedEventDynamic;                           // 0x0040 (size: 0x10)
    void RigHierarchyModifiedDynamicEvent(ERigHierarchyNotification NotifType, class URigHierarchy* Hierarchy, FRigElementKey Subject);
    uint32 TopologyVersion;                                                           // 0x00A8 (size: 0x4)
    uint32 MetadataVersion;                                                           // 0x00AC (size: 0x4)
    uint16 MetadataTagVersion;                                                        // 0x00B0 (size: 0x2)
    bool bEnableDirtyPropagation;                                                     // 0x00B2 (size: 0x1)
    int32 TransformStackIndex;                                                        // 0x02AC (size: 0x4)
    class URigHierarchyController* HierarchyController;                               // 0x0328 (size: 0x8)
    class UModularRigRuleManager* RuleManager;                                        // 0x0338 (size: 0x8)
    TMap<class FRigElementKey, class FRigElementKey> PreviousNameMap;                 // 0x0390 (size: 0x50)
    class URigHierarchy* HierarchyForCacheValidation;                                 // 0x04D0 (size: 0x8)

    void UnsetCurveValueByIndex(int32 InElementIndex, bool bSetupUndo);
    void UnsetCurveValue(FRigElementKey InKey, bool bSetupUndo);
    bool SwitchToWorldSpace(FRigElementKey InChild, bool bInitial, bool bAffectChildren);
    bool SwitchToParent(FRigElementKey InChild, FRigElementKey InParent, bool bInitial, bool bAffectChildren);
    bool SwitchToDefaultParent(FRigElementKey InChild, bool bInitial, bool bAffectChildren);
    TArray<FRigElementKey> SortKeys(const TArray<FRigElementKey>& InKeys);
    bool SetVectorMetadata(FRigElementKey InItem, FName InMetadataName, FVector InValue);
    bool SetVectorArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FVector> InValue);
    bool SetTransformMetadata(FRigElementKey InItem, FName InMetadataName, FTransform InValue);
    bool SetTransformArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FTransform> InValue);
    bool SetTag(FRigElementKey InItem, FName InTag);
    bool SetRotatorMetadata(FRigElementKey InItem, FName InMetadataName, FRotator InValue);
    bool SetRotatorArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FRotator> InValue);
    bool SetRigElementKeyMetadata(FRigElementKey InItem, FName InMetadataName, FRigElementKey InValue);
    bool SetRigElementKeyArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FRigElementKey> InValue);
    bool SetQuatMetadata(FRigElementKey InItem, FName InMetadataName, FQuat InValue);
    bool SetQuatArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FQuat> InValue);
    void SetPose_ForBlueprint(FRigPose InPose);
    bool SetParentWeightArray(FRigElementKey InChild, TArray<FRigElementWeight> InWeights, bool bInitial, bool bAffectChildren);
    bool SetParentWeight(FRigElementKey InChild, FRigElementKey InParent, FRigElementWeight InWeight, bool bInitial, bool bAffectChildren);
    bool SetNameMetadata(FRigElementKey InItem, FName InMetadataName, FName InValue);
    bool SetNameArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FName> InValue);
    void SetLocalTransformByIndex(int32 InElementIndex, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
    void SetLocalTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
    bool SetLinearColorMetadata(FRigElementKey InItem, FName InMetadataName, FLinearColor InValue);
    bool SetLinearColorArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FLinearColor> InValue);
    bool SetInt32Metadata(FRigElementKey InItem, FName InMetadataName, int32 InValue);
    bool SetInt32ArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<int32> InValue);
    void SetGlobalTransformByIndex(int32 InElementIndex, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand);
    void SetGlobalTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand);
    bool SetFloatMetadata(FRigElementKey InItem, FName InMetadataName, float InValue);
    bool SetFloatArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<float> InValue);
    void SetCurveValueByIndex(int32 InElementIndex, float InValue, bool bSetupUndo);
    void SetCurveValue(FRigElementKey InKey, float InValue, bool bSetupUndo);
    void SetControlVisibilityByIndex(int32 InElementIndex, bool bVisibility);
    void SetControlVisibility(FRigElementKey InKey, bool bVisibility);
    void SetControlValueByIndex(int32 InElementIndex, FRigControlValue InValue, ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands);
    void SetControlValue(FRigElementKey InKey, FRigControlValue InValue, ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands);
    void SetControlShapeTransformByIndex(int32 InElementIndex, FTransform InTransform, bool bInitial, bool bSetupUndo);
    void SetControlShapeTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bSetupUndo);
    void SetControlSettingsByIndex(int32 InElementIndex, FRigControlSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands);
    void SetControlSettings(FRigElementKey InKey, FRigControlSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands);
    void SetControlPreferredRotatorByIndex(int32 InElementIndex, const FRotator& InRotator, bool bInitial, bool bFixEulerFlips);
    void SetControlPreferredRotator(FRigElementKey InKey, const FRotator& InRotator, bool bInitial, bool bFixEulerFlips);
    void SetControlPreferredRotationOrderByIndex(int32 InElementIndex, EEulerRotationOrder InRotationOrder);
    void SetControlPreferredRotationOrder(FRigElementKey InKey, EEulerRotationOrder InRotationOrder);
    void SetControlPreferredEulerAnglesByIndex(int32 InElementIndex, const FVector& InEulerAngles, EEulerRotationOrder InRotationOrder, bool bInitial, bool bFixEulerFlips);
    void SetControlPreferredEulerAngles(FRigElementKey InKey, const FVector& InEulerAngles, EEulerRotationOrder InRotationOrder, bool bInitial, bool bFixEulerFlips);
    void SetControlOffsetTransformByIndex(int32 InElementIndex, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
    void SetControlOffsetTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
    void SetConnectorSettingsByIndex(int32 InElementIndex, FRigConnectorSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands);
    void SetConnectorSettings(FRigElementKey InKey, FRigConnectorSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands);
    bool SetBoolMetadata(FRigElementKey InItem, FName InMetadataName, bool InValue);
    bool SetBoolArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<bool> InValue);
    void SendAutoKeyEvent(FRigElementKey InElement, float InOffsetInSeconds, bool bAsynchronous);
    TArray<FRigElementKey> RestoreSocketsFromStates(TArray<FRigSocketState> InStates, bool bSetupUndoRedo);
    TArray<FRigElementKey> RestoreConnectorsFromStates(TArray<FRigConnectorState> InStates, bool bSetupUndoRedo);
    void ResetToDefault();
    void ResetPoseToInitial(ERigElementType InTypeFilter);
    void ResetCurveValues();
    void Reset();
    bool RemoveMetadata(FRigElementKey InItem, FName InMetadataName);
    bool RemoveAllMetadata(FRigElementKey InItem);
    int32 Num();
    FRigControlValue MakeControlValueFromVector2D(FVector2D InValue);
    FRigControlValue MakeControlValueFromVector(FVector InValue);
    FRigControlValue MakeControlValueFromTransformNoScale(FTransformNoScale InValue);
    FRigControlValue MakeControlValueFromTransform(FTransform InValue);
    FRigControlValue MakeControlValueFromRotator(FRotator InValue);
    FRigControlValue MakeControlValueFromInt(int32 InValue);
    FRigControlValue MakeControlValueFromFloat(float InValue);
    FRigControlValue MakeControlValueFromEulerTransform(FEulerTransform InValue);
    FRigControlValue MakeControlValueFromBool(bool InValue);
    bool IsValidIndex(int32 InElementIndex);
    bool IsSelectedByIndex(int32 InIndex);
    bool IsSelected(FRigElementKey InKey);
    bool IsProcedural(const FRigElementKey& InKey);
    bool IsParentedTo(FRigElementKey InChild, FRigElementKey InParent);
    bool IsCurveValueSetByIndex(int32 InElementIndex);
    bool IsCurveValueSet(FRigElementKey InKey);
    bool IsControllerAvailable();
    bool HasTag(FRigElementKey InItem, FName InTag);
    FVector GetVectorMetadata(FRigElementKey InItem, FName InMetadataName, FVector DefaultValue);
    FVector GetVectorFromControlValue(FRigControlValue InValue);
    TArray<FVector> GetVectorArrayMetadata(FRigElementKey InItem, FName InMetadataName);
    FVector2D GetVector2DFromControlValue(FRigControlValue InValue);
    FTransformNoScale GetTransformNoScaleFromControlValue(FRigControlValue InValue);
    FTransform GetTransformMetadata(FRigElementKey InItem, FName InMetadataName, FTransform DefaultValue);
    FTransform GetTransformFromControlValue(FRigControlValue InValue);
    TArray<FTransform> GetTransformArrayMetadata(FRigElementKey InItem, FName InMetadataName);
    TArray<FName> GetTags(FRigElementKey InItem);
    TArray<FRigSocketState> GetSocketStates();
    TArray<FRigElementKey> GetSocketKeys(bool bTraverse);
    TArray<FRigElementKey> GetSelectedKeys(ERigElementType InTypeFilter);
    class UModularRigRuleManager* GetRuleManager(bool bCreateIfNeeded);
    FRotator GetRotatorMetadata(FRigElementKey InItem, FName InMetadataName, FRotator DefaultValue);
    FRotator GetRotatorFromControlValue(FRigControlValue InValue);
    TArray<FRotator> GetRotatorArrayMetadata(FRigElementKey InItem, FName InMetadataName);
    TArray<FRigElementKey> GetRootElementKeys();
    FRigElementKey GetRigElementKeyMetadata(FRigElementKey InItem, FName InMetadataName, FRigElementKey DefaultValue);
    TArray<FRigElementKey> GetRigElementKeyArrayMetadata(FRigElementKey InItem, FName InMetadataName);
    TArray<FRigElementKey> GetReferenceKeys(bool bTraverse);
    FQuat GetQuatMetadata(FRigElementKey InItem, FName InMetadataName, FQuat DefaultValue);
    TArray<FQuat> GetQuatArrayMetadata(FRigElementKey InItem, FName InMetadataName);
    FRigElementKey GetPreviousParent(const FRigElementKey& InKey);
    FName GetPreviousName(const FRigElementKey& InKey);
    FRigPose GetPose(bool bInitial, bool bIncludeTransientControls);
    TArray<FRigElementKey> GetPhysicsKeys(bool bTraverse);
    TArray<FRigElementWeight> GetParentWeightArray(FRigElementKey InChild, bool bInitial);
    FRigElementWeight GetParentWeight(FRigElementKey InChild, FRigElementKey InParent, bool bInitial);
    FTransform GetParentTransformByIndex(int32 InElementIndex, bool bInitial);
    FTransform GetParentTransform(FRigElementKey InKey, bool bInitial);
    TArray<FRigElementKey> GetParents(FRigElementKey InKey, bool bRecursive);
    int32 GetNumberOfParents(FRigElementKey InKey);
    TArray<FRigElementKey> GetNullKeys(bool bTraverse);
    FName GetNameSpaceFName(FRigElementKey InItem);
    FString GetNameSpace(FRigElementKey InItem);
    FName GetNameMetadata(FRigElementKey InItem, FName InMetadataName, FName DefaultValue);
    TArray<FName> GetNameArrayMetadata(FRigElementKey InItem, FName InMetadataName);
    FName GetModulePathFName(FRigElementKey InItem);
    FString GetModulePath(FRigElementKey InItem);
    ERigMetadataType GetMetadataType(FRigElementKey InItem, FName InMetadataName);
    TArray<FName> GetMetadataNames(FRigElementKey InItem);
    FTransform GetLocalTransformByIndex(int32 InElementIndex, bool bInitial);
    FTransform GetLocalTransform(FRigElementKey InKey, bool bInitial);
    int32 GetLocalIndex_ForBlueprint(FRigElementKey InKey);
    FTransform GetLocalControlShapeTransformByIndex(int32 InElementIndex, bool bInitial);
    FTransform GetLocalControlShapeTransform(FRigElementKey InKey, bool bInitial);
    FLinearColor GetLinearColorMetadata(FRigElementKey InItem, FName InMetadataName, FLinearColor DefaultValue);
    TArray<FLinearColor> GetLinearColorArrayMetadata(FRigElementKey InItem, FName InMetadataName);
    TArray<FRigElementKey> GetKeys(const TArray<int32> InElementIndices);
    FRigElementKey GetKey(int32 InElementIndex);
    int32 GetIntFromControlValue(FRigControlValue InValue);
    int32 GetInt32Metadata(FRigElementKey InItem, FName InMetadataName, int32 DefaultValue);
    TArray<int32> GetInt32ArrayMetadata(FRigElementKey InItem, FName InMetadataName);
    int32 GetIndex_ForBlueprint(FRigElementKey InKey);
    FTransform GetGlobalTransformByIndex(int32 InElementIndex, bool bInitial);
    FTransform GetGlobalTransform(FRigElementKey InKey, bool bInitial);
    FTransform GetGlobalControlShapeTransformByIndex(int32 InElementIndex, bool bInitial);
    FTransform GetGlobalControlShapeTransform(FRigElementKey InKey, bool bInitial);
    FTransform GetGlobalControlOffsetTransformByIndex(int32 InElementIndex, bool bInitial);
    FTransform GetGlobalControlOffsetTransform(FRigElementKey InKey, bool bInitial);
    float GetFloatMetadata(FRigElementKey InItem, FName InMetadataName, float DefaultValue);
    float GetFloatFromControlValue(FRigControlValue InValue);
    TArray<float> GetFloatArrayMetadata(FRigElementKey InItem, FName InMetadataName);
    FRigElementKey GetFirstParent(FRigElementKey InKey);
    FEulerTransform GetEulerTransformFromControlValue(FRigControlValue InValue);
    FRigElementKey GetDefaultParent(FRigElementKey InKey);
    float GetCurveValueByIndex(int32 InElementIndex);
    float GetCurveValue(FRigElementKey InKey);
    TArray<FRigElementKey> GetCurveKeys();
    FRigControlValue GetControlValueByIndex(int32 InElementIndex, ERigControlValueType InValueType);
    FRigControlValue GetControlValue(FRigElementKey InKey, ERigControlValueType InValueType);
    FRotator GetControlPreferredRotatorByIndex(int32 InElementIndex, bool bInitial);
    FRotator GetControlPreferredRotator(FRigElementKey InKey, bool bInitial);
    EEulerRotationOrder GetControlPreferredEulerRotationOrderByIndex(int32 InElementIndex, bool bFromSettings);
    EEulerRotationOrder GetControlPreferredEulerRotationOrder(FRigElementKey InKey, bool bFromSettings);
    FVector GetControlPreferredEulerAnglesByIndex(int32 InElementIndex, EEulerRotationOrder InRotationOrder, bool bInitial);
    FVector GetControlPreferredEulerAngles(FRigElementKey InKey, EEulerRotationOrder InRotationOrder, bool bInitial);
    class URigHierarchyController* GetController(bool bCreateIfNeeded);
    TArray<FRigElementKey> GetControlKeys(bool bTraverse);
    TArray<FRigConnectorState> GetConnectorStates();
    TArray<FRigElementKey> GetConnectorKeys(bool bTraverse);
    TArray<FRigElementKey> GetChildren(FRigElementKey InKey, bool bRecursive);
    bool GetBoolMetadata(FRigElementKey InItem, FName InMetadataName, bool DefaultValue);
    TArray<bool> GetBoolArrayMetadata(FRigElementKey InItem, FName InMetadataName);
    TArray<FRigElementKey> GetBoneKeys(bool bTraverse);
    TArray<FRigElementKey> GetAllKeys_ForBlueprint(bool bTraverse);
    FRigNullElement FindNull_ForBlueprintOnly(const FRigElementKey& InKey);
    FRigControlElement FindControl_ForBlueprintOnly(const FRigElementKey& InKey);
    FRigBoneElement FindBone_ForBlueprintOnly(const FRigElementKey& InKey);
    void CopyPose(class URigHierarchy* InHierarchy, bool bCurrent, bool bInitial, bool bWeights, bool bMatchPoseInGlobalIfNeeded);
    void CopyHierarchy(class URigHierarchy* InHierarchy);
    bool Contains_ForBlueprint(FRigElementKey InKey);
}; // Size: 0x5A0

class URigHierarchyController : public UObject
{
    bool bReportWarningsAndErrors;                                                    // 0x0028 (size: 0x1)

    bool SetSelection(const TArray<FRigElementKey>& InKeys, bool bPrintPythonCommand);
    bool SetParent(FRigElementKey InChild, FRigElementKey InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand);
    void SetHierarchy(class URigHierarchy* InHierarchy);
    FName SetDisplayName(FRigElementKey InControl, FName InDisplayName, bool bRenameElement, bool bSetupUndo, bool bPrintPythonCommand);
    bool SetControlSettings(FRigElementKey InKey, FRigControlSettings InSettings, bool bSetupUndo);
    bool SetAvailableSpaceIndex(FRigElementKey InControl, FRigElementKey InSpace, int32 InIndex, bool bSetupUndo, bool bPrintPythonCommand);
    bool SelectElement(FRigElementKey InKey, bool bSelect, bool bClearSelection);
    bool ReorderElement(FRigElementKey InElement, int32 InIndex, bool bSetupUndo, bool bPrintPythonCommand);
    FRigElementKey RenameElement(FRigElementKey InElement, FName InName, bool bSetupUndo, bool bPrintPythonCommand, bool bClearSelection);
    bool RemoveParent(FRigElementKey InChild, FRigElementKey InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand);
    bool RemoveElement(FRigElementKey InElement, bool bSetupUndo, bool bPrintPythonCommand);
    bool RemoveChannelHost(FRigElementKey InChannel, FRigElementKey InHost, bool bSetupUndo, bool bPrintPythonCommand);
    bool RemoveAvailableSpace(FRigElementKey InControl, FRigElementKey InSpace, bool bSetupUndo, bool bPrintPythonCommand);
    bool RemoveAllParents(FRigElementKey InChild, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand);
    TArray<FRigElementKey> MirrorElements(TArray<FRigElementKey> InKeys, FRigVMMirrorSettings InSettings, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands);
    TArray<FRigElementKey> ImportFromText(FString InContent, bool bReplaceExistingElements, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands);
    TArray<FRigElementKey> ImportCurvesFromSkeletalMesh(class USkeletalMesh* InSkeletalMesh, FName InNameSpace, bool bSelectCurves, bool bSetupUndo, bool bPrintPythonCommand);
    TArray<FRigElementKey> ImportCurves(class USkeleton* InSkeleton, FName InNameSpace, bool bSelectCurves, bool bSetupUndo, bool bPrintPythonCommand);
    TArray<FRigElementKey> ImportBones(class USkeleton* InSkeleton, FName InNameSpace, bool bReplaceExistingBones, bool bRemoveObsoleteBones, bool bSelectBones, bool bSetupUndo, bool bPrintPythonCommand);
    class URigHierarchy* GetHierarchy();
    FRigControlSettings GetControlSettings(FRigElementKey InKey);
    FString ExportToText(TArray<FRigElementKey> InKeys);
    FString ExportSelectionToText();
    TArray<FRigElementKey> DuplicateElements(TArray<FRigElementKey> InKeys, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands);
    bool DeselectElement(FRigElementKey InKey);
    bool ClearSelection();
    FRigElementKey AddSocket(FName InName, FRigElementKey InParent, FTransform InTransform, bool bTransformInGlobal, const FLinearColor& InColor, FString InDescription, bool bSetupUndo, bool bPrintPythonCommand);
    FRigElementKey AddPhysicsElement(FName InName, FRigElementKey InParent, FRigPhysicsSolverID InSolver, FRigPhysicsSettings InSettings, FTransform InLocalTransform, bool bSetupUndo, bool bPrintPythonCommand);
    bool AddParent(FRigElementKey InChild, FRigElementKey InParent, float InWeight, bool bMaintainGlobalTransform, bool bSetupUndo);
    FRigElementKey AddNull(FName InName, FRigElementKey InParent, FTransform InTransform, bool bTransformInGlobal, bool bSetupUndo, bool bPrintPythonCommand);
    FRigElementKey AddCurve(FName InName, float InValue, bool bSetupUndo, bool bPrintPythonCommand);
    FRigElementKey AddControl_ForBlueprint(FName InName, FRigElementKey InParent, FRigControlSettings InSettings, FRigControlValue InValue, bool bSetupUndo, bool bPrintPythonCommand);
    FRigElementKey AddConnector(FName InName, FRigConnectorSettings InSettings, bool bSetupUndo, bool bPrintPythonCommand);
    bool AddChannelHost(FRigElementKey InChannel, FRigElementKey InHost, bool bSetupUndo, bool bPrintPythonCommand);
    FRigElementKey AddBone(FName InName, FRigElementKey InParent, FTransform InTransform, bool bTransformInGlobal, ERigBoneType InBoneType, bool bSetupUndo, bool bPrintPythonCommand);
    bool AddAvailableSpace(FRigElementKey InControl, FRigElementKey InSpace, bool bSetupUndo, bool bPrintPythonCommand);
    FRigElementKey AddAnimationChannel_ForBlueprint(FName InName, FRigElementKey InParentControl, FRigControlSettings InSettings, bool bSetupUndo, bool bPrintPythonCommand);
}; // Size: 0x90

class UTransformableControlHandle : public UTransformableHandle
{
    TSoftObjectPtr<UControlRig> ControlRig;                                           // 0x0060 (size: 0x28)
    FName ControlName;                                                                // 0x0088 (size: 0x8)

}; // Size: 0x90

#endif
