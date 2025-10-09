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
    FVector Damping;                                                                  // 0x0078 (size: 0xC)
    float Friction;                                                                   // 0x0084 (size: 0x4)
    float WindDragCoefficient;                                                        // 0x0088 (size: 0x4)
    float WindLiftCoefficient;                                                        // 0x008C (size: 0x4)
    FVector LinearDrag;                                                               // 0x0090 (size: 0xC)
    FVector AngularDrag;                                                              // 0x009C (size: 0xC)
    FVector LinearInertiaScale;                                                       // 0x00A8 (size: 0xC)
    FVector AngularInertiaScale;                                                      // 0x00B4 (size: 0xC)
    FVector CentrifugalInertiaScale;                                                  // 0x00C0 (size: 0xC)
    float SolverFrequency;                                                            // 0x00CC (size: 0x4)
    float StiffnessFrequency;                                                         // 0x00D0 (size: 0x4)
    float GravityScale;                                                               // 0x00D4 (size: 0x4)
    FVector GravityOverride;                                                          // 0x00D8 (size: 0xC)
    bool bUseGravityOverride;                                                         // 0x00E4 (size: 0x1)
    float TetherStiffness;                                                            // 0x00E8 (size: 0x4)
    float TetherLimit;                                                                // 0x00EC (size: 0x4)
    float CollisionThickness;                                                         // 0x00F0 (size: 0x4)
    float AnimDriveSpringStiffness;                                                   // 0x00F4 (size: 0x4)
    float AnimDriveDamperStiffness;                                                   // 0x00F8 (size: 0x4)
    EClothingWindMethod_Legacy WindMethod;                                            // 0x00FC (size: 0x1)
    FClothConstraintSetup_Legacy VerticalConstraintConfig;                            // 0x0100 (size: 0x10)
    FClothConstraintSetup_Legacy HorizontalConstraintConfig;                          // 0x0110 (size: 0x10)
    FClothConstraintSetup_Legacy BendConstraintConfig;                                // 0x0120 (size: 0x10)
    FClothConstraintSetup_Legacy ShearConstraintConfig;                               // 0x0130 (size: 0x10)

}; // Size: 0x140

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
}; // Size: 0xA0

#endif
