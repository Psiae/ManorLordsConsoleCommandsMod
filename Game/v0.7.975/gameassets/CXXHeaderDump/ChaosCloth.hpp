#ifndef UE4SS_SDK_ChaosCloth_HPP
#define UE4SS_SDK_ChaosCloth_HPP

#include "ChaosCloth_enums.hpp"

struct FChaosClothWeightedValue
{
    float Low;                                                                        // 0x0000 (size: 0x4)
    float High;                                                                       // 0x0004 (size: 0x4)

}; // Size: 0x8

class UChaosClothConfig : public UClothConfigCommon
{
    EClothMassMode MassMode;                                                          // 0x0028 (size: 0x1)
    float UniformMass;                                                                // 0x002C (size: 0x4)
    float TotalMass;                                                                  // 0x0030 (size: 0x4)
    float density;                                                                    // 0x0034 (size: 0x4)
    float MinPerParticleMass;                                                         // 0x0038 (size: 0x4)
    float EdgeStiffness;                                                              // 0x003C (size: 0x4)
    float BendingStiffness;                                                           // 0x0040 (size: 0x4)
    bool bUseBendingElements;                                                         // 0x0044 (size: 0x1)
    float AreaStiffness;                                                              // 0x0048 (size: 0x4)
    float VolumeStiffness;                                                            // 0x004C (size: 0x4)
    FChaosClothWeightedValue TetherStiffness;                                         // 0x0050 (size: 0x8)
    float LimitScale;                                                                 // 0x0058 (size: 0x4)
    bool bUseGeodesicDistance;                                                        // 0x005C (size: 0x1)
    float ShapeTargetStiffness;                                                       // 0x0060 (size: 0x4)
    float CollisionThickness;                                                         // 0x0064 (size: 0x4)
    float FrictionCoefficient;                                                        // 0x0068 (size: 0x4)
    bool bUseCCD;                                                                     // 0x006C (size: 0x1)
    bool bUseSelfCollisions;                                                          // 0x006D (size: 0x1)
    float SelfCollisionThickness;                                                     // 0x0070 (size: 0x4)
    bool bUseLegacyBackstop;                                                          // 0x0074 (size: 0x1)
    float DampingCoefficient;                                                         // 0x0078 (size: 0x4)
    bool bUsePointBasedWindModel;                                                     // 0x007C (size: 0x1)
    float DragCoefficient;                                                            // 0x0080 (size: 0x4)
    float LiftCoefficient;                                                            // 0x0084 (size: 0x4)
    bool bUseGravityOverride;                                                         // 0x0088 (size: 0x1)
    float GravityScale;                                                               // 0x008C (size: 0x4)
    FVector Gravity;                                                                  // 0x0090 (size: 0xC)
    FChaosClothWeightedValue AnimDriveStiffness;                                      // 0x009C (size: 0x8)
    FChaosClothWeightedValue AnimDriveDamping;                                        // 0x00A4 (size: 0x8)
    FVector LinearVelocityScale;                                                      // 0x00AC (size: 0xC)
    float AngularVelocityScale;                                                       // 0x00B8 (size: 0x4)
    float FictitiousAngularScale;                                                     // 0x00BC (size: 0x4)
    bool bUseTetrahedralConstraints;                                                  // 0x00C0 (size: 0x1)
    bool bUseThinShellVolumeConstraints;                                              // 0x00C1 (size: 0x1)
    bool bUseContinuousCollisionDetection;                                            // 0x00C2 (size: 0x1)

}; // Size: 0xC8

class UChaosClothSharedSimConfig : public UClothSharedConfigCommon
{
    int32 IterationCount;                                                             // 0x0028 (size: 0x4)
    int32 SubdivisionCount;                                                           // 0x002C (size: 0x4)
    bool bUseLocalSpaceSimulation;                                                    // 0x0030 (size: 0x1)
    bool bUseXPBDConstraints;                                                         // 0x0031 (size: 0x1)

}; // Size: 0x38

class UChaosClothingInteractor : public UClothingInteractor
{

    void SetVelocityScale(FVector LinearVelocityScale, float AngularVelocityScale, float FictitiousAngularScale);
    void SetMaterialLinear(float EdgeStiffness, float BendingStiffness, float AreaStiffness);
    void SetLongRangeAttachmentLinear(float TetherStiffness);
    void SetLongRangeAttachment(FVector2D TetherStiffness);
    void SetGravity(float GravityScale, bool bIsGravityOverridden, FVector GravityOverride);
    void SetDamping(float DampingCoefficient);
    void SetCollision(float CollisionThickness, float FrictionCoefficient, bool bUseCCD, float SelfCollisionThickness);
    void SetAnimDriveLinear(float AnimDriveStiffness);
    void SetAnimDrive(FVector2D AnimDriveStiffness, FVector2D AnimDriveDamping);
    void SetAerodynamics(float DragCoefficient, float LiftCoefficient, FVector WindVelocity);
    void ResetAndTeleport(bool bReset, bool bTeleport);
}; // Size: 0x40

class UChaosClothingSimulationFactory : public UClothingSimulationFactory
{
}; // Size: 0x28

class UChaosClothingSimulationInteractor : public UClothingSimulationInteractor
{
}; // Size: 0xA0

#endif
