#ifndef UE4SS_SDK_ClothingSystemRuntimeNv_HPP
#define UE4SS_SDK_ClothingSystemRuntimeNv_HPP

#include "ClothingSystemRuntimeNv_enums.hpp"

struct FClothConstraintSetupNv
{
    float Stiffness;                                                                  // 0x0000 (size: 0x4)
    float StiffnessMultiplier;                                                        // 0x0004 (size: 0x4)
    float StretchLimit;                                                               // 0x0008 (size: 0x4)
    float CompressionLimit;                                                           // 0x000C (size: 0x4)

}; // Size: 0x10

class UClothConfigNv : public UClothConfigCommon
{
    EClothingWindMethodNv ClothingWindMethod;                                         // 0x0028 (size: 0x1)
    FClothConstraintSetupNv VerticalConstraint;                                       // 0x002C (size: 0x10)
    FClothConstraintSetupNv HorizontalConstraint;                                     // 0x003C (size: 0x10)
    FClothConstraintSetupNv BendConstraint;                                           // 0x004C (size: 0x10)
    FClothConstraintSetupNv ShearConstraint;                                          // 0x005C (size: 0x10)
    float SelfCollisionRadius;                                                        // 0x006C (size: 0x4)
    float SelfCollisionStiffness;                                                     // 0x0070 (size: 0x4)
    float SelfCollisionCullScale;                                                     // 0x0074 (size: 0x4)
    FVector Damping;                                                                  // 0x0078 (size: 0x18)
    float Friction;                                                                   // 0x0090 (size: 0x4)
    float WindDragCoefficient;                                                        // 0x0094 (size: 0x4)
    float WindLiftCoefficient;                                                        // 0x0098 (size: 0x4)
    FVector LinearDrag;                                                               // 0x00A0 (size: 0x18)
    FVector AngularDrag;                                                              // 0x00B8 (size: 0x18)
    FVector LinearInertiaScale;                                                       // 0x00D0 (size: 0x18)
    FVector AngularInertiaScale;                                                      // 0x00E8 (size: 0x18)
    FVector CentrifugalInertiaScale;                                                  // 0x0100 (size: 0x18)
    float SolverFrequency;                                                            // 0x0118 (size: 0x4)
    float StiffnessFrequency;                                                         // 0x011C (size: 0x4)
    float GravityScale;                                                               // 0x0120 (size: 0x4)
    FVector GravityOverride;                                                          // 0x0128 (size: 0x18)
    bool bUseGravityOverride;                                                         // 0x0140 (size: 0x1)
    float TetherStiffness;                                                            // 0x0144 (size: 0x4)
    float TetherLimit;                                                                // 0x0148 (size: 0x4)
    float CollisionThickness;                                                         // 0x014C (size: 0x4)
    float AnimDriveSpringStiffness;                                                   // 0x0150 (size: 0x4)
    float AnimDriveDamperStiffness;                                                   // 0x0154 (size: 0x4)
    EClothingWindMethod_Legacy WindMethod;                                            // 0x0158 (size: 0x1)
    FClothConstraintSetup_Legacy VerticalConstraintConfig;                            // 0x015C (size: 0x10)
    FClothConstraintSetup_Legacy HorizontalConstraintConfig;                          // 0x016C (size: 0x10)
    FClothConstraintSetup_Legacy BendConstraintConfig;                                // 0x017C (size: 0x10)
    FClothConstraintSetup_Legacy ShearConstraintConfig;                               // 0x018C (size: 0x10)

}; // Size: 0x1A0

class UClothPhysicalMeshDataNv_Legacy : public UClothPhysicalMeshDataBase_Legacy
{
    TArray<float> MaxDistances;                                                       // 0x00E0 (size: 0x10)
    TArray<float> BackstopDistances;                                                  // 0x00F0 (size: 0x10)
    TArray<float> BackstopRadiuses;                                                   // 0x0100 (size: 0x10)
    TArray<float> AnimDriveMultipliers;                                               // 0x0110 (size: 0x10)

}; // Size: 0x120

class UClothingSimulationFactoryNv : public UClothingSimulationFactory
{
}; // Size: 0x28

class UClothingSimulationInteractorNv : public UClothingSimulationInteractor
{

    void SetAnimDriveDamperStiffness(float InStiffness);
}; // Size: 0x90

#endif
