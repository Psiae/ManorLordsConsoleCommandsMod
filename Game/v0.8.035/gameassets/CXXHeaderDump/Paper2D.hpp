#ifndef UE4SS_SDK_Paper2D_HPP
#define UE4SS_SDK_Paper2D_HPP

#include "Paper2D_enums.hpp"

struct FIntMargin
{
    int32 Left;                                                                       // 0x0000 (size: 0x4)
    int32 Top;                                                                        // 0x0004 (size: 0x4)
    int32 Right;                                                                      // 0x0008 (size: 0x4)
    int32 Bottom;                                                                     // 0x000C (size: 0x4)

}; // Size: 0x10

struct FPaperFlipbookKeyFrame
{
    class UPaperSprite* Sprite;                                                       // 0x0000 (size: 0x8)
    int32 FrameRun;                                                                   // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FPaperSpriteAtlasSlot
{
    TSoftObjectPtr<UPaperSprite> SpriteRef;                                           // 0x0000 (size: 0x28)
    int32 AtlasIndex;                                                                 // 0x0028 (size: 0x4)
    int32 X;                                                                          // 0x002C (size: 0x4)
    int32 Y;                                                                          // 0x0030 (size: 0x4)
    int32 Width;                                                                      // 0x0034 (size: 0x4)
    int32 Height;                                                                     // 0x0038 (size: 0x4)

}; // Size: 0x40

struct FPaperSpriteSocket
{
    FTransform LocalTransform;                                                        // 0x0000 (size: 0x60)
    FName SocketName;                                                                 // 0x0060 (size: 0x8)

}; // Size: 0x70

struct FPaperTerrainMaterialRule
{
    class UPaperSprite* StartCap;                                                     // 0x0000 (size: 0x8)
    TArray<class UPaperSprite*> Body;                                                 // 0x0008 (size: 0x10)
    class UPaperSprite* EndCap;                                                       // 0x0018 (size: 0x8)
    float MinimumAngle;                                                               // 0x0020 (size: 0x4)
    float MaximumAngle;                                                               // 0x0024 (size: 0x4)
    bool bEnableCollision;                                                            // 0x0028 (size: 0x1)
    float CollisionOffset;                                                            // 0x002C (size: 0x4)
    int32 DrawOrder;                                                                  // 0x0030 (size: 0x4)

}; // Size: 0x38

struct FPaperTileInfo
{
    class UPaperTileSet* TileSet;                                                     // 0x0000 (size: 0x8)
    int32 PackedTileIndex;                                                            // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FPaperTileMetadata
{
    FName UserDataName;                                                               // 0x0000 (size: 0x8)
    FSpriteGeometryCollection CollisionData;                                          // 0x0008 (size: 0x30)
    uint8 TerrainMembership;                                                          // 0x0038 (size: 0x4)

}; // Size: 0x40

struct FPaperTileSetTerrain
{
    FString TerrainName;                                                              // 0x0000 (size: 0x10)
    int32 CenterTileIndex;                                                            // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FSpriteAssetInitParameters
{
}; // Size: 0x40

struct FSpriteDrawCallRecord
{
    FVector Destination;                                                              // 0x0000 (size: 0x18)
    class UTexture* BaseTexture;                                                      // 0x0018 (size: 0x8)
    FColor Color;                                                                     // 0x0050 (size: 0x4)

}; // Size: 0x140

struct FSpriteGeometryCollection
{
    TArray<FSpriteGeometryShape> Shapes;                                              // 0x0000 (size: 0x10)
    TEnumAsByte<ESpritePolygonMode::Type> GeometryType;                               // 0x0010 (size: 0x1)
    int32 PixelsPerSubdivisionX;                                                      // 0x0014 (size: 0x4)
    int32 PixelsPerSubdivisionY;                                                      // 0x0018 (size: 0x4)
    bool bAvoidVertexMerging;                                                         // 0x001C (size: 0x1)
    float AlphaThreshold;                                                             // 0x0020 (size: 0x4)
    float DetailAmount;                                                               // 0x0024 (size: 0x4)
    float SimplifyEpsilon;                                                            // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FSpriteGeometryShape
{
    ESpriteShapeType ShapeType;                                                       // 0x0000 (size: 0x1)
    TArray<FVector2D> Vertices;                                                       // 0x0008 (size: 0x10)
    FVector2D BoxSize;                                                                // 0x0018 (size: 0x10)
    FVector2D BoxPosition;                                                            // 0x0028 (size: 0x10)
    float Rotation;                                                                   // 0x0038 (size: 0x4)
    bool bNegativeWinding;                                                            // 0x003C (size: 0x1)

}; // Size: 0x40

struct FSpriteInstanceData
{
    FMatrix Transform;                                                                // 0x0000 (size: 0x80)
    class UPaperSprite* SourceSprite;                                                 // 0x0080 (size: 0x8)
    FColor VertexColor;                                                               // 0x0088 (size: 0x4)
    int32 MaterialIndex;                                                              // 0x008C (size: 0x4)

}; // Size: 0x90

class APaperCharacter : public ACharacter
{
    class UPaperFlipbookComponent* Sprite;                                            // 0x0648 (size: 0x8)

}; // Size: 0x650

class APaperFlipbookActor : public AActor
{
    class UPaperFlipbookComponent* RenderComponent;                                   // 0x02A8 (size: 0x8)

}; // Size: 0x2B0

class APaperGroupedSpriteActor : public AActor
{
    class UPaperGroupedSpriteComponent* RenderComponent;                              // 0x02A8 (size: 0x8)

}; // Size: 0x2B0

class APaperSpriteActor : public AActor
{
    class UPaperSpriteComponent* RenderComponent;                                     // 0x02A8 (size: 0x8)

}; // Size: 0x2B0

class APaperTerrainActor : public AActor
{
    class USceneComponent* DummyRoot;                                                 // 0x02A8 (size: 0x8)
    class UPaperTerrainSplineComponent* SplineComponent;                              // 0x02B0 (size: 0x8)
    class UPaperTerrainComponent* RenderComponent;                                    // 0x02B8 (size: 0x8)

}; // Size: 0x2C0

class APaperTileMapActor : public AActor
{
    class UPaperTileMapComponent* RenderComponent;                                    // 0x02A8 (size: 0x8)

}; // Size: 0x2B0

class UMaterialExpressionSpriteTextureSampler : public UMaterialExpressionTextureSampleParameter2D
{
    bool bSampleAdditionalTextures;                                                   // 0x0220 (size: 0x1)
    int32 AdditionalSlotIndex;                                                        // 0x0224 (size: 0x4)
    FText SlotDisplayName;                                                            // 0x0228 (size: 0x10)

}; // Size: 0x238

class UPaperFlipbook : public UObject
{
    float FramesPerSecond;                                                            // 0x0028 (size: 0x4)
    TArray<FPaperFlipbookKeyFrame> KeyFrames;                                         // 0x0030 (size: 0x10)
    class UMaterialInterface* DefaultMaterial;                                        // 0x0040 (size: 0x8)
    TEnumAsByte<EFlipbookCollisionMode::Type> CollisionSource;                        // 0x0048 (size: 0x1)

