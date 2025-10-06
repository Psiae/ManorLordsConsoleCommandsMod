#ifndef UE4SS_SDK_Renderer_HPP
#define UE4SS_SDK_Renderer_HPP

#include "Renderer_enums.hpp"

class ASparseVolumeTextureViewer : public AInfo
{
    class USparseVolumeTextureViewerComponent* SparseVolumeTextureViewerComponent;    // 0x02A8 (size: 0x8)

}; // Size: 0x2B0

class USparseVolumeTextureViewerComponent : public UPrimitiveComponent
{
    class USparseVolumeTexture* SparseVolumeTexturePreview;                           // 0x04E8 (size: 0x8)
    float Frame;                                                                      // 0x04F0 (size: 0x4)
    float FrameRate;                                                                  // 0x04F4 (size: 0x4)
    uint8 bPlaying;                                                                   // 0x04F8 (size: 0x1)
    uint8 bLooping;                                                                   // 0x04F8 (size: 0x1)
    uint8 bReversePlayback;                                                           // 0x04F8 (size: 0x1)
    uint8 bBlockingStreamingRequests;                                                 // 0x04F8 (size: 0x1)
    uint8 bApplyPerFrameTransforms;                                                   // 0x04F8 (size: 0x1)
    uint8 bPivotAtCentroid;                                                           // 0x04F8 (size: 0x1)
    float VoxelSize;                                                                  // 0x04FC (size: 0x4)
    TEnumAsByte<ESparseVolumeTexturePreviewAttribute> PreviewAttribute;               // 0x0500 (size: 0x1)
    int32 MipLevel;                                                                   // 0x0504 (size: 0x4)
    float Extinction;                                                                 // 0x0508 (size: 0x4)

}; // Size: 0x520

#endif
