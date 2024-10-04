#ifndef UE4SS_SDK_ChaosNiagara_HPP
#define UE4SS_SDK_ChaosNiagara_HPP

#include "ChaosNiagara_enums.hpp"

struct FChaosDestructionEvent
{
    FVector Position;                                                                 // 0x0000 (size: 0x18)
    FVector Normal;                                                                   // 0x0018 (size: 0x18)
    FVector Velocity;                                                                 // 0x0030 (size: 0x18)
    FVector AngularVelocity;                                                          // 0x0048 (size: 0x18)
    float ExtentMin;                                                                  // 0x0060 (size: 0x4)
    float ExtentMax;                                                                  // 0x0064 (size: 0x4)
    int32 ParticleID;                                                                 // 0x0068 (size: 0x4)
    float Time;                                                                       // 0x006C (size: 0x4)
    int32 Type;                                                                       // 0x0070 (size: 0x4)

}; // Size: 0x78

class UNiagaraDataInterfaceChaosDestruction : public UNiagaraDataInterface
{
    TSet<AChaosSolverActor*> ChaosSolverActorSet;                                     // 0x0038 (size: 0x50)
    EDataSourceTypeEnum DataSourceType;                                               // 0x0088 (size: 0x1)
    int32 DataProcessFrequency;                                                       // 0x008C (size: 0x4)
    int32 MaxNumberOfDataEntriesToSpawn;                                              // 0x0090 (size: 0x4)
    bool DoSpawn;                                                                     // 0x0094 (size: 0x1)
    FVector2D SpawnMultiplierMinMax;                                                  // 0x0098 (size: 0x10)
    float SpawnChance;                                                                // 0x00A8 (size: 0x4)
    FVector2D ImpulseToSpawnMinMax;                                                   // 0x00B0 (size: 0x10)
    FVector2D SpeedToSpawnMinMax;                                                     // 0x00C0 (size: 0x10)
    FVector2D MassToSpawnMinMax;                                                      // 0x00D0 (size: 0x10)
    FVector2D ExtentMinToSpawnMinMax;                                                 // 0x00E0 (size: 0x10)
    FVector2D ExtentMaxToSpawnMinMax;                                                 // 0x00F0 (size: 0x10)
    FVector2D VolumeToSpawnMinMax;                                                    // 0x0100 (size: 0x10)
    FVector2D SolverTimeToSpawnMinMax;                                                // 0x0110 (size: 0x10)
    int32 SurfaceTypeToSpawn;                                                         // 0x0120 (size: 0x4)
    ELocationFilteringModeEnum LocationFilteringMode;                                 // 0x0124 (size: 0x1)
    ELocationXToSpawnEnum LocationXToSpawn;                                           // 0x0125 (size: 0x1)
    FVector2D LocationXToSpawnMinMax;                                                 // 0x0128 (size: 0x10)
    ELocationYToSpawnEnum LocationYToSpawn;                                           // 0x0138 (size: 0x1)
    FVector2D LocationYToSpawnMinMax;                                                 // 0x0140 (size: 0x10)
    ELocationZToSpawnEnum LocationZToSpawn;                                           // 0x0150 (size: 0x1)
    FVector2D LocationZToSpawnMinMax;                                                 // 0x0158 (size: 0x10)
    float TrailMinSpeedToSpawn;                                                       // 0x0168 (size: 0x4)
    EDataSortTypeEnum DataSortingType;                                                // 0x016C (size: 0x1)
    bool bGetExternalCollisionData;                                                   // 0x016D (size: 0x1)
    bool DoSpatialHash;                                                               // 0x016E (size: 0x1)
    FVector SpatialHashVolumeMin;                                                     // 0x0170 (size: 0x18)
    FVector SpatialHashVolumeMax;                                                     // 0x0188 (size: 0x18)
    FVector SpatialHashVolumeCellSize;                                                // 0x01A0 (size: 0x18)
    int32 MaxDataPerCell;                                                             // 0x01B8 (size: 0x4)
    bool bApplyMaterialsFilter;                                                       // 0x01BC (size: 0x1)
    TSet<UPhysicalMaterial*> ChaosBreakingMaterialSet;                                // 0x01C0 (size: 0x50)
    bool bGetExternalBreakingData;                                                    // 0x0210 (size: 0x1)
    bool bGetExternalTrailingData;                                                    // 0x0211 (size: 0x1)
    FVector2D RandomPositionMagnitudeMinMax;                                          // 0x0218 (size: 0x10)
    float InheritedVelocityMultiplier;                                                // 0x0228 (size: 0x4)
    ERandomVelocityGenerationTypeEnum RandomVelocityGenerationType;                   // 0x022C (size: 0x1)
    FVector2D RandomVelocityMagnitudeMinMax;                                          // 0x0230 (size: 0x10)
    float SpreadAngleMax;                                                             // 0x0240 (size: 0x4)
    FVector VelocityOffsetMin;                                                        // 0x0248 (size: 0x18)
    FVector VelocityOffsetMax;                                                        // 0x0260 (size: 0x18)
    FVector2D FinalVelocityMagnitudeMinMax;                                           // 0x0278 (size: 0x10)
    float MaxLatency;                                                                 // 0x0288 (size: 0x4)
    EDebugTypeEnum DebugType;                                                         // 0x028C (size: 0x1)
    int32 LastSpawnedPointID;                                                         // 0x0290 (size: 0x4)
    float LastSpawnTime;                                                              // 0x0294 (size: 0x4)
    float SolverTime;                                                                 // 0x02A8 (size: 0x4)
    float TimeStampOfLastProcessedData;                                               // 0x02AC (size: 0x4)

}; // Size: 0x348

class UNiagaraDataInterfaceGeometryCollection : public UNiagaraDataInterface
{
    class AGeometryCollectionActor* GeometryCollectionActor;                          // 0x0038 (size: 0x8)

}; // Size: 0x40

class UNiagaraDataInterfacePhysicsField : public UNiagaraDataInterface
{
}; // Size: 0x38

#endif
