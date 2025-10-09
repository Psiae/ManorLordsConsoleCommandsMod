#ifndef UE4SS_SDK_MagicLeapARPinInfoActor_HPP
#define UE4SS_SDK_MagicLeapARPinInfoActor_HPP

class AMagicLeapARPinInfoActor_C : public AMagicLeapARPinInfoActorBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Right;                                                // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Forward;                                              // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Up;                                                   // 0x0250 (size: 0x8)
    class USphereComponent* ValidRadiusVisualizer;                                    // 0x0258 (size: 0x8)
    class USceneComponent* AxisRoot;                                                  // 0x0260 (size: 0x8)
    class USceneComponent* VisualizerRoot;                                            // 0x0268 (size: 0x8)
    class UTextRenderComponent* TypeValue;                                            // 0x0270 (size: 0x8)
    class UTextRenderComponent* TransErrValue;                                        // 0x0278 (size: 0x8)
    class UTextRenderComponent* RotErrValue;                                          // 0x0280 (size: 0x8)
    class UTextRenderComponent* ConfidenceValue;                                      // 0x0288 (size: 0x8)
    class UTextRenderComponent* TransErrLabel;                                        // 0x0290 (size: 0x8)
    class UTextRenderComponent* RotErrLabel;                                          // 0x0298 (size: 0x8)
    class UTextRenderComponent* ConfidenceLabel;                                      // 0x02A0 (size: 0x8)
    class UTextRenderComponent* PinIDValue;                                           // 0x02A8 (size: 0x8)
    class USceneComponent* InfoRoot;                                                  // 0x02B0 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x02B8 (size: 0x8)
    float RotationSmoothSpeed;                                                        // 0x02C0 (size: 0x4)

    void UpdatePinState();
    void UserConstructionScript();
    void OnUpdateARPinState();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_MagicLeapARPinInfoActor(int32 EntryPoint);
}; // Size: 0x2C4

#endif
