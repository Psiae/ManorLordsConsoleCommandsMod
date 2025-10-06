#ifndef UE4SS_SDK_USDClasses_HPP
#define UE4SS_SDK_USDClasses_HPP

#include "USDClasses_enums.hpp"

struct FUsdCombinedPrimMetadata
{
    TMap<class FString, class FUsdPrimMetadata> PrimPathToMetadata;                   // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FUsdMetadataImportOptions
{
    bool bCollectMetadata;                                                            // 0x0000 (size: 0x1)
    bool bCollectFromEntireSubtrees;                                                  // 0x0001 (size: 0x1)
    bool bCollectOnComponents;                                                        // 0x0002 (size: 0x1)
    TArray<FString> BlockedPrefixFilters;                                             // 0x0008 (size: 0x10)
    bool bInvertFilters;                                                              // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FUsdMetadataValue
{
    FString TypeName;                                                                 // 0x0000 (size: 0x10)
    FString StringifiedValue;                                                         // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FUsdPrimMetadata
{
    TMap<class FString, class FUsdMetadataValue> MetaData;                            // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FUsdPrimPathList
{
    TArray<FString> PrimPaths;                                                        // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FUsdStageOptions
{
    float MetersPerUnit;                                                              // 0x0000 (size: 0x4)
    EUsdUpAxis UpAxis;                                                                // 0x0004 (size: 0x1)

}; // Size: 0x8

struct FUsdUnrealAssetInfo
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FString Identifier;                                                               // 0x0010 (size: 0x10)
    FString Version;                                                                  // 0x0020 (size: 0x10)
    FString UnrealContentPath;                                                        // 0x0030 (size: 0x10)
    FString UnrealAssetType;                                                          // 0x0040 (size: 0x10)
    FString UnrealExportTime;                                                         // 0x0050 (size: 0x10)
    FString UnrealEngineVersion;                                                      // 0x0060 (size: 0x10)

}; // Size: 0x70

class UUsdAnimSequenceAssetImportData : public UUsdAssetImportData
{
    float LayerStartOffsetSeconds;                                                    // 0x0040 (size: 0x4)

}; // Size: 0x48

class UUsdAnimSequenceAssetUserData : public UUsdAssetUserData
{
    float LayerStartOffsetSeconds;                                                    // 0x0098 (size: 0x4)

}; // Size: 0xA0

class UUsdAssetCache : public UObject
{
    TMap<class FString, class UObject*> TransientStorage;                             // 0x0028 (size: 0x50)
    TMap<class FString, class UObject*> PersistentStorage;                            // 0x0078 (size: 0x50)
    bool bAllowPersistentStorage;                                                     // 0x00C8 (size: 0x1)
    TSet<TWeakObjectPtr<UObject>> OwnedAssets;                                        // 0x00D0 (size: 0x50)
    TMap<class FString, class TWeakObjectPtr<UObject>> PrimPathToAssets;              // 0x0120 (size: 0x50)

}; // Size: 0x1E8

class UUsdAssetCache2 : public UObject
{
    double UnreferencedAssetStorageSizeMB;                                            // 0x0028 (size: 0x8)
    double PersistentAssetStorageSizeMB;                                              // 0x0030 (size: 0x8)
    TMap<class FString, class UObject*> AssetStorage;                                 // 0x0038 (size: 0x50)

    bool TouchAsset(const class UObject* Asset, const class UObject* Referencer);
    void Reset();
    bool RemoveAssetReference(const class UObject* Asset, const class UObject* Referencer);
    class UObject* RemoveAsset(FString Hash);
    bool RemoveAllAssetReferences(const class UObject* Referencer);
    void RefreshStorage();
    bool IsAssetOwnedByCache(FString AssetPath);
    int32 GetNumAssets();
    FString GetHashForAsset(const class UObject* Asset);
    class UObject* GetCachedAsset(FString Hash);
    TArray<class UObject*> GetAllLoadedAssets();
    TArray<FString> GetAllCachedAssetPaths();
    TArray<FString> GetAllAssetHashes();
    bool CanRemoveAsset(FString Hash);
    void CacheAsset(FString Hash, class UObject* Asset, const class UObject* Referencer);
    bool AddAssetReference(const class UObject* Asset, const class UObject* Referencer);
}; // Size: 0x1A0

class UUsdAssetCache3 : public UObject
{
    FDirectoryPath AssetDirectory;                                                    // 0x0028 (size: 0x10)
    bool bOnlyHandleAssetsWithinAssetDirectory;                                       // 0x0038 (size: 0x1)
    TMap<class FString, class FSoftObjectPath> HashToAssetPaths;                      // 0x0040 (size: 0x50)
    bool bCleanUpUnreferencedAssets;                                                  // 0x0090 (size: 0x1)
    TMap<class FSoftObjectPath, class FString> AssetPathToHashes;                     // 0x0098 (size: 0x50)
    TMap<class FString, class UObject*> TransientObjectStorage;                       // 0x00E8 (size: 0x50)

    FSoftObjectPath StopTrackingAsset(FString Hash);
    void SetAssetDeletable(const class UObject* Asset, bool bIsDeletable);
    void RescanAssetDirectory();
    bool RemoveAssetReferencer(const class UObject* Asset, const class UObject* Referencer);
    bool RemoveAllReferencersForAsset(const class UObject* Asset);
    bool RemoveAllReferencerAssets(const class UObject* Referencer);
    bool RemoveAllAssetReferencers();
    TMap<class FString, class UObject*> LoadAndGetAllTrackedAssets();
    bool IsAssetTrackedByCache(const FSoftObjectPath& AssetPath);
    bool IsAssetDeletable(const class UObject* Asset);
    class UObject* GetOrCreateCachedAsset(FString Hash, UClass* Class, FString DesiredName, int32 DesiredFlags, bool& bOutCreatedAsset, const class UObject* Referencer);
    int32 GetNumAssets();
    FString GetHashForAsset(const FSoftObjectPath& AssetPath);
    FSoftObjectPath GetCachedAssetPath(FString Hash);
    class UObject* GetCachedAsset(FString Hash);
    TMap<class FString, class FSoftObjectPath> GetAllTrackedAssets();
    void DeleteUnreferencedAssetsWithConfirmation();
    void DeleteUnreferencedAssets(const bool bShowConfirmation);
    void CacheAsset(FString Hash, const FSoftObjectPath& AssetPath, const class UObject* Referencer);
    bool AddAssetReferencer(const class UObject* Asset, const class UObject* Referencer);
}; // Size: 0x290

class UUsdAssetImportData : public UAssetImportData
{
    FString PrimPath;                                                                 // 0x0028 (size: 0x10)
    class UObject* ImportOptions;                                                     // 0x0038 (size: 0x8)

}; // Size: 0x40

class UUsdAssetUserData : public UAssetUserData
{
    TArray<FString> PrimPaths;                                                        // 0x0028 (size: 0x10)
    TMap<class FString, class FUsdCombinedPrimMetadata> StageIdentifierToMetadata;    // 0x0038 (size: 0x50)
    FString OriginalHash;                                                             // 0x0088 (size: 0x10)

}; // Size: 0x98

class UUsdDrawModeComponent : public UPrimitiveComponent
{
    FVector BoundsMin;                                                                // 0x04E8 (size: 0x18)
    FVector BoundsMax;                                                                // 0x0500 (size: 0x18)
    EUsdDrawMode DrawMode;                                                            // 0x0518 (size: 0x4)
    FLinearColor BoundsColor;                                                         // 0x051C (size: 0x10)
    EUsdModelCardGeometry CardGeometry;                                               // 0x052C (size: 0x4)
    class UTexture2D* CardTextureXPos;                                                // 0x0530 (size: 0x8)
    class UTexture2D* CardTextureYPos;                                                // 0x0538 (size: 0x8)
    class UTexture2D* CardTextureZPos;                                                // 0x0540 (size: 0x8)
    class UTexture2D* CardTextureXNeg;                                                // 0x0548 (size: 0x8)
    class UTexture2D* CardTextureYNeg;                                                // 0x0550 (size: 0x8)
    class UTexture2D* CardTextureZNeg;                                                // 0x0558 (size: 0x8)
    TArray<class UMaterialInstance*> MaterialInstances;                               // 0x0560 (size: 0x10)
    int32 AuthoredFaces;                                                              // 0x0570 (size: 0x4)

    void SetTextureForFace(EUsdModelCardFace Face, class UTexture2D* Texture);
    void SetDrawMode(EUsdDrawMode NewDrawMode);
    void SetCardTextureZPos(class UTexture2D* NewTexture);
    void SetCardTextureZNeg(class UTexture2D* NewTexture);
    void SetCardTextureYPos(class UTexture2D* NewTexture);
    void SetCardTextureYNeg(class UTexture2D* NewTexture);
    void SetCardTextureXPos(class UTexture2D* NewTexture);
    void SetCardTextureXNeg(class UTexture2D* NewTexture);
    void SetCardGeometry(EUsdModelCardGeometry NewGeometry);
    void SetBoundsMin(const FVector& NewMin);
    void SetBoundsMax(const FVector& NewMax);
    void SetBoundsColor(FLinearColor NewColor);
    class UTexture2D* GetTextureForFace(EUsdModelCardFace Face);
}; // Size: 0x580

class UUsdGeometryCacheAssetUserData : public UUsdMeshAssetUserData
{
    float LayerStartOffsetSeconds;                                                    // 0x0138 (size: 0x4)

}; // Size: 0x140

class UUsdLevelSequenceAssetUserData : public UAssetUserData
{
    FGuid LastCheckedSignature;                                                       // 0x0028 (size: 0x10)
    TSet<FGuid> HandledBindingGuids;                                                  // 0x0038 (size: 0x50)

}; // Size: 0x88

class UUsdMaterialAssetUserData : public UUsdAssetUserData
{
    TMap<class FString, class FString> ParameterToPrimvar;                            // 0x0098 (size: 0x50)
    TMap<FString, int32> PrimvarToUVIndex;                                            // 0x00E8 (size: 0x50)

}; // Size: 0x138

class UUsdMeshAssetImportData : public UUsdAssetImportData
{
    TMap<int32, FUsdPrimPathList> MaterialSlotToPrimPaths;                            // 0x0040 (size: 0x50)

}; // Size: 0x90

class UUsdMeshAssetUserData : public UUsdAssetUserData
{
    TMap<int32, FUsdPrimPathList> MaterialSlotToPrimPaths;                            // 0x0098 (size: 0x50)
    TMap<FString, int32> PrimvarToUVIndex;                                            // 0x00E8 (size: 0x50)

}; // Size: 0x138

class UUsdProjectSettings : public UDeveloperSettings
{
    TArray<FDirectoryPath> AdditionalPluginDirectories;                               // 0x0038 (size: 0x10)
    TArray<FDirectoryPath> DefaultResolverSearchPath;                                 // 0x0048 (size: 0x10)
    TArray<FName> AdditionalMaterialPurposes;                                         // 0x0058 (size: 0x10)
    bool bLogUsdSdkErrors;                                                            // 0x0068 (size: 0x1)
    FSoftObjectPath DefaultAssetCache;                                                // 0x0070 (size: 0x20)
    bool bShowCreateDefaultAssetCacheDialog;                                          // 0x0090 (size: 0x1)
    bool bShowConfirmationWhenClearingLayers;                                         // 0x0091 (size: 0x1)
    bool bShowConfirmationWhenMutingDirtyLayers;                                      // 0x0092 (size: 0x1)
    bool bShowConfirmationWhenReloadingDirtyLayers;                                   // 0x0093 (size: 0x1)
    bool bShowOverriddenOpinionsWarning;                                              // 0x0094 (size: 0x1)
    EUsdEditInInstanceBehavior EditInInstanceableBehavior;                            // 0x0095 (size: 0x1)
    bool bShowWarningOnIncompleteDuplication;                                         // 0x0096 (size: 0x1)
    bool bShowTransformOnCameraComponentWarning;                                      // 0x0097 (size: 0x1)
    bool bShowTransformTrackOnCameraComponentWarning;                                 // 0x0098 (size: 0x1)
    bool bShowInheritedVisibilityWarning;                                             // 0x0099 (size: 0x1)
    EUsdSaveDialogBehavior ShowSaveLayersDialogWhenSaving;                            // 0x009A (size: 0x1)
    EUsdSaveDialogBehavior ShowSaveLayersDialogWhenClosing;                           // 0x009B (size: 0x1)
    FSoftObjectPath DefaultSoundAttenuation;                                          // 0x00A0 (size: 0x20)
    FSoftObjectPath ReferenceDefaultSVTMaterial;                                      // 0x00C0 (size: 0x20)
    FSoftObjectPath ReferenceModelCardTextureMaterial;                                // 0x00E0 (size: 0x20)
    FSoftObjectPath ReferencePreviewSurfaceMaterial;                                  // 0x0100 (size: 0x20)
    FSoftObjectPath ReferencePreviewSurfaceTranslucentMaterial;                       // 0x0120 (size: 0x20)
    FSoftObjectPath ReferencePreviewSurfaceTwoSidedMaterial;                          // 0x0140 (size: 0x20)
    FSoftObjectPath ReferencePreviewSurfaceTranslucentTwoSidedMaterial;               // 0x0160 (size: 0x20)
    FSoftObjectPath ReferencePreviewSurfaceVTMaterial;                                // 0x0180 (size: 0x20)
    FSoftObjectPath ReferencePreviewSurfaceTranslucentVTMaterial;                     // 0x01A0 (size: 0x20)
    FSoftObjectPath ReferencePreviewSurfaceTwoSidedVTMaterial;                        // 0x01C0 (size: 0x20)
    FSoftObjectPath ReferencePreviewSurfaceTranslucentTwoSidedVTMaterial;             // 0x01E0 (size: 0x20)
    FSoftObjectPath ReferenceDisplayColorMaterial;                                    // 0x0200 (size: 0x20)
    FSoftObjectPath ReferenceDisplayColorAndOpacityMaterial;                          // 0x0220 (size: 0x20)
    FSoftObjectPath ReferenceDisplayColorTwoSidedMaterial;                            // 0x0240 (size: 0x20)
    FSoftObjectPath ReferenceDisplayColorAndOpacityTwoSidedMaterial;                  // 0x0260 (size: 0x20)

}; // Size: 0x280

class UUsdReferenceOptions : public UObject
{
    bool bInternalReference;                                                          // 0x0028 (size: 0x1)
    FFilePath TargetFile;                                                             // 0x0030 (size: 0x10)
    bool bUseDefaultPrim;                                                             // 0x0040 (size: 0x1)
    FString TargetPrimPath;                                                           // 0x0048 (size: 0x10)
    float TimeCodeOffset;                                                             // 0x0058 (size: 0x4)
    float TimeCodeScale;                                                              // 0x005C (size: 0x4)

}; // Size: 0x60

class UUsdSparseVolumeTextureAssetUserData : public UUsdAssetUserData
{
    TArray<FString> SourceOpenVDBAssetPrimPaths;                                      // 0x0098 (size: 0x10)
    TArray<double> TimeSamplePathTimeCodes;                                           // 0x00A8 (size: 0x10)
    TArray<int32> TimeSamplePathIndices;                                              // 0x00B8 (size: 0x10)
    TArray<FString> TimeSamplePaths;                                                  // 0x00C8 (size: 0x10)

}; // Size: 0xD8

#endif
