#ifndef UE4SS_SDK_BP_SimpleBirdFlock_HPP
#define UE4SS_SDK_BP_SimpleBirdFlock_HPP

class ABP_SimpleBirdFlock_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    bool IsEnabled;                                                                   // 0x02A0 (size: 0x1)
    int32 numBirds;                                                                   // 0x02A4 (size: 0x4)
    double flockHeightHalf;                                                           // 0x02A8 (size: 0x8)
    double flockWidthHalf;                                                            // 0x02B0 (size: 0x8)
    double flyingHeight;                                                              // 0x02B8 (size: 0x8)
    FVector flockOrigin;                                                              // 0x02C0 (size: 0x18)
    TArray<class AVAMP_Raven_C*> birds;                                               // 0x02D8 (size: 0x10)
    FVector flockTarget;                                                              // 0x02E8 (size: 0x18)
    FVector flockLocation;                                                            // 0x0300 (size: 0x18)
    FVector dirToTarget;                                                              // 0x0318 (size: 0x18)
    double flockSpeed;                                                                // 0x0330 (size: 0x8)
    FVector flockVelocity;                                                            // 0x0338 (size: 0x18)
    double distToTargetsSquared;                                                      // 0x0350 (size: 0x8)
    FRotator flockOrientation;                                                        // 0x0358 (size: 0x18)
    FRotator desiredVelocity;                                                         // 0x0370 (size: 0x18)
    FRotator currentVelocity;                                                         // 0x0388 (size: 0x18)
    double steeringSpeed;                                                             // 0x03A0 (size: 0x8)
    double flockTargetRandomRadius;                                                   // 0x03A8 (size: 0x8)
    TArray<class ARTSMultiEngineCPP*> Out Actors;                                     // 0x03B0 (size: 0x10)
    class ARTSMultiEngineCPP* RTSGameManager;                                         // 0x03C0 (size: 0x8)
    TArray<class UVARuntimeComponent*> runtimeControllers;                            // 0x03C8 (size: 0x10)

    void Update Bird Transforms();
    void updateFlockOrientation();
    bool hasFlockReachedTarget();
    void pickNewTarget();
    void spawnNewFlock();
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SimpleBirdFlock(int32 EntryPoint);
}; // Size: 0x3D8

#endif
