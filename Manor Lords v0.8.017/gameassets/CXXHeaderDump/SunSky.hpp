#ifndef UE4SS_SDK_SunSky_HPP
#define UE4SS_SDK_SunSky_HPP

class ASunSky_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UVolumetricCloudComponent* VolumetricCloud;                                 // 0x0298 (size: 0x8)
    class USkyAtmosphereComponent* SkyAtmosphere;                                     // 0x02A0 (size: 0x8)
    class UDirectionalLightComponent* DirectionalLight;                               // 0x02A8 (size: 0x8)
    class USkyLightComponent* SkyLight;                                               // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* CompassMesh;                                          // 0x02B8 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x02C0 (size: 0x8)
    double Latitude;                                                                  // 0x02C8 (size: 0x8)
    double Longitude;                                                                 // 0x02D0 (size: 0x8)
    int32 Year;                                                                       // 0x02D8 (size: 0x4)
    int32 month;                                                                      // 0x02DC (size: 0x4)
    int32 day;                                                                        // 0x02E0 (size: 0x4)
    double TimeZone;                                                                  // 0x02E8 (size: 0x8)
    bool UseDaylightSavingTime;                                                       // 0x02F0 (size: 0x1)
    double NorthOffset;                                                               // 0x02F8 (size: 0x8)
    double Elevation;                                                                 // 0x0300 (size: 0x8)
    double CorrectedElevation;                                                        // 0x0308 (size: 0x8)
    double Azimuth;                                                                   // 0x0310 (size: 0x8)
    double SolarTime;                                                                 // 0x0318 (size: 0x8)
    int32 DSTStartMonth;                                                              // 0x0320 (size: 0x4)
    int32 DSTStartDay;                                                                // 0x0324 (size: 0x4)
    int32 DSTEndMonth;                                                                // 0x0328 (size: 0x4)
    int32 DSTEndDay;                                                                  // 0x032C (size: 0x4)
    int32 DSTSwitchHour;                                                              // 0x0330 (size: 0x4)
    double HashVal;                                                                   // 0x0338 (size: 0x8)

    void IsDST(bool DSTEnable, int32 DSTStartMonth, int32 DSTStartDay, int32 DSTEndMonth, int32 DSTEndDay, int32 DSTSwitchHour, bool& IsDST);
    void GetHMSFromSolarTime(double SolarTime, int32& Hour, int32& Minute, int32& Second);
    void UpdateSun();
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_SunSky(int32 EntryPoint);
}; // Size: 0x340

#endif
