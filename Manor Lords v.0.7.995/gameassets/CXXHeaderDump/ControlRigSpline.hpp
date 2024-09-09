#ifndef UE4SS_SDK_ControlRigSpline_HPP
#define UE4SS_SDK_ControlRigSpline_HPP

#include "ControlRigSpline_enums.hpp"

struct FControlRigSpline
{
}; // Size: 0x18

struct FControlRigSplineImpl
{
}; // Size: 0x68

struct FRigUnit_ClosestParameterFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{
    FControlRigSpline Spline;                                                         // 0x0008 (size: 0x18)
    FVector Position;                                                                 // 0x0020 (size: 0x18)
    float U;                                                                          // 0x0038 (size: 0x4)

}; // Size: 0x40

struct FRigUnit_ControlRigSplineBase : public FRigUnit
{
}; // Size: 0x8

struct FRigUnit_ControlRigSplineFromPoints : public FRigUnit_ControlRigSplineBase
{
    TArray<FVector> Points;                                                           // 0x0008 (size: 0x10)
    ESplineType SplineMode;                                                           // 0x0018 (size: 0x1)
    bool bClosed;                                                                     // 0x0019 (size: 0x1)
    int32 SamplesPerSegment;                                                          // 0x001C (size: 0x4)
    float Compression;                                                                // 0x0020 (size: 0x4)
    float Stretch;                                                                    // 0x0024 (size: 0x4)
    FControlRigSpline Spline;                                                         // 0x0028 (size: 0x18)

}; // Size: 0x40

struct FRigUnit_ControlRigSplineFromTransforms : public FRigUnit_ControlRigSplineBase
{
    TArray<FTransform> Transforms;                                                    // 0x0008 (size: 0x10)
    ESplineType SplineMode;                                                           // 0x0018 (size: 0x1)
    bool bClosed;                                                                     // 0x0019 (size: 0x1)
    int32 SamplesPerSegment;                                                          // 0x001C (size: 0x4)
    float Compression;                                                                // 0x0020 (size: 0x4)
    float Stretch;                                                                    // 0x0024 (size: 0x4)
    FControlRigSpline Spline;                                                         // 0x0028 (size: 0x18)

}; // Size: 0x40

struct FRigUnit_DrawControlRigSpline : public FRigUnitMutable
{
    FControlRigSpline Spline;                                                         // 0x01D0 (size: 0x18)
    FLinearColor Color;                                                               // 0x01E8 (size: 0x10)
    float Thickness;                                                                  // 0x01F8 (size: 0x4)
    int32 Detail;                                                                     // 0x01FC (size: 0x4)

}; // Size: 0x200

struct FRigUnit_FitChainToSplineCurve : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKeyCollection Items;                                                   // 0x01D0 (size: 0x10)
    FControlRigSpline Spline;                                                         // 0x01E0 (size: 0x18)
    EControlRigCurveAlignment Alignment;                                              // 0x01F8 (size: 0x1)
    float Minimum;                                                                    // 0x01FC (size: 0x4)
    float Maximum;                                                                    // 0x0200 (size: 0x4)
    int32 SamplingPrecision;                                                          // 0x0204 (size: 0x4)
    FVector PrimaryAxis;                                                              // 0x0208 (size: 0x18)
    FVector SecondaryAxis;                                                            // 0x0220 (size: 0x18)
    FVector PoleVectorPosition;                                                       // 0x0238 (size: 0x18)
    TArray<FRigUnit_FitChainToCurve_Rotation> Rotations;                              // 0x0250 (size: 0x10)
    ERigVMAnimEasingType RotationEaseType;                                            // 0x0260 (size: 0x1)
    float Weight;                                                                     // 0x0264 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x0268 (size: 0x1)
    FRigUnit_FitChainToCurve_DebugSettings DebugSettings;                             // 0x0270 (size: 0x90)
    FRigUnit_FitChainToCurve_WorkData WorkData;                                       // 0x0300 (size: 0x98)

}; // Size: 0x3A0

struct FRigUnit_FitChainToSplineCurveItemArray : public FRigUnit_HighlevelBaseMutable
{
    TArray<FRigElementKey> Items;                                                     // 0x01D0 (size: 0x10)
    FControlRigSpline Spline;                                                         // 0x01E0 (size: 0x18)
    EControlRigCurveAlignment Alignment;                                              // 0x01F8 (size: 0x1)
    float Minimum;                                                                    // 0x01FC (size: 0x4)
    float Maximum;                                                                    // 0x0200 (size: 0x4)
    int32 SamplingPrecision;                                                          // 0x0204 (size: 0x4)
    FVector PrimaryAxis;                                                              // 0x0208 (size: 0x18)
    FVector SecondaryAxis;                                                            // 0x0220 (size: 0x18)
    FVector PoleVectorPosition;                                                       // 0x0238 (size: 0x18)
    TArray<FRigUnit_FitChainToCurve_Rotation> Rotations;                              // 0x0250 (size: 0x10)
    ERigVMAnimEasingType RotationEaseType;                                            // 0x0260 (size: 0x1)
    float Weight;                                                                     // 0x0264 (size: 0x4)
    bool bPropagateToChildren;                                                        // 0x0268 (size: 0x1)
    FRigUnit_FitChainToCurve_DebugSettings DebugSettings;                             // 0x0270 (size: 0x90)
    FRigUnit_FitChainToCurve_WorkData WorkData;                                       // 0x0300 (size: 0x98)

}; // Size: 0x3A0