    bool IsValidKeyFrameIndex(int32 Index);
    float GetTotalDuration();
    class UPaperSprite* GetSpriteAtTime(float Time, bool bClampToEnds);
    class UPaperSprite* GetSpriteAtFrame(int32 FrameIndex);
    int32 GetNumKeyFrames();
    int32 GetNumFrames();
    int32 GetKeyFrameIndexAtTime(float Time, bool bClampToEnds);
}; // Size: 0x50

class UPaperFlipbookComponent : public UMeshComponent
{
    class UPaperFlipbook* SourceFlipbook;                                             // 0x0518 (size: 0x8)
    class UMaterialInterface* Material;                                               // 0x0520 (size: 0x8)
    float PlayRate;                                                                   // 0x0528 (size: 0x4)
    uint8 bLooping;                                                                   // 0x052C (size: 0x1)
    uint8 bReversePlayback;                                                           // 0x052C (size: 0x1)
    uint8 bPlaying;                                                                   // 0x052C (size: 0x1)
    float AccumulatedTime;                                                            // 0x0530 (size: 0x4)
    int32 CachedFrameIndex;                                                           // 0x0534 (size: 0x4)
    FLinearColor SpriteColor;                                                         // 0x0538 (size: 0x10)
    class UBodySetup* CachedBodySetup;                                                // 0x0548 (size: 0x8)
    FPaperFlipbookComponentOnFinishedPlaying OnFinishedPlaying;                       // 0x0550 (size: 0x10)
    void FlipbookFinishedPlaySignature();

