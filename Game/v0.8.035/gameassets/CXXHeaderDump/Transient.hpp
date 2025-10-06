#ifndef UE4SS_SDK_Transient_HPP
#define UE4SS_SDK_Transient_HPP

struct FChaosDestructionEvent_SWC
{
    FVector3f position;                                                               // 0x0000 (size: 0xC)
    FVector3f Normal;                                                                 // 0x000C (size: 0xC)
    FVector3f Velocity;                                                               // 0x0018 (size: 0xC)
    FVector3f AngularVelocity;                                                        // 0x0024 (size: 0xC)
    float ExtentMin;                                                                  // 0x0030 (size: 0x4)
    float ExtentMax;                                                                  // 0x0034 (size: 0x4)
    int32 ParticleID;                                                                 // 0x0038 (size: 0x4)
    float Time;                                                                       // 0x003C (size: 0x4)
    int32 Type;                                                                       // 0x0040 (size: 0x4)

}; // Size: 0x44

#endif