struct FRigUnit_FitSplineCurveToChain : public FRigUnit_HighlevelBaseMutable
{
    FRigElementKeyCollection Items;                                                   // 0x01D0 (size: 0x10)
    FControlRigSpline Spline;                                                         // 0x01E0 (size: 0x18)

}; // Size: 0x200

struct FRigUnit_FitSplineCurveToChainItemArray : public FRigUnit_HighlevelBaseMutable
{
    TArray<FRigElementKey> Items;                                                     // 0x01D0 (size: 0x10)
    FControlRigSpline Spline;                                                         // 0x01E0 (size: 0x18)

}; // Size: 0x200

struct FRigUnit_GetLengthAtParamControlRigSpline : public FRigUnit
{
    FControlRigSpline Spline;                                                         // 0x0008 (size: 0x18)
    float U;                                                                          // 0x0020 (size: 0x4)
    float Length;                                                                     // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FRigUnit_GetLengthControlRigSpline : public FRigUnit
{
    FControlRigSpline Spline;                                                         // 0x0008 (size: 0x18)
    float Length;                                                                     // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FRigUnit_ParameterAtPercentage : public FRigUnit_ControlRigSplineBase
{
    FControlRigSpline Spline;                                                         // 0x0008 (size: 0x18)
    float Percentage;                                                                 // 0x0020 (size: 0x4)
    float U;                                                                          // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FRigUnit_PositionFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{
    FControlRigSpline Spline;                                                         // 0x0008 (size: 0x18)
    float U;                                                                          // 0x0020 (size: 0x4)
    FVector Position;                                                                 // 0x0028 (size: 0x18)

}; // Size: 0x40

struct FRigUnit_SetSplinePoints : public FRigUnitMutable
{
    TArray<FVector> Points;                                                           // 0x01D0 (size: 0x10)
    FControlRigSpline Spline;                                                         // 0x01E0 (size: 0x18)

}; // Size: 0x200

struct FRigUnit_SetSplineTransforms : public FRigUnitMutable
{
    TArray<FTransform> Transforms;                                                    // 0x01D0 (size: 0x10)
    FControlRigSpline Spline;                                                         // 0x01E0 (size: 0x18)

}; // Size: 0x200

struct FRigUnit_SplineConstraint : public FRigUnit_HighlevelBaseMutable
{
    TArray<FRigElementKey> Items;                                                     // 0x01D0 (size: 0x10)
    FControlRigSpline Spline;                                                         // 0x01E0 (size: 0x18)
    EControlRigCurveAlignment Alignment;                                              // 0x01F8 (size: 0x1)
    float Minimum;                                                                    // 0x01FC (size: 0x4)
    float Maximum;                                                                    // 0x0200 (size: 0x4)
    FVector PrimaryAxis;                                                              // 0x0208 (size: 0x18)
    FVector SecondaryAxis;                                                            // 0x0220 (size: 0x18)
    bool bPropagateToChildren;                                                        // 0x0238 (size: 0x1)
    FRigUnit_SplineConstraint_WorkData WorkData;                                      // 0x0240 (size: 0x38)

}; // Size: 0x280

struct FRigUnit_SplineConstraint_WorkData
{
    float ChainLength;                                                                // 0x0000 (size: 0x4)
    TArray<FTransform> ItemTransforms;                                                // 0x0008 (size: 0x10)
    TArray<float> ItemSegments;                                                       // 0x0018 (size: 0x10)
    TArray<FCachedRigElement> CachedItems;                                            // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FRigUnit_TangentFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{
    FControlRigSpline Spline;                                                         // 0x0008 (size: 0x18)
    float U;                                                                          // 0x0020 (size: 0x4)
    FVector Tangent;                                                                  // 0x0028 (size: 0x18)

}; // Size: 0x40

struct FRigUnit_TransformFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{
    FControlRigSpline Spline;                                                         // 0x0008 (size: 0x18)
    FVector UpVector;                                                                 // 0x0020 (size: 0x18)
    float roll;                                                                       // 0x0038 (size: 0x4)
    float U;                                                                          // 0x003C (size: 0x4)
    FTransform Transform;                                                             // 0x0040 (size: 0x60)

}; // Size: 0xA0

struct FRigUnit_TransformFromControlRigSpline2 : public FRigUnit_ControlRigSplineBase
{
    FControlRigSpline Spline;                                                         // 0x0008 (size: 0x18)
    float U;                                                                          // 0x0020 (size: 0x4)
    FVector PrimaryAxis;                                                              // 0x0028 (size: 0x18)
    FVector SecondaryAxis;                                                            // 0x0040 (size: 0x18)
    FTransform Transform;                                                             // 0x0060 (size: 0x60)

}; // Size: 0xC0

#endif
