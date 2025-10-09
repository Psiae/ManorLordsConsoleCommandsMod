#ifndef UE4SS_SDK_HeadMountedDisplay_HPP
#define UE4SS_SDK_HeadMountedDisplay_HPP

#include "HeadMountedDisplay_enums.hpp"

struct FXRDeviceId
{
    FName SystemName;                                                                 // 0x0000 (size: 0x8)
    int32 DeviceID;                                                                   // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FXRHMDData
{
    bool bValid;                                                                      // 0x0000 (size: 0x1)
    FName DeviceName;                                                                 // 0x0004 (size: 0x8)
    FGuid ApplicationInstanceID;                                                      // 0x000C (size: 0x10)
    ETrackingStatus TrackingStatus;                                                   // 0x001C (size: 0x1)
    FVector Position;                                                                 // 0x0020 (size: 0x18)
    FQuat Rotation;                                                                   // 0x0040 (size: 0x20)

}; // Size: 0x60

struct FXRMotionControllerData
{
    bool bValid;                                                                      // 0x0000 (size: 0x1)
    FName DeviceName;                                                                 // 0x0004 (size: 0x8)
    FGuid ApplicationInstanceID;                                                      // 0x000C (size: 0x10)
    EXRVisualType DeviceVisualType;                                                   // 0x001C (size: 0x1)
    EControllerHand HandIndex;                                                        // 0x001D (size: 0x1)
    ETrackingStatus TrackingStatus;                                                   // 0x001E (size: 0x1)
    FVector GripPosition;                                                             // 0x0020 (size: 0x18)
    FQuat GripRotation;                                                               // 0x0040 (size: 0x20)
    FVector AimPosition;                                                              // 0x0060 (size: 0x18)
    FQuat AimRotation;                                                                // 0x0080 (size: 0x20)
    FVector PalmPosition;                                                             // 0x00A0 (size: 0x18)
    FQuat PalmRotation;                                                               // 0x00C0 (size: 0x20)
    TArray<FVector> HandKeyPositions;                                                 // 0x00E0 (size: 0x10)
    TArray<FQuat> HandKeyRotations;                                                   // 0x00F0 (size: 0x10)
    TArray<float> HandKeyRadii;                                                       // 0x0100 (size: 0x10)
    bool bIsGrasped;                                                                  // 0x0110 (size: 0x1)

}; // Size: 0x120

class UHandKeypointConversion : public UBlueprintFunctionLibrary
{

    int32 Conv_HandKeypointToInt32(EHandKeypoint Input);
}; // Size: 0x28

class UMotionControllerComponent : public UPrimitiveComponent
{
    int32 PlayerIndex;                                                                // 0x0518 (size: 0x4)
    FName MotionSource;                                                               // 0x051C (size: 0x8)
    uint8 bDisableLowLatencyUpdate;                                                   // 0x0524 (size: 0x1)
    ETrackingStatus CurrentTrackingStatus;                                            // 0x0528 (size: 0x1)

    void SetTrackingSource(const EControllerHand NewSource);
    void SetTrackingMotionSource(const FName NewSource);
    void SetAssociatedPlayerIndex(const int32 NewPlayer);
    void OnMotionControllerUpdated();
    bool IsTracked();
    EControllerHand GetTrackingSource();
    float GetParameterValue(FName InName, bool& bValueFound);
    bool GetLinearVelocity(FVector& OutLinearVelocity);
    bool GetLinearAcceleration(FVector& OutLinearAcceleration);
    FVector GetHandJointPosition(int32 jointIndex, bool& bValueFound);
    bool GetAngularVelocity(FRotator& OutAngularVelocity);
}; // Size: 0x660

#endif
