#ifndef UE4SS_SDK_Renderer_HPP
#define UE4SS_SDK_Renderer_HPP

#include "Renderer_enums.hpp"

class ASparseVolumeTextureViewer : public AInfo
{
    class USparseVolumeTextureViewerComponent* SparseVolumeTextureViewerComponent;    // 0x0290 (size: 0x8)

}; // Size: 0x298

class USparseVolumeTextureViewerComponent : public UPrimitiveComponent
{
    class USparseVolumeTexture* SparseVolumeTexturePreview;                           // 0x0518 (size: 0x8)
    float Frame;                                                                      // 0x0520 (size: 0x4)
    float FrameRate;                                                                  // 0x0524 (size: 0x4)
    uint8 bPlaying;                                                                   // 0x0528 (size: 0x1)
    uint8 bLooping;                                                                   // 0x0528 (size: 0x1)
    uint8 bReversePlayback;                                                           // 0x0528 (size: 0x1)
    uint8 bBlockingStreamingRequests;                                                 // 0x0528 (size: 0x1)
    uint8 bApplyPerFrameTransforms;                                                   // 0x0528 (size: 0x1)
    uint8 bPivotAtCentroid;                                                           // 0x0528 (size: 0x1)
    float VoxelSize;                                                                  // 0x052C (size: 0x4)
    TEnumAsByte<ESparseVolumeTexturePreviewAttribute> PreviewAttribute;               // 0x0530 (size: 0x1)
    int32 MipLevel;                                                                   // 0x0534 (size: 0x4)
    float Extinction;                                                                 // 0x0538 (size: 0x4)

}; // Size: 0x550

#endif
