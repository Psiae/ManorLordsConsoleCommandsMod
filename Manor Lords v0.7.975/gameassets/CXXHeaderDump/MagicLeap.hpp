#ifndef UE4SS_SDK_MagicLeap_HPP
#define UE4SS_SDK_MagicLeap_HPP

#include "MagicLeap_enums.hpp"

struct FMagicLeapGraphicsClientPerformanceInfo
{
    float FrameStartCPUCompAcquireCPUTimeMs;                                          // 0x0000 (size: 0x4)
    float FrameStartCPUFrameEndGPUTimeMs;                                             // 0x0004 (size: 0x4)
    float FrameStartCPUFrameStartCPUTimeMs;                                           // 0x0008 (size: 0x4)
    float FrameDurationCPUTimeMs;                                                     // 0x000C (size: 0x4)
    float FrameDurationGPUTimeMs;                                                     // 0x0010 (size: 0x4)
    float FrameInternalDurationCPUTimeMs;                                             // 0x0014 (size: 0x4)
    float FrameInternalDurationGPUTimeMs;                                             // 0x0018 (size: 0x4)

}; // Size: 0x1C

struct FMagicLeapHeadTrackingState
{
    EMagicLeapHeadTrackingMode Mode;                                                  // 0x0000 (size: 0x1)
    EMagicLeapHeadTrackingError Error;                                                // 0x0001 (size: 0x1)
    float Confidence;                                                                 // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FMagicLeapMeshBlockInfo
{
    FGuid BlockID;                                                                    // 0x0000 (size: 0x10)
    FVector BlockPosition;                                                            // 0x0010 (size: 0xC)
    FRotator BlockOrientation;                                                        // 0x001C (size: 0xC)
    FVector BlockDimensions;                                                          // 0x0028 (size: 0xC)
    FTimespan Timestamp;                                                              // 0x0038 (size: 0x8)
    EMagicLeapMeshState BlockState;                                                   // 0x0040 (size: 0x1)

}; // Size: 0x48

struct FMagicLeapMeshBlockRequest
{
    FGuid BlockID;                                                                    // 0x0000 (size: 0x10)
    EMagicLeapMeshLOD LevelOfDetail;                                                  // 0x0010 (size: 0x1)

}; // Size: 0x14

struct FMagicLeapRaycastHitResult
{
    EMagicLeapRaycastResultState HitState;                                            // 0x0000 (size: 0x1)
    FVector HitPoint;                                                                 // 0x0004 (size: 0xC)
    FVector Normal;                                                                   // 0x0010 (size: 0xC)
    float Confidence;                                                                 // 0x001C (size: 0x4)
    int32 UserData;                                                                   // 0x0020 (size: 0x4)

}; // Size: 0x24

struct FMagicLeapRaycastQueryParams
{
    FVector Position;                                                                 // 0x0000 (size: 0xC)
    FVector Direction;                                                                // 0x000C (size: 0xC)
    FVector UpVector;                                                                 // 0x0018 (size: 0xC)
    int32 Width;                                                                      // 0x0024 (size: 0x4)
    int32 Height;                                                                     // 0x0028 (size: 0x4)
    float HorizontalFovDegrees;                                                       // 0x002C (size: 0x4)
    bool CollideWithUnobserved;                                                       // 0x0030 (size: 0x1)
    int32 UserData;                                                                   // 0x0034 (size: 0x4)

}; // Size: 0x38

struct FMagicLeapResult
{
    bool bSuccess;                                                                    // 0x0000 (size: 0x1)
    FString AdditionalInfo;                                                           // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FMagicLeapTrackingMeshInfo
{
    FTimespan Timestamp;                                                              // 0x0000 (size: 0x8)
    TArray<FMagicLeapMeshBlockInfo> BlockData;                                        // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FPurchaseConfirmation
{
    FString PackageName;                                                              // 0x0010 (size: 0x10)
    PurchaseType Type;                                                                // 0x0048 (size: 0x1)

}; // Size: 0x50

struct FPurchaseItemDetails
{
    FString Price;                                                                    // 0x0010 (size: 0x10)
    FString Name;                                                                     // 0x0020 (size: 0x10)
    PurchaseType Type;                                                                // 0x0030 (size: 0x1)

}; // Size: 0x40

class IMagicLeapMeshBlockSelectorInterface : public IInterface
{

    void SelectMeshBlocks(const FMagicLeapTrackingMeshInfo& NewMeshInfo, TArray<FMagicLeapMeshBlockRequest>& RequestedMesh);
}; // Size: 0x28

class UInAppPurchaseComponent : public UActorComponent
{
    FInAppPurchaseComponentInAppPurchaseLogMessage InAppPurchaseLogMessage;           // 0x00B0 (size: 0x10)
    void InAppPurchaseLogMessage(FString LogMessage);
    FInAppPurchaseComponentGetItemsDetailsSuccess GetItemsDetailsSuccess;             // 0x00C0 (size: 0x10)
    void GetItemsDetailsSuccess(const TArray<FPurchaseItemDetails>& ItemsDetails);
    FInAppPurchaseComponentGetItemsDetailsFailure GetItemsDetailsFailure;             // 0x00D0 (size: 0x10)
    void GetItemsDetailsFailure();
    FInAppPurchaseComponentPurchaseConfirmationSuccess PurchaseConfirmationSuccess;   // 0x00E0 (size: 0x10)
    void PurchaseConfirmationSuccess(const FPurchaseConfirmation& PurchaseConfirmations);
    FInAppPurchaseComponentPurchaseConfirmationFailure PurchaseConfirmationFailure;   // 0x00F0 (size: 0x10)
    void PurchaseConfirmationFailure();
    FInAppPurchaseComponentGetPurchaseHistorySuccess GetPurchaseHistorySuccess;       // 0x0100 (size: 0x10)
    void GetPurchaseHistorySuccess(const TArray<FPurchaseConfirmation>& PurchaseHistory);
    FInAppPurchaseComponentGetPurchaseHistoryFailure GetPurchaseHistoryFailure;       // 0x0110 (size: 0x10)
    void GetPurchaseHistoryFailure();

    bool TryPurchaseItemAsync(const FPurchaseItemDetails& ItemDetails);
    bool TryGetPurchaseHistoryAsync(int32 InNumPages);
    bool TryGetItemsDetailsAsync(const TArray<FString>& ItemIDs);
    void PurchaseConfirmationSuccess__DelegateSignature(const FPurchaseConfirmation& PurchaseConfirmations);
    void PurchaseConfirmationFailure__DelegateSignature();
    void InAppPurchaseLogMessage__DelegateSignature(FString LogMessage);
    void GetPurchaseHistorySuccess__DelegateSignature(const TArray<FPurchaseConfirmation>& PurchaseHistory);
    void GetPurchaseHistoryFailure__DelegateSignature();
    void GetItemsDetailsSuccess__DelegateSignature(const TArray<FPurchaseItemDetails>& ItemsDetails);
    void GetItemsDetailsFailure__DelegateSignature();
}; // Size: 0x128

class ULuminApplicationLifecycleComponent : public UApplicationLifecycleComponent
{
    FLuminApplicationLifecycleComponentDeviceHasReactivatedDelegate DeviceHasReactivatedDelegate; // 0x0140 (size: 0x10)
    void LuminApplicationLifetimeDelegate();
    FLuminApplicationLifecycleComponentDeviceWillEnterRealityModeDelegate DeviceWillEnterRealityModeDelegate; // 0x0150 (size: 0x10)
    void LuminApplicationLifetimeDelegate();
    FLuminApplicationLifecycleComponentDeviceWillGoInStandbyDelegate DeviceWillGoInStandbyDelegate; // 0x0160 (size: 0x10)
    void LuminApplicationLifetimeDelegate();
    FLuminApplicationLifecycleComponentFocusLostDelegate FocusLostDelegate;           // 0x0170 (size: 0x10)
    void LuminApplicationLifetimeFocusLostDelegate(EFocusLostReason reason);
    FLuminApplicationLifecycleComponentFocusGainedDelegate FocusGainedDelegate;       // 0x0180 (size: 0x10)
    void LuminApplicationLifetimeDelegate();

}; // Size: 0x190

class UMagicLeapHMDFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetStabilizationDepthActor(const class AActor* InStabilizationDepthActor, bool bSetFocusActor);
    void SetFocusActor(const class AActor* InFocusActor, bool bSetStabilizationActor);
    void SetBaseRotation(const FRotator& InBaseRotation);
    void SetBasePosition(const FVector& InBasePosition);
    void SetBaseOrientation(const FQuat& InBaseOrientation);
    bool SetAppReady();
    bool IsRunningOnMagicLeapHMD();
    int32 GetPlatformAPILevel();
    int32 GetMLSDKVersionRevision();
    int32 GetMLSDKVersionMinor();
    int32 GetMLSDKVersionMajor();
    FString GetMLSDKVersion();
    int32 GetMinimumAPILevel();
    bool GetHeadTrackingState(FMagicLeapHeadTrackingState& State);
    bool GetHeadTrackingMapEvents(TSet<EMagicLeapHeadTrackingMapEvent>& MapEvents);
    bool GetGraphicsClientPerformanceInfo(FMagicLeapGraphicsClientPerformanceInfo& PerformanceInfo);
}; // Size: 0x28

class UMagicLeapHeadTrackingNotificationsComponent : public UVRNotificationsComponent
{
    FMagicLeapHeadTrackingNotificationsComponentOnHeadTrackingLost OnHeadTrackingLost; // 0x0160 (size: 0x10)
    void VRNotificationsDelegate();
    FMagicLeapHeadTrackingNotificationsComponentOnHeadTrackingRecovered OnHeadTrackingRecovered; // 0x0170 (size: 0x10)
    void VRNotificationsDelegate();
    FMagicLeapHeadTrackingNotificationsComponentOnHeadTrackingRecoveryFailed OnHeadTrackingRecoveryFailed; // 0x0180 (size: 0x10)
    void VRNotificationsDelegate();
    FMagicLeapHeadTrackingNotificationsComponentOnHeadTrackingNewSessionStarted OnHeadTrackingNewSessionStarted; // 0x0190 (size: 0x10)
    void VRNotificationsDelegate();

}; // Size: 0x1F0

class UMagicLeapMeshTrackerComponent : public USceneComponent
{
    FMagicLeapMeshTrackerComponentOnMeshTrackerUpdated OnMeshTrackerUpdated;          // 0x0200 (size: 0x10)
    void OnMeshTrackerUpdated(FGuid ID, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<float>& Confidence);
    bool ScanWorld;                                                                   // 0x0210 (size: 0x1)
    EMagicLeapMeshType MeshType;                                                      // 0x0211 (size: 0x1)
    class UBoxComponent* BoundingVolume;                                              // 0x0218 (size: 0x8)
    EMagicLeapMeshLOD LevelOfDetail;                                                  // 0x0220 (size: 0x1)
    float PerimeterOfGapsToFill;                                                      // 0x0224 (size: 0x4)
    bool Planarize;                                                                   // 0x0228 (size: 0x1)
    float DisconnectedSectionArea;                                                    // 0x022C (size: 0x4)
    bool RequestNormals;                                                              // 0x0230 (size: 0x1)
    bool RequestVertexConfidence;                                                     // 0x0231 (size: 0x1)
    EMagicLeapMeshVertexColorMode VertexColorMode;                                    // 0x0232 (size: 0x1)
    TArray<FColor> BlockVertexColors;                                                 // 0x0238 (size: 0x10)
    FLinearColor VertexColorFromConfidenceZero;                                       // 0x0248 (size: 0x10)
    FLinearColor VertexColorFromConfidenceOne;                                        // 0x0258 (size: 0x10)
    bool RemoveOverlappingTriangles;                                                  // 0x0268 (size: 0x1)
    class UMRMeshComponent* MRMesh;                                                   // 0x0270 (size: 0x8)
    int32 BricksPerFrame;                                                             // 0x0278 (size: 0x4)

