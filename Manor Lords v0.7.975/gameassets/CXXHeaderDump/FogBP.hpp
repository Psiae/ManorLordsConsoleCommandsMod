#ifndef UE4SS_SDK_FogBP_HPP
#define UE4SS_SDK_FogBP_HPP

class AFogBP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UExponentialHeightFogComponent* ExponentialHeightFog;                       // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    class AWeatherMaster* WMaster;                                                    // 0x0238 (size: 0x8)
    float FogMultiplier;                                                              // 0x0240 (size: 0x4)
    class UCurveLinearColor* sunAngleToFogColorCurve;                                 // 0x0248 (size: 0x8)
    class ADirectionalLightActor_C* DirectionalLight;                                 // 0x0250 (size: 0x8)
    float blueAtmosphericBrightness;                                                  // 0x0258 (size: 0x4)
    float snowLevelFogInfluence;                                                      // 0x025C (size: 0x4)
    float percipitationFogInfluence;                                                  // 0x0260 (size: 0x4)

    void getValuesFromMPC(float& wetness, float& raining_, float& drought_, float& snowLevel_, float& snowfall_);
    void updateFog();
    void tuneFog();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_FogBP(int32 EntryPoint);
}; // Size: 0x264

#endif
