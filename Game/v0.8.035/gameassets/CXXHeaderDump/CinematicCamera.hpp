#ifndef UE4SS_SDK_CinematicCamera_HPP
#define UE4SS_SDK_CinematicCamera_HPP

#include "CinematicCamera_enums.hpp"

struct FCameraFilmbackSettings
{
    float SensorWidth;                                                                // 0x0000 (size: 0x4)
    float SensorHeight;                                                               // 0x0004 (size: 0x4)
    float SensorHorizontalOffset;                                                     // 0x0008 (size: 0x4)
    float SensorVerticalOffset;                                                       // 0x000C (size: 0x4)
    float SensorAspectRatio;                                                          // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FCameraFocusSettings
{
    ECameraFocusMethod FocusMethod;                                                   // 0x0000 (size: 0x1)
    float ManualFocusDistance;                                                        // 0x0004 (size: 0x4)
    FCameraTrackingFocusSettings TrackingFocusSettings;                               // 0x0008 (size: 0x48)
    uint8 bSmoothFocusChanges;                                                        // 0x0050 (size: 0x1)
    float FocusSmoothingInterpSpeed;                                                  // 0x0054 (size: 0x4)
    float FocusOffset;                                                                // 0x0058 (size: 0x4)

}; // Size: 0x60

struct FCameraLensSettings
{
    float MinFocalLength;                                                             // 0x0000 (size: 0x4)
    float MaxFocalLength;                                                             // 0x0004 (size: 0x4)
    float MinFStop;                                                                   // 0x0008 (size: 0x4)
    float MaxFStop;                                                                   // 0x000C (size: 0x4)
    float MinimumFocusDistance;                                                       // 0x0010 (size: 0x4)
    float SqueezeFactor;                                                              // 0x0014 (size: 0x4)
    int32 DiaphragmBladeCount;                                                        // 0x0018 (size: 0x4)

}; // Size: 0x1C

struct FCameraLookatTrackingSettings
{
    uint8 bEnableLookAtTracking;                                                      // 0x0000 (size: 0x1)
    uint8 bDrawDebugLookAtTrackingPosition;                                           // 0x0000 (size: 0x1)
    float LookAtTrackingInterpSpeed;                                                  // 0x0004 (size: 0x4)
    TSoftObjectPtr<AActor> ActorToTrack;                                              // 0x0020 (size: 0x28)
    FVector RelativeOffset;                                                           // 0x0048 (size: 0x18)
    uint8 bAllowRoll;                                                                 // 0x0060 (size: 0x1)

}; // Size: 0x68

struct FCameraTrackingFocusSettings
{
    TSoftObjectPtr<AActor> ActorToTrack;                                              // 0x0000 (size: 0x28)
    FVector RelativeOffset;                                                           // 0x0028 (size: 0x18)
    uint8 bDrawDebugTrackingFocusPoint;                                               // 0x0040 (size: 0x1)

}; // Size: 0x48

struct FNamedFilmbackPreset
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FCameraFilmbackSettings FilmbackSettings;                                         // 0x0010 (size: 0x14)

}; // Size: 0x28

struct FNamedLensPreset
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FCameraLensSettings LensSettings;                                                 // 0x0010 (size: 0x1C)

}; // Size: 0x30

struct FNamedPlateCropPreset
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FPlateCropSettings CropSettings;                                                  // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FPlateCropSettings
{
    float AspectRatio;                                                                // 0x0000 (size: 0x4)

}; // Size: 0x4

class ACameraRig_Crane : public AActor
{
    float CranePitch;                                                                 // 0x02A8 (size: 0x4)
    float CraneYaw;                                                                   // 0x02AC (size: 0x4)
    float CraneArmLength;                                                             // 0x02B0 (size: 0x4)
    bool bLockMountPitch;                                                             // 0x02B4 (size: 0x1)
    bool bLockMountYaw;                                                               // 0x02B5 (size: 0x1)
    class USceneComponent* TransformComponent;                                        // 0x02B8 (size: 0x8)
    class USceneComponent* CraneYawControl;                                           // 0x02C0 (size: 0x8)
    class USceneComponent* CranePitchControl;                                         // 0x02C8 (size: 0x8)
    class USceneComponent* CraneCameraMount;                                          // 0x02D0 (size: 0x8)

}; // Size: 0x2D8

class ACameraRig_Rail : public AActor
{
    float CurrentPositionOnRail;                                                      // 0x02A8 (size: 0x4)
    bool bLockOrientationToRail;                                                      // 0x02AC (size: 0x1)
    class USceneComponent* TransformComponent;                                        // 0x02B0 (size: 0x8)
    class USplineComponent* RailSplineComponent;                                      // 0x02B8 (size: 0x8)
    class USceneComponent* RailCameraMount;                                           // 0x02C0 (size: 0x8)

    class USplineComponent* GetRailSplineComponent();
}; // Size: 0x2C8

class ACineCameraActor : public ACameraActor
{
    FCameraLookatTrackingSettings LookatTrackingSettings;                             // 0x09D0 (size: 0x68)

