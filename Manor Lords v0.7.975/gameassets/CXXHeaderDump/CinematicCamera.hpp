#ifndef UE4SS_SDK_CinematicCamera_HPP
#define UE4SS_SDK_CinematicCamera_HPP

#include "CinematicCamera_enums.hpp"

struct FCameraFilmbackSettings
{
    float SensorWidth;                                                                // 0x0000 (size: 0x4)
    float SensorHeight;                                                               // 0x0004 (size: 0x4)
    float SensorAspectRatio;                                                          // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FCameraFocusSettings
{
    ECameraFocusMethod FocusMethod;                                                   // 0x0000 (size: 0x1)
    float ManualFocusDistance;                                                        // 0x0004 (size: 0x4)
    FCameraTrackingFocusSettings TrackingFocusSettings;                               // 0x0008 (size: 0x38)
    uint8 bDrawDebugFocusPlane;                                                       // 0x0040 (size: 0x1)
    FColor DebugFocusPlaneColor;                                                      // 0x0044 (size: 0x4)
    uint8 bSmoothFocusChanges;                                                        // 0x0048 (size: 0x1)
    float FocusSmoothingInterpSpeed;                                                  // 0x004C (size: 0x4)
    float FocusOffset;                                                                // 0x0050 (size: 0x4)

}; // Size: 0x58

struct FCameraLensSettings
{
    float MinFocalLength;                                                             // 0x0000 (size: 0x4)
    float MaxFocalLength;                                                             // 0x0004 (size: 0x4)
    float MinFStop;                                                                   // 0x0008 (size: 0x4)
    float MaxFStop;                                                                   // 0x000C (size: 0x4)
    float MinimumFocusDistance;                                                       // 0x0010 (size: 0x4)
    int32 DiaphragmBladeCount;                                                        // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FCameraLookatTrackingSettings
{
    uint8 bEnableLookAtTracking;                                                      // 0x0000 (size: 0x1)
    uint8 bDrawDebugLookAtTrackingPosition;                                           // 0x0000 (size: 0x1)
    float LookAtTrackingInterpSpeed;                                                  // 0x0004 (size: 0x4)
    TSoftObjectPtr<AActor> ActorToTrack;                                              // 0x0018 (size: 0x28)
    FVector RelativeOffset;                                                           // 0x0040 (size: 0xC)
    uint8 bAllowRoll;                                                                 // 0x004C (size: 0x1)

}; // Size: 0x50

struct FCameraTrackingFocusSettings
{
    TSoftObjectPtr<AActor> ActorToTrack;                                              // 0x0000 (size: 0x28)
    FVector RelativeOffset;                                                           // 0x0028 (size: 0xC)
    uint8 bDrawDebugTrackingFocusPoint;                                               // 0x0034 (size: 0x1)

}; // Size: 0x38

struct FNamedFilmbackPreset
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FCameraFilmbackSettings FilmbackSettings;                                         // 0x0010 (size: 0xC)

}; // Size: 0x20

struct FNamedLensPreset
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FCameraLensSettings LensSettings;                                                 // 0x0010 (size: 0x18)

}; // Size: 0x28

class ACameraRig_Crane : public AActor
{
    float CranePitch;                                                                 // 0x0220 (size: 0x4)
    float CraneYaw;                                                                   // 0x0224 (size: 0x4)
    float CraneArmLength;                                                             // 0x0228 (size: 0x4)
    bool bLockMountPitch;                                                             // 0x022C (size: 0x1)
    bool bLockMountYaw;                                                               // 0x022D (size: 0x1)
    class USceneComponent* TransformComponent;                                        // 0x0230 (size: 0x8)
    class USceneComponent* CraneYawControl;                                           // 0x0238 (size: 0x8)
    class USceneComponent* CranePitchControl;                                         // 0x0240 (size: 0x8)
    class USceneComponent* CraneCameraMount;                                          // 0x0248 (size: 0x8)

}; // Size: 0x250

class ACameraRig_Rail : public AActor
{
    float CurrentPositionOnRail;                                                      // 0x0220 (size: 0x4)
    bool bLockOrientationToRail;                                                      // 0x0224 (size: 0x1)
    class USceneComponent* TransformComponent;                                        // 0x0228 (size: 0x8)
    class USplineComponent* RailSplineComponent;                                      // 0x0230 (size: 0x8)
    class USceneComponent* RailCameraMount;                                           // 0x0238 (size: 0x8)

    class USplineComponent* GetRailSplineComponent();
}; // Size: 0x240

class ACineCameraActor : public ACameraActor
{
    FCameraLookatTrackingSettings LookatTrackingSettings;                             // 0x07B0 (size: 0x50)

    class UCineCameraComponent* GetCineCameraComponent();
}; // Size: 0x810

class UCineCameraComponent : public UCameraComponent
{
    FCameraFilmbackSettings FilmbackSettings;                                         // 0x07D0 (size: 0xC)
    FCameraFilmbackSettings Filmback;                                                 // 0x07DC (size: 0xC)
    FCameraLensSettings LensSettings;                                                 // 0x07E8 (size: 0x18)
    FCameraFocusSettings FocusSettings;                                               // 0x0800 (size: 0x58)
    float CurrentFocalLength;                                                         // 0x0858 (size: 0x4)
    float CurrentAperture;                                                            // 0x085C (size: 0x4)
    float CurrentFocusDistance;                                                       // 0x0860 (size: 0x4)
    TArray<FNamedFilmbackPreset> FilmbackPresets;                                     // 0x0870 (size: 0x10)
    TArray<FNamedLensPreset> LensPresets;                                             // 0x0880 (size: 0x10)
    FString DefaultFilmbackPresetName;                                                // 0x0890 (size: 0x10)
    FString DefaultFilmbackPreset;                                                    // 0x08A0 (size: 0x10)
    FString DefaultLensPresetName;                                                    // 0x08B0 (size: 0x10)
    float DefaultLensFocalLength;                                                     // 0x08C0 (size: 0x4)
    float DefaultLensFStop;                                                           // 0x08C4 (size: 0x4)

    void SetLensPresetByName(FString InPresetName);
    void SetFilmbackPresetByName(FString InPresetName);
    void SetCurrentFocalLength(float InFocalLength);
    float GetVerticalFieldOfView();
    TArray<FNamedLensPreset> GetLensPresetsCopy();
    FString GetLensPresetName();
    float GetHorizontalFieldOfView();
    TArray<FNamedFilmbackPreset> GetFilmbackPresetsCopy();
    FString GetFilmbackPresetName();
    FString GetDefaultFilmbackPresetName();
}; // Size: 0x8D0

#endif
