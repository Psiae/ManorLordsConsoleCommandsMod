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
    float Density;                                                                    // 0x0034 (size: 0x4)
    float MinPerParticleMass;                                                         // 0x0038 (size: 0x4)
    FChaosClothWeightedValue EdgeStiffnessWeighted;                                   // 0x003C (size: 0x8)
    FChaosClothWeightedValue BendingStiffnessWeighted;                                // 0x0044 (size: 0x8)
    bool bUseBendingElements;                                                         // 0x004C (size: 0x1)
    float BucklingRatio;                                                              // 0x0050 (size: 0x4)
    FChaosClothWeightedValue BucklingStiffnessWeighted;                               // 0x0054 (size: 0x8)
    FChaosClothWeightedValue AreaStiffnessWeighted;                                   // 0x005C (size: 0x8)
    float VolumeStiffness;                                                            // 0x0064 (size: 0x4)
    FChaosClothWeightedValue TetherStiffness;                                         // 0x0068 (size: 0x8)
    FChaosClothWeightedValue TetherScale;                                             // 0x0070 (size: 0x8)
    bool bUseGeodesicDistance;                                                        // 0x0078 (size: 0x1)
    float ShapeTargetStiffness;                                                       // 0x007C (size: 0x4)
    float CollisionThickness;                                                         // 0x0080 (size: 0x4)
    float FrictionCoefficient;                                                        // 0x0084 (size: 0x4)
    bool bUseCCD;                                                                     // 0x0088 (size: 0x1)
    bool bUseSelfCollisions;                                                          // 0x0089 (size: 0x1)
    float SelfCollisionThickness;                                                     // 0x008C (size: 0x4)
    float SelfCollisionFriction;                                                      // 0x0090 (size: 0x4)
    bool bUseSelfIntersections;                                                       // 0x0094 (size: 0x1)
    bool bUseSelfCollisionSpheres;                                                    // 0x0095 (size: 0x1)
    float SelfCollisionSphereRadius;                                                  // 0x0098 (size: 0x4)
    float SelfCollisionSphereStiffness;                                               // 0x009C (size: 0x4)
    float SelfCollisionSphereRadiusCullMultiplier;                                    // 0x00A0 (size: 0x4)
    bool bUseLegacyBackstop;                                                          // 0x00A4 (size: 0x1)
    float DampingCoefficient;                                                         // 0x00A8 (size: 0x4)
    float LocalDampingCoefficient;                                                    // 0x00AC (size: 0x4)
    bool bUsePointBasedWindModel;                                                     // 0x00B0 (size: 0x1)
    FChaosClothWeightedValue Drag;                                                    // 0x00B4 (size: 0x8)
    FChaosClothWeightedValue Lift;                                                    // 0x00BC (size: 0x8)
    bool bUseGravityOverride;                                                         // 0x00C4 (size: 0x1)
    float GravityScale;                                                               // 0x00C8 (size: 0x4)
    FVector Gravity;                                                                  // 0x00D0 (size: 0x18)
    FChaosClothWeightedValue Pressure;                                                // 0x00E8 (size: 0x8)
    FChaosClothWeightedValue AnimDriveStiffness;                                      // 0x00F0 (size: 0x8)
    FChaosClothWeightedValue AnimDriveDamping;                                        // 0x00F8 (size: 0x8)
    FVector LinearVelocityScale;                                                      // 0x0100 (size: 0x18)
    float AngularVelocityScale;                                                       // 0x0118 (size: 0x4)
    float FictitiousAngularScale;                                                     // 0x011C (size: 0x4)
    bool bUseTetrahedralConstraints;                                                  // 0x0120 (size: 0x1)
    bool bUseThinShellVolumeConstraints;                                              // 0x0121 (size: 0x1)
    bool bUseContinuousCollisionDetection;                                            // 0x0122 (size: 0x1)

}; // Size: 0x128

class UChaosClothSharedSimConfig : public UClothSharedConfigCommon
{
    int32 IterationCount;                                                             // 0x0028 (size: 0x4)
    int32 MaxIterationCount;                                                          // 0x002C (size: 0x4)
    int32 SubdivisionCount;                                                           // 0x0030 (size: 0x4)
    bool bUseLocalSpaceSimulation;                                                    // 0x0034 (size: 0x1)
    bool bUseXPBDConstraints;                                                         // 0x0035 (size: 0x1)

}; // Size: 0x38

class UChaosClothingInteractor : public UClothingInteractor
{

    void SetWind(FVector2D Drag, FVector2D Lift, float AirDensity, FVector WindVelocity);
    void SetVelocityScale(FVector LinearVelocityScale, float AngularVelocityScale, float FictitiousAngularScale);
    void SetPressure(FVector2D Pressure);
    void SetMaterialLinear(float EdgeStiffness, float BendingStiffness, float AreaStiffness);
    void SetMaterial(FVector2D EdgeStiffness, FVector2D BendingStiffness, FVector2D AreaStiffness);
    void SetLongRangeAttachmentLinear(float TetherStiffness, float TetherScale);
    void SetLongRangeAttachment(FVector2D TetherStiffness, FVector2D TetherScale);
    void SetGravity(float GravityScale, bool bIsGravityOverridden, FVector GravityOverride);
    void SetDamping(float DampingCoefficient, float LocalDampingCoefficient);
    void SetCollision(float CollisionThickness, float FrictionCoefficient, bool bUseCCD, float SelfCollisionThickness);
    void SetBackstop(bool bEnabled);
    void SetAnimDriveLinear(float AnimDriveStiffness);
    void SetAnimDrive(FVector2D AnimDriveStiffness, FVector2D AnimDriveDamping);
    void SetAerodynamics(float DragCoefficient, float LiftCoefficient, FVector WindVelocity);
    void ResetAndTeleport(bool bReset, bool bTeleport);
}; // Size: 0x50

class UChaosClothingSimulationFactory : public UClothingSimulationFactory
{
}; // Size: 0x28

class UChaosClothingSimulationInteractor : public UClothingSimulationInteractor
{
}; // Size: 0xB0

#endif
