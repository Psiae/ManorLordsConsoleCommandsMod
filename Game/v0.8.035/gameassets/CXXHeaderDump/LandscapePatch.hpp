#ifndef UE4SS_SDK_LandscapePatch_HPP
#define UE4SS_SDK_LandscapePatch_HPP

#include "LandscapePatch_enums.hpp"

struct FLandscapeHeightPatchConvertToNativeParams
{
    float ZeroInEncoding;                                                             // 0x0000 (size: 0x4)
    float HeightScale;                                                                // 0x0004 (size: 0x4)
    float HeightOffset;                                                               // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FLandscapePatchComponentInstanceData : public FSceneComponentInstanceData
{
}; // Size: 0xB8

struct FLandscapeTexturePatchEncodingSettings
{
    double ZeroInEncoding;                                                            // 0x0000 (size: 0x8)
    double WorldSpaceEncodingScale;                                                   // 0x0008 (size: 0x8)

}; // Size: 0x10

class ALandscapePatchManager : public ALandscapeBlueprintBrushBase
{
    TArray<TSoftObjectPtr<ULandscapePatchComponent>> PatchComponents;                 // 0x02C0 (size: 0x10)
    FTransform HeightmapCoordsToWorld;                                                // 0x02D0 (size: 0x60)
    TMap<TSoftObjectPtr<ULandscapePatchComponent>, int32> PatchToIndex;               // 0x0330 (size: 0x50)

    void SetTargetLandscape(class ALandscape* InOwningLandscape);
    bool RemovePatch(class ULandscapePatchComponent* Patch);
    void MovePatchToIndex(class ULandscapePatchComponent* Patch, int32 Index);
    int32 GetIndexOfPatch(const class ULandscapePatchComponent* Patch);
    bool ContainsPatch(class ULandscapePatchComponent* Patch);
    void AddPatch(class ULandscapePatchComponent* Patch);
}; // Size: 0x380

class ULandscapeCircleHeightPatch : public ULandscapePatchComponent
{
    float Radius;                                                                     // 0x02B0 (size: 0x4)
    float Falloff;                                                                    // 0x02B4 (size: 0x4)
    bool bEditVisibility;                                                             // 0x02B8 (size: 0x1)
    bool bExclusiveRadius;                                                            // 0x02B9 (size: 0x1)

}; // Size: 0x2C0

class ULandscapeHeightTextureBackedRenderTarget : public ULandscapeTextureBackedRenderTargetBase
{
    FLandscapeHeightPatchConvertToNativeParams ConversionParams;                      // 0x0048 (size: 0xC)
    TEnumAsByte<ETextureRenderTargetFormat> RenderTargetFormat;                       // 0x0054 (size: 0x1)

}; // Size: 0x58

class ULandscapePatchComponent : public USceneComponent
{
    FGuid EditLayerGuid;                                                              // 0x0238 (size: 0x10)
    ELandscapePatchPriorityInitialization PriorityInitialization;                     // 0x0248 (size: 0x1)
    double Priority;                                                                  // 0x0250 (size: 0x8)
    TSoftObjectPtr<ALandscape> Landscape;                                             // 0x0258 (size: 0x28)
    TSoftObjectPtr<ALandscapePatchManager> PatchManager;                              // 0x0280 (size: 0x28)
    bool bIsEnabled;                                                                  // 0x02A8 (size: 0x1)

    void SetPriority(double PriorityIn);
    void SetPatchManager(class ALandscapePatchManager* NewPatchManager);
    void SetLandscape(class ALandscape* NewLandscape);
    void SetIsEnabled(bool bEnabledIn);
    void RequestLandscapeUpdate(bool bInUserTriggeredUpdate);
    bool IsEnabled();
    double GetPriority();
    class ALandscapePatchManager* GetPatchManager();
    TArray<FString> GetLayerOptions();
    FTransform GetLandscapeHeightmapCoordsToWorld();
}; // Size: 0x2B0

class ULandscapePatchEditLayer : public ULandscapeEditLayerProcedural
{
}; // Size: 0x38

class ULandscapeTextureBackedRenderTargetBase : public UObject
{
    class UTexture2D* InternalTexture;                                                // 0x0028 (size: 0x8)
    class UTextureRenderTarget2D* RenderTarget;                                       // 0x0030 (size: 0x8)
    int32 SizeX;                                                                      // 0x0038 (size: 0x4)
    int32 SizeY;                                                                      // 0x003C (size: 0x4)
    bool bUseInternalTextureOnly;                                                     // 0x0040 (size: 0x1)

}; // Size: 0x48

class ULandscapeTexturePatch : public ULandscapePatchComponent
{
    int32 ResolutionX;                                                                // 0x02B0 (size: 0x4)
    int32 ResolutionY;                                                                // 0x02B4 (size: 0x4)
    FVector2D UnscaledPatchCoverage;                                                  // 0x02B8 (size: 0x10)
    ELandscapeTexturePatchBlendMode BlendMode;                                        // 0x02C8 (size: 0x1)
    ELandscapeTexturePatchFalloffMode FalloffMode;                                    // 0x02C9 (size: 0x1)
    float Falloff;                                                                    // 0x02CC (size: 0x4)
    ELandscapeTexturePatchSourceMode HeightSourceMode;                                // 0x02D0 (size: 0x1)
    ELandscapeTexturePatchSourceMode DetailPanelHeightSourceMode;                     // 0x02D1 (size: 0x1)
    class ULandscapeHeightTextureBackedRenderTarget* HeightInternalData;              // 0x02D8 (size: 0x8)
    class UTexture* HeightTextureAsset;                                               // 0x02E0 (size: 0x8)
    bool bUseTextureAlphaForHeight;                                                   // 0x02E8 (size: 0x1)
    ELandscapeTextureHeightPatchEncoding HeightEncoding;                              // 0x02E9 (size: 0x1)
    FLandscapeTexturePatchEncodingSettings HeightEncodingSettings;                    // 0x02F0 (size: 0x10)
    ELandscapeTextureHeightPatchZeroHeightMeaning ZeroHeightMeaning;                  // 0x0300 (size: 0x1)
    bool bApplyComponentZScale;                                                       // 0x0301 (size: 0x1)
    TArray<class ULandscapeWeightPatchTextureInfo*> WeightPatches;                    // 0x0308 (size: 0x10)
    bool bBaseResolutionOffLandscape;                                                 // 0x0319 (size: 0x1)
    float ResolutionMultiplier;                                                       // 0x031C (size: 0x4)
    int32 InitTextureSizeX;                                                           // 0x0320 (size: 0x4)
    int32 InitTextureSizeY;                                                           // 0x0324 (size: 0x4)
    TEnumAsByte<ETextureRenderTargetFormat> HeightRenderTargetFormat;                 // 0x0328 (size: 0x1)

