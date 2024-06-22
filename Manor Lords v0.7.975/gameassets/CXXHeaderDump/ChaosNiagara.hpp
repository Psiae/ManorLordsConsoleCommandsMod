#ifndef UE4SS_SDK_ChaosNiagara_HPP
#define UE4SS_SDK_ChaosNiagara_HPP

#include "ChaosNiagara_enums.hpp"

struct FChaosDestructionEvent
{
    FVector Position;                                                                 // 0x0000 (size: 0xC)
    FVector Normal;                                                                   // 0x000C (size: 0xC)
    FVector Velocity;                                                                 // 0x0018 (size: 0xC)
    FVector AngularVelocity;                                                          // 0x0024 (size: 0xC)
    float ExtentMin;                                                                  // 0x0030 (size: 0x4)
    float ExtentMax;                                                                  // 0x0034 (size: 0x4)
    int32 ParticleID;                                                                 // 0x0038 (size: 0x4)
    float Time;                                                                       // 0x003C (size: 0x4)
    int32 Type;                                                                       // 0x0040 (size: 0x4)

}; // Size: 0x44

class UNiagaraDataInterfaceChaosDestruction : public UNiagaraDataInterface
{
    TSet<AChaosSolverActor*> ChaosSolverActorSet;                                     // 0x0038 (size: 0x50)
    EDataSourceTypeEnum DataSourceType;                                               // 0x0088 (size: 0x1)
    int32 DataProcessFrequency;                                                       // 0x008C (size: 0x4)
    int32 MaxNumberOfDataEntriesToSpawn;                                              // 0x0090 (size: 0x4)
    bool DoSpawn;                                                                     // 0x0094 (size: 0x1)
    FVector2D SpawnMultiplierMinMax;                                                  // 0x0098 (size: 0x8)
    float SpawnChance;                                                                // 0x00A0 (size: 0x4)
    FVector2D ImpulseToSpawnMinMax;                                                   // 0x00A4 (size: 0x8)
    FVector2D SpeedToSpawnMinMax;                                                     // 0x00AC (size: 0x8)
    FVector2D MassToSpawnMinMax;                                                      // 0x00B4 (size: 0x8)
    FVector2D ExtentMinToSpawnMinMax;                                                 // 0x00BC (size: 0x8)
    FVector2D ExtentMaxToSpawnMinMax;                                                 // 0x00C4 (size: 0x8)
    FVector2D VolumeToSpawnMinMax;                                                    // 0x00CC (size: 0x8)
    FVector2D SolverTimeToSpawnMinMax;                                                // 0x00D4 (size: 0x8)
    int32 SurfaceTypeToSpawn;                                                         // 0x00DC (size: 0x4)
    ELocationFilteringModeEnum LocationFilteringMode;                                 // 0x00E0 (size: 0x1)
    ELocationXToSpawnEnum LocationXToSpawn;                                           // 0x00E1 (size: 0x1)
    FVector2D LocationXToSpawnMinMax;                                                 // 0x00E4 (size: 0x8)
    ELocationYToSpawnEnum LocationYToSpawn;                                           // 0x00EC (size: 0x1)
    FVector2D LocationYToSpawnMinMax;                                                 // 0x00F0 (size: 0x8)
    ELocationZToSpawnEnum LocationZToSpawn;                                           // 0x00F8 (size: 0x1)
    FVector2D LocationZToSpawnMinMax;                                                 // 0x00FC (size: 0x8)
    EDataSortTypeEnum DataSortingType;                                                // 0x0104 (size: 0x1)
    bool bGetExternalCollisionData;                                                   // 0x0105 (size: 0x1)
    bool DoSpatialHash;                                                               // 0x0106 (size: 0x1)
    FVector SpatialHashVolumeMin;                                                     // 0x0108 (size: 0xC)
    FVector SpatialHashVolumeMax;                                                     // 0x0114 (size: 0xC)
    FVector SpatialHashVolumeCellSize;                                                // 0x0120 (size: 0xC)
    int32 MaxDataPerCell;                                                             // 0x012C (size: 0x4)
    bool bApplyMaterialsFilter;                                                       // 0x0130 (size: 0x1)
    TSet<UPhysicalMaterial*> ChaosBreakingMaterialSet;                                // 0x0138 (size: 0x50)
    bool bGetExternalBreakingData;                                                    // 0x0188 (size: 0x1)
    bool bGetExternalTrailingData;                                                    // 0x0189 (size: 0x1)
    FVector2D RandomPositionMagnitudeMinMax;                                          // 0x018C (size: 0x8)
    float InheritedVelocityMultiplier;                                                // 0x0194 (size: 0x4)
    ERandomVelocityGenerationTypeEnum RandomVelocityGenerationType;                   // 0x0198 (size: 0x1)
    FVector2D RandomVelocityMagnitudeMinMax;                                          // 0x019C (size: 0x8)
    float SpreadAngleMax;                                                             // 0x01A4 (size: 0x4)
    FVector VelocityOffsetMin;                                                        // 0x01A8 (size: 0xC)
    FVector VelocityOffsetMax;                                                        // 0x01B4 (size: 0xC)
    FVector2D FinalVelocityMagnitudeMinMax;                                           // 0x01C0 (size: 0x8)
    float MaxLatency;                                                                 // 0x01C8 (size: 0x4)
    EDebugTypeEnum DebugType;                                                         // 0x01CC (size: 0x1)
    int32 LastSpawnedPointID;                                                         // 0x01D0 (size: 0x4)
    float LastSpawnTime;                                                              // 0x01D4 (size: 0x4)
    float SolverTime;                                                                 // 0x01E8 (size: 0x4)
    float TimeStampOfLastProcessedData;                                               // 0x01EC (size: 0x4)

}; // Size: 0x238

class UNiagaraDataInterfacePhysicsField : public UNiagaraDataInterface
{
}; // Size: 0x38

#endif
