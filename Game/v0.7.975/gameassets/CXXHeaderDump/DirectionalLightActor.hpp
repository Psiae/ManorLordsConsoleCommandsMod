#ifndef UE4SS_SDK_DirectionalLightActor_HPP
#define UE4SS_SDK_DirectionalLightActor_HPP

class ADirectionalLightActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UDirectionalLightComponent* mainDirectionalLight;                           // 0x0228 (size: 0x8)
    bool bContactShadows;                                                             // 0x0230 (size: 0x1)
    class ASkyLight* SkyLight;                                                        // 0x0238 (size: 0x8)
    FRotator startingRot;                                                             // 0x0240 (size: 0xC)
    class AWeatherMaster* WMaster;                                                    // 0x0250 (size: 0x8)
    float Time;                                                                       // 0x0258 (size: 0x4)
    class APostProcessVolume* postProcess;                                            // 0x0260 (size: 0x8)
    float globalExposure;                                                             // 0x0268 (size: 0x4)
    float shadowSharpnessZoomLevel;                                                   // 0x026C (size: 0x4)
    float lastAdjustedClearance;                                                      // 0x0270 (size: 0x4)
    float lerpedStorm;                                                                // 0x0274 (size: 0x4)
    class AMyPawnCPP_BP3_C* pawnRef;                                                  // 0x0278 (size: 0x8)
    float dynamicDirectionBasedExposureCorrection;                                    // 0x0280 (size: 0x4)
    float offset_fill;                                                                // 0x0284 (size: 0x4)
    float gamma_fill;                                                                 // 0x0288 (size: 0x4)
    float offset_front;                                                               // 0x028C (size: 0x4)
    float gamma_front;                                                                // 0x0290 (size: 0x4)
    float storm_exposure;                                                             // 0x0294 (size: 0x4)
    float cloudiness;                                                                 // 0x0298 (size: 0x4)
    float raining;                                                                    // 0x029C (size: 0x4)
    bool isNight;                                                                     // 0x02A0 (size: 0x1)
    float sunPitch;                                                                   // 0x02A4 (size: 0x4)
    bool hasDayNightCycle;                                                            // 0x02A8 (size: 0x1)
    class AFogBP_C* FogBP;                                                            // 0x02B0 (size: 0x8)

    void dynamicShadowBias();
    void setDayNightCycle(bool hasDayNightCycle);
    float dynamicVignette();
    void setEnableCloudShadows(bool Enable);
    void UserConstructionScript();
    void RecaptureSky();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_DirectionalLightActor(int32 EntryPoint);
}; // Size: 0x2B8

#endif
