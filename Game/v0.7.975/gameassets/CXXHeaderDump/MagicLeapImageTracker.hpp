#ifndef UE4SS_SDK_MagicLeapImageTracker_HPP
#define UE4SS_SDK_MagicLeapImageTracker_HPP

#include "MagicLeapImageTracker_enums.hpp"

struct FMagicLeapImageTargetSettings
{
    class UTexture2D* ImageTexture;                                                   // 0x0000 (size: 0x8)
    FString Name;                                                                     // 0x0008 (size: 0x10)
    float LongerDimension;                                                            // 0x0018 (size: 0x4)
    bool bIsStationary;                                                               // 0x001C (size: 0x1)
    bool bIsEnabled;                                                                  // 0x001D (size: 0x1)

}; // Size: 0x20

struct FMagicLeapImageTargetState
{
    EMagicLeapImageTargetStatus TrackingStatus;                                       // 0x0000 (size: 0x1)
    FVector Location;                                                                 // 0x0004 (size: 0xC)
    FRotator Rotation;                                                                // 0x0010 (size: 0xC)

}; // Size: 0x1C

class UMagicLeapImageTrackerComponent : public USceneComponent
{
    class UTexture2D* TargetImageTexture;                                             // 0x01F8 (size: 0x8)
    FString Name;                                                                     // 0x0200 (size: 0x10)
    float LongerDimension;                                                            // 0x0210 (size: 0x4)
    bool bIsStationary;                                                               // 0x0214 (size: 0x1)
    bool bUseUnreliablePose;                                                          // 0x0215 (size: 0x1)
    EMagicLeapImageTargetOrientation AxisOrientation;                                 // 0x0216 (size: 0x1)
    FMagicLeapImageTrackerComponentOnSetImageTargetSucceeded OnSetImageTargetSucceeded; // 0x0218 (size: 0x10)
    void MagicLeapSetImageTargetSucceededMulti();
    FMagicLeapImageTrackerComponentOnSetImageTargetFailed OnSetImageTargetFailed;     // 0x0228 (size: 0x10)
    void MagicLeapSetImageTargetFailedMulti();
    FMagicLeapImageTrackerComponentOnImageTargetFound OnImageTargetFound;             // 0x0238 (size: 0x10)
    void MagicLeapImageTargetFoundMulti();
    FMagicLeapImageTrackerComponentOnImageTargetLost OnImageTargetLost;               // 0x0248 (size: 0x10)
    void MagicLeapImageTargetLostMulti();
    FMagicLeapImageTrackerComponentOnImageTargetUnreliableTracking OnImageTargetUnreliableTracking; // 0x0258 (size: 0x10)
    void MagicLeapImageTargetUnreliableTrackingMulti(const FVector& LastTrackedLocation, const FRotator& LastTrackedRotation, const FVector& NewUnreliableLocation, const FRotator& NewUnreliableRotation);

    bool SetTargetAsync(class UTexture2D* ImageTarget);
    bool RemoveTargetAsync();
}; // Size: 0x270

class UMagicLeapImageTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetMaxSimultaneousTargets(int32 MaxSimultaneousTargets);
    bool IsImageTrackingEnabled();
    int32 GetMaxSimultaneousTargets();
    void EnableImageTracking(bool bEnable);
}; // Size: 0x28

#endif