    void Stop();
    void SetSpriteColor(FLinearColor NewColor);
    void SetPlayRate(float NewRate);
    void SetPlaybackPositionInFrames(int32 NewFramePosition, bool bFireEvents);
    void SetPlaybackPosition(float NewPosition, bool bFireEvents);
    void SetNewTime(float NewTime);
    void SetLooping(bool bNewLooping);
    bool SetFlipbook(class UPaperFlipbook* NewFlipbook);
    void ReverseFromEnd();
    void Reverse();
    void PlayFromStart();
    void Play();
    void OnRep_SourceFlipbook(class UPaperFlipbook* OldFlipbook);
    bool IsReversing();
    bool IsPlaying();
    bool IsLooping();
    FLinearColor GetSpriteColor();
    float GetPlayRate();
    int32 GetPlaybackPositionInFrames();
    float GetPlaybackPosition();
    int32 GetFlipbookLengthInFrames();
    float GetFlipbookLength();
    float GetFlipbookFramerate();
    class UPaperFlipbook* GetFlipbook();
}; // Size: 0x560

class UPaperGroupedSpriteComponent : public UMeshComponent
{
    TArray<class UMaterialInterface*> InstanceMaterials;                              // 0x0518 (size: 0x10)
    TArray<FSpriteInstanceData> PerInstanceSpriteData;                                // 0x0528 (size: 0x10)

    bool UpdateInstanceTransform(int32 InstanceIndex, const FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
    bool UpdateInstanceColor(int32 InstanceIndex, FLinearColor NewInstanceColor, bool bMarkRenderStateDirty);
    void SortInstancesAlongAxis(FVector WorldSpaceSortAxis);
    bool RemoveInstance(int32 InstanceIndex);
    bool GetInstanceTransform(int32 InstanceIndex, FTransform& OutInstanceTransform, bool bWorldSpace);
    int32 GetInstanceCount();
    void ClearInstances();
    int32 AddInstance(const FTransform& Transform, class UPaperSprite* Sprite, bool bWorldSpace, FLinearColor Color);
}; // Size: 0x550

class UPaperRuntimeSettings : public UObject
{
    bool bEnableSpriteAtlasGroups;                                                    // 0x0028 (size: 0x1)
    bool bEnableTerrainSplineEditing;                                                 // 0x0029 (size: 0x1)
    bool bResizeSpriteDataToMatchTextures;                                            // 0x002A (size: 0x1)

}; // Size: 0x30

class UPaperSprite : public UObject
{
    TArray<class UTexture*> AdditionalSourceTextures;                                 // 0x0038 (size: 0x10)
    FVector2D BakedSourceUV;                                                          // 0x0048 (size: 0x10)
    FVector2D BakedSourceDimension;                                                   // 0x0058 (size: 0x10)
    class UTexture2D* BakedSourceTexture;                                             // 0x0068 (size: 0x8)
    class UMaterialInterface* DefaultMaterial;                                        // 0x0070 (size: 0x8)
    class UMaterialInterface* AlternateMaterial;                                      // 0x0078 (size: 0x8)
    TArray<FPaperSpriteSocket> Sockets;                                               // 0x0080 (size: 0x10)
    TEnumAsByte<ESpriteCollisionMode::Type> SpriteCollisionDomain;                    // 0x0090 (size: 0x1)
    float PixelsPerUnrealUnit;                                                        // 0x0094 (size: 0x4)
    class UBodySetup* BodySetup;                                                      // 0x0098 (size: 0x8)
    int32 AlternateMaterialSplitIndex;                                                // 0x00A0 (size: 0x4)
    TArray<FVector4> BakedRenderData;                                                 // 0x00A8 (size: 0x10)

}; // Size: 0xB8

class UPaperSpriteAtlas : public UObject
{
}; // Size: 0x28

class UPaperSpriteBlueprintLibrary : public UBlueprintFunctionLibrary
{

    FSlateBrush MakeBrushFromSprite(class UPaperSprite* Sprite, int32 Width, int32 Height);
}; // Size: 0x28

class UPaperSpriteComponent : public UMeshComponent
{
    class UPaperSprite* SourceSprite;                                                 // 0x0518 (size: 0x8)
    class UMaterialInterface* MaterialOverride;                                       // 0x0520 (size: 0x8)
    FLinearColor SpriteColor;                                                         // 0x0528 (size: 0x10)

