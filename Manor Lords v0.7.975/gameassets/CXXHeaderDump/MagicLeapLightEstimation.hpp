#ifndef UE4SS_SDK_MagicLeapLightEstimation_HPP
#define UE4SS_SDK_MagicLeapLightEstimation_HPP

#include "MagicLeapLightEstimation_enums.hpp"

struct FMagicLeapLightEstimationAmbientGlobalState
{
    TArray<float> AmbientIntensityNits;                                               // 0x0000 (size: 0x10)
    FTimespan Timestamp;                                                              // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FMagicLeapLightEstimationColorTemperatureState
{
    float ColorTemperatureKelvin;                                                     // 0x0000 (size: 0x4)
    FLinearColor AmbientColor;                                                        // 0x0004 (size: 0x10)
    FTimespan Timestamp;                                                              // 0x0018 (size: 0x8)

}; // Size: 0x20

class UMagicLeapLightEstimationFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool IsTrackerValid();
    bool GetColorTemperatureState(FMagicLeapLightEstimationColorTemperatureState& ColorTemperatureState);
    bool GetAmbientGlobalState(FMagicLeapLightEstimationAmbientGlobalState& GlobalAmbientState);
    void DestroyTracker();
    bool CreateTracker();
}; // Size: 0x28

class UMagicLeapLightingTrackingComponent : public UActorComponent
{
    bool UseGlobalAmbience;                                                           // 0x00B0 (size: 0x1)
    bool UseColorTemp;                                                                // 0x00B1 (size: 0x1)

}; // Size: 0xC0

#endif