    void SnapToLandscape();
    void SetZeroHeightMeaning(ELandscapeTextureHeightPatchZeroHeightMeaning ZeroHeightMeaningIn);
    void SetWeightPatchTextureAsset(const FName& InWeightmapLayerName, class UTexture* TextureIn);
    void SetWeightPatchSourceMode(const FName& InWeightmapLayerName, ELandscapeTexturePatchSourceMode NewMode);
    void SetWeightPatchBlendModeOverride(const FName& InWeightmapLayerName, ELandscapeTexturePatchBlendMode BlendMode);
    void SetUseAlphaChannelForWeightPatch(const FName& InWeightmapLayerName, bool bUseAlphaChannel);
    void SetUseAlphaChannelForHeight(bool bUse);
    void SetUnscaledCoverage(FVector2D Coverage);
    void SetResolution(FVector2D ResolutionIn);
    void SetHeightTextureAsset(class UTexture* TextureIn);
    void SetHeightSourceMode(ELandscapeTexturePatchSourceMode NewMode);
    void SetHeightRenderTargetFormat(TEnumAsByte<ETextureRenderTargetFormat> Format);
    void SetHeightEncodingSettings(const FLandscapeTexturePatchEncodingSettings& Settings);
    void SetHeightEncodingMode(ELandscapeTextureHeightPatchEncoding EncodingMode);
    void SetFalloffMode(ELandscapeTexturePatchFalloffMode FalloffModeIn);
    void SetFalloff(float FalloffIn);
    void SetEditVisibilityLayer(const FName& InWeightmapLayerName, const bool bEditVisibilityLayer);
    void SetBlendMode(ELandscapeTexturePatchBlendMode BlendModeIn);
    void ResetHeightEncodingMode(ELandscapeTextureHeightPatchEncoding EncodingMode);
    void RequestReinitializeWeights();
    void RequestReinitializeHeight();
    void RemoveWeightPatch(const FName& InWeightmapLayerName);
    void RemoveAllWeightPatches();
    ELandscapeTexturePatchSourceMode GetWeightPatchSourceMode(const FName& InWeightmapLayerName);
    class UTextureRenderTarget2D* GetWeightPatchRenderTarget(const FName& InWeightmapLayerName, bool bMarkDirty);
    FVector2D GetUnscaledCoverage();
    FVector2D GetResolution();
    FTransform GetPatchToWorldTransform();
    bool GetInitResolutionFromLandscape(float ResolutionMultiplier, FVector2D& ResolutionOut);
    ELandscapeTexturePatchSourceMode GetHeightSourceMode();
    class UTextureRenderTarget2D* GetHeightRenderTarget(bool bMarkDirty);
    FVector2D GetFullUnscaledWorldSize();
    TArray<FName> GetAllWeightPatchLayerNames();
    void DisableAllWeightPatches();
    void ClearWeightPatchBlendModeOverride(const FName& InWeightmapLayerName);
    void AddWeightPatch(const FName& InWeightmapLayerName, ELandscapeTexturePatchSourceMode SourceMode, bool bUseAlphaChannel);
}; // Size: 0x330

class ULandscapeWeightPatchTextureInfo : public UObject
{
    FName WeightmapLayerName;                                                         // 0x0028 (size: 0x8)
    bool bEditVisibilityLayer;                                                        // 0x0030 (size: 0x1)
    class UTexture* TextureAsset;                                                     // 0x0038 (size: 0x8)
    class ULandscapeWeightTextureBackedRenderTarget* InternalData;                    // 0x0040 (size: 0x8)
    ELandscapeTexturePatchSourceMode SourceMode;                                      // 0x0048 (size: 0x1)
    ELandscapeTexturePatchSourceMode DetailPanelSourceMode;                           // 0x0049 (size: 0x1)
    bool bUseAlphaChannel;                                                            // 0x004A (size: 0x1)
    bool bOverrideBlendMode;                                                          // 0x004B (size: 0x1)
    ELandscapeTexturePatchBlendMode OverrideBlendMode;                                // 0x004C (size: 0x1)

}; // Size: 0x50

class ULandscapeWeightTextureBackedRenderTarget : public ULandscapeTextureBackedRenderTargetBase
{
    bool bUseAlphaChannel;                                                            // 0x0048 (size: 0x1)

}; // Size: 0x50

#endif
