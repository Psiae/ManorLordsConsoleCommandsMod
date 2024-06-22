#ifndef UE4SS_SDK_PhysXVehicles_HPP
#define UE4SS_SDK_PhysXVehicles_HPP

#include "PhysXVehicles_enums.hpp"

struct FAnimNode_WheelHandler : public FAnimNode_SkeletalControlBase
{
}; // Size: 0xE0

struct FReplicatedVehicleState
{
    float SteeringInput;                                                              // 0x0000 (size: 0x4)
    float ThrottleInput;                                                              // 0x0004 (size: 0x4)
    float BrakeInput;                                                                 // 0x0008 (size: 0x4)
    float HandbrakeInput;                                                             // 0x000C (size: 0x4)
    int32 CurrentGear;                                                                // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FTireConfigMaterialFriction
{
    class UPhysicalMaterial* PhysicalMaterial;                                        // 0x0000 (size: 0x8)
    float FrictionScale;                                                              // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FVehicleAnimInstanceProxy : public FAnimInstanceProxy
{
}; // Size: 0x780

struct FVehicleDifferential4WData
{
    TEnumAsByte<EVehicleDifferential4W::Type> DifferentialType;                       // 0x0000 (size: 0x1)
    float FrontRearSplit;                                                             // 0x0004 (size: 0x4)
    float FrontLeftRightSplit;                                                        // 0x0008 (size: 0x4)
    float RearLeftRightSplit;                                                         // 0x000C (size: 0x4)
    float CentreBias;                                                                 // 0x0010 (size: 0x4)
    float FrontBias;                                                                  // 0x0014 (size: 0x4)
    float RearBias;                                                                   // 0x0018 (size: 0x4)

}; // Size: 0x1C

struct FVehicleEngineData
{
    FRuntimeFloatCurve TorqueCurve;                                                   // 0x0000 (size: 0x88)
    float MaxRPM;                                                                     // 0x0088 (size: 0x4)
    float MOI;                                                                        // 0x008C (size: 0x4)
    float DampingRateFullThrottle;                                                    // 0x0090 (size: 0x4)
    float DampingRateZeroThrottleClutchEngaged;                                       // 0x0094 (size: 0x4)
    float DampingRateZeroThrottleClutchDisengaged;                                    // 0x0098 (size: 0x4)

}; // Size: 0xA0

struct FVehicleGearData
{
    float Ratio;                                                                      // 0x0000 (size: 0x4)
    float DownRatio;                                                                  // 0x0004 (size: 0x4)
    float UpRatio;                                                                    // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FVehicleInputRate
{
    float RiseRate;                                                                   // 0x0000 (size: 0x4)
    float FallRate;                                                                   // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FVehicleTransmissionData
{
    bool bUseGearAutoBox;                                                             // 0x0000 (size: 0x1)
    float GearSwitchTime;                                                             // 0x0004 (size: 0x4)
    float GearAutoBoxLatency;                                                         // 0x0008 (size: 0x4)
    float FinalRatio;                                                                 // 0x000C (size: 0x4)
    TArray<FVehicleGearData> ForwardGears;                                            // 0x0010 (size: 0x10)
    float ReverseGearRatio;                                                           // 0x0020 (size: 0x4)
    float NeutralGearUpRatio;                                                         // 0x0024 (size: 0x4)
    float ClutchStrength;                                                             // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FWheelSetup
{
    TSubclassOf<class UVehicleWheel> WheelClass;                                      // 0x0000 (size: 0x8)
    FName BoneName;                                                                   // 0x0008 (size: 0x8)
    FVector AdditionalOffset;                                                         // 0x0010 (size: 0xC)
    bool bDisableSteering;                                                            // 0x001C (size: 0x1)

}; // Size: 0x20

class AWheeledVehicle : public APawn
{
    class USkeletalMeshComponent* Mesh;                                               // 0x0280 (size: 0x8)
    class UWheeledVehicleMovementComponent* VehicleMovement;                          // 0x0288 (size: 0x8)

}; // Size: 0x290

class USimpleWheeledVehicleMovementComponent : public UWheeledVehicleMovementComponent
{

    void SetSteerAngle(float SteerAngle, int32 WheelIndex);
    void SetDriveTorque(float DriveTorque, int32 WheelIndex);
    void SetBrakeTorque(float BrakeTorque, int32 WheelIndex);
}; // Size: 0x290

class UTireConfig : public UDataAsset
{
    float FrictionScale;                                                              // 0x0030 (size: 0x4)
    TArray<FTireConfigMaterialFriction> TireFrictionScales;                           // 0x0038 (size: 0x10)

}; // Size: 0x50

class UVehicleAnimInstance : public UAnimInstance
{
    class UWheeledVehicleMovementComponent* WheeledVehicleMovementComponent;          // 0x0A50 (size: 0x8)

    class AWheeledVehicle* GetVehicle();
}; // Size: 0xA60

class UVehicleWheel : public UObject
{
    class UStaticMesh* CollisionMesh;                                                 // 0x0028 (size: 0x8)
    bool bDontCreateShape;                                                            // 0x0030 (size: 0x1)
    bool bAutoAdjustCollisionSize;                                                    // 0x0031 (size: 0x1)
    FVector Offset;                                                                   // 0x0034 (size: 0xC)
    float ShapeRadius;                                                                // 0x0040 (size: 0x4)
    float ShapeWidth;                                                                 // 0x0044 (size: 0x4)
    float Mass;                                                                       // 0x0048 (size: 0x4)
    float DampingRate;                                                                // 0x004C (size: 0x4)
    float SteerAngle;                                                                 // 0x0050 (size: 0x4)
    bool bAffectedByHandbrake;                                                        // 0x0054 (size: 0x1)
    class UTireType* TireType;                                                        // 0x0058 (size: 0x8)
    class UTireConfig* TireConfig;                                                    // 0x0060 (size: 0x8)
    float LatStiffMaxLoad;                                                            // 0x0068 (size: 0x4)
    float LatStiffValue;                                                              // 0x006C (size: 0x4)
    float LongStiffValue;                                                             // 0x0070 (size: 0x4)
    float SuspensionForceOffset;                                                      // 0x0074 (size: 0x4)
    float SuspensionMaxRaise;                                                         // 0x0078 (size: 0x4)
    float SuspensionMaxDrop;                                                          // 0x007C (size: 0x4)
    float SuspensionNaturalFrequency;                                                 // 0x0080 (size: 0x4)
    float SuspensionDampingRatio;                                                     // 0x0084 (size: 0x4)
    TEnumAsByte<EWheelSweepType> SweepType;                                           // 0x0088 (size: 0x1)
    float MaxBrakeTorque;                                                             // 0x008C (size: 0x4)
    float MaxHandBrakeTorque;                                                         // 0x0090 (size: 0x4)
    class UWheeledVehicleMovementComponent* VehicleSim;                               // 0x0098 (size: 0x8)
    int32 WheelIndex;                                                                 // 0x00A0 (size: 0x4)
    float DebugLongSlip;                                                              // 0x00A4 (size: 0x4)
    float DebugLatSlip;                                                               // 0x00A8 (size: 0x4)
    float DebugNormalizedTireLoad;                                                    // 0x00AC (size: 0x4)
    float DebugWheelTorque;                                                           // 0x00B4 (size: 0x4)
    float DebugLongForce;                                                             // 0x00B8 (size: 0x4)
    float DebugLatForce;                                                              // 0x00BC (size: 0x4)
    FVector Location;                                                                 // 0x00C0 (size: 0xC)
    FVector OldLocation;                                                              // 0x00CC (size: 0xC)
    FVector Velocity;                                                                 // 0x00D8 (size: 0xC)

    bool IsInAir();
    float GetSuspensionOffset();
    float GetSteerAngle();
    float GetRotationAngle();
}; // Size: 0xF0

class UWheeledVehicleMovementComponent : public UPawnMovementComponent
{
    uint8 bDeprecatedSpringOffsetMode;                                                // 0x0140 (size: 0x1)
    uint8 bReverseAsBrake;                                                            // 0x0140 (size: 0x1)
    uint8 bUseRVOAvoidance;                                                           // 0x0140 (size: 0x1)
    uint8 bRawHandbrakeInput;                                                         // 0x0140 (size: 0x1)
    uint8 bRawGearUpInput;                                                            // 0x0140 (size: 0x1)
    uint8 bRawGearDownInput;                                                          // 0x0140 (size: 0x1)
    uint8 bWasAvoidanceUpdated;                                                       // 0x0144 (size: 0x1)
    float Mass;                                                                       // 0x0148 (size: 0x4)
    TArray<FWheelSetup> WheelSetups;                                                  // 0x0150 (size: 0x10)
    float DragCoefficient;                                                            // 0x0160 (size: 0x4)
    float ChassisWidth;                                                               // 0x0164 (size: 0x4)
    float ChassisHeight;                                                              // 0x0168 (size: 0x4)
    float DragArea;                                                                   // 0x016C (size: 0x4)
    float EstimatedMaxEngineSpeed;                                                    // 0x0170 (size: 0x4)
    float MaxEngineRPM;                                                               // 0x0174 (size: 0x4)
    float DebugDragMagnitude;                                                         // 0x0178 (size: 0x4)
    FVector InertiaTensorScale;                                                       // 0x017C (size: 0xC)
    float MinNormalizedTireLoad;                                                      // 0x0188 (size: 0x4)
    float MinNormalizedTireLoadFiltered;                                              // 0x018C (size: 0x4)
    float MaxNormalizedTireLoad;                                                      // 0x0190 (size: 0x4)
    float MaxNormalizedTireLoadFiltered;                                              // 0x0194 (size: 0x4)
    float ThresholdLongitudinalSpeed;                                                 // 0x0198 (size: 0x4)
    int32 LowForwardSpeedSubStepCount;                                                // 0x019C (size: 0x4)
    int32 HighForwardSpeedSubStepCount;                                               // 0x01A0 (size: 0x4)
    TArray<class UVehicleWheel*> Wheels;                                              // 0x01A8 (size: 0x10)
    float RVOAvoidanceRadius;                                                         // 0x01D0 (size: 0x4)
    float RVOAvoidanceHeight;                                                         // 0x01D4 (size: 0x4)
    float AvoidanceConsiderationRadius;                                               // 0x01D8 (size: 0x4)
    float RVOSteeringStep;                                                            // 0x01DC (size: 0x4)
    float RVOThrottleStep;                                                            // 0x01E0 (size: 0x4)
    int32 AvoidanceUID;                                                               // 0x01E4 (size: 0x4)
    FNavAvoidanceMask AvoidanceGroup;                                                 // 0x01E8 (size: 0x4)
    FNavAvoidanceMask GroupsToAvoid;                                                  // 0x01EC (size: 0x4)
    FNavAvoidanceMask GroupsToIgnore;                                                 // 0x01F0 (size: 0x4)
    float AvoidanceWeight;                                                            // 0x01F4 (size: 0x4)
    FVector PendingLaunchVelocity;                                                    // 0x01F8 (size: 0xC)
    FReplicatedVehicleState ReplicatedState;                                          // 0x0204 (size: 0x14)
    float RawSteeringInput;                                                           // 0x021C (size: 0x4)
    float RawThrottleInput;                                                           // 0x0220 (size: 0x4)
    float RawBrakeInput;                                                              // 0x0224 (size: 0x4)
    float SteeringInput;                                                              // 0x0228 (size: 0x4)
    float ThrottleInput;                                                              // 0x022C (size: 0x4)
    float BrakeInput;                                                                 // 0x0230 (size: 0x4)
    float HandbrakeInput;                                                             // 0x0234 (size: 0x4)
    float IdleBrakeInput;                                                             // 0x0238 (size: 0x4)
    float StopThreshold;                                                              // 0x023C (size: 0x4)
    float WrongDirectionThreshold;                                                    // 0x0240 (size: 0x4)
    FVehicleInputRate ThrottleInputRate;                                              // 0x0244 (size: 0x8)
    FVehicleInputRate BrakeInputRate;                                                 // 0x024C (size: 0x8)
    FVehicleInputRate HandbrakeInputRate;                                             // 0x0254 (size: 0x8)
    FVehicleInputRate SteeringInputRate;                                              // 0x025C (size: 0x8)
    class AController* OverrideController;                                            // 0x0288 (size: 0x8)

    void SetUseAutoGears(bool bUseAuto);
    void SetThrottleInput(float Throttle);
    void SetTargetGear(int32 GearNum, bool bImmediate);
    void SetSteeringInput(float Steering);
    void SetHandbrakeInput(bool bNewHandbrake);
    void SetGroupsToIgnoreMask(const FNavAvoidanceMask& GroupMask);
    void SetGroupsToIgnore(int32 GroupFlags);
    void SetGroupsToAvoidMask(const FNavAvoidanceMask& GroupMask);
    void SetGroupsToAvoid(int32 GroupFlags);
    void SetGearUp(bool bNewGearUp);
    void SetGearDown(bool bNewGearDown);
    void SetBrakeInput(float Brake);
    void SetAvoidanceGroupMask(const FNavAvoidanceMask& GroupMask);
    void SetAvoidanceGroup(int32 GroupFlags);
    void SetAvoidanceEnabled(bool bEnable);
    void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32 CurrentGear);
    bool GetUseAutoGears();
    int32 GetTargetGear();
    float GetForwardSpeed();
    float GetEngineRotationSpeed();
    float GetEngineMaxRotationSpeed();
    int32 GetCurrentGear();
}; // Size: 0x290

class UWheeledVehicleMovementComponent4W : public UWheeledVehicleMovementComponent
{
    FVehicleEngineData EngineSetup;                                                   // 0x0290 (size: 0xA0)
    FVehicleDifferential4WData DifferentialSetup;                                     // 0x0330 (size: 0x1C)
    float AckermannAccuracy;                                                          // 0x034C (size: 0x4)
    FVehicleTransmissionData TransmissionSetup;                                       // 0x0350 (size: 0x30)
    FRuntimeFloatCurve SteeringCurve;                                                 // 0x0380 (size: 0x88)

}; // Size: 0x408

#endif
