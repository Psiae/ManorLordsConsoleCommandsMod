#ifndef UE4SS_SDK_MassMovement_HPP
#define UE4SS_SDK_MassMovement_HPP

struct FMassForceFragment : public FMassFragment
{
}; // Size: 0x18

struct FMassMovementParameters : public FMassConstSharedFragment
{
    float MaxSpeed;                                                                   // 0x0000 (size: 0x4)
    float MaxAcceleration;                                                            // 0x0004 (size: 0x4)
    float DefaultDesiredSpeed;                                                        // 0x0008 (size: 0x4)
    float DefaultDesiredSpeedVariance;                                                // 0x000C (size: 0x4)
    float HeightSmoothingTime;                                                        // 0x0010 (size: 0x4)
    TArray<FMassMovementStyleParameters> MovementStyles;                              // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FMassMovementStyle
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FGuid ID;                                                                         // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FMassMovementStyleParameters
{
    FMassMovementStyleRef Style;                                                      // 0x0000 (size: 0x18)
    TArray<FMassMovementStyleSpeedParameters> DesiredSpeeds;                          // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FMassMovementStyleRef
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FGuid ID;                                                                         // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FMassMovementStyleSpeedParameters
{
    float Speed;                                                                      // 0x0000 (size: 0x4)
    float Variance;                                                                   // 0x0004 (size: 0x4)
    float Probability;                                                                // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FMassSimpleMovementTag : public FMassTag
{
}; // Size: 0x1

struct FMassVelocityFragment : public FMassFragment
{
}; // Size: 0x18

class UMassApplyMovementProcessor : public UMassProcessor
{
}; // Size: 0x3D0

class UMassMovementSettings : public UMassModuleSettings
{
    TArray<FMassMovementStyle> MovementStyles;                                        // 0x0028 (size: 0x10)

}; // Size: 0x38

class UMassMovementTrait : public UMassEntityTraitBase
{
    FMassMovementParameters Movement;                                                 // 0x0028 (size: 0x28)

}; // Size: 0x50

class UMassRandomVelocityInitializer : public UMassObserverProcessor
{
    float MinSpeed;                                                                   // 0x03F0 (size: 0x4)
    float MaxSpeed;                                                                   // 0x03F4 (size: 0x4)
    bool bSetZComponent;                                                              // 0x03F8 (size: 0x1)

}; // Size: 0x410

class UMassSimpleMovementProcessor : public UMassProcessor
{
}; // Size: 0x3D0

class UMassSimpleMovementTrait : public UMassEntityTraitBase
{
}; // Size: 0x28

class UMassVelocityRandomizerTrait : public UMassEntityTraitBase
{
    float MinSpeed;                                                                   // 0x0028 (size: 0x4)
    float MaxSpeed;                                                                   // 0x002C (size: 0x4)
    bool bSetZComponent;                                                              // 0x0030 (size: 0x1)

}; // Size: 0x38

#endif
