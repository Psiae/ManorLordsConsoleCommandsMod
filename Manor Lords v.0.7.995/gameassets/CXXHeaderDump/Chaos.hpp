#ifndef UE4SS_SDK_Chaos_HPP
#define UE4SS_SDK_Chaos_HPP

#include "Chaos_enums.hpp"

struct FChaosSolverConfiguration
{
    int32 PositionIterations;                                                         // 0x0000 (size: 0x4)
    int32 VelocityIterations;                                                         // 0x0004 (size: 0x4)
    int32 ProjectionIterations;                                                       // 0x0008 (size: 0x4)
    float CollisionMarginFraction;                                                    // 0x000C (size: 0x4)
    float CollisionMarginMax;                                                         // 0x0010 (size: 0x4)
    float CollisionCullDistance;                                                      // 0x0014 (size: 0x4)
    float CollisionMaxPushOutVelocity;                                                // 0x0018 (size: 0x4)
    float CollisionInitialOverlapDepenetrationVelocity;                               // 0x001C (size: 0x4)
    float ClusterConnectionFactor;                                                    // 0x0020 (size: 0x4)
    EClusterUnionMethod ClusterUnionConnectionType;                                   // 0x0024 (size: 0x1)
    bool bGenerateCollisionData;                                                      // 0x0025 (size: 0x1)
    FSolverCollisionFilterSettings CollisionFilterSettings;                           // 0x0028 (size: 0x10)
    bool bGenerateBreakData;                                                          // 0x0038 (size: 0x1)
    FSolverBreakingFilterSettings BreakingFilterSettings;                             // 0x003C (size: 0x10)
    bool bGenerateTrailingData;                                                       // 0x004C (size: 0x1)
    FSolverTrailingFilterSettings TrailingFilterSettings;                             // 0x0050 (size: 0x10)
    int32 Iterations;                                                                 // 0x0060 (size: 0x4)
    int32 PushOutIterations;                                                          // 0x0064 (size: 0x4)
    bool bGenerateContactGraph;                                                       // 0x0068 (size: 0x1)

}; // Size: 0x6C

struct FClosestPhysicsObjectResult
{
}; // Size: 0x28

struct FFieldCollection : public FManagedArrayCollection
{
}; // Size: 0xB0

struct FManagedArrayCollection
{
}; // Size: 0xB0

struct FRecordedFrame
{
    TArray<FTransform> Transforms;                                                    // 0x0000 (size: 0x10)
    TArray<int32> TransformIndices;                                                   // 0x0010 (size: 0x10)
    TArray<int32> PreviousTransformIndices;                                           // 0x0020 (size: 0x10)
    TArray<bool> DisabledFlags;                                                       // 0x0030 (size: 0x10)
    TArray<FSolverCollisionData> Collisions;                                          // 0x0040 (size: 0x10)
    TArray<FSolverBreakingData> Breakings;                                            // 0x0050 (size: 0x10)
    TSet<FSolverTrailingData> Trailings;                                              // 0x0060 (size: 0x50)
    float Timestamp;                                                                  // 0x00B0 (size: 0x4)

}; // Size: 0xB8

struct FRecordedTransformTrack
{
    TArray<FRecordedFrame> Records;                                                   // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FSolverBreakingData
{
    FVector Location;                                                                 // 0x0000 (size: 0x18)
    FVector Velocity;                                                                 // 0x0018 (size: 0x18)
    FVector AngularVelocity;                                                          // 0x0030 (size: 0x18)
    float Mass;                                                                       // 0x0048 (size: 0x4)
    int32 ParticleIndex;                                                              // 0x004C (size: 0x4)
    int32 ParticleIndexMesh;                                                          // 0x0050 (size: 0x4)

}; // Size: 0x58

struct FSolverBreakingFilterSettings
{
    bool FilterEnabled;                                                               // 0x0000 (size: 0x1)
    float MinMass;                                                                    // 0x0004 (size: 0x4)
    float MinSpeed;                                                                   // 0x0008 (size: 0x4)
    float MinVolume;                                                                  // 0x000C (size: 0x4)

}; // Size: 0x10

struct FSolverCollisionData
{
    FVector Location;                                                                 // 0x0000 (size: 0x18)
    FVector AccumulatedImpulse;                                                       // 0x0018 (size: 0x18)
    FVector Normal;                                                                   // 0x0030 (size: 0x18)
    FVector Velocity1;                                                                // 0x0048 (size: 0x18)
    FVector Velocity2;                                                                // 0x0060 (size: 0x18)
    FVector AngularVelocity1;                                                         // 0x0078 (size: 0x18)
    FVector AngularVelocity2;                                                         // 0x0090 (size: 0x18)
    float Mass1;                                                                      // 0x00A8 (size: 0x4)
    float Mass2;                                                                      // 0x00AC (size: 0x4)
    int32 ParticleIndex;                                                              // 0x00B0 (size: 0x4)
    int32 LevelsetIndex;                                                              // 0x00B4 (size: 0x4)
    int32 ParticleIndexMesh;                                                          // 0x00B8 (size: 0x4)
    int32 LevelsetIndexMesh;                                                          // 0x00BC (size: 0x4)

}; // Size: 0xC0

struct FSolverCollisionFilterSettings
{
    bool FilterEnabled;                                                               // 0x0000 (size: 0x1)
    float MinMass;                                                                    // 0x0004 (size: 0x4)
    float MinSpeed;                                                                   // 0x0008 (size: 0x4)
    float MinImpulse;                                                                 // 0x000C (size: 0x4)

}; // Size: 0x10

struct FSolverRemovalFilterSettings
{
    bool FilterEnabled;                                                               // 0x0000 (size: 0x1)
    float MinMass;                                                                    // 0x0004 (size: 0x4)
    float MinVolume;                                                                  // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FSolverTrailingData
{
    FVector Location;                                                                 // 0x0000 (size: 0x18)
    FVector Velocity;                                                                 // 0x0018 (size: 0x18)
    FVector AngularVelocity;                                                          // 0x0030 (size: 0x18)
    float Mass;                                                                       // 0x0048 (size: 0x4)
    int32 ParticleIndex;                                                              // 0x004C (size: 0x4)
    int32 ParticleIndexMesh;                                                          // 0x0050 (size: 0x4)

}; // Size: 0x58

struct FSolverTrailingFilterSettings
{
    bool FilterEnabled;                                                               // 0x0000 (size: 0x1)
    float MinMass;                                                                    // 0x0004 (size: 0x4)
    float MinSpeed;                                                                   // 0x0008 (size: 0x4)
    float MinVolume;                                                                  // 0x000C (size: 0x4)

}; // Size: 0x10

#endif
