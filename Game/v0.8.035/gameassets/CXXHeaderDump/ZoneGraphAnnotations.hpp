#ifndef UE4SS_SDK_ZoneGraphAnnotations_HPP
#define UE4SS_SDK_ZoneGraphAnnotations_HPP

#include "ZoneGraphAnnotations_enums.hpp"

struct FRegisteredZoneGraphAnnotation
{
    class UZoneGraphAnnotationComponent* AnnotationComponent;                         // 0x0000 (size: 0x8)

}; // Size: 0x10

struct FZoneGraphAnnotationEventBase
{
}; // Size: 0x1

struct FZoneGraphDisturbanceArea : public FZoneGraphAnnotationEventBase
{
    FVector position;                                                                 // 0x0000 (size: 0x18)
    float Radius;                                                                     // 0x0018 (size: 0x4)
    float Duration;                                                                   // 0x001C (size: 0x4)
    uint32 InstigatorID;                                                              // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FZoneGraphObstacleDisturbanceArea : public FZoneGraphAnnotationEventBase
{
    FVector position;                                                                 // 0x0000 (size: 0x18)
    float Radius;                                                                     // 0x0018 (size: 0x4)
    float ObstacleRadius;                                                             // 0x001C (size: 0x4)
    EZoneGraphObstacleDisturbanceAreaAction Action;                                   // 0x0028 (size: 0x1)

}; // Size: 0x30

class AZoneGraphAnnotationTestingActor : public AActor
{
    class UZoneGraphAnnotationTestingComponent* TestingComp;                          // 0x02A8 (size: 0x8)

    void Trigger();
}; // Size: 0x2B0

class UZoneGraphAnnotationComponent : public UDebugDrawComponent
{
    bool bEnableDebugDrawing;                                                         // 0x0550 (size: 0x1)

}; // Size: 0x560

class UZoneGraphAnnotationSubsystem : public UTickableWorldSubsystem
{
    TArray<FRegisteredZoneGraphAnnotation> RegisteredComponents;                      // 0x0040 (size: 0x10)
    FInstancedStructContainer Events;                                                 // 0x0050 (size: 0x20)
    TArray<class UZoneGraphAnnotationComponent*> TagToAnnotationLookup;               // 0x0078 (size: 0x10)

}; // Size: 0xB0

class UZoneGraphAnnotationTest : public UObject
{
    class UZoneGraphAnnotationTestingComponent* OwnerComponent;                       // 0x0028 (size: 0x8)

}; // Size: 0x30

class UZoneGraphAnnotationTestingComponent : public UDebugDrawComponent
{
    TArray<class UZoneGraphAnnotationTest*> Tests;                                    // 0x0538 (size: 0x10)

}; // Size: 0x550

class UZoneGraphDisturbanceAnnotation : public UZoneGraphAnnotationComponent
{
    FZoneGraphTag DangerAnnotationTag;                                                // 0x0558 (size: 0x1)
    FZoneGraphTag ObstacleAnnotationTag;                                              // 0x0559 (size: 0x1)
    FZoneGraphTagFilter AffectedLaneTags;                                             // 0x055C (size: 0xC)
    FZoneGraphTagFilter EscapeLaneTags;                                               // 0x0568 (size: 0xC)
    float IdealSpanLength;                                                            // 0x0574 (size: 0x4)
    class UZoneGraphSubsystem* ZoneGraphSubsystem;                                    // 0x05B8 (size: 0x8)

}; // Size: 0x5C0

class UZoneGraphDisturbanceAnnotationBPLibrary : public UBlueprintFunctionLibrary
{

    void TriggerDanger(class UObject* WorldContextObject, const class AActor* Instigator, const FVector position, const float Radius, const float Duration);
}; // Size: 0x28

class UZoneGraphDisturbanceAnnotationTest : public UZoneGraphAnnotationTest
{
    FVector Offset;                                                                   // 0x0030 (size: 0x18)
    float Duration;                                                                   // 0x0048 (size: 0x4)
    float DangerRadius;                                                               // 0x004C (size: 0x4)

}; // Size: 0x50

#endif
