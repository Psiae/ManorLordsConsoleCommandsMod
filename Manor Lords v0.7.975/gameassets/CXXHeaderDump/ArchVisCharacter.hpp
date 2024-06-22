#ifndef UE4SS_SDK_ArchVisCharacter_HPP
#define UE4SS_SDK_ArchVisCharacter_HPP

class AArchVisCharacter : public ACharacter
{
    FString LookUpAxisName;                                                           // 0x04B8 (size: 0x10)
    FString LookUpAtRateAxisName;                                                     // 0x04C8 (size: 0x10)
    FString TurnAxisName;                                                             // 0x04D8 (size: 0x10)
    FString TurnAtRateAxisName;                                                       // 0x04E8 (size: 0x10)
    FString MoveForwardAxisName;                                                      // 0x04F8 (size: 0x10)
    FString MoveRightAxisName;                                                        // 0x0508 (size: 0x10)
    float MouseSensitivityScale_Pitch;                                                // 0x0518 (size: 0x4)
    float MouseSensitivityScale_Yaw;                                                  // 0x051C (size: 0x4)

}; // Size: 0x520

class UArchVisCharMovementComponent : public UCharacterMovementComponent
{
    FRotator RotationalAcceleration;                                                  // 0x0AF0 (size: 0xC)
    FRotator RotationalDeceleration;                                                  // 0x0AFC (size: 0xC)
    FRotator MaxRotationalVelocity;                                                   // 0x0B08 (size: 0xC)
    float MinPitch;                                                                   // 0x0B14 (size: 0x4)
    float MaxPitch;                                                                   // 0x0B18 (size: 0x4)
    float WalkingFriction;                                                            // 0x0B1C (size: 0x4)
    float WalkingSpeed;                                                               // 0x0B20 (size: 0x4)
    float WalkingAcceleration;                                                        // 0x0B24 (size: 0x4)

}; // Size: 0xB40

#endif
