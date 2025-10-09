#ifndef UE4SS_SDK_PhysicsCore_HPP
#define UE4SS_SDK_PhysicsCore_HPP

#include "PhysicsCore_enums.hpp"

struct FBodyInstanceCore
{
    uint8 bSimulatePhysics;                                                           // 0x0010 (size: 0x1)
    uint8 bOverrideMass;                                                              // 0x0010 (size: 0x1)
    uint8 bEnableGravity;                                                             // 0x0010 (size: 0x1)
    uint8 bUpdateKinematicFromSimulation;                                             // 0x0010 (size: 0x1)
    uint8 bAutoWeld;                                                                  // 0x0010 (size: 0x1)
    uint8 bStartAwake;                                                                // 0x0010 (size: 0x1)
    uint8 bGenerateWakeEvents;                                                        // 0x0010 (size: 0x1)
    uint8 bUpdateMassWhenScaleChanges;                                                // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FPhysicalMaterialDamageModifier
{
    float DamageThresholdMultiplier;                                                  // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FPhysicalMaterialStrength
{
    float TensileStrength;                                                            // 0x0000 (size: 0x4)
    float CompressionStrength;                                                        // 0x0004 (size: 0x4)
    float ShearStrength;                                                              // 0x0008 (size: 0x4)

}; // Size: 0xC

class UBodySetupCore : public UObject
{
    FName BoneName;                                                                   // 0x0028 (size: 0x8)
    TEnumAsByte<EPhysicsType> PhysicsType;                                            // 0x0030 (size: 0x1)
    TEnumAsByte<ECollisionTraceFlag> CollisionTraceFlag;                              // 0x0031 (size: 0x1)
    TEnumAsByte<EBodyCollisionResponse::Type> CollisionReponse;                       // 0x0032 (size: 0x1)

}; // Size: 0x38

class UChaosPhysicalMaterial : public UObject
{
    float Friction;                                                                   // 0x0028 (size: 0x4)
    float StaticFriction;                                                             // 0x002C (size: 0x4)
    float Restitution;                                                                // 0x0030 (size: 0x4)
    float LinearEtherDrag;                                                            // 0x0034 (size: 0x4)
    float AngularEtherDrag;                                                           // 0x0038 (size: 0x4)
    float SleepingLinearVelocityThreshold;                                            // 0x003C (size: 0x4)
    float SleepingAngularVelocityThreshold;                                           // 0x0040 (size: 0x4)

}; // Size: 0x48

class UDEPRECATED_PhysicalMaterialPropertyBase : public UObject
{
}; // Size: 0x28

class UPhysicalMaterial : public UObject
{
    float Friction;                                                                   // 0x0028 (size: 0x4)
    float StaticFriction;                                                             // 0x002C (size: 0x4)
    TEnumAsByte<EFrictionCombineMode::Type> FrictionCombineMode;                      // 0x0030 (size: 0x1)
    bool bOverrideFrictionCombineMode;                                                // 0x0031 (size: 0x1)
    float Restitution;                                                                // 0x0034 (size: 0x4)
    TEnumAsByte<EFrictionCombineMode::Type> RestitutionCombineMode;                   // 0x0038 (size: 0x1)
    bool bOverrideRestitutionCombineMode;                                             // 0x0039 (size: 0x1)
    float Density;                                                                    // 0x003C (size: 0x4)
    float SleepLinearVelocityThreshold;                                               // 0x0040 (size: 0x4)
    float SleepAngularVelocityThreshold;                                              // 0x0044 (size: 0x4)
    int32 SleepCounterThreshold;                                                      // 0x0048 (size: 0x4)
    float RaiseMassToPower;                                                           // 0x004C (size: 0x4)
    float DestructibleDamageThresholdScale;                                           // 0x0050 (size: 0x4)
    class UDEPRECATED_PhysicalMaterialPropertyBase* PhysicalMaterialProperty;         // 0x0058 (size: 0x8)
    TEnumAsByte<EPhysicalSurface> SurfaceType;                                        // 0x0060 (size: 0x1)
    FPhysicalMaterialStrength Strength;                                               // 0x0064 (size: 0xC)
    FPhysicalMaterialDamageModifier DamageModifier;                                   // 0x0070 (size: 0x4)
    bool bShowExperimentalProperties;                                                 // 0x0074 (size: 0x1)
    EPhysicalMaterialSoftCollisionMode SoftCollisionMode;                             // 0x0075 (size: 0x1)
    float SoftCollisionThickness;                                                     // 0x0078 (size: 0x4)
    float BaseFrictionImpulse;                                                        // 0x007C (size: 0x4)

}; // Size: 0x98

class UPhysicsSettingsCore : public UDeveloperSettings
{
    float DefaultGravityZ;                                                            // 0x0038 (size: 0x4)
    float DefaultTerminalVelocity;                                                    // 0x003C (size: 0x4)
    float DefaultFluidFriction;                                                       // 0x0040 (size: 0x4)
    int32 SimulateScratchMemorySize;                                                  // 0x0044 (size: 0x4)
    int32 RagdollAggregateThreshold;                                                  // 0x0048 (size: 0x4)
    float TriangleMeshTriangleMinAreaThreshold;                                       // 0x004C (size: 0x4)
    bool bEnableEnhancedDeterminism;                                                  // 0x0050 (size: 0x1)
    bool bEnableShapeSharing;                                                         // 0x0051 (size: 0x1)
    bool bEnablePCM;                                                                  // 0x0052 (size: 0x1)
    bool bEnableStabilization;                                                        // 0x0053 (size: 0x1)
    bool bWarnMissingLocks;                                                           // 0x0054 (size: 0x1)
    bool bEnable2DPhysics;                                                            // 0x0055 (size: 0x1)
    bool bDefaultHasComplexCollision;                                                 // 0x0056 (size: 0x1)
    float BounceThresholdVelocity;                                                    // 0x0058 (size: 0x4)
    TEnumAsByte<EFrictionCombineMode::Type> FrictionCombineMode;                      // 0x005C (size: 0x1)
    TEnumAsByte<EFrictionCombineMode::Type> RestitutionCombineMode;                   // 0x005D (size: 0x1)
    float MaxAngularVelocity;                                                         // 0x0060 (size: 0x4)
    float MaxDepenetrationVelocity;                                                   // 0x0064 (size: 0x4)
    float ContactOffsetMultiplier;                                                    // 0x0068 (size: 0x4)
    float MinContactOffset;                                                           // 0x006C (size: 0x4)
    float MaxContactOffset;                                                           // 0x0070 (size: 0x4)
    bool bSimulateSkeletalMeshOnDedicatedServer;                                      // 0x0074 (size: 0x1)
    TEnumAsByte<ECollisionTraceFlag> DefaultShapeComplexity;                          // 0x0075 (size: 0x1)
    FChaosSolverConfiguration SolverOptions;                                          // 0x0078 (size: 0x6C)

}; // Size: 0xE8

#endif
