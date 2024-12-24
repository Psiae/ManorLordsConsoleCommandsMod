#ifndef UE4SS_SDK_FogBP_HPP
#define UE4SS_SDK_FogBP_HPP

class AFogBP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UExponentialHeightFogComponent* ExponentialHeightFog;                       // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)
    class AWeatherMaster* WMaster;                                                    // 0x02A8 (size: 0x8)
    double fogMultiplier;                                                             // 0x02B0 (size: 0x8)
    class UCurveLinearColor* sunAngleToFogColorCurve;                                 // 0x02B8 (size: 0x8)
    class ADirectionalLightActor_C* DirectionalLight;                                 // 0x02C0 (size: 0x8)
    double blueAtmosphericBrightness;                                                 // 0x02C8 (size: 0x8)
    double snowLevelFogInfluence;                                                     // 0x02D0 (size: 0x8)
    double percipitationFogInfluence;                                                 // 0x02D8 (size: 0x8)

    void getValuesFromMPC(double& wetness, double& raining_, double& drought_, double& snowLevel_, double& snowfall_);
    void updateFog();
    void tuneFog();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_FogBP(int32 EntryPoint);
}; // Size: 0x2E0

#endif
