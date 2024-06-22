#ifndef UE4SS_SDK_ControlRig_HPP
#define UE4SS_SDK_ControlRig_HPP

#include "ControlRig_enums.hpp"

struct FAimTarget
{
    float Weight;                                                                     // 0x0000 (size: 0x4)
    FTransform Transform;                                                             // 0x0010 (size: 0x30)
    FVector AlignVector;                                                              // 0x0040 (size: 0xC)

}; // Size: 0x50

struct FAnimNode_ControlRig : public FAnimNode_ControlRigBase
{
    TSubclassOf<class UControlRig> ControlRigClass;                                   // 0x0170 (size: 0x8)
    class UControlRig* ControlRig;                                                    // 0x0178 (size: 0x8)
    float Alpha;                                                                      // 0x0180 (size: 0x4)
    EAnimAlphaInputType AlphaInputType;                                               // 0x0184 (size: 0x1)
    uint8 bAlphaBoolEnabled;                                                          // 0x0185 (size: 0x1)
    uint8 bSetRefPoseFromSkeleton;                                                    // 0x0185 (size: 0x1)
    FInputScaleBias AlphaScaleBias;                                                   // 0x0188 (size: 0x8)
    FInputAlphaBoolBlend AlphaBoolBlend;                                              // 0x0190 (size: 0x48)
    FName AlphaCurveName;                                                             // 0x01D8 (size: 0x8)
    FInputScaleBiasClamp AlphaScaleBiasClamp;                                         // 0x01E0 (size: 0x30)
    TMap<class FName, class FName> InputMapping;                                      // 0x0210 (size: 0x50)
    TMap<class FName, class FName> OutputMapping;                                     // 0x0260 (size: 0x50)
    int32 LODThreshold;                                                               // 0x0360 (size: 0x4)

}; // Size: 0x368

struct FAnimNode_ControlRigBase : public FAnimNode_CustomProperty
{
    FPoseLink Source;                                                                 // 0x0058 (size: 0x10)
    TMap<FName, uint16> ControlRigBoneMapping;                                        // 0x0068 (size: 0x50)
    TMap<FName, uint16> ControlRigCurveMapping;                                       // 0x00B8 (size: 0x50)
    TMap<FName, uint16> InputToCurveMappingUIDs;                                      // 0x0108 (size: 0x50)
    TWeakObjectPtr<class UNodeMappingContainer> NodeMappingContainer;                 // 0x0158 (size: 0x8)
    FControlRigIOSettings InputSettings;                                              // 0x0160 (size: 0x2)
    FControlRigIOSettings OutputSettings;                                             // 0x0162 (size: 0x2)
    bool bExecute;                                                                    // 0x0164 (size: 0x1)

}; // Size: 0x170

struct FAnimNode_ControlRigInputPose : public FAnimNode_Base
{
    FPoseLink InputPose;                                                              // 0x0010 (size: 0x10)

}; // Size: 0x30

struct FAnimNode_ControlRig_ExternalSource : public FAnimNode_ControlRigBase
{
    TWeakObjectPtr<class UControlRig> ControlRig;                                     // 0x0170 (size: 0x8)

}; // Size: 0x178

struct FAnimationHierarchy : public FNodeHierarchyWithUserData
{
    TArray<FConstraintNodeData> UserData;                                             // 0x0078 (size: 0x10)

}; // Size: 0x88

struct FBlendTarget
{
    FTransform Transform;                                                             // 0x0000 (size: 0x30)
    float Weight;                                                                     // 0x0030 (size: 0x4)

}; // Size: 0x40

struct FCRFourPointBezier
{
    FVector A;                                                                        // 0x0000 (size: 0xC)
    FVector B;                                                                        // 0x000C (size: 0xC)
    FVector C;                                                                        // 0x0018 (size: 0xC)
    FVector D;                                                                        // 0x0024 (size: 0xC)

}; // Size: 0x30

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

struct FCRSimPoint
{
    float Mass;                                                                       // 0x0000 (size: 0x4)
    float Size;                                                                       // 0x0004 (size: 0x4)
    float LinearDamping;                                                              // 0x0008 (size: 0x4)
    float InheritMotion;                                                              // 0x000C (size: 0x4)
    FVector Position;                                                                 // 0x0010 (size: 0xC)
    FVector LinearVelocity;                                                           // 0x001C (size: 0xC)

}; // Size: 0x28

struct FCRSimPointConstraint
{
    ECRSimConstraintType Type;                                                        // 0x0000 (size: 0x1)
    int32 SubjectA;                                                                   // 0x0004 (size: 0x4)
    int32 SubjectB;                                                                   // 0x0008 (size: 0x4)
    FVector DataA;                                                                    // 0x000C (size: 0xC)
    FVector DataB;                                                                    // 0x0018 (size: 0xC)

}; // Size: 0x24

struct FCRSimPointContainer : public FCRSimContainer
{
    TArray<FCRSimPoint> Points;                                                       // 0x0018 (size: 0x10)
    TArray<FCRSimLinearSpring> Springs;                                               // 0x0028 (size: 0x10)
    TArray<FCRSimPointForce> Forces;                                                  // 0x0038 (size: 0x10)
    TArray<FCRSimSoftCollision> CollisionVolumes;                                     // 0x0048 (size: 0x10)
    TArray<FCRSimPointConstraint> Constraints;                                        // 0x0058 (size: 0x10)
    TArray<FCRSimPoint> PreviousStep;                                                 // 0x0068 (size: 0x10)

}; // Size: 0x78

struct FCRSimPointForce
{
    ECRSimPointForceType ForceType;                                                   // 0x0000 (size: 0x1)
    FVector Vector;                                                                   // 0x0004 (size: 0xC)
    float Coefficient;                                                                // 0x0010 (size: 0x4)
    bool bNormalize;                                                                  // 0x0014 (size: 0x1)

}; // Size: 0x18

struct FCRSimSoftCollision
{
    FTransform Transform;                                                             // 0x0000 (size: 0x30)
    ECRSimSoftCollisionType ShapeType;                                                // 0x0030 (size: 0x1)
    float MinimumDistance;                                                            // 0x0034 (size: 0x4)
    float MaximumDistance;                                                            // 0x0038 (size: 0x4)
    EControlRigAnimEasingType FalloffType;                                            // 0x003C (size: 0x1)
    float Coefficient;                                                                // 0x0040 (size: 0x4)
    bool bInverted;                                                                   // 0x0044 (size: 0x1)

}; // Size: 0x50

