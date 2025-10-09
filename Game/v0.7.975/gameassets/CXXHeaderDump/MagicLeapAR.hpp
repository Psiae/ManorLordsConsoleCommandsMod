#ifndef UE4SS_SDK_MagicLeapAR_HPP
#define UE4SS_SDK_MagicLeapAR_HPP

#include "MagicLeapAR_enums.hpp"

class ALuminAROrigin : public AAROriginActor
{
    class UMRMeshComponent* MRMeshComponent;                                          // 0x0220 (size: 0x8)
    class UMaterialInterface* PlaneSurfaceMaterial;                                   // 0x0228 (size: 0x8)
    class UMaterialInterface* WireframeMaterial;                                      // 0x0230 (size: 0x8)

}; // Size: 0x2E0

class ULuminARCandidateImage : public UARCandidateImage
{
    bool bUseUnreliablePose;                                                          // 0x0058 (size: 0x1)
    bool bImageIsStationary;                                                          // 0x0059 (size: 0x1)
    EMagicLeapImageTargetOrientation AxisOrientation;                                 // 0x005A (size: 0x1)

    bool GetUseUnreliablePose();
    bool GetImageIsStationary();
    EMagicLeapImageTargetOrientation GetAxisOrientation();
}; // Size: 0x60

class ULuminARFrameFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool LuminARLineTrace(class UObject* WorldContextObject, const FVector2D& ScreenPosition, TSet<ELuminARLineTraceChannel> TraceChannels, TArray<FARTraceResult>& OutHitResults);
    ELuminARTrackingState GetTrackingState();
}; // Size: 0x28

class ULuminARImageTrackingFunctionLibrary : public UBlueprintFunctionLibrary
{

    class ULuminARCandidateImage* AddLuminRuntimeCandidateImageEx(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, FString FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary, EMagicLeapImageTargetOrientation InAxisOrientation);
    class ULuminARCandidateImage* AddLuminRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, FString FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary);
}; // Size: 0x28

class ULuminARLightEstimate : public UARBasicLightEstimate
{
    TArray<float> AmbientIntensityNits;                                               // 0x0040 (size: 0x10)

    TArray<float> GetAmbientIntensityNits();
}; // Size: 0x50

class ULuminARSessionConfig : public UARSessionConfig
{
    FMagicLeapPlanesQuery PlanesQuery;                                                // 0x0110 (size: 0x60)
    int32 MaxPlaneQueryResults;                                                       // 0x0170 (size: 0x4)
    int32 MinPlaneArea;                                                               // 0x0174 (size: 0x4)
    bool bArbitraryOrientationPlaneDetection;                                         // 0x0178 (size: 0x1)
    FVector PlaneSearchExtents;                                                       // 0x017C (size: 0xC)
    TArray<EMagicLeapPlaneQueryFlags> PlaneQueryFlags;                                // 0x0188 (size: 0x10)
    bool bDiscardZeroExtentPlanes;                                                    // 0x0198 (size: 0x1)
    bool bDefaultUseUnreliablePose;                                                   // 0x0199 (size: 0x1)

}; // Size: 0x1A0

class ULuminARSessionFunctionLibrary : public UBlueprintFunctionLibrary
{

    void StartLuminARSession(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class ULuminARSessionConfig* Configuration);
}; // Size: 0x28

#endif
