#ifndef UE4SS_SDK_SpatialSystem_HPP
#define UE4SS_SDK_SpatialSystem_HPP

#include "SpatialSystem_enums.hpp"

struct FSpatialEntity
{
}; // Size: 0x50

struct FSpatialGrid
{
    FSpatialSettings Settings;                                                        // 0x0050 (size: 0x78)

}; // Size: 0x118

struct FSpatialGridInfo
{
    int32 Total;                                                                      // 0x0000 (size: 0x4)
    int32 Visible;                                                                    // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FSpatialQueryCache
{
    int32 Radius;                                                                     // 0x0000 (size: 0x4)
    TArray<FVector> LocationsInner;                                                   // 0x0008 (size: 0x10)
    TArray<FVector> LocationsOuter;                                                   // 0x0018 (size: 0x10)
    TArray<FVector> Locations;                                                        // 0x0028 (size: 0x10)

}; // Size: 0x68

struct FSpatialSettings
{
    FVector Size;                                                                     // 0x0000 (size: 0x18)
    TEnumAsByte<ESpatialDimension> Dimension;                                         // 0x0018 (size: 0x1)
    FVector SizeHalf;                                                                 // 0x0020 (size: 0x18)
    bool bCullDistanceEnabled;                                                        // 0x0038 (size: 0x1)
    int32 CullDistance;                                                               // 0x003C (size: 0x4)
    float CullScale;                                                                  // 0x0040 (size: 0x4)
    bool bCullViewFrustum;                                                            // 0x0044 (size: 0x1)
    float MaxEntityRadius;                                                            // 0x0048 (size: 0x4)
    TArray<FSpatialQueryCache> Cache;                                                 // 0x0050 (size: 0x10)
    TArray<int32> CacheRadiusToIndex;                                                 // 0x0060 (size: 0x10)
    bool bUpdateCache;                                                                // 0x0070 (size: 0x1)
    bool bDebugTiles;                                                                 // 0x0071 (size: 0x1)
    bool bDebugEntities;                                                              // 0x0072 (size: 0x1)

}; // Size: 0x78

struct FSpatialTile
{
}; // Size: 0xE0

class USpatialEntityComponent : public UActorComponent
{
    TSubclassOf<class USpatialGridSettings> GridSettingsAsset;                        // 0x00B0 (size: 0x8)
    bool bAutoSize;                                                                   // 0x00B8 (size: 0x1)
    float Radius;                                                                     // 0x00BC (size: 0x4)
    FVector Offset;                                                                   // 0x00C0 (size: 0x18)
    bool bGenerateOverlapEvents;                                                      // 0x00D8 (size: 0x1)
    bool bStatic;                                                                     // 0x00D9 (size: 0x1)
    bool bDebug;                                                                      // 0x00DA (size: 0x1)
    class USpatialFilter* OverlapFilter;                                              // 0x00E0 (size: 0x8)
    FSpatialEntityComponentOnOverlap OnOverlap;                                       // 0x00E8 (size: 0x10)
    void OnOverlapSignature(const TArray<class USpatialEntityComponent*>& Components);
    FSpatialEntityComponentOnSelected OnSelected;                                     // 0x00F8 (size: 0x10)
    void OnSelectedSignature();
    FSpatialEntityComponentOnDeselected OnDeselected;                                 // 0x0108 (size: 0x10)
    void OnSelectedSignature();

    void UpdateEntityBounds(bool bForceUpdate);
    void SetRadius(float InRadius);
    bool Select();
    void RemoveEntity();
    void QueryActorsInRange(TArray<class AActor*>& Collection, class USpatialFilter* Filter, float QueryRadius);
    bool IsSelected();
    float GetRadius();
    FVector GetLocation();
    bool Deselect();
}; // Size: 0x178

class USpatialFilter : public UObject
{
    float MinimumDistance;                                                            // 0x0028 (size: 0x4)

}; // Size: 0x30

class USpatialFilterActor : public USpatialFilter
{
    TSubclassOf<class AActor> ActorClass;                                             // 0x0030 (size: 0x8)

}; // Size: 0x38

class USpatialFilterComposition : public USpatialFilter
{
    TArray<class USpatialFilter*> Filter;                                             // 0x0030 (size: 0x10)

}; // Size: 0x40

class USpatialFilterGroup : public USpatialFilter
{
    int32 GroupID;                                                                    // 0x0030 (size: 0x4)
    int32 Health;                                                                     // 0x0034 (size: 0x4)

}; // Size: 0x38

class USpatialGridSettings : public UObject
{
    FSpatialSettings Settings;                                                        // 0x0028 (size: 0x78)

    void UpdateCache();
}; // Size: 0xA0

class USpatialSystemBPLibrary : public UBlueprintFunctionLibrary
{

    TArray<FVector> QueryLocationsDebug(const FSpatialSettings& GridSettings, const FVector& Location, const float Radius, TArray<FVector>& OutLocationsInner);
    TArray<FVector> QueryLocations(const FSpatialSettings& GridSettings, const FVector& Location, const float Radius);
    FVector MaskVector(const FVector& Vector, const FSpatialSettings& Settings);
    class AActor* GetClosests(const FVector& Location, const TArray<class AActor*>& Collection);
    void DrawSelection(const class UObject* WorldContextObject, const FVector2D& FirstPoint, const FVector2D& SecondPoint, const FColor& Color, float Thickness, float Near, float Far);
}; // Size: 0x28

class USpatialWorldSubsystem : public UTickableWorldSubsystem
{
    FSpatialGridInfo Info;                                                            // 0x0134 (size: 0x8)

    bool QuerySelectionActors(TSubclassOf<class USpatialGridSettings> GridSetting, class USpatialFilter* Filter, TArray<class AActor*>& Collection, const FVector2D& FirstPoint, const FVector2D& SecondPoint, float Near, float Far, bool DrawDebug, bool bTraceEndPoint);
    bool QuerySelection(TSubclassOf<class USpatialGridSettings> GridSetting, class USpatialFilter* Filter, TArray<class USpatialEntityComponent*>& Collection, const FVector2D& FirstPoint, const FVector2D& SecondPoint, float Near, float Far, bool DrawDebug, bool bTraceEndPoint);
    void QueryLineTraceActors(TSubclassOf<class USpatialGridSettings> GridSetting, class USpatialFilter* Filter, const FVector& Start, const FVector& End, TArray<class AActor*>& Collection, bool bTraceEndPoint, bool Debug);
    void Query(TSubclassOf<class USpatialGridSettings> GridSettings, const FVector& Location, float Radius, TArray<class AActor*>& Collection);
}; // Size: 0x1D0

#endif