    void SetSpriteColor(FLinearColor NewColor);
    bool SetSprite(class UPaperSprite* NewSprite);
    class UPaperSprite* GetSprite();
}; // Size: 0x540

class UPaperTerrainComponent : public UPrimitiveComponent
{
    class UPaperTerrainMaterial* TerrainMaterial;                                     // 0x04E8 (size: 0x8)
    bool bClosedSpline;                                                               // 0x04F0 (size: 0x1)
    bool bFilledSpline;                                                               // 0x04F1 (size: 0x1)
    class UPaperTerrainSplineComponent* AssociatedSpline;                             // 0x04F8 (size: 0x8)
    int32 RandomSeed;                                                                 // 0x0500 (size: 0x4)
    float SegmentOverlapAmount;                                                       // 0x0504 (size: 0x4)
    FLinearColor TerrainColor;                                                        // 0x0508 (size: 0x10)
    int32 ReparamStepsPerSegment;                                                     // 0x0518 (size: 0x4)
    TEnumAsByte<ESpriteCollisionMode::Type> SpriteCollisionDomain;                    // 0x051C (size: 0x1)
    float CollisionThickness;                                                         // 0x0520 (size: 0x4)
    class UBodySetup* CachedBodySetup;                                                // 0x0528 (size: 0x8)

    void SetTerrainColor(FLinearColor NewColor);
}; // Size: 0x540

class UPaperTerrainMaterial : public UDataAsset
{
    TArray<FPaperTerrainMaterialRule> Rules;                                          // 0x0030 (size: 0x10)
    class UPaperSprite* InteriorFill;                                                 // 0x0040 (size: 0x8)

}; // Size: 0x48

class UPaperTerrainSplineComponent : public USplineComponent
{
}; // Size: 0x590

class UPaperTileLayer : public UObject
{
    FText LayerName;                                                                  // 0x0028 (size: 0x10)
    int32 LayerWidth;                                                                 // 0x0038 (size: 0x4)
    int32 LayerHeight;                                                                // 0x003C (size: 0x4)
    uint8 bHiddenInGame;                                                              // 0x0040 (size: 0x1)
    uint8 bLayerCollides;                                                             // 0x0040 (size: 0x1)
    uint8 bOverrideCollisionThickness;                                                // 0x0040 (size: 0x1)
    uint8 bOverrideCollisionOffset;                                                   // 0x0040 (size: 0x1)
    float CollisionThicknessOverride;                                                 // 0x0044 (size: 0x4)
    float CollisionOffsetOverride;                                                    // 0x0048 (size: 0x4)
    FLinearColor LayerColor;                                                          // 0x004C (size: 0x10)
    int32 AllocatedWidth;                                                             // 0x005C (size: 0x4)
    int32 AllocatedHeight;                                                            // 0x0060 (size: 0x4)
    TArray<FPaperTileInfo> AllocatedCells;                                            // 0x0068 (size: 0x10)
    class UPaperTileSet* TileSet;                                                     // 0x0078 (size: 0x8)
    TArray<int32> AllocatedGrid;                                                      // 0x0080 (size: 0x10)

}; // Size: 0x90

class UPaperTileMap : public UObject
{
    int32 MapWidth;                                                                   // 0x0028 (size: 0x4)
    int32 MapHeight;                                                                  // 0x002C (size: 0x4)
    int32 TileWidth;                                                                  // 0x0030 (size: 0x4)
    int32 TileHeight;                                                                 // 0x0034 (size: 0x4)
    float PixelsPerUnrealUnit;                                                        // 0x0038 (size: 0x4)
    float SeparationPerTileX;                                                         // 0x003C (size: 0x4)
    float SeparationPerTileY;                                                         // 0x0040 (size: 0x4)
    float SeparationPerLayer;                                                         // 0x0044 (size: 0x4)
    TSoftObjectPtr<UPaperTileSet> SelectedTileSet;                                    // 0x0048 (size: 0x28)
    class UMaterialInterface* Material;                                               // 0x0070 (size: 0x8)
    TArray<class UPaperTileLayer*> TileLayers;                                        // 0x0078 (size: 0x10)
    float CollisionThickness;                                                         // 0x0088 (size: 0x4)
    TEnumAsByte<ESpriteCollisionMode::Type> SpriteCollisionDomain;                    // 0x008C (size: 0x1)
    TEnumAsByte<ETileMapProjectionMode::Type> ProjectionMode;                         // 0x008D (size: 0x1)
    int32 HexSideLength;                                                              // 0x0090 (size: 0x4)
    class UBodySetup* BodySetup;                                                      // 0x0098 (size: 0x8)
    int32 LayerNameIndex;                                                             // 0x00A0 (size: 0x4)

}; // Size: 0xA8

class UPaperTileMapComponent : public UMeshComponent
{
    int32 MapWidth;                                                                   // 0x0518 (size: 0x4)
    int32 MapHeight;                                                                  // 0x051C (size: 0x4)
    int32 TileWidth;                                                                  // 0x0520 (size: 0x4)
    int32 TileHeight;                                                                 // 0x0524 (size: 0x4)
    class UPaperTileSet* DefaultLayerTileSet;                                         // 0x0528 (size: 0x8)
    class UMaterialInterface* Material;                                               // 0x0530 (size: 0x8)
    TArray<class UPaperTileLayer*> TileLayers;                                        // 0x0538 (size: 0x10)
    FLinearColor TileMapColor;                                                        // 0x0548 (size: 0x10)
    int32 UseSingleLayerIndex;                                                        // 0x0558 (size: 0x4)
    bool bUseSingleLayer;                                                             // 0x055C (size: 0x1)
    class UPaperTileMap* TileMap;                                                     // 0x0560 (size: 0x8)

