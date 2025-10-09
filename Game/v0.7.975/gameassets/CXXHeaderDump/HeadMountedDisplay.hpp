#ifndef UE4SS_SDK_HeadMountedDisplay_HPP
#define UE4SS_SDK_HeadMountedDisplay_HPP

#include "HeadMountedDisplay_enums.hpp"

struct FXRDeviceId
{
    FName SystemName;                                                                 // 0x0000 (size: 0x8)
    int32 DeviceID;                                                                   // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FXRGestureConfig
{
    bool bTap;                                                                        // 0x0000 (size: 0x1)
    bool bHold;                                                                       // 0x0001 (size: 0x1)
    ESpatialInputGestureAxis AxisGesture;                                             // 0x0002 (size: 0x1)
    bool bNavigationAxisX;                                                            // 0x0003 (size: 0x1)
    bool bNavigationAxisY;                                                            // 0x0004 (size: 0x1)
    bool bNavigationAxisZ;                                                            // 0x0005 (size: 0x1)

}; // Size: 0x6

struct FXRHMDData
{
    bool bValid;                                                                      // 0x0000 (size: 0x1)
    FName DeviceName;                                                                 // 0x0004 (size: 0x8)
    FGuid ApplicationInstanceID;                                                      // 0x000C (size: 0x10)
    ETrackingStatus TrackingStatus;                                                   // 0x001C (size: 0x1)
    FVector Position;                                                                 // 0x0020 (size: 0xC)
    FQuat Rotation;                                                                   // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FXRMotionControllerData
{
    bool bValid;                                                                      // 0x0000 (size: 0x1)
    FName DeviceName;                                                                 // 0x0004 (size: 0x8)
    FGuid ApplicationInstanceID;                                                      // 0x000C (size: 0x10)
    EXRVisualType DeviceVisualType;                                                   // 0x001C (size: 0x1)
    EControllerHand HandIndex;                                                        // 0x001D (size: 0x1)
    ETrackingStatus TrackingStatus;                                                   // 0x001E (size: 0x1)
    FVector GripPosition;                                                             // 0x0020 (size: 0xC)
    FQuat GripRotation;                                                               // 0x0030 (size: 0x10)
    FVector AimPosition;                                                              // 0x0040 (size: 0xC)
    FQuat AimRotation;                                                                // 0x0050 (size: 0x10)
    TArray<FVector> HandKeyPositions;                                                 // 0x0060 (size: 0x10)
    TArray<FQuat> HandKeyRotations;                                                   // 0x0070 (size: 0x10)
    TArray<float> HandKeyRadii;                                                       // 0x0080 (size: 0x10)
    bool bIsGrasped;                                                                  // 0x0090 (size: 0x1)

}; // Size: 0xA0

class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase
{
    FAsyncTask_LoadXRDeviceVisComponentOnModelLoaded OnModelLoaded;                   // 0x0030 (size: 0x10)
    void DeviceModelLoadedDelegate(const class UPrimitiveComponent* LoadedComponent);
    FAsyncTask_LoadXRDeviceVisComponentOnLoadFailure OnLoadFailure;                   // 0x0040 (size: 0x10)
    void DeviceModelLoadedDelegate(const class UPrimitiveComponent* LoadedComponent);
    class UPrimitiveComponent* SpawnedComponent;                                      // 0x0058 (size: 0x8)

    class UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(class AActor* Target, const FName SystemName, const FName DeviceName, bool bManualAttachment, const FTransform& RelativeTransform, FXRDeviceId& XRDeviceId, class UPrimitiveComponent*& NewComponent);
    class UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(class AActor* Target, const FXRDeviceId& XRDeviceId, bool bManualAttachment, const FTransform& RelativeTransform, class UPrimitiveComponent*& NewComponent);
}; // Size: 0x60

class UHandKeypointConversion : public UBlueprintFunctionLibrary
{

    int32 Conv_HandKeypointToInt32(EHandKeypoint Input);
}; // Size: 0x28

class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{

