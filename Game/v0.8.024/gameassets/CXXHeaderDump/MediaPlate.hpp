#ifndef UE4SS_SDK_MediaPlate_HPP
#define UE4SS_SDK_MediaPlate_HPP

#include "MediaPlate_enums.hpp"

struct FMediaTextureResourceSettings
{
    bool bEnableGenMips;                                                              // 0x0000 (size: 0x1)
    uint8 CurrentNumMips;                                                             // 0x0001 (size: 0x1)

}; // Size: 0x2

class AMediaPlate : public AActor
{
    class UMediaPlateComponent* MediaPlateComponent;                                  // 0x0290 (size: 0x8)
    class UStaticMeshComponent* StaticMeshComponent;                                  // 0x0298 (size: 0x8)

}; // Size: 0x2A0

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
    class UMediaPlaylist* MediaPlaylist;                                              // 0x00D0 (size: 0x8)
    int32 PlaylistIndex;                                                              // 0x00D8 (size: 0x4)
    FMediaSourceCacheSettings CacheSettings;                                          // 0x00DC (size: 0x8)
    bool bIsMediaPlatePlaying;                                                        // 0x00E4 (size: 0x1)
    bool bPlayOnlyWhenVisible;                                                        // 0x00F8 (size: 0x1)
    bool bLoop;                                                                       // 0x00F9 (size: 0x1)
    EMediaTextureVisibleMipsTiles VisibleMipsTilesCalculations;                       // 0x00FA (size: 0x1)
    float MipMapBias;                                                                 // 0x00FC (size: 0x4)
    bool bIsAspectRatioAuto;                                                          // 0x0100 (size: 0x1)
    bool bEnableMipMapUpscaling;                                                      // 0x0101 (size: 0x1)
    int32 MipLevelToUpscale;                                                          // 0x0104 (size: 0x4)
    bool bAdaptivePoleMipUpscaling;                                                   // 0x0108 (size: 0x1)
    float LetterboxAspectRatio;                                                       // 0x010C (size: 0x4)
    FVector2D MeshRange;                                                              // 0x0118 (size: 0x10)
    TArray<class UMediaTexture*> MediaTextures;                                       // 0x0128 (size: 0x10)
    FMediaTextureResourceSettings MediaTextureSettings;                               // 0x0138 (size: 0x2)
    class UMediaPlayer* MediaPlayer;                                                  // 0x0140 (size: 0x8)

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
}; // Size: 0x188

#endif