    void SelectMeshBlocks(const FMagicLeapTrackingMeshInfo& NewMeshInfo, TArray<FMagicLeapMeshBlockRequest>& RequestedMesh);
    void OnMeshTrackerUpdated__DelegateSignature(FGuid ID, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<float>& Confidence);
    int32 GetNumQueuedBlockUpdates();
    void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
    void DisconnectBlockSelector();
    void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
    void ConnectBlockSelector(TScriptInterface<class IMagicLeapMeshBlockSelectorInterface> Selector);
}; // Size: 0x290

class UMagicLeapRaycastComponent : public UActorComponent
{

    bool RequestRaycast(const FMagicLeapRaycastQueryParams& RequestParams, const FRequestRaycastResultDelegate& ResultDelegate);
    void RaycastResultDelegate__DelegateSignature(FMagicLeapRaycastHitResult HitResult);
}; // Size: 0x118

class UMagicLeapRaycastFunctionLibrary : public UBlueprintFunctionLibrary
{

    FMagicLeapRaycastQueryParams MakeRaycastQueryParams(FVector Position, FVector Direction, FVector UpVector, int32 Width, int32 Height, float HorizontalFovDegrees, bool CollideWithUnobserved, int32 UserData);
}; // Size: 0x28

class UMagicLeapSettings : public UObject
{
    bool bEnableZI;                                                                   // 0x0028 (size: 0x1)
    bool bUseVulkanForZI;                                                             // 0x0029 (size: 0x1)
    bool bUseMLAudioForZI;                                                            // 0x002A (size: 0x1)

}; // Size: 0x30

#endif
