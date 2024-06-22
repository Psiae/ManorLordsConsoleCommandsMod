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
    FTransform LocalTransform;                                                        // 0x0000 (size: 0x30)
    FName SocketName;                                                                 // 0x0030 (size: 0x8)

}; // Size: 0x40

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
    FVector Destination;                                                              // 0x0000 (size: 0xC)
    class UTexture* BaseTexture;                                                      // 0x0010 (size: 0x8)
    FColor Color;                                                                     // 0x0048 (size: 0x4)

}; // Size: 0xD0

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
    FVector2D BoxSize;                                                                // 0x0018 (size: 0x8)
    FVector2D BoxPosition;                                                            // 0x0020 (size: 0x8)
    float Rotation;                                                                   // 0x0028 (size: 0x4)
    bool bNegativeWinding;                                                            // 0x002C (size: 0x1)

}; // Size: 0x30

struct FSpriteInstanceData
{
    FMatrix Transform;                                                                // 0x0000 (size: 0x40)
    class UPaperSprite* SourceSprite;                                                 // 0x0040 (size: 0x8)
    FColor VertexColor;                                                               // 0x0048 (size: 0x4)
    int32 MaterialIndex;                                                              // 0x004C (size: 0x4)

}; // Size: 0x50

class APaperCharacter : public ACharacter
{
    class UPaperFlipbookComponent* Sprite;                                            // 0x04B8 (size: 0x8)

}; // Size: 0x4C0

class APaperFlipbookActor : public AActor
{
    class UPaperFlipbookComponent* RenderComponent;                                   // 0x0220 (size: 0x8)

}; // Size: 0x228

class APaperGroupedSpriteActor : public AActor
{
    class UPaperGroupedSpriteComponent* RenderComponent;                              // 0x0220 (size: 0x8)

}; // Size: 0x228

class APaperSpriteActor : public AActor
{
    class UPaperSpriteComponent* RenderComponent;                                     // 0x0220 (size: 0x8)

}; // Size: 0x228

class APaperTerrainActor : public AActor
{
    class USceneComponent* DummyRoot;                                                 // 0x0220 (size: 0x8)
    class UPaperTerrainSplineComponent* SplineComponent;                              // 0x0228 (size: 0x8)
    class UPaperTerrainComponent* RenderComponent;                                    // 0x0230 (size: 0x8)

}; // Size: 0x238

class APaperTileMapActor : public AActor
{
    class UPaperTileMapComponent* RenderComponent;                                    // 0x0220 (size: 0x8)

}; // Size: 0x228

class UMaterialExpressionSpriteTextureSampler : public UMaterialExpressionTextureSampleParameter2D
{
    bool bSampleAdditionalTextures;                                                   // 0x0080 (size: 0x1)
    int32 AdditionalSlotIndex;                                                        // 0x0084 (size: 0x4)
    FText SlotDisplayName;                                                            // 0x0088 (size: 0x18)

}; // Size: 0xA0

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
    class UPaperFlipbook* SourceFlipbook;                                             // 0x0478 (size: 0x8)
    class UMaterialInterface* Material;                                               // 0x0480 (size: 0x8)
    float PlayRate;                                                                   // 0x0488 (size: 0x4)
    uint8 bLooping;                                                                   // 0x048C (size: 0x1)
    uint8 bReversePlayback;                                                           // 0x048C (size: 0x1)
    uint8 bPlaying;                                                                   // 0x048C (size: 0x1)
    float AccumulatedTime;                                                            // 0x0490 (size: 0x4)
    int32 CachedFrameIndex;                                                           // 0x0494 (size: 0x4)
    FLinearColor SpriteColor;                                                         // 0x0498 (size: 0x10)
    class UBodySetup* CachedBodySetup;                                                // 0x04A8 (size: 0x8)
    FPaperFlipbookComponentOnFinishedPlaying OnFinishedPlaying;                       // 0x04B0 (size: 0x10)
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
}; // Size: 0x4C0

