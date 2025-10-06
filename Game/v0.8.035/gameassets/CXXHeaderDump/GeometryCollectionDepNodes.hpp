#ifndef UE4SS_SDK_GeometryCollectionDepNodes_HPP
#define UE4SS_SDK_GeometryCollectionDepNodes_HPP

#include "GeometryCollectionDepNodes_enums.hpp"

struct FGeometryCollectionTransferVertexScalarAttributeNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FManagedArrayCollection FromCollection;                                           // 0x0248 (size: 0xB0)
    FCollectionAttributeKey AttributeKey;                                             // 0x02F8 (size: 0x20)
    EDataflowTransferNodeBoundingVolume BoundingVolumeType;                           // 0x0318 (size: 0x1)
    EDataflowTransferNodeSampleScale SampleScale;                                     // 0x0319 (size: 0x1)
    EDataflowTransferNodeFalloff Falloff;                                             // 0x031A (size: 0x1)
    float FalloffThreshold;                                                           // 0x031C (size: 0x4)
    float EdgeMultiplier;                                                             // 0x0320 (size: 0x4)
    float BoundMultiplier;                                                            // 0x0324 (size: 0x4)

}; // Size: 0x328

struct FSetVertexColorInCollectionFromFloatArrayDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    TArray<float> FloatArray;                                                         // 0x0248 (size: 0x10)
    float scale;                                                                      // 0x0258 (size: 0x4)

}; // Size: 0x260

struct FSetVertexColorInCollectionFromVertexSelectionDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x0198 (size: 0xB0)
    FDataflowVertexSelection VertexSelection;                                         // 0x0248 (size: 0x20)
    FLinearColor SelectedColor;                                                       // 0x0268 (size: 0x10)
    FLinearColor NonSelectedColor;                                                    // 0x0278 (size: 0x10)

}; // Size: 0x288

#endif
