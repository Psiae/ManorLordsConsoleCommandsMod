#ifndef UE4SS_SDK_MediaPlate_HPP
#define UE4SS_SDK_MediaPlate_HPP

#include "MediaPlate_enums.hpp"

struct FMediaPlateResource
{
    EMediaPlateResourceType Type;                                                     // 0x0000 (size: 0x1)
    FString ExternalMediaPath;                                                        // 0x0008 (size: 0x10)
    class UMediaSource* ExternalMedia;                                                // 0x0018 (size: 0x8)
    TSoftObjectPtr<UMediaSource> MediaAsset;                                          // 0x0020 (size: 0x28)
    TSoftObjectPtr<UMediaPlaylist> SourcePlaylist;                                    // 0x0048 (size: 0x28)
    class UMediaPlaylist* ActivePlaylist;                                             // 0x0070 (size: 0x8)

}; // Size: 0x78

struct FMediaTextureResourceSettings
{
    bool bEnableGenMips;                                                              // 0x0000 (size: 0x1)
    uint8 CurrentNumMips;                                                             // 0x0001 (size: 0x1)

}; // Size: 0x2

class AMediaPlate : public AActor
{
    class UMediaPlateComponent* MediaPlateComponent;                                  // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* StaticMeshComponent;                                  // 0x02B0 (size: 0x8)

}; // Size: 0x2B8

class UMediaPlateAssetUserData : public UAssetUserData
{
}; // Size: 0x38

class UMediaPlateComponent : public UActorComponent
{
    bool bPlayOnOpen;                                                                 // 0x00A8 (size: 0x1)
    bool bAutoPlay;                                                                   // 0x00A9 (size: 0x1)
    bool bEnableAudio;                                                                // 0x00AA (size: 0x1)
    float StartTime;                                                                  // 0x00AC (size: 0x4)
    class UMediaSoundComponent* SoundComponent;                                       // 0x00B0 (size: 0x8)
    class UStaticMeshComponent* StaticMeshComponent;                                  // 0x00B8 (size: 0x8)
    TArray<class UStaticMeshComponent*> Letterboxes;                                  // 0x00C0 (size: 0x10)
    FMediaPlateResource MediaPlateResource;                                           // 0x00D0 (size: 0x78)
    int32 PlaylistIndex;                                                              // 0x0148 (size: 0x4)
    FMediaSourceCacheSettings CacheSettings;                                          // 0x014C (size: 0x8)
    bool bIsMediaPlatePlaying;                                                        // 0x0154 (size: 0x1)
    bool bPlayOnlyWhenVisible;                                                        // 0x0168 (size: 0x1)
    bool bLoop;                                                                       // 0x0169 (size: 0x1)
    EMediaTextureVisibleMipsTiles VisibleMipsTilesCalculations;                       // 0x016A (size: 0x1)
    float MipMapBias;                                                                 // 0x016C (size: 0x4)
    bool bIsAspectRatioAuto;                                                          // 0x0170 (size: 0x1)
    bool bEnableMipMapUpscaling;                                                      // 0x0171 (size: 0x1)
    int32 MipLevelToUpscale;                                                          // 0x0174 (size: 0x4)
    bool bAdaptivePoleMipUpscaling;                                                   // 0x0178 (size: 0x1)
    float LetterboxAspectRatio;                                                       // 0x017C (size: 0x4)
    FVector2D MeshRange;                                                              // 0x0188 (size: 0x10)
    TArray<class UMediaTexture*> MediaTextures;                                       // 0x0198 (size: 0x10)
    FMediaTextureResourceSettings MediaTextureSettings;                               // 0x01A8 (size: 0x2)
    class UMediaPlayer* MediaPlayer;                                                  // 0x01B0 (size: 0x8)

    void SetPlayOnlyWhenVisible(bool bInPlayOnlyWhenVisible);
    void SetMeshRange(FVector2D InMeshRange);
    void SetLoop(bool bInLoop);
    void SetLetterboxAspectRatio(float AspectRatio);
    void SetIsAspectRatioAuto(bool bInIsAspectRatioAuto);
    bool Seek(const FTimespan& Time);
    bool Rewind();
    void Play();
    void Pause();
    void Open();
    void OnMediaSuspended();
    void OnMediaResumed();
    void OnMediaOpened(FString DeviceUrl);
    void OnMediaEnd();
    bool IsMediaPlatePlaying();
    FVector2D GetMeshRange();
    class UMediaTexture* GetMediaTexture(int32 Index);
    class UMediaPlayer* GetMediaPlayer();
    bool GetLoop();
    float GetLetterboxAspectRatio();
    bool GetIsAspectRatioAuto();
    void Close();
}; // Size: 0x1F8

#endif