    void UpdateExternalTrackingHMDPosition(const FTransform& ExternalTrackingTransform);
    void SetXRTimedInputActionDelegate(const FName& ActionName, const FSetXRTimedInputActionDelegateInDelegate& InDelegate);
    void SetXRDisconnectDelegate(const FSetXRDisconnectDelegateInDisconnectedDelegate& InDisconnectedDelegate);
    void SetWorldToMetersScale(class UObject* WorldContext, float NewScale);
    void SetTrackingOrigin(TEnumAsByte<EHMDTrackingOrigin::Type> Origin);
    void SetSpectatorScreenTexture(class UTexture* InTexture);
    void SetSpectatorScreenModeTexturePlusEyeLayout(FVector2D EyeRectMin, FVector2D EyeRectMax, FVector2D TextureRectMin, FVector2D TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha);
    void SetSpectatorScreenMode(ESpectatorScreenMode Mode);
    void SetClippingPlanes(float Near, float Far);
    void ResetOrientationAndPosition(float Yaw, TEnumAsByte<EOrientPositionSelector::Type> options);
    bool IsSpectatorScreenModeControllable();
    bool IsInLowPersistenceMode();
    bool IsHeadMountedDisplayEnabled();
    bool IsHeadMountedDisplayConnected();
    bool IsDeviceTracking(const FXRDeviceId& XRDeviceId);
    bool HasValidTrackingPosition();
    int32 GetXRSystemFlags();
    float GetWorldToMetersScale(class UObject* WorldContext);
    void GetVRFocusState(bool& bUseFocus, bool& bHasFocus);
    FString GetVersionString();
    FTransform GetTrackingToWorldTransform(class UObject* WorldContext);
    void GetTrackingSensorParameters(FVector& Origin, FRotator& Rotation, float& LeftFOV, float& RightFOV, float& TopFOV, float& BottomFOV, float& Distance, float& NearPlane, float& FarPlane, bool& IsActive, int32 Index);
    bool GetTrackingOriginTransform(TEnumAsByte<EHMDTrackingOrigin::Type> Origin, FTransform& OutTransform);
    TEnumAsByte<EHMDTrackingOrigin::Type> GetTrackingOrigin();
    float GetScreenPercentage();
    void GetPositionalTrackingCameraParameters(FVector& CameraOrigin, FRotator& CameraRotation, float& HFOV, float& VFOV, float& CameraDistance, float& NearPlane, float& FarPlane);
    bool GetPlayAreaRect(FTransform& OutTransform, FVector2D& OutRect);
    FVector2D GetPlayAreaBounds(TEnumAsByte<EHMDTrackingOrigin::Type> Origin);
    float GetPixelDensity();
    void GetOrientationAndPosition(FRotator& DeviceRotation, FVector& DevicePosition);
    int32 GetNumOfTrackingSensors();
    void GetMotionControllerData(class UObject* WorldContext, const EControllerHand hand, FXRMotionControllerData& MotionControllerData);
    TEnumAsByte<EHMDWornState::Type> GetHMDWornState();
    FName GetHMDDeviceName();
    void GetHMDData(class UObject* WorldContext, FXRHMDData& HMDData);
    void GetDeviceWorldPose(class UObject* WorldContext, const FXRDeviceId& XRDeviceId, bool& bIsTracked, FRotator& Orientation, bool& bHasPositionalTracking, FVector& Position);
    void GetDevicePose(const FXRDeviceId& XRDeviceId, bool& bIsTracked, FRotator& Orientation, bool& bHasPositionalTracking, FVector& Position);
    bool GetControllerTransformForTime(class UObject* WorldContext, const int32 ControllerIndex, const FName MotionSource, FTimespan Time, bool& bTimeWasUsed, FRotator& Orientation, FVector& Position, bool& bProvidedLinearVelocity, FVector& LinearVelocity, bool& bProvidedAngularVelocity, FVector& AngularVelocityRadPerSec, bool& bProvidedLinearAcceleration, FVector& LinearAcceleration);
    TArray<FXRDeviceId> EnumerateTrackedDevices(const FName SystemId, EXRTrackedDeviceType DeviceType);
    void EnableLowPersistenceMode(bool bEnable);
    bool EnableHMD(bool bEnable);
    void DisconnectRemoteXRDevice();
    TEnumAsByte<EXRDeviceConnectionResult::Type> ConnectRemoteXRDevice(FString IpAddress, const int32 BitRate);
    bool ConfigureGestures(const FXRGestureConfig& GestureConfig);
    void ClearXRTimedInputActionDelegate(const FName& ActionPath);
    void CalibrateExternalTrackingToHMD(const FTransform& ExternalTrackingTransform);
    void BreakKey(FKey InKey, FString& InteractionProfile, EControllerHand& hand, FName& MotionSource, FString& Indentifier, FString& Component);
}; // Size: 0x28

class UMotionControllerComponent : public UPrimitiveComponent
{
    int32 PlayerIndex;                                                                // 0x0450 (size: 0x4)
    EControllerHand hand;                                                             // 0x0454 (size: 0x1)
    FName MotionSource;                                                               // 0x0458 (size: 0x8)
    uint8 bDisableLowLatencyUpdate;                                                   // 0x0460 (size: 0x1)
    ETrackingStatus CurrentTrackingStatus;                                            // 0x0464 (size: 0x1)
    bool bDisplayDeviceModel;                                                         // 0x0465 (size: 0x1)
    FName DisplayModelSource;                                                         // 0x0468 (size: 0x8)
    class UStaticMesh* CustomDisplayMesh;                                             // 0x0470 (size: 0x8)
    TArray<class UMaterialInterface*> DisplayMeshMaterialOverrides;                   // 0x0478 (size: 0x10)
    class UPrimitiveComponent* DisplayComponent;                                      // 0x04F0 (size: 0x8)

