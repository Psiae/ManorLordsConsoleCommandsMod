#ifndef UE4SS_SDK_BP_Sky_Sphere_HPP
#define UE4SS_SDK_BP_Sky_Sphere_HPP

class ABP_Sky_Sphere_C : public AActor
{
    class UStaticMeshComponent* SkySphereMesh;                                        // 0x0290 (size: 0x8)
    class USceneComponent* base;                                                      // 0x0298 (size: 0x8)
    class UMaterialInstanceDynamic* Sky material;                                     // 0x02A0 (size: 0x8)
    bool Refresh material;                                                            // 0x02A8 (size: 0x1)
    class ADirectionalLight* Directional light actor;                                 // 0x02B0 (size: 0x8)
    bool Colors determined by sun position;                                           // 0x02B8 (size: 0x1)
    double Sun height;                                                                // 0x02C0 (size: 0x8)
    double Sun brightness;                                                            // 0x02C8 (size: 0x8)
    double Horizon Falloff;                                                           // 0x02D0 (size: 0x8)
    FLinearColor Zenith Color;                                                        // 0x02D8 (size: 0x10)
    FLinearColor Horizon color;                                                       // 0x02E8 (size: 0x10)
    FLinearColor Cloud color;                                                         // 0x02F8 (size: 0x10)
    FLinearColor Overall Color;                                                       // 0x0308 (size: 0x10)
    double Cloud speed;                                                               // 0x0318 (size: 0x8)
    double Cloud opacity;                                                             // 0x0320 (size: 0x8)
    double Stars brightness;                                                          // 0x0328 (size: 0x8)
    class UCurveLinearColor* Horizon color curve;                                     // 0x0330 (size: 0x8)
    class UCurveLinearColor* Zenith color curve;                                      // 0x0338 (size: 0x8)
    class UCurveLinearColor* Cloud color curve;                                       // 0x0340 (size: 0x8)

    void RefreshMaterial();
    void UpdateSunDirection();
    void UserConstructionScript();
}; // Size: 0x348

#endif