class UPaperGroupedSpriteComponent : public UMeshComponent
{
    TArray<class UMaterialInterface*> InstanceMaterials;                              // 0x0478 (size: 0x10)
    TArray<FSpriteInstanceData> PerInstanceSpriteData;                                // 0x0488 (size: 0x10)

    bool UpdateInstanceTransform(int32 InstanceIndex, const FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
    bool UpdateInstanceColor(int32 InstanceIndex, FLinearColor NewInstanceColor, bool bMarkRenderStateDirty);
    void SortInstancesAlongAxis(FVector WorldSpaceSortAxis);
    bool RemoveInstance(int32 InstanceIndex);
    bool GetInstanceTransform(int32 InstanceIndex, FTransform& OutInstanceTransform, bool bWorldSpace);
    int32 GetInstanceCount();
    void ClearInstances();
    int32 AddInstance(const FTransform& Transform, class UPaperSprite* Sprite, bool bWorldSpace, FLinearColor Color);
}; // Size: 0x4B0

class UPaperRuntimeSettings : public UObject
{
    bool bEnableSpriteAtlasGroups;                                                    // 0x0028 (size: 0x1)
    bool bEnableTerrainSplineEditing;                                                 // 0x0029 (size: 0x1)
    bool bResizeSpriteDataToMatchTextures;                                            // 0x002A (size: 0x1)

}; // Size: 0x30

class UPaperSprite : public UObject
{
    TArray<class UTexture*> AdditionalSourceTextures;                                 // 0x0038 (size: 0x10)
    FVector2D BakedSourceUV;                                                          // 0x0048 (size: 0x8)
    FVector2D BakedSourceDimension;                                                   // 0x0050 (size: 0x8)
    class UTexture2D* BakedSourceTexture;                                             // 0x0058 (size: 0x8)
    class UMaterialInterface* DefaultMaterial;                                        // 0x0060 (size: 0x8)
    class UMaterialInterface* AlternateMaterial;                                      // 0x0068 (size: 0x8)
    TArray<FPaperSpriteSocket> Sockets;                                               // 0x0070 (size: 0x10)
    TEnumAsByte<ESpriteCollisionMode::Type> SpriteCollisionDomain;                    // 0x0080 (size: 0x1)
    float PixelsPerUnrealUnit;                                                        // 0x0084 (size: 0x4)
    class UBodySetup* BodySetup;                                                      // 0x0088 (size: 0x8)
    int32 AlternateMaterialSplitIndex;                                                // 0x0090 (size: 0x4)
    TArray<FVector4> BakedRenderData;                                                 // 0x0098 (size: 0x10)

}; // Size: 0xA8

class UPaperSpriteAtlas : public UObject
{
}; // Size: 0x28

class UPaperSpriteBlueprintLibrary : public UBlueprintFunctionLibrary
{

    FSlateBrush MakeBrushFromSprite(class UPaperSprite* Sprite, int32 Width, int32 Height);
}; // Size: 0x28

class UPaperSpriteComponent : public UMeshComponent
{
    class UPaperSprite* SourceSprite;                                                 // 0x0478 (size: 0x8)
    class UMaterialInterface* MaterialOverride;                                       // 0x0480 (size: 0x8)
    FLinearColor SpriteColor;                                                         // 0x0488 (size: 0x10)

    void SetSpriteColor(FLinearColor NewColor);
    bool SetSprite(class UPaperSprite* NewSprite);
    class UPaperSprite* GetSprite();
}; // Size: 0x4A0

class UPaperTerrainComponent : public UPrimitiveComponent
{
    class UPaperTerrainMaterial* TerrainMaterial;                                     // 0x0450 (size: 0x8)
    bool bClosedSpline;                                                               // 0x0458 (size: 0x1)
    bool bFilledSpline;                                                               // 0x0459 (size: 0x1)
    class UPaperTerrainSplineComponent* AssociatedSpline;                             // 0x0460 (size: 0x8)
    int32 RandomSeed;                                                                 // 0x0468 (size: 0x4)
    float SegmentOverlapAmount;                                                       // 0x046C (size: 0x4)
    FLinearColor TerrainColor;                                                        // 0x0470 (size: 0x10)
    int32 ReparamStepsPerSegment;                                                     // 0x0480 (size: 0x4)
    TEnumAsByte<ESpriteCollisionMode::Type> SpriteCollisionDomain;                    // 0x0484 (size: 0x1)
    float CollisionThickness;                                                         // 0x0488 (size: 0x4)
    class UBodySetup* CachedBodySetup;                                                // 0x0490 (size: 0x8)