    void SetTrackingSource(const EControllerHand NewSource);
    void SetTrackingMotionSource(const FName NewSource);
    void SetShowDeviceModel(const bool bShowControllerModel);
    void SetDisplayModelSource(const FName NewDisplayModelSource);
    void SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh);
    void SetAssociatedPlayerIndex(const int32 NewPlayer);
    void OnMotionControllerUpdated();
    bool IsTracked();
    EControllerHand GetTrackingSource();
    float GetParameterValue(FName InName, bool& bValueFound);
    FVector GetHandJointPosition(int32 jointIndex, bool& bValueFound);
}; // Size: 0x510

class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetIsControllerMotionTrackingEnabledByDefault(bool Enable);
    bool IsMotionTrackingEnabledForSource(int32 PlayerIndex, FName SourceName);
    bool IsMotionTrackingEnabledForDevice(int32 PlayerIndex, EControllerHand hand);
    bool IsMotionTrackingEnabledForComponent(const class UMotionControllerComponent* MotionControllerComponent);
    bool IsMotionTrackedDeviceCountManagementNecessary();
    bool IsMotionSourceTracking(int32 PlayerIndex, FName SourceName);
    int32 GetMotionTrackingEnabledControllerCount();
    int32 GetMaximumMotionTrackedControllerCount();
    FName GetActiveTrackingSystemName();
    TArray<FName> EnumerateMotionSources();
    bool EnableMotionTrackingOfSource(int32 PlayerIndex, FName SourceName);
    bool EnableMotionTrackingOfDevice(int32 PlayerIndex, EControllerHand hand);
    bool EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
    void DisableMotionTrackingOfSource(int32 PlayerIndex, FName SourceName);
    void DisableMotionTrackingOfDevice(int32 PlayerIndex, EControllerHand hand);
    void DisableMotionTrackingOfControllersForPlayer(int32 PlayerIndex);
    void DisableMotionTrackingOfAllControllers();
    void DisableMotionTrackingForComponent(const class UMotionControllerComponent* MotionControllerComponent);
}; // Size: 0x28

class UVRNotificationsComponent : public UActorComponent
{
    FVRNotificationsComponentHMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0x00B0 (size: 0x10)
    void VRNotificationsDelegate();
    FVRNotificationsComponentHMDTrackingInitializedDelegate HMDTrackingInitializedDelegate; // 0x00C0 (size: 0x10)
    void VRNotificationsDelegate();
    FVRNotificationsComponentHMDRecenteredDelegate HMDRecenteredDelegate;             // 0x00D0 (size: 0x10)
    void VRNotificationsDelegate();
    FVRNotificationsComponentHMDLostDelegate HMDLostDelegate;                         // 0x00E0 (size: 0x10)
    void VRNotificationsDelegate();
    FVRNotificationsComponentHMDReconnectedDelegate HMDReconnectedDelegate;           // 0x00F0 (size: 0x10)
    void VRNotificationsDelegate();
    FVRNotificationsComponentHMDConnectCanceledDelegate HMDConnectCanceledDelegate;   // 0x0100 (size: 0x10)
    void VRNotificationsDelegate();
    FVRNotificationsComponentHMDPutOnHeadDelegate HMDPutOnHeadDelegate;               // 0x0110 (size: 0x10)
    void VRNotificationsDelegate();
    FVRNotificationsComponentHMDRemovedFromHeadDelegate HMDRemovedFromHeadDelegate;   // 0x0120 (size: 0x10)
    void VRNotificationsDelegate();
    FVRNotificationsComponentVRControllerRecenteredDelegate VRControllerRecenteredDelegate; // 0x0130 (size: 0x10)
    void VRNotificationsDelegate();
    FVRNotificationsComponentXRTrackingOriginChangedDelegate XRTrackingOriginChangedDelegate; // 0x0140 (size: 0x10)
    void VRNotificationsDelegate();
    FVRNotificationsComponentXRPlayAreaChangedDelegate XRPlayAreaChangedDelegate;     // 0x0150 (size: 0x10)
    void VRNotificationsDelegate();

}; // Size: 0x160

class UXRAssetFunctionLibrary : public UBlueprintFunctionLibrary
{

    class UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(class AActor* Target, const FName SystemName, const FName DeviceName, bool bManualAttachment, const FTransform& RelativeTransform, FXRDeviceId& XRDeviceId);
    class UPrimitiveComponent* AddDeviceVisualizationComponentBlocking(class AActor* Target, const FXRDeviceId& XRDeviceId, bool bManualAttachment, const FTransform& RelativeTransform);
}; // Size: 0x28

class UXRLoadingScreenFunctionLibrary : public UBlueprintFunctionLibrary
{

    void ShowLoadingScreen();
    void SetLoadingScreen(class UTexture* Texture, FVector2D Scale, FVector Offset, bool bShowLoadingMovie, bool bShowOnSet);
    void HideLoadingScreen();
    void ClearLoadingScreenSplashes();
    void AddLoadingScreenSplash(class UTexture* Texture, FVector Translation, FRotator Rotation, FVector2D Size, FRotator DeltaRotation, bool bClearBeforeAdd);
}; // Size: 0x28

#endif
