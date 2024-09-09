#ifndef UE4SS_SDK_ThunderLightBP_HPP
#define UE4SS_SDK_ThunderLightBP_HPP

class AThunderLightBP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UDirectionalLightComponent* DirectionalLight;                               // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)
    float flash_enableLight_6888E0A2422C0819B3722E88CA97D8AF;                         // 0x02A8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> flash__Direction_6888E0A2422C0819B3722E88CA97D8AF; // 0x02AC (size: 0x1)
    class UTimelineComponent* flash;                                                  // 0x02B0 (size: 0x8)

    void flash__FinishedFunc();
    void flash__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_ThunderLightBP(int32 EntryPoint);
}; // Size: 0x2B8

#endif