    void SetTerrainColor(FLinearColor NewColor);
}; // Size: 0x4B0

class UPaperTerrainMaterial : public UDataAsset
{
    TArray<FPaperTerrainMaterialRule> Rules;                                          // 0x0030 (size: 0x10)
    class UPaperSprite* InteriorFill;                                                 // 0x0040 (size: 0x8)

}; // Size: 0x48

class UPaperTerrainSplineComponent : public USplineComponent
{
}; // Size: 0x560

class UPaperTileLayer : public UObject
{
    FText LayerName;                                                                  // 0x0028 (size: 0x18)
    int32 LayerWidth;                                                                 // 0x0040 (size: 0x4)
    int32 LayerHeight;                                                                // 0x0044 (size: 0x4)
    uint8 bHiddenInGame;                                                              // 0x0048 (size: 0x1)
    uint8 bLayerCollides;                                                             // 0x0048 (size: 0x1)
    uint8 bOverrideCollisionThickness;                                                // 0x0048 (size: 0x1)
    uint8 bOverrideCollisionOffset;                                                   // 0x0048 (size: 0x1)
    float CollisionThicknessOverride;                                                 // 0x004C (size: 0x4)
    float CollisionOffsetOverride;                                                    // 0x0050 (size: 0x4)
    FLinearColor LayerColor;                                                          // 0x0054 (size: 0x10)
    int32 AllocatedWidth;                                                             // 0x0064 (size: 0x4)
    int32 AllocatedHeight;                                                            // 0x0068 (size: 0x4)
    TArray<FPaperTileInfo> AllocatedCells;                                            // 0x0070 (size: 0x10)
    class UPaperTileSet* TileSet;                                                     // 0x0080 (size: 0x8)
    TArray<int32> AllocatedGrid;                                                      // 0x0088 (size: 0x10)

}; // Size: 0x98

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
    int32 MapWidth;                                                                   // 0x0478 (size: 0x4)
    int32 MapHeight;                                                                  // 0x047C (size: 0x4)
    int32 TileWidth;                                                                  // 0x0480 (size: 0x4)
    int32 TileHeight;                                                                 // 0x0484 (size: 0x4)
    class UPaperTileSet* DefaultLayerTileSet;                                         // 0x0488 (size: 0x8)
    class UMaterialInterface* Material;                                               // 0x0490 (size: 0x8)
    TArray<class UPaperTileLayer*> TileLayers;                                        // 0x0498 (size: 0x10)
    FLinearColor TileMapColor;                                                        // 0x04A8 (size: 0x10)
    int32 UseSingleLayerIndex;                                                        // 0x04B8 (size: 0x4)
    bool bUseSingleLayer;                                                             // 0x04BC (size: 0x1)
    class UPaperTileMap* TileMap;                                                     // 0x04C0 (size: 0x8)

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
}; // Size: 0x4D0

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
    int32 Spacing;                                                                    // 0x00A4 (size: 0x4)

}; // Size: 0xA8

class UTileMapBlueprintLibrary : public UBlueprintFunctionLibrary
{

    FPaperTileInfo MakeTile(int32 TileIndex, class UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD);
    FName GetTileUserData(FPaperTileInfo Tile);
    FTransform GetTileTransform(FPaperTileInfo Tile);
    void BreakTile(FPaperTileInfo Tile, int32& TileIndex, class UPaperTileSet*& TileSet, bool& bFlipH, bool& bFlipV, bool& bFlipD);
}; // Size: 0x28

#endif