    class UCineCameraComponent* GetCineCameraComponent();
}; // Size: 0xA50

class UCineCameraComponent : public UCameraComponent
{
    FCameraFilmbackSettings FilmbackSettings;                                         // 0x0A00 (size: 0x14)
    FCameraFilmbackSettings Filmback;                                                 // 0x0A14 (size: 0x14)
    FCameraLensSettings LensSettings;                                                 // 0x0A28 (size: 0x1C)
    FCameraFocusSettings FocusSettings;                                               // 0x0A48 (size: 0x60)
    FPlateCropSettings CropSettings;                                                  // 0x0AA8 (size: 0x4)
    float CurrentFocalLength;                                                         // 0x0AAC (size: 0x4)
    float CurrentAperture;                                                            // 0x0AB0 (size: 0x4)
    float CurrentFocusDistance;                                                       // 0x0AB4 (size: 0x4)
    uint8 bOverride_CustomNearClippingPlane;                                          // 0x0AB8 (size: 0x1)
    float CustomNearClippingPlane;                                                    // 0x0ABC (size: 0x4)
    TArray<FNamedFilmbackPreset> FilmbackPresets;                                     // 0x0AC8 (size: 0x10)
    TArray<FNamedLensPreset> LensPresets;                                             // 0x0AD8 (size: 0x10)
    FString DefaultFilmbackPresetName;                                                // 0x0AE8 (size: 0x10)
    FString DefaultFilmbackPreset;                                                    // 0x0AF8 (size: 0x10)
    FString DefaultLensPresetName;                                                    // 0x0B08 (size: 0x10)
    float DefaultLensFocalLength;                                                     // 0x0B18 (size: 0x4)
    float DefaultLensFStop;                                                           // 0x0B1C (size: 0x4)

    void SetLensSettings(const FCameraLensSettings& NewLensSettings);
    void SetLensPresetByName(FString InPresetName);
    void SetFocusSettings(const FCameraFocusSettings& NewFocusSettings);
    void SetFilmbackPresetByName(FString InPresetName);
    void SetFilmback(const FCameraFilmbackSettings& NewFilmback);
    void SetCustomNearClippingPlane(const float NewCustomNearClippingPlane);
    void SetCurrentFocalLength(float InFocalLength);
    void SetCurrentAperture(const float NewCurrentAperture);
    void SetCropSettings(const FPlateCropSettings& NewCropSettings);
    void SetCropPresetByName(FString InPresetName);
    float GetVerticalProjectionOffset();
    float GetVerticalFieldOfView();
    TArray<FNamedLensPreset> GetLensPresetsCopy();
    FString GetLensPresetName();
    float GetHorizontalProjectionOffset();
    float GetHorizontalFieldOfView();
    TArray<FNamedFilmbackPreset> GetFilmbackPresetsCopy();
    FString GetFilmbackPresetName();
    FString GetDefaultFilmbackPresetName();
    FString GetCropPresetName();
}; // Size: 0xB20

class UCineCameraSettings : public UDeveloperSettings
{
    FString DefaultLensPresetName;                                                    // 0x0038 (size: 0x10)
    float DefaultLensFocalLength;                                                     // 0x0048 (size: 0x4)
    float DefaultLensFStop;                                                           // 0x004C (size: 0x4)
    TArray<FNamedLensPreset> LensPresets;                                             // 0x0050 (size: 0x10)
    FString DefaultFilmbackPreset;                                                    // 0x0060 (size: 0x10)
    TArray<FNamedFilmbackPreset> FilmbackPresets;                                     // 0x0070 (size: 0x10)
    FString DefaultCropPresetName;                                                    // 0x0080 (size: 0x10)
    TArray<FNamedPlateCropPreset> CropPresets;                                        // 0x0090 (size: 0x10)

    void SetLensPresets(const TArray<FNamedLensPreset>& InLensPresets);
    void SetFilmbackPresets(const TArray<FNamedFilmbackPreset>& InFilmbackPresets);
    void SetDefaultLensPresetName(const FString InDefaultLensPresetName);
    void SetDefaultLensFStop(const float InDefaultLensFStop);
    void SetDefaultLensFocalLength(const float InDefaultLensFocalLength);
    void SetDefaultFilmbackPreset(const FString InDefaultFilmbackPreset);
    void SetDefaultCropPresetName(const FString InDefaultCropPresetName);
    void SetCropPresets(const TArray<FNamedPlateCropPreset>& InCropPresets);
    TArray<FString> GetLensPresetNames();
    bool GetLensPresetByName(const FString PresetName, FCameraLensSettings& LensSettings);
    TArray<FString> GetFilmbackPresetNames();
    bool GetFilmbackPresetByName(const FString PresetName, FCameraFilmbackSettings& FilmbackSettings);
    TArray<FString> GetCropPresetNames();
    bool GetCropPresetByName(const FString PresetName, FPlateCropSettings& CropSettings);
    class UCineCameraSettings* GetCineCameraSettings();
}; // Size: 0xB0

#endif
