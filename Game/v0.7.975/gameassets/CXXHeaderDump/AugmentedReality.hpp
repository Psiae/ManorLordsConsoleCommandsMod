#ifndef UE4SS_SDK_AugmentedReality_HPP
#define UE4SS_SDK_AugmentedReality_HPP

#include "AugmentedReality_enums.hpp"

struct FARCameraIntrinsics
{
    FIntPoint ImageResolution;                                                        // 0x0000 (size: 0x8)
    FVector2D FocalLength;                                                            // 0x0008 (size: 0x8)
    FVector2D PrincipalPoint;                                                         // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FAREnvironmentProbeUpdatePayload
{
    FTransform WorldTransform;                                                        // 0x0000 (size: 0x30)

}; // Size: 0x30

struct FARFaceUpdatePayload
{
    FARSessionPayload SessionPayload;                                                 // 0x0000 (size: 0x18)
    FVector LeftEyePosition;                                                          // 0x0018 (size: 0xC)
    FVector RightEyePosition;                                                         // 0x0024 (size: 0xC)
    FVector LookAtTarget;                                                             // 0x0030 (size: 0xC)

}; // Size: 0x40

struct FARGeoAnchorUpdatePayload
{
    FARSessionPayload SessionPayload;                                                 // 0x0000 (size: 0x18)
    FTransform WorldTransform;                                                        // 0x0020 (size: 0x30)
    float Longitude;                                                                  // 0x0050 (size: 0x4)
    float Latitude;                                                                   // 0x0054 (size: 0x4)
    float AltitudeMeters;                                                             // 0x0058 (size: 0x4)
    EARAltitudeSource AltitudeSource;                                                 // 0x005C (size: 0x1)
    FString AnchorName;                                                               // 0x0060 (size: 0x10)

}; // Size: 0x70

struct FARImageUpdatePayload
{
    FARSessionPayload SessionPayload;                                                 // 0x0000 (size: 0x18)
    FTransform WorldTransform;                                                        // 0x0020 (size: 0x30)
    class UARCandidateImage* DetectedImage;                                           // 0x0050 (size: 0x8)
    FVector2D EstimatedSize;                                                          // 0x0058 (size: 0x8)

}; // Size: 0x60

struct FARMeshUpdatePayload
{
    FARSessionPayload SessionPayload;                                                 // 0x0000 (size: 0x18)
    FTransform WorldTransform;                                                        // 0x0020 (size: 0x30)
    EARObjectClassification ObjectClassification;                                     // 0x0050 (size: 0x1)

}; // Size: 0x60

struct FARObjectUpdatePayload
{
    FTransform WorldTransform;                                                        // 0x0000 (size: 0x30)

}; // Size: 0x30

struct FARPlaneUpdatePayload
{
    FARSessionPayload SessionPayload;                                                 // 0x0000 (size: 0x18)
    FTransform WorldTransform;                                                        // 0x0020 (size: 0x30)
    FVector Center;                                                                   // 0x0050 (size: 0xC)
    FVector Extents;                                                                  // 0x005C (size: 0xC)
    TArray<FVector> BoundaryVertices;                                                 // 0x0068 (size: 0x10)
    EARObjectClassification ObjectClassification;                                     // 0x0078 (size: 0x1)

}; // Size: 0x80

struct FARPointUpdatePayload
{
}; // Size: 0x1

struct FARPose2D
{
    FARSkeletonDefinition SkeletonDefinition;                                         // 0x0000 (size: 0x28)
    TArray<FVector2D> JointLocations;                                                 // 0x0028 (size: 0x10)
    TArray<bool> IsJointTracked;                                                      // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FARPose3D
{
    FARSkeletonDefinition SkeletonDefinition;                                         // 0x0000 (size: 0x28)
    TArray<FTransform> JointTransforms;                                               // 0x0028 (size: 0x10)
    TArray<bool> IsJointTracked;                                                      // 0x0038 (size: 0x10)
    EARJointTransformSpace JointTransformSpace;                                       // 0x0048 (size: 0x1)

}; // Size: 0x50

struct FARPoseUpdatePayload
{
    FTransform WorldTransform;                                                        // 0x0000 (size: 0x30)
    TArray<FTransform> JointTransforms;                                               // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FARQRCodeUpdatePayload
{
    FARSessionPayload SessionPayload;                                                 // 0x0000 (size: 0x18)
    FTransform WorldTransform;                                                        // 0x0020 (size: 0x30)
    FVector Extents;                                                                  // 0x0050 (size: 0xC)
    FString QRCode;                                                                   // 0x0060 (size: 0x10)

}; // Size: 0x70

struct FARSessionPayload
{
    int32 ConfigFlags;                                                                // 0x0000 (size: 0x4)
    class UMaterialInterface* DefaultMeshMaterial;                                    // 0x0008 (size: 0x8)
    class UMaterialInterface* DefaultWireframeMeshMaterial;                           // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FARSessionStatus
{
    FString AdditionalInfo;                                                           // 0x0000 (size: 0x10)
    EARSessionStatus status;                                                          // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FARSharedWorldReplicationState
{
    int32 PreviewImageOffset;                                                         // 0x0000 (size: 0x4)
    int32 ARWorldOffset;                                                              // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FARSkeletonDefinition
{
    int32 NumJoints;                                                                  // 0x0000 (size: 0x4)
    TArray<FName> JointNames;                                                         // 0x0008 (size: 0x10)
    TArray<int32> ParentIndices;                                                      // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FARTraceResult
{
    float DistanceFromCamera;                                                         // 0x0000 (size: 0x4)
    EARLineTraceChannels TraceChannel;                                                // 0x0004 (size: 0x1)
    FTransform LocalTransform;                                                        // 0x0010 (size: 0x30)
    class UARTrackedGeometry* TrackedGeometry;                                        // 0x0040 (size: 0x8)

}; // Size: 0x60

struct FARVideoFormat
{
    int32 FPS;                                                                        // 0x0000 (size: 0x4)
    int32 Width;                                                                      // 0x0004 (size: 0x4)
    int32 Height;                                                                     // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FTrackedGeometryGroup
{
    class AARActor* ARActor;                                                          // 0x0000 (size: 0x8)
    class UARComponent* ARComponent;                                                  // 0x0008 (size: 0x8)
    class UARTrackedGeometry* TrackedGeometry;                                        // 0x0010 (size: 0x8)

}; // Size: 0x18

class AARActor : public AActor
{

    class UARComponent* AddARComponent(TSubclassOf<class UARComponent> InComponentClass, const FGuid& NativeID);
}; // Size: 0x220

class AAROriginActor : public AActor
{
}; // Size: 0x220

class AARSharedWorldGameMode : public AGameMode
{
    int32 BufferSizePerChunk;                                                         // 0x0308 (size: 0x4)

    void SetPreviewImageData(TArray<uint8> ImageData);
    void SetARWorldSharingIsReady();
    void SetARSharedWorldData(TArray<uint8> ARWorldData);
    class AARSharedWorldGameState* GetARSharedWorldGameState();
}; // Size: 0x370

class AARSharedWorldGameState : public AGameState
{
    TArray<uint8> PreviewImageData;                                                   // 0x0290 (size: 0x10)
    TArray<uint8> ARWorldData;                                                        // 0x02A0 (size: 0x10)
    int32 PreviewImageBytesTotal;                                                     // 0x02B0 (size: 0x4)
    int32 ARWorldBytesTotal;                                                          // 0x02B4 (size: 0x4)
    int32 PreviewImageBytesDelivered;                                                 // 0x02B8 (size: 0x4)
    int32 ARWorldBytesDelivered;                                                      // 0x02BC (size: 0x4)

    void K2_OnARWorldMapIsReady();
}; // Size: 0x2C8

class AARSharedWorldPlayerController : public APlayerController
{

    void ServerMarkReadyForReceiving();
    void ClientUpdatePreviewImageData(int32 Offset, const TArray<uint8>& Buffer);
    void ClientUpdateARWorldData(int32 Offset, const TArray<uint8>& Buffer);
    void ClientInitSharedWorld(int32 PreviewImageSize, int32 ARWorldDataSize);
}; // Size: 0x588

class AARSkyLight : public ASkyLight
{
    class UAREnvironmentCaptureProbe* CaptureProbe;                                   // 0x0230 (size: 0x8)

    void SetEnvironmentCaptureProbe(class UAREnvironmentCaptureProbe* InCaptureProbe);
}; // Size: 0x240

class UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase
{
}; // Size: 0x50

class UARBasicLightEstimate : public UARLightEstimate
{
    float AmbientIntensityLumens;                                                     // 0x0028 (size: 0x4)
    float AmbientColorTemperatureKelvin;                                              // 0x002C (size: 0x4)
    FLinearColor AmbientColor;                                                        // 0x0030 (size: 0x10)

    float GetAmbientIntensityLumens();
    float GetAmbientColorTemperatureKelvin();
    FLinearColor GetAmbientColor();
}; // Size: 0x40

class UARBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void UnpinComponent(class USceneComponent* ComponentToUnpin);
    bool ToggleARCapture(const bool bOnOff, const EARCaptureType CaptureType);
    void StopARSession();
    void StartARSession(class UARSessionConfig* SessionConfig);
    void SetEnabledXRCamera(bool bOnOff);
    void SetARWorldScale(float InWorldScale);
    void SetARWorldOriginLocationAndRotation(FVector OriginLocation, FRotator OriginRotation, bool bIsTransformInWorldSpace, bool bMaintainUpDirection);
    void SetAlignmentTransform(const FTransform& InAlignmentTransform);
    bool SaveARPinToLocalStore(FName InSaveName, class UARPin* InPin);
    FIntPoint ResizeXRCamera(const FIntPoint& InSize);
    void RemovePin(class UARPin* PinToRemove);
    void RemoveARPinFromLocalStore(FName InSaveName);
    void RemoveAllARPinsFromLocalStore();
    class UARPin* PinComponentToTraceResult(class USceneComponent* ComponentToPin, const FARTraceResult& TraceResult, const FName DebugName);
    bool PinComponentToARPin(class USceneComponent* ComponentToPin, class UARPin* pin);
    class UARPin* PinComponent(class USceneComponent* ComponentToPin, const FTransform& PinToWorldTransform, class UARTrackedGeometry* TrackedGeometry, const FName DebugName);
    void PauseARSession();
    TMap<class FName, class UARPin*> LoadARPinsFromLocalStore();
    TArray<FARTraceResult> LineTraceTrackedObjects3D(const FVector Start, const FVector End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
    TArray<FARTraceResult> LineTraceTrackedObjects(const FVector2D ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
    bool IsSessionTypeSupported(EARSessionType SessionType);
    bool IsSessionTrackingFeatureSupported(EARSessionType SessionType, EARSessionTrackingFeature SessionTrackingFeature);
    bool IsSceneReconstructionSupported(EARSessionType SessionType, EARSceneReconstruction SceneReconstructionMethod);
    bool IsARSupported();
    bool IsARPinLocalStoreSupported();
    bool IsARPinLocalStoreReady();
    EARWorldMappingState GetWorldMappingStatus();
    EARTrackingQualityReason GetTrackingQualityReason();
    EARTrackingQuality GetTrackingQuality();
    TArray<FARVideoFormat> GetSupportedVideoFormats(EARSessionType SessionType);
    class UARSessionConfig* GetSessionConfig();
    TArray<FVector> GetPointCloud();
    class UARTexture* GetPersonSegmentationImage();
    class UARTexture* GetPersonSegmentationDepthImage();
    bool GetObjectClassificationAtLocation(const FVector& InWorldLocation, EARObjectClassification& OutClassification, FVector& OutClassificationLocation, float MaxLocationDiff);
    int32 GetNumberOfTrackedFacesSupported();
    class UARLightEstimate* GetCurrentLightEstimate();
    bool GetCameraIntrinsics(FARCameraIntrinsics& OutCameraIntrinsics);
    class UARTextureCameraImage* GetCameraImage();
    class UARTextureCameraDepth* GetCameraDepth();
    float GetARWorldScale();
    class UARTexture* GetARTexture(EARTextureType TextureType);
    FARSessionStatus GetARSessionStatus();
    TArray<class UARTrackedPose*> GetAllTrackedPoses();
    TArray<class UARTrackedPoint*> GetAllTrackedPoints();
    TArray<class UARPlaneGeometry*> GetAllTrackedPlanes();
    TArray<class UARTrackedImage*> GetAllTrackedImages();
    TArray<class UAREnvironmentCaptureProbe*> GetAllTrackedEnvironmentCaptureProbes();
    TArray<FARPose2D> GetAllTracked2DPoses();
    TArray<class UARPin*> GetAllPins();
    TArray<class UARTrackedGeometry*> GetAllGeometriesByClass(TSubclassOf<class UARTrackedGeometry> GeometryClass);
    TArray<class UARTrackedGeometry*> GetAllGeometries();
    FTransform GetAlignmentTransform();
    TArray<class UARTrackedPoint*> FindTrackedPointsByName(FString PointName);
    void DebugDrawTrackedGeometry(class UARTrackedGeometry* TrackedGeometry, class UObject* WorldContextObject, FLinearColor Color, float OutlineThickness, float PersistForSeconds);
    void DebugDrawPin(class UARPin* ARPin, class UObject* WorldContextObject, FLinearColor Color, float Scale, float PersistForSeconds);
    void CalculateClosestIntersection(const TArray<FVector>& StartPoints, const TArray<FVector>& EndPoints, FVector& ClosestIntersection);
    void CalculateAlignmentTransform(const FTransform& TransformInFirstCoordinateSystem, const FTransform& TransformInSecondCoordinateSystem, FTransform& AlignmentTransform);
    bool AddTrackedPointWithName(const FTransform& WorldTransform, FString PointName, bool bDeletePointsWithSameName);
    class UARCandidateImage* AddRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, FString FriendlyName, float PhysicalWidth);
    bool AddManualEnvironmentCaptureProbe(FVector Location, FVector Extent);
}; // Size: 0x28

class UARCandidateImage : public UDataAsset
{
    class UTexture2D* CandidateTexture;                                               // 0x0030 (size: 0x8)
    FString FriendlyName;                                                             // 0x0038 (size: 0x10)
    float Width;                                                                      // 0x0048 (size: 0x4)
    float Height;                                                                     // 0x004C (size: 0x4)
    EARCandidateImageOrientation Orientation;                                         // 0x0050 (size: 0x1)

    float GetPhysicalWidth();
    float GetPhysicalHeight();
    EARCandidateImageOrientation GetOrientation();
    FString GetFriendlyName();
    class UTexture2D* GetCandidateTexture();
}; // Size: 0x58

class UARCandidateObject : public UDataAsset
{
    TArray<uint8> CandidateObjectData;                                                // 0x0030 (size: 0x10)
    FString FriendlyName;                                                             // 0x0040 (size: 0x10)
    FBox BoundingBox;                                                                 // 0x0050 (size: 0x1C)

    void SetFriendlyName(FString NewName);
    void SetCandidateObjectData(const TArray<uint8>& InCandidateObject);
    void SetBoundingBox(const FBox& InBoundingBox);
    FString GetFriendlyName();
    TArray<uint8> GetCandidateObjectData();
    FBox GetBoundingBox();
}; // Size: 0x70

class UARComponent : public USceneComponent
{
    FGuid NativeID;                                                                   // 0x01F8 (size: 0x10)
    bool bUseDefaultReplication;                                                      // 0x0238 (size: 0x1)
    class UMaterialInterface* DefaultMeshMaterial;                                    // 0x0240 (size: 0x8)
    class UMaterialInterface* DefaultWireframeMeshMaterial;                           // 0x0248 (size: 0x8)
    class UMRMeshComponent* MRMeshComponent;                                          // 0x0250 (size: 0x8)
    class UARTrackedGeometry* MyTrackedGeometry;                                      // 0x0258 (size: 0x8)

    void UpdateVisualization();
    void SetNativeID(FGuid NativeID);
    void ReceiveRemove();
    void OnRep_Payload();
    class UMRMeshComponent* GetMRMesh();
}; // Size: 0x280

class UARDependencyHandler : public UObject
{

    void StartARSessionLatent(class UObject* WorldContextObject, class UARSessionConfig* SessionConfig, FLatentActionInfo LatentInfo);
    void RequestARSessionPermission(class UObject* WorldContextObject, class UARSessionConfig* SessionConfig, FLatentActionInfo LatentInfo, EARServicePermissionRequestResult& OutPermissionResult);
    void InstallARService(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, EARServiceInstallRequestResult& OutInstallResult);
    class UARDependencyHandler* GetARDependencyHandler();
    void CheckARServiceAvailability(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, EARServiceAvailability& OutAvailability);
}; // Size: 0x28

class UAREnvironmentCaptureProbe : public UARTrackedGeometry
{
    FVector Extent;                                                                   // 0x00F8 (size: 0xC)
    class UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture;               // 0x0108 (size: 0x8)

    FVector GetExtent();
    class UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();
}; // Size: 0x110

class UAREnvironmentCaptureProbeTexture : public UTextureCube
{
    EARTextureType TextureType;                                                       // 0x01D0 (size: 0x1)
    float Timestamp;                                                                  // 0x01D4 (size: 0x4)
    FGuid ExternalTextureGuid;                                                        // 0x01D8 (size: 0x10)
    FVector2D Size;                                                                   // 0x01E8 (size: 0x8)

}; // Size: 0x1F0

class UAREnvironmentProbeComponent : public UARComponent
{
    FAREnvironmentProbeUpdatePayload ReplicatedPayload;                               // 0x0280 (size: 0x30)

    void ServerUpdatePayload(const FAREnvironmentProbeUpdatePayload& NewPayload);
    void ReceiveUpdate(const FAREnvironmentProbeUpdatePayload& payload);
    void ReceiveAdd(const FAREnvironmentProbeUpdatePayload& payload);
}; // Size: 0x2B0

class UARFaceComponent : public UARComponent
{
    EARFaceTransformMixing TransformSetting;                                          // 0x0278 (size: 0x1)
    bool bUpdateVertexNormal;                                                         // 0x0279 (size: 0x1)
    bool bFaceOutOfScreen;                                                            // 0x027A (size: 0x1)
    FARFaceUpdatePayload ReplicatedPayload;                                           // 0x0280 (size: 0x40)

    void SetFaceComponentDebugMode(EFaceComponentDebugMode NewDebugMode);
    void ServerUpdatePayload(const FARFaceUpdatePayload& NewPayload);
    void ReceiveUpdate(const FARFaceUpdatePayload& payload);
    void ReceiveAdd(const FARFaceUpdatePayload& payload);
}; // Size: 0x2E0

class UARFaceGeometry : public UARTrackedGeometry
{
    FVector LookAtTarget;                                                             // 0x00F8 (size: 0xC)
    bool bIsTracked;                                                                  // 0x0104 (size: 0x1)
    TMap<EARFaceBlendShape, float> BlendShapes;                                       // 0x0108 (size: 0x50)
    FTransform LeftEyeTransform;                                                      // 0x0190 (size: 0x30)
    FTransform RightEyeTransform;                                                     // 0x01C0 (size: 0x30)

    FTransform GetWorldSpaceEyeTransform(EAREye EYE);
    FTransform GetLocalSpaceEyeTransform(EAREye EYE);
    float GetBlendShapeValue(EARFaceBlendShape BlendShape);
    TMap<EARFaceBlendShape, float> GetBlendShapes();
}; // Size: 0x1F0

class UARGeoAnchor : public UARTrackedGeometry
{

    float GetLongitude();
    float GetLatitude();
    EARAltitudeSource GetAltitudeSource();
    float GetAltitudeMeters();
}; // Size: 0x110

class UARGeoAnchorComponent : public UARComponent
{
    FARGeoAnchorUpdatePayload ReplicatedPayload;                                      // 0x0280 (size: 0x70)

    void SetGeoAnchorComponentDebugMode(EGeoAnchorComponentDebugMode NewDebugMode);
    void ServerUpdatePayload(const FARGeoAnchorUpdatePayload& NewPayload);
    void ReceiveUpdate(const FARGeoAnchorUpdatePayload& payload);
    void ReceiveAdd(const FARGeoAnchorUpdatePayload& payload);
}; // Size: 0x2F0

class UARGeoTrackingSupport : public UObject
{

    class UARGeoTrackingSupport* GetGeoTrackingSupport();
    EARGeoTrackingStateReason GetGeoTrackingStateReason();
    EARGeoTrackingState GetGeoTrackingState();
    EARGeoTrackingAccuracy GetGeoTrackingAccuracy();
    bool AddGeoAnchorAtLocationWithAltitude(float Longitude, float Latitude, float AltitudeMeters, FString OptionalAnchorName);
    bool AddGeoAnchorAtLocation(float Longitude, float Latitude, FString OptionalAnchorName);
}; // Size: 0x28

class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
    FARGetCandidateObjectAsyncTaskBlueprintProxyOnSuccess OnSuccess;                  // 0x0050 (size: 0x10)
    void ARGetCandidateObjectPin(class UARCandidateObject* SavedObject);
    FARGetCandidateObjectAsyncTaskBlueprintProxyOnFailed OnFailed;                    // 0x0060 (size: 0x10)
    void ARGetCandidateObjectPin(class UARCandidateObject* SavedObject);

    class UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(class UObject* WorldContextObject, FVector Location, FVector Extent);
}; // Size: 0x98

class UARImageComponent : public UARComponent
{
    FARImageUpdatePayload ReplicatedPayload;                                          // 0x0280 (size: 0x60)

    void SetImageComponentDebugMode(EImageComponentDebugMode NewDebugMode);
    void ServerUpdatePayload(const FARImageUpdatePayload& NewPayload);
    void ReceiveUpdate(const FARImageUpdatePayload& payload);
    void ReceiveAdd(const FARImageUpdatePayload& payload);
}; // Size: 0x2E0

class UARLifeCycleComponent : public USceneComponent
{
    FARLifeCycleComponentOnARActorSpawnedDelegate OnARActorSpawnedDelegate;           // 0x01F8 (size: 0x10)
    void InstanceARActorSpawnedDelegate(UClass* ComponentClass, FGuid NativeID, class AARActor* SpawnedActor);
    FARLifeCycleComponentOnARActorToBeDestroyedDelegate OnARActorToBeDestroyedDelegate; // 0x0208 (size: 0x10)
    void InstanceARActorToBeDestroyedDelegate(class AARActor* Actor);

    void ServerSpawnARActor(UClass* ComponentClass, FGuid NativeID);
    void ServerDestroyARActor(class AARActor* Actor);
    void InstanceARActorToBeDestroyedDelegate__DelegateSignature(class AARActor* Actor);
    void InstanceARActorSpawnedDelegate__DelegateSignature(UClass* ComponentClass, FGuid NativeID, class AARActor* SpawnedActor);
}; // Size: 0x230

class UARLightEstimate : public UObject
{
}; // Size: 0x28

class UARMeshComponent : public UARComponent
{
    FARMeshUpdatePayload ReplicatedPayload;                                           // 0x0280 (size: 0x60)

    void ServerUpdatePayload(const FARMeshUpdatePayload& NewPayload);
    void ReceiveUpdate(const FARMeshUpdatePayload& payload);
    void ReceiveAdd(const FARMeshUpdatePayload& payload);
}; // Size: 0x2E0

class UARMeshGeometry : public UARTrackedGeometry
{

    bool GetObjectClassificationAtLocation(const FVector& InWorldLocation, EARObjectClassification& OutClassification, FVector& OutClassificationLocation, float MaxLocationDiff);
}; // Size: 0x100

class UARObjectComponent : public UARComponent
{
    FARObjectUpdatePayload ReplicatedPayload;                                         // 0x0280 (size: 0x30)

    void ServerUpdatePayload(const FARObjectUpdatePayload& NewPayload);
    void ReceiveUpdate(const FARObjectUpdatePayload& payload);
    void ReceiveAdd(const FARObjectUpdatePayload& payload);
}; // Size: 0x2B0

class UARPin : public UObject
{
    class UARTrackedGeometry* TrackedGeometry;                                        // 0x0028 (size: 0x8)
    class USceneComponent* PinnedComponent;                                           // 0x0030 (size: 0x8)
    FTransform LocalToTrackingTransform;                                              // 0x0040 (size: 0x30)
    FTransform LocalToAlignedTrackingTransform;                                       // 0x0070 (size: 0x30)
    EARTrackingState TrackingState;                                                   // 0x00A0 (size: 0x1)
    FARPinOnARTrackingStateChanged OnARTrackingStateChanged;                          // 0x00C0 (size: 0x10)
    void OnARTrackingStateChanged(EARTrackingState NewTrackingState);
    FARPinOnARTransformUpdated OnARTransformUpdated;                                  // 0x00D0 (size: 0x10)
    void OnARTransformUpdated(const FTransform& OldToNewTransform);

    EARTrackingState GetTrackingState();
    class UARTrackedGeometry* GetTrackedGeometry();
    class USceneComponent* GetPinnedComponent();
    FTransform GetLocalToWorldTransform();
    FTransform GetLocalToTrackingTransform();
    FName GetDebugName();
    void DebugDraw(class UWorld* World, const FLinearColor& Color, float Scale, float PersistForSeconds);
}; // Size: 0xF0

class UARPlaneComponent : public UARComponent
{
    FARPlaneUpdatePayload ReplicatedPayload;                                          // 0x0280 (size: 0x80)

    void SetPlaneComponentDebugMode(EPlaneComponentDebugMode NewDebugMode);
    void SetObjectClassificationDebugColors(const TMap<class EARObjectClassification, class FLinearColor>& InColors);
    void ServerUpdatePayload(const FARPlaneUpdatePayload& NewPayload);
    void ReceiveUpdate(const FARPlaneUpdatePayload& payload);
    void ReceiveAdd(const FARPlaneUpdatePayload& payload);
    TMap<class EARObjectClassification, class FLinearColor> GetObjectClassificationDebugColors();
}; // Size: 0x300

class UARPlaneGeometry : public UARTrackedGeometry
{
    EARPlaneOrientation Orientation;                                                  // 0x00F8 (size: 0x1)
    FVector Center;                                                                   // 0x00FC (size: 0xC)
    FVector Extent;                                                                   // 0x0108 (size: 0xC)
    TArray<FVector> BoundaryPolygon;                                                  // 0x0118 (size: 0x10)
    class UARPlaneGeometry* SubsumedBy;                                               // 0x0128 (size: 0x8)

    class UARPlaneGeometry* GetSubsumedBy();
    EARPlaneOrientation GetOrientation();
    FVector GetExtent();
    FVector GetCenter();
    TArray<FVector> GetBoundaryPolygonInLocalSpace();
}; // Size: 0x130

class UARPointComponent : public UARComponent
{
    FARPointUpdatePayload ReplicatedPayload;                                          // 0x0278 (size: 0x1)

    void ServerUpdatePayload(const FARPointUpdatePayload& NewPayload);
    void ReceiveUpdate(const FARPointUpdatePayload& payload);
    void ReceiveAdd(const FARPointUpdatePayload& payload);
}; // Size: 0x280

class UARPoseComponent : public UARComponent
{
    FARPoseUpdatePayload ReplicatedPayload;                                           // 0x0280 (size: 0x40)

    void SetPoseComponentDebugMode(EPoseComponentDebugMode NewDebugMode);
    void ServerUpdatePayload(const FARPoseUpdatePayload& NewPayload);
    void ReceiveUpdate(const FARPoseUpdatePayload& payload);
    void ReceiveAdd(const FARPoseUpdatePayload& payload);
}; // Size: 0x2C0

class UARQRCodeComponent : public UARComponent
{
    FARQRCodeUpdatePayload ReplicatedPayload;                                         // 0x0280 (size: 0x70)

    void SetQRCodeComponentDebugMode(EQRCodeComponentDebugMode NewDebugMode);
    void ServerUpdatePayload(const FARQRCodeUpdatePayload& NewPayload);
    void ReceiveUpdate(const FARQRCodeUpdatePayload& payload);
    void ReceiveAdd(const FARQRCodeUpdatePayload& payload);
}; // Size: 0x2F0

class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
    FARSaveWorldAsyncTaskBlueprintProxyOnSuccess OnSuccess;                           // 0x0050 (size: 0x10)
    void ARSaveWorldPin(const TArray<uint8>& SavedWorld);
    FARSaveWorldAsyncTaskBlueprintProxyOnFailed OnFailed;                             // 0x0060 (size: 0x10)
    void ARSaveWorldPin(const TArray<uint8>& SavedWorld);

    class UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(class UObject* WorldContextObject);
}; // Size: 0x80

class UARSessionConfig : public UDataAsset
{
    bool bGenerateMeshDataFromTrackedGeometry;                                        // 0x0030 (size: 0x1)
    bool bGenerateCollisionForMeshData;                                               // 0x0031 (size: 0x1)
    bool bGenerateNavMeshForMeshData;                                                 // 0x0032 (size: 0x1)
    bool bUseMeshDataForOcclusion;                                                    // 0x0033 (size: 0x1)
    bool bRenderMeshDataInWireframe;                                                  // 0x0034 (size: 0x1)
    bool bTrackSceneObjects;                                                          // 0x0035 (size: 0x1)
    bool bUsePersonSegmentationForOcclusion;                                          // 0x0036 (size: 0x1)
    bool bUseSceneDepthForOcclusion;                                                  // 0x0037 (size: 0x1)
    bool bUseAutomaticImageScaleEstimation;                                           // 0x0038 (size: 0x1)
    bool bUseStandardOnboardingUX;                                                    // 0x0039 (size: 0x1)
    EARWorldAlignment WorldAlignment;                                                 // 0x003A (size: 0x1)
    EARSessionType SessionType;                                                       // 0x003B (size: 0x1)
    EARPlaneDetectionMode PlaneDetectionMode;                                         // 0x003C (size: 0x1)
    bool bHorizontalPlaneDetection;                                                   // 0x003D (size: 0x1)
    bool bVerticalPlaneDetection;                                                     // 0x003E (size: 0x1)
    bool bEnableAutoFocus;                                                            // 0x003F (size: 0x1)
    EARLightEstimationMode LightEstimationMode;                                       // 0x0040 (size: 0x1)
    EARFrameSyncMode FrameSyncMode;                                                   // 0x0041 (size: 0x1)
    bool bEnableAutomaticCameraOverlay;                                               // 0x0042 (size: 0x1)
    bool bEnableAutomaticCameraTracking;                                              // 0x0043 (size: 0x1)
    bool bResetCameraTracking;                                                        // 0x0044 (size: 0x1)
    bool bResetTrackedObjects;                                                        // 0x0045 (size: 0x1)
    TArray<class UARCandidateImage*> CandidateImages;                                 // 0x0048 (size: 0x10)
    int32 MaxNumSimultaneousImagesTracked;                                            // 0x0058 (size: 0x4)
    EAREnvironmentCaptureProbeType EnvironmentCaptureProbeType;                       // 0x005C (size: 0x1)
    TArray<uint8> WorldMapData;                                                       // 0x0060 (size: 0x10)
    TArray<class UARCandidateObject*> CandidateObjects;                               // 0x0070 (size: 0x10)
    FARVideoFormat DesiredVideoFormat;                                                // 0x0080 (size: 0xC)
    bool bUseOptimalVideoFormat;                                                      // 0x008C (size: 0x1)
    EARFaceTrackingDirection FaceTrackingDirection;                                   // 0x008D (size: 0x1)
    EARFaceTrackingUpdate FaceTrackingUpdate;                                         // 0x008E (size: 0x1)
    int32 MaxNumberOfTrackedFaces;                                                    // 0x0090 (size: 0x4)
    TArray<uint8> SerializedARCandidateImageDatabase;                                 // 0x0098 (size: 0x10)
    EARSessionTrackingFeature EnabledSessionTrackingFeature;                          // 0x00A8 (size: 0x1)
    EARSceneReconstruction SceneReconstructionMethod;                                 // 0x00A9 (size: 0x1)
    TSubclassOf<class UARPlaneComponent> PlaneComponentClass;                         // 0x00B0 (size: 0x8)
    TSubclassOf<class UARPointComponent> PointComponentClass;                         // 0x00B8 (size: 0x8)
    TSubclassOf<class UARFaceComponent> FaceComponentClass;                           // 0x00C0 (size: 0x8)
    TSubclassOf<class UARImageComponent> ImageComponentClass;                         // 0x00C8 (size: 0x8)
    TSubclassOf<class UARQRCodeComponent> QRCodeComponentClass;                       // 0x00D0 (size: 0x8)
    TSubclassOf<class UARPoseComponent> PoseComponentClass;                           // 0x00D8 (size: 0x8)
    TSubclassOf<class UAREnvironmentProbeComponent> EnvironmentProbeComponentClass;   // 0x00E0 (size: 0x8)
    TSubclassOf<class UARObjectComponent> ObjectComponentClass;                       // 0x00E8 (size: 0x8)
    TSubclassOf<class UARMeshComponent> MeshComponentClass;                           // 0x00F0 (size: 0x8)
    TSubclassOf<class UARGeoAnchorComponent> GeoAnchorComponentClass;                 // 0x00F8 (size: 0x8)
    class UMaterialInterface* DefaultMeshMaterial;                                    // 0x0100 (size: 0x8)
    class UMaterialInterface* DefaultWireframeMeshMaterial;                           // 0x0108 (size: 0x8)

    bool ShouldResetTrackedObjects();
    bool ShouldResetCameraTracking();
    bool ShouldRenderCameraOverlay();
    bool ShouldEnableCameraTracking();
    bool ShouldEnableAutoFocus();
    void SetWorldMapData(TArray<uint8> WorldMapData);
    void SetSessionTrackingFeatureToEnable(EARSessionTrackingFeature InSessionTrackingFeature);
    void SetSceneReconstructionMethod(EARSceneReconstruction InSceneReconstructionMethod);
    void SetResetTrackedObjects(bool bNewValue);
    void SetResetCameraTracking(bool bNewValue);
    void SetFaceTrackingUpdate(EARFaceTrackingUpdate InUpdate);
    void SetFaceTrackingDirection(EARFaceTrackingDirection InDirection);
    void SetEnableAutoFocus(bool bNewValue);
    void SetDesiredVideoFormat(FARVideoFormat NewFormat);
    void SetCandidateObjectList(const TArray<class UARCandidateObject*>& InCandidateObjects);
    TArray<uint8> GetWorldMapData();
    EARWorldAlignment GetWorldAlignment();
    EARSessionType GetSessionType();
    EARSceneReconstruction GetSceneReconstructionMethod();
    EARPlaneDetectionMode GetPlaneDetectionMode();
    int32 GetMaxNumSimultaneousImagesTracked();
    EARLightEstimationMode GetLightEstimationMode();
    EARFrameSyncMode GetFrameSyncMode();
    EARFaceTrackingUpdate GetFaceTrackingUpdate();
    EARFaceTrackingDirection GetFaceTrackingDirection();
    EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType();
    EARSessionTrackingFeature GetEnabledSessionTrackingFeature();
    FARVideoFormat GetDesiredVideoFormat();
    TArray<class UARCandidateObject*> GetCandidateObjectList();
    TArray<class UARCandidateImage*> GetCandidateImageList();
    void AddCandidateObject(class UARCandidateObject* CandidateObject);
    void AddCandidateImage(class UARCandidateImage* NewCandidateImage);
}; // Size: 0x110

class UARTexture : public UTexture
{
    EARTextureType TextureType;                                                       // 0x0178 (size: 0x1)
    float Timestamp;                                                                  // 0x017C (size: 0x4)
    FGuid ExternalTextureGuid;                                                        // 0x0180 (size: 0x10)
    FVector2D Size;                                                                   // 0x0190 (size: 0x8)

}; // Size: 0x1A0

class UARTextureCameraDepth : public UARTexture
{
    EARDepthQuality DepthQuality;                                                     // 0x0198 (size: 0x1)
    EARDepthAccuracy DepthAccuracy;                                                   // 0x0199 (size: 0x1)
    bool bIsTemporallySmoothed;                                                       // 0x019A (size: 0x1)

}; // Size: 0x1A0

class UARTextureCameraImage : public UARTexture
{
}; // Size: 0x1A0

class UARTraceResultDummy : public UObject
{
}; // Size: 0x28

class UARTraceResultLibrary : public UBlueprintFunctionLibrary
{

    class UARTrackedGeometry* GetTrackedGeometry(const FARTraceResult& TraceResult);
    EARLineTraceChannels GetTraceChannel(const FARTraceResult& TraceResult);
    FTransform GetLocalTransform(const FARTraceResult& TraceResult);
    FTransform GetLocalToWorldTransform(const FARTraceResult& TraceResult);
    FTransform GetLocalToTrackingTransform(const FARTraceResult& TraceResult);
    float GetDistanceFromCamera(const FARTraceResult& TraceResult);
}; // Size: 0x28

class UARTrackableNotifyComponent : public UActorComponent
{
    FARTrackableNotifyComponentOnAddTrackedGeometry OnAddTrackedGeometry;             // 0x00B0 (size: 0x10)
    void TrackableDelegate(class UARTrackedGeometry* TrackedGeometry);
    FARTrackableNotifyComponentOnUpdateTrackedGeometry OnUpdateTrackedGeometry;       // 0x00C0 (size: 0x10)
    void TrackableDelegate(class UARTrackedGeometry* TrackedGeometry);
    FARTrackableNotifyComponentOnRemoveTrackedGeometry OnRemoveTrackedGeometry;       // 0x00D0 (size: 0x10)
    void TrackableDelegate(class UARTrackedGeometry* TrackedGeometry);
    FARTrackableNotifyComponentOnAddTrackedPlane OnAddTrackedPlane;                   // 0x00E0 (size: 0x10)
    void TrackablePlaneDelegate(class UARPlaneGeometry* TrackedPlane);
    FARTrackableNotifyComponentOnUpdateTrackedPlane OnUpdateTrackedPlane;             // 0x00F0 (size: 0x10)
    void TrackablePlaneDelegate(class UARPlaneGeometry* TrackedPlane);
    FARTrackableNotifyComponentOnRemoveTrackedPlane OnRemoveTrackedPlane;             // 0x0100 (size: 0x10)
    void TrackablePlaneDelegate(class UARPlaneGeometry* TrackedPlane);
    FARTrackableNotifyComponentOnAddTrackedPoint OnAddTrackedPoint;                   // 0x0110 (size: 0x10)
    void TrackablePointDelegate(class UARTrackedPoint* TrackedPoint);
    FARTrackableNotifyComponentOnUpdateTrackedPoint OnUpdateTrackedPoint;             // 0x0120 (size: 0x10)
    void TrackablePointDelegate(class UARTrackedPoint* TrackedPoint);
    FARTrackableNotifyComponentOnRemoveTrackedPoint OnRemoveTrackedPoint;             // 0x0130 (size: 0x10)
    void TrackablePointDelegate(class UARTrackedPoint* TrackedPoint);
    FARTrackableNotifyComponentOnAddTrackedImage OnAddTrackedImage;                   // 0x0140 (size: 0x10)
    void TrackableImageDelegate(class UARTrackedImage* TrackedImage);
    FARTrackableNotifyComponentOnUpdateTrackedImage OnUpdateTrackedImage;             // 0x0150 (size: 0x10)
    void TrackableImageDelegate(class UARTrackedImage* TrackedImage);
    FARTrackableNotifyComponentOnRemoveTrackedImage OnRemoveTrackedImage;             // 0x0160 (size: 0x10)
    void TrackableImageDelegate(class UARTrackedImage* TrackedImage);
    FARTrackableNotifyComponentOnAddTrackedFace OnAddTrackedFace;                     // 0x0170 (size: 0x10)
    void TrackableFaceDelegate(class UARFaceGeometry* TrackedFace);
    FARTrackableNotifyComponentOnUpdateTrackedFace OnUpdateTrackedFace;               // 0x0180 (size: 0x10)
    void TrackableFaceDelegate(class UARFaceGeometry* TrackedFace);
    FARTrackableNotifyComponentOnRemoveTrackedFace OnRemoveTrackedFace;               // 0x0190 (size: 0x10)
    void TrackableFaceDelegate(class UARFaceGeometry* TrackedFace);
    FARTrackableNotifyComponentOnAddTrackedEnvProbe OnAddTrackedEnvProbe;             // 0x01A0 (size: 0x10)
    void TrackableEnvProbeDelegate(class UAREnvironmentCaptureProbe* TrackedEnvProbe);
    FARTrackableNotifyComponentOnUpdateTrackedEnvProbe OnUpdateTrackedEnvProbe;       // 0x01B0 (size: 0x10)
    void TrackableEnvProbeDelegate(class UAREnvironmentCaptureProbe* TrackedEnvProbe);
    FARTrackableNotifyComponentOnRemoveTrackedEnvProbe OnRemoveTrackedEnvProbe;       // 0x01C0 (size: 0x10)
    void TrackableEnvProbeDelegate(class UAREnvironmentCaptureProbe* TrackedEnvProbe);
    FARTrackableNotifyComponentOnAddTrackedObject OnAddTrackedObject;                 // 0x01D0 (size: 0x10)
    void TrackableObjectDelegate(class UARTrackedObject* TrackedObject);
    FARTrackableNotifyComponentOnUpdateTrackedObject OnUpdateTrackedObject;           // 0x01E0 (size: 0x10)
    void TrackableObjectDelegate(class UARTrackedObject* TrackedObject);
    FARTrackableNotifyComponentOnRemoveTrackedObject OnRemoveTrackedObject;           // 0x01F0 (size: 0x10)
    void TrackableObjectDelegate(class UARTrackedObject* TrackedObject);

}; // Size: 0x200

class UARTrackedGeometry : public UObject
{
    FGuid UniqueId;                                                                   // 0x0028 (size: 0x10)
    FTransform LocalToTrackingTransform;                                              // 0x0040 (size: 0x30)
    FTransform LocalToAlignedTrackingTransform;                                       // 0x0070 (size: 0x30)
    EARTrackingState TrackingState;                                                   // 0x00A0 (size: 0x1)
    class UMRMeshComponent* UnderlyingMesh;                                           // 0x00B0 (size: 0x8)
    EARObjectClassification ObjectClassification;                                     // 0x00B8 (size: 0x1)
    EARSpatialMeshUsageFlags SpatialMeshUsageFlags;                                   // 0x00B9 (size: 0x1)
    int32 LastUpdateFrameNumber;                                                      // 0x00D0 (size: 0x4)
    FName DebugName;                                                                  // 0x00E0 (size: 0x8)

    bool IsTracked();
    bool HasSpatialMeshUsageFlag(const EARSpatialMeshUsageFlags InFlag);
    class UMRMeshComponent* GetUnderlyingMesh();
    EARTrackingState GetTrackingState();
    EARObjectClassification GetObjectClassification();
    FString GetName();
    FTransform GetLocalToWorldTransform();
    FTransform GetLocalToTrackingTransform();
    float GetLastUpdateTimestamp();
    int32 GetLastUpdateFrameNumber();
    FName GetDebugName();
}; // Size: 0x100

class UARTrackedImage : public UARTrackedGeometry
{
    class UARCandidateImage* DetectedImage;                                           // 0x00F8 (size: 0x8)
    FVector2D EstimatedSize;                                                          // 0x0100 (size: 0x8)

    FVector2D GetEstimateSize();
    class UARCandidateImage* GetDetectedImage();
}; // Size: 0x110

class UARTrackedObject : public UARTrackedGeometry
{
    class UARCandidateObject* DetectedObject;                                         // 0x00F8 (size: 0x8)

    class UARCandidateObject* GetDetectedObject();
}; // Size: 0x100

class UARTrackedPoint : public UARTrackedGeometry
{
}; // Size: 0x100

class UARTrackedPose : public UARTrackedGeometry
{
    FARPose3D TrackedPose;                                                            // 0x00F8 (size: 0x50)

    FARPose3D GetTrackedPoseData();
}; // Size: 0x150

class UARTrackedQRCode : public UARTrackedImage
{
    FString QRCode;                                                                   // 0x0108 (size: 0x10)
    int32 Version;                                                                    // 0x0118 (size: 0x4)

}; // Size: 0x120

class UARTypesDummyClass : public UObject
{
}; // Size: 0x28

class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
    FCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxyOnSuccess OnSuccess;          // 0x0050 (size: 0x10)
    void GeoTrackingAvailabilityDelegate(bool bIsAvailable, FString Error);
    FCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxyOnFailed OnFailed;            // 0x0060 (size: 0x10)
    void GeoTrackingAvailabilityDelegate(bool bIsAvailable, FString Error);

    void GeoTrackingAvailabilityDelegate__DelegateSignature(bool bIsAvailable, FString Error);
    class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailabilityAtLocation(class UObject* WorldContextObject, float Longitude, float Latitude);
    class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailability(class UObject* WorldContextObject);
}; // Size: 0xA0

class UGetGeoLocationAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
    FGetGeoLocationAsyncTaskBlueprintProxyOnSuccess OnSuccess;                        // 0x0050 (size: 0x10)
    void GetGeoLocationDelegate(float Longitude, float Latitude, float Altitude, FString Error);
    FGetGeoLocationAsyncTaskBlueprintProxyOnFailed OnFailed;                          // 0x0060 (size: 0x10)
    void GetGeoLocationDelegate(float Longitude, float Latitude, float Altitude, FString Error);

    void GetGeoLocationDelegate__DelegateSignature(float Longitude, float Latitude, float Altitude, FString Error);
    class UGetGeoLocationAsyncTaskBlueprintProxy* GetGeoLocationAtWorldPosition(class UObject* WorldContextObject, const FVector& WorldPosition);
}; // Size: 0xA0

#endif