struct FCachedRigElement
{
    FRigElementKey Key;                                                               // 0x0000 (size: 0xC)
    uint16 Index;                                                                     // 0x000C (size: 0x2)
    int32 ContainerVersion;                                                           // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FChannelMapInfo
{
    int32 ControlIndex;                                                               // 0x0000 (size: 0x4)
    int32 TotalChannelIndex;                                                          // 0x0004 (size: 0x4)
    int32 ChannelIndex;                                                               // 0x0008 (size: 0x4)
    int32 ParentControlIndex;                                                         // 0x000C (size: 0x4)
    FName ChannelTypeName;                                                            // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FConstraintNodeData
{
    FTransform RelativeParent;                                                        // 0x0000 (size: 0x30)
    FConstraintOffset ConstraintOffset;                                               // 0x0030 (size: 0x60)
    FName LinkedNode;                                                                 // 0x0090 (size: 0x8)
    TArray<FTransformConstraint> Constraints;                                         // 0x0098 (size: 0x10)

}; // Size: 0xB0

struct FConstraintTarget
{
    FTransform Transform;                                                             // 0x0000 (size: 0x30)
    float Weight;                                                                     // 0x0030 (size: 0x4)
    bool bMaintainOffset;                                                             // 0x0034 (size: 0x1)
    FTransformFilter Filter;                                                          // 0x0035 (size: 0x9)

}; // Size: 0x40

struct FControlRigAnimInstanceProxy : public FAnimInstanceProxy
{
}; // Size: 0x810

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
    FComponentReference ComponentReference;                                           // 0x0000 (size: 0x28)
    int32 TransformIndex;                                                             // 0x0028 (size: 0x4)
    FName TransformName;                                                              // 0x002C (size: 0x8)
    ERigElementType ElementType;                                                      // 0x0034 (size: 0x1)
    FName ElementName;                                                                // 0x0038 (size: 0x8)
    EControlRigComponentMapDirection Direction;                                       // 0x0040 (size: 0x1)
    FTransform Offset;                                                                // 0x0050 (size: 0x30)
    float Weight;                                                                     // 0x0080 (size: 0x4)
    EControlRigComponentSpace Space;                                                  // 0x0084 (size: 0x1)
    class USceneComponent* SceneComponent;                                            // 0x0088 (size: 0x8)
    int32 ElementIndex;                                                               // 0x0090 (size: 0x4)
    int32 SubIndex;                                                                   // 0x0094 (size: 0x4)

}; // Size: 0xA0

struct FControlRigDrawContainer
{
    TArray<FControlRigDrawInstruction> Instructions;                                  // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FControlRigDrawInstruction
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    TEnumAsByte<EControlRigDrawSettings::Type> PrimitiveType;                         // 0x0008 (size: 0x1)
    TArray<FVector> Positions;                                                        // 0x0010 (size: 0x10)
    FLinearColor Color;                                                               // 0x0020 (size: 0x10)
    float Thickness;                                                                  // 0x0030 (size: 0x4)
    FTransform Transform;                                                             // 0x0040 (size: 0x30)

}; // Size: 0xA0

struct FControlRigDrawInterface : public FControlRigDrawContainer
{
}; // Size: 0x18

struct FControlRigExecuteContext : public FRigVMExecuteContext
{
}; // Size: 0x60

struct FControlRigGizmoDefinition
{
    FName GizmoName;                                                                  // 0x0000 (size: 0x8)
    TSoftObjectPtr<UStaticMesh> StaticMesh;                                           // 0x0008 (size: 0x28)
    FTransform Transform;                                                             // 0x0030 (size: 0x30)

}; // Size: 0x60

struct FControlRigIOSettings
{
    bool bUpdatePose;                                                                 // 0x0000 (size: 0x1)
    bool bUpdateCurves;                                                               // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FControlRigLayerInstanceProxy : public FAnimInstanceProxy
{
}; // Size: 0x810

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

struct FControlRigSequencerAnimInstanceProxy : public FAnimSequencerInstanceProxy
{
}; // Size: 0xCC0

struct FControlRigSettingsPerPinBool
{
    TMap<class FString, class bool> Values;                                           // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FControlRigValidationContext
{
}; // Size: 0x28

struct FEnumParameterNameAndCurve
{
    FName ParameterName;                                                              // 0x0000 (size: 0x8)
    FMovieSceneByteChannel ParameterCurve;                                            // 0x0008 (size: 0x98)

}; // Size: 0xA0

struct FGizmoActorCreationParam
{
}; // Size: 0x120

struct FIntegerParameterNameAndCurve
{
    FName ParameterName;                                                              // 0x0000 (size: 0x8)
    FMovieSceneIntegerChannel ParameterCurve;                                         // 0x0008 (size: 0x90)

}; // Size: 0x98

struct FMathRBFInterpolateQuatColor_Target
{
    FQuat Target;                                                                     // 0x0000 (size: 0x10)
    FLinearColor Value;                                                               // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FMathRBFInterpolateQuatFloat_Target
{
    FQuat Target;                                                                     // 0x0000 (size: 0x10)
    float Value;                                                                      // 0x0010 (size: 0x4)

}; // Size: 0x20

struct FMathRBFInterpolateQuatQuat_Target
{
    FQuat Target;                                                                     // 0x0000 (size: 0x10)
    FQuat Value;                                                                      // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FMathRBFInterpolateQuatVector_Target
{
    FQuat Target;                                                                     // 0x0000 (size: 0x10)
    FVector Value;                                                                    // 0x0010 (size: 0xC)

}; // Size: 0x20

struct FMathRBFInterpolateQuatXform_Target
{
    FQuat Target;                                                                     // 0x0000 (size: 0x10)
    FTransform Value;                                                                 // 0x0010 (size: 0x30)

}; // Size: 0x40

struct FMathRBFInterpolateVectorColor_Target
{
    FVector Target;                                                                   // 0x0000 (size: 0xC)
    FLinearColor Value;                                                               // 0x000C (size: 0x10)

}; // Size: 0x1C

struct FMathRBFInterpolateVectorFloat_Target
{
    FVector Target;                                                                   // 0x0000 (size: 0xC)
    float Value;                                                                      // 0x000C (size: 0x4)

}; // Size: 0x10

struct FMathRBFInterpolateVectorQuat_Target
{
    FVector Target;                                                                   // 0x0000 (size: 0xC)
    FQuat Value;                                                                      // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FMathRBFInterpolateVectorVector_Target
{
    FVector Target;                                                                   // 0x0000 (size: 0xC)
    FVector Value;                                                                    // 0x000C (size: 0xC)

}; // Size: 0x18

struct FMathRBFInterpolateVectorXform_Target
{
    FVector Target;                                                                   // 0x0000 (size: 0xC)
    FTransform Value;                                                                 // 0x0010 (size: 0x30)

}; // Size: 0x40

struct FMovieSceneControlRigInstanceData : public FMovieSceneSequenceInstanceData
{
    bool bAdditive;                                                                   // 0x0008 (size: 0x1)
    bool bApplyBoneFilter;                                                            // 0x0009 (size: 0x1)
    FInputBlendPose BoneFilter;                                                       // 0x0010 (size: 0x10)
    FMovieSceneFloatChannel Weight;                                                   // 0x0020 (size: 0xA0)
    FMovieSceneEvaluationOperand Operand;                                             // 0x00C0 (size: 0x14)

}; // Size: 0xD8

struct FMovieSceneControlRigParameterTemplate : public FMovieSceneParameterSectionTemplate
{
    TArray<FEnumParameterNameAndCurve> Enums;                                         // 0x0080 (size: 0x10)
    TArray<FIntegerParameterNameAndCurve> Integers;                                   // 0x0090 (size: 0x10)

}; // Size: 0xA0

struct FRigBone : public FRigElement
{
    FName ParentName;                                                                 // 0x0018 (size: 0x8)
    int32 ParentIndex;                                                                // 0x0020 (size: 0x4)
    FTransform InitialTransform;                                                      // 0x0030 (size: 0x30)
    FTransform GlobalTransform;                                                       // 0x0060 (size: 0x30)
    FTransform LocalTransform;                                                        // 0x0090 (size: 0x30)
    TArray<int32> Dependents;                                                         // 0x00C0 (size: 0x10)
    ERigBoneType Type;                                                                // 0x00D0 (size: 0x1)

}; // Size: 0xE0

struct FRigBoneHierarchy
{
    TArray<FRigBone> Bones;                                                           // 0x0020 (size: 0x10)
    TMap<FName, int32> NameToIndexMapping;                                            // 0x0030 (size: 0x50)
    TArray<FName> selection;                                                          // 0x0080 (size: 0x10)

}; // Size: 0x98

struct FRigControl : public FRigElement
{
    ERigControlType ControlType;                                                      // 0x0018 (size: 0x1)
    FName DisplayName;                                                                // 0x001C (size: 0x8)
    FName ParentName;                                                                 // 0x0024 (size: 0x8)
    int32 ParentIndex;                                                                // 0x002C (size: 0x4)
    FName SpaceName;                                                                  // 0x0030 (size: 0x8)
    int32 SpaceIndex;                                                                 // 0x0038 (size: 0x4)
    FTransform OffsetTransform;                                                       // 0x0040 (size: 0x30)
    FRigControlValue InitialValue;                                                    // 0x0070 (size: 0x80)
    FRigControlValue Value;                                                           // 0x00F0 (size: 0x80)
    ERigControlAxis PrimaryAxis;                                                      // 0x0170 (size: 0x1)
    bool bIsCurve;                                                                    // 0x0171 (size: 0x1)
    bool bAnimatable;                                                                 // 0x0172 (size: 0x1)
    bool bLimitTranslation;                                                           // 0x0173 (size: 0x1)
    bool bLimitRotation;                                                              // 0x0174 (size: 0x1)
    bool bLimitScale;                                                                 // 0x0175 (size: 0x1)
    bool bDrawLimits;                                                                 // 0x0176 (size: 0x1)
    FRigControlValue MinimumValue;                                                    // 0x0180 (size: 0x80)
    FRigControlValue MaximumValue;                                                    // 0x0200 (size: 0x80)
    bool bGizmoEnabled;                                                               // 0x0280 (size: 0x1)
    bool bGizmoVisible;                                                               // 0x0281 (size: 0x1)
    FName GizmoName;                                                                  // 0x0284 (size: 0x8)
    FTransform GizmoTransform;                                                        // 0x0290 (size: 0x30)
    FLinearColor GizmoColor;                                                          // 0x02C0 (size: 0x10)
    TArray<int32> Dependents;                                                         // 0x02D0 (size: 0x10)
    bool bIsTransientControl;                                                         // 0x02E0 (size: 0x1)
    class UEnum* ControlEnum;                                                         // 0x02E8 (size: 0x8)

}; // Size: 0x2F0

struct FRigControlHierarchy
{
    TArray<FRigControl> Controls;                                                     // 0x0098 (size: 0x10)
    TMap<FName, int32> NameToIndexMapping;                                            // 0x00A8 (size: 0x50)
    TArray<FName> selection;                                                          // 0x00F8 (size: 0x10)

}; // Size: 0x108

struct FRigControlModifiedContext
{
}; // Size: 0x10

struct FRigControlValue
{
    FRigControlValueStorage FloatStorage;                                             // 0x0000 (size: 0x44)
    FTransform Storage;                                                               // 0x0050 (size: 0x30)

}; // Size: 0x80

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
    bool bValid;                                                                      // 0x0040 (size: 0x1)

}; // Size: 0x44

struct FRigCurve : public FRigElement
{
    float Value;                                                                      // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FRigCurveContainer
{
    TArray<FRigCurve> Curves;                                                         // 0x0020 (size: 0x10)
    TMap<FName, int32> NameToIndexMapping;                                            // 0x0030 (size: 0x50)
    TArray<FName> selection;                                                          // 0x0080 (size: 0x10)

}; // Size: 0x98

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

struct FRigElementKeyCollection
{
}; // Size: 0x10

struct FRigEventContext
{
}; // Size: 0x28

struct FRigHierarchyContainer
{
    FRigBoneHierarchy BoneHierarchy;                                                  // 0x0000 (size: 0x98)
    FRigSpaceHierarchy SpaceHierarchy;                                                // 0x0098 (size: 0x90)
    FRigControlHierarchy ControlHierarchy;                                            // 0x0128 (size: 0x108)
    FRigCurveContainer CurveContainer;                                                // 0x0230 (size: 0x98)
    int32 Version;                                                                    // 0x02C8 (size: 0x4)

}; // Size: 0x368

struct FRigHierarchyCopyPasteContent
{
    TArray<ERigElementType> Types;                                                    // 0x0000 (size: 0x10)
    TArray<FString> Contents;                                                         // 0x0010 (size: 0x10)
    TArray<FTransform> LocalTransforms;                                               // 0x0020 (size: 0x10)
    TArray<FTransform> GlobalTransforms;                                              // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FRigHierarchyRef
{
}; // Size: 0x1

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

struct FRigMirrorSettings
{
    TEnumAsByte<EAxis::Type> MirrorAxis;                                              // 0x0000 (size: 0x1)
    TEnumAsByte<EAxis::Type> AxisToFlip;                                              // 0x0001 (size: 0x1)
    FString OldName;                                                                  // 0x0008 (size: 0x10)
    FString NewName;                                                                  // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FRigPose
{
    TArray<FRigPoseElement> Elements;                                                 // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FRigPoseElement
{
    FCachedRigElement Index;                                                          // 0x0000 (size: 0x14)
    FTransform GlobalTransform;                                                       // 0x0020 (size: 0x30)
    FTransform LocalTransform;                                                        // 0x0050 (size: 0x30)
    float CurveValue;                                                                 // 0x0080 (size: 0x4)

}; // Size: 0x90

struct FRigSpace : public FRigElement
{
    ERigSpaceType SpaceType;                                                          // 0x0018 (size: 0x1)
    FName ParentName;                                                                 // 0x001C (size: 0x8)
    int32 ParentIndex;                                                                // 0x0024 (size: 0x4)
    FTransform InitialTransform;                                                      // 0x0030 (size: 0x30)
    FTransform LocalTransform;                                                        // 0x0060 (size: 0x30)

}; // Size: 0x90

struct FRigSpaceHierarchy
{
    TArray<FRigSpace> Spaces;                                                         // 0x0020 (size: 0x10)
    TMap<FName, int32> NameToIndexMapping;                                            // 0x0030 (size: 0x50)
    TArray<FName> selection;                                                          // 0x0080 (size: 0x10)

}; // Size: 0x90

struct FRigUnit : public FRigVMStruct
{
}; // Size: 0x8

struct FRigUnitMutable : public FRigUnit
{
    FControlRigExecuteContext ExecuteContext;                                         // 0x0008 (size: 0x60)

}; // Size: 0x68

struct FRigUnit_AccumulateFloatAdd : public FRigUnit_SimBase
{
    float Increment;                                                                  // 0x0008 (size: 0x4)
    float InitialValue;                                                               // 0x000C (size: 0x4)
    bool bIntegrateDeltaTime;                                                         // 0x0010 (size: 0x1)
    float Result;                                                                     // 0x0014 (size: 0x4)
    float AccumulatedValue;                                                           // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FRigUnit_AccumulateFloatLerp : public FRigUnit_SimBase
{
    float TargetValue;                                                                // 0x0008 (size: 0x4)
    float InitialValue;                                                               // 0x000C (size: 0x4)
    float Blend;                                                                      // 0x0010 (size: 0x4)
    bool bIntegrateDeltaTime;                                                         // 0x0014 (size: 0x1)
    float Result;                                                                     // 0x0018 (size: 0x4)
    float AccumulatedValue;                                                           // 0x001C (size: 0x4)

}; // Size: 0x20

struct FRigUnit_AccumulateFloatMul : public FRigUnit_SimBase
{
    float Multiplier;                                                                 // 0x0008 (size: 0x4)
    float InitialValue;                                                               // 0x000C (size: 0x4)
    bool bIntegrateDeltaTime;                                                         // 0x0010 (size: 0x1)
    float Result;                                                                     // 0x0014 (size: 0x4)
    float AccumulatedValue;                                                           // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FRigUnit_AccumulateFloatRange : public FRigUnit_SimBase
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    float Minimum;                                                                    // 0x000C (size: 0x4)
    float Maximum;                                                                    // 0x0010 (size: 0x4)
    float AccumulatedMinimum;                                                         // 0x0014 (size: 0x4)
    float AccumulatedMaximum;                                                         // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FRigUnit_AccumulateQuatLerp : public FRigUnit_SimBase
{
    FQuat TargetValue;                                                                // 0x0010 (size: 0x10)
    FQuat InitialValue;                                                               // 0x0020 (size: 0x10)
    float Blend;                                                                      // 0x0030 (size: 0x4)
    bool bIntegrateDeltaTime;                                                         // 0x0034 (size: 0x1)
    FQuat Result;                                                                     // 0x0040 (size: 0x10)
    FQuat AccumulatedValue;                                                           // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FRigUnit_AccumulateQuatMul : public FRigUnit_SimBase
{
    FQuat Multiplier;                                                                 // 0x0010 (size: 0x10)
    FQuat InitialValue;                                                               // 0x0020 (size: 0x10)
    bool bFlipOrder;                                                                  // 0x0030 (size: 0x1)
    bool bIntegrateDeltaTime;                                                         // 0x0031 (size: 0x1)
    FQuat Result;                                                                     // 0x0040 (size: 0x10)
    FQuat AccumulatedValue;                                                           // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FRigUnit_AccumulateTransformLerp : public FRigUnit_SimBase
{
    FTransform TargetValue;                                                           // 0x0010 (size: 0x30)
    FTransform InitialValue;                                                          // 0x0040 (size: 0x30)
    float Blend;                                                                      // 0x0070 (size: 0x4)
    bool bIntegrateDeltaTime;                                                         // 0x0074 (size: 0x1)
    FTransform Result;                                                                // 0x0080 (size: 0x30)
    FTransform AccumulatedValue;                                                      // 0x00B0 (size: 0x30)

}; // Size: 0xE0

struct FRigUnit_AccumulateTransformMul : public FRigUnit_SimBase
{
    FTransform Multiplier;                                                            // 0x0010 (size: 0x30)
    FTransform InitialValue;                                                          // 0x0040 (size: 0x30)
    bool bFlipOrder;                                                                  // 0x0070 (size: 0x1)
    bool bIntegrateDeltaTime;                                                         // 0x0071 (size: 0x1)
    FTransform Result;                                                                // 0x0080 (size: 0x30)
    FTransform AccumulatedValue;                                                      // 0x00B0 (size: 0x30)

}; // Size: 0xE0

struct FRigUnit_AccumulateVectorAdd : public FRigUnit_SimBase
{
    FVector Increment;                                                                // 0x0008 (size: 0xC)
    FVector InitialValue;                                                             // 0x0014 (size: 0xC)
    bool bIntegrateDeltaTime;                                                         // 0x0020 (size: 0x1)
    FVector Result;                                                                   // 0x0024 (size: 0xC)
    FVector AccumulatedValue;                                                         // 0x0030 (size: 0xC)

}; // Size: 0x40

struct FRigUnit_AccumulateVectorLerp : public FRigUnit_SimBase
{
    FVector TargetValue;                                                              // 0x0008 (size: 0xC)
    FVector InitialValue;                                                             // 0x0014 (size: 0xC)
    float Blend;                                                                      // 0x0020 (size: 0x4)
    bool bIntegrateDeltaTime;                                                         // 0x0024 (size: 0x1)
    FVector Result;                                                                   // 0x0028 (size: 0xC)
    FVector AccumulatedValue;                                                         // 0x0034 (size: 0xC)

}; // Size: 0x40

struct FRigUnit_AccumulateVectorMul : public FRigUnit_SimBase
{
    FVector Multiplier;                                                               // 0x0008 (size: 0xC)
    FVector InitialValue;                                                             // 0x0014 (size: 0xC)
    bool bIntegrateDeltaTime;                                                         // 0x0020 (size: 0x1)
    FVector Result;                                                                   // 0x0024 (size: 0xC)
    FVector AccumulatedValue;                                                         // 0x0030 (size: 0xC)

}; // Size: 0x40

struct FRigUnit_AccumulateVectorRange : public FRigUnit_SimBase
{
    FVector Value;                                                                    // 0x0008 (size: 0xC)
    FVector Minimum;                                                                  // 0x0014 (size: 0xC)
    FVector Maximum;                                                                  // 0x0020 (size: 0xC)
    FVector AccumulatedMinimum;                                                       // 0x002C (size: 0xC)
    FVector AccumulatedMaximum;                                                       // 0x0038 (size: 0xC)

}; // Size: 0x48

struct FRigUnit_AddBoneTransform : public FRigUnitMutable
{
    FName Bone;                                                                       // 0x0068 (size: 0x8)
    FTransform Transform;                                                             // 0x0070 (size: 0x30)
    float Weight;                                                                     // 0x00A0 (size: 0x4)
    bool bPostMultiply;                                                               // 0x00A4 (size: 0x1)
    bool bPropagateToChildren;                                                        // 0x00A5 (size: 0x1)
    FCachedRigElement CachedBone;                                                     // 0x00A8 (size: 0x14)

}; // Size: 0xC0

struct FRigUnit_Add_FloatFloat : public FRigUnit_BinaryFloatOp
{
}; // Size: 0x18

struct FRigUnit_Add_VectorVector : public FRigUnit_BinaryVectorOp
{
}; // Size: 0x30

struct FRigUnit_AimBone : public FRigUnit_HighlevelBaseMutable
{
    FName Bone;                                                                       // 0x0068 (size: 0x8)
    FRigUnit_AimBone_Target Primary;                                                  // 0x0070 (size: 0x28)
    FRigUnit_AimBone_Target Secondary;                                                // 0x0098 (size: 0x28)
    float Weight;                                                                     // 0x00C0 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x00C4 (size: 0x1)
    FRigUnit_AimBone_DebugSettings DebugSettings;                                     // 0x00D0 (size: 0x40)
    FCachedRigElement CachedBoneIndex;                                                // 0x0110 (size: 0x14)
    FCachedRigElement PrimaryCachedSpace;                                             // 0x0124 (size: 0x14)
    FCachedRigElement SecondaryCachedSpace;                                           // 0x0138 (size: 0x14)

}; // Size: 0x150

struct FRigUnit_AimBoneMath : public FRigUnit_HighlevelBase
{
    FTransform InputTransform;                                                        // 0x0010 (size: 0x30)
    FRigUnit_AimItem_Target Primary;                                                  // 0x0040 (size: 0x2C)
    FRigUnit_AimItem_Target Secondary;                                                // 0x006C (size: 0x2C)
    float Weight;                                                                     // 0x0098 (size: 0x4)
    FTransform Result;                                                                // 0x00A0 (size: 0x30)
    FRigUnit_AimBone_DebugSettings DebugSettings;                                     // 0x00D0 (size: 0x40)
    FCachedRigElement PrimaryCachedSpace;                                             // 0x0110 (size: 0x14)
    FCachedRigElement SecondaryCachedSpace;                                           // 0x0124 (size: 0x14)

}; // Size: 0x140

struct FRigUnit_AimBone_DebugSettings
{
    bool bEnabled;                                                                    // 0x0000 (size: 0x1)
    float Scale;                                                                      // 0x0004 (size: 0x4)
    FTransform WorldOffset;                                                           // 0x0010 (size: 0x30)

}; // Size: 0x40

struct FRigUnit_AimBone_Target
{
    float Weight;                                                                     // 0x0000 (size: 0x4)
    FVector Axis;                                                                     // 0x0004 (size: 0xC)
    FVector Target;                                                                   // 0x0010 (size: 0xC)
    EControlRigVectorKind Kind;                                                       // 0x001C (size: 0x1)
    FName Space;                                                                      // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FRigUnit_AimConstraint : public FRigUnitMutable
{
    FName Joint;                                                                      // 0x0068 (size: 0x8)
    EAimMode AimMode;                                                                 // 0x0070 (size: 0x1)
    EAimMode UpMode;                                                                  // 0x0071 (size: 0x1)
    FVector AimVector;                                                                // 0x0074 (size: 0xC)
    FVector UpVector;                                                                 // 0x0080 (size: 0xC)
    TArray<FAimTarget> AimTargets;                                                    // 0x0090 (size: 0x10)
    TArray<FAimTarget> UpTargets;                                                     // 0x00A0 (size: 0x10)
    FRigUnit_AimConstraint_WorkData WorkData;                                         // 0x00B0 (size: 0x10)

}; // Size: 0xC0

struct FRigUnit_AimConstraint_WorkData
{
    TArray<FConstraintData> ConstraintData;                                           // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FRigUnit_AimItem : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKey Item;                                                              // 0x0068 (size: 0xC)
    FRigUnit_AimItem_Target Primary;                                                  // 0x0074 (size: 0x2C)
    FRigUnit_AimItem_Target Secondary;                                                // 0x00A0 (size: 0x2C)
    float Weight;                                                                     // 0x00CC (size: 0x4)
    FRigUnit_AimBone_DebugSettings DebugSettings;                                     // 0x00D0 (size: 0x40)
    FCachedRigElement CachedItem;                                                     // 0x0110 (size: 0x14)
    FCachedRigElement PrimaryCachedSpace;                                             // 0x0124 (size: 0x14)
    FCachedRigElement SecondaryCachedSpace;                                           // 0x0138 (size: 0x14)

}; // Size: 0x150

struct FRigUnit_AimItem_Target
{
    float Weight;                                                                     // 0x0000 (size: 0x4)
    FVector Axis;                                                                     // 0x0004 (size: 0xC)
    FVector Target;                                                                   // 0x0010 (size: 0xC)
    EControlRigVectorKind Kind;                                                       // 0x001C (size: 0x1)
    FRigElementKey Space;                                                             // 0x0020 (size: 0xC)

}; // Size: 0x2C

struct FRigUnit_AlphaInterp : public FRigUnit_SimBase
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    float Scale;                                                                      // 0x000C (size: 0x4)
    float Bias;                                                                       // 0x0010 (size: 0x4)
    bool bMapRange;                                                                   // 0x0014 (size: 0x1)
    FInputRange InRange;                                                              // 0x0018 (size: 0x8)
    FInputRange OutRange;                                                             // 0x0020 (size: 0x8)
    bool bClampResult;                                                                // 0x0028 (size: 0x1)
    float ClampMin;                                                                   // 0x002C (size: 0x4)
    float ClampMax;                                                                   // 0x0030 (size: 0x4)
    bool bInterpResult;                                                               // 0x0034 (size: 0x1)
    float InterpSpeedIncreasing;                                                      // 0x0038 (size: 0x4)
    float InterpSpeedDecreasing;                                                      // 0x003C (size: 0x4)
    float Result;                                                                     // 0x0040 (size: 0x4)
    FInputScaleBiasClamp ScaleBiasClamp;                                              // 0x0044 (size: 0x30)

}; // Size: 0x78

struct FRigUnit_AlphaInterpVector : public FRigUnit_SimBase
{
    FVector Value;                                                                    // 0x0008 (size: 0xC)
    float Scale;                                                                      // 0x0014 (size: 0x4)
    float Bias;                                                                       // 0x0018 (size: 0x4)
    bool bMapRange;                                                                   // 0x001C (size: 0x1)
    FInputRange InRange;                                                              // 0x0020 (size: 0x8)
    FInputRange OutRange;                                                             // 0x0028 (size: 0x8)
    bool bClampResult;                                                                // 0x0030 (size: 0x1)
    float ClampMin;                                                                   // 0x0034 (size: 0x4)
    float ClampMax;                                                                   // 0x0038 (size: 0x4)
    bool bInterpResult;                                                               // 0x003C (size: 0x1)
    float InterpSpeedIncreasing;                                                      // 0x0040 (size: 0x4)
    float InterpSpeedDecreasing;                                                      // 0x0044 (size: 0x4)
    FVector Result;                                                                   // 0x0048 (size: 0xC)
    FInputScaleBiasClamp ScaleBiasClamp;                                              // 0x0054 (size: 0x30)

}; // Size: 0x88

struct FRigUnit_AnimBase : public FRigUnit
{
}; // Size: 0x8

struct FRigUnit_AnimEasing : public FRigUnit_AnimBase
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    EControlRigAnimEasingType Type;                                                   // 0x000C (size: 0x1)
    float SourceMinimum;                                                              // 0x0010 (size: 0x4)
    float SourceMaximum;                                                              // 0x0014 (size: 0x4)
    float TargetMinimum;                                                              // 0x0018 (size: 0x4)
    float TargetMaximum;                                                              // 0x001C (size: 0x4)
    float Result;                                                                     // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FRigUnit_AnimEasingType : public FRigUnit_AnimBase
{
    EControlRigAnimEasingType Type;                                                   // 0x0008 (size: 0x1)

}; // Size: 0x10

struct FRigUnit_AnimEvalRichCurve : public FRigUnit_AnimBase
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    FRuntimeFloatCurve Curve;                                                         // 0x0010 (size: 0x88)
    float SourceMinimum;                                                              // 0x0098 (size: 0x4)
    float SourceMaximum;                                                              // 0x009C (size: 0x4)
    float TargetMinimum;                                                              // 0x00A0 (size: 0x4)
    float TargetMaximum;                                                              // 0x00A4 (size: 0x4)
    float Result;                                                                     // 0x00A8 (size: 0x4)

}; // Size: 0xB0

struct FRigUnit_AnimRichCurve : public FRigUnit_AnimBase
{
    FRuntimeFloatCurve Curve;                                                         // 0x0008 (size: 0x88)

}; // Size: 0x90

struct FRigUnit_ApplyFK : public FRigUnitMutable
{
    FName Joint;                                                                      // 0x0068 (size: 0x8)
    FTransform Transform;                                                             // 0x0070 (size: 0x30)
    FTransformFilter Filter;                                                          // 0x00A0 (size: 0x9)
    EApplyTransformMode ApplyTransformMode;                                           // 0x00A9 (size: 0x1)
    ETransformSpaceMode ApplyTransformSpace;                                          // 0x00AA (size: 0x1)
    FTransform BaseTransform;                                                         // 0x00B0 (size: 0x30)
    FName BaseJoint;                                                                  // 0x00E0 (size: 0x8)

}; // Size: 0xF0

struct FRigUnit_BeginExecution : public FRigUnit
{
    FControlRigExecuteContext ExecuteContext;                                         // 0x0008 (size: 0x60)

}; // Size: 0x68

struct FRigUnit_BinaryFloatOp : public FRigUnit
{
    float Argument0;                                                                  // 0x0008 (size: 0x4)
    float Argument1;                                                                  // 0x000C (size: 0x4)
    float Result;                                                                     // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FRigUnit_BinaryQuaternionOp : public FRigUnit
{
    FQuat Argument0;                                                                  // 0x0010 (size: 0x10)
    FQuat Argument1;                                                                  // 0x0020 (size: 0x10)
    FQuat Result;                                                                     // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FRigUnit_BinaryTransformOp : public FRigUnit
{
    FTransform Argument0;                                                             // 0x0010 (size: 0x30)
    FTransform Argument1;                                                             // 0x0040 (size: 0x30)
    FTransform Result;                                                                // 0x0070 (size: 0x30)

}; // Size: 0xA0

struct FRigUnit_BinaryVectorOp : public FRigUnit
{
    FVector Argument0;                                                                // 0x0008 (size: 0xC)
    FVector Argument1;                                                                // 0x0014 (size: 0xC)
    FVector Result;                                                                   // 0x0020 (size: 0xC)

}; // Size: 0x30

struct FRigUnit_BlendTransform : public FRigUnit
{
    FTransform Source;                                                                // 0x0010 (size: 0x30)
    TArray<FBlendTarget> Targets;                                                     // 0x0040 (size: 0x10)
    FTransform Result;                                                                // 0x0050 (size: 0x30)

}; // Size: 0x80

struct FRigUnit_BoneHarmonics : public FRigUnit_HighlevelBaseMutable
{
    TArray<FRigUnit_BoneHarmonics_BoneTarget> Bones;                                  // 0x0068 (size: 0x10)
    FVector WaveSpeed;                                                                // 0x0078 (size: 0xC)
    FVector WaveFrequency;                                                            // 0x0084 (size: 0xC)
    FVector WaveAmplitude;                                                            // 0x0090 (size: 0xC)
    FVector WaveOffset;                                                               // 0x009C (size: 0xC)
    FVector WaveNoise;                                                                // 0x00A8 (size: 0xC)
    EControlRigAnimEasingType WaveEase;                                               // 0x00B4 (size: 0x1)
    float WaveMinimum;                                                                // 0x00B8 (size: 0x4)
    float WaveMaximum;                                                                // 0x00BC (size: 0x4)
    EControlRigRotationOrder RotationOrder;                                           // 0x00C0 (size: 0x1)
    bool bPropagateToChildren;                                                        // 0x00C1 (size: 0x1)
    FRigUnit_BoneHarmonics_WorkData WorkData;                                         // 0x00C8 (size: 0x20)

}; // Size: 0xE8

struct FRigUnit_BoneHarmonics_BoneTarget
{
    FName Bone;                                                                       // 0x0000 (size: 0x8)
    float Ratio;                                                                      // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FRigUnit_BoneHarmonics_WorkData
{
    TArray<FCachedRigElement> CachedItems;                                            // 0x0000 (size: 0x10)
    FVector WaveTime;                                                                 // 0x0010 (size: 0xC)

}; // Size: 0x20

struct FRigUnit_BoneName : public FRigUnit
{
    FName Bone;                                                                       // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FRigUnit_CCDIK : public FRigUnit_HighlevelBaseMutable
{
    FName StartBone;                                                                  // 0x0068 (size: 0x8)
    FName EffectorBone;                                                               // 0x0070 (size: 0x8)
    FTransform EffectorTransform;                                                     // 0x0080 (size: 0x30)
    float Precision;                                                                  // 0x00B0 (size: 0x4)
    float Weight;                                                                     // 0x00B4 (size: 0x4)
    int32 MaxIterations;                                                              // 0x00B8 (size: 0x4)
    bool bStartFromTail;                                                              // 0x00BC (size: 0x1)
    float BaseRotationLimit;                                                          // 0x00C0 (size: 0x4)
    TArray<FRigUnit_CCDIK_RotationLimit> RotationLimits;                              // 0x00C8 (size: 0x10)
    bool bPropagateToChildren;                                                        // 0x00D8 (size: 0x1)
    FRigUnit_CCDIK_WorkData WorkData;                                                 // 0x00E0 (size: 0x58)

}; // Size: 0x140

struct FRigUnit_CCDIKPerItem : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKeyCollection Items;                                                   // 0x0068 (size: 0x10)
    FTransform EffectorTransform;                                                     // 0x0080 (size: 0x30)
    float Precision;                                                                  // 0x00B0 (size: 0x4)
    float Weight;                                                                     // 0x00B4 (size: 0x4)
    int32 MaxIterations;                                                              // 0x00B8 (size: 0x4)
    bool bStartFromTail;                                                              // 0x00BC (size: 0x1)
    float BaseRotationLimit;                                                          // 0x00C0 (size: 0x4)
    TArray<FRigUnit_CCDIK_RotationLimitPerItem> RotationLimits;                       // 0x00C8 (size: 0x10)
    bool bPropagateToChildren;                                                        // 0x00D8 (size: 0x1)
    FRigUnit_CCDIK_WorkData WorkData;                                                 // 0x00E0 (size: 0x58)

}; // Size: 0x140

struct FRigUnit_CCDIK_RotationLimit
{
    FName Bone;                                                                       // 0x0000 (size: 0x8)
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
    FCachedRigElement CachedEffector;                                                 // 0x0040 (size: 0x14)

}; // Size: 0x58

struct FRigUnit_ChainHarmonics : public FRigUnit_HighlevelBaseMutable
{
    FName ChainRoot;                                                                  // 0x0068 (size: 0x8)
    FVector Speed;                                                                    // 0x0070 (size: 0xC)
    FRigUnit_ChainHarmonics_Reach Reach;                                              // 0x007C (size: 0x28)
    FRigUnit_ChainHarmonics_Wave Wave;                                                // 0x00A4 (size: 0x40)
    FRuntimeFloatCurve WaveCurve;                                                     // 0x00E8 (size: 0x88)
    FRigUnit_ChainHarmonics_Pendulum Pendulum;                                        // 0x0170 (size: 0x3C)
    bool bDrawDebug;                                                                  // 0x01AC (size: 0x1)
    FTransform DrawWorldOffset;                                                       // 0x01B0 (size: 0x30)
    FRigUnit_ChainHarmonics_WorkData WorkData;                                        // 0x01E0 (size: 0x90)

}; // Size: 0x270

struct FRigUnit_ChainHarmonicsPerItem : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKey ChainRoot;                                                         // 0x0068 (size: 0xC)
    FVector Speed;                                                                    // 0x0074 (size: 0xC)
    FRigUnit_ChainHarmonics_Reach Reach;                                              // 0x0080 (size: 0x28)
    FRigUnit_ChainHarmonics_Wave Wave;                                                // 0x00A8 (size: 0x40)
    FRuntimeFloatCurve WaveCurve;                                                     // 0x00E8 (size: 0x88)
    FRigUnit_ChainHarmonics_Pendulum Pendulum;                                        // 0x0170 (size: 0x3C)
    bool bDrawDebug;                                                                  // 0x01AC (size: 0x1)
    FTransform DrawWorldOffset;                                                       // 0x01B0 (size: 0x30)
    FRigUnit_ChainHarmonics_WorkData WorkData;                                        // 0x01E0 (size: 0x90)

}; // Size: 0x270

struct FRigUnit_ChainHarmonics_Pendulum
{
    bool bEnabled;                                                                    // 0x0000 (size: 0x1)
    float PendulumStiffness;                                                          // 0x0004 (size: 0x4)
    FVector PendulumGravity;                                                          // 0x0008 (size: 0xC)
    float PendulumBlend;                                                              // 0x0014 (size: 0x4)
    float PendulumDrag;                                                               // 0x0018 (size: 0x4)
    float PendulumMinimum;                                                            // 0x001C (size: 0x4)
    float PendulumMaximum;                                                            // 0x0020 (size: 0x4)
    EControlRigAnimEasingType PendulumEase;                                           // 0x0024 (size: 0x1)
    FVector UnwindAxis;                                                               // 0x0028 (size: 0xC)
    float UnwindMinimum;                                                              // 0x0034 (size: 0x4)
    float UnwindMaximum;                                                              // 0x0038 (size: 0x4)

}; // Size: 0x3C

struct FRigUnit_ChainHarmonics_Reach
{
    bool bEnabled;                                                                    // 0x0000 (size: 0x1)
    FVector ReachTarget;                                                              // 0x0004 (size: 0xC)
    FVector ReachAxis;                                                                // 0x0010 (size: 0xC)
    float ReachMinimum;                                                               // 0x001C (size: 0x4)
    float ReachMaximum;                                                               // 0x0020 (size: 0x4)
    EControlRigAnimEasingType ReachEase;                                              // 0x0024 (size: 0x1)

}; // Size: 0x28

struct FRigUnit_ChainHarmonics_Wave
{
    bool bEnabled;                                                                    // 0x0000 (size: 0x1)
    FVector WaveFrequency;                                                            // 0x0004 (size: 0xC)
    FVector WaveAmplitude;                                                            // 0x0010 (size: 0xC)
    FVector WaveOffset;                                                               // 0x001C (size: 0xC)
    FVector WaveNoise;                                                                // 0x0028 (size: 0xC)
    float WaveMinimum;                                                                // 0x0034 (size: 0x4)
    float WaveMaximum;                                                                // 0x0038 (size: 0x4)
    EControlRigAnimEasingType WaveEase;                                               // 0x003C (size: 0x1)

}; // Size: 0x40

struct FRigUnit_ChainHarmonics_WorkData
{
    FVector Time;                                                                     // 0x0000 (size: 0xC)
    TArray<FCachedRigElement> Items;                                                  // 0x0010 (size: 0x10)
    TArray<float> Ratio;                                                              // 0x0020 (size: 0x10)
    TArray<FVector> LocalTip;                                                         // 0x0030 (size: 0x10)
    TArray<FVector> PendulumTip;                                                      // 0x0040 (size: 0x10)
    TArray<FVector> PendulumPosition;                                                 // 0x0050 (size: 0x10)
    TArray<FVector> PendulumVelocity;                                                 // 0x0060 (size: 0x10)
    TArray<FVector> HierarchyLine;                                                    // 0x0070 (size: 0x10)
    TArray<FVector> VelocityLines;                                                    // 0x0080 (size: 0x10)

}; // Size: 0x90

struct FRigUnit_Clamp_Float : public FRigUnit
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    float Min;                                                                        // 0x000C (size: 0x4)
    float Max;                                                                        // 0x0010 (size: 0x4)
    float Result;                                                                     // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FRigUnit_CollectionBase : public FRigUnit
{
}; // Size: 0x8

struct FRigUnit_CollectionBaseMutable : public FRigUnitMutable
{
}; // Size: 0x68

struct FRigUnit_CollectionChain : public FRigUnit_CollectionBase
{
    FRigElementKey FirstItem;                                                         // 0x0008 (size: 0xC)
    FRigElementKey LastItem;                                                          // 0x0014 (size: 0xC)
    bool Reverse;                                                                     // 0x0020 (size: 0x1)
    FRigElementKeyCollection Collection;                                              // 0x0028 (size: 0x10)
    FRigElementKeyCollection CachedCollection;                                        // 0x0038 (size: 0x10)
    int32 CachedHierarchyHash;                                                        // 0x0048 (size: 0x4)

}; // Size: 0x50

struct FRigUnit_CollectionChildren : public FRigUnit_CollectionBase
{
    FRigElementKey Parent;                                                            // 0x0008 (size: 0xC)
    bool bIncludeParent;                                                              // 0x0014 (size: 0x1)
    bool bRecursive;                                                                  // 0x0015 (size: 0x1)
    ERigElementType TypeToSearch;                                                     // 0x0016 (size: 0x1)
    FRigElementKeyCollection Collection;                                              // 0x0018 (size: 0x10)
    FRigElementKeyCollection CachedCollection;                                        // 0x0028 (size: 0x10)
    int32 CachedHierarchyHash;                                                        // 0x0038 (size: 0x4)

}; // Size: 0x40

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
    FRigElementKeyCollection Collection;                                              // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FRigUnit_CollectionLoop : public FRigUnit_CollectionBaseMutable
{
    FRigElementKeyCollection Collection;                                              // 0x0068 (size: 0x10)
    FRigElementKey Item;                                                              // 0x0078 (size: 0xC)
    int32 Index;                                                                      // 0x0084 (size: 0x4)
    int32 Count;                                                                      // 0x0088 (size: 0x4)
    float Ratio;                                                                      // 0x008C (size: 0x4)
    bool Continue;                                                                    // 0x0090 (size: 0x1)
    FControlRigExecuteContext Completed;                                              // 0x0098 (size: 0x60)

}; // Size: 0xF8

struct FRigUnit_CollectionNameSearch : public FRigUnit_CollectionBase
{
    FName PartialName;                                                                // 0x0008 (size: 0x8)
    ERigElementType TypeToSearch;                                                     // 0x0010 (size: 0x1)
    FRigElementKeyCollection Collection;                                              // 0x0018 (size: 0x10)
    FRigElementKeyCollection CachedCollection;                                        // 0x0028 (size: 0x10)
    int32 CachedHierarchyHash;                                                        // 0x0038 (size: 0x4)

}; // Size: 0x40

struct FRigUnit_CollectionReplaceItems : public FRigUnit_CollectionBase
{
    FRigElementKeyCollection Items;                                                   // 0x0008 (size: 0x10)
    FName Old;                                                                        // 0x0018 (size: 0x8)
    FName New;                                                                        // 0x0020 (size: 0x8)
    bool RemoveInvalidItems;                                                          // 0x0028 (size: 0x1)
    FRigElementKeyCollection Collection;                                              // 0x0030 (size: 0x10)
    FRigElementKeyCollection CachedCollection;                                        // 0x0040 (size: 0x10)
    int32 CachedHierarchyHash;                                                        // 0x0050 (size: 0x4)

}; // Size: 0x58

struct FRigUnit_CollectionReverse : public FRigUnit_CollectionBase
{
    FRigElementKeyCollection Collection;                                              // 0x0008 (size: 0x10)
    FRigElementKeyCollection Reversed;                                                // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FRigUnit_CollectionUnion : public FRigUnit_CollectionBase
{
    FRigElementKeyCollection A;                                                       // 0x0008 (size: 0x10)
    FRigElementKeyCollection B;                                                       // 0x0018 (size: 0x10)
    FRigElementKeyCollection Collection;                                              // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FRigUnit_Contains : public FRigUnit_NameBase
{
    FName Name;                                                                       // 0x0008 (size: 0x8)
    FName Search;                                                                     // 0x0010 (size: 0x8)
    bool Result;                                                                      // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FRigUnit_Control : public FRigUnit
{
    FEulerTransform Transform;                                                        // 0x0008 (size: 0x24)
    FTransform Base;                                                                  // 0x0030 (size: 0x30)
    FTransform InitTransform;                                                         // 0x0060 (size: 0x30)
    FTransform Result;                                                                // 0x0090 (size: 0x30)
    FTransformFilter Filter;                                                          // 0x00C0 (size: 0x9)

}; // Size: 0xD0

struct FRigUnit_ControlName : public FRigUnit
{
    FName Control;                                                                    // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FRigUnit_Control_StaticMesh : public FRigUnit_Control
{
    FTransform MeshTransform;                                                         // 0x00D0 (size: 0x30)

}; // Size: 0x100

struct FRigUnit_ConvertEulerTransform : public FRigUnit
{
    FEulerTransform Input;                                                            // 0x0008 (size: 0x24)
    FTransform Result;                                                                // 0x0030 (size: 0x30)

}; // Size: 0x60

struct FRigUnit_ConvertQuaternion : public FRigUnit
{
    FQuat Input;                                                                      // 0x0010 (size: 0x10)
    FRotator Result;                                                                  // 0x0020 (size: 0xC)

}; // Size: 0x30

struct FRigUnit_ConvertQuaternionToVector : public FRigUnit
{
    FQuat Input;                                                                      // 0x0010 (size: 0x10)
    FVector Result;                                                                   // 0x0020 (size: 0xC)

}; // Size: 0x30

struct FRigUnit_ConvertRotation : public FRigUnit
{
    FRotator Input;                                                                   // 0x0008 (size: 0xC)
    FQuat Result;                                                                     // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FRigUnit_ConvertRotationToVector : public FRigUnit
{
    FRotator Input;                                                                   // 0x0008 (size: 0xC)
    FVector Result;                                                                   // 0x0014 (size: 0xC)

}; // Size: 0x20

struct FRigUnit_ConvertTransform : public FRigUnit
{
    FTransform Input;                                                                 // 0x0010 (size: 0x30)
    FEulerTransform Result;                                                           // 0x0040 (size: 0x24)

}; // Size: 0x70

struct FRigUnit_ConvertVectorRotation : public FRigUnit_ConvertRotation
{
}; // Size: 0x30

struct FRigUnit_ConvertVectorToQuaternion : public FRigUnit
{
    FVector Input;                                                                    // 0x0008 (size: 0xC)
    FQuat Result;                                                                     // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FRigUnit_ConvertVectorToRotation : public FRigUnit
{
    FVector Input;                                                                    // 0x0008 (size: 0xC)
    FRotator Result;                                                                  // 0x0014 (size: 0xC)

}; // Size: 0x20

struct FRigUnit_DebugArc : public FRigUnit_DebugBaseMutable
{
    FTransform Transform;                                                             // 0x0070 (size: 0x30)
    FLinearColor Color;                                                               // 0x00A0 (size: 0x10)
    float Radius;                                                                     // 0x00B0 (size: 0x4)
    float MinimumDegrees;                                                             // 0x00B4 (size: 0x4)
    float MaximumDegrees;                                                             // 0x00B8 (size: 0x4)
    float Thickness;                                                                  // 0x00BC (size: 0x4)
    int32 Detail;                                                                     // 0x00C0 (size: 0x4)
    FName Space;                                                                      // 0x00C4 (size: 0x8)
    FTransform WorldOffset;                                                           // 0x00D0 (size: 0x30)
    bool bEnabled;                                                                    // 0x0100 (size: 0x1)

}; // Size: 0x110

struct FRigUnit_DebugArcItemSpace : public FRigUnit_DebugBaseMutable
{
    FTransform Transform;                                                             // 0x0070 (size: 0x30)
    FLinearColor Color;                                                               // 0x00A0 (size: 0x10)
    float Radius;                                                                     // 0x00B0 (size: 0x4)
    float MinimumDegrees;                                                             // 0x00B4 (size: 0x4)
    float MaximumDegrees;                                                             // 0x00B8 (size: 0x4)
    float Thickness;                                                                  // 0x00BC (size: 0x4)
    int32 Detail;                                                                     // 0x00C0 (size: 0x4)
    FRigElementKey Space;                                                             // 0x00C4 (size: 0xC)
    FTransform WorldOffset;                                                           // 0x00D0 (size: 0x30)
    bool bEnabled;                                                                    // 0x0100 (size: 0x1)

}; // Size: 0x110

struct FRigUnit_DebugBase : public FRigUnit
{
}; // Size: 0x8

struct FRigUnit_DebugBaseMutable : public FRigUnitMutable
{
}; // Size: 0x68

struct FRigUnit_DebugBezier : public FRigUnit_DebugBaseMutable
{
    FCRFourPointBezier Bezier;                                                        // 0x0068 (size: 0x30)
    float MinimumU;                                                                   // 0x0098 (size: 0x4)
    float MaximumU;                                                                   // 0x009C (size: 0x4)
    FLinearColor Color;                                                               // 0x00A0 (size: 0x10)
    float Thickness;                                                                  // 0x00B0 (size: 0x4)
    int32 Detail;                                                                     // 0x00B4 (size: 0x4)
    FName Space;                                                                      // 0x00B8 (size: 0x8)
    FTransform WorldOffset;                                                           // 0x00C0 (size: 0x30)
    bool bEnabled;                                                                    // 0x00F0 (size: 0x1)

}; // Size: 0x100

struct FRigUnit_DebugBezierItemSpace : public FRigUnit_DebugBaseMutable
{
    FCRFourPointBezier Bezier;                                                        // 0x0068 (size: 0x30)
    float MinimumU;                                                                   // 0x0098 (size: 0x4)
    float MaximumU;                                                                   // 0x009C (size: 0x4)
    FLinearColor Color;                                                               // 0x00A0 (size: 0x10)
    float Thickness;                                                                  // 0x00B0 (size: 0x4)
    int32 Detail;                                                                     // 0x00B4 (size: 0x4)
    FRigElementKey Space;                                                             // 0x00B8 (size: 0xC)
    FTransform WorldOffset;                                                           // 0x00D0 (size: 0x30)
    bool bEnabled;                                                                    // 0x0100 (size: 0x1)

}; // Size: 0x110

struct FRigUnit_DebugHierarchy : public FRigUnit_DebugBaseMutable
{
    float Scale;                                                                      // 0x0068 (size: 0x4)
    FLinearColor Color;                                                               // 0x006C (size: 0x10)
    float Thickness;                                                                  // 0x007C (size: 0x4)
    FTransform WorldOffset;                                                           // 0x0080 (size: 0x30)
    bool bEnabled;                                                                    // 0x00B0 (size: 0x1)

}; // Size: 0xC0

struct FRigUnit_DebugLine : public FRigUnit_DebugBaseMutable
{
    FVector A;                                                                        // 0x0068 (size: 0xC)
    FVector B;                                                                        // 0x0074 (size: 0xC)
    FLinearColor Color;                                                               // 0x0080 (size: 0x10)
    float Thickness;                                                                  // 0x0090 (size: 0x4)
    FName Space;                                                                      // 0x0094 (size: 0x8)
    FTransform WorldOffset;                                                           // 0x00A0 (size: 0x30)
    bool bEnabled;                                                                    // 0x00D0 (size: 0x1)

}; // Size: 0xE0

struct FRigUnit_DebugLineItemSpace : public FRigUnit_DebugBaseMutable
{
    FVector A;                                                                        // 0x0068 (size: 0xC)
    FVector B;                                                                        // 0x0074 (size: 0xC)
    FLinearColor Color;                                                               // 0x0080 (size: 0x10)
    float Thickness;                                                                  // 0x0090 (size: 0x4)
    FRigElementKey Space;                                                             // 0x0094 (size: 0xC)
    FTransform WorldOffset;                                                           // 0x00A0 (size: 0x30)
    bool bEnabled;                                                                    // 0x00D0 (size: 0x1)

}; // Size: 0xE0

struct FRigUnit_DebugLineStrip : public FRigUnit_DebugBaseMutable
{
    TArray<FVector> Points;                                                           // 0x0068 (size: 0x10)
    FLinearColor Color;                                                               // 0x0078 (size: 0x10)
    float Thickness;                                                                  // 0x0088 (size: 0x4)
    FName Space;                                                                      // 0x008C (size: 0x8)
    FTransform WorldOffset;                                                           // 0x00A0 (size: 0x30)
    bool bEnabled;                                                                    // 0x00D0 (size: 0x1)

}; // Size: 0xE0

struct FRigUnit_DebugLineStripItemSpace : public FRigUnit_DebugBaseMutable
{
    TArray<FVector> Points;                                                           // 0x0068 (size: 0x10)
    FLinearColor Color;                                                               // 0x0078 (size: 0x10)
    float Thickness;                                                                  // 0x0088 (size: 0x4)
    FRigElementKey Space;                                                             // 0x008C (size: 0xC)
    FTransform WorldOffset;                                                           // 0x00A0 (size: 0x30)
    bool bEnabled;                                                                    // 0x00D0 (size: 0x1)

}; // Size: 0xE0

struct FRigUnit_DebugPoint : public FRigUnit_DebugBase
{
    FVector Vector;                                                                   // 0x0008 (size: 0xC)
    ERigUnitDebugPointMode Mode;                                                      // 0x0014 (size: 0x1)
    FLinearColor Color;                                                               // 0x0018 (size: 0x10)
    float Scale;                                                                      // 0x0028 (size: 0x4)
    float Thickness;                                                                  // 0x002C (size: 0x4)
    FName Space;                                                                      // 0x0030 (size: 0x8)
    FTransform WorldOffset;                                                           // 0x0040 (size: 0x30)
    bool bEnabled;                                                                    // 0x0070 (size: 0x1)

}; // Size: 0x80

struct FRigUnit_DebugPointMutable : public FRigUnit_DebugBaseMutable
{
    FVector Vector;                                                                   // 0x0068 (size: 0xC)
    ERigUnitDebugPointMode Mode;                                                      // 0x0074 (size: 0x1)
    FLinearColor Color;                                                               // 0x0078 (size: 0x10)
    float Scale;                                                                      // 0x0088 (size: 0x4)
    float Thickness;                                                                  // 0x008C (size: 0x4)
    FName Space;                                                                      // 0x0090 (size: 0x8)
    FTransform WorldOffset;                                                           // 0x00A0 (size: 0x30)
    bool bEnabled;                                                                    // 0x00D0 (size: 0x1)

}; // Size: 0xE0

struct FRigUnit_DebugRectangle : public FRigUnit_DebugBaseMutable
{
    FTransform Transform;                                                             // 0x0070 (size: 0x30)
    FLinearColor Color;                                                               // 0x00A0 (size: 0x10)
    float Scale;                                                                      // 0x00B0 (size: 0x4)
    float Thickness;                                                                  // 0x00B4 (size: 0x4)
    FName Space;                                                                      // 0x00B8 (size: 0x8)
    FTransform WorldOffset;                                                           // 0x00C0 (size: 0x30)
    bool bEnabled;                                                                    // 0x00F0 (size: 0x1)

}; // Size: 0x100

struct FRigUnit_DebugRectangleItemSpace : public FRigUnit_DebugBaseMutable
{
    FTransform Transform;                                                             // 0x0070 (size: 0x30)
    FLinearColor Color;                                                               // 0x00A0 (size: 0x10)
    float Scale;                                                                      // 0x00B0 (size: 0x4)
    float Thickness;                                                                  // 0x00B4 (size: 0x4)
    FRigElementKey Space;                                                             // 0x00B8 (size: 0xC)
    FTransform WorldOffset;                                                           // 0x00D0 (size: 0x30)
    bool bEnabled;                                                                    // 0x0100 (size: 0x1)

}; // Size: 0x110

struct FRigUnit_DebugTransform : public FRigUnit_DebugBase
{
    FTransform Transform;                                                             // 0x0010 (size: 0x30)
    ERigUnitDebugTransformMode Mode;                                                  // 0x0040 (size: 0x1)
    FLinearColor Color;                                                               // 0x0044 (size: 0x10)
    float Thickness;                                                                  // 0x0054 (size: 0x4)
    float Scale;                                                                      // 0x0058 (size: 0x4)
    FName Space;                                                                      // 0x005C (size: 0x8)
    FTransform WorldOffset;                                                           // 0x0070 (size: 0x30)
    bool bEnabled;                                                                    // 0x00A0 (size: 0x1)

}; // Size: 0xB0

struct FRigUnit_DebugTransformArrayMutable : public FRigUnit_DebugBaseMutable
{
    TArray<FTransform> Transforms;                                                    // 0x0068 (size: 0x10)
    ERigUnitDebugTransformMode Mode;                                                  // 0x0078 (size: 0x1)
    FLinearColor Color;                                                               // 0x007C (size: 0x10)
    float Thickness;                                                                  // 0x008C (size: 0x4)
    float Scale;                                                                      // 0x0090 (size: 0x4)
    FName Space;                                                                      // 0x0094 (size: 0x8)
    FTransform WorldOffset;                                                           // 0x00A0 (size: 0x30)
    bool bEnabled;                                                                    // 0x00D0 (size: 0x1)
    FRigUnit_DebugTransformArrayMutable_WorkData WorkData;                            // 0x00D8 (size: 0x10)

}; // Size: 0xF0

struct FRigUnit_DebugTransformArrayMutable_WorkData
{
    TArray<FTransform> DrawTransforms;                                                // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FRigUnit_DebugTransformMutable : public FRigUnit_DebugBaseMutable
{
    FTransform Transform;                                                             // 0x0070 (size: 0x30)
    ERigUnitDebugTransformMode Mode;                                                  // 0x00A0 (size: 0x1)
    FLinearColor Color;                                                               // 0x00A4 (size: 0x10)
    float Thickness;                                                                  // 0x00B4 (size: 0x4)
    float Scale;                                                                      // 0x00B8 (size: 0x4)
    FName Space;                                                                      // 0x00BC (size: 0x8)
    FTransform WorldOffset;                                                           // 0x00D0 (size: 0x30)
    bool bEnabled;                                                                    // 0x0100 (size: 0x1)

}; // Size: 0x110

struct FRigUnit_DebugTransformMutableItemSpace : public FRigUnit_DebugBaseMutable
{
    FTransform Transform;                                                             // 0x0070 (size: 0x30)
    ERigUnitDebugTransformMode Mode;                                                  // 0x00A0 (size: 0x1)
    FLinearColor Color;                                                               // 0x00A4 (size: 0x10)
    float Thickness;                                                                  // 0x00B4 (size: 0x4)
    float Scale;                                                                      // 0x00B8 (size: 0x4)
    FRigElementKey Space;                                                             // 0x00BC (size: 0xC)
    FTransform WorldOffset;                                                           // 0x00D0 (size: 0x30)
    bool bEnabled;                                                                    // 0x0100 (size: 0x1)

}; // Size: 0x110

struct FRigUnit_DeltaFromPreviousFloat : public FRigUnit_SimBase
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    float Delta;                                                                      // 0x000C (size: 0x4)
    float PreviousValue;                                                              // 0x0010 (size: 0x4)
    float Cache;                                                                      // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FRigUnit_DeltaFromPreviousQuat : public FRigUnit_SimBase
{
    FQuat Value;                                                                      // 0x0010 (size: 0x10)
    FQuat Delta;                                                                      // 0x0020 (size: 0x10)
    FQuat PreviousValue;                                                              // 0x0030 (size: 0x10)
    FQuat Cache;                                                                      // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FRigUnit_DeltaFromPreviousTransform : public FRigUnit_SimBase
{
    FTransform Value;                                                                 // 0x0010 (size: 0x30)
    FTransform Delta;                                                                 // 0x0040 (size: 0x30)
    FTransform PreviousValue;                                                         // 0x0070 (size: 0x30)
    FTransform Cache;                                                                 // 0x00A0 (size: 0x30)

}; // Size: 0xD0

struct FRigUnit_DeltaFromPreviousVector : public FRigUnit_SimBase
{
    FVector Value;                                                                    // 0x0008 (size: 0xC)
    FVector Delta;                                                                    // 0x0014 (size: 0xC)
    FVector PreviousValue;                                                            // 0x0020 (size: 0xC)
    FVector Cache;                                                                    // 0x002C (size: 0xC)

}; // Size: 0x38

struct FRigUnit_Distance_VectorVector : public FRigUnit
{
    FVector Argument0;                                                                // 0x0008 (size: 0xC)
    FVector Argument1;                                                                // 0x0014 (size: 0xC)
    float Result;                                                                     // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FRigUnit_DistributeRotation : public FRigUnit_HighlevelBaseMutable
{
    FName StartBone;                                                                  // 0x0068 (size: 0x8)
    FName EndBone;                                                                    // 0x0070 (size: 0x8)
    TArray<FRigUnit_DistributeRotation_Rotation> Rotations;                           // 0x0078 (size: 0x10)
    EControlRigAnimEasingType RotationEaseType;                                       // 0x0088 (size: 0x1)
    float Weight;                                                                     // 0x008C (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x0090 (size: 0x1)
    FRigUnit_DistributeRotation_WorkData WorkData;                                    // 0x0098 (size: 0x50)

}; // Size: 0xE8

struct FRigUnit_DistributeRotationForCollection : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKeyCollection Items;                                                   // 0x0068 (size: 0x10)
    TArray<FRigUnit_DistributeRotation_Rotation> Rotations;                           // 0x0078 (size: 0x10)
    EControlRigAnimEasingType RotationEaseType;                                       // 0x0088 (size: 0x1)
    float Weight;                                                                     // 0x008C (size: 0x4)
    FRigUnit_DistributeRotation_WorkData WorkData;                                    // 0x0090 (size: 0x50)

}; // Size: 0xE0

struct FRigUnit_DistributeRotation_Rotation
{
    FQuat Rotation;                                                                   // 0x0000 (size: 0x10)
    float Ratio;                                                                      // 0x0010 (size: 0x4)

}; // Size: 0x20

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
}; // Size: 0x30

struct FRigUnit_DrawContainerGetInstruction : public FRigUnit
{
    FName InstructionName;                                                            // 0x0008 (size: 0x8)
    FLinearColor Color;                                                               // 0x0010 (size: 0x10)
    FTransform Transform;                                                             // 0x0020 (size: 0x30)

}; // Size: 0x50

struct FRigUnit_DrawContainerSetColor : public FRigUnitMutable
{
    FName InstructionName;                                                            // 0x0068 (size: 0x8)
    FLinearColor Color;                                                               // 0x0070 (size: 0x10)

}; // Size: 0x80

struct FRigUnit_DrawContainerSetThickness : public FRigUnitMutable
{
    FName InstructionName;                                                            // 0x0068 (size: 0x8)
    float Thickness;                                                                  // 0x0070 (size: 0x4)

}; // Size: 0x78

struct FRigUnit_DrawContainerSetTransform : public FRigUnitMutable
{
    FName InstructionName;                                                            // 0x0068 (size: 0x8)
    FTransform Transform;                                                             // 0x0070 (size: 0x30)

}; // Size: 0xA0

struct FRigUnit_EndProfilingTimer : public FRigUnit_DebugBaseMutable
{
    int32 NumberOfMeasurements;                                                       // 0x0068 (size: 0x4)
    FString Prefix;                                                                   // 0x0070 (size: 0x10)
    float AccumulatedTime;                                                            // 0x0080 (size: 0x4)
    int32 MeasurementsLeft;                                                           // 0x0084 (size: 0x4)

}; // Size: 0x88

struct FRigUnit_EndsWith : public FRigUnit_NameBase
{
    FName Name;                                                                       // 0x0008 (size: 0x8)
    FName Ending;                                                                     // 0x0010 (size: 0x8)
    bool Result;                                                                      // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FRigUnit_FABRIK : public FRigUnit_HighlevelBaseMutable
{
    FName StartBone;                                                                  // 0x0068 (size: 0x8)
    FName EffectorBone;                                                               // 0x0070 (size: 0x8)
    FTransform EffectorTransform;                                                     // 0x0080 (size: 0x30)
    float Precision;                                                                  // 0x00B0 (size: 0x4)
    float Weight;                                                                     // 0x00B4 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x00B8 (size: 0x1)
    int32 MaxIterations;                                                              // 0x00BC (size: 0x4)
    FRigUnit_FABRIK_WorkData WorkData;                                                // 0x00C0 (size: 0x38)

}; // Size: 0x100

struct FRigUnit_FABRIKPerItem : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKeyCollection Items;                                                   // 0x0068 (size: 0x10)
    FTransform EffectorTransform;                                                     // 0x0080 (size: 0x30)
    float Precision;                                                                  // 0x00B0 (size: 0x4)
    float Weight;                                                                     // 0x00B4 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x00B8 (size: 0x1)
    int32 MaxIterations;                                                              // 0x00BC (size: 0x4)
    FRigUnit_FABRIK_WorkData WorkData;                                                // 0x00C0 (size: 0x38)

}; // Size: 0x100

struct FRigUnit_FABRIK_WorkData
{
    TArray<FFABRIKChainLink> Chain;                                                   // 0x0000 (size: 0x10)
    TArray<FCachedRigElement> CachedItems;                                            // 0x0010 (size: 0x10)
    FCachedRigElement CachedEffector;                                                 // 0x0020 (size: 0x14)

}; // Size: 0x38

struct FRigUnit_FitChainToCurve : public FRigUnit_HighlevelBaseMutable
{
    FName StartBone;                                                                  // 0x0068 (size: 0x8)
    FName EndBone;                                                                    // 0x0070 (size: 0x8)
    FCRFourPointBezier Bezier;                                                        // 0x0078 (size: 0x30)
    EControlRigCurveAlignment Alignment;                                              // 0x00A8 (size: 0x1)
    float Minimum;                                                                    // 0x00AC (size: 0x4)
    float Maximum;                                                                    // 0x00B0 (size: 0x4)
    int32 SamplingPrecision;                                                          // 0x00B4 (size: 0x4)
    FVector PrimaryAxis;                                                              // 0x00B8 (size: 0xC)
    FVector SecondaryAxis;                                                            // 0x00C4 (size: 0xC)
    FVector PoleVectorPosition;                                                       // 0x00D0 (size: 0xC)
    TArray<FRigUnit_FitChainToCurve_Rotation> Rotations;                              // 0x00E0 (size: 0x10)
    EControlRigAnimEasingType RotationEaseType;                                       // 0x00F0 (size: 0x1)
    float Weight;                                                                     // 0x00F4 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x00F8 (size: 0x1)
    FRigUnit_FitChainToCurve_DebugSettings DebugSettings;                             // 0x0100 (size: 0x60)
    FRigUnit_FitChainToCurve_WorkData WorkData;                                       // 0x0160 (size: 0x98)

}; // Size: 0x200

struct FRigUnit_FitChainToCurvePerItem : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKeyCollection Items;                                                   // 0x0068 (size: 0x10)
    FCRFourPointBezier Bezier;                                                        // 0x0078 (size: 0x30)
    EControlRigCurveAlignment Alignment;                                              // 0x00A8 (size: 0x1)
    float Minimum;                                                                    // 0x00AC (size: 0x4)
    float Maximum;                                                                    // 0x00B0 (size: 0x4)
    int32 SamplingPrecision;                                                          // 0x00B4 (size: 0x4)
    FVector PrimaryAxis;                                                              // 0x00B8 (size: 0xC)
    FVector SecondaryAxis;                                                            // 0x00C4 (size: 0xC)
    FVector PoleVectorPosition;                                                       // 0x00D0 (size: 0xC)
    TArray<FRigUnit_FitChainToCurve_Rotation> Rotations;                              // 0x00E0 (size: 0x10)
    EControlRigAnimEasingType RotationEaseType;                                       // 0x00F0 (size: 0x1)
    float Weight;                                                                     // 0x00F4 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x00F8 (size: 0x1)
    FRigUnit_FitChainToCurve_DebugSettings DebugSettings;                             // 0x0100 (size: 0x60)
    FRigUnit_FitChainToCurve_WorkData WorkData;                                       // 0x0160 (size: 0x98)

}; // Size: 0x200

struct FRigUnit_FitChainToCurve_DebugSettings
{
    bool bEnabled;                                                                    // 0x0000 (size: 0x1)
    float Scale;                                                                      // 0x0004 (size: 0x4)
    FLinearColor CurveColor;                                                          // 0x0008 (size: 0x10)
    FLinearColor SegmentsColor;                                                       // 0x0018 (size: 0x10)
    FTransform WorldOffset;                                                           // 0x0030 (size: 0x30)

}; // Size: 0x60

struct FRigUnit_FitChainToCurve_Rotation
{
    FQuat Rotation;                                                                   // 0x0000 (size: 0x10)
    float Ratio;                                                                      // 0x0010 (size: 0x4)

}; // Size: 0x20

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

struct FRigUnit_ForLoopCount : public FRigUnitMutable
{
    int32 Count;                                                                      // 0x0068 (size: 0x4)
    int32 Index;                                                                      // 0x006C (size: 0x4)
    float Ratio;                                                                      // 0x0070 (size: 0x4)
    bool Continue;                                                                    // 0x0074 (size: 0x1)
    FControlRigExecuteContext Completed;                                              // 0x0078 (size: 0x60)

}; // Size: 0xD8

struct FRigUnit_FramesToSeconds : public FRigUnit_AnimBase
{
    float Frames;                                                                     // 0x0008 (size: 0x4)
    float Seconds;                                                                    // 0x000C (size: 0x4)

}; // Size: 0x10

struct FRigUnit_GetBoneTransform : public FRigUnit
{
    FName Bone;                                                                       // 0x0008 (size: 0x8)
    EBoneGetterSetterMode Space;                                                      // 0x0010 (size: 0x1)
    FTransform Transform;                                                             // 0x0020 (size: 0x30)
    FCachedRigElement CachedBone;                                                     // 0x0050 (size: 0x14)

}; // Size: 0x70

struct FRigUnit_GetControlBool : public FRigUnit
{
    FName Control;                                                                    // 0x0008 (size: 0x8)
    bool BoolValue;                                                                   // 0x0010 (size: 0x1)
    FCachedRigElement CachedControlIndex;                                             // 0x0014 (size: 0x14)

}; // Size: 0x28

struct FRigUnit_GetControlFloat : public FRigUnit
{
    FName Control;                                                                    // 0x0008 (size: 0x8)
    float FloatValue;                                                                 // 0x0010 (size: 0x4)
    float Minimum;                                                                    // 0x0014 (size: 0x4)
    float Maximum;                                                                    // 0x0018 (size: 0x4)
    FCachedRigElement CachedControlIndex;                                             // 0x001C (size: 0x14)

}; // Size: 0x30

struct FRigUnit_GetControlInitialTransform : public FRigUnit
{
    FName Control;                                                                    // 0x0008 (size: 0x8)
    EBoneGetterSetterMode Space;                                                      // 0x0010 (size: 0x1)
    FTransform Transform;                                                             // 0x0020 (size: 0x30)
    FCachedRigElement CachedControlIndex;                                             // 0x0050 (size: 0x14)

}; // Size: 0x70

struct FRigUnit_GetControlInteger : public FRigUnit
{
    FName Control;                                                                    // 0x0008 (size: 0x8)
    int32 IntegerValue;                                                               // 0x0010 (size: 0x4)
    int32 Minimum;                                                                    // 0x0014 (size: 0x4)
    int32 Maximum;                                                                    // 0x0018 (size: 0x4)
    FCachedRigElement CachedControlIndex;                                             // 0x001C (size: 0x14)

}; // Size: 0x30

struct FRigUnit_GetControlRotator : public FRigUnit
{
    FName Control;                                                                    // 0x0008 (size: 0x8)
    EBoneGetterSetterMode Space;                                                      // 0x0010 (size: 0x1)
    FRotator Rotator;                                                                 // 0x0014 (size: 0xC)
    FRotator Minimum;                                                                 // 0x0020 (size: 0xC)
    FRotator Maximum;                                                                 // 0x002C (size: 0xC)
    FCachedRigElement CachedControlIndex;                                             // 0x0038 (size: 0x14)

}; // Size: 0x50

struct FRigUnit_GetControlTransform : public FRigUnit
{
    FName Control;                                                                    // 0x0008 (size: 0x8)
    EBoneGetterSetterMode Space;                                                      // 0x0010 (size: 0x1)
    FTransform Transform;                                                             // 0x0020 (size: 0x30)
    FTransform Minimum;                                                               // 0x0050 (size: 0x30)
    FTransform Maximum;                                                               // 0x0080 (size: 0x30)
    FCachedRigElement CachedControlIndex;                                             // 0x00B0 (size: 0x14)

}; // Size: 0xD0

struct FRigUnit_GetControlVector : public FRigUnit
{
    FName Control;                                                                    // 0x0008 (size: 0x8)
    EBoneGetterSetterMode Space;                                                      // 0x0010 (size: 0x1)
    FVector Vector;                                                                   // 0x0014 (size: 0xC)
    FVector Minimum;                                                                  // 0x0020 (size: 0xC)
    FVector Maximum;                                                                  // 0x002C (size: 0xC)
    FCachedRigElement CachedControlIndex;                                             // 0x0038 (size: 0x14)

}; // Size: 0x50

struct FRigUnit_GetControlVector2D : public FRigUnit
{
    FName Control;                                                                    // 0x0008 (size: 0x8)
    FVector2D Vector;                                                                 // 0x0010 (size: 0x8)
    FVector2D Minimum;                                                                // 0x0018 (size: 0x8)
    FVector2D Maximum;                                                                // 0x0020 (size: 0x8)
    FCachedRigElement CachedControlIndex;                                             // 0x0028 (size: 0x14)

}; // Size: 0x40

struct FRigUnit_GetCurveValue : public FRigUnit
{
    FName Curve;                                                                      // 0x0008 (size: 0x8)
    float Value;                                                                      // 0x0010 (size: 0x4)
    FCachedRigElement CachedCurveIndex;                                               // 0x0014 (size: 0x14)

}; // Size: 0x28

struct FRigUnit_GetDeltaTime : public FRigUnit_AnimBase
{
    float Result;                                                                     // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FRigUnit_GetInitialBoneTransform : public FRigUnit
{
    FName Bone;                                                                       // 0x0008 (size: 0x8)
    EBoneGetterSetterMode Space;                                                      // 0x0010 (size: 0x1)
    FTransform Transform;                                                             // 0x0020 (size: 0x30)
    FCachedRigElement CachedBone;                                                     // 0x0050 (size: 0x14)

}; // Size: 0x70

struct FRigUnit_GetJointTransform : public FRigUnitMutable
{
    FName Joint;                                                                      // 0x0068 (size: 0x8)
    ETransformGetterType Type;                                                        // 0x0070 (size: 0x1)
    ETransformSpaceMode TransformSpace;                                               // 0x0071 (size: 0x1)
    FTransform BaseTransform;                                                         // 0x0080 (size: 0x30)
    FName BaseJoint;                                                                  // 0x00B0 (size: 0x8)
    FTransform Output;                                                                // 0x00C0 (size: 0x30)

}; // Size: 0xF0

struct FRigUnit_GetRelativeBoneTransform : public FRigUnit
{
    FName Bone;                                                                       // 0x0008 (size: 0x8)
    FName Space;                                                                      // 0x0010 (size: 0x8)
    FTransform Transform;                                                             // 0x0020 (size: 0x30)
    FCachedRigElement CachedBone;                                                     // 0x0050 (size: 0x14)
    FCachedRigElement CachedSpace;                                                    // 0x0064 (size: 0x14)

}; // Size: 0x80

struct FRigUnit_GetRelativeTransform : public FRigUnit_BinaryTransformOp
{
}; // Size: 0xA0

struct FRigUnit_GetRelativeTransformForItem : public FRigUnit
{
    FRigElementKey Child;                                                             // 0x0008 (size: 0xC)
    bool bChildInitial;                                                               // 0x0014 (size: 0x1)
    FRigElementKey Parent;                                                            // 0x0018 (size: 0xC)
    bool bParentInitial;                                                              // 0x0024 (size: 0x1)
    FTransform RelativeTransform;                                                     // 0x0030 (size: 0x30)
    FCachedRigElement CachedChild;                                                    // 0x0060 (size: 0x14)
    FCachedRigElement CachedParent;                                                   // 0x0074 (size: 0x14)

}; // Size: 0x90

struct FRigUnit_GetSpaceTransform : public FRigUnit
{
    FName Space;                                                                      // 0x0008 (size: 0x8)
    EBoneGetterSetterMode SpaceType;                                                  // 0x0010 (size: 0x1)
    FTransform Transform;                                                             // 0x0020 (size: 0x30)
    FCachedRigElement CachedSpaceIndex;                                               // 0x0050 (size: 0x14)

}; // Size: 0x70

struct FRigUnit_GetTransform : public FRigUnit
{
    FRigElementKey Item;                                                              // 0x0008 (size: 0xC)
    EBoneGetterSetterMode Space;                                                      // 0x0014 (size: 0x1)
    bool bInitial;                                                                    // 0x0015 (size: 0x1)
    FTransform Transform;                                                             // 0x0020 (size: 0x30)
    FCachedRigElement CachedIndex;                                                    // 0x0050 (size: 0x14)

}; // Size: 0x70

struct FRigUnit_GetWorldTime : public FRigUnit_AnimBase
{
    float Year;                                                                       // 0x0008 (size: 0x4)
    float Month;                                                                      // 0x000C (size: 0x4)
    float Day;                                                                        // 0x0010 (size: 0x4)
    float WeekDay;                                                                    // 0x0014 (size: 0x4)
    float Hours;                                                                      // 0x0018 (size: 0x4)
    float Minutes;                                                                    // 0x001C (size: 0x4)
    float Seconds;                                                                    // 0x0020 (size: 0x4)
    float OverallSeconds;                                                             // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FRigUnit_Harmonics_TargetItem
{
    FRigElementKey Item;                                                              // 0x0000 (size: 0xC)
    float Ratio;                                                                      // 0x000C (size: 0x4)

}; // Size: 0x10

struct FRigUnit_HierarchyBase : public FRigUnit
{
}; // Size: 0x8

struct FRigUnit_HierarchyGetChildren : public FRigUnit_HierarchyBase
{
    FRigElementKey Parent;                                                            // 0x0008 (size: 0xC)
    bool bIncludeParent;                                                              // 0x0014 (size: 0x1)
    bool bRecursive;                                                                  // 0x0015 (size: 0x1)
    FRigElementKeyCollection Children;                                                // 0x0018 (size: 0x10)
    FCachedRigElement CachedParent;                                                   // 0x0028 (size: 0x14)
    FRigElementKeyCollection CachedChildren;                                          // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FRigUnit_HierarchyGetParent : public FRigUnit_HierarchyBase
{
    FRigElementKey Child;                                                             // 0x0008 (size: 0xC)
    FRigElementKey Parent;                                                            // 0x0014 (size: 0xC)
    FCachedRigElement CachedChild;                                                    // 0x0020 (size: 0x14)
    FCachedRigElement CachedParent;                                                   // 0x0034 (size: 0x14)

}; // Size: 0x48

struct FRigUnit_HierarchyGetParents : public FRigUnit_HierarchyBase
{
    FRigElementKey Child;                                                             // 0x0008 (size: 0xC)
    bool bIncludeChild;                                                               // 0x0014 (size: 0x1)
    bool bReverse;                                                                    // 0x0015 (size: 0x1)
    FRigElementKeyCollection Parents;                                                 // 0x0018 (size: 0x10)
    FCachedRigElement CachedChild;                                                    // 0x0028 (size: 0x14)
    FRigElementKeyCollection CachedParents;                                           // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FRigUnit_HierarchyGetSiblings : public FRigUnit_HierarchyBase
{
    FRigElementKey Item;                                                              // 0x0008 (size: 0xC)
    bool bIncludeItem;                                                                // 0x0014 (size: 0x1)
    FRigElementKeyCollection Siblings;                                                // 0x0018 (size: 0x10)
    FCachedRigElement CachedItem;                                                     // 0x0028 (size: 0x14)
    FRigElementKeyCollection CachedSiblings;                                          // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FRigUnit_HighlevelBase : public FRigUnit
{
}; // Size: 0x8

struct FRigUnit_HighlevelBaseMutable : public FRigUnitMutable
{
}; // Size: 0x68

struct FRigUnit_InverseExecution : public FRigUnit
{
    FControlRigExecuteContext ExecuteContext;                                         // 0x0008 (size: 0x60)

}; // Size: 0x68

struct FRigUnit_InverseQuaterion : public FRigUnit_UnaryQuaternionOp
{
}; // Size: 0x30

struct FRigUnit_IsInteracting : public FRigUnit
{
    bool bIsInteracting;                                                              // 0x0008 (size: 0x1)

}; // Size: 0x10

struct FRigUnit_Item : public FRigUnit
{
    FRigElementKey Item;                                                              // 0x0008 (size: 0xC)

}; // Size: 0x18

struct FRigUnit_ItemBase : public FRigUnit
{
}; // Size: 0x8

struct FRigUnit_ItemBaseMutable : public FRigUnitMutable
{
}; // Size: 0x68

struct FRigUnit_ItemExists : public FRigUnit_ItemBase
{
    FRigElementKey Item;                                                              // 0x0008 (size: 0xC)
    bool Exists;                                                                      // 0x0014 (size: 0x1)
    FCachedRigElement CachedIndex;                                                    // 0x0018 (size: 0x14)

}; // Size: 0x30

struct FRigUnit_ItemHarmonics : public FRigUnit_HighlevelBaseMutable
{
    TArray<FRigUnit_Harmonics_TargetItem> Targets;                                    // 0x0068 (size: 0x10)
    FVector WaveSpeed;                                                                // 0x0078 (size: 0xC)
    FVector WaveFrequency;                                                            // 0x0084 (size: 0xC)
    FVector WaveAmplitude;                                                            // 0x0090 (size: 0xC)
    FVector WaveOffset;                                                               // 0x009C (size: 0xC)
    FVector WaveNoise;                                                                // 0x00A8 (size: 0xC)
    EControlRigAnimEasingType WaveEase;                                               // 0x00B4 (size: 0x1)
    float WaveMinimum;                                                                // 0x00B8 (size: 0x4)
    float WaveMaximum;                                                                // 0x00BC (size: 0x4)
    EControlRigRotationOrder RotationOrder;                                           // 0x00C0 (size: 0x1)
    FRigUnit_BoneHarmonics_WorkData WorkData;                                         // 0x00C8 (size: 0x20)

}; // Size: 0xE8

struct FRigUnit_ItemReplace : public FRigUnit_ItemBase
{
    FRigElementKey Item;                                                              // 0x0008 (size: 0xC)
    FName Old;                                                                        // 0x0014 (size: 0x8)
    FName New;                                                                        // 0x001C (size: 0x8)
    FRigElementKey Result;                                                            // 0x0024 (size: 0xC)

}; // Size: 0x30

struct FRigUnit_KalmanFloat : public FRigUnit_SimBase
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    int32 BufferSize;                                                                 // 0x000C (size: 0x4)
    float Result;                                                                     // 0x0010 (size: 0x4)
    TArray<float> Buffer;                                                             // 0x0018 (size: 0x10)
    int32 LastInsertIndex;                                                            // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FRigUnit_KalmanTransform : public FRigUnit_SimBase
{
    FTransform Value;                                                                 // 0x0010 (size: 0x30)
    int32 BufferSize;                                                                 // 0x0040 (size: 0x4)
    FTransform Result;                                                                // 0x0050 (size: 0x30)
    TArray<FTransform> Buffer;                                                        // 0x0080 (size: 0x10)
    int32 LastInsertIndex;                                                            // 0x0090 (size: 0x4)

}; // Size: 0xA0

struct FRigUnit_KalmanVector : public FRigUnit_SimBase
{
    FVector Value;                                                                    // 0x0008 (size: 0xC)
    int32 BufferSize;                                                                 // 0x0014 (size: 0x4)
    FVector Result;                                                                   // 0x0018 (size: 0xC)
    TArray<FVector> Buffer;                                                           // 0x0028 (size: 0x10)
    int32 LastInsertIndex;                                                            // 0x0038 (size: 0x4)

}; // Size: 0x40

struct FRigUnit_MapRange_Float : public FRigUnit
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    float MinIn;                                                                      // 0x000C (size: 0x4)
    float MaxIn;                                                                      // 0x0010 (size: 0x4)
    float MinOut;                                                                     // 0x0014 (size: 0x4)
    float MaxOut;                                                                     // 0x0018 (size: 0x4)
    float Result;                                                                     // 0x001C (size: 0x4)

}; // Size: 0x20

struct FRigUnit_MathBase : public FRigUnit
{
}; // Size: 0x8

struct FRigUnit_MathBoolAnd : public FRigUnit_MathBoolBinaryOp
{
}; // Size: 0x10

struct FRigUnit_MathBoolBase : public FRigUnit_MathBase
{
}; // Size: 0x8

struct FRigUnit_MathBoolBinaryOp : public FRigUnit_MathBoolBase
{
    bool A;                                                                           // 0x0008 (size: 0x1)
    bool B;                                                                           // 0x0009 (size: 0x1)
    bool Result;                                                                      // 0x000A (size: 0x1)

}; // Size: 0x10

struct FRigUnit_MathBoolConstFalse : public FRigUnit_MathBoolConstant
{
}; // Size: 0x10

struct FRigUnit_MathBoolConstTrue : public FRigUnit_MathBoolConstant
{
}; // Size: 0x10

struct FRigUnit_MathBoolConstant : public FRigUnit_MathBoolBase
{
    bool Value;                                                                       // 0x0008 (size: 0x1)

}; // Size: 0x10

struct FRigUnit_MathBoolEquals : public FRigUnit_MathBoolBase
{
    bool A;                                                                           // 0x0008 (size: 0x1)
    bool B;                                                                           // 0x0009 (size: 0x1)
    bool Result;                                                                      // 0x000A (size: 0x1)

}; // Size: 0x10

struct FRigUnit_MathBoolNand : public FRigUnit_MathBoolBinaryOp
{
}; // Size: 0x10

struct FRigUnit_MathBoolNot : public FRigUnit_MathBoolUnaryOp
{
}; // Size: 0x10

struct FRigUnit_MathBoolNotEquals : public FRigUnit_MathBoolBase
{
    bool A;                                                                           // 0x0008 (size: 0x1)
    bool B;                                                                           // 0x0009 (size: 0x1)
    bool Result;                                                                      // 0x000A (size: 0x1)

}; // Size: 0x10

struct FRigUnit_MathBoolOr : public FRigUnit_MathBoolBinaryOp
{
}; // Size: 0x10

struct FRigUnit_MathBoolUnaryOp : public FRigUnit_MathBoolBase
{
    bool Value;                                                                       // 0x0008 (size: 0x1)
    bool Result;                                                                      // 0x0009 (size: 0x1)

}; // Size: 0x10

struct FRigUnit_MathColorAdd : public FRigUnit_MathColorBinaryOp
{
}; // Size: 0x38

struct FRigUnit_MathColorBase : public FRigUnit_MathBase
{
}; // Size: 0x8

struct FRigUnit_MathColorBinaryOp : public FRigUnit_MathColorBase
{
    FLinearColor A;                                                                   // 0x0008 (size: 0x10)
    FLinearColor B;                                                                   // 0x0018 (size: 0x10)
    FLinearColor Result;                                                              // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FRigUnit_MathColorFromFloat : public FRigUnit_MathColorBase
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    FLinearColor Result;                                                              // 0x000C (size: 0x10)

}; // Size: 0x20

struct FRigUnit_MathColorLerp : public FRigUnit_MathColorBase
{
    FLinearColor A;                                                                   // 0x0008 (size: 0x10)
    FLinearColor B;                                                                   // 0x0018 (size: 0x10)
    float T;                                                                          // 0x0028 (size: 0x4)
    FLinearColor Result;                                                              // 0x002C (size: 0x10)

}; // Size: 0x40

struct FRigUnit_MathColorMul : public FRigUnit_MathColorBinaryOp
{
}; // Size: 0x38

struct FRigUnit_MathColorSub : public FRigUnit_MathColorBinaryOp
{
}; // Size: 0x38

struct FRigUnit_MathFloatAbs : public FRigUnit_MathFloatUnaryOp
{
}; // Size: 0x10

struct FRigUnit_MathFloatAcos : public FRigUnit_MathFloatUnaryOp
{
}; // Size: 0x10

struct FRigUnit_MathFloatAdd : public FRigUnit_MathFloatBinaryOp
{
}; // Size: 0x18

struct FRigUnit_MathFloatAsin : public FRigUnit_MathFloatUnaryOp
{
}; // Size: 0x10

struct FRigUnit_MathFloatAtan : public FRigUnit_MathFloatUnaryOp
{
}; // Size: 0x10

struct FRigUnit_MathFloatBase : public FRigUnit_MathBase
{
}; // Size: 0x8

struct FRigUnit_MathFloatBinaryOp : public FRigUnit_MathFloatBase
{
    float A;                                                                          // 0x0008 (size: 0x4)
    float B;                                                                          // 0x000C (size: 0x4)
    float Result;                                                                     // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FRigUnit_MathFloatCeil : public FRigUnit_MathFloatBase
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    float Result;                                                                     // 0x000C (size: 0x4)
    int32 Int;                                                                        // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FRigUnit_MathFloatClamp : public FRigUnit_MathFloatBase
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    float Minimum;                                                                    // 0x000C (size: 0x4)
    float Maximum;                                                                    // 0x0010 (size: 0x4)
    float Result;                                                                     // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FRigUnit_MathFloatConstHalfPi : public FRigUnit_MathFloatConstant
{
}; // Size: 0x10

struct FRigUnit_MathFloatConstPi : public FRigUnit_MathFloatConstant
{
}; // Size: 0x10

struct FRigUnit_MathFloatConstTwoPi : public FRigUnit_MathFloatConstant
{
}; // Size: 0x10

struct FRigUnit_MathFloatConstant : public FRigUnit_MathFloatBase
{
    float Value;                                                                      // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FRigUnit_MathFloatCos : public FRigUnit_MathFloatUnaryOp
{
}; // Size: 0x10

struct FRigUnit_MathFloatDeg : public FRigUnit_MathFloatUnaryOp
{
}; // Size: 0x10

struct FRigUnit_MathFloatDiv : public FRigUnit_MathFloatBinaryOp
{
}; // Size: 0x18

struct FRigUnit_MathFloatEquals : public FRigUnit_MathFloatBase
{
    float A;                                                                          // 0x0008 (size: 0x4)
    float B;                                                                          // 0x000C (size: 0x4)
    bool Result;                                                                      // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FRigUnit_MathFloatFloor : public FRigUnit_MathFloatBase
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    float Result;                                                                     // 0x000C (size: 0x4)
    int32 Int;                                                                        // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FRigUnit_MathFloatGreater : public FRigUnit_MathFloatBase
{
    float A;                                                                          // 0x0008 (size: 0x4)
    float B;                                                                          // 0x000C (size: 0x4)
    bool Result;                                                                      // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FRigUnit_MathFloatGreaterEqual : public FRigUnit_MathFloatBase
{
    float A;                                                                          // 0x0008 (size: 0x4)
    float B;                                                                          // 0x000C (size: 0x4)
    bool Result;                                                                      // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FRigUnit_MathFloatIsNearlyEqual : public FRigUnit_MathFloatBase
{
    float A;                                                                          // 0x0008 (size: 0x4)
    float B;                                                                          // 0x000C (size: 0x4)
    float Tolerance;                                                                  // 0x0010 (size: 0x4)
    bool Result;                                                                      // 0x0014 (size: 0x1)

}; // Size: 0x18

struct FRigUnit_MathFloatIsNearlyZero : public FRigUnit_MathFloatBase
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    float Tolerance;                                                                  // 0x000C (size: 0x4)
    bool Result;                                                                      // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FRigUnit_MathFloatLawOfCosine : public FRigUnit_MathFloatBase
{
    float A;                                                                          // 0x0008 (size: 0x4)
    float B;                                                                          // 0x000C (size: 0x4)
    float C;                                                                          // 0x0010 (size: 0x4)
    float AlphaAngle;                                                                 // 0x0014 (size: 0x4)
    float BetaAngle;                                                                  // 0x0018 (size: 0x4)
    float GammaAngle;                                                                 // 0x001C (size: 0x4)
    bool bValid;                                                                      // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FRigUnit_MathFloatLerp : public FRigUnit_MathFloatBase
{
    float A;                                                                          // 0x0008 (size: 0x4)
    float B;                                                                          // 0x000C (size: 0x4)
    float T;                                                                          // 0x0010 (size: 0x4)
    float Result;                                                                     // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FRigUnit_MathFloatLess : public FRigUnit_MathFloatBase
{
    float A;                                                                          // 0x0008 (size: 0x4)
    float B;                                                                          // 0x000C (size: 0x4)
    bool Result;                                                                      // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FRigUnit_MathFloatLessEqual : public FRigUnit_MathFloatBase
{
    float A;                                                                          // 0x0008 (size: 0x4)
    float B;                                                                          // 0x000C (size: 0x4)
    bool Result;                                                                      // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FRigUnit_MathFloatMax : public FRigUnit_MathFloatBinaryOp
{
}; // Size: 0x18

struct FRigUnit_MathFloatMin : public FRigUnit_MathFloatBinaryOp
{
}; // Size: 0x18

struct FRigUnit_MathFloatMod : public FRigUnit_MathFloatBinaryOp
{
}; // Size: 0x18

struct FRigUnit_MathFloatMul : public FRigUnit_MathFloatBinaryOp
{
}; // Size: 0x18

struct FRigUnit_MathFloatNegate : public FRigUnit_MathFloatUnaryOp
{
}; // Size: 0x10

struct FRigUnit_MathFloatNotEquals : public FRigUnit_MathFloatBase
{
    float A;                                                                          // 0x0008 (size: 0x4)
    float B;                                                                          // 0x000C (size: 0x4)
    bool Result;                                                                      // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FRigUnit_MathFloatPow : public FRigUnit_MathFloatBinaryOp
{
}; // Size: 0x18

struct FRigUnit_MathFloatRad : public FRigUnit_MathFloatUnaryOp
{
}; // Size: 0x10

struct FRigUnit_MathFloatRemap : public FRigUnit_MathFloatBase
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    float SourceMinimum;                                                              // 0x000C (size: 0x4)
    float SourceMaximum;                                                              // 0x0010 (size: 0x4)
    float TargetMinimum;                                                              // 0x0014 (size: 0x4)
    float TargetMaximum;                                                              // 0x0018 (size: 0x4)
    bool bClamp;                                                                      // 0x001C (size: 0x1)
    float Result;                                                                     // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FRigUnit_MathFloatRound : public FRigUnit_MathFloatBase
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    float Result;                                                                     // 0x000C (size: 0x4)
    int32 Int;                                                                        // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FRigUnit_MathFloatSelectBool : public FRigUnit_MathFloatBase
{
    bool Condition;                                                                   // 0x0008 (size: 0x1)
    float IfTrue;                                                                     // 0x000C (size: 0x4)
    float IfFalse;                                                                    // 0x0010 (size: 0x4)
    float Result;                                                                     // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FRigUnit_MathFloatSign : public FRigUnit_MathFloatUnaryOp
{
}; // Size: 0x10

struct FRigUnit_MathFloatSin : public FRigUnit_MathFloatUnaryOp
{
}; // Size: 0x10

struct FRigUnit_MathFloatSqrt : public FRigUnit_MathFloatUnaryOp
{
}; // Size: 0x10

struct FRigUnit_MathFloatSub : public FRigUnit_MathFloatBinaryOp
{
}; // Size: 0x18

struct FRigUnit_MathFloatTan : public FRigUnit_MathFloatUnaryOp
{
}; // Size: 0x10

struct FRigUnit_MathFloatToInt : public FRigUnit_MathFloatBase
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    int32 Result;                                                                     // 0x000C (size: 0x4)

}; // Size: 0x10

struct FRigUnit_MathFloatUnaryOp : public FRigUnit_MathFloatBase
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    float Result;                                                                     // 0x000C (size: 0x4)

}; // Size: 0x10

struct FRigUnit_MathIntAbs : public FRigUnit_MathIntUnaryOp
{
}; // Size: 0x10

struct FRigUnit_MathIntAdd : public FRigUnit_MathIntBinaryOp
{
}; // Size: 0x18

struct FRigUnit_MathIntBase : public FRigUnit_MathBase
{
}; // Size: 0x8

struct FRigUnit_MathIntBinaryOp : public FRigUnit_MathIntBase
{
    int32 A;                                                                          // 0x0008 (size: 0x4)
    int32 B;                                                                          // 0x000C (size: 0x4)
    int32 Result;                                                                     // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FRigUnit_MathIntClamp : public FRigUnit_MathIntBase
{
    int32 Value;                                                                      // 0x0008 (size: 0x4)
    int32 Minimum;                                                                    // 0x000C (size: 0x4)
    int32 Maximum;                                                                    // 0x0010 (size: 0x4)
    int32 Result;                                                                     // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FRigUnit_MathIntDiv : public FRigUnit_MathIntBinaryOp
{
}; // Size: 0x18

struct FRigUnit_MathIntEquals : public FRigUnit_MathIntBase
{
    int32 A;                                                                          // 0x0008 (size: 0x4)
    int32 B;                                                                          // 0x000C (size: 0x4)
    bool Result;                                                                      // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FRigUnit_MathIntGreater : public FRigUnit_MathIntBase
{
    int32 A;                                                                          // 0x0008 (size: 0x4)
    int32 B;                                                                          // 0x000C (size: 0x4)
    bool Result;                                                                      // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FRigUnit_MathIntGreaterEqual : public FRigUnit_MathIntBase
{
    int32 A;                                                                          // 0x0008 (size: 0x4)
    int32 B;                                                                          // 0x000C (size: 0x4)
    bool Result;                                                                      // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FRigUnit_MathIntLess : public FRigUnit_MathIntBase
{
    int32 A;                                                                          // 0x0008 (size: 0x4)
    int32 B;                                                                          // 0x000C (size: 0x4)
    bool Result;                                                                      // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FRigUnit_MathIntLessEqual : public FRigUnit_MathIntBase
{
    int32 A;                                                                          // 0x0008 (size: 0x4)
    int32 B;                                                                          // 0x000C (size: 0x4)
    bool Result;                                                                      // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FRigUnit_MathIntMax : public FRigUnit_MathIntBinaryOp
{
}; // Size: 0x18

struct FRigUnit_MathIntMin : public FRigUnit_MathIntBinaryOp
{
}; // Size: 0x18

struct FRigUnit_MathIntMod : public FRigUnit_MathIntBinaryOp
{
}; // Size: 0x18

struct FRigUnit_MathIntMul : public FRigUnit_MathIntBinaryOp
{
}; // Size: 0x18

struct FRigUnit_MathIntNegate : public FRigUnit_MathIntUnaryOp
{
}; // Size: 0x10

struct FRigUnit_MathIntNotEquals : public FRigUnit_MathIntBase
{
    int32 A;                                                                          // 0x0008 (size: 0x4)
    int32 B;                                                                          // 0x000C (size: 0x4)
    bool Result;                                                                      // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FRigUnit_MathIntPow : public FRigUnit_MathIntBinaryOp
{
}; // Size: 0x18

struct FRigUnit_MathIntSign : public FRigUnit_MathIntUnaryOp
{
}; // Size: 0x10

struct FRigUnit_MathIntSub : public FRigUnit_MathIntBinaryOp
{
}; // Size: 0x18

struct FRigUnit_MathIntToFloat : public FRigUnit_MathIntBase
{
    int32 Value;                                                                      // 0x0008 (size: 0x4)
    float Result;                                                                     // 0x000C (size: 0x4)

}; // Size: 0x10

struct FRigUnit_MathIntUnaryOp : public FRigUnit_MathIntBase
{
    int32 Value;                                                                      // 0x0008 (size: 0x4)
    int32 Result;                                                                     // 0x000C (size: 0x4)

}; // Size: 0x10

struct FRigUnit_MathIntersectPlane : public FRigUnit_MathVectorBase
{
    FVector Start;                                                                    // 0x0008 (size: 0xC)
    FVector Direction;                                                                // 0x0014 (size: 0xC)
    FVector PlanePoint;                                                               // 0x0020 (size: 0xC)
    FVector PlaneNormal;                                                              // 0x002C (size: 0xC)
    FVector Result;                                                                   // 0x0038 (size: 0xC)
    float Distance;                                                                   // 0x0044 (size: 0x4)

}; // Size: 0x48

struct FRigUnit_MathQuaternionBase : public FRigUnit_MathBase
{
}; // Size: 0x8

struct FRigUnit_MathQuaternionBinaryOp : public FRigUnit_MathQuaternionBase
{
    FQuat A;                                                                          // 0x0010 (size: 0x10)
    FQuat B;                                                                          // 0x0020 (size: 0x10)
    FQuat Result;                                                                     // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FRigUnit_MathQuaternionDot : public FRigUnit_MathQuaternionBase
{
    FQuat A;                                                                          // 0x0010 (size: 0x10)
    FQuat B;                                                                          // 0x0020 (size: 0x10)
    float Result;                                                                     // 0x0030 (size: 0x4)

}; // Size: 0x40

struct FRigUnit_MathQuaternionEquals : public FRigUnit_MathQuaternionBase
{
    FQuat A;                                                                          // 0x0010 (size: 0x10)
    FQuat B;                                                                          // 0x0020 (size: 0x10)
    bool Result;                                                                      // 0x0030 (size: 0x1)

}; // Size: 0x40

struct FRigUnit_MathQuaternionFromAxisAndAngle : public FRigUnit_MathQuaternionBase
{
    FVector Axis;                                                                     // 0x0008 (size: 0xC)
    float Angle;                                                                      // 0x0014 (size: 0x4)
    FQuat Result;                                                                     // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FRigUnit_MathQuaternionFromEuler : public FRigUnit_MathQuaternionBase
{
    FVector Euler;                                                                    // 0x0008 (size: 0xC)
    EControlRigRotationOrder RotationOrder;                                           // 0x0014 (size: 0x1)
    FQuat Result;                                                                     // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FRigUnit_MathQuaternionFromRotator : public FRigUnit_MathQuaternionBase
{
    FRotator Rotator;                                                                 // 0x0008 (size: 0xC)
    FQuat Result;                                                                     // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FRigUnit_MathQuaternionFromTwoVectors : public FRigUnit_MathQuaternionBase
{
    FVector A;                                                                        // 0x0008 (size: 0xC)
    FVector B;                                                                        // 0x0014 (size: 0xC)
    FQuat Result;                                                                     // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FRigUnit_MathQuaternionGetAxis : public FRigUnit_MathQuaternionBase
{
    FQuat Quaternion;                                                                 // 0x0010 (size: 0x10)
    TEnumAsByte<EAxis::Type> Axis;                                                    // 0x0020 (size: 0x1)
    FVector Result;                                                                   // 0x0024 (size: 0xC)

}; // Size: 0x30

struct FRigUnit_MathQuaternionInverse : public FRigUnit_MathQuaternionUnaryOp
{
}; // Size: 0x30

struct FRigUnit_MathQuaternionMul : public FRigUnit_MathQuaternionBinaryOp
{
}; // Size: 0x40

struct FRigUnit_MathQuaternionNotEquals : public FRigUnit_MathQuaternionBase
{
    FQuat A;                                                                          // 0x0010 (size: 0x10)
    FQuat B;                                                                          // 0x0020 (size: 0x10)
    bool Result;                                                                      // 0x0030 (size: 0x1)

}; // Size: 0x40

struct FRigUnit_MathQuaternionRotateVector : public FRigUnit_MathQuaternionBase
{
    FQuat Quaternion;                                                                 // 0x0010 (size: 0x10)
    FVector Vector;                                                                   // 0x0020 (size: 0xC)
    FVector Result;                                                                   // 0x002C (size: 0xC)

}; // Size: 0x40

struct FRigUnit_MathQuaternionRotationOrder : public FRigUnit_MathBase
{
    EControlRigRotationOrder RotationOrder;                                           // 0x0008 (size: 0x1)

}; // Size: 0x10

struct FRigUnit_MathQuaternionScale : public FRigUnit_MathQuaternionBase
{
    FQuat Value;                                                                      // 0x0010 (size: 0x10)
    float Scale;                                                                      // 0x0020 (size: 0x4)

}; // Size: 0x30

struct FRigUnit_MathQuaternionSelectBool : public FRigUnit_MathQuaternionBase
{
    bool Condition;                                                                   // 0x0008 (size: 0x1)
    FQuat IfTrue;                                                                     // 0x0010 (size: 0x10)
    FQuat IfFalse;                                                                    // 0x0020 (size: 0x10)
    FQuat Result;                                                                     // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FRigUnit_MathQuaternionSlerp : public FRigUnit_MathQuaternionBase
{
    FQuat A;                                                                          // 0x0010 (size: 0x10)
    FQuat B;                                                                          // 0x0020 (size: 0x10)
    float T;                                                                          // 0x0030 (size: 0x4)
    FQuat Result;                                                                     // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FRigUnit_MathQuaternionSwingTwist : public FRigUnit_MathQuaternionBase
{
    FQuat Input;                                                                      // 0x0010 (size: 0x10)
    FVector TwistAxis;                                                                // 0x0020 (size: 0xC)
    FQuat Swing;                                                                      // 0x0030 (size: 0x10)
    FQuat Twist;                                                                      // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FRigUnit_MathQuaternionToAxisAndAngle : public FRigUnit_MathQuaternionBase
{
    FQuat Value;                                                                      // 0x0010 (size: 0x10)
    FVector Axis;                                                                     // 0x0020 (size: 0xC)
    float Angle;                                                                      // 0x002C (size: 0x4)

}; // Size: 0x30

struct FRigUnit_MathQuaternionToEuler : public FRigUnit_MathQuaternionBase
{
    FQuat Value;                                                                      // 0x0010 (size: 0x10)
    EControlRigRotationOrder RotationOrder;                                           // 0x0020 (size: 0x1)
    FVector Result;                                                                   // 0x0024 (size: 0xC)

}; // Size: 0x30

struct FRigUnit_MathQuaternionToRotator : public FRigUnit_MathQuaternionBase
{
    FQuat Value;                                                                      // 0x0010 (size: 0x10)
    FRotator Result;                                                                  // 0x0020 (size: 0xC)

}; // Size: 0x30

struct FRigUnit_MathQuaternionUnaryOp : public FRigUnit_MathQuaternionBase
{
    FQuat Value;                                                                      // 0x0010 (size: 0x10)
    FQuat Result;                                                                     // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FRigUnit_MathQuaternionUnit : public FRigUnit_MathQuaternionUnaryOp
{
}; // Size: 0x30

struct FRigUnit_MathRBFInterpolateBase : public FRigUnit_MathBase
{
}; // Size: 0x8

struct FRigUnit_MathRBFInterpolateQuatBase : public FRigUnit_MathRBFInterpolateBase
{
    FQuat Input;                                                                      // 0x0010 (size: 0x10)
    ERBFQuatDistanceType DistanceFunction;                                            // 0x0020 (size: 0x1)
    ERBFKernelType SmoothingFunction;                                                 // 0x0021 (size: 0x1)
    float SmoothingAngle;                                                             // 0x0024 (size: 0x4)
    bool bNormalizeOutput;                                                            // 0x0028 (size: 0x1)
    FVector TwistAxis;                                                                // 0x002C (size: 0xC)
    FRigUnit_MathRBFInterpolateQuatWorkData WorkData;                                 // 0x0040 (size: 0x90)

}; // Size: 0xD0

struct FRigUnit_MathRBFInterpolateQuatColor : public FRigUnit_MathRBFInterpolateQuatBase
{
    TArray<FMathRBFInterpolateQuatColor_Target> Targets;                              // 0x00D0 (size: 0x10)
    FLinearColor Output;                                                              // 0x00E0 (size: 0x10)

}; // Size: 0xF0

struct FRigUnit_MathRBFInterpolateQuatFloat : public FRigUnit_MathRBFInterpolateQuatBase
{
    TArray<FMathRBFInterpolateQuatFloat_Target> Targets;                              // 0x00D0 (size: 0x10)
    float Output;                                                                     // 0x00E0 (size: 0x4)

}; // Size: 0xF0

struct FRigUnit_MathRBFInterpolateQuatQuat : public FRigUnit_MathRBFInterpolateQuatBase
{
    TArray<FMathRBFInterpolateQuatQuat_Target> Targets;                               // 0x00D0 (size: 0x10)
    FQuat Output;                                                                     // 0x00E0 (size: 0x10)

}; // Size: 0xF0

struct FRigUnit_MathRBFInterpolateQuatVector : public FRigUnit_MathRBFInterpolateQuatBase
{
    TArray<FMathRBFInterpolateQuatVector_Target> Targets;                             // 0x00D0 (size: 0x10)
    FVector Output;                                                                   // 0x00E0 (size: 0xC)

}; // Size: 0xF0

struct FRigUnit_MathRBFInterpolateQuatWorkData
{
}; // Size: 0x90

struct FRigUnit_MathRBFInterpolateQuatXform : public FRigUnit_MathRBFInterpolateQuatBase
{
    TArray<FMathRBFInterpolateQuatXform_Target> Targets;                              // 0x00D0 (size: 0x10)
    FTransform Output;                                                                // 0x00E0 (size: 0x30)

}; // Size: 0x110

struct FRigUnit_MathRBFInterpolateVectorBase : public FRigUnit_MathRBFInterpolateBase
{
    FVector Input;                                                                    // 0x0008 (size: 0xC)
    ERBFVectorDistanceType DistanceFunction;                                          // 0x0014 (size: 0x1)
    ERBFKernelType SmoothingFunction;                                                 // 0x0015 (size: 0x1)
    float SmoothingRadius;                                                            // 0x0018 (size: 0x4)
    bool bNormalizeOutput;                                                            // 0x001C (size: 0x1)
    FRigUnit_MathRBFInterpolateVectorWorkData WorkData;                               // 0x0020 (size: 0x90)

}; // Size: 0xB0

struct FRigUnit_MathRBFInterpolateVectorColor : public FRigUnit_MathRBFInterpolateVectorBase
{
    TArray<FMathRBFInterpolateVectorColor_Target> Targets;                            // 0x00B0 (size: 0x10)
    FLinearColor Output;                                                              // 0x00C0 (size: 0x10)

}; // Size: 0xD0

struct FRigUnit_MathRBFInterpolateVectorFloat : public FRigUnit_MathRBFInterpolateVectorBase
{
    TArray<FMathRBFInterpolateVectorFloat_Target> Targets;                            // 0x00B0 (size: 0x10)
    float Output;                                                                     // 0x00C0 (size: 0x4)

}; // Size: 0xD0

struct FRigUnit_MathRBFInterpolateVectorQuat : public FRigUnit_MathRBFInterpolateVectorBase
{
    TArray<FMathRBFInterpolateVectorQuat_Target> Targets;                             // 0x00B0 (size: 0x10)
    FQuat Output;                                                                     // 0x00C0 (size: 0x10)

}; // Size: 0xD0

struct FRigUnit_MathRBFInterpolateVectorVector : public FRigUnit_MathRBFInterpolateVectorBase
{
    TArray<FMathRBFInterpolateVectorVector_Target> Targets;                           // 0x00B0 (size: 0x10)
    FVector Output;                                                                   // 0x00C0 (size: 0xC)

}; // Size: 0xD0

struct FRigUnit_MathRBFInterpolateVectorWorkData
{
}; // Size: 0x90

struct FRigUnit_MathRBFInterpolateVectorXform : public FRigUnit_MathRBFInterpolateVectorBase
{
    TArray<FMathRBFInterpolateVectorXform_Target> Targets;                            // 0x00B0 (size: 0x10)
    FTransform Output;                                                                // 0x00C0 (size: 0x30)

}; // Size: 0xF0

struct FRigUnit_MathTransformBase : public FRigUnit_MathBase
{
}; // Size: 0x8

struct FRigUnit_MathTransformBinaryOp : public FRigUnit_MathTransformBase
{
    FTransform A;                                                                     // 0x0010 (size: 0x30)
    FTransform B;                                                                     // 0x0040 (size: 0x30)
    FTransform Result;                                                                // 0x0070 (size: 0x30)

}; // Size: 0xA0

struct FRigUnit_MathTransformClampSpatially : public FRigUnit_MathTransformBase
{
    FTransform Value;                                                                 // 0x0010 (size: 0x30)
    TEnumAsByte<EAxis::Type> Axis;                                                    // 0x0040 (size: 0x1)
    TEnumAsByte<EControlRigClampSpatialMode::Type> Type;                              // 0x0041 (size: 0x1)
    float Minimum;                                                                    // 0x0044 (size: 0x4)
    float Maximum;                                                                    // 0x0048 (size: 0x4)
    FTransform Space;                                                                 // 0x0050 (size: 0x30)
    bool bDrawDebug;                                                                  // 0x0080 (size: 0x1)
    FLinearColor DebugColor;                                                          // 0x0084 (size: 0x10)
    float DebugThickness;                                                             // 0x0094 (size: 0x4)
    FTransform Result;                                                                // 0x00A0 (size: 0x30)

}; // Size: 0xD0

struct FRigUnit_MathTransformFromEulerTransform : public FRigUnit_MathTransformBase
{
    FEulerTransform EulerTransform;                                                   // 0x0008 (size: 0x24)
    FTransform Result;                                                                // 0x0030 (size: 0x30)

}; // Size: 0x60

struct FRigUnit_MathTransformFromSRT : public FRigUnit_MathTransformBase
{
    FVector Location;                                                                 // 0x0008 (size: 0xC)
    FVector Rotation;                                                                 // 0x0014 (size: 0xC)
    EControlRigRotationOrder RotationOrder;                                           // 0x0020 (size: 0x1)
    FVector Scale;                                                                    // 0x0024 (size: 0xC)
    FTransform Transform;                                                             // 0x0030 (size: 0x30)
    FEulerTransform EulerTransform;                                                   // 0x0060 (size: 0x24)

}; // Size: 0x90

struct FRigUnit_MathTransformInverse : public FRigUnit_MathTransformUnaryOp
{
}; // Size: 0x70

struct FRigUnit_MathTransformLerp : public FRigUnit_MathTransformBase
{
    FTransform A;                                                                     // 0x0010 (size: 0x30)
    FTransform B;                                                                     // 0x0040 (size: 0x30)
    float T;                                                                          // 0x0070 (size: 0x4)
    FTransform Result;                                                                // 0x0080 (size: 0x30)

}; // Size: 0xB0

struct FRigUnit_MathTransformMakeAbsolute : public FRigUnit_MathTransformBase
{
    FTransform Local;                                                                 // 0x0010 (size: 0x30)
    FTransform Parent;                                                                // 0x0040 (size: 0x30)
    FTransform Global;                                                                // 0x0070 (size: 0x30)

}; // Size: 0xA0

struct FRigUnit_MathTransformMakeRelative : public FRigUnit_MathTransformBase
{
    FTransform Global;                                                                // 0x0010 (size: 0x30)
    FTransform Parent;                                                                // 0x0040 (size: 0x30)
    FTransform Local;                                                                 // 0x0070 (size: 0x30)

}; // Size: 0xA0

struct FRigUnit_MathTransformMul : public FRigUnit_MathTransformBinaryOp
{
}; // Size: 0xA0

struct FRigUnit_MathTransformRotateVector : public FRigUnit_MathTransformBase
{
    FTransform Transform;                                                             // 0x0010 (size: 0x30)
    FVector Direction;                                                                // 0x0040 (size: 0xC)
    FVector Result;                                                                   // 0x004C (size: 0xC)

}; // Size: 0x60

struct FRigUnit_MathTransformSelectBool : public FRigUnit_MathTransformBase
{
    bool Condition;                                                                   // 0x0008 (size: 0x1)
    FTransform IfTrue;                                                                // 0x0010 (size: 0x30)
    FTransform IfFalse;                                                               // 0x0040 (size: 0x30)
    FTransform Result;                                                                // 0x0070 (size: 0x30)

}; // Size: 0xA0

struct FRigUnit_MathTransformToEulerTransform : public FRigUnit_MathTransformBase
{
    FTransform Value;                                                                 // 0x0010 (size: 0x30)
    FEulerTransform Result;                                                           // 0x0040 (size: 0x24)

}; // Size: 0x70

struct FRigUnit_MathTransformTransformVector : public FRigUnit_MathTransformBase
{
    FTransform Transform;                                                             // 0x0010 (size: 0x30)
    FVector Location;                                                                 // 0x0040 (size: 0xC)
    FVector Result;                                                                   // 0x004C (size: 0xC)

}; // Size: 0x60

struct FRigUnit_MathTransformUnaryOp : public FRigUnit_MathTransformBase
{
    FTransform Value;                                                                 // 0x0010 (size: 0x30)
    FTransform Result;                                                                // 0x0040 (size: 0x30)

}; // Size: 0x70

struct FRigUnit_MathVectorAbs : public FRigUnit_MathVectorUnaryOp
{
}; // Size: 0x20

struct FRigUnit_MathVectorAdd : public FRigUnit_MathVectorBinaryOp
{
}; // Size: 0x30

struct FRigUnit_MathVectorAngle : public FRigUnit_MathVectorBase
{
    FVector A;                                                                        // 0x0008 (size: 0xC)
    FVector B;                                                                        // 0x0014 (size: 0xC)
    float Result;                                                                     // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FRigUnit_MathVectorBase : public FRigUnit_MathBase
{
}; // Size: 0x8

struct FRigUnit_MathVectorBezierFourPoint : public FRigUnit_MathVectorBase
{
    FCRFourPointBezier Bezier;                                                        // 0x0008 (size: 0x30)
    float T;                                                                          // 0x0038 (size: 0x4)
    FVector Result;                                                                   // 0x003C (size: 0xC)
    FVector Tangent;                                                                  // 0x0048 (size: 0xC)

}; // Size: 0x58

struct FRigUnit_MathVectorBinaryOp : public FRigUnit_MathVectorBase
{
    FVector A;                                                                        // 0x0008 (size: 0xC)
    FVector B;                                                                        // 0x0014 (size: 0xC)
    FVector Result;                                                                   // 0x0020 (size: 0xC)

}; // Size: 0x30

struct FRigUnit_MathVectorCeil : public FRigUnit_MathVectorUnaryOp
{
}; // Size: 0x20

struct FRigUnit_MathVectorClamp : public FRigUnit_MathVectorBase
{
    FVector Value;                                                                    // 0x0008 (size: 0xC)
    FVector Minimum;                                                                  // 0x0014 (size: 0xC)
    FVector Maximum;                                                                  // 0x0020 (size: 0xC)
    FVector Result;                                                                   // 0x002C (size: 0xC)

}; // Size: 0x38

struct FRigUnit_MathVectorClampLength : public FRigUnit_MathVectorBase
{
    FVector Value;                                                                    // 0x0008 (size: 0xC)
    float MinimumLength;                                                              // 0x0014 (size: 0x4)
    float MaximumLength;                                                              // 0x0018 (size: 0x4)
    FVector Result;                                                                   // 0x001C (size: 0xC)

}; // Size: 0x28

struct FRigUnit_MathVectorClampSpatially : public FRigUnit_MathVectorBase
{
    FVector Value;                                                                    // 0x0008 (size: 0xC)
    TEnumAsByte<EAxis::Type> Axis;                                                    // 0x0014 (size: 0x1)
    TEnumAsByte<EControlRigClampSpatialMode::Type> Type;                              // 0x0015 (size: 0x1)
    float Minimum;                                                                    // 0x0018 (size: 0x4)
    float Maximum;                                                                    // 0x001C (size: 0x4)
    FTransform Space;                                                                 // 0x0020 (size: 0x30)
    bool bDrawDebug;                                                                  // 0x0050 (size: 0x1)
    FLinearColor DebugColor;                                                          // 0x0054 (size: 0x10)
    float DebugThickness;                                                             // 0x0064 (size: 0x4)
    FVector Result;                                                                   // 0x0068 (size: 0xC)

}; // Size: 0x80

struct FRigUnit_MathVectorCross : public FRigUnit_MathVectorBinaryOp
{
}; // Size: 0x30

struct FRigUnit_MathVectorDeg : public FRigUnit_MathVectorUnaryOp
{
}; // Size: 0x20

struct FRigUnit_MathVectorDistance : public FRigUnit_MathVectorBase
{
    FVector A;                                                                        // 0x0008 (size: 0xC)
    FVector B;                                                                        // 0x0014 (size: 0xC)
    float Result;                                                                     // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FRigUnit_MathVectorDiv : public FRigUnit_MathVectorBinaryOp
{
}; // Size: 0x30

struct FRigUnit_MathVectorDot : public FRigUnit_MathVectorBase
{
    FVector A;                                                                        // 0x0008 (size: 0xC)
    FVector B;                                                                        // 0x0014 (size: 0xC)
    float Result;                                                                     // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FRigUnit_MathVectorEquals : public FRigUnit_MathVectorBase
{
    FVector A;                                                                        // 0x0008 (size: 0xC)
    FVector B;                                                                        // 0x0014 (size: 0xC)
    bool Result;                                                                      // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FRigUnit_MathVectorFloor : public FRigUnit_MathVectorUnaryOp
{
}; // Size: 0x20

struct FRigUnit_MathVectorFromFloat : public FRigUnit_MathVectorBase
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    FVector Result;                                                                   // 0x000C (size: 0xC)

}; // Size: 0x18

struct FRigUnit_MathVectorIsNearlyEqual : public FRigUnit_MathVectorBase
{
    FVector A;                                                                        // 0x0008 (size: 0xC)
    FVector B;                                                                        // 0x0014 (size: 0xC)
    float Tolerance;                                                                  // 0x0020 (size: 0x4)
    bool Result;                                                                      // 0x0024 (size: 0x1)

}; // Size: 0x28

struct FRigUnit_MathVectorIsNearlyZero : public FRigUnit_MathVectorBase
{
    FVector Value;                                                                    // 0x0008 (size: 0xC)
    float Tolerance;                                                                  // 0x0014 (size: 0x4)
    bool Result;                                                                      // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FRigUnit_MathVectorLength : public FRigUnit_MathVectorBase
{
    FVector Value;                                                                    // 0x0008 (size: 0xC)
    float Result;                                                                     // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FRigUnit_MathVectorLengthSquared : public FRigUnit_MathVectorBase
{
    FVector Value;                                                                    // 0x0008 (size: 0xC)
    float Result;                                                                     // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FRigUnit_MathVectorLerp : public FRigUnit_MathVectorBase
{
    FVector A;                                                                        // 0x0008 (size: 0xC)
    FVector B;                                                                        // 0x0014 (size: 0xC)
    float T;                                                                          // 0x0020 (size: 0x4)
    FVector Result;                                                                   // 0x0024 (size: 0xC)

}; // Size: 0x30

struct FRigUnit_MathVectorMakeBezierFourPoint : public FRigUnit_MathVectorBase
{
    FCRFourPointBezier Bezier;                                                        // 0x0008 (size: 0x30)

}; // Size: 0x38

struct FRigUnit_MathVectorMax : public FRigUnit_MathVectorBinaryOp
{
}; // Size: 0x30

struct FRigUnit_MathVectorMin : public FRigUnit_MathVectorBinaryOp
{
}; // Size: 0x30

struct FRigUnit_MathVectorMirror : public FRigUnit_MathVectorBase
{
    FVector Value;                                                                    // 0x0008 (size: 0xC)
    FVector Normal;                                                                   // 0x0014 (size: 0xC)
    FVector Result;                                                                   // 0x0020 (size: 0xC)

}; // Size: 0x30

struct FRigUnit_MathVectorMod : public FRigUnit_MathVectorBinaryOp
{
}; // Size: 0x30

struct FRigUnit_MathVectorMul : public FRigUnit_MathVectorBinaryOp
{
}; // Size: 0x30

struct FRigUnit_MathVectorNegate : public FRigUnit_MathVectorUnaryOp
{
}; // Size: 0x20

struct FRigUnit_MathVectorNotEquals : public FRigUnit_MathVectorBase
{
    FVector A;                                                                        // 0x0008 (size: 0xC)
    FVector B;                                                                        // 0x0014 (size: 0xC)
    bool Result;                                                                      // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FRigUnit_MathVectorOrthogonal : public FRigUnit_MathVectorBase
{
    FVector A;                                                                        // 0x0008 (size: 0xC)
    FVector B;                                                                        // 0x0014 (size: 0xC)
    bool Result;                                                                      // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FRigUnit_MathVectorParallel : public FRigUnit_MathVectorBase
{
    FVector A;                                                                        // 0x0008 (size: 0xC)
    FVector B;                                                                        // 0x0014 (size: 0xC)
    bool Result;                                                                      // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FRigUnit_MathVectorRad : public FRigUnit_MathVectorUnaryOp
{
}; // Size: 0x20

struct FRigUnit_MathVectorRemap : public FRigUnit_MathVectorBase
{
    FVector Value;                                                                    // 0x0008 (size: 0xC)
    FVector SourceMinimum;                                                            // 0x0014 (size: 0xC)
    FVector SourceMaximum;                                                            // 0x0020 (size: 0xC)
    FVector TargetMinimum;                                                            // 0x002C (size: 0xC)
    FVector TargetMaximum;                                                            // 0x0038 (size: 0xC)
    bool bClamp;                                                                      // 0x0044 (size: 0x1)
    FVector Result;                                                                   // 0x0048 (size: 0xC)

}; // Size: 0x58

struct FRigUnit_MathVectorRound : public FRigUnit_MathVectorUnaryOp
{
}; // Size: 0x20

struct FRigUnit_MathVectorScale : public FRigUnit_MathVectorBase
{
    FVector Value;                                                                    // 0x0008 (size: 0xC)
    float Factor;                                                                     // 0x0014 (size: 0x4)
    FVector Result;                                                                   // 0x0018 (size: 0xC)

}; // Size: 0x28

struct FRigUnit_MathVectorSelectBool : public FRigUnit_MathVectorBase
{
    bool Condition;                                                                   // 0x0008 (size: 0x1)
    FVector IfTrue;                                                                   // 0x000C (size: 0xC)
    FVector IfFalse;                                                                  // 0x0018 (size: 0xC)
    FVector Result;                                                                   // 0x0024 (size: 0xC)

}; // Size: 0x30

struct FRigUnit_MathVectorSetLength : public FRigUnit_MathVectorBase
{
    FVector Value;                                                                    // 0x0008 (size: 0xC)
    float Length;                                                                     // 0x0014 (size: 0x4)
    FVector Result;                                                                   // 0x0018 (size: 0xC)

}; // Size: 0x28

struct FRigUnit_MathVectorSign : public FRigUnit_MathVectorUnaryOp
{
}; // Size: 0x20

struct FRigUnit_MathVectorSub : public FRigUnit_MathVectorBinaryOp
{
}; // Size: 0x30

struct FRigUnit_MathVectorUnaryOp : public FRigUnit_MathVectorBase
{
    FVector Value;                                                                    // 0x0008 (size: 0xC)
    FVector Result;                                                                   // 0x0014 (size: 0xC)

}; // Size: 0x20

struct FRigUnit_MathVectorUnit : public FRigUnit_MathVectorUnaryOp
{
}; // Size: 0x20

struct FRigUnit_ModifyBoneTransforms : public FRigUnit_HighlevelBaseMutable
{
    TArray<FRigUnit_ModifyBoneTransforms_PerBone> BoneToModify;                       // 0x0068 (size: 0x10)
    float Weight;                                                                     // 0x0078 (size: 0x4)
    float WeightMinimum;                                                              // 0x007C (size: 0x4)
    float WeightMaximum;                                                              // 0x0080 (size: 0x4)
    EControlRigModifyBoneMode Mode;                                                   // 0x0084 (size: 0x1)
    FRigUnit_ModifyBoneTransforms_WorkData WorkData;                                  // 0x0088 (size: 0x10)

}; // Size: 0x98

struct FRigUnit_ModifyBoneTransforms_PerBone
{
    FName Bone;                                                                       // 0x0000 (size: 0x8)
    FTransform Transform;                                                             // 0x0010 (size: 0x30)

}; // Size: 0x40

struct FRigUnit_ModifyBoneTransforms_WorkData : public FRigUnit_ModifyTransforms_WorkData
{
}; // Size: 0x10

struct FRigUnit_ModifyTransforms : public FRigUnit_HighlevelBaseMutable
{
    TArray<FRigUnit_ModifyTransforms_PerItem> ItemToModify;                           // 0x0068 (size: 0x10)
    float Weight;                                                                     // 0x0078 (size: 0x4)
    float WeightMinimum;                                                              // 0x007C (size: 0x4)
    float WeightMaximum;                                                              // 0x0080 (size: 0x4)
    EControlRigModifyBoneMode Mode;                                                   // 0x0084 (size: 0x1)
    FRigUnit_ModifyTransforms_WorkData WorkData;                                      // 0x0088 (size: 0x10)

}; // Size: 0x98

struct FRigUnit_ModifyTransforms_PerItem
{
    FRigElementKey Item;                                                              // 0x0000 (size: 0xC)
    FTransform Transform;                                                             // 0x0010 (size: 0x30)

}; // Size: 0x40

struct FRigUnit_ModifyTransforms_WorkData
{
    TArray<FCachedRigElement> CachedItems;                                            // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FRigUnit_MultiFABRIK : public FRigUnit_HighlevelBaseMutable
{
    FName RootBone;                                                                   // 0x0068 (size: 0x8)
    TArray<FRigUnit_MultiFABRIK_EndEffector> Effectors;                               // 0x0070 (size: 0x10)
    float Precision;                                                                  // 0x0080 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x0084 (size: 0x1)
    int32 MaxIterations;                                                              // 0x0088 (size: 0x4)
    FRigUnit_MultiFABRIK_WorkData WorkData;                                           // 0x0090 (size: 0x60)

}; // Size: 0xF0

struct FRigUnit_MultiFABRIK_EndEffector
{
    FName Bone;                                                                       // 0x0000 (size: 0x8)
    FVector Location;                                                                 // 0x0008 (size: 0xC)

}; // Size: 0x14

struct FRigUnit_MultiFABRIK_WorkData
{
}; // Size: 0x60

struct FRigUnit_MultiplyQuaternion : public FRigUnit_BinaryQuaternionOp
{
}; // Size: 0x40

struct FRigUnit_MultiplyTransform : public FRigUnit_BinaryTransformOp
{
}; // Size: 0xA0

struct FRigUnit_Multiply_FloatFloat : public FRigUnit_BinaryFloatOp
{
}; // Size: 0x18

struct FRigUnit_Multiply_VectorVector : public FRigUnit_BinaryVectorOp
{
}; // Size: 0x30

struct FRigUnit_NameBase : public FRigUnit
{
}; // Size: 0x8

struct FRigUnit_NameConcat : public FRigUnit_NameBase
{
    FName A;                                                                          // 0x0008 (size: 0x8)
    FName B;                                                                          // 0x0010 (size: 0x8)
    FName Result;                                                                     // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FRigUnit_NameReplace : public FRigUnit_NameBase
{
    FName Name;                                                                       // 0x0008 (size: 0x8)
    FName Old;                                                                        // 0x0010 (size: 0x8)
    FName New;                                                                        // 0x0018 (size: 0x8)
    FName Result;                                                                     // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FRigUnit_NameTruncate : public FRigUnit_NameBase
{
    FName Name;                                                                       // 0x0008 (size: 0x8)
    int32 Count;                                                                      // 0x0010 (size: 0x4)
    bool FromEnd;                                                                     // 0x0014 (size: 0x1)
    FName Remainder;                                                                  // 0x0018 (size: 0x8)
    FName Chopped;                                                                    // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FRigUnit_NoiseFloat : public FRigUnit_MathBase
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    float Speed;                                                                      // 0x000C (size: 0x4)
    float Frequency;                                                                  // 0x0010 (size: 0x4)
    float Minimum;                                                                    // 0x0014 (size: 0x4)
    float Maximum;                                                                    // 0x0018 (size: 0x4)
    float Result;                                                                     // 0x001C (size: 0x4)
    float Time;                                                                       // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FRigUnit_NoiseVector : public FRigUnit_MathBase
{
    FVector Position;                                                                 // 0x0008 (size: 0xC)
    FVector Speed;                                                                    // 0x0014 (size: 0xC)
    FVector Frequency;                                                                // 0x0020 (size: 0xC)
    float Minimum;                                                                    // 0x002C (size: 0x4)
    float Maximum;                                                                    // 0x0030 (size: 0x4)
    FVector Result;                                                                   // 0x0034 (size: 0xC)
    FVector Time;                                                                     // 0x0040 (size: 0xC)

}; // Size: 0x50

struct FRigUnit_OffsetTransformForItem : public FRigUnitMutable
{
    FRigElementKey Item;                                                              // 0x0068 (size: 0xC)
    FTransform OffsetTransform;                                                       // 0x0080 (size: 0x30)
    float Weight;                                                                     // 0x00B0 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x00B4 (size: 0x1)
    FCachedRigElement CachedIndex;                                                    // 0x00B8 (size: 0x14)

}; // Size: 0xD0

struct FRigUnit_ParentSwitchConstraint : public FRigUnitMutable
{
    FRigElementKey Subject;                                                           // 0x0068 (size: 0xC)
    int32 ParentIndex;                                                                // 0x0074 (size: 0x4)
    FRigElementKeyCollection Parents;                                                 // 0x0078 (size: 0x10)
    FTransform InitialGlobalTransform;                                                // 0x0090 (size: 0x30)
    float Weight;                                                                     // 0x00C0 (size: 0x4)
    FTransform Transform;                                                             // 0x00D0 (size: 0x30)
    bool Switched;                                                                    // 0x0100 (size: 0x1)
    FCachedRigElement CachedSubject;                                                  // 0x0104 (size: 0x14)
    FCachedRigElement CachedParent;                                                   // 0x0118 (size: 0x14)
    FTransform RelativeOffset;                                                        // 0x0130 (size: 0x30)

}; // Size: 0x160

struct FRigUnit_PointSimulation : public FRigUnit_SimBaseMutable
{
    TArray<FCRSimPoint> Points;                                                       // 0x0068 (size: 0x10)
    TArray<FCRSimLinearSpring> Links;                                                 // 0x0078 (size: 0x10)
    TArray<FCRSimPointForce> Forces;                                                  // 0x0088 (size: 0x10)
    TArray<FCRSimSoftCollision> CollisionVolumes;                                     // 0x0098 (size: 0x10)
    float SimulatedStepsPerSecond;                                                    // 0x00A8 (size: 0x4)
    ECRSimPointIntegrateType IntegratorType;                                          // 0x00AC (size: 0x1)
    float VerletBlend;                                                                // 0x00B0 (size: 0x4)
    TArray<FRigUnit_PointSimulation_BoneTarget> BoneTargets;                          // 0x00B8 (size: 0x10)
    bool bLimitLocalPosition;                                                         // 0x00C8 (size: 0x1)
    bool bPropagateToChildren;                                                        // 0x00C9 (size: 0x1)
    FVector PrimaryAimAxis;                                                           // 0x00CC (size: 0xC)
    FVector SecondaryAimAxis;                                                         // 0x00D8 (size: 0xC)
    FRigUnit_PointSimulation_DebugSettings DebugSettings;                             // 0x00F0 (size: 0x50)
    FCRFourPointBezier Bezier;                                                        // 0x0140 (size: 0x30)
    FRigUnit_PointSimulation_WorkData WorkData;                                       // 0x0170 (size: 0x88)

}; // Size: 0x200

struct FRigUnit_PointSimulation_BoneTarget
{
    FName Bone;                                                                       // 0x0000 (size: 0x8)
    int32 TranslationPoint;                                                           // 0x0008 (size: 0x4)
    int32 PrimaryAimPoint;                                                            // 0x000C (size: 0x4)
    int32 SecondaryAimPoint;                                                          // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FRigUnit_PointSimulation_DebugSettings
{
    bool bEnabled;                                                                    // 0x0000 (size: 0x1)
    float Scale;                                                                      // 0x0004 (size: 0x4)
    float CollisionScale;                                                             // 0x0008 (size: 0x4)
    bool bDrawPointsAsSpheres;                                                        // 0x000C (size: 0x1)
    FLinearColor Color;                                                               // 0x0010 (size: 0x10)
    FTransform WorldOffset;                                                           // 0x0020 (size: 0x30)

}; // Size: 0x50

struct FRigUnit_PointSimulation_WorkData
{
    FCRSimPointContainer Simulation;                                                  // 0x0000 (size: 0x78)
    TArray<FCachedRigElement> BoneIndices;                                            // 0x0078 (size: 0x10)

}; // Size: 0x88

struct FRigUnit_PrepareForExecution : public FRigUnit
{
    FControlRigExecuteContext ExecuteContext;                                         // 0x0008 (size: 0x60)

}; // Size: 0x68

struct FRigUnit_ProjectTransformToNewParent : public FRigUnit
{
    FRigElementKey Child;                                                             // 0x0008 (size: 0xC)
    bool bChildInitial;                                                               // 0x0014 (size: 0x1)
    FRigElementKey OldParent;                                                         // 0x0018 (size: 0xC)
    bool bOldParentInitial;                                                           // 0x0024 (size: 0x1)
    FRigElementKey NewParent;                                                         // 0x0028 (size: 0xC)
    bool bNewParentInitial;                                                           // 0x0034 (size: 0x1)
    FTransform Transform;                                                             // 0x0040 (size: 0x30)
    FCachedRigElement CachedChild;                                                    // 0x0070 (size: 0x14)
    FCachedRigElement CachedOldParent;                                                // 0x0084 (size: 0x14)
    FCachedRigElement CachedNewParent;                                                // 0x0098 (size: 0x14)

}; // Size: 0xB0

struct FRigUnit_PropagateTransform : public FRigUnitMutable
{
    FRigElementKey Item;                                                              // 0x0068 (size: 0xC)
    bool bRecomputeGlobal;                                                            // 0x0074 (size: 0x1)
    bool bApplyToChildren;                                                            // 0x0075 (size: 0x1)
    bool bRecursive;                                                                  // 0x0076 (size: 0x1)
    FCachedRigElement CachedIndex;                                                    // 0x0078 (size: 0x14)

}; // Size: 0x90

struct FRigUnit_QuaternionFromAxisAndAngle : public FRigUnit
{
    FVector Axis;                                                                     // 0x0008 (size: 0xC)
    float Angle;                                                                      // 0x0014 (size: 0x4)
    FQuat Result;                                                                     // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FRigUnit_QuaternionToAngle : public FRigUnit
{
    FVector Axis;                                                                     // 0x0008 (size: 0xC)
    FQuat Argument;                                                                   // 0x0020 (size: 0x10)
    float Angle;                                                                      // 0x0030 (size: 0x4)

}; // Size: 0x40

struct FRigUnit_QuaternionToAxisAndAngle : public FRigUnit
{
    FQuat Argument;                                                                   // 0x0010 (size: 0x10)
    FVector Axis;                                                                     // 0x0020 (size: 0xC)
    float Angle;                                                                      // 0x002C (size: 0x4)

}; // Size: 0x30

struct FRigUnit_RandomFloat : public FRigUnit_MathBase
{
    int32 Seed;                                                                       // 0x0008 (size: 0x4)
    float Minimum;                                                                    // 0x000C (size: 0x4)
    float Maximum;                                                                    // 0x0010 (size: 0x4)
    float Duration;                                                                   // 0x0014 (size: 0x4)
    float Result;                                                                     // 0x0018 (size: 0x4)
    float LastResult;                                                                 // 0x001C (size: 0x4)
    int32 LastSeed;                                                                   // 0x0020 (size: 0x4)
    float TimeLeft;                                                                   // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FRigUnit_RandomVector : public FRigUnit_MathBase
{
    int32 Seed;                                                                       // 0x0008 (size: 0x4)
    float Minimum;                                                                    // 0x000C (size: 0x4)
    float Maximum;                                                                    // 0x0010 (size: 0x4)
    float Duration;                                                                   // 0x0014 (size: 0x4)
    FVector Result;                                                                   // 0x0018 (size: 0xC)
    FVector LastResult;                                                               // 0x0024 (size: 0xC)
    int32 LastSeed;                                                                   // 0x0030 (size: 0x4)
    float TimeLeft;                                                                   // 0x0034 (size: 0x4)

}; // Size: 0x38

struct FRigUnit_SecondsToFrames : public FRigUnit_AnimBase
{
    float Seconds;                                                                    // 0x0008 (size: 0x4)
    float Frames;                                                                     // 0x000C (size: 0x4)

}; // Size: 0x10

struct FRigUnit_SendEvent : public FRigUnitMutable
{
    ERigEvent Event;                                                                  // 0x0068 (size: 0x1)
    FRigElementKey Item;                                                              // 0x006C (size: 0xC)
    float OffsetInSeconds;                                                            // 0x0078 (size: 0x4)
    bool bEnable;                                                                     // 0x007C (size: 0x1)
    bool bOnlyDuringInteraction;                                                      // 0x007D (size: 0x1)

}; // Size: 0x80

struct FRigUnit_SequenceExecution : public FRigUnit
{
    FControlRigExecuteContext ExecuteContext;                                         // 0x0008 (size: 0x60)
    FControlRigExecuteContext A;                                                      // 0x0068 (size: 0x60)
    FControlRigExecuteContext B;                                                      // 0x00C8 (size: 0x60)
    FControlRigExecuteContext C;                                                      // 0x0128 (size: 0x60)
    FControlRigExecuteContext D;                                                      // 0x0188 (size: 0x60)

}; // Size: 0x1E8

struct FRigUnit_SetBoneInitialTransform : public FRigUnitMutable
{
    FName Bone;                                                                       // 0x0068 (size: 0x8)
    FTransform Transform;                                                             // 0x0070 (size: 0x30)
    FTransform Result;                                                                // 0x00A0 (size: 0x30)
    EBoneGetterSetterMode Space;                                                      // 0x00D0 (size: 0x1)
    bool bPropagateToChildren;                                                        // 0x00D1 (size: 0x1)
    FCachedRigElement CachedBone;                                                     // 0x00D4 (size: 0x14)

}; // Size: 0xF0

struct FRigUnit_SetBoneRotation : public FRigUnitMutable
{
    FName Bone;                                                                       // 0x0068 (size: 0x8)
    FQuat Rotation;                                                                   // 0x0070 (size: 0x10)
    EBoneGetterSetterMode Space;                                                      // 0x0080 (size: 0x1)
    float Weight;                                                                     // 0x0084 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x0088 (size: 0x1)
    FCachedRigElement CachedBone;                                                     // 0x008C (size: 0x14)

}; // Size: 0xA0

struct FRigUnit_SetBoneTransform : public FRigUnitMutable
{
    FName Bone;                                                                       // 0x0068 (size: 0x8)
    FTransform Transform;                                                             // 0x0070 (size: 0x30)
    FTransform Result;                                                                // 0x00A0 (size: 0x30)
    EBoneGetterSetterMode Space;                                                      // 0x00D0 (size: 0x1)
    float Weight;                                                                     // 0x00D4 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x00D8 (size: 0x1)
    FCachedRigElement CachedBone;                                                     // 0x00DC (size: 0x14)

}; // Size: 0xF0

struct FRigUnit_SetBoneTranslation : public FRigUnitMutable
{
    FName Bone;                                                                       // 0x0068 (size: 0x8)
    FVector Translation;                                                              // 0x0070 (size: 0xC)
    EBoneGetterSetterMode Space;                                                      // 0x007C (size: 0x1)
    float Weight;                                                                     // 0x0080 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x0084 (size: 0x1)
    FCachedRigElement CachedBone;                                                     // 0x0088 (size: 0x14)

}; // Size: 0xA0

struct FRigUnit_SetControlBool : public FRigUnitMutable
{
    FName Control;                                                                    // 0x0068 (size: 0x8)
    bool BoolValue;                                                                   // 0x0070 (size: 0x1)
    FCachedRigElement CachedControlIndex;                                             // 0x0074 (size: 0x14)

}; // Size: 0x88

struct FRigUnit_SetControlColor : public FRigUnitMutable
{
    FName Control;                                                                    // 0x0068 (size: 0x8)
    FLinearColor Color;                                                               // 0x0070 (size: 0x10)
    FCachedRigElement CachedControlIndex;                                             // 0x0080 (size: 0x14)

}; // Size: 0x98

struct FRigUnit_SetControlFloat : public FRigUnitMutable
{
    FName Control;                                                                    // 0x0068 (size: 0x8)
    float Weight;                                                                     // 0x0070 (size: 0x4)
    float FloatValue;                                                                 // 0x0074 (size: 0x4)
    FCachedRigElement CachedControlIndex;                                             // 0x0078 (size: 0x14)

}; // Size: 0x90

struct FRigUnit_SetControlInteger : public FRigUnitMutable
{
    FName Control;                                                                    // 0x0068 (size: 0x8)
    int32 Weight;                                                                     // 0x0070 (size: 0x4)
    int32 IntegerValue;                                                               // 0x0074 (size: 0x4)
    FCachedRigElement CachedControlIndex;                                             // 0x0078 (size: 0x14)

}; // Size: 0x90

struct FRigUnit_SetControlOffset : public FRigUnitMutable
{
    FName Control;                                                                    // 0x0068 (size: 0x8)
    FTransform Offset;                                                                // 0x0070 (size: 0x30)
    EBoneGetterSetterMode Space;                                                      // 0x00A0 (size: 0x1)
    FCachedRigElement CachedControlIndex;                                             // 0x00A4 (size: 0x14)

}; // Size: 0xC0

struct FRigUnit_SetControlRotator : public FRigUnitMutable
{
    FName Control;                                                                    // 0x0068 (size: 0x8)
    float Weight;                                                                     // 0x0070 (size: 0x4)
    FRotator Rotator;                                                                 // 0x0074 (size: 0xC)
    EBoneGetterSetterMode Space;                                                      // 0x0080 (size: 0x1)
    FCachedRigElement CachedControlIndex;                                             // 0x0084 (size: 0x14)

}; // Size: 0x98

struct FRigUnit_SetControlTransform : public FRigUnitMutable
{
    FName Control;                                                                    // 0x0068 (size: 0x8)
    float Weight;                                                                     // 0x0070 (size: 0x4)
    FTransform Transform;                                                             // 0x0080 (size: 0x30)
    EBoneGetterSetterMode Space;                                                      // 0x00B0 (size: 0x1)
    FCachedRigElement CachedControlIndex;                                             // 0x00B4 (size: 0x14)

}; // Size: 0xD0

struct FRigUnit_SetControlVector : public FRigUnitMutable
{
    FName Control;                                                                    // 0x0068 (size: 0x8)
    float Weight;                                                                     // 0x0070 (size: 0x4)
    FVector Vector;                                                                   // 0x0074 (size: 0xC)
    EBoneGetterSetterMode Space;                                                      // 0x0080 (size: 0x1)
    FCachedRigElement CachedControlIndex;                                             // 0x0084 (size: 0x14)

}; // Size: 0x98

struct FRigUnit_SetControlVector2D : public FRigUnitMutable
{
    FName Control;                                                                    // 0x0068 (size: 0x8)
    float Weight;                                                                     // 0x0070 (size: 0x4)
    FVector2D Vector;                                                                 // 0x0074 (size: 0x8)
    FCachedRigElement CachedControlIndex;                                             // 0x007C (size: 0x14)

}; // Size: 0x90

struct FRigUnit_SetControlVisibility : public FRigUnitMutable
{
    FRigElementKey Item;                                                              // 0x0068 (size: 0xC)
    FString Pattern;                                                                  // 0x0078 (size: 0x10)
    bool bVisible;                                                                    // 0x0088 (size: 0x1)
    TArray<FCachedRigElement> CachedControlIndices;                                   // 0x0090 (size: 0x10)

}; // Size: 0xA0

struct FRigUnit_SetCurveValue : public FRigUnitMutable
{
    FName Curve;                                                                      // 0x0068 (size: 0x8)
    float Value;                                                                      // 0x0070 (size: 0x4)
    FCachedRigElement CachedCurveIndex;                                               // 0x0074 (size: 0x14)

}; // Size: 0x88

struct FRigUnit_SetMultiControlBool : public FRigUnitMutable
{
    TArray<FRigUnit_SetMultiControlBool_Entry> Entries;                               // 0x0068 (size: 0x10)
    TArray<FCachedRigElement> CachedControlIndices;                                   // 0x0078 (size: 0x10)

}; // Size: 0x88

struct FRigUnit_SetMultiControlBool_Entry
{
    FName Control;                                                                    // 0x0000 (size: 0x8)
    bool BoolValue;                                                                   // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FRigUnit_SetMultiControlFloat : public FRigUnitMutable
{
    TArray<FRigUnit_SetMultiControlFloat_Entry> Entries;                              // 0x0068 (size: 0x10)
    float Weight;                                                                     // 0x0078 (size: 0x4)
    TArray<FCachedRigElement> CachedControlIndices;                                   // 0x0080 (size: 0x10)

}; // Size: 0x90

struct FRigUnit_SetMultiControlFloat_Entry
{
    FName Control;                                                                    // 0x0000 (size: 0x8)
    float FloatValue;                                                                 // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FRigUnit_SetMultiControlInteger : public FRigUnitMutable
{
    TArray<FRigUnit_SetMultiControlInteger_Entry> Entries;                            // 0x0068 (size: 0x10)
    float Weight;                                                                     // 0x0078 (size: 0x4)
    TArray<FCachedRigElement> CachedControlIndices;                                   // 0x0080 (size: 0x10)

}; // Size: 0x90

struct FRigUnit_SetMultiControlInteger_Entry
{
    FName Control;                                                                    // 0x0000 (size: 0x8)
    int32 IntegerValue;                                                               // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FRigUnit_SetMultiControlRotator : public FRigUnitMutable
{
    TArray<FRigUnit_SetMultiControlRotator_Entry> Entries;                            // 0x0068 (size: 0x10)
    float Weight;                                                                     // 0x0078 (size: 0x4)
    TArray<FCachedRigElement> CachedControlIndices;                                   // 0x0080 (size: 0x10)

}; // Size: 0x90

struct FRigUnit_SetMultiControlRotator_Entry
{
    FName Control;                                                                    // 0x0000 (size: 0x8)
    FRotator Rotator;                                                                 // 0x0008 (size: 0xC)
    EBoneGetterSetterMode Space;                                                      // 0x0014 (size: 0x1)

}; // Size: 0x18

struct FRigUnit_SetMultiControlVector2D : public FRigUnitMutable
{
    TArray<FRigUnit_SetMultiControlVector2D_Entry> Entries;                           // 0x0068 (size: 0x10)
    float Weight;                                                                     // 0x0078 (size: 0x4)
    TArray<FCachedRigElement> CachedControlIndices;                                   // 0x0080 (size: 0x10)

}; // Size: 0x90

struct FRigUnit_SetMultiControlVector2D_Entry
{
    FName Control;                                                                    // 0x0000 (size: 0x8)
    FVector2D Vector;                                                                 // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FRigUnit_SetRelativeBoneTransform : public FRigUnitMutable
{
    FName Bone;                                                                       // 0x0068 (size: 0x8)
    FName Space;                                                                      // 0x0070 (size: 0x8)
    FTransform Transform;                                                             // 0x0080 (size: 0x30)
    float Weight;                                                                     // 0x00B0 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x00B4 (size: 0x1)
    FCachedRigElement CachedBone;                                                     // 0x00B8 (size: 0x14)
    FCachedRigElement CachedSpaceIndex;                                               // 0x00CC (size: 0x14)

}; // Size: 0xE0

struct FRigUnit_SetRelativeTransformForItem : public FRigUnitMutable
{
    FRigElementKey Child;                                                             // 0x0068 (size: 0xC)
    FRigElementKey Parent;                                                            // 0x0074 (size: 0xC)
    bool bParentInitial;                                                              // 0x0080 (size: 0x1)
    FTransform RelativeTransform;                                                     // 0x0090 (size: 0x30)
    float Weight;                                                                     // 0x00C0 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x00C4 (size: 0x1)
    FCachedRigElement CachedChild;                                                    // 0x00C8 (size: 0x14)
    FCachedRigElement CachedParent;                                                   // 0x00DC (size: 0x14)

}; // Size: 0xF0

struct FRigUnit_SetRotation : public FRigUnitMutable
{
    FRigElementKey Item;                                                              // 0x0068 (size: 0xC)
    EBoneGetterSetterMode Space;                                                      // 0x0074 (size: 0x1)
    FQuat Rotation;                                                                   // 0x0080 (size: 0x10)
    float Weight;                                                                     // 0x0090 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x0094 (size: 0x1)
    FCachedRigElement CachedIndex;                                                    // 0x0098 (size: 0x14)

}; // Size: 0xB0

struct FRigUnit_SetScale : public FRigUnitMutable
{
    FRigElementKey Item;                                                              // 0x0068 (size: 0xC)
    EBoneGetterSetterMode Space;                                                      // 0x0074 (size: 0x1)
    FVector Scale;                                                                    // 0x0078 (size: 0xC)
    float Weight;                                                                     // 0x0084 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x0088 (size: 0x1)
    FCachedRigElement CachedIndex;                                                    // 0x008C (size: 0x14)

}; // Size: 0xA0

struct FRigUnit_SetSpaceInitialTransform : public FRigUnitMutable
{
    FName SpaceName;                                                                  // 0x0068 (size: 0x8)
    FTransform Transform;                                                             // 0x0070 (size: 0x30)
    FTransform Result;                                                                // 0x00A0 (size: 0x30)
    EBoneGetterSetterMode Space;                                                      // 0x00D0 (size: 0x1)
    FCachedRigElement CachedSpaceIndex;                                               // 0x00D4 (size: 0x14)

}; // Size: 0xF0

struct FRigUnit_SetSpaceTransform : public FRigUnitMutable
{
    FName Space;                                                                      // 0x0068 (size: 0x8)
    float Weight;                                                                     // 0x0070 (size: 0x4)
    FTransform Transform;                                                             // 0x0080 (size: 0x30)
    EBoneGetterSetterMode SpaceType;                                                  // 0x00B0 (size: 0x1)
    FCachedRigElement CachedSpaceIndex;                                               // 0x00B4 (size: 0x14)

}; // Size: 0xD0

struct FRigUnit_SetTransform : public FRigUnitMutable
{
    FRigElementKey Item;                                                              // 0x0068 (size: 0xC)
    EBoneGetterSetterMode Space;                                                      // 0x0074 (size: 0x1)
    bool bInitial;                                                                    // 0x0075 (size: 0x1)
    FTransform Transform;                                                             // 0x0080 (size: 0x30)
    float Weight;                                                                     // 0x00B0 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x00B4 (size: 0x1)
    FCachedRigElement CachedIndex;                                                    // 0x00B8 (size: 0x14)

}; // Size: 0xD0

struct FRigUnit_SetTranslation : public FRigUnitMutable
{
    FRigElementKey Item;                                                              // 0x0068 (size: 0xC)
    EBoneGetterSetterMode Space;                                                      // 0x0074 (size: 0x1)
    FVector Translation;                                                              // 0x0078 (size: 0xC)
    float Weight;                                                                     // 0x0084 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x0088 (size: 0x1)
    FCachedRigElement CachedIndex;                                                    // 0x008C (size: 0x14)

}; // Size: 0xA0

struct FRigUnit_SimBase : public FRigUnit
{
}; // Size: 0x8

struct FRigUnit_SimBaseMutable : public FRigUnitMutable
{
}; // Size: 0x68

struct FRigUnit_SlideChain : public FRigUnit_HighlevelBaseMutable
{
    FName StartBone;                                                                  // 0x0068 (size: 0x8)
    FName EndBone;                                                                    // 0x0070 (size: 0x8)
    float SlideAmount;                                                                // 0x0078 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x007C (size: 0x1)
    FRigUnit_SlideChain_WorkData WorkData;                                            // 0x0080 (size: 0x48)

}; // Size: 0xC8

struct FRigUnit_SlideChainPerItem : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKeyCollection Items;                                                   // 0x0068 (size: 0x10)
    float SlideAmount;                                                                // 0x0078 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x007C (size: 0x1)
    FRigUnit_SlideChain_WorkData WorkData;                                            // 0x0080 (size: 0x48)

}; // Size: 0xC8

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

struct FRigUnit_SphereTraceWorld : public FRigUnit
{
    FVector Start;                                                                    // 0x0008 (size: 0xC)
    FVector End;                                                                      // 0x0014 (size: 0xC)
    TEnumAsByte<ECollisionChannel> Channel;                                           // 0x0020 (size: 0x1)
    float Radius;                                                                     // 0x0024 (size: 0x4)
    bool bHit;                                                                        // 0x0028 (size: 0x1)
    FVector HitLocation;                                                              // 0x002C (size: 0xC)
    FVector HitNormal;                                                                // 0x0038 (size: 0xC)

}; // Size: 0x48

struct FRigUnit_SpringIK : public FRigUnit_HighlevelBaseMutable
{
    FName StartBone;                                                                  // 0x0068 (size: 0x8)
    FName EndBone;                                                                    // 0x0070 (size: 0x8)
    float HierarchyStrength;                                                          // 0x0078 (size: 0x4)
    float EffectorStrength;                                                           // 0x007C (size: 0x4)
    float EffectorRatio;                                                              // 0x0080 (size: 0x4)
    float RootStrength;                                                               // 0x0084 (size: 0x4)
    float RootRatio;                                                                  // 0x0088 (size: 0x4)
    float Damping;                                                                    // 0x008C (size: 0x4)
    FVector PoleVector;                                                               // 0x0090 (size: 0xC)
    bool bFlipPolePlane;                                                              // 0x009C (size: 0x1)
    EControlRigVectorKind PoleVectorKind;                                             // 0x009D (size: 0x1)
    FName PoleVectorSpace;                                                            // 0x00A0 (size: 0x8)
    FVector PrimaryAxis;                                                              // 0x00A8 (size: 0xC)
    FVector SecondaryAxis;                                                            // 0x00B4 (size: 0xC)
    bool bLiveSimulation;                                                             // 0x00C0 (size: 0x1)
    int32 Iterations;                                                                 // 0x00C4 (size: 0x4)
    bool bLimitLocalPosition;                                                         // 0x00C8 (size: 0x1)
    bool bPropagateToChildren;                                                        // 0x00C9 (size: 0x1)
    FRigUnit_SpringIK_DebugSettings DebugSettings;                                    // 0x00D0 (size: 0x50)
    FRigUnit_SpringIK_WorkData WorkData;                                              // 0x0120 (size: 0xB0)

}; // Size: 0x1D0

struct FRigUnit_SpringIK_DebugSettings
{
    bool bEnabled;                                                                    // 0x0000 (size: 0x1)
    float Scale;                                                                      // 0x0004 (size: 0x4)
    FLinearColor Color;                                                               // 0x0008 (size: 0x10)
    FTransform WorldOffset;                                                           // 0x0020 (size: 0x30)

}; // Size: 0x50

struct FRigUnit_SpringIK_WorkData
{
    TArray<FCachedRigElement> CachedBones;                                            // 0x0000 (size: 0x10)
    FCachedRigElement CachedPoleVector;                                               // 0x0010 (size: 0x14)
    TArray<FTransform> Transforms;                                                    // 0x0028 (size: 0x10)
    FCRSimPointContainer Simulation;                                                  // 0x0038 (size: 0x78)

}; // Size: 0xB0

struct FRigUnit_StartProfilingTimer : public FRigUnit_DebugBaseMutable
{
}; // Size: 0x68

struct FRigUnit_StartsWith : public FRigUnit_NameBase
{
    FName Name;                                                                       // 0x0008 (size: 0x8)
    FName Start;                                                                      // 0x0010 (size: 0x8)
    bool Result;                                                                      // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FRigUnit_Subtract_FloatFloat : public FRigUnit_BinaryFloatOp
{
}; // Size: 0x18

struct FRigUnit_Subtract_VectorVector : public FRigUnit_BinaryVectorOp
{
}; // Size: 0x30

struct FRigUnit_TimeOffsetFloat : public FRigUnit_SimBase
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    float SecondsAgo;                                                                 // 0x000C (size: 0x4)
    int32 BufferSize;                                                                 // 0x0010 (size: 0x4)
    float TimeRange;                                                                  // 0x0014 (size: 0x4)
    float Result;                                                                     // 0x0018 (size: 0x4)
    TArray<float> Buffer;                                                             // 0x0020 (size: 0x10)
    TArray<float> DeltaTimes;                                                         // 0x0030 (size: 0x10)
    int32 LastInsertIndex;                                                            // 0x0040 (size: 0x4)
    int32 UpperBound;                                                                 // 0x0044 (size: 0x4)

}; // Size: 0x48

struct FRigUnit_TimeOffsetTransform : public FRigUnit_SimBase
{
    FTransform Value;                                                                 // 0x0010 (size: 0x30)
    float SecondsAgo;                                                                 // 0x0040 (size: 0x4)
    int32 BufferSize;                                                                 // 0x0044 (size: 0x4)
    float TimeRange;                                                                  // 0x0048 (size: 0x4)
    FTransform Result;                                                                // 0x0050 (size: 0x30)
    TArray<FTransform> Buffer;                                                        // 0x0080 (size: 0x10)
    TArray<float> DeltaTimes;                                                         // 0x0090 (size: 0x10)
    int32 LastInsertIndex;                                                            // 0x00A0 (size: 0x4)
    int32 UpperBound;                                                                 // 0x00A4 (size: 0x4)

}; // Size: 0xB0

struct FRigUnit_TimeOffsetVector : public FRigUnit_SimBase
{
    FVector Value;                                                                    // 0x0008 (size: 0xC)
    float SecondsAgo;                                                                 // 0x0014 (size: 0x4)
    int32 BufferSize;                                                                 // 0x0018 (size: 0x4)
    float TimeRange;                                                                  // 0x001C (size: 0x4)
    FVector Result;                                                                   // 0x0020 (size: 0xC)
    TArray<FVector> Buffer;                                                           // 0x0030 (size: 0x10)
    TArray<float> DeltaTimes;                                                         // 0x0040 (size: 0x10)
    int32 LastInsertIndex;                                                            // 0x0050 (size: 0x4)
    int32 UpperBound;                                                                 // 0x0054 (size: 0x4)

}; // Size: 0x58

struct FRigUnit_Timeline : public FRigUnit_SimBase
{
    float Speed;                                                                      // 0x0008 (size: 0x4)
    float Time;                                                                       // 0x000C (size: 0x4)
    float AccumulatedValue;                                                           // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FRigUnit_ToRigSpace_Location : public FRigUnit
{
    FVector Location;                                                                 // 0x0008 (size: 0xC)
    FVector Global;                                                                   // 0x0014 (size: 0xC)

}; // Size: 0x20

struct FRigUnit_ToRigSpace_Rotation : public FRigUnit
{
    FQuat Rotation;                                                                   // 0x0010 (size: 0x10)
    FQuat Global;                                                                     // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FRigUnit_ToRigSpace_Transform : public FRigUnit
{
    FTransform Transform;                                                             // 0x0010 (size: 0x30)
    FTransform Global;                                                                // 0x0040 (size: 0x30)

}; // Size: 0x70

struct FRigUnit_ToSwingAndTwist : public FRigUnit
{
    FQuat Input;                                                                      // 0x0010 (size: 0x10)
    FVector TwistAxis;                                                                // 0x0020 (size: 0xC)
    FQuat Swing;                                                                      // 0x0030 (size: 0x10)
    FQuat Twist;                                                                      // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FRigUnit_ToWorldSpace_Location : public FRigUnit
{
    FVector Location;                                                                 // 0x0008 (size: 0xC)
    FVector World;                                                                    // 0x0014 (size: 0xC)

}; // Size: 0x20

struct FRigUnit_ToWorldSpace_Rotation : public FRigUnit
{
    FQuat Rotation;                                                                   // 0x0010 (size: 0x10)
    FQuat World;                                                                      // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FRigUnit_ToWorldSpace_Transform : public FRigUnit
{
    FTransform Transform;                                                             // 0x0010 (size: 0x30)
    FTransform World;                                                                 // 0x0040 (size: 0x30)

}; // Size: 0x70

struct FRigUnit_TransformConstraint : public FRigUnit_HighlevelBaseMutable
{
    FName Bone;                                                                       // 0x0068 (size: 0x8)
    ETransformSpaceMode BaseTransformSpace;                                           // 0x0070 (size: 0x1)
    FTransform BaseTransform;                                                         // 0x0080 (size: 0x30)
    FName BaseBone;                                                                   // 0x00B0 (size: 0x8)
    TArray<FConstraintTarget> Targets;                                                // 0x00B8 (size: 0x10)
    bool bUseInitialTransforms;                                                       // 0x00C8 (size: 0x1)
    FRigUnit_TransformConstraint_WorkData WorkData;                                   // 0x00D0 (size: 0x60)

}; // Size: 0x130

struct FRigUnit_TransformConstraintPerItem : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKey Item;                                                              // 0x0068 (size: 0xC)
    ETransformSpaceMode BaseTransformSpace;                                           // 0x0074 (size: 0x1)
    FTransform BaseTransform;                                                         // 0x0080 (size: 0x30)
    FRigElementKey BaseItem;                                                          // 0x00B0 (size: 0xC)
    TArray<FConstraintTarget> Targets;                                                // 0x00C0 (size: 0x10)
    bool bUseInitialTransforms;                                                       // 0x00D0 (size: 0x1)
    FRigUnit_TransformConstraint_WorkData WorkData;                                   // 0x00D8 (size: 0x60)

}; // Size: 0x140

struct FRigUnit_TransformConstraint_WorkData
{
    TArray<FConstraintData> ConstraintData;                                           // 0x0000 (size: 0x10)
    TMap<int32, int32> ConstraintDataToTargets;                                       // 0x0010 (size: 0x50)

}; // Size: 0x60

struct FRigUnit_TwistBones : public FRigUnit_HighlevelBaseMutable
{
    FName StartBone;                                                                  // 0x0068 (size: 0x8)
    FName EndBone;                                                                    // 0x0070 (size: 0x8)
    FVector TwistAxis;                                                                // 0x0078 (size: 0xC)
    FVector PoleAxis;                                                                 // 0x0084 (size: 0xC)
    EControlRigAnimEasingType TwistEaseType;                                          // 0x0090 (size: 0x1)
    float Weight;                                                                     // 0x0094 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x0098 (size: 0x1)
    FRigUnit_TwistBones_WorkData WorkData;                                            // 0x00A0 (size: 0x30)

}; // Size: 0xD0

struct FRigUnit_TwistBonesPerItem : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKeyCollection Items;                                                   // 0x0068 (size: 0x10)
    FVector TwistAxis;                                                                // 0x0078 (size: 0xC)
    FVector PoleAxis;                                                                 // 0x0084 (size: 0xC)
    EControlRigAnimEasingType TwistEaseType;                                          // 0x0090 (size: 0x1)
    float Weight;                                                                     // 0x0094 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x0098 (size: 0x1)
    FRigUnit_TwistBones_WorkData WorkData;                                            // 0x00A0 (size: 0x30)

}; // Size: 0xD0

struct FRigUnit_TwistBones_WorkData
{
    TArray<FCachedRigElement> CachedItems;                                            // 0x0000 (size: 0x10)
    TArray<float> ItemRatios;                                                         // 0x0010 (size: 0x10)
    TArray<FTransform> ItemTransforms;                                                // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FRigUnit_TwoBoneIKFK : public FRigUnitMutable
{
    FName StartJoint;                                                                 // 0x0068 (size: 0x8)
    FName EndJoint;                                                                   // 0x0070 (size: 0x8)
    FVector PoleTarget;                                                               // 0x0078 (size: 0xC)
    float Spin;                                                                       // 0x0084 (size: 0x4)
    FTransform EndEffector;                                                           // 0x0090 (size: 0x30)
    float IKBlend;                                                                    // 0x00C0 (size: 0x4)
    FTransform StartJointFKTransform;                                                 // 0x00D0 (size: 0x30)
    FTransform MidJointFKTransform;                                                   // 0x0100 (size: 0x30)
    FTransform EndJointFKTransform;                                                   // 0x0130 (size: 0x30)
    float PreviousFKIKBlend;                                                          // 0x0160 (size: 0x4)
    FTransform StartJointIKTransform;                                                 // 0x0170 (size: 0x30)
    FTransform MidJointIKTransform;                                                   // 0x01A0 (size: 0x30)
    FTransform EndJointIKTransform;                                                   // 0x01D0 (size: 0x30)
    int32 StartJointIndex;                                                            // 0x0200 (size: 0x4)
    int32 MidJointIndex;                                                              // 0x0204 (size: 0x4)
    int32 EndJointIndex;                                                              // 0x0208 (size: 0x4)
    float UpperLimbLength;                                                            // 0x020C (size: 0x4)
    float LowerLimbLength;                                                            // 0x0210 (size: 0x4)

}; // Size: 0x220

struct FRigUnit_TwoBoneIKSimple : public FRigUnit_HighlevelBaseMutable
{
    FName BoneA;                                                                      // 0x0068 (size: 0x8)
    FName BoneB;                                                                      // 0x0070 (size: 0x8)
    FName EffectorBone;                                                               // 0x0078 (size: 0x8)
    FTransform Effector;                                                              // 0x0080 (size: 0x30)
    FVector PrimaryAxis;                                                              // 0x00B0 (size: 0xC)
    FVector SecondaryAxis;                                                            // 0x00BC (size: 0xC)
    float SecondaryAxisWeight;                                                        // 0x00C8 (size: 0x4)
    FVector PoleVector;                                                               // 0x00CC (size: 0xC)
    EControlRigVectorKind PoleVectorKind;                                             // 0x00D8 (size: 0x1)
    FName PoleVectorSpace;                                                            // 0x00DC (size: 0x8)
    bool bEnableStretch;                                                              // 0x00E4 (size: 0x1)
    float StretchStartRatio;                                                          // 0x00E8 (size: 0x4)
    float StretchMaximumRatio;                                                        // 0x00EC (size: 0x4)
    float Weight;                                                                     // 0x00F0 (size: 0x4)
    float BoneALength;                                                                // 0x00F4 (size: 0x4)
    float BoneBLength;                                                                // 0x00F8 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x00FC (size: 0x1)
    FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings;                             // 0x0100 (size: 0x40)
    FCachedRigElement CachedBoneAIndex;                                               // 0x0140 (size: 0x14)
    FCachedRigElement CachedBoneBIndex;                                               // 0x0154 (size: 0x14)
    FCachedRigElement CachedEffectorBoneIndex;                                        // 0x0168 (size: 0x14)
    FCachedRigElement CachedPoleVectorSpaceIndex;                                     // 0x017C (size: 0x14)

}; // Size: 0x190

struct FRigUnit_TwoBoneIKSimplePerItem : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKey ItemA;                                                             // 0x0068 (size: 0xC)
    FRigElementKey ItemB;                                                             // 0x0074 (size: 0xC)
    FRigElementKey EffectorItem;                                                      // 0x0080 (size: 0xC)
    FTransform Effector;                                                              // 0x0090 (size: 0x30)
    FVector PrimaryAxis;                                                              // 0x00C0 (size: 0xC)
    FVector SecondaryAxis;                                                            // 0x00CC (size: 0xC)
    float SecondaryAxisWeight;                                                        // 0x00D8 (size: 0x4)
    FVector PoleVector;                                                               // 0x00DC (size: 0xC)
    EControlRigVectorKind PoleVectorKind;                                             // 0x00E8 (size: 0x1)
    FRigElementKey PoleVectorSpace;                                                   // 0x00EC (size: 0xC)
    bool bEnableStretch;                                                              // 0x00F8 (size: 0x1)
    float StretchStartRatio;                                                          // 0x00FC (size: 0x4)
    float StretchMaximumRatio;                                                        // 0x0100 (size: 0x4)
    float Weight;                                                                     // 0x0104 (size: 0x4)
    float ItemALength;                                                                // 0x0108 (size: 0x4)
    float ItemBLength;                                                                // 0x010C (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x0110 (size: 0x1)
    FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings;                             // 0x0120 (size: 0x40)
    FCachedRigElement CachedItemAIndex;                                               // 0x0160 (size: 0x14)
    FCachedRigElement CachedItemBIndex;                                               // 0x0174 (size: 0x14)
    FCachedRigElement CachedEffectorItemIndex;                                        // 0x0188 (size: 0x14)
    FCachedRigElement CachedPoleVectorSpaceIndex;                                     // 0x019C (size: 0x14)

}; // Size: 0x1B0

struct FRigUnit_TwoBoneIKSimpleTransforms : public FRigUnit_HighlevelBase
{
    FTransform Root;                                                                  // 0x0010 (size: 0x30)
    FVector PoleVector;                                                               // 0x0040 (size: 0xC)
    FTransform Effector;                                                              // 0x0050 (size: 0x30)
    FVector PrimaryAxis;                                                              // 0x0080 (size: 0xC)
    FVector SecondaryAxis;                                                            // 0x008C (size: 0xC)
    float SecondaryAxisWeight;                                                        // 0x0098 (size: 0x4)
    bool bEnableStretch;                                                              // 0x009C (size: 0x1)
    float StretchStartRatio;                                                          // 0x00A0 (size: 0x4)
    float StretchMaximumRatio;                                                        // 0x00A4 (size: 0x4)
    float BoneALength;                                                                // 0x00A8 (size: 0x4)
    float BoneBLength;                                                                // 0x00AC (size: 0x4)
    FTransform Elbow;                                                                 // 0x00B0 (size: 0x30)

}; // Size: 0xE0

struct FRigUnit_TwoBoneIKSimpleVectors : public FRigUnit_HighlevelBase
{
    FVector Root;                                                                     // 0x0008 (size: 0xC)
    FVector PoleVector;                                                               // 0x0014 (size: 0xC)
    FVector Effector;                                                                 // 0x0020 (size: 0xC)
    bool bEnableStretch;                                                              // 0x002C (size: 0x1)
    float StretchStartRatio;                                                          // 0x0030 (size: 0x4)
    float StretchMaximumRatio;                                                        // 0x0034 (size: 0x4)
    float BoneALength;                                                                // 0x0038 (size: 0x4)
    float BoneBLength;                                                                // 0x003C (size: 0x4)
    FVector Elbow;                                                                    // 0x0040 (size: 0xC)

}; // Size: 0x50

struct FRigUnit_TwoBoneIKSimple_DebugSettings
{
    bool bEnabled;                                                                    // 0x0000 (size: 0x1)
    float Scale;                                                                      // 0x0004 (size: 0x4)
    FTransform WorldOffset;                                                           // 0x0010 (size: 0x30)

}; // Size: 0x40

struct FRigUnit_UnaryQuaternionOp : public FRigUnit
{
    FQuat Argument;                                                                   // 0x0010 (size: 0x10)
    FQuat Result;                                                                     // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FRigUnit_VerletIntegrateVector : public FRigUnit_SimBase
{
    FVector Target;                                                                   // 0x0008 (size: 0xC)
    float Strength;                                                                   // 0x0014 (size: 0x4)
    float Damp;                                                                       // 0x0018 (size: 0x4)
    float Blend;                                                                      // 0x001C (size: 0x4)
    FVector Position;                                                                 // 0x0020 (size: 0xC)
    FVector Velocity;                                                                 // 0x002C (size: 0xC)
    FVector Acceleration;                                                             // 0x0038 (size: 0xC)
    FCRSimPoint Point;                                                                // 0x0044 (size: 0x28)
    bool bInitialized;                                                                // 0x006C (size: 0x1)

}; // Size: 0x70

struct FRigUnit_VisualDebugQuat : public FRigUnit_DebugBase
{
    FQuat Value;                                                                      // 0x0010 (size: 0x10)
    bool bEnabled;                                                                    // 0x0020 (size: 0x1)
    float Thickness;                                                                  // 0x0024 (size: 0x4)
    float Scale;                                                                      // 0x0028 (size: 0x4)
    FName BoneSpace;                                                                  // 0x002C (size: 0x8)

}; // Size: 0x40

struct FRigUnit_VisualDebugQuatItemSpace : public FRigUnit_DebugBase
{
    FQuat Value;                                                                      // 0x0010 (size: 0x10)
    bool bEnabled;                                                                    // 0x0020 (size: 0x1)
    float Thickness;                                                                  // 0x0024 (size: 0x4)
    float Scale;                                                                      // 0x0028 (size: 0x4)
    FRigElementKey Space;                                                             // 0x002C (size: 0xC)

}; // Size: 0x40

struct FRigUnit_VisualDebugTransform : public FRigUnit_DebugBase
{
    FTransform Value;                                                                 // 0x0010 (size: 0x30)
    bool bEnabled;                                                                    // 0x0040 (size: 0x1)
    float Thickness;                                                                  // 0x0044 (size: 0x4)
    float Scale;                                                                      // 0x0048 (size: 0x4)
    FName BoneSpace;                                                                  // 0x004C (size: 0x8)

}; // Size: 0x60

struct FRigUnit_VisualDebugTransformItemSpace : public FRigUnit_DebugBase
{
    FTransform Value;                                                                 // 0x0010 (size: 0x30)
    bool bEnabled;                                                                    // 0x0040 (size: 0x1)
    float Thickness;                                                                  // 0x0044 (size: 0x4)
    float Scale;                                                                      // 0x0048 (size: 0x4)
    FRigElementKey Space;                                                             // 0x004C (size: 0xC)

}; // Size: 0x60

struct FRigUnit_VisualDebugVector : public FRigUnit_DebugBase
{
    FVector Value;                                                                    // 0x0008 (size: 0xC)
    bool bEnabled;                                                                    // 0x0014 (size: 0x1)
    ERigUnitVisualDebugPointMode Mode;                                                // 0x0015 (size: 0x1)
    FLinearColor Color;                                                               // 0x0018 (size: 0x10)
    float Thickness;                                                                  // 0x0028 (size: 0x4)
    float Scale;                                                                      // 0x002C (size: 0x4)
    FName BoneSpace;                                                                  // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FRigUnit_VisualDebugVectorItemSpace : public FRigUnit_DebugBase
{
    FVector Value;                                                                    // 0x0008 (size: 0xC)
    bool bEnabled;                                                                    // 0x0014 (size: 0x1)
    ERigUnitVisualDebugPointMode Mode;                                                // 0x0015 (size: 0x1)
    FLinearColor Color;                                                               // 0x0018 (size: 0x10)
    float Thickness;                                                                  // 0x0028 (size: 0x4)
    float Scale;                                                                      // 0x002C (size: 0x4)
    FRigElementKey Space;                                                             // 0x0030 (size: 0xC)

}; // Size: 0x40

struct FStructReference
{
}; // Size: 0x8

class AControlRigControlActor : public AActor
{
    class AActor* ActorToTrack;                                                       // 0x0220 (size: 0x8)
    TSubclassOf<class UControlRig> ControlRigClass;                                   // 0x0228 (size: 0x8)
    bool bRefreshOnTick;                                                              // 0x0230 (size: 0x1)
    bool bIsSelectable;                                                               // 0x0231 (size: 0x1)
    class UMaterialInterface* MaterialOverride;                                       // 0x0238 (size: 0x8)
    FString ColorParameter;                                                           // 0x0240 (size: 0x10)
    bool bCastShadows;                                                                // 0x0250 (size: 0x1)
    class USceneComponent* ActorRootComponent;                                        // 0x0258 (size: 0x8)
    class UControlRig* ControlRig;                                                    // 0x0260 (size: 0x8)
    TArray<FName> ControlNames;                                                       // 0x0268 (size: 0x10)
    TArray<FTransform> GizmoTransforms;                                               // 0x0278 (size: 0x10)
    TArray<class UStaticMeshComponent*> Components;                                   // 0x0288 (size: 0x10)
    TArray<class UMaterialInstanceDynamic*> Materials;                                // 0x0298 (size: 0x10)
    FName ColorParameterName;                                                         // 0x02A8 (size: 0x8)

    void Refresh();
    void Clear();
}; // Size: 0x2B8

class AControlRigGizmoActor : public AActor
{
    class USceneComponent* ActorRootComponent;                                        // 0x0220 (size: 0x8)
    class UStaticMeshComponent* StaticMeshComponent;                                  // 0x0228 (size: 0x8)
    uint32 ControlRigIndex;                                                           // 0x0230 (size: 0x4)
    FName ControlName;                                                                // 0x0234 (size: 0x8)
    FName ColorParameterName;                                                         // 0x023C (size: 0x8)
    uint8 bEnabled;                                                                   // 0x0244 (size: 0x1)
    uint8 bSelected;                                                                  // 0x0244 (size: 0x1)
    uint8 bSelectable;                                                                // 0x0244 (size: 0x1)
    uint8 bHovered;                                                                   // 0x0244 (size: 0x1)

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
}; // Size: 0x248

class UAdditiveControlRig : public UControlRig
{
}; // Size: 0x660

class UControlRig : public UObject
{
    ERigExecutionType ExecutionType;                                                  // 0x0045 (size: 0x1)
    class URigVM* VM;                                                                 // 0x0048 (size: 0x8)
    FRigHierarchyContainer Hierarchy;                                                 // 0x0050 (size: 0x368)
    TSoftObjectPtr<UControlRigGizmoLibrary> GizmoLibrary;                             // 0x03B8 (size: 0x28)
    TMap<class FName, class FCachedPropertyPath> InputProperties;                     // 0x03F0 (size: 0x50)
    TMap<class FName, class FCachedPropertyPath> OutputProperties;                    // 0x0440 (size: 0x50)
    FControlRigDrawContainer DrawContainer;                                           // 0x0490 (size: 0x18)
    class UAnimationDataSourceRegistry* DataSourceRegistry;                           // 0x04C0 (size: 0x8)
    TArray<FName> EventQueue;                                                         // 0x04C8 (size: 0x10)
    FRigInfluenceMapPerEvent Influences;                                              // 0x0550 (size: 0x60)
    class UControlRig* InteractionRig;                                                // 0x05B0 (size: 0x8)
    TSubclassOf<class UControlRig> InteractionRigClass;                               // 0x05B8 (size: 0x8)
    TArray<class UAssetUserData*> AssetUserData;                                      // 0x05C0 (size: 0x10)

    void SetInteractionRigClass(TSubclassOf<class UControlRig> InInteractionRigClass);
    void SetInteractionRig(class UControlRig* InInteractionRig);
    TSubclassOf<class UControlRig> GetInteractionRigClass();
    class UControlRig* GetInteractionRig();
}; // Size: 0x650

class UControlRigAnimInstance : public UAnimInstance
{
}; // Size: 0x2C0

class UControlRigBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
}; // Size: 0x328

class UControlRigComponent : public UPrimitiveComponent
{
    TSubclassOf<class UControlRig> ControlRigClass;                                   // 0x0450 (size: 0x8)
    FControlRigComponentOnPostInitializeDelegate OnPostInitializeDelegate;            // 0x0458 (size: 0x10)
    void ControlRigComponentDelegate(class UControlRigComponent* Component);
    FControlRigComponentOnPreSetupDelegate OnPreSetupDelegate;                        // 0x0468 (size: 0x10)
    void ControlRigComponentDelegate(class UControlRigComponent* Component);
    FControlRigComponentOnPostSetupDelegate OnPostSetupDelegate;                      // 0x0478 (size: 0x10)
    void ControlRigComponentDelegate(class UControlRigComponent* Component);
    FControlRigComponentOnPreUpdateDelegate OnPreUpdateDelegate;                      // 0x0488 (size: 0x10)
    void ControlRigComponentDelegate(class UControlRigComponent* Component);
    FControlRigComponentOnPostUpdateDelegate OnPostUpdateDelegate;                    // 0x0498 (size: 0x10)
    void ControlRigComponentDelegate(class UControlRigComponent* Component);
    TArray<FControlRigComponentMappedElement> MappedElements;                         // 0x04A8 (size: 0x10)
    bool bResetTransformBeforeTick;                                                   // 0x04B8 (size: 0x1)
    bool bResetInitialsBeforeSetup;                                                   // 0x04B9 (size: 0x1)
    bool bUpdateRigOnTick;                                                            // 0x04BA (size: 0x1)
    bool bUpdateInEditor;                                                             // 0x04BB (size: 0x1)
    bool bDrawBones;                                                                  // 0x04BC (size: 0x1)
    bool bShowDebugDrawing;                                                           // 0x04BD (size: 0x1)
    class UControlRig* ControlRig;                                                    // 0x04C0 (size: 0x8)

    void Update(float DeltaTime);
    void SetMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements);
    void SetInitialSpaceTransform(FName SpaceName, FTransform InitialTransform, EControlRigComponentSpace Space);
    void SetInitialBoneTransform(FName BoneName, FTransform InitialTransform, EControlRigComponentSpace Space, bool bPropagateToChildren);
    void SetControlVector2D(FName ControlName, FVector2D Value);
    void SetControlTransform(FName ControlName, FTransform Value, EControlRigComponentSpace Space);
    void SetControlScale(FName ControlName, FVector Value, EControlRigComponentSpace Space);
    void SetControlRotator(FName ControlName, FRotator Value, EControlRigComponentSpace Space);
    void SetControlPosition(FName ControlName, FVector Value, EControlRigComponentSpace Space);
    void SetControlOffset(FName ControlName, FTransform OffsetTransform, EControlRigComponentSpace Space);
    void SetControlInt(FName ControlName, int32 Value);
    void SetControlFloat(FName ControlName, float Value);
    void SetControlBool(FName ControlName, bool Value);
    void SetBoneTransform(FName BoneName, FTransform Transform, EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren);
    void SetBoneInitialTransformsFromSkeletalMesh(class USkeletalMesh* InSkeletalMesh);
    void OnPreUpdate(class UControlRigComponent* Component);
    void OnPreSetup(class UControlRigComponent* Component);
    void OnPostUpdate(class UControlRigComponent* Component);
    void OnPostSetup(class UControlRigComponent* Component);
    void OnPostInitialize(class UControlRigComponent* Component);
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
    void AddMappedSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FControlRigComponentMappedBone> Bones, TArray<FControlRigComponentMappedCurve> Curves);
    void AddMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements);
    void AddMappedComponents(TArray<FControlRigComponentMappedComponent> Components);
    void AddMappedCompleteSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent);
}; // Size: 0x530

class UControlRigGizmoLibrary : public UObject
{
    FControlRigGizmoDefinition DefaultGizmo;                                          // 0x0030 (size: 0x60)
    TSoftObjectPtr<UMaterial> DefaultMaterial;                                        // 0x0090 (size: 0x28)
    FName MaterialColorParameter;                                                     // 0x00B8 (size: 0x8)
    TArray<FControlRigGizmoDefinition> Gizmos;                                        // 0x00C0 (size: 0x10)

}; // Size: 0xE0

class UControlRigLayerInstance : public UAnimInstance
{
}; // Size: 0x2C0

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
    FRigPose Pose;                                                                    // 0x0050 (size: 0x10)

}; // Size: 0x60

class UControlRigObjectHolder : public UObject
{
    TArray<class UObject*> Objects;                                                   // 0x0028 (size: 0x10)

}; // Size: 0x38

class UControlRigSequence : public ULevelSequence
{
    TSoftObjectPtr<UAnimSequence> LastExportedToAnimationSequence;                    // 0x01C8 (size: 0x28)
    TSoftObjectPtr<USkeletalMesh> LastExportedUsingSkeletalMesh;                      // 0x01F0 (size: 0x28)
    float LastExportedFrameRate;                                                      // 0x0218 (size: 0x4)

}; // Size: 0x220

class UControlRigSequencerAnimInstance : public UAnimSequencerInstance
{
}; // Size: 0x2D0

class UControlRigSettings : public UDeveloperSettings
{
}; // Size: 0x38

class UControlRigValidationPass : public UObject
{
}; // Size: 0x28

class UControlRigValidator : public UObject
{
    TArray<class UControlRigValidationPass*> Passes;                                  // 0x0028 (size: 0x10)

}; // Size: 0x68

class UDefault__ControlRigBlueprintGeneratedClass
{
}; // Size: 0x0

class UFKControlRig : public UControlRig
{
    TArray<bool> IsControlActive;                                                     // 0x0650 (size: 0x10)
    EControlRigFKRigExecuteMode ApplyMode;                                            // 0x0660 (size: 0x1)

}; // Size: 0x668

class UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection
{
    class UControlRig* ControlRig;                                                    // 0x0148 (size: 0x8)
    TSubclassOf<class UControlRig> ControlRigClass;                                   // 0x0150 (size: 0x8)
    TArray<bool> ControlsMask;                                                        // 0x0158 (size: 0x10)
    FMovieSceneTransformMask TransformMask;                                           // 0x0168 (size: 0x4)
    FMovieSceneFloatChannel Weight;                                                   // 0x0170 (size: 0xA0)
    TMap<class FName, class FChannelMapInfo> ControlChannelMap;                       // 0x0210 (size: 0x50)
    TArray<FEnumParameterNameAndCurve> EnumParameterNamesAndCurves;                   // 0x0260 (size: 0x10)
    TArray<FIntegerParameterNameAndCurve> IntegerParameterNamesAndCurves;             // 0x0270 (size: 0x10)

}; // Size: 0x2E8

class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack
{
    class UControlRig* ControlRig;                                                    // 0x00A0 (size: 0x8)
    class UMovieSceneSection* SectionToKey;                                           // 0x00A8 (size: 0x8)
    TArray<class UMovieSceneSection*> Sections;                                       // 0x00B0 (size: 0x10)
    FName TrackName;                                                                  // 0x00C0 (size: 0x8)

}; // Size: 0xC8

#endif
