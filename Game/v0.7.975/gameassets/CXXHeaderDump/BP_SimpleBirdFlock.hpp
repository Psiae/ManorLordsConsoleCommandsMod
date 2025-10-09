#ifndef UE4SS_SDK_BP_SimpleBirdFlock_HPP
#define UE4SS_SDK_BP_SimpleBirdFlock_HPP

class ABP_SimpleBirdFlock_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)
    bool IsEnabled;                                                                   // 0x0230 (size: 0x1)
    int32 numBirds;                                                                   // 0x0234 (size: 0x4)
    float flockHeightHalf;                                                            // 0x0238 (size: 0x4)
    float flockWidthHalf;                                                             // 0x023C (size: 0x4)
    float flyingHeight;                                                               // 0x0240 (size: 0x4)
    FVector flockOrigin;                                                              // 0x0244 (size: 0xC)
    TArray<class AVAMP_Raven_C*> birds;                                               // 0x0250 (size: 0x10)
    FVector flockTarget;                                                              // 0x0260 (size: 0xC)
    FVector flockLocation;                                                            // 0x026C (size: 0xC)
    FVector dirToTarget;                                                              // 0x0278 (size: 0xC)
    float flockSpeed;                                                                 // 0x0284 (size: 0x4)
    FVector flockVelocity;                                                            // 0x0288 (size: 0xC)
    float distToTargetsSquared;                                                       // 0x0294 (size: 0x4)
    FRotator flockOrientation;                                                        // 0x0298 (size: 0xC)
    FRotator desiredVelocity;                                                         // 0x02A4 (size: 0xC)
    FRotator currentVelocity;                                                         // 0x02B0 (size: 0xC)
    float steeringSpeed;                                                              // 0x02BC (size: 0x4)
    float flockTargetRandomRadius;                                                    // 0x02C0 (size: 0x4)
    TArray<class ARTSMultiEngineCPP*> Out Actors;                                     // 0x02C8 (size: 0x10)
    class ARTSMultiEngineCPP* RTSGameManager;                                         // 0x02D8 (size: 0x8)
    TArray<class UVARuntimeComponent*> runtimeControllers;                            // 0x02E0 (size: 0x10)

    void Update Bird Transforms();
    void updateFlockOrientation();
    bool hasFlockReachedTarget();
    void pickNewTarget();
    void spawnNewFlock();
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SimpleBirdFlock(int32 EntryPoint);
}; // Size: 0x2F0

#endif
