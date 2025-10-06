#ifndef UE4SS_SDK_SkyAtmosphereClouds_Blueprint_HPP
#define UE4SS_SDK_SkyAtmosphereClouds_Blueprint_HPP

class ASkyAtmosphereClouds_Blueprint_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UVolumetricCloudComponent* VolumetricCloud;                                 // 0x02B0 (size: 0x8)
    class USkyAtmosphereComponent* SkyAtmosphereComponent;                            // 0x02B8 (size: 0x8)
    float cloudiness_lastAtmoChange;                                                  // 0x02C0 (size: 0x4)

    void Dynamic Atmospheric Fog();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_SkyAtmosphereClouds_Blueprint(int32 EntryPoint);
}; // Size: 0x2C4

#endif
