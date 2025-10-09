#ifndef UE4SS_SDK_InteractiveToolsFramework_HPP
#define UE4SS_SDK_InteractiveToolsFramework_HPP

#include "InteractiveToolsFramework_enums.hpp"

struct FActiveGizmo
{
}; // Size: 0x30

struct FBehaviorInfo
{
    class UInputBehavior* Behavior;                                                   // 0x0000 (size: 0x8)

}; // Size: 0x20

struct FBrushStampData
{
}; // Size: 0xA8

struct FGizmoFloatParameterChange
{
    float InitialValue;                                                               // 0x0000 (size: 0x4)
    float CurrentValue;                                                               // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FGizmoVec2ParameterChange
{
    FVector2D InitialValue;                                                           // 0x0000 (size: 0x8)
    FVector2D CurrentValue;                                                           // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FInputRayHit
{
}; // Size: 0x28

class AGizmoActor : public AInternalToolFrameworkActor
{
}; // Size: 0x220

class AInternalToolFrameworkActor : public AActor
{
}; // Size: 0x220

class AIntervalGizmoActor : public AGizmoActor
{
    class UGizmoLineHandleComponent* UpIntervalComponent;                             // 0x0220 (size: 0x8)
    class UGizmoLineHandleComponent* DownIntervalComponent;                           // 0x0228 (size: 0x8)
    class UGizmoLineHandleComponent* ForwardIntervalComponent;                        // 0x0230 (size: 0x8)

}; // Size: 0x238

class ATransformGizmoActor : public AGizmoActor
{
    class UPrimitiveComponent* TranslateX;                                            // 0x0220 (size: 0x8)
    class UPrimitiveComponent* TranslateY;                                            // 0x0228 (size: 0x8)
    class UPrimitiveComponent* TranslateZ;                                            // 0x0230 (size: 0x8)
    class UPrimitiveComponent* TranslateYZ;                                           // 0x0238 (size: 0x8)
    class UPrimitiveComponent* TranslateXZ;                                           // 0x0240 (size: 0x8)
    class UPrimitiveComponent* TranslateXY;                                           // 0x0248 (size: 0x8)
    class UPrimitiveComponent* RotateX;                                               // 0x0250 (size: 0x8)
    class UPrimitiveComponent* RotateY;                                               // 0x0258 (size: 0x8)
    class UPrimitiveComponent* RotateZ;                                               // 0x0260 (size: 0x8)
    class UPrimitiveComponent* UniformScale;                                          // 0x0268 (size: 0x8)
    class UPrimitiveComponent* AxisScaleX;                                            // 0x0270 (size: 0x8)
    class UPrimitiveComponent* AxisScaleY;                                            // 0x0278 (size: 0x8)
    class UPrimitiveComponent* AxisScaleZ;                                            // 0x0280 (size: 0x8)
    class UPrimitiveComponent* PlaneScaleYZ;                                          // 0x0288 (size: 0x8)
    class UPrimitiveComponent* PlaneScaleXZ;                                          // 0x0290 (size: 0x8)
    class UPrimitiveComponent* PlaneScaleXY;                                          // 0x0298 (size: 0x8)

}; // Size: 0x2A0

class IGizmoAxisSource : public IInterface
{

    bool HasTangentVectors();
    void GetTangentVectors(FVector& TangentXOut, FVector& TangentYOut);
    FVector GetOrigin();
    FVector GetDirection();
}; // Size: 0x28

class IGizmoClickTarget : public IInterface
{

    void UpdateHoverState(bool bHovering);
}; // Size: 0x28

class IGizmoFloatParameterSource : public IInterface
{

    void SetParameter(float NewValue);
    float GetParameter();
    void EndModify();
    void BeginModify();
}; // Size: 0x28

class IGizmoStateTarget : public IInterface
{

    void EndUpdate();
    void BeginUpdate();
}; // Size: 0x28

class IGizmoTransformSource : public IInterface
{

    void SetTransform(const FTransform& NewTransform);
    FTransform GetTransform();
}; // Size: 0x28

class IGizmoVec2ParameterSource : public IInterface
{

    void SetParameter(const FVector2D& NewValue);
    FVector2D GetParameter();
    void EndModify();
    void BeginModify();
}; // Size: 0x28

class IInputBehaviorSource : public IInterface
{
}; // Size: 0x28

class IToolContextTransactionProvider : public IInterface
{
}; // Size: 0x28

class IToolFrameworkComponent : public IInterface
{
}; // Size: 0x28

class UAnyButtonInputBehavior : public UInputBehavior
{
}; // Size: 0x80

class UAxisAngleGizmo : public UInteractiveGizmo
{
    TScriptInterface<class IGizmoAxisSource> AxisSource;                              // 0x0048 (size: 0x10)
    TScriptInterface<class IGizmoFloatParameterSource> AngleSource;                   // 0x0058 (size: 0x10)
    TScriptInterface<class IGizmoClickTarget> HitTarget;                              // 0x0068 (size: 0x10)
    TScriptInterface<class IGizmoStateTarget> StateTarget;                            // 0x0078 (size: 0x10)
    bool bInInteraction;                                                              // 0x0088 (size: 0x1)
    FVector RotationOrigin;                                                           // 0x008C (size: 0xC)
    FVector RotationAxis;                                                             // 0x0098 (size: 0xC)
    FVector RotationPlaneX;                                                           // 0x00A4 (size: 0xC)
    FVector RotationPlaneY;                                                           // 0x00B0 (size: 0xC)
    FVector InteractionStartPoint;                                                    // 0x00BC (size: 0xC)
    FVector InteractionCurPoint;                                                      // 0x00C8 (size: 0xC)
    float InteractionStartAngle;                                                      // 0x00D4 (size: 0x4)
    float InteractionCurAngle;                                                        // 0x00D8 (size: 0x4)

}; // Size: 0xF0

class UAxisAngleGizmoBuilder : public UInteractiveGizmoBuilder
{
}; // Size: 0x28

class UAxisPositionGizmo : public UInteractiveGizmo
{
    TScriptInterface<class IGizmoAxisSource> AxisSource;                              // 0x0048 (size: 0x10)
    TScriptInterface<class IGizmoFloatParameterSource> ParameterSource;               // 0x0058 (size: 0x10)
    TScriptInterface<class IGizmoClickTarget> HitTarget;                              // 0x0068 (size: 0x10)
    TScriptInterface<class IGizmoStateTarget> StateTarget;                            // 0x0078 (size: 0x10)
    bool bEnableSignedAxis;                                                           // 0x0088 (size: 0x1)
    bool bInInteraction;                                                              // 0x0089 (size: 0x1)
    FVector InteractionOrigin;                                                        // 0x008C (size: 0xC)
    FVector InteractionAxis;                                                          // 0x0098 (size: 0xC)
    FVector InteractionStartPoint;                                                    // 0x00A4 (size: 0xC)
    FVector InteractionCurPoint;                                                      // 0x00B0 (size: 0xC)
    float InteractionStartParameter;                                                  // 0x00BC (size: 0x4)
    float InteractionCurParameter;                                                    // 0x00C0 (size: 0x4)
    float ParameterSign;                                                              // 0x00C4 (size: 0x4)

}; // Size: 0xD8

class UAxisPositionGizmoBuilder : public UInteractiveGizmoBuilder
{
}; // Size: 0x28

class UBaseBrushTool : public UMeshSurfacePointTool
{
    class UBrushBaseProperties* BrushProperties;                                      // 0x00C0 (size: 0x8)
    bool bInBrushStroke;                                                              // 0x00C8 (size: 0x1)
    float WorldToLocalScale;                                                          // 0x00CC (size: 0x4)
    FBrushStampData LastBrushStamp;                                                   // 0x00D0 (size: 0xA8)
    TSoftClassPtr<UBrushBaseProperties> PropertyClass;                                // 0x0188 (size: 0x28)
    class UBrushStampIndicator* BrushStampIndicator;                                  // 0x01B0 (size: 0x8)

}; // Size: 0x1B8

class UBrushBaseProperties : public UInteractiveToolPropertySet
{
    float BrushSize;                                                                  // 0x0060 (size: 0x4)
    bool bSpecifyRadius;                                                              // 0x0064 (size: 0x1)
    float BrushRadius;                                                                // 0x0068 (size: 0x4)
    float BrushStrength;                                                              // 0x006C (size: 0x4)
    float BrushFalloffAmount;                                                         // 0x0070 (size: 0x4)
    bool bShowStrength;                                                               // 0x0074 (size: 0x1)
    bool bShowFalloff;                                                                // 0x0075 (size: 0x1)

}; // Size: 0x78

class UBrushStampIndicator : public UInteractiveGizmo
{
    float BrushRadius;                                                                // 0x0038 (size: 0x4)
    float BrushFalloff;                                                               // 0x003C (size: 0x4)
    FVector BrushPosition;                                                            // 0x0040 (size: 0xC)
    FVector BrushNormal;                                                              // 0x004C (size: 0xC)
    bool bDrawIndicatorLines;                                                         // 0x0058 (size: 0x1)
    bool bDrawRadiusCircle;                                                           // 0x0059 (size: 0x1)
    int32 SampleStepCount;                                                            // 0x005C (size: 0x4)
    FLinearColor LineColor;                                                           // 0x0060 (size: 0x10)
    float LineThickness;                                                              // 0x0070 (size: 0x4)
    bool bDepthTested;                                                                // 0x0074 (size: 0x1)
    bool bDrawSecondaryLines;                                                         // 0x0075 (size: 0x1)
    float SecondaryLineThickness;                                                     // 0x0078 (size: 0x4)
    FLinearColor SecondaryLineColor;                                                  // 0x007C (size: 0x10)
    class UPrimitiveComponent* AttachedComponent;                                     // 0x0090 (size: 0x8)

}; // Size: 0xB0

class UBrushStampIndicatorBuilder : public UInteractiveGizmoBuilder
{
}; // Size: 0x28

class UClickDragInputBehavior : public UAnyButtonInputBehavior
{
    bool bUpdateModifiersDuringDrag;                                                  // 0x0120 (size: 0x1)

}; // Size: 0x140

class UClickDragTool : public UInteractiveTool
{
}; // Size: 0x88

class UClickDragToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x28

class UGizmoArrowComponent : public UGizmoBaseComponent
{
    FVector Direction;                                                                // 0x0470 (size: 0xC)
    float Gap;                                                                        // 0x047C (size: 0x4)
    float Length;                                                                     // 0x0480 (size: 0x4)
    float Thickness;                                                                  // 0x0484 (size: 0x4)

}; // Size: 0x490

class UGizmoAxisIntervalParameterSource : public UGizmoBaseFloatParameterSource
{
    TScriptInterface<class IGizmoFloatParameterSource> FloatParameterSource;          // 0x0048 (size: 0x10)
    float MinParameter;                                                               // 0x0058 (size: 0x4)
    float MaxParameter;                                                               // 0x005C (size: 0x4)

}; // Size: 0x60

class UGizmoAxisRotationParameterSource : public UGizmoBaseFloatParameterSource
{
    TScriptInterface<class IGizmoAxisSource> AxisSource;                              // 0x0090 (size: 0x10)
    TScriptInterface<class IGizmoTransformSource> TransformSource;                    // 0x00A0 (size: 0x10)
    float Angle;                                                                      // 0x00B0 (size: 0x4)
    FGizmoFloatParameterChange LastChange;                                            // 0x00B4 (size: 0x8)
    FVector CurRotationAxis;                                                          // 0x00BC (size: 0xC)
    FVector CurRotationOrigin;                                                        // 0x00C8 (size: 0xC)
    FTransform InitialTransform;                                                      // 0x00E0 (size: 0x30)

}; // Size: 0x110

class UGizmoAxisScaleParameterSource : public UGizmoBaseFloatParameterSource
{
    TScriptInterface<class IGizmoAxisSource> AxisSource;                              // 0x0048 (size: 0x10)
    TScriptInterface<class IGizmoTransformSource> TransformSource;                    // 0x0058 (size: 0x10)
    float ScaleMultiplier;                                                            // 0x0068 (size: 0x4)
    float Parameter;                                                                  // 0x006C (size: 0x4)
    FGizmoFloatParameterChange LastChange;                                            // 0x0070 (size: 0x8)
    FVector CurScaleAxis;                                                             // 0x0078 (size: 0xC)
    FVector CurScaleOrigin;                                                           // 0x0084 (size: 0xC)
    FTransform InitialTransform;                                                      // 0x0090 (size: 0x30)

}; // Size: 0xC0

class UGizmoAxisTranslationParameterSource : public UGizmoBaseFloatParameterSource
{
    TScriptInterface<class IGizmoAxisSource> AxisSource;                              // 0x0090 (size: 0x10)
    TScriptInterface<class IGizmoTransformSource> TransformSource;                    // 0x00A0 (size: 0x10)
    float Parameter;                                                                  // 0x00B0 (size: 0x4)
    FGizmoFloatParameterChange LastChange;                                            // 0x00B4 (size: 0x8)
    FVector CurTranslationAxis;                                                       // 0x00BC (size: 0xC)
    FVector CurTranslationOrigin;                                                     // 0x00C8 (size: 0xC)
    FTransform InitialTransform;                                                      // 0x00E0 (size: 0x30)

}; // Size: 0x110

class UGizmoBaseComponent : public UPrimitiveComponent
{
    FLinearColor Color;                                                               // 0x0450 (size: 0x10)
    float HoverSizeMultiplier;                                                        // 0x0460 (size: 0x4)
    float PixelHitDistanceThreshold;                                                  // 0x0464 (size: 0x4)

    void UpdateWorldLocalState(bool bWorldIn);
    void UpdateHoverState(bool bHoveringIn);
}; // Size: 0x470

class UGizmoBaseFloatParameterSource : public UObject
{
}; // Size: 0x48

class UGizmoBaseTransformSource : public UObject
{
}; // Size: 0x48

class UGizmoBaseVec2ParameterSource : public UObject
{
}; // Size: 0x48

class UGizmoBoxComponent : public UGizmoBaseComponent
{
    FVector Origin;                                                                   // 0x0470 (size: 0xC)
    FQuat Rotation;                                                                   // 0x0480 (size: 0x10)
    FVector Dimensions;                                                               // 0x0490 (size: 0xC)
    float LineThickness;                                                              // 0x049C (size: 0x4)
    bool bRemoveHiddenLines;                                                          // 0x04A0 (size: 0x1)
    bool bEnableAxisFlip;                                                             // 0x04A1 (size: 0x1)

}; // Size: 0x4B0

class UGizmoCircleComponent : public UGizmoBaseComponent
{
    FVector Normal;                                                                   // 0x0470 (size: 0xC)
    float Radius;                                                                     // 0x047C (size: 0x4)
    float Thickness;                                                                  // 0x0480 (size: 0x4)
    int32 NumSides;                                                                   // 0x0484 (size: 0x4)
    bool bViewAligned;                                                                // 0x0488 (size: 0x1)
    bool bOnlyAllowFrontFacingHits;                                                   // 0x0489 (size: 0x1)

}; // Size: 0x490

class UGizmoComponentAxisSource : public UObject
{
    class USceneComponent* Component;                                                 // 0x0030 (size: 0x8)
    int32 AxisIndex;                                                                  // 0x0038 (size: 0x4)
    bool bLocalAxes;                                                                  // 0x003C (size: 0x1)

}; // Size: 0x40

class UGizmoComponentHitTarget : public UObject
{
    class UPrimitiveComponent* Component;                                             // 0x0030 (size: 0x8)

}; // Size: 0x80

class UGizmoComponentWorldTransformSource : public UGizmoBaseTransformSource
{
    class USceneComponent* Component;                                                 // 0x0048 (size: 0x8)
    bool bModifyComponentOnTransform;                                                 // 0x0050 (size: 0x1)

}; // Size: 0x58

class UGizmoConstantAxisSource : public UObject
{
    FVector Origin;                                                                   // 0x0030 (size: 0xC)
    FVector Direction;                                                                // 0x003C (size: 0xC)

}; // Size: 0x48

class UGizmoConstantFrameAxisSource : public UObject
{
    FVector Origin;                                                                   // 0x0030 (size: 0xC)
    FVector Direction;                                                                // 0x003C (size: 0xC)
    FVector TangentX;                                                                 // 0x0048 (size: 0xC)
    FVector TangentY;                                                                 // 0x0054 (size: 0xC)

}; // Size: 0x60

class UGizmoLambdaHitTarget : public UObject
{
}; // Size: 0xB0

class UGizmoLambdaStateTarget : public UObject
{
}; // Size: 0xB0

class UGizmoLineHandleComponent : public UGizmoBaseComponent
{
    FVector Normal;                                                                   // 0x0470 (size: 0xC)
    float HandleSize;                                                                 // 0x047C (size: 0x4)
    float Thickness;                                                                  // 0x0480 (size: 0x4)
    FVector Direction;                                                                // 0x0484 (size: 0xC)
    float Length;                                                                     // 0x0490 (size: 0x4)
    bool bImageScale;                                                                 // 0x0494 (size: 0x1)

}; // Size: 0x4A0

class UGizmoLocalFloatParameterSource : public UGizmoBaseFloatParameterSource
{
    float Value;                                                                      // 0x0048 (size: 0x4)
    FGizmoFloatParameterChange LastChange;                                            // 0x004C (size: 0x8)

}; // Size: 0x58

class UGizmoLocalVec2ParameterSource : public UGizmoBaseVec2ParameterSource
{
    FVector2D Value;                                                                  // 0x0048 (size: 0x8)
    FGizmoVec2ParameterChange LastChange;                                             // 0x0050 (size: 0x10)

}; // Size: 0x60

class UGizmoNilStateTarget : public UObject
{
}; // Size: 0x30

class UGizmoObjectModifyStateTarget : public UObject
{
}; // Size: 0x58

class UGizmoPlaneScaleParameterSource : public UGizmoBaseVec2ParameterSource
{
    TScriptInterface<class IGizmoAxisSource> AxisSource;                              // 0x0090 (size: 0x10)
    TScriptInterface<class IGizmoTransformSource> TransformSource;                    // 0x00A0 (size: 0x10)
    float ScaleMultiplier;                                                            // 0x00B0 (size: 0x4)
    FVector2D Parameter;                                                              // 0x00B4 (size: 0x8)
    FGizmoVec2ParameterChange LastChange;                                             // 0x00BC (size: 0x10)
    FVector CurScaleOrigin;                                                           // 0x00CC (size: 0xC)
    FVector CurScaleNormal;                                                           // 0x00D8 (size: 0xC)
    FVector CurScaleAxisX;                                                            // 0x00E4 (size: 0xC)
    FVector CurScaleAxisY;                                                            // 0x00F0 (size: 0xC)
    FTransform InitialTransform;                                                      // 0x0100 (size: 0x30)

}; // Size: 0x130

class UGizmoPlaneTranslationParameterSource : public UGizmoBaseVec2ParameterSource
{
    TScriptInterface<class IGizmoAxisSource> AxisSource;                              // 0x0090 (size: 0x10)
    TScriptInterface<class IGizmoTransformSource> TransformSource;                    // 0x00A0 (size: 0x10)
    FVector2D Parameter;                                                              // 0x00B0 (size: 0x8)
    FGizmoVec2ParameterChange LastChange;                                             // 0x00B8 (size: 0x10)
    FVector CurTranslationOrigin;                                                     // 0x00C8 (size: 0xC)
    FVector CurTranslationNormal;                                                     // 0x00D4 (size: 0xC)
    FVector CurTranslationAxisX;                                                      // 0x00E0 (size: 0xC)
    FVector CurTranslationAxisY;                                                      // 0x00EC (size: 0xC)
    FTransform InitialTransform;                                                      // 0x0100 (size: 0x30)

}; // Size: 0x130

class UGizmoRectangleComponent : public UGizmoBaseComponent
{
    FVector DirectionX;                                                               // 0x0470 (size: 0xC)
    FVector DirectionY;                                                               // 0x047C (size: 0xC)
    float OffsetX;                                                                    // 0x0488 (size: 0x4)
    float OffsetY;                                                                    // 0x048C (size: 0x4)
    float LengthX;                                                                    // 0x0490 (size: 0x4)
    float LengthY;                                                                    // 0x0494 (size: 0x4)
    float Thickness;                                                                  // 0x0498 (size: 0x4)
    uint8 SegmentFlags;                                                               // 0x049C (size: 0x1)

}; // Size: 0x4A0

class UGizmoScaledTransformSource : public UGizmoBaseTransformSource
{
    TScriptInterface<class IGizmoTransformSource> ChildTransformSource;               // 0x0048 (size: 0x10)

}; // Size: 0xE0

class UGizmoTransformChangeStateTarget : public UObject
{
    TScriptInterface<class IToolContextTransactionProvider> TransactionManager;       // 0x0050 (size: 0x10)

}; // Size: 0xE0

class UGizmoTransformProxyTransformSource : public UGizmoBaseTransformSource
{
    class UTransformProxy* Proxy;                                                     // 0x0048 (size: 0x8)

}; // Size: 0x50

class UGizmoUniformScaleParameterSource : public UGizmoBaseVec2ParameterSource
{
    TScriptInterface<class IGizmoAxisSource> AxisSource;                              // 0x0048 (size: 0x10)
    TScriptInterface<class IGizmoTransformSource> TransformSource;                    // 0x0058 (size: 0x10)
    float ScaleMultiplier;                                                            // 0x0068 (size: 0x4)
    FVector2D Parameter;                                                              // 0x006C (size: 0x8)
    FGizmoVec2ParameterChange LastChange;                                             // 0x0074 (size: 0x10)
    FVector CurScaleOrigin;                                                           // 0x0084 (size: 0xC)
    FVector CurScaleNormal;                                                           // 0x0090 (size: 0xC)
    FVector CurScaleAxisX;                                                            // 0x009C (size: 0xC)
    FVector CurScaleAxisY;                                                            // 0x00A8 (size: 0xC)
    FTransform InitialTransform;                                                      // 0x00C0 (size: 0x30)

}; // Size: 0xF0

class UGizmoWorldAxisSource : public UObject
{
    FVector Origin;                                                                   // 0x0030 (size: 0xC)
    int32 AxisIndex;                                                                  // 0x003C (size: 0x4)

}; // Size: 0x40

class UInputBehavior : public UObject
{
}; // Size: 0x30

class UInputBehaviorSet : public UObject
{
    TArray<FBehaviorInfo> Behaviors;                                                  // 0x0028 (size: 0x10)

}; // Size: 0x38

class UInputRouter : public UObject
{
    bool bAutoInvalidateOnHover;                                                      // 0x0028 (size: 0x1)
    bool bAutoInvalidateOnCapture;                                                    // 0x0029 (size: 0x1)
    class UInputBehaviorSet* ActiveInputBehaviors;                                    // 0x0038 (size: 0x8)

}; // Size: 0xB0

class UInteractionMechanic : public UObject
{
}; // Size: 0x30

class UInteractiveGizmo : public UObject
{
    class UInputBehaviorSet* InputBehaviors;                                          // 0x0030 (size: 0x8)

}; // Size: 0x38

class UInteractiveGizmoBuilder : public UObject
{
}; // Size: 0x28

class UInteractiveGizmoManager : public UObject
{
    TArray<FActiveGizmo> ActiveGizmos;                                                // 0x0030 (size: 0x10)
    TMap<class FString, class UInteractiveGizmoBuilder*> GizmoBuilders;               // 0x0058 (size: 0x50)

}; // Size: 0xB8

class UInteractiveTool : public UObject
{
    class UInputBehaviorSet* InputBehaviors;                                          // 0x0048 (size: 0x8)
    TArray<class UObject*> ToolPropertyObjects;                                       // 0x0050 (size: 0x10)

}; // Size: 0x80

class UInteractiveToolBuilder : public UObject
{
}; // Size: 0x28

class UInteractiveToolManager : public UObject
{
    class UInteractiveTool* ActiveLeftTool;                                           // 0x0030 (size: 0x8)
    class UInteractiveTool* ActiveRightTool;                                          // 0x0038 (size: 0x8)
    TMap<class FString, class UInteractiveToolBuilder*> ToolBuilders;                 // 0x0090 (size: 0x50)

}; // Size: 0x138

class UInteractiveToolPropertySet : public UObject
{
    class UInteractiveToolPropertySet* CachedProperties;                              // 0x0038 (size: 0x8)
    bool bIsPropertySetEnabled;                                                       // 0x0040 (size: 0x1)

}; // Size: 0x60

class UInteractiveToolsContext : public UObject
{
    class UInputRouter* InputRouter;                                                  // 0x0058 (size: 0x8)
    class UInteractiveToolManager* ToolManager;                                       // 0x0060 (size: 0x8)
    class UInteractiveGizmoManager* GizmoManager;                                     // 0x0068 (size: 0x8)
    TSoftClassPtr<UInteractiveToolManager> ToolManagerClass;                          // 0x0070 (size: 0x28)

}; // Size: 0x98

class UIntervalGizmo : public UInteractiveGizmo
{
    class UGizmoTransformChangeStateTarget* StateTarget;                              // 0x0038 (size: 0x8)
    class UTransformProxy* TransformProxy;                                            // 0x0050 (size: 0x8)
    TArray<class UPrimitiveComponent*> ActiveComponents;                              // 0x0058 (size: 0x10)
    TArray<class UInteractiveGizmo*> ActiveGizmos;                                    // 0x0068 (size: 0x10)
    class UGizmoComponentAxisSource* AxisYSource;                                     // 0x0090 (size: 0x8)
    class UGizmoComponentAxisSource* AxisZSource;                                     // 0x0098 (size: 0x8)

}; // Size: 0x130

class UIntervalGizmoBuilder : public UInteractiveGizmoBuilder
{
}; // Size: 0xC0

class UKeyAsModifierInputBehavior : public UInputBehavior
{
}; // Size: 0x110

class ULocalClickDragInputBehavior : public UClickDragInputBehavior
{
}; // Size: 0x280

class UMeshSelectionSet : public USelectionSet
{
    TArray<int32> Vertices;                                                           // 0x0040 (size: 0x10)
    TArray<int32> Edges;                                                              // 0x0050 (size: 0x10)
    TArray<int32> Faces;                                                              // 0x0060 (size: 0x10)
    TArray<int32> Groups;                                                             // 0x0070 (size: 0x10)

}; // Size: 0x80

class UMeshSurfacePointTool : public USingleSelectionTool
{
}; // Size: 0xC0

class UMeshSurfacePointToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x30

class UMouseHoverBehavior : public UInputBehavior
{
}; // Size: 0x98

class UMultiClickSequenceInputBehavior : public UAnyButtonInputBehavior
{
}; // Size: 0x130

class UMultiSelectionTool : public UInteractiveTool
{
}; // Size: 0x90

class UPlanePositionGizmo : public UInteractiveGizmo
{
    TScriptInterface<class IGizmoAxisSource> AxisSource;                              // 0x0048 (size: 0x10)
    TScriptInterface<class IGizmoVec2ParameterSource> ParameterSource;                // 0x0058 (size: 0x10)
    TScriptInterface<class IGizmoClickTarget> HitTarget;                              // 0x0068 (size: 0x10)
    TScriptInterface<class IGizmoStateTarget> StateTarget;                            // 0x0078 (size: 0x10)
    bool bEnableSignedAxis;                                                           // 0x0088 (size: 0x1)
    bool bFlipX;                                                                      // 0x0089 (size: 0x1)
    bool bFlipY;                                                                      // 0x008A (size: 0x1)
    bool bInInteraction;                                                              // 0x008B (size: 0x1)
    FVector InteractionOrigin;                                                        // 0x008C (size: 0xC)
    FVector InteractionNormal;                                                        // 0x0098 (size: 0xC)
    FVector InteractionAxisX;                                                         // 0x00A4 (size: 0xC)
    FVector InteractionAxisY;                                                         // 0x00B0 (size: 0xC)
    FVector InteractionStartPoint;                                                    // 0x00BC (size: 0xC)
    FVector InteractionCurPoint;                                                      // 0x00C8 (size: 0xC)
    FVector2D InteractionStartParameter;                                              // 0x00D4 (size: 0x8)
    FVector2D InteractionCurParameter;                                                // 0x00DC (size: 0x8)
    FVector2D ParameterSigns;                                                         // 0x00E4 (size: 0x8)

}; // Size: 0x100

class UPlanePositionGizmoBuilder : public UInteractiveGizmoBuilder
{
}; // Size: 0x28

class USelectionSet : public UObject
{
}; // Size: 0x40

class USingleClickInputBehavior : public UAnyButtonInputBehavior
{
    bool HitTestOnRelease;                                                            // 0x00C0 (size: 0x1)

}; // Size: 0x130

class USingleClickTool : public UInteractiveTool
{
}; // Size: 0x88

class USingleClickToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x28

class USingleSelectionTool : public UInteractiveTool
{
}; // Size: 0x88

class UTransformGizmo : public UInteractiveGizmo
{
    class UTransformProxy* ActiveTarget;                                              // 0x0040 (size: 0x8)
    bool bSnapToWorldGrid;                                                            // 0x0048 (size: 0x1)
    bool bGridSizeIsExplicit;                                                         // 0x0049 (size: 0x1)
    FVector ExplicitGridSize;                                                         // 0x004C (size: 0xC)
    bool bRotationGridSizeIsExplicit;                                                 // 0x0058 (size: 0x1)
    FRotator ExplicitRotationGridSize;                                                // 0x005C (size: 0xC)
    bool bSnapToWorldRotGrid;                                                         // 0x0068 (size: 0x1)
    bool bUseContextCoordinateSystem;                                                 // 0x0069 (size: 0x1)
    EToolContextCoordinateSystem CurrentCoordinateSystem;                             // 0x006C (size: 0x4)
    TArray<class UPrimitiveComponent*> ActiveComponents;                              // 0x0100 (size: 0x10)
    TArray<class UPrimitiveComponent*> NonuniformScaleComponents;                     // 0x0110 (size: 0x10)
    TArray<class UInteractiveGizmo*> ActiveGizmos;                                    // 0x0120 (size: 0x10)
    class UGizmoConstantFrameAxisSource* CameraAxisSource;                            // 0x0140 (size: 0x8)
    class UGizmoComponentAxisSource* AxisXSource;                                     // 0x0148 (size: 0x8)
    class UGizmoComponentAxisSource* AxisYSource;                                     // 0x0150 (size: 0x8)
    class UGizmoComponentAxisSource* AxisZSource;                                     // 0x0158 (size: 0x8)
    class UGizmoComponentAxisSource* UnitAxisXSource;                                 // 0x0160 (size: 0x8)
    class UGizmoComponentAxisSource* UnitAxisYSource;                                 // 0x0168 (size: 0x8)
    class UGizmoComponentAxisSource* UnitAxisZSource;                                 // 0x0170 (size: 0x8)
    class UGizmoTransformChangeStateTarget* StateTarget;                              // 0x0178 (size: 0x8)
    class UGizmoScaledTransformSource* ScaledTransformSource;                         // 0x0180 (size: 0x8)

}; // Size: 0x1A0

class UTransformGizmoBuilder : public UInteractiveGizmoBuilder
{
}; // Size: 0xC0

class UTransformProxy : public UObject
{
    bool bRotatePerObject;                                                            // 0x0070 (size: 0x1)
    bool bSetPivotMode;                                                               // 0x0071 (size: 0x1)
    FTransform SharedTransform;                                                       // 0x0090 (size: 0x30)
    FTransform InitialSharedTransform;                                                // 0x00C0 (size: 0x30)

}; // Size: 0xF0

#endif
