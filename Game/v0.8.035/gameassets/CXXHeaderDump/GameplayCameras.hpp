#ifndef UE4SS_SDK_GameplayCameras_HPP
#define UE4SS_SDK_GameplayCameras_HPP

#include "GameplayCameras_enums.hpp"

struct FBlueprintCameraDirectorActivateParams
{
    class UObject* EvaluationContextOwner;                                            // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FBlueprintCameraDirectorDeactivateParams
{
    class UObject* EvaluationContextOwner;                                            // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FBlueprintCameraDirectorEvaluationParams
{
    float DeltaTime;                                                                  // 0x0000 (size: 0x4)
    class UObject* EvaluationContextOwner;                                            // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FBlueprintCameraPose
{
    FVector Location;                                                                 // 0x0000 (size: 0x18)
    FRotator Rotation;                                                                // 0x0018 (size: 0x18)
    double TargetDistance;                                                            // 0x0030 (size: 0x8)
    float FieldOfView;                                                                // 0x0038 (size: 0x4)
    float FocalLength;                                                                // 0x003C (size: 0x4)
    float Aperture;                                                                   // 0x0040 (size: 0x4)
    float ShutterSpeed;                                                               // 0x0044 (size: 0x4)
    float FocusDistance;                                                              // 0x0048 (size: 0x4)
    float SensorWidth;                                                                // 0x004C (size: 0x4)
    float SensorHeight;                                                               // 0x0050 (size: 0x4)
    float ISO;                                                                        // 0x0054 (size: 0x4)
    float SqueezeFactor;                                                              // 0x0058 (size: 0x4)
    int32 DiaphragmBladeCount;                                                        // 0x005C (size: 0x4)
    float NearClippingPlane;                                                          // 0x0060 (size: 0x4)
    float FarClippingPlane;                                                           // 0x0064 (size: 0x4)
    float PhysicalCameraBlendWeight;                                                  // 0x0068 (size: 0x4)
    bool EnablePhysicalCamera;                                                        // 0x006C (size: 0x1)
    bool ConstrainAspectRatio;                                                        // 0x006D (size: 0x1)
    bool OverrideAspectRatioAxisConstraint;                                           // 0x006E (size: 0x1)
    TEnumAsByte<EAspectRatioAxisConstraint> AspectRatioAxisConstraint;                // 0x006F (size: 0x1)

}; // Size: 0x70

struct FBlueprintCameraVariableTable
{
}; // Size: 0x18

struct FBooleanCameraParameter
{
    bool Value;                                                                       // 0x0000 (size: 0x1)
    class UBooleanCameraVariable* Variable;                                           // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FBooleanCameraRigParameterOverride : public FCameraRigParameterOverrideBase
{
    FBooleanCameraParameter Value;                                                    // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FBooleanCameraVariableReference
{
    class UBooleanCameraVariable* Variable;                                           // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FCameraDirectorStateTreeEvaluationData
{
    TArray<class UCameraRigAsset*> ActiveCameraRigs;                                  // 0x0000 (size: 0x10)
    TArray<class UCameraRigProxyAsset*> ActiveCameraRigProxies;                       // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FCameraFramingZone
{
    FDoubleCameraParameter LeftMargin;                                                // 0x0000 (size: 0x10)
    FDoubleCameraParameter TopMargin;                                                 // 0x0010 (size: 0x10)
    FDoubleCameraParameter RightMargin;                                               // 0x0020 (size: 0x10)
    FDoubleCameraParameter BottomMargin;                                              // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FCameraNodeEvaluatorAllocationInfo
{
    int16 TotalSizeof;                                                                // 0x0000 (size: 0x2)
    int16 MaxAlignof;                                                                 // 0x0002 (size: 0x2)

}; // Size: 0x4

struct FCameraParameterClamping
{
    double MinValue;                                                                  // 0x0000 (size: 0x8)
    double MaxValue;                                                                  // 0x0008 (size: 0x8)
    bool bClampMin;                                                                   // 0x0010 (size: 0x1)
    bool bClampMax;                                                                   // 0x0011 (size: 0x1)

}; // Size: 0x18

struct FCameraParameterNormalization
{
    double MaxValue;                                                                  // 0x0000 (size: 0x8)
    bool bNormalize;                                                                  // 0x0008 (size: 0x1)

}; // Size: 0x10

struct FCameraPose
{
    FVector3d Location;                                                               // 0x0000 (size: 0x18)
    FRotator3d Rotation;                                                              // 0x0018 (size: 0x18)
    double TargetDistance;                                                            // 0x0030 (size: 0x8)
    float FieldOfView;                                                                // 0x0038 (size: 0x4)
    float FocalLength;                                                                // 0x003C (size: 0x4)
    float Aperture;                                                                   // 0x0040 (size: 0x4)
    float ShutterSpeed;                                                               // 0x0044 (size: 0x4)
    float FocusDistance;                                                              // 0x0048 (size: 0x4)
    float SensorWidth;                                                                // 0x004C (size: 0x4)
    float SensorHeight;                                                               // 0x0050 (size: 0x4)
    float ISO;                                                                        // 0x0054 (size: 0x4)
    float SqueezeFactor;                                                              // 0x0058 (size: 0x4)
    int32 DiaphragmBladeCount;                                                        // 0x005C (size: 0x4)
    float NearClippingPlane;                                                          // 0x0060 (size: 0x4)
    float FarClippingPlane;                                                           // 0x0064 (size: 0x4)
    float PhysicalCameraBlendWeight;                                                  // 0x0068 (size: 0x4)
    bool EnablePhysicalCamera;                                                        // 0x006C (size: 0x1)
    bool ConstrainAspectRatio;                                                        // 0x006D (size: 0x1)
    bool OverrideAspectRatioAxisConstraint;                                           // 0x006E (size: 0x1)
    TEnumAsByte<EAspectRatioAxisConstraint> AspectRatioAxisConstraint;                // 0x006F (size: 0x1)

}; // Size: 0x88

struct FCameraRigAllocationInfo
{
    FCameraNodeEvaluatorAllocationInfo EvaluatorInfo;                                 // 0x0000 (size: 0x4)
    FCameraVariableTableAllocationInfo VariableTableInfo;                             // 0x0008 (size: 0x20)

}; // Size: 0x28

struct FCameraRigAssetReference
{
    class UCameraRigAsset* CameraRig;                                                 // 0x0000 (size: 0x8)
    FCameraRigParameterOverrides ParameterOverrides;                                  // 0x0008 (size: 0xE0)

}; // Size: 0xE8

struct FCameraRigInputSlotParameters
{
    bool bIsAccumulated;                                                              // 0x0000 (size: 0x1)
    bool bIsPreBlended;                                                               // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FCameraRigInterface
{
    FString DisplayName;                                                              // 0x0000 (size: 0x10)
    TArray<class UCameraRigInterfaceParameter*> InterfaceParameters;                  // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FCameraRigParameterOverrideBase
{
    FGuid InterfaceParameterGuid;                                                     // 0x0000 (size: 0x10)
    FGuid PrivateVariableGuid;                                                        // 0x0010 (size: 0x10)
    FString InterfaceParameterName;                                                   // 0x0020 (size: 0x10)
    bool bInvalid;                                                                    // 0x0030 (size: 0x1)

}; // Size: 0x38

struct FCameraRigParameterOverrides
{
    TArray<FBooleanCameraRigParameterOverride> BooleanOverrides;                      // 0x0000 (size: 0x10)
    TArray<FInteger32CameraRigParameterOverride> Integer32Overrides;                  // 0x0010 (size: 0x10)
    TArray<FFloatCameraRigParameterOverride> FloatOverrides;                          // 0x0020 (size: 0x10)
    TArray<FDoubleCameraRigParameterOverride> DoubleOverrides;                        // 0x0030 (size: 0x10)
    TArray<FVector2fCameraRigParameterOverride> Vector2fOverrides;                    // 0x0040 (size: 0x10)
    TArray<FVector2dCameraRigParameterOverride> Vector2dOverrides;                    // 0x0050 (size: 0x10)
    TArray<FVector3fCameraRigParameterOverride> Vector3fOverrides;                    // 0x0060 (size: 0x10)
    TArray<FVector3dCameraRigParameterOverride> Vector3dOverrides;                    // 0x0070 (size: 0x10)
    TArray<FVector4fCameraRigParameterOverride> Vector4fOverrides;                    // 0x0080 (size: 0x10)
    TArray<FVector4dCameraRigParameterOverride> Vector4dOverrides;                    // 0x0090 (size: 0x10)
    TArray<FRotator3fCameraRigParameterOverride> Rotator3fOverrides;                  // 0x00A0 (size: 0x10)
    TArray<FRotator3dCameraRigParameterOverride> Rotator3dOverrides;                  // 0x00B0 (size: 0x10)
    TArray<FTransform3fCameraRigParameterOverride> Transform3fOverrides;              // 0x00C0 (size: 0x10)
    TArray<FTransform3dCameraRigParameterOverride> Transform3dOverrides;              // 0x00D0 (size: 0x10)

}; // Size: 0xE0

struct FCameraRigProxyTableEntry
{
    class UCameraRigProxyAsset* CameraRigProxy;                                       // 0x0000 (size: 0x8)
    class UCameraRigAsset* CameraRig;                                                 // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FCameraVariableDefinition
{
    FCameraVariableID VariableID;                                                     // 0x0000 (size: 0x4)
    ECameraVariableType VariableType;                                                 // 0x0004 (size: 0x4)
    bool bIsPrivate;                                                                  // 0x0008 (size: 0x1)
    bool bIsInput;                                                                    // 0x0009 (size: 0x1)

}; // Size: 0xC

struct FCameraVariableID
{
    uint32 Value;                                                                     // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FCameraVariableTableAllocationInfo
{
    TArray<FCameraVariableDefinition> VariableDefinitions;                            // 0x0000 (size: 0x10)
    TArray<class UCameraVariableAsset*> AutoResetVariables;                           // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FDoubleCameraParameter
{
    double Value;                                                                     // 0x0000 (size: 0x8)
    class UDoubleCameraVariable* Variable;                                            // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FDoubleCameraRigParameterOverride : public FCameraRigParameterOverrideBase
{
    FDoubleCameraParameter Value;                                                     // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FDoubleCameraVariableReference
{
    class UDoubleCameraVariable* Variable;                                            // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FFloatCameraParameter
{
    float Value;                                                                      // 0x0000 (size: 0x4)
    class UFloatCameraVariable* Variable;                                             // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FFloatCameraRigParameterOverride : public FCameraRigParameterOverrideBase
{
    FFloatCameraParameter Value;                                                      // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FFloatCameraVariableReference
{
    class UFloatCameraVariable* Variable;                                             // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FGameplayCamerasActivateCameraRigTask : public FGameplayCamerasStateTreeTask
{
    bool bRunOnce;                                                                    // 0x002E (size: 0x1)

}; // Size: 0x30

struct FGameplayCamerasActivateCameraRigTaskInstanceData
{
    class UCameraRigAsset* CameraRig;                                                 // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FGameplayCamerasActivateCameraRigViaProxyTask : public FGameplayCamerasStateTreeTask
{
    bool bRunOnce;                                                                    // 0x002E (size: 0x1)

}; // Size: 0x30

struct FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData
{
    class UCameraRigProxyAsset* CameraRigProxy;                                       // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FGameplayCamerasStateTreeCondition : public FStateTreeConditionBase
{
}; // Size: 0x28

struct FGameplayCamerasStateTreeTask : public FStateTreeTaskBase
{
}; // Size: 0x28

struct FInteger32CameraParameter
{
    int32 Value;                                                                      // 0x0000 (size: 0x4)
    class UInteger32CameraVariable* Variable;                                         // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FInteger32CameraRigParameterOverride : public FCameraRigParameterOverrideBase
{
    FInteger32CameraParameter Value;                                                  // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FInteger32CameraVariableReference
{
    class UInteger32CameraVariable* Variable;                                         // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FRotator3dCameraParameter
{
    FRotator3d Value;                                                                 // 0x0000 (size: 0x18)
    class URotator3dCameraVariable* Variable;                                         // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FRotator3dCameraRigParameterOverride : public FCameraRigParameterOverrideBase
{
    FRotator3dCameraParameter Value;                                                  // 0x0038 (size: 0x20)

}; // Size: 0x58

struct FRotator3dCameraVariableReference
{
    class URotator3dCameraVariable* Variable;                                         // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FRotator3fCameraParameter
{
    FRotator3f Value;                                                                 // 0x0000 (size: 0xC)
    class URotator3fCameraVariable* Variable;                                         // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FRotator3fCameraRigParameterOverride : public FCameraRigParameterOverrideBase
{
    FRotator3fCameraParameter Value;                                                  // 0x0038 (size: 0x18)

}; // Size: 0x50

struct FRotator3fCameraVariableReference
{
    class URotator3fCameraVariable* Variable;                                         // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FTransform3dCameraParameter
{
    FTransform3d Value;                                                               // 0x0000 (size: 0x60)
    class UTransform3dCameraVariable* Variable;                                       // 0x0060 (size: 0x8)

}; // Size: 0x70

struct FTransform3dCameraRigParameterOverride : public FCameraRigParameterOverrideBase
{
    FTransform3dCameraParameter Value;                                                // 0x0040 (size: 0x70)

}; // Size: 0xB0

struct FTransform3dCameraVariableReference
{
    class UTransform3dCameraVariable* Variable;                                       // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FTransform3fCameraParameter
{
    FTransform3f Value;                                                               // 0x0000 (size: 0x30)
    class UTransform3fCameraVariable* Variable;                                       // 0x0030 (size: 0x8)

}; // Size: 0x40

struct FTransform3fCameraRigParameterOverride : public FCameraRigParameterOverrideBase
{
    FTransform3fCameraParameter Value;                                                // 0x0040 (size: 0x40)

}; // Size: 0x80

struct FTransform3fCameraVariableReference
{
    class UTransform3fCameraVariable* Variable;                                       // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FVector2dCameraParameter
{
    FVector2D Value;                                                                  // 0x0000 (size: 0x10)
    class UVector2dCameraVariable* Variable;                                          // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FVector2dCameraRigParameterOverride : public FCameraRigParameterOverrideBase
{
    FVector2dCameraParameter Value;                                                   // 0x0038 (size: 0x18)

}; // Size: 0x50

struct FVector2dCameraVariableReference
{
    class UVector2dCameraVariable* Variable;                                          // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FVector2fCameraParameter
{
    FVector2f Value;                                                                  // 0x0000 (size: 0x8)
    class UVector2fCameraVariable* Variable;                                          // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FVector2fCameraRigParameterOverride : public FCameraRigParameterOverrideBase
{
    FVector2fCameraParameter Value;                                                   // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FVector2fCameraVariableReference
{
    class UVector2fCameraVariable* Variable;                                          // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FVector3dCameraParameter
{
    FVector3d Value;                                                                  // 0x0000 (size: 0x18)
    class UVector3dCameraVariable* Variable;                                          // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FVector3dCameraRigParameterOverride : public FCameraRigParameterOverrideBase
{
    FVector3dCameraParameter Value;                                                   // 0x0038 (size: 0x20)

}; // Size: 0x58

struct FVector3dCameraVariableReference
{
    class UVector3dCameraVariable* Variable;                                          // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FVector3fCameraParameter
{
    FVector3f Value;                                                                  // 0x0000 (size: 0xC)
    class UVector3fCameraVariable* Variable;                                          // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FVector3fCameraRigParameterOverride : public FCameraRigParameterOverrideBase
{
    FVector3fCameraParameter Value;                                                   // 0x0038 (size: 0x18)

}; // Size: 0x50

struct FVector3fCameraVariableReference
{
    class UVector3fCameraVariable* Variable;                                          // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FVector4dCameraParameter
{
    FVector4d Value;                                                                  // 0x0000 (size: 0x20)
    class UVector4dCameraVariable* Variable;                                          // 0x0020 (size: 0x8)

}; // Size: 0x30

struct FVector4dCameraRigParameterOverride : public FCameraRigParameterOverrideBase
{
    FVector4dCameraParameter Value;                                                   // 0x0040 (size: 0x30)

}; // Size: 0x70

struct FVector4dCameraVariableReference
{
    class UVector4dCameraVariable* Variable;                                          // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FVector4fCameraParameter
{
    FVector4f Value;                                                                  // 0x0000 (size: 0x10)
    class UVector4fCameraVariable* Variable;                                          // 0x0010 (size: 0x8)

}; // Size: 0x20

struct FVector4fCameraRigParameterOverride : public FCameraRigParameterOverrideBase
{
    FVector4fCameraParameter Value;                                                   // 0x0040 (size: 0x20)

}; // Size: 0x60

struct FVector4fCameraVariableReference
{
    class UVector4fCameraVariable* Variable;                                          // 0x0000 (size: 0x8)

}; // Size: 0x8

class AGameplayCameraActor : public AActor
{
    class UGameplayCameraComponent* CameraComponent;                                  // 0x02A8 (size: 0x8)

    class UGameplayCameraComponent* GetCameraComponent();
}; // Size: 0x2B0

class AGameplayCameraSystemActor : public AActor
{
    class UGameplayCameraSystemComponent* CameraSystemComponent;                      // 0x02A8 (size: 0x8)

    class UGameplayCameraSystemComponent* GetCameraSystemComponent();
    class AGameplayCameraSystemActor* GetAutoSpawnedCameraSystemActor(class APlayerController* PlayerController, bool bForceSpawn);
    void AutoManageActiveViewTarget(class APlayerController* PlayerController);
}; // Size: 0x2B0

class IHasCameraBuildStatus : public IInterface
{
}; // Size: 0x28

class IObjectTreeGraphObject : public IInterface
{
}; // Size: 0x28

class IObjectTreeGraphRootObject : public IInterface
{
}; // Size: 0x28

class UAccelerationDecelerationValueInterpolator : public UCameraValueInterpolator
{
    float Acceleration;                                                               // 0x0028 (size: 0x4)
    float MaxSpeed;                                                                   // 0x002C (size: 0x4)
    float Deceleration;                                                               // 0x0030 (size: 0x4)

}; // Size: 0x38

class UActivateCameraRigFunctions : public UBlueprintFunctionLibrary
{

    void ActivatePersistentVisualCameraRig(class UObject* WorldContextObject, class APlayerController* PlayerController, class UCameraRigAsset* CameraRig);
    void ActivatePersistentGlobalCameraRig(class UObject* WorldContextObject, class APlayerController* PlayerController, class UCameraRigAsset* CameraRig);
    void ActivatePersistentBaseCameraRig(class UObject* WorldContextObject, class APlayerController* PlayerController, class UCameraRigAsset* CameraRig);
}; // Size: 0x28

class UArrayCameraNode : public UCameraNode
{
    TArray<class UCameraNode*> Children;                                              // 0x0038 (size: 0x10)

}; // Size: 0x48

class UAttachToPlayerPawnCameraNode : public UCameraNode
{
    FBooleanCameraParameter AttachToLocation;                                         // 0x0038 (size: 0x10)
    FBooleanCameraParameter AttachToRotation;                                         // 0x0048 (size: 0x10)

}; // Size: 0x58

class UAutoRotateInput2DCameraNode : public UInput2DCameraNode
{
    ECameraAutoRotateDirection Direction;                                             // 0x0038 (size: 0x4)
    FFloatCameraParameter WaitTime;                                                   // 0x0040 (size: 0x10)
    FFloatCameraParameter DeactivationThreshold;                                      // 0x0050 (size: 0x10)
    class UCameraValueInterpolator* Interpolator;                                     // 0x0060 (size: 0x8)
    FBooleanCameraParameter FreezeControlRotation;                                    // 0x0068 (size: 0x10)
    FBooleanCameraParameter EnableAutoRotate;                                         // 0x0078 (size: 0x10)
    FBooleanCameraParameter AutoRotateYaw;                                            // 0x0088 (size: 0x10)
    FBooleanCameraParameter AutoRotatePitch;                                          // 0x0098 (size: 0x10)
    class UInput2DCameraNode* InputNode;                                              // 0x00A8 (size: 0x8)

}; // Size: 0xB0

class UBaseFramingCameraNode : public UCameraNode
{
    FVector3dCameraVariableReference TargetLocation;                                  // 0x0038 (size: 0x8)
    FDoubleCameraParameter HorizontalFraming;                                         // 0x0040 (size: 0x10)
    FDoubleCameraParameter VerticalFraming;                                           // 0x0050 (size: 0x10)
    FFloatCameraParameter ReframeDampingFactor;                                       // 0x0060 (size: 0x10)
    FFloatCameraParameter LowReframeDampingFactor;                                    // 0x0070 (size: 0x10)
    FFloatCameraParameter ReframeUnlockRadius;                                        // 0x0080 (size: 0x10)
    FCameraFramingZone DeadZone;                                                      // 0x0090 (size: 0x40)
    FCameraFramingZone SoftZone;                                                      // 0x00D0 (size: 0x40)

}; // Size: 0x110

class UBlendCameraNode : public UCameraNode
{
}; // Size: 0x38

class UBlendStackCameraNode : public UCameraNode
{
    ECameraBlendStackType BlendStackType;                                             // 0x0038 (size: 0x4)

}; // Size: 0x40

class UBlendStackRootCameraNode : public UCameraNode
{
    class UBlendCameraNode* Blend;                                                    // 0x0038 (size: 0x8)
    class UCameraNode* RootNode;                                                      // 0x0040 (size: 0x8)

}; // Size: 0x48

class UBlueprintCameraDirector : public UCameraDirector
{
    TSubclassOf<class UBlueprintCameraDirectorEvaluator> CameraDirectorEvaluatorClass; // 0x0028 (size: 0x8)
    class UCameraRigProxyTable* CameraRigProxyTable;                                  // 0x0030 (size: 0x8)

}; // Size: 0x38

class UBlueprintCameraDirectorEvaluator : public UObject
{

    void SetInitialContextCameraPose(const FBlueprintCameraPose& InCameraPose);
    void RunCameraDirector(const FBlueprintCameraDirectorEvaluationParams& Params);
    FBlueprintCameraVariableTable GetInitialContextVariableTable();
    FBlueprintCameraPose GetInitialContextCameraPose();
    class UCameraRigAsset* GetCameraRig(class UCameraRigAsset* CameraRig);
    class AActor* FindEvaluationContextOwnerActor(TSubclassOf<class AActor> ActorClass);
    void DeactivatePersistentVisualCameraRig(class UCameraRigAsset* CameraRigPrefab);
    void DeactivatePersistentGlobalCameraRig(class UCameraRigAsset* CameraRigPrefab);
    void DeactivatePersistentBaseCameraRig(class UCameraRigAsset* CameraRigPrefab);
    void DeactivateCameraDirector(const FBlueprintCameraDirectorDeactivateParams& Params);
    void ActivatePersistentVisualCameraRig(class UCameraRigAsset* CameraRigPrefab);
    void ActivatePersistentGlobalCameraRig(class UCameraRigAsset* CameraRigPrefab);
    void ActivatePersistentBaseCameraRig(class UCameraRigAsset* CameraRigPrefab);
    void ActivateCameraRigViaProxy(class UCameraRigProxyAsset* CameraRigProxy);
    void ActivateCameraRigPrefab(class UCameraRigAsset* CameraRig);
    void ActivateCameraRig(class UCameraRigAsset* CameraRig);
    void ActivateCameraDirector(const FBlueprintCameraDirectorActivateParams& Params);
}; // Size: 0x88

class UBlueprintCameraNode : public UCameraNode
{
    TSubclassOf<class UBlueprintCameraNodeEvaluator> CameraNodeEvaluatorClass;        // 0x0038 (size: 0x8)

}; // Size: 0x40

class UBlueprintCameraNodeEvaluator : public UObject
{
    bool bIsFirstFrame;                                                               // 0x0028 (size: 0x1)
    class UObject* EvaluationContextOwner;                                            // 0x0030 (size: 0x8)
    FBlueprintCameraPose CameraPose;                                                  // 0x0038 (size: 0x70)
    FBlueprintCameraVariableTable VariableTable;                                      // 0x00A8 (size: 0x18)

    void TickCameraNode(float DeltaTime);
    class AActor* FindEvaluationContextOwnerActor(TSubclassOf<class AActor> ActorClass);
}; // Size: 0xD8

class UBlueprintCameraPoseFunctionLibrary : public UBlueprintFunctionLibrary
{

    FBlueprintCameraPose SetTransform(const FBlueprintCameraPose& CameraPose, const FTransform& Transform);
    FBlueprintCameraPose SetTargetDistance(const FBlueprintCameraPose& CameraPose, double TargetDistance);
    FBlueprintCameraPose SetRotation(const FBlueprintCameraPose& CameraPose, const FRotator& Rotation);
    FBlueprintCameraPose SetLocation(const FBlueprintCameraPose& CameraPose, const FVector& Location);
    FBlueprintCameraPose SetFocalLength(const FBlueprintCameraPose& CameraPose, float FocalLength);
    FBlueprintCameraPose SetFieldOfView(const FBlueprintCameraPose& CameraPose, float FieldOfView);
    FBlueprintCameraPose MakeCameraPoseFromCineCameraComponent(const class UCineCameraComponent* CameraComponent);
    FBlueprintCameraPose MakeCameraPoseFromCameraComponent(const class UCameraComponent* CameraComponent);
    FTransform GetTransform(const FBlueprintCameraPose& CameraPose);
    double GetTargetDistance(const FBlueprintCameraPose& CameraPose);
    FVector GetTargetAtDistance(const FBlueprintCameraPose& CameraPose, double TargetDistance);
    FVector GetTarget(const FBlueprintCameraPose& CameraPose);
    double GetSensorAspectRatio(const FBlueprintCameraPose& CameraPose);
    FRotator GetRotation(const FBlueprintCameraPose& CameraPose);
    FVector GetLocation(const FBlueprintCameraPose& CameraPose);
    double GetFocalLength(const FBlueprintCameraPose& CameraPose);
    double GetFieldOfView(const FBlueprintCameraPose& CameraPose);
    double GetEffectiveFieldOfView(const FBlueprintCameraPose& CameraPose);
    FRay GetAimRay(const FBlueprintCameraPose& CameraPose);
    FVector GetAimDir(const FBlueprintCameraPose& CameraPose);
}; // Size: 0x28

class UBlueprintCameraVariableTableFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetVector4CameraVariable(const FBlueprintCameraVariableTable& VariableTable, class UVector4dCameraVariable* Variable, const FVector4& Value);
    void SetVector3CameraVariable(const FBlueprintCameraVariableTable& VariableTable, class UVector3dCameraVariable* Variable, const FVector& Value);
    void SetVector2CameraVariable(const FBlueprintCameraVariableTable& VariableTable, class UVector2dCameraVariable* Variable, const FVector2D& Value);
    void SetTransformCameraVariable(const FBlueprintCameraVariableTable& VariableTable, class UTransform3dCameraVariable* Variable, const FTransform& Value);
    void SetRotatorCameraVariable(const FBlueprintCameraVariableTable& VariableTable, class URotator3dCameraVariable* Variable, const FRotator& Value);
    void SetInteger32CameraVariable(const FBlueprintCameraVariableTable& VariableTable, class UInteger32CameraVariable* Variable, int32 Value);
    void SetFloatCameraVariable(const FBlueprintCameraVariableTable& VariableTable, class UFloatCameraVariable* Variable, float Value);
    void SetDoubleCameraVariable(const FBlueprintCameraVariableTable& VariableTable, class UDoubleCameraVariable* Variable, double Value);
    void SetBooleanCameraVariable(const FBlueprintCameraVariableTable& VariableTable, class UBooleanCameraVariable* Variable, bool Value);
    FVector4 GetVector4CameraVariable(const FBlueprintCameraVariableTable& VariableTable, class UVector4dCameraVariable* Variable);
    FVector GetVector3CameraVariable(const FBlueprintCameraVariableTable& VariableTable, class UVector3dCameraVariable* Variable);
    FVector2D GetVector2CameraVariable(const FBlueprintCameraVariableTable& VariableTable, class UVector2dCameraVariable* Variable);
    FTransform GetTransformCameraVariable(const FBlueprintCameraVariableTable& VariableTable, class UTransform3dCameraVariable* Variable);
    FRotator GetRotatorCameraVariable(const FBlueprintCameraVariableTable& VariableTable, class URotator3dCameraVariable* Variable);
    int32 GetInteger32CameraVariable(const FBlueprintCameraVariableTable& VariableTable, class UInteger32CameraVariable* Variable);
    float GetFloatCameraVariable(const FBlueprintCameraVariableTable& VariableTable, class UFloatCameraVariable* Variable);
    double GetDoubleCameraVariable(const FBlueprintCameraVariableTable& VariableTable, class UDoubleCameraVariable* Variable);
    bool GetBooleanCameraVariable(const FBlueprintCameraVariableTable& VariableTable, class UBooleanCameraVariable* Variable);
}; // Size: 0x28

class UBooleanCameraVariable : public UCameraVariableAsset
{
    bool bDefaultValue;                                                               // 0x0040 (size: 0x1)

}; // Size: 0x48

class UBoomArmCameraNode : public UCameraNode
{
    FVector3dCameraParameter BoomOffset;                                              // 0x0038 (size: 0x20)
    class UCameraValueInterpolator* BoomLengthInterpolator;                           // 0x0058 (size: 0x8)
    FDoubleCameraParameter MaxForwardInterpolationFactor;                             // 0x0060 (size: 0x10)
    FDoubleCameraParameter MaxBackwardInterpolationFactor;                            // 0x0070 (size: 0x10)
    class UInput2DCameraNode* InputSlot;                                              // 0x0080 (size: 0x8)

}; // Size: 0x88

class UCameraAsset : public UObject
{
    class UCameraDirector* CameraDirector;                                            // 0x0048 (size: 0x8)
    TArray<class UCameraRigAsset*> CameraRigs;                                        // 0x0050 (size: 0x10)
    TArray<class UCameraRigTransition*> EnterTransitions;                             // 0x0060 (size: 0x10)
    TArray<class UCameraRigTransition*> ExitTransitions;                              // 0x0070 (size: 0x10)
    ECameraBuildStatus BuildStatus;                                                   // 0x0080 (size: 0x1)

}; // Size: 0x88

class UCameraDirector : public UObject
{
}; // Size: 0x28

class UCameraDirectorStateTreeSchema : public UStateTreeSchema
{
    TArray<FStateTreeExternalDataDesc> ContextDataDescs;                              // 0x0028 (size: 0x10)

}; // Size: 0x38

class UCameraNode : public UObject
{
    bool bIsEnabled;                                                                  // 0x0030 (size: 0x1)

}; // Size: 0x38

class UCameraRigAsset : public UObject
{
    class UCameraNode* RootNode;                                                      // 0x0048 (size: 0x8)
    FGameplayTagContainer GameplayTags;                                               // 0x0050 (size: 0x20)
    FCameraRigInterface Interface;                                                    // 0x0070 (size: 0x20)
    TArray<class UCameraRigTransition*> EnterTransitions;                             // 0x0090 (size: 0x10)
    TArray<class UCameraRigTransition*> ExitTransitions;                              // 0x00A0 (size: 0x10)
    ECameraRigInitialOrientation InitialOrientation;                                  // 0x00B0 (size: 0x4)
    FCameraRigAllocationInfo AllocationInfo;                                          // 0x00B8 (size: 0x28)
    ECameraBuildStatus BuildStatus;                                                   // 0x00E0 (size: 0x1)
    FGuid Guid;                                                                       // 0x00E4 (size: 0x10)

}; // Size: 0xF8

class UCameraRigCameraNode : public UCameraNode
{
    FCameraRigAssetReference CameraRigReference;                                      // 0x0038 (size: 0xE8)
    class UCameraRigAsset* CameraRig;                                                 // 0x0120 (size: 0x8)
    TArray<FBooleanCameraRigParameterOverride> BooleanOverrides;                      // 0x0128 (size: 0x10)
    TArray<FInteger32CameraRigParameterOverride> Integer32Overrides;                  // 0x0138 (size: 0x10)
    TArray<FFloatCameraRigParameterOverride> FloatOverrides;                          // 0x0148 (size: 0x10)
    TArray<FDoubleCameraRigParameterOverride> DoubleOverrides;                        // 0x0158 (size: 0x10)
    TArray<FVector2fCameraRigParameterOverride> Vector2fOverrides;                    // 0x0168 (size: 0x10)
    TArray<FVector2dCameraRigParameterOverride> Vector2dOverrides;                    // 0x0178 (size: 0x10)
    TArray<FVector3fCameraRigParameterOverride> Vector3fOverrides;                    // 0x0188 (size: 0x10)
    TArray<FVector3dCameraRigParameterOverride> Vector3dOverrides;                    // 0x0198 (size: 0x10)
    TArray<FVector4fCameraRigParameterOverride> Vector4fOverrides;                    // 0x01A8 (size: 0x10)
    TArray<FVector4dCameraRigParameterOverride> Vector4dOverrides;                    // 0x01B8 (size: 0x10)
    TArray<FRotator3fCameraRigParameterOverride> Rotator3fOverrides;                  // 0x01C8 (size: 0x10)
    TArray<FRotator3dCameraRigParameterOverride> Rotator3dOverrides;                  // 0x01D8 (size: 0x10)
    TArray<FTransform3fCameraRigParameterOverride> Transform3fOverrides;              // 0x01E8 (size: 0x10)
    TArray<FTransform3dCameraRigParameterOverride> Transform3dOverrides;              // 0x01F8 (size: 0x10)

}; // Size: 0x208

class UCameraRigInput1DSlot : public UInput1DCameraNode
{
    FCameraRigInputSlotParameters InputSlotParameters;                                // 0x0038 (size: 0x2)
    FCameraParameterClamping clamp;                                                   // 0x0040 (size: 0x18)
    FCameraParameterNormalization Normalize;                                          // 0x0058 (size: 0x10)
    EBuiltInDoubleCameraVariable BuiltInVariable;                                     // 0x0068 (size: 0x4)
    FDoubleCameraVariableReference CustomVariable;                                    // 0x0070 (size: 0x8)
    FCameraVariableID TransientVariableID;                                            // 0x0078 (size: 0x4)
    FCameraVariableID VariableID;                                                     // 0x007C (size: 0x4)

}; // Size: 0x80

class UCameraRigInput2DSlot : public UInput2DCameraNode
{
    FCameraRigInputSlotParameters InputSlotParameters;                                // 0x0038 (size: 0x2)
    FCameraParameterClamping ClampX;                                                  // 0x0040 (size: 0x18)
    FCameraParameterClamping ClampY;                                                  // 0x0058 (size: 0x18)
    FCameraParameterNormalization NormalizeX;                                         // 0x0070 (size: 0x10)
    FCameraParameterNormalization NormalizeY;                                         // 0x0080 (size: 0x10)
    EBuiltInVector2dCameraVariable BuiltInVariable;                                   // 0x0090 (size: 0x4)
    FVector2dCameraVariableReference CustomVariable;                                  // 0x0098 (size: 0x8)
    FCameraVariableID TransientVariableID;                                            // 0x00A0 (size: 0x4)
    FCameraVariableID VariableID;                                                     // 0x00A4 (size: 0x4)

}; // Size: 0xA8

class UCameraRigInterfaceParameter : public UObject
{
    class UCameraNode* Target;                                                        // 0x0030 (size: 0x8)
    FName TargetPropertyName;                                                         // 0x0038 (size: 0x8)
    FString InterfaceParameterName;                                                   // 0x0040 (size: 0x10)
    FGuid Guid;                                                                       // 0x0050 (size: 0x10)
    class UCameraVariableAsset* PrivateVariable;                                      // 0x0060 (size: 0x8)

}; // Size: 0x68

class UCameraRigParameterInterop : public UBlueprintFunctionLibrary
{

    void SetVector4Parameter(FBlueprintCameraVariableTable& VariableTable, class UCameraRigAsset* CameraRig, FString ParameterName, FVector4 ParameterValue);
    void SetVector3Parameter(FBlueprintCameraVariableTable& VariableTable, class UCameraRigAsset* CameraRig, FString ParameterName, FVector ParameterValue);
    void SetVector2Parameter(FBlueprintCameraVariableTable& VariableTable, class UCameraRigAsset* CameraRig, FString ParameterName, FVector2D ParameterValue);
    void SetTransformParameter(FBlueprintCameraVariableTable& VariableTable, class UCameraRigAsset* CameraRig, FString ParameterName, FTransform ParameterValue);
    void SetRotatorParameter(FBlueprintCameraVariableTable& VariableTable, class UCameraRigAsset* CameraRig, FString ParameterName, FRotator ParameterValue);
    void SetIntegerParameter(FBlueprintCameraVariableTable& VariableTable, class UCameraRigAsset* CameraRig, FString ParameterName, int32 ParameterValue);
    void SetFloatParameter(FBlueprintCameraVariableTable& VariableTable, class UCameraRigAsset* CameraRig, FString ParameterName, double ParameterValue);
    void SetDoubleParameter(FBlueprintCameraVariableTable& VariableTable, class UCameraRigAsset* CameraRig, FString ParameterName, double ParameterValue);
    void SetBooleanParameter(FBlueprintCameraVariableTable& VariableTable, class UCameraRigAsset* CameraRig, FString ParameterName, bool bParameterValue);
}; // Size: 0x28

class UCameraRigProxyAsset : public UObject
{
    FGuid Guid;                                                                       // 0x0028 (size: 0x10)

}; // Size: 0x38

class UCameraRigProxyTable : public UObject
{
    TArray<FCameraRigProxyTableEntry> Entries;                                        // 0x0028 (size: 0x10)

}; // Size: 0x38

class UCameraRigTransition : public UObject
{
    TArray<class UCameraRigTransitionCondition*> Conditions;                          // 0x0030 (size: 0x10)
    class UBlendCameraNode* Blend;                                                    // 0x0040 (size: 0x8)
    ECameraRigInitialOrientation InitialOrientation;                                  // 0x0048 (size: 0x4)
    bool bOverrideInitialOrientation;                                                 // 0x004C (size: 0x1)
    bool bAllowCameraRigMerging;                                                      // 0x004D (size: 0x1)

}; // Size: 0x50

class UCameraRigTransitionCondition : public UObject
{
}; // Size: 0x30

class UCameraValueInterpolator : public UObject
{
}; // Size: 0x28

class UCameraVariableAsset : public UObject
{
    bool bAutoReset;                                                                  // 0x0028 (size: 0x1)
    bool bIsPrivate;                                                                  // 0x0029 (size: 0x1)
    bool bIsInput;                                                                    // 0x002A (size: 0x1)
    FGuid Guid;                                                                       // 0x002C (size: 0x10)

}; // Size: 0x40

class UCameraVariableCollection : public UObject
{
    TArray<class UCameraVariableAsset*> Variables;                                    // 0x0028 (size: 0x10)

}; // Size: 0x38

class UClippingPlanesCameraNode : public UCameraNode
{
    FDoubleCameraParameter NearPlane;                                                 // 0x0038 (size: 0x10)
    FDoubleCameraParameter FarPlane;                                                  // 0x0048 (size: 0x10)

}; // Size: 0x58

class UCollisionPushCameraNode : public UCameraNode
{
    ECollisionSafePosition SafePosition;                                              // 0x0038 (size: 0x1)
    FVector3dCameraVariableReference CustomSafePosition;                              // 0x0040 (size: 0x8)
    FVector3dCameraParameter SafePositionOffset;                                      // 0x0048 (size: 0x20)
    ECollisionSafePositionOffsetSpace SafePositionOffsetSpace;                        // 0x0068 (size: 0x1)
    FBooleanCameraVariableReference EnableCollision;                                  // 0x0070 (size: 0x8)
    FFloatCameraParameter CollisionSphereRadius;                                      // 0x0078 (size: 0x10)
    TEnumAsByte<ECollisionChannel> CollisionChannel;                                  // 0x0088 (size: 0x1)
    class UCameraValueInterpolator* PushInterpolator;                                 // 0x0090 (size: 0x8)
    class UCameraValueInterpolator* PullInterpolator;                                 // 0x0098 (size: 0x8)
    bool bRunAsyncCollision;                                                          // 0x00A0 (size: 0x1)

}; // Size: 0xA8

class UCombinedCameraRigsCameraNode : public UCameraNode
{
    TArray<FCameraRigAssetReference> CameraRigReferences;                             // 0x0038 (size: 0x10)

}; // Size: 0x48

class UControllerGameplayCameraEvaluationComponent : public UActorComponent
{
    class UGameplayCameraSystemHost* CameraSystemHost;                                // 0x00C0 (size: 0x8)

}; // Size: 0xC8

class UCriticalDamperValueInterpolator : public UCameraValueInterpolator
{
    float DampingFactor;                                                              // 0x0028 (size: 0x4)

}; // Size: 0x30

class UDampenPositionCameraNode : public UCameraNode
{
    FFloatCameraParameter ForwardDampingFactor;                                       // 0x0038 (size: 0x10)
    FFloatCameraParameter LateralDampingFactor;                                       // 0x0048 (size: 0x10)
    FFloatCameraParameter VerticalDampingFactor;                                      // 0x0058 (size: 0x10)
    ECameraNodeSpace DampenSpace;                                                     // 0x0068 (size: 0x1)

}; // Size: 0x70

class UDefaultRootCameraNode : public URootCameraNode
{
    class UBlendStackCameraNode* BaseLayer;                                           // 0x0038 (size: 0x8)
    class UBlendStackCameraNode* MainLayer;                                           // 0x0040 (size: 0x8)
    class UBlendStackCameraNode* GlobalLayer;                                         // 0x0048 (size: 0x8)
    class UBlendStackCameraNode* VisualLayer;                                         // 0x0050 (size: 0x8)

}; // Size: 0x58

class UDollyFramingCameraNode : public UBaseFramingCameraNode
{
    FBooleanCameraParameter CanMoveLaterally;                                         // 0x0110 (size: 0x10)
    FBooleanCameraParameter CanMoveVertically;                                        // 0x0120 (size: 0x10)

}; // Size: 0x130

class UDoubleCameraVariable : public UCameraVariableAsset
{
    double DefaultValue;                                                              // 0x0040 (size: 0x8)

}; // Size: 0x48

class UDoubleIIRValueInterpolator : public UCameraValueInterpolator
{
    float PrimarySpeed;                                                               // 0x0028 (size: 0x4)
    float IntermediateSpeed;                                                          // 0x002C (size: 0x4)
    bool bUseFixedStep;                                                               // 0x0030 (size: 0x1)

}; // Size: 0x38

class UFieldOfViewCameraNode : public UCameraNode
{
    FFloatCameraParameter FieldOfView;                                                // 0x0038 (size: 0x10)

}; // Size: 0x48

class UFilmbackCameraNode : public UCameraNode
{
    FFloatCameraParameter SensorWidth;                                                // 0x0038 (size: 0x10)
    FFloatCameraParameter SensorHeight;                                               // 0x0048 (size: 0x10)
    FFloatCameraParameter ISO;                                                        // 0x0058 (size: 0x10)
    FBooleanCameraParameter ConstrainAspectRatio;                                     // 0x0068 (size: 0x10)
    FBooleanCameraParameter OverrideAspectRatioAxisConstraint;                        // 0x0078 (size: 0x10)
    TEnumAsByte<EAspectRatioAxisConstraint> AspectRatioAxisConstraint;                // 0x0088 (size: 0x1)

}; // Size: 0x90

class UFloatCameraVariable : public UCameraVariableAsset
{
    float DefaultValue;                                                               // 0x0040 (size: 0x4)

}; // Size: 0x48

class UGameplayCameraComponent : public USceneComponent
{
    class UCameraAsset* Camera;                                                       // 0x0230 (size: 0x8)
    TEnumAsByte<EAutoReceiveInput::Type> AutoActivateForPlayer;                       // 0x0238 (size: 0x1)
    class UGameplayCameraSystemHost* CameraSystemHost;                                // 0x0258 (size: 0x8)

    void SetInitialPose(const FBlueprintCameraPose& CameraPose);
    FBlueprintCameraVariableTable GetInitialVariableTable();
    FBlueprintCameraPose GetInitialPose();
    void DeactivateCamera();
    void ActivateCameraForPlayerIndex(int32 PlayerIndex);
    void ActivateCameraForPlayerController(class APlayerController* PlayerController);
}; // Size: 0x260

class UGameplayCameraSystemComponent : public USceneComponent
{
    TEnumAsByte<EAutoReceiveInput::Type> AutoActivateForPlayer;                       // 0x0230 (size: 0x1)
    bool bSetPlayerControllerRotation;                                                // 0x0231 (size: 0x1)
    class UGameplayCameraSystemHost* CameraSystemHost;                                // 0x0238 (size: 0x8)
    TWeakObjectPtr<class APlayerController> WeakPlayerController;                     // 0x0240 (size: 0x8)

    bool IsCameraSystemActiveForPlayController(class APlayerController* PlayerController);
    void DeactivateCameraSystem(class AActor* NextViewTarget);
    void ActivateCameraSystemForPlayerIndex(int32 PlayerIndex);
    void ActivateCameraSystemForPlayerController(class APlayerController* PlayerController);
}; // Size: 0x250

class UGameplayCameraSystemHost : public UObject
{
}; // Size: 0x38

class UGameplayCamerasSettings : public UDeveloperSettings
{
    bool bAutoSpawnCameraSystemActor;                                                 // 0x0038 (size: 0x1)
    bool bAutoSpawnCameraSystemActorSetsControlRotation;                              // 0x0039 (size: 0x1)
    int32 CombinedCameraRigNumThreshold;                                              // 0x003C (size: 0x4)
    double DefaultIKAimingAngleTolerance;                                             // 0x0040 (size: 0x8)
    double DefaultIKAimingDistanceTolerance;                                          // 0x0048 (size: 0x8)
    uint8 DefaultIKAimingMaxIterations;                                               // 0x0050 (size: 0x1)
    double DefaultIKAimingMinDistance;                                                // 0x0058 (size: 0x8)

}; // Size: 0x60

class UGameplayControlRotationComponent : public UActorComponent
{
    TArray<class UInputAction*> AxisActions;                                          // 0x00A0 (size: 0x10)
    float AxisActionAngularSpeedThreshold;                                            // 0x00B0 (size: 0x4)
    float AxisActionMagnitudeThreshold;                                               // 0x00B4 (size: 0x4)
    TEnumAsByte<EAutoReceiveInput::Type> AutoActivateForPlayer;                       // 0x00B8 (size: 0x1)
    class APlayerController* PlayerController;                                        // 0x00C0 (size: 0x8)
    class UGameplayCameraSystemHost* CameraSystemHost;                                // 0x00C8 (size: 0x8)

    void DeactivateControlRotationManagement();
    void ActivateControlRotationManagementForPlayerIndex(int32 PlayerIndex);
    void ActivateControlRotationManagementForPlayerController(class APlayerController* PlayerController);
}; // Size: 0xE0

class UGameplayTagTransitionCondition : public UCameraRigTransitionCondition
{
    FGameplayTagQuery PreviousGameplayTagQuery;                                       // 0x0030 (size: 0x48)
    FGameplayTagQuery NextGameplayTagQuery;                                           // 0x0078 (size: 0x48)

}; // Size: 0xC0

class UIIRValueInterpolator : public UCameraValueInterpolator
{
    float Speed;                                                                      // 0x0028 (size: 0x4)
    bool bUseFixedStep;                                                               // 0x002C (size: 0x1)

}; // Size: 0x30

class UInput1DCameraNode : public UCameraNode
{
}; // Size: 0x38

class UInput2DCameraNode : public UCameraNode
{
}; // Size: 0x38

class UInputAxisBinding2DCameraNode : public UCameraRigInput2DSlot
{
    TArray<class UInputAction*> AxisActions;                                          // 0x00A8 (size: 0x10)
    FBooleanCameraParameter RevertAxisX;                                              // 0x00B8 (size: 0x10)
    FBooleanCameraParameter RevertAxisY;                                              // 0x00C8 (size: 0x10)
    FVector2dCameraParameter Multiplier;                                              // 0x00D8 (size: 0x18)

}; // Size: 0xF0

class UInteger32CameraVariable : public UCameraVariableAsset
{
    int32 DefaultValue;                                                               // 0x0040 (size: 0x4)

}; // Size: 0x48

class UIsCameraRigTransitionCondition : public UCameraRigTransitionCondition
{
    class UCameraRigAsset* PreviousCameraRig;                                         // 0x0030 (size: 0x8)
    class UCameraRigAsset* NextCameraRig;                                             // 0x0038 (size: 0x8)

}; // Size: 0x40

class ULensParametersCameraNode : public UCameraNode
{
    FFloatCameraParameter FocalLength;                                                // 0x0038 (size: 0x10)
    FFloatCameraParameter FocusDistance;                                              // 0x0048 (size: 0x10)
    FFloatCameraParameter Aperture;                                                   // 0x0058 (size: 0x10)
    FFloatCameraParameter ShutterSpeed;                                               // 0x0068 (size: 0x10)
    FBooleanCameraParameter EnablePhysicalCamera;                                     // 0x0078 (size: 0x10)

}; // Size: 0x88

class ULinearBlendCameraNode : public USimpleFixedTimeBlendCameraNode
{
}; // Size: 0x40

class UOcclusionMaterialCameraNode : public UCameraNode
{
    class UMaterialInterface* OcclusionTransparencyMaterial;                          // 0x0038 (size: 0x8)
    FFloatCameraParameter OcclusionSphereRadius;                                      // 0x0040 (size: 0x10)
    TEnumAsByte<ECollisionChannel> OcclusionChannel;                                  // 0x0050 (size: 0x1)
    ECameraNodeOriginPosition OcclusionTargetPosition;                                // 0x0051 (size: 0x1)
    ECameraNodeSpace OcclusionTargetOffsetSpace;                                      // 0x0052 (size: 0x1)
    FVector3dCameraParameter OcclusionTargetOffset;                                   // 0x0058 (size: 0x20)

}; // Size: 0x78

class UOffsetCameraNode : public UCameraNode
{
    FVector3dCameraParameter TranslationOffset;                                       // 0x0038 (size: 0x20)
    FRotator3dCameraParameter RotationOffset;                                         // 0x0058 (size: 0x20)
    ECameraNodeSpace OffsetSpace;                                                     // 0x0078 (size: 0x1)

}; // Size: 0x80

class UOrbitBlendCameraNode : public UBlendCameraNode
{
    class USimpleBlendCameraNode* DrivingBlend;                                       // 0x0038 (size: 0x8)

}; // Size: 0x40

class UPanningFramingCameraNode : public UBaseFramingCameraNode
{
    FBooleanCameraParameter CanPanLaterally;                                          // 0x0110 (size: 0x10)
    FBooleanCameraParameter CanPanVertically;                                         // 0x0120 (size: 0x10)

}; // Size: 0x130

class UPopBlendCameraNode : public UBlendCameraNode
{
}; // Size: 0x38

class UPopValueInterpolator : public UCameraValueInterpolator
{
}; // Size: 0x28

class UPostProcessCameraNode : public UCameraNode
{
    FPostProcessSettings PostProcessSettings;                                         // 0x0040 (size: 0x700)

}; // Size: 0x740

class UPriorityQueueCameraDirector : public UCameraDirector
{
}; // Size: 0x28

class URootCameraNode : public UCameraNode
{
}; // Size: 0x38

class URotator3dCameraVariable : public UCameraVariableAsset
{
    FRotator3d DefaultValue;                                                          // 0x0040 (size: 0x18)

}; // Size: 0x58

class URotator3fCameraVariable : public UCameraVariableAsset
{
    FRotator3f DefaultValue;                                                          // 0x0040 (size: 0xC)

}; // Size: 0x50

class USimpleBlendCameraNode : public UBlendCameraNode
{
}; // Size: 0x38

class USimpleFixedTimeBlendCameraNode : public USimpleBlendCameraNode
{
    float BlendTime;                                                                  // 0x0038 (size: 0x4)

}; // Size: 0x40

class USingleCameraDirector : public UCameraDirector
{
    class UCameraRigAsset* CameraRig;                                                 // 0x0028 (size: 0x8)

}; // Size: 0x30

class USmoothBlendCameraNode : public USimpleFixedTimeBlendCameraNode
{
    ESmoothCameraBlendType BlendType;                                                 // 0x0040 (size: 0x4)

}; // Size: 0x48

class UStateTreeCameraDirector : public UCameraDirector
{
    FStateTreeReference StateTreeReference;                                           // 0x0028 (size: 0x28)
    class UCameraRigProxyTable* CameraRigProxyTable;                                  // 0x0050 (size: 0x8)

}; // Size: 0x58

class UTargetRayCastCameraNode : public UCameraNode
{
    TEnumAsByte<ECollisionChannel> TraceChannel;                                      // 0x0038 (size: 0x1)
    FBooleanCameraParameter AutoFocus;                                                // 0x0040 (size: 0x10)

}; // Size: 0x50

class UTransform3dCameraVariable : public UCameraVariableAsset
{
    FTransform3d DefaultValue;                                                        // 0x0040 (size: 0x60)

}; // Size: 0xA0

class UTransform3fCameraVariable : public UCameraVariableAsset
{
    FTransform3f DefaultValue;                                                        // 0x0040 (size: 0x30)

}; // Size: 0x70

class UVector2dCameraVariable : public UCameraVariableAsset
{
    FVector2D DefaultValue;                                                           // 0x0040 (size: 0x10)

}; // Size: 0x50

class UVector2fCameraVariable : public UCameraVariableAsset
{
    FVector2f DefaultValue;                                                           // 0x0040 (size: 0x8)

}; // Size: 0x48

class UVector3dCameraVariable : public UCameraVariableAsset
{
    FVector3d DefaultValue;                                                           // 0x0040 (size: 0x18)

}; // Size: 0x58

class UVector3fCameraVariable : public UCameraVariableAsset
{
    FVector3f DefaultValue;                                                           // 0x0040 (size: 0xC)

}; // Size: 0x50

class UVector4dCameraVariable : public UCameraVariableAsset
{
    FVector4d DefaultValue;                                                           // 0x0040 (size: 0x20)

}; // Size: 0x60

class UVector4fCameraVariable : public UCameraVariableAsset
{
    FVector4f DefaultValue;                                                           // 0x0040 (size: 0x10)

}; // Size: 0x50

#endif