    void SetTileMapColor(FLinearColor NewColor);
    bool SetTileMap(class UPaperTileMap* NewTileMap);
    void SetTile(int32 X, int32 Y, int32 Layer, FPaperTileInfo NewValue);
    void SetLayerColor(FLinearColor NewColor, int32 Layer);
    void SetLayerCollision(int32 Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision);
    void SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision);
    void ResizeMap(int32 NewWidthInTiles, int32 NewHeightInTiles);
    void RebuildCollision();
    bool OwnsTileMap();
    void MakeTileMapEditable();
    void GetTilePolygon(int32 TileX, int32 TileY, TArray<FVector>& Points, int32 LayerIndex, bool bWorldSpace);
    FLinearColor GetTileMapColor();
    FVector GetTileCornerPosition(int32 TileX, int32 TileY, int32 LayerIndex, bool bWorldSpace);
    FVector GetTileCenterPosition(int32 TileX, int32 TileY, int32 LayerIndex, bool bWorldSpace);
    FPaperTileInfo GetTile(int32 X, int32 Y, int32 Layer);
    void GetMapSize(int32& MapWidth, int32& MapHeight, int32& NumLayers);
    FLinearColor GetLayerColor(int32 Layer);
    void CreateNewTileMap(int32 MapWidth, int32 MapHeight, int32 TileWidth, int32 TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer);
    class UPaperTileLayer* AddNewLayer();
}; // Size: 0x570

class UPaperTileSet : public UObject
{
    FIntPoint TileSize;                                                               // 0x0028 (size: 0x8)
    class UTexture2D* TileSheet;                                                      // 0x0030 (size: 0x8)
    TArray<class UTexture*> AdditionalSourceTextures;                                 // 0x0038 (size: 0x10)
    FIntMargin BorderMargin;                                                          // 0x0048 (size: 0x10)
    FIntPoint PerTileSpacing;                                                         // 0x0058 (size: 0x8)
    FIntPoint DrawingOffset;                                                          // 0x0060 (size: 0x8)
    int32 WidthInTiles;                                                               // 0x0068 (size: 0x4)
    int32 HeightInTiles;                                                              // 0x006C (size: 0x4)
    int32 AllocatedWidth;                                                             // 0x0070 (size: 0x4)
    int32 AllocatedHeight;                                                            // 0x0074 (size: 0x4)
    TArray<FPaperTileMetadata> PerTileData;                                           // 0x0078 (size: 0x10)
    TArray<FPaperTileSetTerrain> Terrains;                                            // 0x0088 (size: 0x10)
    int32 TileWidth;                                                                  // 0x0098 (size: 0x4)
    int32 TileHeight;                                                                 // 0x009C (size: 0x4)
    int32 Margin;                                                                     // 0x00A0 (size: 0x4)
    int32 spacing;                                                                    // 0x00A4 (size: 0x4)

}; // Size: 0xA8

class UTileMapBlueprintLibrary : public UBlueprintFunctionLibrary
{

    FPaperTileInfo MakeTile(int32 TileIndex, class UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD);
    FName GetTileUserData(FPaperTileInfo Tile);
    FTransform GetTileTransform(FPaperTileInfo Tile);
    void BreakTile(FPaperTileInfo Tile, int32& TileIndex, class UPaperTileSet*& TileSet, bool& bFlipH, bool& bFlipV, bool& bFlipD);
}; // Size: 0x28

#endif
