#ifndef UE4SS_SDK_DirectionalLightActor_HPP
#define UE4SS_SDK_DirectionalLightActor_HPP

class ADirectionalLightActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UDirectionalLightComponent* mainDirectionalLight;                           // 0x0298 (size: 0x8)
    bool bContactShadows;                                                             // 0x02A0 (size: 0x1)
    class ASkyLight* SkyLight;                                                        // 0x02A8 (size: 0x8)
    FRotator startingRot;                                                             // 0x02B0 (size: 0x18)
    class AWeatherMaster* WMaster;                                                    // 0x02C8 (size: 0x8)
    double Time;                                                                      // 0x02D0 (size: 0x8)
    class APostProcessVolume* postProcess;                                            // 0x02D8 (size: 0x8)
    double globalExposure;                                                            // 0x02E0 (size: 0x8)
    double shadowSharpnessZoomLevel;                                                  // 0x02E8 (size: 0x8)
    double lastAdjustedClearance;                                                     // 0x02F0 (size: 0x8)
    double lerpedStorm;                                                               // 0x02F8 (size: 0x8)
    class AMyPawnCPP_BP3_C* pawnRef;                                                  // 0x0300 (size: 0x8)
    double dynamicDirectionBasedExposureCorrection;                                   // 0x0308 (size: 0x8)
    double offset_fill;                                                               // 0x0310 (size: 0x8)
    double gamma_fill;                                                                // 0x0318 (size: 0x8)
    double offset_front;                                                              // 0x0320 (size: 0x8)
    double gamma_front;                                                               // 0x0328 (size: 0x8)
    double storm_exposure;                                                            // 0x0330 (size: 0x8)
    double cloudiness;                                                                // 0x0338 (size: 0x8)
    double raining;                                                                   // 0x0340 (size: 0x8)
    bool isNight;                                                                     // 0x0348 (size: 0x1)
    double sunPitch;                                                                  // 0x0350 (size: 0x8)
    bool hasDayNightCycle;                                                            // 0x0358 (size: 0x1)
    class AFogBP_C* FogBP;                                                            // 0x0360 (size: 0x8)

    void dynamicShadowBias();
    void setDayNightCycle(bool hasDayNightCycle);
    double dynamicVignette();
    void setEnableCloudShadows(bool Enable);
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void RecaptureSky();
    void ExecuteUbergraph_DirectionalLightActor(int32 EntryPoint);
}; // Size: 0x368

#endif
