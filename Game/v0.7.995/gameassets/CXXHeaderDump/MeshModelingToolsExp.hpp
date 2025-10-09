#ifndef UE4SS_SDK_MeshModelingToolsExp_HPP
#define UE4SS_SDK_MeshModelingToolsExp_HPP

#include "MeshModelingToolsExp_enums.hpp"

struct FBakeMultiMeshDetailProperties
{
    class UStaticMesh* SourceMesh;                                                    // 0x0000 (size: 0x8)
    class UTexture2D* SourceTexture;                                                  // 0x0008 (size: 0x8)
    int32 SourceTextureUVLayer;                                                       // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FBrushToolRadius
{
    EBrushToolSizeType SizeType;                                                      // 0x0000 (size: 0x1)
    float AdaptiveSize;                                                               // 0x0004 (size: 0x4)
    float WorldRadius;                                                                // 0x0008 (size: 0x4)

}; // Size: 0x14

struct FEditPivotTarget
{
    class UTransformProxy* TransformProxy;                                            // 0x0000 (size: 0x8)
    class UCombinedTransformGizmo* TransformGizmo;                                    // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FPerlinLayerProperties
{
    float Frequency;                                                                  // 0x0000 (size: 0x4)
    float Intensity;                                                                  // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FPhysicsBoxData
{
    FVector Dimensions;                                                               // 0x0000 (size: 0x18)
    FTransform Transform;                                                             // 0x0020 (size: 0x60)
    FKShapeElem Element;                                                              // 0x0080 (size: 0x30)

}; // Size: 0xB0

struct FPhysicsCapsuleData
{
    float Radius;                                                                     // 0x0000 (size: 0x4)
    float Length;                                                                     // 0x0004 (size: 0x4)
    FTransform Transform;                                                             // 0x0010 (size: 0x60)
    FKShapeElem Element;                                                              // 0x0070 (size: 0x30)

}; // Size: 0xA0

struct FPhysicsConvexData
{
    int32 NumVertices;                                                                // 0x0000 (size: 0x4)
    int32 NumFaces;                                                                   // 0x0004 (size: 0x4)
    FKShapeElem Element;                                                              // 0x0008 (size: 0x30)

}; // Size: 0x38

struct FPhysicsLevelSetData
{
    FKShapeElem Element;                                                              // 0x0000 (size: 0x30)

}; // Size: 0x30

struct FPhysicsSphereData
{
    float Radius;                                                                     // 0x0000 (size: 0x4)
    FTransform Transform;                                                             // 0x0010 (size: 0x60)
    FKShapeElem Element;                                                              // 0x0070 (size: 0x30)

}; // Size: 0xA0

struct FTransformMeshesTarget
{
    class UTransformProxy* TransformProxy;                                            // 0x0000 (size: 0x8)
    class UCombinedTransformGizmo* TransformGizmo;                                    // 0x0008 (size: 0x8)

}; // Size: 0x10

class UAddPatchTool : public USingleClickTool
{
    class UAddPatchToolProperties* ShapeSettings;                                     // 0x00A8 (size: 0x8)
    class UNewMeshMaterialProperties* MaterialProperties;                             // 0x00B0 (size: 0x8)
    class UPreviewMesh* PreviewMesh;                                                  // 0x00B8 (size: 0x8)

}; // Size: 0x128

class UAddPatchToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x28

class UAddPatchToolProperties : public UInteractiveToolPropertySet
{
    float Width;                                                                      // 0x00A8 (size: 0x4)
    float Rotation;                                                                   // 0x00AC (size: 0x4)
    int32 subdivisions;                                                               // 0x00B0 (size: 0x4)
    float Shift;                                                                      // 0x00B4 (size: 0x4)

}; // Size: 0xB8

class UAlignObjectsTool : public UMultiSelectionMeshEditingTool
{
    class UAlignObjectsToolProperties* AlignProps;                                    // 0x00C0 (size: 0x8)

}; // Size: 0x158

class UAlignObjectsToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
}; // Size: 0x28

class UAlignObjectsToolProperties : public UInteractiveToolPropertySet
{
    EAlignObjectsAlignTypes AlignType;                                                // 0x00A8 (size: 0x4)
    EAlignObjectsAlignToOptions AlignTo;                                              // 0x00AC (size: 0x4)
    EAlignObjectsBoxPoint BoxPosition;                                                // 0x00B0 (size: 0x4)
    bool bAlignX;                                                                     // 0x00B4 (size: 0x1)
    bool bAlignY;                                                                     // 0x00B5 (size: 0x1)
    bool bAlignZ;                                                                     // 0x00B6 (size: 0x1)

}; // Size: 0xB8

class UBakeCurvatureMapToolProperties : public UInteractiveToolPropertySet
{
    EBakeCurvatureTypeMode CurvatureType;                                             // 0x00A8 (size: 0x4)
    EBakeCurvatureColorMode ColorMapping;                                             // 0x00AC (size: 0x4)
    float ColorRangeMultiplier;                                                       // 0x00B0 (size: 0x4)
    float MinRangeMultiplier;                                                         // 0x00B4 (size: 0x4)
    EBakeCurvatureClampMode Clamping;                                                 // 0x00B8 (size: 0x4)

}; // Size: 0xC0

class UBakeInputMeshProperties : public UInteractiveToolPropertySet
{
    class UStaticMesh* TargetStaticMesh;                                              // 0x00A8 (size: 0x8)
    class USkeletalMesh* TargetSkeletalMesh;                                          // 0x00B0 (size: 0x8)
    class AActor* TargetDynamicMesh;                                                  // 0x00B8 (size: 0x8)
    FString TargetUVLayer;                                                            // 0x00C0 (size: 0x10)
    bool bHasTargetUVLayer;                                                           // 0x00D0 (size: 0x1)
    class UStaticMesh* SourceStaticMesh;                                              // 0x00D8 (size: 0x8)
    class USkeletalMesh* SourceSkeletalMesh;                                          // 0x00E0 (size: 0x8)
    class AActor* SourceDynamicMesh;                                                  // 0x00E8 (size: 0x8)
    bool bHideSourceMesh;                                                             // 0x00F0 (size: 0x1)
    class UTexture2D* SourceNormalMap;                                                // 0x00F8 (size: 0x8)
    FString SourceNormalMapUVLayer;                                                   // 0x0100 (size: 0x10)
    EBakeNormalSpace SourceNormalSpace;                                               // 0x0110 (size: 0x4)
    bool bHasSourceNormalMap;                                                         // 0x0114 (size: 0x1)
    float ProjectionDistance;                                                         // 0x0118 (size: 0x4)
    bool bProjectionInWorldSpace;                                                     // 0x011C (size: 0x1)
    TArray<FString> TargetUVLayerNamesList;                                           // 0x0120 (size: 0x10)
    TArray<FString> SourceUVLayerNamesList;                                           // 0x0130 (size: 0x10)

    TArray<FString> GetTargetUVLayerNamesFunc();
    TArray<FString> GetSourceUVLayerNamesFunc();
}; // Size: 0x140

class UBakeMeshAttributeMapsResultToolProperties : public UInteractiveToolPropertySet
{
    TMap<class EBakeMapType, class UTexture2D*> Result;                               // 0x00A8 (size: 0x50)

}; // Size: 0xF8

class UBakeMeshAttributeMapsTool : public UBakeMeshAttributeMapsToolBase
{
    class UBakeInputMeshProperties* InputMeshSettings;                                // 0x0320 (size: 0x8)
    class UBakeMeshAttributeMapsToolProperties* Settings;                             // 0x0328 (size: 0x8)
    class UBakeMeshAttributeMapsResultToolProperties* ResultSettings;                 // 0x0330 (size: 0x8)

}; // Size: 0x390

class UBakeMeshAttributeMapsToolBase : public UBakeMeshAttributeTool
{
    class UBakeVisualizationProperties* VisualizationProps;                           // 0x01B0 (size: 0x8)
    class UPreviewMesh* PreviewMesh;                                                  // 0x01B8 (size: 0x8)
    class UMaterialInstanceDynamic* PreviewMaterial;                                  // 0x01C0 (size: 0x8)
    class UMaterialInstanceDynamic* BentNormalPreviewMaterial;                        // 0x01C8 (size: 0x8)
    TMap<class EBakeMapType, class UTexture2D*> CachedMaps;                           // 0x0220 (size: 0x50)
    class UTexture2D* EmptyNormalMap;                                                 // 0x0308 (size: 0x8)
    class UTexture2D* EmptyColorMapBlack;                                             // 0x0310 (size: 0x8)
    class UTexture2D* EmptyColorMapWhite;                                             // 0x0318 (size: 0x8)

}; // Size: 0x320

class UBakeMeshAttributeMapsToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
}; // Size: 0x28

class UBakeMeshAttributeMapsToolProperties : public UInteractiveToolPropertySet
{
    int32 MapTypes;                                                                   // 0x00A8 (size: 0x4)
    FString MapPreview;                                                               // 0x00B0 (size: 0x10)
    EBakeTextureResolution Resolution;                                                // 0x00C0 (size: 0x4)
    EBakeTextureBitDepth BitDepth;                                                    // 0x00C4 (size: 0x4)
    EBakeTextureSamplesPerPixel SamplesPerPixel;                                      // 0x00C8 (size: 0x4)
    class UTexture2D* SampleFilterMask;                                               // 0x00D0 (size: 0x8)
    TArray<FString> MapPreviewNamesList;                                              // 0x00D8 (size: 0x10)

    TArray<FString> GetMapPreviewNamesFunc();
}; // Size: 0x138

class UBakeMeshAttributeTool : public UMultiSelectionMeshEditingTool
{
    class UBakeOcclusionMapToolProperties* OcclusionSettings;                         // 0x00C8 (size: 0x8)
    class UBakeCurvatureMapToolProperties* CurvatureSettings;                         // 0x00D0 (size: 0x8)
    class UBakeTexture2DProperties* TextureSettings;                                  // 0x00D8 (size: 0x8)
    class UBakeMultiTexture2DProperties* MultiTextureSettings;                        // 0x00E0 (size: 0x8)
    class UMaterialInstanceDynamic* WorkingPreviewMaterial;                           // 0x00E8 (size: 0x8)
    class UMaterialInstanceDynamic* ErrorPreviewMaterial;                             // 0x00F0 (size: 0x8)

}; // Size: 0x1A8

class UBakeMeshAttributeVertexTool : public UBakeMeshAttributeTool
{
    class UBakeInputMeshProperties* InputMeshSettings;                                // 0x01B0 (size: 0x8)
    class UBakeMeshAttributeVertexToolProperties* Settings;                           // 0x01B8 (size: 0x8)
    class UPreviewMesh* PreviewMesh;                                                  // 0x01C0 (size: 0x8)
    class UMaterialInstanceDynamic* PreviewMaterial;                                  // 0x01C8 (size: 0x8)
    class UMaterialInstanceDynamic* PreviewAlphaMaterial;                             // 0x01D0 (size: 0x8)

}; // Size: 0x2A8

class UBakeMeshAttributeVertexToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
}; // Size: 0x28

class UBakeMeshAttributeVertexToolProperties : public UInteractiveToolPropertySet
{
    EBakeVertexOutput OutputMode;                                                     // 0x00A8 (size: 0x4)
    int32 OutputType;                                                                 // 0x00AC (size: 0x4)
    int32 OutputTypeR;                                                                // 0x00B0 (size: 0x4)
    int32 OutputTypeG;                                                                // 0x00B4 (size: 0x4)
    int32 OutputTypeB;                                                                // 0x00B8 (size: 0x4)
    int32 OutputTypeA;                                                                // 0x00BC (size: 0x4)
    EBakeVertexChannel PreviewMode;                                                   // 0x00C0 (size: 0x4)
    bool bSplitAtNormalSeams;                                                         // 0x00C4 (size: 0x1)
    bool bSplitAtUVSeams;                                                             // 0x00C5 (size: 0x1)

}; // Size: 0xC8

class UBakeMultiMeshAttributeMapsTool : public UBakeMeshAttributeMapsToolBase
{
    class UBakeMultiMeshAttributeMapsToolProperties* Settings;                        // 0x0320 (size: 0x8)
    class UBakeMultiMeshInputToolProperties* InputMeshSettings;                       // 0x0328 (size: 0x8)
    class UBakeMeshAttributeMapsResultToolProperties* ResultSettings;                 // 0x0330 (size: 0x8)

}; // Size: 0x3C8

class UBakeMultiMeshAttributeMapsToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
}; // Size: 0x28

class UBakeMultiMeshAttributeMapsToolProperties : public UInteractiveToolPropertySet
{
    int32 MapTypes;                                                                   // 0x00A8 (size: 0x4)
    FString MapPreview;                                                               // 0x00B0 (size: 0x10)
    EBakeTextureResolution Resolution;                                                // 0x00C0 (size: 0x4)
    EBakeTextureBitDepth BitDepth;                                                    // 0x00C4 (size: 0x4)
    EBakeTextureSamplesPerPixel SamplesPerPixel;                                      // 0x00C8 (size: 0x4)
    class UTexture2D* SampleFilterMask;                                               // 0x00D0 (size: 0x8)
    TArray<FString> MapPreviewNamesList;                                              // 0x00D8 (size: 0x10)

    TArray<FString> GetMapPreviewNamesFunc();
}; // Size: 0x138

class UBakeMultiMeshInputToolProperties : public UInteractiveToolPropertySet
{
    class UStaticMesh* TargetStaticMesh;                                              // 0x00A8 (size: 0x8)
    class USkeletalMesh* TargetSkeletalMesh;                                          // 0x00B0 (size: 0x8)
    class AActor* TargetDynamicMesh;                                                  // 0x00B8 (size: 0x8)
    FString TargetUVLayer;                                                            // 0x00C0 (size: 0x10)
    TArray<FBakeMultiMeshDetailProperties> SourceMeshes;                              // 0x00D0 (size: 0x10)
    float ProjectionDistance;                                                         // 0x00E0 (size: 0x4)
    TArray<FString> TargetUVLayerNamesList;                                           // 0x00E8 (size: 0x10)

    TArray<FString> GetTargetUVLayerNamesFunc();
}; // Size: 0xF8

class UBakeMultiTexture2DProperties : public UInteractiveToolPropertySet
{
    TArray<class UTexture2D*> MaterialIDSourceTextures;                               // 0x00A8 (size: 0x10)
    FString UVLayer;                                                                  // 0x00B8 (size: 0x10)
    TArray<FString> UVLayerNamesList;                                                 // 0x00C8 (size: 0x10)
    TArray<class UTexture2D*> AllSourceTextures;                                      // 0x00D8 (size: 0x10)

    TArray<FString> GetUVLayerNamesFunc();
}; // Size: 0xE8

class UBakeNormalMapToolProperties : public UInteractiveToolPropertySet
{
}; // Size: 0xA8

class UBakeOcclusionMapToolProperties : public UInteractiveToolPropertySet
{
    int32 OcclusionRays;                                                              // 0x00A8 (size: 0x4)
    float MaxDistance;                                                                // 0x00AC (size: 0x4)
    float SpreadAngle;                                                                // 0x00B0 (size: 0x4)
    float BiasAngle;                                                                  // 0x00B4 (size: 0x4)

}; // Size: 0xB8

class UBakeTexture2DProperties : public UInteractiveToolPropertySet
{
    class UTexture2D* SourceTexture;                                                  // 0x00A8 (size: 0x8)
    FString UVLayer;                                                                  // 0x00B0 (size: 0x10)
    TArray<FString> UVLayerNamesList;                                                 // 0x00C0 (size: 0x10)

    TArray<FString> GetUVLayerNamesFunc();
}; // Size: 0xD0

class UBakeTransformTool : public UMultiSelectionMeshEditingTool
{
    class UBakeTransformToolProperties* BasicProperties;                              // 0x00C0 (size: 0x8)

}; // Size: 0xD8

class UBakeTransformToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
}; // Size: 0x28

class UBakeTransformToolProperties : public UInteractiveToolPropertySet
{
    bool bApplyToAllLODs;                                                             // 0x00A8 (size: 0x1)
    bool bBakeRotation;                                                               // 0x00A9 (size: 0x1)
    EBakeScaleMethod BakeScale;                                                       // 0x00AA (size: 0x1)
    bool bRecenterPivot;                                                              // 0x00AB (size: 0x1)
    bool bAllowNoScale;                                                               // 0x00AC (size: 0x1)

}; // Size: 0xB0

class UBakeVisualizationProperties : public UInteractiveToolPropertySet
{
    bool bPreviewAsMaterial;                                                          // 0x00A8 (size: 0x1)
    float Brightness;                                                                 // 0x00AC (size: 0x4)
    float AOMultiplier;                                                               // 0x00B0 (size: 0x4)

}; // Size: 0xB8

class UBaseKelvinletBrushOpProps : public UMeshSculptBrushOpProps
{
    float Stiffness;                                                                  // 0x00A8 (size: 0x4)
    float Incompressiblity;                                                           // 0x00AC (size: 0x4)
    int32 BrushSteps;                                                                 // 0x00B0 (size: 0x4)

}; // Size: 0xB8

class UBasePlaneBrushOpProps : public UMeshSculptBrushOpProps
{
}; // Size: 0xA8

class UBaseSmoothBrushOpProps : public UMeshSculptBrushOpProps
{
}; // Size: 0xA8

class UBrushRemeshProperties : public URemeshProperties
{
    bool bEnableRemeshing;                                                            // 0x00B8 (size: 0x1)
    int32 TriangleSize;                                                               // 0x00BC (size: 0x4)
    int32 PreserveDetail;                                                             // 0x00C0 (size: 0x4)
    int32 Iterations;                                                                 // 0x00C4 (size: 0x4)

}; // Size: 0xC8

class UCollisionGeometryVisualizationProperties : public UInteractiveToolPropertySet
{
    bool bShowCollision;                                                              // 0x00A8 (size: 0x1)
    bool bShowSolid;                                                                  // 0x00A9 (size: 0x1)
    float LineThickness;                                                              // 0x00AC (size: 0x4)
    bool bShowHidden;                                                                 // 0x00B0 (size: 0x1)
    bool bRandomColors;                                                               // 0x00B1 (size: 0x1)
    FColor Color;                                                                     // 0x00B4 (size: 0x4)
    class UMaterialInterface* LineMaterial;                                           // 0x00B8 (size: 0x8)
    class UMaterialInterface* LineMaterialShowingHidden;                              // 0x00C0 (size: 0x8)
    class UMaterialInterface* TriangleMaterial;                                       // 0x00C8 (size: 0x8)
    bool bEnableShowCollision;                                                        // 0x00D0 (size: 0x1)
    bool bEnableShowSolid;                                                            // 0x00D1 (size: 0x1)

}; // Size: 0xD8

class UConvertMeshesTool : public UInteractiveTool
{
    class UConvertMeshesToolProperties* BasicProperties;                              // 0x00A0 (size: 0x8)
    class UCreateMeshObjectTypeProperties* OutputTypeProperties;                      // 0x00A8 (size: 0x8)
    TArray<TWeakObjectPtr<UPrimitiveComponent>> Inputs;                               // 0x00B0 (size: 0x10)

}; // Size: 0xC8

class UConvertMeshesToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x28

class UConvertMeshesToolProperties : public UInteractiveToolPropertySet
{
    bool bTransferMaterials;                                                          // 0x00A8 (size: 0x1)
    bool bShowTransferMaterials;                                                      // 0x00A9 (size: 0x1)
    bool bTransferCollision;                                                          // 0x00AA (size: 0x1)

}; // Size: 0xB0

class UConvertToPolygonsOperatorFactory : public UObject
{
    class UConvertToPolygonsTool* ConvertToPolygonsTool;                              // 0x0030 (size: 0x8)

}; // Size: 0x38

class UConvertToPolygonsTool : public USingleTargetWithSelectionTool
{
    class UConvertToPolygonsToolProperties* Settings;                                 // 0x0120 (size: 0x8)
    class UPolygroupLayersProperties* CopyFromLayerProperties;                        // 0x0128 (size: 0x8)
    class UOutputPolygroupLayerProperties* OutputProperties;                          // 0x0130 (size: 0x8)
    class UMeshOpPreviewWithBackgroundCompute* PreviewCompute;                        // 0x0138 (size: 0x8)
    class UPreviewGeometry* PreviewGeometry;                                          // 0x0140 (size: 0x8)
    class UPreviewMesh* UnmodifiedAreaPreviewMesh;                                    // 0x0148 (size: 0x8)

}; // Size: 0x1B8

class UConvertToPolygonsToolBuilder : public USingleTargetWithSelectionToolBuilder
{
}; // Size: 0x28

class UConvertToPolygonsToolProperties : public UInteractiveToolPropertySet
{
    EConvertToPolygonsMode ConversionMode;                                            // 0x00A8 (size: 0x4)
    float AngleTolerance;                                                             // 0x00AC (size: 0x4)
    bool bUseAverageGroupNormal;                                                      // 0x00B0 (size: 0x1)
    int32 NumPoints;                                                                  // 0x00B4 (size: 0x4)
    bool bSplitExisting;                                                              // 0x00B8 (size: 0x1)
    bool bNormalWeighted;                                                             // 0x00B9 (size: 0x1)
    float NormalWeighting;                                                            // 0x00BC (size: 0x4)
    float QuadAdjacencyWeight;                                                        // 0x00C0 (size: 0x4)
    float QuadMetricClamp;                                                            // 0x00C4 (size: 0x4)
    int32 QuadSearchRounds;                                                           // 0x00C8 (size: 0x4)
    bool bRespectUVSeams;                                                             // 0x00CC (size: 0x1)
    bool bRespectHardNormals;                                                         // 0x00CD (size: 0x1)
    int32 MinGroupSize;                                                               // 0x00D0 (size: 0x4)
    bool bCalculateNormals;                                                           // 0x00D4 (size: 0x1)
    bool bShowGroupColors;                                                            // 0x00D5 (size: 0x1)

}; // Size: 0xD8

class UCubeGridTool : public UInteractiveTool
{
    class UCombinedTransformGizmo* GridGizmo;                                         // 0x00C0 (size: 0x8)
    class UDragAlignmentMechanic* GridGizmoAlignmentMechanic;                         // 0x00C8 (size: 0x8)
    class UTransformProxy* GridGizmoTransformProxy;                                   // 0x00D0 (size: 0x8)
    class UPreviewGeometry* LineSets;                                                 // 0x00D8 (size: 0x8)
    class UClickDragInputBehavior* ClickDragBehavior;                                 // 0x00E0 (size: 0x8)
    class UMouseHoverBehavior* HoverBehavior;                                         // 0x00E8 (size: 0x8)
    class ULocalSingleClickInputBehavior* CtrlMiddleClickBehavior;                    // 0x00F0 (size: 0x8)
    class ULocalClickDragInputBehavior* MiddleClickDragBehavior;                      // 0x00F8 (size: 0x8)
    class UCubeGridToolProperties* Settings;                                          // 0x0100 (size: 0x8)
    class UCubeGridToolActions* ToolActions;                                          // 0x0108 (size: 0x8)
    class UNewMeshMaterialProperties* MaterialProperties;                             // 0x0110 (size: 0x8)
    class UCreateMeshObjectTypeProperties* OutputTypeProperties;                      // 0x0118 (size: 0x8)
    class UToolTarget* Target;                                                        // 0x0120 (size: 0x8)
    class UMeshOpPreviewWithBackgroundCompute* Preview;                               // 0x02A8 (size: 0x8)

}; // Size: 0x620

class UCubeGridToolActions : public UInteractiveToolPropertySet
{
    class AActor* GridSourceActor;                                                    // 0x00B0 (size: 0x8)

    void SlideForward();
    void SlideBack();
    void ResetGridFromActor();
    void push();
    void Pull();
    void Flip();
    void CornerMode();
    void AcceptAndStartNew();
}; // Size: 0xB8

class UCubeGridToolBuilder : public UInteractiveToolWithToolTargetsBuilder
{
}; // Size: 0x30

class UCubeGridToolProperties : public UInteractiveToolPropertySet
{
    FVector GridFrameOrigin;                                                          // 0x00A8 (size: 0x18)
    FRotator GridFrameOrientation;                                                    // 0x00C0 (size: 0x18)
    bool bShowGizmo;                                                                  // 0x00D8 (size: 0x1)
    uint8 GridPower;                                                                  // 0x00E8 (size: 0x1)
    double CurrentBlockSize;                                                          // 0x00F0 (size: 0x8)
    int32 BlocksPerStep;                                                              // 0x00F8 (size: 0x4)
    bool bPowerOfTwoBlockSizes;                                                       // 0x00FC (size: 0x1)
    double BlockBaseSize;                                                             // 0x0100 (size: 0x8)
    bool bCrosswiseDiagonal;                                                          // 0x0108 (size: 0x1)
    bool bKeepSideGroups;                                                             // 0x0109 (size: 0x1)
    bool bShowSelectionMeasurements;                                                  // 0x010A (size: 0x1)
    double PlaneTolerance;                                                            // 0x0110 (size: 0x8)
    bool bHitUnrelatedGeometry;                                                       // 0x0118 (size: 0x1)
    bool bHitGridGroundPlaneIfCloser;                                                 // 0x0119 (size: 0x1)
    ECubeGridToolFaceSelectionMode FaceSelectionMode;                                 // 0x011C (size: 0x4)
    FString ToggleCornerMode;                                                         // 0x0120 (size: 0x10)
    FString PushPull;                                                                 // 0x0130 (size: 0x10)
    FString ResizeGrid;                                                               // 0x0140 (size: 0x10)
    FString FlipSelection;                                                            // 0x0160 (size: 0x10)
    FString GridGizmo;                                                                // 0x0170 (size: 0x10)
    FString QuickShiftGizmo;                                                          // 0x0180 (size: 0x10)
    FString AlignGizmo;                                                               // 0x0190 (size: 0x10)
    bool bInCornerMode;                                                               // 0x01A0 (size: 0x1)
    bool bAllowedToEditGrid;                                                          // 0x01A1 (size: 0x1)

}; // Size: 0x1A8

class UDeformMeshPolygonsTool : public UMeshSurfacePointTool
{
    class AInternalToolFrameworkActor* PreviewMeshActor;                              // 0x0110 (size: 0x8)
    class UDynamicMeshComponent* DynamicMeshComponent;                                // 0x0118 (size: 0x8)
    class UDeformMeshPolygonsTransformProperties* TransformProps;                     // 0x0120 (size: 0x8)

}; // Size: 0x1800

class UDeformMeshPolygonsToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{
}; // Size: 0x30

class UDeformMeshPolygonsTransformProperties : public UInteractiveToolPropertySet
{
    EGroupTopologyDeformationStrategy DeformationStrategy;                            // 0x00A8 (size: 0x1)
    EQuickTransformerMode TransformMode;                                              // 0x00A9 (size: 0x1)
    bool bSelectFaces;                                                                // 0x00AA (size: 0x1)
    bool bSelectEdges;                                                                // 0x00AB (size: 0x1)
    bool bSelectVertices;                                                             // 0x00AC (size: 0x1)
    bool bShowWireframe;                                                              // 0x00AD (size: 0x1)
    EWeightScheme SelectedWeightScheme;                                               // 0x00B0 (size: 0x4)
    double HandleWeight;                                                              // 0x00B8 (size: 0x8)
    bool bPostFixHandles;                                                             // 0x00C0 (size: 0x1)

}; // Size: 0xC8

class UDiffusionSmoothProperties : public UInteractiveToolPropertySet
{
    float SmoothingPerStep;                                                           // 0x00A8 (size: 0x4)
    int32 Steps;                                                                      // 0x00AC (size: 0x4)
    bool bPreserveUVs;                                                                // 0x00B0 (size: 0x1)

}; // Size: 0xB8

class UDisplaceMeshCommonProperties : public UInteractiveToolPropertySet
{
    EDisplaceMeshToolDisplaceType DisplacementType;                                   // 0x00A8 (size: 0x1)
    float DisplaceIntensity;                                                          // 0x00AC (size: 0x4)
    int32 RandomSeed;                                                                 // 0x00B0 (size: 0x4)
    EDisplaceMeshToolSubdivisionType SubdivisionType;                                 // 0x00B4 (size: 0x1)
    int32 subdivisions;                                                               // 0x00B8 (size: 0x4)
    FName WeightMap;                                                                  // 0x00BC (size: 0x8)
    TArray<FString> WeightMapsList;                                                   // 0x00C8 (size: 0x10)
    bool bInvertWeightMap;                                                            // 0x00D8 (size: 0x1)
    bool bShowWireframe;                                                              // 0x00D9 (size: 0x1)
    bool bDisableSizeWarning;                                                         // 0x00DA (size: 0x1)

    TArray<FString> GetWeightMapsFunc();
}; // Size: 0xE0

class UDisplaceMeshDirectionalFilterProperties : public UInteractiveToolPropertySet
{
    bool bEnableFilter;                                                               // 0x00A8 (size: 0x1)
    FVector FilterDirection;                                                          // 0x00B0 (size: 0x18)
    float FilterWidth;                                                                // 0x00C8 (size: 0x4)

}; // Size: 0xD0

class UDisplaceMeshPerlinNoiseProperties : public UInteractiveToolPropertySet
{
    TArray<FPerlinLayerProperties> PerlinLayerProperties;                             // 0x00A8 (size: 0x10)

}; // Size: 0xB8

class UDisplaceMeshSineWaveProperties : public UInteractiveToolPropertySet
{
    float SineWaveFrequency;                                                          // 0x00A8 (size: 0x4)
    float SineWavePhaseShift;                                                         // 0x00AC (size: 0x4)
    FVector SineWaveDirection;                                                        // 0x00B0 (size: 0x18)

}; // Size: 0xC8

class UDisplaceMeshTextureMapProperties : public UInteractiveToolPropertySet
{
    class UTexture2D* DisplacementMap;                                                // 0x00A8 (size: 0x8)
    EDisplaceMeshToolChannelType Channel;                                             // 0x00B0 (size: 0x1)
    float DisplacementMapBaseValue;                                                   // 0x00B4 (size: 0x4)
    FVector2D UVScale;                                                                // 0x00B8 (size: 0x10)
    FVector2D UVOffset;                                                               // 0x00C8 (size: 0x10)
    bool bApplyAdjustmentCurve;                                                       // 0x00D8 (size: 0x1)
    class UCurveFloat* AdjustmentCurve;                                               // 0x00E0 (size: 0x8)
    bool bRecalcNormals;                                                              // 0x00E8 (size: 0x1)

}; // Size: 0xF0

class UDisplaceMeshTool : public USingleSelectionMeshEditingTool
{
    class UDisplaceMeshCommonProperties* CommonProperties;                            // 0x00B0 (size: 0x8)
    class UDisplaceMeshDirectionalFilterProperties* DirectionalFilterProperties;      // 0x00B8 (size: 0x8)
    class UDisplaceMeshTextureMapProperties* TextureMapProperties;                    // 0x00C0 (size: 0x8)
    class UDisplaceMeshPerlinNoiseProperties* NoiseProperties;                        // 0x00C8 (size: 0x8)
    class UDisplaceMeshSineWaveProperties* SineWaveProperties;                        // 0x00D0 (size: 0x8)
    class USelectiveTessellationProperties* SelectiveTessellationProperties;          // 0x00D8 (size: 0x8)
    class UCurveFloat* ActiveContrastCurveTarget;                                     // 0x00E0 (size: 0x8)
    class UMeshStatisticsProperties* MeshStatistics;                                  // 0x00E8 (size: 0x8)
    class AInternalToolFrameworkActor* PreviewMeshActor;                              // 0x0430 (size: 0x8)
    class UDynamicMeshComponent* DynamicMeshComponent;                                // 0x0438 (size: 0x8)

}; // Size: 0x460

class UDisplaceMeshToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
}; // Size: 0x28

class UDrawPolyPathExtrudeProperties : public UInteractiveToolPropertySet
{
    EDrawPolyPathExtrudeDirection Direction;                                          // 0x00A8 (size: 0x4)

}; // Size: 0xB0

class UDrawPolyPathProperties : public UInteractiveToolPropertySet
{
    EDrawPolyPathWidthMode WidthMode;                                                 // 0x00A8 (size: 0x4)
    float Width;                                                                      // 0x00AC (size: 0x4)
    bool bRoundedCorners;                                                             // 0x00B0 (size: 0x1)
    EDrawPolyPathRadiusMode RadiusMode;                                               // 0x00B4 (size: 0x4)
    float CornerRadius;                                                               // 0x00B8 (size: 0x4)
    int32 RadialSlices;                                                               // 0x00BC (size: 0x4)
    bool bSinglePolyGroup;                                                            // 0x00C0 (size: 0x1)
    EDrawPolyPathExtrudeMode ExtrudeMode;                                             // 0x00C4 (size: 0x4)
    float ExtrudeHeight;                                                              // 0x00C8 (size: 0x4)
    float RampStartRatio;                                                             // 0x00CC (size: 0x4)

}; // Size: 0xD0

class UDrawPolyPathTool : public UInteractiveTool
{
    class UCreateMeshObjectTypeProperties* OutputTypeProperties;                      // 0x00B0 (size: 0x8)
    class UDrawPolyPathProperties* TransformProps;                                    // 0x00B8 (size: 0x8)
    class UDrawPolyPathExtrudeProperties* ExtrudeProperties;                          // 0x00C0 (size: 0x8)
    class UNewMeshMaterialProperties* MaterialProperties;                             // 0x00C8 (size: 0x8)
    class UConstructionPlaneMechanic* PlaneMechanic;                                  // 0x0190 (size: 0x8)
    class UPolyEditPreviewMesh* EditPreview;                                          // 0x0258 (size: 0x8)
    class UPlaneDistanceFromHitMechanic* ExtrudeHeightMechanic;                       // 0x0260 (size: 0x8)
    class USpatialCurveDistanceMechanic* CurveDistMechanic;                           // 0x0268 (size: 0x8)
    class UCollectSurfacePathMechanic* SurfacePathMechanic;                           // 0x0270 (size: 0x8)

}; // Size: 0x280

class UDrawPolyPathToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x28

class UDynamicMeshBrushProperties : public UInteractiveToolPropertySet
{
    FBrushToolRadius BrushSize;                                                       // 0x00A8 (size: 0x14)
    float BrushFalloffAmount;                                                         // 0x00BC (size: 0x4)
    float Depth;                                                                      // 0x00C0 (size: 0x4)
    bool bHitBackFaces;                                                               // 0x00C4 (size: 0x1)

}; // Size: 0xC8

class UDynamicMeshBrushSculptProperties : public UInteractiveToolPropertySet
{
    bool bIsRemeshingEnabled;                                                         // 0x00A8 (size: 0x1)
    EDynamicMeshSculptBrushType PrimaryBrushType;                                     // 0x00A9 (size: 0x1)
    float PrimaryBrushSpeed;                                                          // 0x00AC (size: 0x4)
    bool bPreserveUVFlow;                                                             // 0x00B0 (size: 0x1)
    bool bFreezeTarget;                                                               // 0x00B1 (size: 0x1)
    float SmoothBrushSpeed;                                                           // 0x00B4 (size: 0x4)
    bool bDetailPreservingSmooth;                                                     // 0x00B8 (size: 0x1)

}; // Size: 0xC0

class UDynamicMeshBrushTool : public UBaseBrushTool
{
    class UPreviewMesh* PreviewMesh;                                                  // 0x0298 (size: 0x8)

}; // Size: 0x2E0

class UDynamicMeshSculptTool : public UMeshSurfacePointTool
{
    class UDynamicMeshBrushProperties* BrushProperties;                               // 0x0100 (size: 0x8)
    class UDynamicMeshBrushSculptProperties* SculptProperties;                        // 0x0108 (size: 0x8)
    class USculptMaxBrushProperties* SculptMaxBrushProperties;                        // 0x0110 (size: 0x8)
    class UKelvinBrushProperties* KelvinBrushProperties;                              // 0x0118 (size: 0x8)
    class UBrushRemeshProperties* RemeshProperties;                                   // 0x0120 (size: 0x8)
    class UFixedPlaneBrushProperties* GizmoProperties;                                // 0x0128 (size: 0x8)
    class UMeshEditingViewProperties* ViewProperties;                                 // 0x0130 (size: 0x8)
    class UDynamicSculptToolActions* SculptToolActions;                               // 0x0138 (size: 0x8)
    class UBrushStampIndicator* BrushIndicator;                                       // 0x01A0 (size: 0x8)
    class UMaterialInstanceDynamic* BrushIndicatorMaterial;                           // 0x01A8 (size: 0x8)
    class UPreviewMesh* BrushIndicatorMesh;                                           // 0x01B0 (size: 0x8)
    class AInternalToolFrameworkActor* PreviewMeshActor;                              // 0x01B8 (size: 0x8)
    class UOctreeDynamicMeshComponent* DynamicMeshComponent;                          // 0x01C0 (size: 0x8)
    class UMaterialInstanceDynamic* ActiveOverrideMaterial;                           // 0x01C8 (size: 0x8)
    class UCombinedTransformGizmo* PlaneTransformGizmo;                               // 0x1008 (size: 0x8)
    class UTransformProxy* PlaneTransformProxy;                                       // 0x1010 (size: 0x8)

}; // Size: 0x1020

class UDynamicMeshSculptToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{
}; // Size: 0x38

class UDynamicSculptToolActions : public UInteractiveToolPropertySet
{

    void DiscardAttributes();
}; // Size: 0xB0

class UEditNormalsOperatorFactory : public UObject
{
    class UEditNormalsTool* Tool;                                                     // 0x0030 (size: 0x8)

}; // Size: 0x40

class UEditNormalsTool : public UMultiSelectionMeshEditingTool
{
    class UEditNormalsToolProperties* BasicProperties;                                // 0x00C0 (size: 0x8)
    class UPolygroupLayersProperties* PolygroupLayerProperties;                       // 0x00C8 (size: 0x8)
    TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                      // 0x00D0 (size: 0x10)
    class UGeometrySelectionVisualizationProperties* GeometrySelectionVizProperties;  // 0x0150 (size: 0x8)
    class UPreviewGeometry* GeometrySelectionViz;                                     // 0x0158 (size: 0x8)

}; // Size: 0x2C0

class UEditNormalsToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
}; // Size: 0x28

class UEditNormalsToolProperties : public UInteractiveToolPropertySet
{
    bool bRecomputeNormals;                                                           // 0x00A8 (size: 0x1)
    ENormalCalculationMethod NormalCalculationMethod;                                 // 0x00A9 (size: 0x1)
    bool bFixInconsistentNormals;                                                     // 0x00AA (size: 0x1)
    bool bInvertNormals;                                                              // 0x00AB (size: 0x1)
    ESplitNormalMethod SplitNormalMethod;                                             // 0x00AC (size: 0x1)
    float SharpEdgeAngleThreshold;                                                    // 0x00B0 (size: 0x4)
    bool bAllowSharpVertices;                                                         // 0x00B4 (size: 0x1)
    bool bToolHasSelection;                                                           // 0x00B5 (size: 0x1)

}; // Size: 0xB8

class UEditPivotTool : public UMultiSelectionMeshEditingTool
{
    class UEditPivotToolProperties* TransformProps;                                   // 0x00C8 (size: 0x8)
    class UEditPivotToolActionPropertySet* EditPivotActions;                          // 0x00D0 (size: 0x8)
    TArray<FEditPivotTarget> ActiveGizmos;                                            // 0x01B0 (size: 0x10)
    class UDragAlignmentMechanic* DragAlignmentMechanic;                              // 0x01C0 (size: 0x8)

}; // Size: 0x240

class UEditPivotToolActionPropertySet : public UInteractiveToolPropertySet
{
    bool bUseWorldBox;                                                                // 0x00B0 (size: 0x1)

    void WorldOrigin();
    void Top();
    void Right();
    void Left();
    void Front();
    void Center();
    void Bottom();
    void Back();
}; // Size: 0xB8

class UEditPivotToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
}; // Size: 0x28

class UEditPivotToolProperties : public UInteractiveToolPropertySet
{
    bool bApplyToAllLODs;                                                             // 0x00A8 (size: 0x1)
    bool bEnableSnapDragging;                                                         // 0x00A9 (size: 0x1)
    EEditPivotSnapDragRotationMode RotationMode;                                      // 0x00AA (size: 0x1)

}; // Size: 0xB0

class UEditUVIslandsTool : public UMeshSurfacePointTool
{
    class UExistingMeshMaterialProperties* MaterialSettings;                          // 0x0108 (size: 0x8)
    class UMaterialInstanceDynamic* CheckerMaterial;                                  // 0x0110 (size: 0x8)
    class AInternalToolFrameworkActor* PreviewMeshActor;                              // 0x0118 (size: 0x8)
    class UDynamicMeshComponent* DynamicMeshComponent;                                // 0x0120 (size: 0x8)
    class UPolygonSelectionMechanic* SelectionMechanic;                               // 0x0128 (size: 0x8)
    class UCombinedTransformGizmo* TransformGizmo;                                    // 0x0138 (size: 0x8)
    class UTransformProxy* TransformProxy;                                            // 0x0140 (size: 0x8)

}; // Size: 0x4E0

class UEditUVIslandsToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{
}; // Size: 0x30

class UEraseBrushOpProps : public UMeshSculptBrushOpProps
{
    float Strength;                                                                   // 0x00A8 (size: 0x4)
    float Falloff;                                                                    // 0x00AC (size: 0x4)

}; // Size: 0xB0

class UExtractCollisionGeometryTool : public USingleSelectionMeshEditingTool
{
    class UCreateMeshObjectTypeProperties* OutputTypeProperties;                      // 0x00B0 (size: 0x8)
    class UExtractCollisionToolProperties* Settings;                                  // 0x00B8 (size: 0x8)
    class UCollisionGeometryVisualizationProperties* VizSettings;                     // 0x00C0 (size: 0x8)
    class UPhysicsObjectToolPropertySet* ObjectProps;                                 // 0x00C8 (size: 0x8)
    class UPreviewGeometry* PreviewElements;                                          // 0x00D0 (size: 0x8)
    class UPreviewMesh* PreviewMesh;                                                  // 0x00D8 (size: 0x8)

}; // Size: 0x328

class UExtractCollisionGeometryToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
}; // Size: 0x28

class UExtractCollisionToolProperties : public UInteractiveToolPropertySet
{
    EExtractCollisionOutputType CollisionType;                                        // 0x00A8 (size: 0x1)
    bool bOutputSeparateMeshes;                                                       // 0x00A9 (size: 0x1)
    bool bShowPreview;                                                                // 0x00AA (size: 0x1)
    bool bShowInputMesh;                                                              // 0x00AB (size: 0x1)
    bool bWeldEdges;                                                                  // 0x00AC (size: 0x1)

}; // Size: 0xB0

class UExtrudeMeshSelectionTool : public USingleTargetWithSelectionTool
{
    class UExtrudeMeshSelectionToolProperties* ExtrudeProperties;                     // 0x0120 (size: 0x8)
    class UPreviewMesh* SourcePreview;                                                // 0x0848 (size: 0x8)
    class UMeshOpPreviewWithBackgroundCompute* EditCompute;                           // 0x0850 (size: 0x8)
    class UCombinedTransformGizmo* TransformGizmo;                                    // 0x0858 (size: 0x8)
    class UTransformProxy* TransformProxy;                                            // 0x0860 (size: 0x8)

}; // Size: 0x868

class UExtrudeMeshSelectionToolBuilder : public USingleTargetWithSelectionToolBuilder
{
}; // Size: 0x28

class UExtrudeMeshSelectionToolProperties : public UInteractiveToolPropertySet
{
    EExtrudeMeshSelectionInteractionMode InputMode;                                   // 0x00A8 (size: 0x1)
    double ExtrudeDistance;                                                           // 0x00B0 (size: 0x8)
    EExtrudeMeshSelectionRegionModifierMode RegionMode;                               // 0x00B8 (size: 0x1)
    int32 NumSubdivisions;                                                            // 0x00BC (size: 0x4)
    double CreaseAngle;                                                               // 0x00C0 (size: 0x8)
    double RaycastMaxDistance;                                                        // 0x00C8 (size: 0x8)
    bool bShellsToSolids;                                                             // 0x00D0 (size: 0x1)
    bool bInferGroupsFromNbrs;                                                        // 0x00D1 (size: 0x1)
    bool bGroupPerSubdivision;                                                        // 0x00D2 (size: 0x1)
    bool bReplaceSelectionGroups;                                                     // 0x00D3 (size: 0x1)
    double UVScale;                                                                   // 0x00D8 (size: 0x8)
    bool bUVIslandPerGroup;                                                           // 0x00E0 (size: 0x1)
    bool bInferMaterialID;                                                            // 0x00E1 (size: 0x1)
    int32 SetMaterialID;                                                              // 0x00E4 (size: 0x4)
    bool bShowInputMaterials;                                                         // 0x00E8 (size: 0x1)

}; // Size: 0xF0

class UFixedPlaneBrushOpProps : public UBasePlaneBrushOpProps
{
    float Strength;                                                                   // 0x00A8 (size: 0x4)
    float Falloff;                                                                    // 0x00AC (size: 0x4)
    float Depth;                                                                      // 0x00B0 (size: 0x4)
    EPlaneBrushSideMode WhichSide;                                                    // 0x00B4 (size: 0x1)

}; // Size: 0xB8

class UFixedPlaneBrushProperties : public UInteractiveToolPropertySet
{
    bool bPropertySetEnabled;                                                         // 0x00A8 (size: 0x1)
    bool bShowGizmo;                                                                  // 0x00A9 (size: 0x1)
    FVector Position;                                                                 // 0x00B0 (size: 0x18)
    FQuat Rotation;                                                                   // 0x00D0 (size: 0x20)

}; // Size: 0xF0

class UFlattenBrushOpProps : public UMeshSculptBrushOpProps
{
    float Strength;                                                                   // 0x00A8 (size: 0x4)
    float Falloff;                                                                    // 0x00AC (size: 0x4)
    float Depth;                                                                      // 0x00B0 (size: 0x4)
    EPlaneBrushSideMode WhichSide;                                                    // 0x00B4 (size: 0x1)

}; // Size: 0xB8

class UGroupEraseBrushOpProps : public UMeshSculptBrushOpProps
{
    int32 Group;                                                                      // 0x00A8 (size: 0x4)
    bool bOnlyEraseCurrent;                                                           // 0x00AC (size: 0x1)

}; // Size: 0xF0

class UGroupPaintBrushFilterProperties : public UInteractiveToolPropertySet
{
    EMeshGroupPaintBrushType PrimaryBrushType;                                        // 0x00A8 (size: 0x1)
    EMeshGroupPaintInteractionType SubToolType;                                       // 0x00A9 (size: 0x1)
    float BrushSize;                                                                  // 0x00AC (size: 0x4)
    EMeshGroupPaintBrushAreaType BrushAreaMode;                                       // 0x00B0 (size: 0x1)
    bool bHitBackFaces;                                                               // 0x00B1 (size: 0x1)
    int32 SetGroup;                                                                   // 0x00B4 (size: 0x4)
    bool bOnlySetUngrouped;                                                           // 0x00B8 (size: 0x1)
    int32 EraseGroup;                                                                 // 0x00BC (size: 0x4)
    bool bOnlyEraseCurrent;                                                           // 0x00C0 (size: 0x1)
    float AngleThreshold;                                                             // 0x00C4 (size: 0x4)
    bool bUVSeams;                                                                    // 0x00C8 (size: 0x1)
    bool bNormalSeams;                                                                // 0x00C9 (size: 0x1)
    EMeshGroupPaintVisibilityType VisibilityFilter;                                   // 0x00CA (size: 0x1)
    int32 MinTriVertCount;                                                            // 0x00CC (size: 0x4)
    bool bShowHitGroup;                                                               // 0x00D0 (size: 0x1)
    bool bShowAllGroups;                                                              // 0x00D1 (size: 0x1)

}; // Size: 0xD8

class UGroupPaintBrushOpProps : public UMeshSculptBrushOpProps
{
    int32 Group;                                                                      // 0x00A8 (size: 0x4)
    bool bOnlyPaintUngrouped;                                                         // 0x00AC (size: 0x1)

}; // Size: 0xB0

class UHoleFillOperatorFactory : public UObject
{
    class UHoleFillTool* FillTool;                                                    // 0x0030 (size: 0x8)

}; // Size: 0x38

class UHoleFillStatisticsProperties : public UInteractiveToolPropertySet
{
    FString InitialHoles;                                                             // 0x00A8 (size: 0x10)
    FString SelectedHoles;                                                            // 0x00B8 (size: 0x10)
    FString SuccessfulFills;                                                          // 0x00C8 (size: 0x10)
    FString FailedFills;                                                              // 0x00D8 (size: 0x10)
    FString RemainingHoles;                                                           // 0x00E8 (size: 0x10)

}; // Size: 0xF8

class UHoleFillTool : public USingleSelectionMeshEditingTool
{
    class USmoothHoleFillProperties* SmoothHoleFillProperties;                        // 0x00B0 (size: 0x8)
    class UHoleFillToolProperties* Properties;                                        // 0x00B8 (size: 0x8)
    class UHoleFillToolActions* Actions;                                              // 0x00C0 (size: 0x8)
    class UHoleFillStatisticsProperties* Statistics;                                  // 0x00C8 (size: 0x8)
    class UMeshOpPreviewWithBackgroundCompute* Preview;                               // 0x00D0 (size: 0x8)
    class UBoundarySelectionMechanic* SelectionMechanic;                              // 0x00D8 (size: 0x8)

}; // Size: 0x240

class UHoleFillToolActions : public UInteractiveToolPropertySet
{

    void SelectAll();
    void Clear();
}; // Size: 0xB0

class UHoleFillToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
}; // Size: 0x28

class UHoleFillToolProperties : public UInteractiveToolPropertySet
{
    EHoleFillOpFillType FillType;                                                     // 0x00A8 (size: 0x1)
    bool bRemoveIsolatedTriangles;                                                    // 0x00A9 (size: 0x1)
    bool bQuickFillSmallHoles;                                                        // 0x00AA (size: 0x1)

}; // Size: 0xB0

class UImplicitOffsetProperties : public UInteractiveToolPropertySet
{
    float Smoothness;                                                                 // 0x00A8 (size: 0x4)
    bool bPreserveUVs;                                                                // 0x00AC (size: 0x1)

}; // Size: 0xB0

class UImplicitSmoothProperties : public UInteractiveToolPropertySet
{
    float SmoothSpeed;                                                                // 0x00A8 (size: 0x4)
    float Smoothness;                                                                 // 0x00AC (size: 0x4)
    bool bPreserveUVs;                                                                // 0x00B0 (size: 0x1)
    float VolumeCorrection;                                                           // 0x00B4 (size: 0x4)

}; // Size: 0xB8

class UInflateBrushOpProps : public UMeshSculptBrushOpProps
{
    float Strength;                                                                   // 0x00A8 (size: 0x4)
    float Falloff;                                                                    // 0x00AC (size: 0x4)

}; // Size: 0xB0

class UIterativeOffsetProperties : public UInteractiveToolPropertySet
{
    int32 Steps;                                                                      // 0x00A8 (size: 0x4)
    bool bOffsetBoundaries;                                                           // 0x00AC (size: 0x1)
    float SmoothingPerStep;                                                           // 0x00B0 (size: 0x4)
    bool bReprojectSmooth;                                                            // 0x00B4 (size: 0x1)

}; // Size: 0xB8

class UIterativeSmoothProperties : public UInteractiveToolPropertySet
{
    float SmoothingPerStep;                                                           // 0x00A8 (size: 0x4)
    int32 Steps;                                                                      // 0x00AC (size: 0x4)
    bool bSmoothBoundary;                                                             // 0x00B0 (size: 0x1)

}; // Size: 0xB8

class UKelvinBrushProperties : public UInteractiveToolPropertySet
{
    float FalloffDistance;                                                            // 0x00A8 (size: 0x4)
    float Stiffness;                                                                  // 0x00AC (size: 0x4)
    float Incompressiblity;                                                           // 0x00B0 (size: 0x4)
    int32 BrushSteps;                                                                 // 0x00B4 (size: 0x4)

}; // Size: 0xB8

class ULatticeDeformerOperatorFactory : public UObject
{
    class ULatticeDeformerTool* LatticeDeformerTool;                                  // 0x0030 (size: 0x8)

}; // Size: 0x38

class ULatticeDeformerTool : public USingleSelectionMeshEditingTool
{
    class ULatticeControlPointsMechanic* ControlPointsMechanic;                       // 0x00D8 (size: 0x8)
    class ULatticeDeformerToolProperties* Settings;                                   // 0x00E0 (size: 0x8)
    class UMeshOpPreviewWithBackgroundCompute* Preview;                               // 0x00E8 (size: 0x8)
    bool bLatticeDeformed;                                                            // 0x00F0 (size: 0x1)

}; // Size: 0x160

class ULatticeDeformerToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
}; // Size: 0x28

class ULatticeDeformerToolProperties : public UInteractiveToolPropertySet
{
    int32 XAxisResolution;                                                            // 0x00B0 (size: 0x4)
    int32 YAxisResolution;                                                            // 0x00B4 (size: 0x4)
    int32 ZAxisResolution;                                                            // 0x00B8 (size: 0x4)
    float Padding;                                                                    // 0x00BC (size: 0x4)
    ELatticeInterpolationType InterpolationType;                                      // 0x00C0 (size: 0x1)
    bool bDeformNormals;                                                              // 0x00C1 (size: 0x1)
    bool bCanChangeResolution;                                                        // 0x00C2 (size: 0x1)
    EToolContextCoordinateSystem GizmoCoordinateSystem;                               // 0x00C3 (size: 0x1)
    bool bSetPivotMode;                                                               // 0x00C4 (size: 0x1)
    bool bSoftDeformation;                                                            // 0x00C5 (size: 0x1)

    void Constrain();
    void ClearConstraints();
}; // Size: 0xC8

class UMeshAnalysisProperties : public UInteractiveToolPropertySet
{
    FString SurfaceArea;                                                              // 0x00A8 (size: 0x10)
    FString Volume;                                                                   // 0x00B8 (size: 0x10)

}; // Size: 0xC8

class UMeshAttributePaintBrushOperationProperties : public UInteractiveToolPropertySet
{
    EBrushActionMode BrushAction;                                                     // 0x00A8 (size: 0x4)

}; // Size: 0xB0

class UMeshAttributePaintEditActions : public UInteractiveToolPropertySet
{
}; // Size: 0xB0

class UMeshAttributePaintTool : public UDynamicMeshBrushTool
{
    class UMeshAttributePaintBrushOperationProperties* BrushActionProps;              // 0x02E8 (size: 0x8)
    class UMeshAttributePaintToolProperties* AttribProps;                             // 0x02F0 (size: 0x8)

}; // Size: 0x800

class UMeshAttributePaintToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{
}; // Size: 0x70

class UMeshAttributePaintToolProperties : public UInteractiveToolPropertySet
{
    FString Attribute;                                                                // 0x00A8 (size: 0x10)

    TArray<FString> GetAttributeNames();
}; // Size: 0xC8

class UMeshBoundaryToolBase : public USingleSelectionMeshEditingTool
{
    class UPolygonSelectionMechanic* SelectionMechanic;                               // 0x0190 (size: 0x8)

}; // Size: 0x1A0

class UMeshConstraintProperties : public UInteractiveToolPropertySet
{
    bool bPreserveSharpEdges;                                                         // 0x00A8 (size: 0x1)
    EMeshBoundaryConstraint MeshBoundaryConstraint;                                   // 0x00A9 (size: 0x1)
    EGroupBoundaryConstraint GroupBoundaryConstraint;                                 // 0x00AA (size: 0x1)
    EMaterialBoundaryConstraint MaterialBoundaryConstraint;                           // 0x00AB (size: 0x1)
    bool bPreventNormalFlips;                                                         // 0x00AC (size: 0x1)
    bool bPreventTinyTriangles;                                                       // 0x00AD (size: 0x1)

    bool IsPreventTinyTrianglesEnabled();
    bool IsPreventNormalFlipsEnabled();
}; // Size: 0xB0

class UMeshGroupPaintTool : public UMeshSculptToolBase
{
    class UPolygroupLayersProperties* PolygroupLayerProperties;                       // 0x0BA0 (size: 0x8)
    class UGroupPaintBrushFilterProperties* FilterProperties;                         // 0x0BA8 (size: 0x8)
    class UGroupPaintBrushOpProps* PaintBrushOpProperties;                            // 0x0BB0 (size: 0x8)
    class UGroupEraseBrushOpProps* EraseBrushOpProperties;                            // 0x0BB8 (size: 0x8)
    class UMeshGroupPaintToolFreezeActions* FreezeActions;                            // 0x0BC0 (size: 0x8)
    class UPolyLassoMarqueeMechanic* PolyLassoMechanic;                               // 0x0BD0 (size: 0x8)
    class AInternalToolFrameworkActor* PreviewMeshActor;                              // 0x0BD8 (size: 0x8)
    class UDynamicMeshComponent* DynamicMeshComponent;                                // 0x0BE0 (size: 0x8)
    class UMeshElementsVisualizer* MeshElementsDisplay;                               // 0x0BE8 (size: 0x8)

}; // Size: 0xFE0

class UMeshGroupPaintToolActionPropertySet : public UInteractiveToolPropertySet
{
}; // Size: 0xB0

class UMeshGroupPaintToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{
}; // Size: 0x30

class UMeshGroupPaintToolFreezeActions : public UMeshGroupPaintToolActionPropertySet
{

    void UnfreezeAll();
    void ShrinkCurrent();
    void GrowCurrent();
    void FreezeOthers();
    void FreezeCurrent();
    void FloodFillCurrent();
    void ClearCurrent();
    void ClearAll();
}; // Size: 0xB0

class UMeshInspectorMaterialProperties : public UInteractiveToolPropertySet
{
    EMeshInspectorMaterialMode MaterialMode;                                          // 0x00A8 (size: 0x1)
    float CheckerDensity;                                                             // 0x00AC (size: 0x4)
    class UMaterialInterface* OverrideMaterial;                                       // 0x00B0 (size: 0x8)
    FString UVChannel;                                                                // 0x00B8 (size: 0x10)
    TArray<FString> UVChannelNamesList;                                               // 0x00C8 (size: 0x10)
    bool bFlatShading;                                                                // 0x00D8 (size: 0x1)
    FLinearColor Color;                                                               // 0x00DC (size: 0x10)
    double Opacity;                                                                   // 0x00F0 (size: 0x8)
    FLinearColor TransparentMaterialColor;                                            // 0x00F8 (size: 0x10)
    bool bTwoSided;                                                                   // 0x0108 (size: 0x1)
    class UMaterialInstanceDynamic* CheckerMaterial;                                  // 0x0110 (size: 0x8)
    class UMaterialInstanceDynamic* ActiveCustomMaterial;                             // 0x0118 (size: 0x8)

    TArray<FString> GetUVChannelNamesFunc();
}; // Size: 0x120

class UMeshInspectorProperties : public UInteractiveToolPropertySet
{
    bool bWireframe;                                                                  // 0x00A8 (size: 0x1)
    bool bBoundaryEdges;                                                              // 0x00A9 (size: 0x1)
    bool bBowtieVertices;                                                             // 0x00AA (size: 0x1)
    bool bPolygonBorders;                                                             // 0x00AB (size: 0x1)
    bool bUVSeams;                                                                    // 0x00AC (size: 0x1)
    bool bUVBowties;                                                                  // 0x00AD (size: 0x1)
    bool bMissingUVs;                                                                 // 0x00AE (size: 0x1)
    bool bNormalSeams;                                                                // 0x00AF (size: 0x1)
    bool bTangentSeams;                                                               // 0x00B0 (size: 0x1)
    bool bNormalVectors;                                                              // 0x00B1 (size: 0x1)
    bool bTangentVectors;                                                             // 0x00B2 (size: 0x1)
    bool bDrawHiddenEdgesAndSeams;                                                    // 0x00B3 (size: 0x1)
    float NormalLength;                                                               // 0x00B4 (size: 0x4)
    float TangentLength;                                                              // 0x00B8 (size: 0x4)
    EMeshInspectorToolDrawIndexMode ShowIndices;                                      // 0x00BC (size: 0x1)

}; // Size: 0xC0

class UMeshInspectorTool : public USingleSelectionMeshEditingTool
{
    class UMeshInspectorProperties* Settings;                                         // 0x00B8 (size: 0x8)
    class UPolygroupLayersProperties* PolygroupLayerProperties;                       // 0x00C0 (size: 0x8)
    class UMeshInspectorMaterialProperties* MaterialSettings;                         // 0x00C8 (size: 0x8)
    class UPreviewMesh* PreviewMesh;                                                  // 0x00D8 (size: 0x8)
    class ULineSetComponent* DrawnLineSet;                                            // 0x00E0 (size: 0x8)
    class UMaterialInterface* DefaultMaterial;                                        // 0x00E8 (size: 0x8)

}; // Size: 0x250

class UMeshInspectorToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
}; // Size: 0x28

class UMeshSculptBrushOpProps : public UInteractiveToolPropertySet
{
}; // Size: 0xA8

class UMeshSculptToolBase : public UMeshSurfacePointTool
{
    class USculptBrushProperties* BrushProperties;                                    // 0x0100 (size: 0x8)
    class UWorkPlaneProperties* GizmoProperties;                                      // 0x0108 (size: 0x8)
    TMap<int32, UMeshSculptBrushOpProps*> BrushOpPropSets;                            // 0x0230 (size: 0x50)
    TMap<int32, UMeshSculptBrushOpProps*> SecondaryBrushOpPropSets;                   // 0x02D0 (size: 0x50)
    class UMeshEditingViewProperties* ViewProperties;                                 // 0x0A10 (size: 0x8)
    class UMaterialInstanceDynamic* ActiveOverrideMaterial;                           // 0x0A18 (size: 0x8)
    class UBrushStampIndicator* BrushIndicator;                                       // 0x0A20 (size: 0x8)
    bool bIsVolumetricIndicator;                                                      // 0x0A28 (size: 0x1)
    class UMaterialInstanceDynamic* BrushIndicatorMaterial;                           // 0x0A30 (size: 0x8)
    class UPreviewMesh* BrushIndicatorMesh;                                           // 0x0A38 (size: 0x8)
    class UCombinedTransformGizmo* PlaneTransformGizmo;                               // 0x0A40 (size: 0x8)
    class UTransformProxy* PlaneTransformProxy;                                       // 0x0A48 (size: 0x8)

}; // Size: 0xBA0

class UMeshSelectionEditActions : public UMeshSelectionToolActionPropertySet
{

    void Shrink();
    void SelectAll();
    void OptimizeBorder();
    void LargestTriCountPart();
    void LargestAreaPart();
    void Invert();
    void Grow();
    void FloodFill();
    void ExpandToMaterials();
    void Clear();
}; // Size: 0xB0

class UMeshSelectionMeshEditActions : public UMeshSelectionToolActionPropertySet
{

    void SmoothBorder();
    void Separate();
    void FlipNormals();
    void Duplicate();
    void Disconnect();
    void Delete();
    void CreatePolygroup();
}; // Size: 0xB0

class UMeshSelectionTool : public UDynamicMeshBrushTool
{
    class UMeshSelectionToolProperties* SelectionProps;                               // 0x02E8 (size: 0x8)
    class UMeshSelectionEditActions* SelectionActions;                                // 0x02F0 (size: 0x8)
    class UMeshSelectionToolActionPropertySet* EditActions;                           // 0x02F8 (size: 0x8)
    class UMeshStatisticsProperties* MeshStatisticsProperties;                        // 0x0300 (size: 0x8)
    class UMeshElementsVisualizer* MeshElementsDisplay;                               // 0x0308 (size: 0x8)
    class UMeshUVChannelProperties* UVChannelProperties;                              // 0x0310 (size: 0x8)
    class UPolygroupLayersProperties* PolygroupLayerProperties;                       // 0x0318 (size: 0x8)
    class UMeshSelectionSet* selection;                                               // 0x0378 (size: 0x8)
    TArray<class AActor*> SpawnedActors;                                              // 0x0380 (size: 0x10)

}; // Size: 0x728

class UMeshSelectionToolActionPropertySet : public UInteractiveToolPropertySet
{
}; // Size: 0xB0

class UMeshSelectionToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{
}; // Size: 0x30

class UMeshSelectionToolProperties : public UInteractiveToolPropertySet
{
    EMeshSelectionToolPrimaryMode SelectionMode;                                      // 0x00A8 (size: 0x4)
    float AngleTolerance;                                                             // 0x00AC (size: 0x4)
    bool bHitBackFaces;                                                               // 0x00B0 (size: 0x1)
    bool bShowPoints;                                                                 // 0x00B1 (size: 0x1)
    EMeshFacesColorMode FaceColorMode;                                                // 0x00B4 (size: 0x4)

}; // Size: 0xB8

class UMeshSpaceDeformerTool : public USingleSelectionMeshEditingTool
{
    class UMeshSpaceDeformerToolProperties* Settings;                                 // 0x00B8 (size: 0x8)
    class UMeshSpaceDeformerToolActionPropertySet* ToolActions;                       // 0x00C0 (size: 0x8)
    class UGizmoTransformChangeStateTarget* StateTarget;                              // 0x00C8 (size: 0x8)
    class UDragAlignmentMechanic* DragAlignmentMechanic;                              // 0x00D0 (size: 0x8)
    class UMeshOpPreviewWithBackgroundCompute* Preview;                               // 0x00D8 (size: 0x8)
    class UPreviewMesh* OriginalMeshPreview;                                          // 0x00F0 (size: 0x8)
    class UIntervalGizmo* IntervalGizmo;                                              // 0x00F8 (size: 0x8)
    class UCombinedTransformGizmo* TransformGizmo;                                    // 0x0100 (size: 0x8)
    class UTransformProxy* TransformProxy;                                            // 0x0108 (size: 0x8)
    class UGizmoLocalFloatParameterSource* UpIntervalSource;                          // 0x0110 (size: 0x8)
    class UGizmoLocalFloatParameterSource* DownIntervalSource;                        // 0x0118 (size: 0x8)
    class UGizmoLocalFloatParameterSource* ForwardIntervalSource;                     // 0x0120 (size: 0x8)

}; // Size: 0x2C0

class UMeshSpaceDeformerToolActionPropertySet : public UInteractiveToolPropertySet
{

    void ShiftToCenter();
}; // Size: 0xB0

class UMeshSpaceDeformerToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
}; // Size: 0x28

class UMeshSpaceDeformerToolProperties : public UInteractiveToolPropertySet
{
    ENonlinearOperationType SelectedOperationType;                                    // 0x00A8 (size: 0x1)
    float UpperBoundsInterval;                                                        // 0x00AC (size: 0x4)
    float LowerBoundsInterval;                                                        // 0x00B0 (size: 0x4)
    float BendDegrees;                                                                // 0x00B4 (size: 0x4)
    float TwistDegrees;                                                               // 0x00B8 (size: 0x4)
    EFlareProfileType FlareProfileType;                                               // 0x00BC (size: 0x1)
    float FlarePercentY;                                                              // 0x00C0 (size: 0x4)
    bool bLockXAndYFlaring;                                                           // 0x00C4 (size: 0x1)
    float FlarePercentX;                                                              // 0x00C8 (size: 0x4)
    bool bLockBottom;                                                                 // 0x00CC (size: 0x1)
    bool bShowOriginalMesh;                                                           // 0x00CD (size: 0x1)
    bool bDrawVisualization;                                                          // 0x00CE (size: 0x1)
    bool bAlignToNormalOnCtrlClick;                                                   // 0x00CF (size: 0x1)

}; // Size: 0xD0

class UMeshStatisticsProperties : public UInteractiveToolPropertySet
{
    FString Mesh;                                                                     // 0x00A8 (size: 0x10)
    FString UV;                                                                       // 0x00B8 (size: 0x10)
    FString Attributes;                                                               // 0x00C8 (size: 0x10)

}; // Size: 0xD8

class UMeshSymmetryProperties : public UInteractiveToolPropertySet
{
    bool bEnableSymmetry;                                                             // 0x00A8 (size: 0x1)
    bool bSymmetryCanBeEnabled;                                                       // 0x00A9 (size: 0x1)

}; // Size: 0xB0

class UMeshVertexPaintTool : public UMeshSculptToolBase
{
    class UPolygroupLayersProperties* PolygroupLayerProperties;                       // 0x0BA8 (size: 0x8)
    class UVertexPaintBasicProperties* BasicProperties;                               // 0x0BB0 (size: 0x8)
    class UVertexPaintBrushFilterProperties* FilterProperties;                        // 0x0BB8 (size: 0x8)
    class UVertexColorPaintBrushOpProps* PaintBrushOpProperties;                      // 0x0BC0 (size: 0x8)
    class UVertexColorPaintBrushOpProps* EraseBrushOpProperties;                      // 0x0BC8 (size: 0x8)
    class UMeshVertexPaintToolQuickActions* QuickActions;                             // 0x0BD0 (size: 0x8)
    class UMeshVertexPaintToolUtilityActions* UtilityActions;                         // 0x0BD8 (size: 0x8)
    class UPolyLassoMarqueeMechanic* PolyLassoMechanic;                               // 0x0BE8 (size: 0x8)
    class AInternalToolFrameworkActor* PreviewMeshActor;                              // 0x0BF0 (size: 0x8)
    class UDynamicMeshComponent* DynamicMeshComponent;                                // 0x0BF8 (size: 0x8)
    class UMeshElementsVisualizer* MeshElementsDisplay;                               // 0x0C00 (size: 0x8)

}; // Size: 0x1140

class UMeshVertexPaintToolActionPropertySet : public UInteractiveToolPropertySet
{
}; // Size: 0xB0

class UMeshVertexPaintToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{
}; // Size: 0x30

class UMeshVertexPaintToolQuickActions : public UMeshVertexPaintToolActionPropertySet
{

    void PaintAll();
    void FillWhite();
    void FillBlack();
    void EraseAll();
}; // Size: 0xB0

class UMeshVertexPaintToolUtilityActions : public UMeshVertexPaintToolActionPropertySet
{
    EMeshVertexPaintToolUtilityOperations Operation;                                  // 0x00B0 (size: 0x4)
    EMeshVertexPaintColorChannel SourceChannel;                                       // 0x00B4 (size: 0x1)
    float SourceValue;                                                                // 0x00B8 (size: 0x4)
    FName WeightMap;                                                                  // 0x00BC (size: 0x8)
    TArray<FString> WeightMapsList;                                                   // 0x00C8 (size: 0x10)
    FModelingToolsColorChannelFilter TargetChannels;                                  // 0x00D8 (size: 0x4)
    EMeshVertexPaintColorChannel TargetChannel;                                       // 0x00DC (size: 0x1)
    bool bCopyToHiRes;                                                                // 0x00DD (size: 0x1)
    FString CopyToLODName;                                                            // 0x00E0 (size: 0x10)
    TArray<FString> LODNamesList;                                                     // 0x00F0 (size: 0x10)

    TArray<FString> GetWeightMapsFunc();
    TArray<FString> GetLODNamesFunc();
    void ApplySelectedOperation();
}; // Size: 0x100

class UMeshVertexSculptTool : public UMeshSculptToolBase
{
    class UVertexBrushSculptProperties* SculptProperties;                             // 0x0BA8 (size: 0x8)
    class UVertexBrushAlphaProperties* AlphaProperties;                               // 0x0BB0 (size: 0x8)
    class UTexture2D* BrushAlpha;                                                     // 0x0BB8 (size: 0x8)
    class UMeshSymmetryProperties* SymmetryProperties;                                // 0x0BC0 (size: 0x8)
    class AInternalToolFrameworkActor* PreviewMeshActor;                              // 0x0BE0 (size: 0x8)
    class UDynamicMeshComponent* DynamicMeshComponent;                                // 0x0BE8 (size: 0x8)

}; // Size: 0x1500

class UMeshVertexSculptToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{
}; // Size: 0x30

class UMirrorOperatorFactory : public UObject
{
    class UMirrorTool* MirrorTool;                                                    // 0x0030 (size: 0x8)

}; // Size: 0x40

class UMirrorTool : public UMultiSelectionMeshEditingTool
{
    class UMirrorToolProperties* Settings;                                            // 0x00C0 (size: 0x8)
    class UCreateMeshObjectTypeProperties* OutputTypeProperties;                      // 0x00C8 (size: 0x8)
    class UOnAcceptHandleSourcesProperties* HandleSourcesProperties;                  // 0x00D0 (size: 0x8)
    class UMirrorToolActionPropertySet* ToolActions;                                  // 0x00D8 (size: 0x8)
    TArray<class UDynamicMeshReplacementChangeTarget*> MeshesToMirror;                // 0x00E0 (size: 0x10)
    TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                      // 0x00F0 (size: 0x10)
    class UConstructionPlaneMechanic* PlaneMechanic;                                  // 0x0130 (size: 0x8)

}; // Size: 0x178

class UMirrorToolActionPropertySet : public UInteractiveToolPropertySet
{
    bool bButtonsOnlyChangeOrientation;                                               // 0x00B0 (size: 0x1)

    void Up();
    void ShiftToCenter();
    void Right();
    void Left();
    void Forward();
    void Down();
    void Backward();
}; // Size: 0xB8

class UMirrorToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
}; // Size: 0x28

class UMirrorToolProperties : public UInteractiveToolPropertySet
{
    EMirrorOperationMode OperationMode;                                               // 0x00A8 (size: 0x1)
    bool bCropAlongMirrorPlaneFirst;                                                  // 0x00A9 (size: 0x1)
    bool bSimplifyAlongCrop;                                                          // 0x00AA (size: 0x1)
    bool bWeldVerticesOnMirrorPlane;                                                  // 0x00AB (size: 0x1)
    double PlaneTolerance;                                                            // 0x00B0 (size: 0x8)
    bool bAllowBowtieVertexCreation;                                                  // 0x00B8 (size: 0x1)
    bool bShowPreview;                                                                // 0x00B9 (size: 0x1)
    EMirrorSaveMode WriteTo;                                                          // 0x00BA (size: 0x1)

}; // Size: 0xC0

class UMoveBrushOpProps : public UMeshSculptBrushOpProps
{
    float Strength;                                                                   // 0x00A8 (size: 0x4)
    float Falloff;                                                                    // 0x00AC (size: 0x4)
    float Depth;                                                                      // 0x00B0 (size: 0x4)
    FModelingToolsAxisFilter AxisFilters;                                             // 0x00B4 (size: 0x3)

}; // Size: 0xB8

class UOffsetMeshSelectionTool : public USingleTargetWithSelectionTool
{
    class UOffsetMeshSelectionToolProperties* OffsetProperties;                       // 0x0120 (size: 0x8)
    class UPreviewMesh* SourcePreview;                                                // 0x0848 (size: 0x8)
    class UMeshOpPreviewWithBackgroundCompute* EditCompute;                           // 0x0850 (size: 0x8)

}; // Size: 0x858

class UOffsetMeshSelectionToolBuilder : public USingleTargetWithSelectionToolBuilder
{
}; // Size: 0x28

class UOffsetMeshSelectionToolProperties : public UInteractiveToolPropertySet
{
    double OffsetDistance;                                                            // 0x00A8 (size: 0x8)
    EOffsetMeshSelectionDirectionMode Direction;                                      // 0x00B0 (size: 0x1)
    int32 NumSubdivisions;                                                            // 0x00B4 (size: 0x4)
    double CreaseAngle;                                                               // 0x00B8 (size: 0x8)
    bool bShellsToSolids;                                                             // 0x00C0 (size: 0x1)
    bool bInferGroupsFromNbrs;                                                        // 0x00C1 (size: 0x1)
    bool bGroupPerSubdivision;                                                        // 0x00C2 (size: 0x1)
    bool bReplaceSelectionGroups;                                                     // 0x00C3 (size: 0x1)
    double UVScale;                                                                   // 0x00C8 (size: 0x8)
    bool bUVIslandPerGroup;                                                           // 0x00D0 (size: 0x1)
    bool bInferMaterialID;                                                            // 0x00D1 (size: 0x1)
    int32 SetMaterialID;                                                              // 0x00D4 (size: 0x4)
    bool bShowInputMaterials;                                                         // 0x00D8 (size: 0x1)

}; // Size: 0xE0

class UOffsetMeshTool : public UBaseMeshProcessingTool
{
    class UOffsetMeshToolProperties* OffsetProperties;                                // 0x0400 (size: 0x8)
    class UIterativeOffsetProperties* IterativeProperties;                            // 0x0408 (size: 0x8)
    class UImplicitOffsetProperties* ImplicitProperties;                              // 0x0410 (size: 0x8)
    class UOffsetWeightMapSetProperties* WeightMapProperties;                         // 0x0418 (size: 0x8)

}; // Size: 0x420

class UOffsetMeshToolBuilder : public UBaseMeshProcessingToolBuilder
{
}; // Size: 0x28

class UOffsetMeshToolProperties : public UInteractiveToolPropertySet
{
    EOffsetMeshToolOffsetType OffsetType;                                             // 0x00A8 (size: 0x1)
    float Distance;                                                                   // 0x00AC (size: 0x4)
    bool bCreateShell;                                                                // 0x00B0 (size: 0x1)

}; // Size: 0xB8

class UOffsetWeightMapSetProperties : public UWeightMapSetProperties
{
    float MinDistance;                                                                // 0x00C8 (size: 0x4)

}; // Size: 0xD0

class UOutputPolygroupLayerProperties : public UInteractiveToolPropertySet
{
    FName GroupLayer;                                                                 // 0x00A8 (size: 0x8)
    TArray<FString> OptionsList;                                                      // 0x00B0 (size: 0x10)
    bool bShowNewLayerName;                                                           // 0x00C0 (size: 0x1)
    FString NewLayerName;                                                             // 0x00C8 (size: 0x10)

    TArray<FString> GetGroupOptionsList();
}; // Size: 0xD8

class UPatternTool : public UMultiSelectionMeshEditingTool
{
    class UPatternToolSettings* Settings;                                             // 0x00B8 (size: 0x8)
    class UPatternTool_BoundingBoxSettings* BoundingBoxSettings;                      // 0x00C0 (size: 0x8)
    class UPatternTool_LinearSettings* LinearSettings;                                // 0x00C8 (size: 0x8)
    class UPatternTool_GridSettings* GridSettings;                                    // 0x00D0 (size: 0x8)
    class UPatternTool_RadialSettings* RadialSettings;                                // 0x00D8 (size: 0x8)
    class UPatternTool_RotationSettings* RotationSettings;                            // 0x00E0 (size: 0x8)
    class UPatternTool_TranslationSettings* TranslationSettings;                      // 0x00E8 (size: 0x8)
    class UPatternTool_ScaleSettings* ScaleSettings;                                  // 0x00F0 (size: 0x8)
    class UPatternTool_OutputSettings* OutputSettings;                                // 0x0150 (size: 0x8)
    class UTransformProxy* PatternGizmoProxy;                                         // 0x01A0 (size: 0x8)
    class UCombinedTransformGizmo* PatternGizmo;                                      // 0x01A8 (size: 0x8)
    class UDragAlignmentMechanic* DragAlignmentMechanic;                              // 0x01C8 (size: 0x8)
    class UConstructionPlaneMechanic* PlaneMechanic;                                  // 0x01D0 (size: 0x8)
    TSet<UPrimitiveComponent*> AllComponents;                                         // 0x03B8 (size: 0x50)
    class UPreviewGeometry* PreviewGeometry;                                          // 0x04A8 (size: 0x8)

}; // Size: 0x4B0

class UPatternToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
}; // Size: 0x30

class UPatternToolSettings : public UInteractiveToolPropertySet
{
    int32 Seed;                                                                       // 0x00A8 (size: 0x4)
    bool bProjectElementsDown;                                                        // 0x00AC (size: 0x1)
    float ProjectionOffset;                                                           // 0x00B0 (size: 0x4)
    bool bHideSources;                                                                // 0x00B4 (size: 0x1)
    bool bUseRelativeTransforms;                                                      // 0x00B5 (size: 0x1)
    bool bRandomlyPickElements;                                                       // 0x00B6 (size: 0x1)
    EPatternToolShape Shape;                                                          // 0x00B7 (size: 0x1)
    EPatternToolSingleAxis SingleAxis;                                                // 0x00B8 (size: 0x1)
    EPatternToolSinglePlane SinglePlane;                                              // 0x00B9 (size: 0x1)

}; // Size: 0xC0

class UPatternTool_BoundingBoxSettings : public UInteractiveToolPropertySet
{
    bool bIgnoreTransforms;                                                           // 0x00A8 (size: 0x1)
    float Adjustment;                                                                 // 0x00AC (size: 0x4)
    bool bVisualize;                                                                  // 0x00B0 (size: 0x1)

}; // Size: 0xB8

class UPatternTool_GridSettings : public UInteractiveToolPropertySet
{
    EPatternToolAxisSpacingMode SpacingX;                                             // 0x00A8 (size: 0x1)
    int32 CountX;                                                                     // 0x00AC (size: 0x4)
    double StepSizeX;                                                                 // 0x00B0 (size: 0x8)
    double ExtentX;                                                                   // 0x00B8 (size: 0x8)
    bool bCenteredX;                                                                  // 0x00C0 (size: 0x1)
    EPatternToolAxisSpacingMode SpacingY;                                             // 0x00C1 (size: 0x1)
    int32 CountY;                                                                     // 0x00C4 (size: 0x4)
    double StepSizeY;                                                                 // 0x00C8 (size: 0x8)
    double ExtentY;                                                                   // 0x00D0 (size: 0x8)
    bool bCenteredY;                                                                  // 0x00D8 (size: 0x1)

}; // Size: 0xE0

class UPatternTool_LinearSettings : public UInteractiveToolPropertySet
{
    EPatternToolAxisSpacingMode SpacingMode;                                          // 0x00A8 (size: 0x1)
    int32 Count;                                                                      // 0x00AC (size: 0x4)
    double StepSize;                                                                  // 0x00B0 (size: 0x8)
    double Extent;                                                                    // 0x00B8 (size: 0x8)
    bool bCentered;                                                                   // 0x00C0 (size: 0x1)

}; // Size: 0xC8

class UPatternTool_OutputSettings : public UInteractiveToolPropertySet
{
    bool bSeparateActors;                                                             // 0x00A8 (size: 0x1)
    bool bConvertToDynamic;                                                           // 0x00A9 (size: 0x1)
    bool bCreateISMCs;                                                                // 0x00AA (size: 0x1)
    bool bHaveStaticMeshes;                                                           // 0x00AB (size: 0x1)
    bool bEnableCreateISMCs;                                                          // 0x00AC (size: 0x1)

}; // Size: 0xB0

class UPatternTool_RadialSettings : public UInteractiveToolPropertySet
{
    EPatternToolAxisSpacingMode SpacingMode;                                          // 0x00A8 (size: 0x1)
    int32 Count;                                                                      // 0x00AC (size: 0x4)
    double StepSize;                                                                  // 0x00B0 (size: 0x8)
    double Radius;                                                                    // 0x00B8 (size: 0x8)
    double StartAngle;                                                                // 0x00C0 (size: 0x8)
    double EndAngle;                                                                  // 0x00C8 (size: 0x8)
    double AngleShift;                                                                // 0x00D0 (size: 0x8)
    bool bOriented;                                                                   // 0x00D8 (size: 0x1)

}; // Size: 0xE0

class UPatternTool_RotationSettings : public UInteractiveToolPropertySet
{
    bool bInterpolate;                                                                // 0x00A8 (size: 0x1)
    bool bJitter;                                                                     // 0x00A9 (size: 0x1)
    FRotator StartRotation;                                                           // 0x00B0 (size: 0x18)
    FRotator endRotation;                                                             // 0x00C8 (size: 0x18)
    FRotator Jitter;                                                                  // 0x00E0 (size: 0x18)

}; // Size: 0xF8

class UPatternTool_ScaleSettings : public UInteractiveToolPropertySet
{
    bool bProportional;                                                               // 0x00A8 (size: 0x1)
    bool bInterpolate;                                                                // 0x00A9 (size: 0x1)
    bool bJitter;                                                                     // 0x00AA (size: 0x1)
    FVector StartScale;                                                               // 0x00B0 (size: 0x18)
    FVector EndScale;                                                                 // 0x00C8 (size: 0x18)
    FVector Jitter;                                                                   // 0x00E0 (size: 0x18)

}; // Size: 0xF8

class UPatternTool_TranslationSettings : public UInteractiveToolPropertySet
{
    bool bInterpolate;                                                                // 0x00A8 (size: 0x1)
    bool bJitter;                                                                     // 0x00A9 (size: 0x1)
    FVector StartTranslation;                                                         // 0x00B0 (size: 0x18)
    FVector EndTranslation;                                                           // 0x00C8 (size: 0x18)
    FVector Jitter;                                                                   // 0x00E0 (size: 0x18)

}; // Size: 0xF8

class UPhysicsInspectorTool : public UMultiSelectionMeshEditingTool
{
    class UCollisionGeometryVisualizationProperties* VizSettings;                     // 0x00C0 (size: 0x8)
    TArray<class UPhysicsObjectToolPropertySet*> ObjectData;                          // 0x00C8 (size: 0x10)
    TArray<class UPreviewGeometry*> PreviewElements;                                  // 0x00D8 (size: 0x10)

}; // Size: 0xF8

class UPhysicsInspectorToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
}; // Size: 0x28

class UPhysicsObjectToolPropertySet : public UInteractiveToolPropertySet
{
    FString ObjectName;                                                               // 0x00A8 (size: 0x10)
    ECollisionGeometryMode CollisionType;                                             // 0x00B8 (size: 0x4)
    TArray<FPhysicsSphereData> Spheres;                                               // 0x00C0 (size: 0x10)
    TArray<FPhysicsBoxData> Boxes;                                                    // 0x00D0 (size: 0x10)
    TArray<FPhysicsCapsuleData> Capsules;                                             // 0x00E0 (size: 0x10)
    TArray<FPhysicsConvexData> Convexes;                                              // 0x00F0 (size: 0x10)
    TArray<FPhysicsLevelSetData> LevelSets;                                           // 0x0100 (size: 0x10)

}; // Size: 0x110

class UPinchBrushOpProps : public UMeshSculptBrushOpProps
{
    float Strength;                                                                   // 0x00A8 (size: 0x4)
    float Falloff;                                                                    // 0x00AC (size: 0x4)
    float Depth;                                                                      // 0x00B0 (size: 0x4)
    bool bPerpDamping;                                                                // 0x00B4 (size: 0x1)

}; // Size: 0xB8

class UPlaneBrushOpProps : public UBasePlaneBrushOpProps
{
    float Strength;                                                                   // 0x00A8 (size: 0x4)
    float Falloff;                                                                    // 0x00AC (size: 0x4)
    float Depth;                                                                      // 0x00B0 (size: 0x4)
    EPlaneBrushSideMode WhichSide;                                                    // 0x00B4 (size: 0x1)

}; // Size: 0xB8

class UPlaneCutOperatorFactory : public UObject
{
    class UPlaneCutTool* CutTool;                                                     // 0x0030 (size: 0x8)

}; // Size: 0x40

class UPlaneCutTool : public UMultiSelectionMeshEditingTool
{
    class UPlaneCutToolProperties* BasicProperties;                                   // 0x00B8 (size: 0x8)
    TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                      // 0x00C0 (size: 0x10)
    TArray<class UDynamicMeshReplacementChangeTarget*> MeshesToCut;                   // 0x00D0 (size: 0x10)
    class UConstructionPlaneMechanic* PlaneMechanic;                                  // 0x00E0 (size: 0x8)

    void FlipPlane();
    void Cut();
}; // Size: 0x190

class UPlaneCutToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
}; // Size: 0x28

class UPlaneCutToolProperties : public UInteractiveToolPropertySet
{
    bool bKeepBothHalves;                                                             // 0x00A8 (size: 0x1)
    float SpacingBetweenHalves;                                                       // 0x00AC (size: 0x4)
    bool bExportSeparatedPiecesAsNewMeshAssets;                                       // 0x00B0 (size: 0x1)
    bool bShowPreview;                                                                // 0x00B1 (size: 0x1)
    bool bFillCutHole;                                                                // 0x00B2 (size: 0x1)
    bool bFillSpans;                                                                  // 0x00B3 (size: 0x1)
    bool bSimplifyAlongCut;                                                           // 0x00B4 (size: 0x1)

}; // Size: 0xB8

class UProjectToTargetTool : public URemeshMeshTool
{
}; // Size: 0x118

class UProjectToTargetToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
}; // Size: 0x28

class UProjectToTargetToolProperties : public URemeshMeshToolProperties
{
    bool bWorldSpace;                                                                 // 0x00E0 (size: 0x1)
    bool bParallel;                                                                   // 0x00E1 (size: 0x1)
    int32 FaceProjectionPassesPerRemeshIteration;                                     // 0x00E4 (size: 0x4)
    float SurfaceProjectionSpeed;                                                     // 0x00E8 (size: 0x4)
    float NormalAlignmentSpeed;                                                       // 0x00EC (size: 0x4)
    bool bSmoothInFillAreas;                                                          // 0x00F0 (size: 0x1)
    float FillAreaDistanceMultiplier;                                                 // 0x00F4 (size: 0x4)
    float FillAreaSmoothMultiplier;                                                   // 0x00F8 (size: 0x4)

}; // Size: 0x100

class UPullKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{
    float Falloff;                                                                    // 0x00B8 (size: 0x4)
    float Depth;                                                                      // 0x00BC (size: 0x4)

}; // Size: 0xC0

class URemeshMeshTool : public UMultiSelectionMeshEditingTool
{
    class URemeshMeshToolProperties* BasicProperties;                                 // 0x00C0 (size: 0x8)
    class UMeshStatisticsProperties* MeshStatisticsProperties;                        // 0x00C8 (size: 0x8)
    class UMeshOpPreviewWithBackgroundCompute* Preview;                               // 0x00D0 (size: 0x8)
    class UMeshElementsVisualizer* MeshElementsDisplay;                               // 0x00D8 (size: 0x8)

}; // Size: 0x108

class URemeshMeshToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
}; // Size: 0x28

class URemeshMeshToolProperties : public URemeshProperties
{
    int32 TargetTriangleCount;                                                        // 0x00B8 (size: 0x4)
    ERemeshSmoothingType SmoothingType;                                               // 0x00BC (size: 0x1)
    bool bDiscardAttributes;                                                          // 0x00BD (size: 0x1)
    bool bShowGroupColors;                                                            // 0x00BE (size: 0x1)
    ERemeshType RemeshType;                                                           // 0x00BF (size: 0x1)
    int32 RemeshIterations;                                                           // 0x00C0 (size: 0x4)
    int32 MaxRemeshIterations;                                                        // 0x00C4 (size: 0x4)
    int32 ExtraProjectionIterations;                                                  // 0x00C8 (size: 0x4)
    bool bUseTargetEdgeLength;                                                        // 0x00CC (size: 0x1)
    float TargetEdgeLength;                                                           // 0x00D0 (size: 0x4)
    bool bReproject;                                                                  // 0x00D4 (size: 0x1)
    bool bReprojectConstraints;                                                       // 0x00D5 (size: 0x1)
    float BoundaryCornerAngleThreshold;                                               // 0x00D8 (size: 0x4)

}; // Size: 0xE0

class URemeshProperties : public UMeshConstraintProperties
{
    float SmoothingStrength;                                                          // 0x00B0 (size: 0x4)
    bool bFlips;                                                                      // 0x00B4 (size: 0x1)
    bool bSplits;                                                                     // 0x00B5 (size: 0x1)
    bool bCollapses;                                                                  // 0x00B6 (size: 0x1)

}; // Size: 0xB8

class URemoveOccludedTrianglesAdvancedProperties : public UInteractiveToolPropertySet
{
}; // Size: 0xB0

class URemoveOccludedTrianglesOperatorFactory : public UObject
{
    class URemoveOccludedTrianglesTool* Tool;                                         // 0x0030 (size: 0x8)

}; // Size: 0x40

class URemoveOccludedTrianglesTool : public UMultiSelectionMeshEditingTool
{
    class URemoveOccludedTrianglesToolProperties* BasicProperties;                    // 0x00B8 (size: 0x8)
    class UPolygroupLayersProperties* PolygroupLayersProperties;                      // 0x00C0 (size: 0x8)
    class URemoveOccludedTrianglesAdvancedProperties* AdvancedProperties;             // 0x00C8 (size: 0x8)
    TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                      // 0x00D0 (size: 0x10)
    TArray<class UPreviewMesh*> PreviewCopies;                                        // 0x00E0 (size: 0x10)

}; // Size: 0x1D0

class URemoveOccludedTrianglesToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
}; // Size: 0x28

class URemoveOccludedTrianglesToolProperties : public UInteractiveToolPropertySet
{
    EOcclusionCalculationUIMode OcclusionTestMethod;                                  // 0x00A8 (size: 0x1)
    EOcclusionTriangleSamplingUIMode TriangleSampling;                                // 0x00A9 (size: 0x1)
    double WindingIsoValue;                                                           // 0x00B0 (size: 0x8)
    int32 AddRandomRays;                                                              // 0x00B8 (size: 0x4)
    int32 AddTriangleSamples;                                                         // 0x00BC (size: 0x4)
    bool bOnlySelfOcclude;                                                            // 0x00C0 (size: 0x1)
    int32 ShrinkRemoval;                                                              // 0x00C4 (size: 0x4)
    double MinAreaIsland;                                                             // 0x00C8 (size: 0x8)
    int32 MinTriCountIsland;                                                          // 0x00D0 (size: 0x4)
    EOccludedAction Action;                                                           // 0x00D4 (size: 0x1)

}; // Size: 0xD8

class URevolveBoundaryOperatorFactory : public UObject
{
    class URevolveBoundaryTool* RevolveBoundaryTool;                                  // 0x0030 (size: 0x8)

}; // Size: 0x38

class URevolveBoundaryTool : public UMeshBoundaryToolBase
{
    class UCreateMeshObjectTypeProperties* OutputTypeProperties;                      // 0x01B8 (size: 0x8)
    class URevolveBoundaryToolProperties* Settings;                                   // 0x01C0 (size: 0x8)
    class UNewMeshMaterialProperties* MaterialProperties;                             // 0x01C8 (size: 0x8)
    class UConstructionPlaneMechanic* PlaneMechanic;                                  // 0x01D0 (size: 0x8)
    class UMeshOpPreviewWithBackgroundCompute* Preview;                               // 0x01D8 (size: 0x8)

}; // Size: 0x210

class URevolveBoundaryToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
}; // Size: 0x28

class URevolveBoundaryToolProperties : public URevolveProperties
{
    ERevolvePropertiesCapFillMode CapFillMode;                                        // 0x0118 (size: 0x1)
    bool bDisplayInputMesh;                                                           // 0x0119 (size: 0x1)
    FVector AxisOrigin;                                                               // 0x0120 (size: 0x18)
    FVector2D AxisOrientation;                                                        // 0x0138 (size: 0x10)

}; // Size: 0x148

class URevolveSplineTool : public UInteractiveTool
{
    class URevolveSplineToolProperties* Settings;                                     // 0x00A8 (size: 0x8)
    class UNewMeshMaterialProperties* MaterialProperties;                             // 0x00B0 (size: 0x8)
    class UCreateMeshObjectTypeProperties* OutputTypeProperties;                      // 0x00B8 (size: 0x8)
    class URevolveSplineToolActionPropertySet* ToolActions;                           // 0x00C0 (size: 0x8)
    class UMeshOpPreviewWithBackgroundCompute* Preview;                               // 0x00C8 (size: 0x8)
    class UConstructionPlaneMechanic* PlaneMechanic;                                  // 0x00D0 (size: 0x8)

}; // Size: 0x178

class URevolveSplineToolActionPropertySet : public UInteractiveToolPropertySet
{

    void ResetAxis();
}; // Size: 0xB0

class URevolveSplineToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x28

class URevolveSplineToolProperties : public URevolveProperties
{
    ERevolveSplineSampleMode SampleMode;                                              // 0x0118 (size: 0x1)
    double ErrorTolerance;                                                            // 0x0120 (size: 0x8)
    double MaxSampleDistance;                                                         // 0x0128 (size: 0x8)
    ERevolvePropertiesCapFillMode CapFillMode;                                        // 0x0130 (size: 0x1)
    bool bClosePathToAxis;                                                            // 0x0131 (size: 0x1)
    FVector AxisOrigin;                                                               // 0x0138 (size: 0x18)
    FVector2D AxisOrientation;                                                        // 0x0150 (size: 0x10)
    bool bResetAxisOnStart;                                                           // 0x0160 (size: 0x1)

}; // Size: 0x168

class UScaleKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{
    float Strength;                                                                   // 0x00B8 (size: 0x4)
    float Falloff;                                                                    // 0x00BC (size: 0x4)

}; // Size: 0xC0

class USculptBrushProperties : public UInteractiveToolPropertySet
{
    FBrushToolRadius BrushSize;                                                       // 0x00A8 (size: 0x14)
    float BrushFalloffAmount;                                                         // 0x00BC (size: 0x4)
    bool bShowFalloff;                                                                // 0x00C0 (size: 0x1)
    float Depth;                                                                      // 0x00C4 (size: 0x4)
    bool bHitBackFaces;                                                               // 0x00C8 (size: 0x1)
    float FlowRate;                                                                   // 0x00CC (size: 0x4)
    float spacing;                                                                    // 0x00D0 (size: 0x4)
    float Lazyness;                                                                   // 0x00D4 (size: 0x4)
    bool bShowPerBrushProps;                                                          // 0x00D8 (size: 0x1)
    bool bShowLazyness;                                                               // 0x00D9 (size: 0x1)
    bool bShowFlowRate;                                                               // 0x00DA (size: 0x1)
    bool bShowSpacing;                                                                // 0x00DB (size: 0x1)

}; // Size: 0xE0

class USculptMaxBrushOpProps : public UMeshSculptBrushOpProps
{
    float Strength;                                                                   // 0x00A8 (size: 0x4)
    float Falloff;                                                                    // 0x00AC (size: 0x4)
    float MaxHeight;                                                                  // 0x00B0 (size: 0x4)
    bool bUseFixedHeight;                                                             // 0x00B4 (size: 0x1)
    float FixedHeight;                                                                // 0x00B8 (size: 0x4)

}; // Size: 0xC0

class USculptMaxBrushProperties : public UInteractiveToolPropertySet
{
    float MaxHeight;                                                                  // 0x00A8 (size: 0x4)
    bool bFreezeCurrentHeight;                                                        // 0x00AC (size: 0x1)

}; // Size: 0xB0

class USeamSculptTool : public UDynamicMeshBrushTool
{
    class USeamSculptToolProperties* Settings;                                        // 0x02E8 (size: 0x8)
    class UPreviewGeometry* PreviewGeom;                                              // 0x02F0 (size: 0x8)

}; // Size: 0x3E0

class USeamSculptToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{
}; // Size: 0x30

class USeamSculptToolProperties : public UInteractiveToolPropertySet
{
    bool bShowWireframe;                                                              // 0x00A8 (size: 0x1)
    bool bHitBackFaces;                                                               // 0x00A9 (size: 0x1)

}; // Size: 0xB0

class USecondarySmoothBrushOpProps : public UBaseSmoothBrushOpProps
{
    float Strength;                                                                   // 0x00A8 (size: 0x4)
    float Falloff;                                                                    // 0x00AC (size: 0x4)
    bool bPreserveUVFlow;                                                             // 0x00B0 (size: 0x1)

}; // Size: 0xB8

class USelectiveTessellationProperties : public UInteractiveToolPropertySet
{
    EDisplaceMeshToolTriangleSelectionType SelectionType;                             // 0x00A8 (size: 0x1)
    FName ActiveMaterial;                                                             // 0x00AC (size: 0x8)
    TArray<FString> MaterialIDList;                                                   // 0x00B8 (size: 0x10)

    TArray<FString> GetMaterialIDsFunc();
}; // Size: 0xC8

class USelfUnionMeshesTool : public UBaseCreateFromSelectedTool
{
    class USelfUnionMeshesToolProperties* Properties;                                 // 0x0108 (size: 0x8)
    class ULineSetComponent* DrawnLineSet;                                            // 0x0110 (size: 0x8)

}; // Size: 0x150

class USelfUnionMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
}; // Size: 0x28

class USelfUnionMeshesToolProperties : public UInteractiveToolPropertySet
{
    bool bTrimFlaps;                                                                  // 0x00A8 (size: 0x1)
    bool bTryFixHoles;                                                                // 0x00A9 (size: 0x1)
    bool bTryCollapseEdges;                                                           // 0x00AA (size: 0x1)
    float WindingThreshold;                                                           // 0x00AC (size: 0x4)
    bool bShowNewBoundaryEdges;                                                       // 0x00B0 (size: 0x1)
    bool bOnlyUseFirstMeshMaterials;                                                  // 0x00B1 (size: 0x1)

}; // Size: 0xB8

class USetCollisionGeometryTool : public UMultiSelectionMeshEditingTool
{
    class USetCollisionGeometryToolProperties* Settings;                              // 0x00C8 (size: 0x8)
    class UPolygroupLayersProperties* PolygroupLayerProperties;                       // 0x00D0 (size: 0x8)
    class UCollisionGeometryVisualizationProperties* VizSettings;                     // 0x00D8 (size: 0x8)
    class UPhysicsObjectToolPropertySet* CollisionProps;                              // 0x00E0 (size: 0x8)
    class UPreviewGeometry* PreviewGeom;                                              // 0x00F0 (size: 0x8)
    class UGeometrySelectionVisualizationProperties* GeometrySelectionVizProperties;  // 0x0370 (size: 0x8)
    class UPreviewGeometry* GeometrySelectionViz;                                     // 0x0378 (size: 0x8)

}; // Size: 0x380

class USetCollisionGeometryToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
}; // Size: 0x28

class USetCollisionGeometryToolProperties : public UInteractiveToolPropertySet
{
    ECollisionGeometryType GeometryType;                                              // 0x00A8 (size: 0x4)
    bool bAppendToExisting;                                                           // 0x00AC (size: 0x1)
    bool bUseWorldSpace;                                                              // 0x00AD (size: 0x1)
    ESetCollisionGeometryInputMode InputMode;                                         // 0x00B0 (size: 0x4)
    bool bRemoveContained;                                                            // 0x00B4 (size: 0x1)
    bool bEnableMaxCount;                                                             // 0x00B5 (size: 0x1)
    int32 MaxCount;                                                                   // 0x00B8 (size: 0x4)
    float MinThickness;                                                               // 0x00BC (size: 0x4)
    bool bDetectBoxes;                                                                // 0x00C0 (size: 0x1)
    bool bDetectSpheres;                                                              // 0x00C1 (size: 0x1)
    bool bDetectCapsules;                                                             // 0x00C2 (size: 0x1)
    bool bMergeCollisionShapes;                                                       // 0x00C3 (size: 0x1)
    int32 MergeAboveCount;                                                            // 0x00C4 (size: 0x4)
    bool bUseNegativeSpaceInMerge;                                                    // 0x00C8 (size: 0x1)
    bool bSimplifyHulls;                                                              // 0x00C9 (size: 0x1)
    int32 HullTargetFaceCount;                                                        // 0x00CC (size: 0x4)
    int32 MaxHullsPerMesh;                                                            // 0x00D0 (size: 0x4)
    float ConvexDecompositionSearchFactor;                                            // 0x00D4 (size: 0x4)
    float AddHullsErrorTolerance;                                                     // 0x00D8 (size: 0x4)
    float MinPartThickness;                                                           // 0x00DC (size: 0x4)
    bool bUseNegativeSpaceInDecomposition;                                            // 0x00E0 (size: 0x1)
    double NegativeSpaceTolerance;                                                    // 0x00E8 (size: 0x8)
    double NegativeSpaceMinRadius;                                                    // 0x00F0 (size: 0x8)
    bool bIgnoreInternalNegativeSpace;                                                // 0x00F8 (size: 0x1)
    float HullTolerance;                                                              // 0x00FC (size: 0x4)
    EProjectedHullAxis SweepAxis;                                                     // 0x0100 (size: 0x4)
    int32 LevelSetResolution;                                                         // 0x0104 (size: 0x4)
    ECollisionGeometryMode SetCollisionType;                                          // 0x0108 (size: 0x4)
    bool bShowTargetMesh;                                                             // 0x010C (size: 0x1)
    bool bUsingMultipleInputs;                                                        // 0x010D (size: 0x1)

}; // Size: 0x110

class USharpPullKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{
    float Falloff;                                                                    // 0x00B8 (size: 0x4)
    float Depth;                                                                      // 0x00BC (size: 0x4)

}; // Size: 0xC0

class USimpleCollisionEditorTool : public USingleSelectionMeshEditingTool
{
    class USimpleCollisionEditorToolActionProperties* ActionProperties;               // 0x00B8 (size: 0x8)

}; // Size: 0xE0

class USimpleCollisionEditorToolActionProperties : public UInteractiveToolPropertySet
{

    void Duplicate();
    void DeleteAll();
    void Delete();
    void AddSphere();
    void AddCapsule();
    void AddBox();
}; // Size: 0xB0

class USimpleCollisionEditorToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
}; // Size: 0x28

class USmoothBrushOpProps : public UBaseSmoothBrushOpProps
{
    float Strength;                                                                   // 0x00A8 (size: 0x4)
    float Falloff;                                                                    // 0x00AC (size: 0x4)
    bool bPreserveUVFlow;                                                             // 0x00B0 (size: 0x1)

}; // Size: 0xB8

class USmoothFillBrushOpProps : public UBaseSmoothBrushOpProps
{
    float Strength;                                                                   // 0x00A8 (size: 0x4)
    float Falloff;                                                                    // 0x00AC (size: 0x4)
    bool bPreserveUVFlow;                                                             // 0x00B0 (size: 0x1)

}; // Size: 0xB8

class USmoothHoleFillProperties : public UInteractiveToolPropertySet
{
    bool bConstrainToHoleInterior;                                                    // 0x00A8 (size: 0x1)
    int32 RemeshingExteriorRegionWidth;                                               // 0x00AC (size: 0x4)
    int32 SmoothingExteriorRegionWidth;                                               // 0x00B0 (size: 0x4)
    int32 SmoothingInteriorRegionWidth;                                               // 0x00B4 (size: 0x4)
    float InteriorSmoothness;                                                         // 0x00B8 (size: 0x4)
    double FillDensityScalar;                                                         // 0x00C0 (size: 0x8)
    bool bProjectDuringRemesh;                                                        // 0x00C8 (size: 0x1)

}; // Size: 0xD0

class USmoothMeshTool : public UBaseMeshProcessingTool
{
    class USmoothMeshToolProperties* SmoothProperties;                                // 0x0408 (size: 0x8)
    class UIterativeSmoothProperties* IterativeProperties;                            // 0x0410 (size: 0x8)
    class UDiffusionSmoothProperties* DiffusionProperties;                            // 0x0418 (size: 0x8)
    class UImplicitSmoothProperties* ImplicitProperties;                              // 0x0420 (size: 0x8)
    class USmoothWeightMapSetProperties* WeightMapProperties;                         // 0x0428 (size: 0x8)

}; // Size: 0x430

class USmoothMeshToolBuilder : public UBaseMeshProcessingToolBuilder
{
}; // Size: 0x28

class USmoothMeshToolProperties : public UInteractiveToolPropertySet
{
    ESmoothMeshToolSmoothType SmoothingType;                                          // 0x00A8 (size: 0x1)

}; // Size: 0xB0

class USmoothWeightMapSetProperties : public UWeightMapSetProperties
{
    float MinSmoothMultiplier;                                                        // 0x00C8 (size: 0x4)

}; // Size: 0xD0

class USpaceDeformerOperatorFactory : public UObject
{
    class UMeshSpaceDeformerTool* SpaceDeformerTool;                                  // 0x0030 (size: 0x8)

}; // Size: 0x38

class USplitMeshesTool : public UMultiSelectionMeshEditingTool
{
    class USplitMeshesToolProperties* BasicProperties;                                // 0x00B8 (size: 0x8)
    class UCreateMeshObjectTypeProperties* OutputTypeProperties;                      // 0x00C0 (size: 0x8)

}; // Size: 0xF0

class USplitMeshesToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
}; // Size: 0x28

class USplitMeshesToolProperties : public UInteractiveToolPropertySet
{
    bool bTransferMaterials;                                                          // 0x00A8 (size: 0x1)

}; // Size: 0xB0

class UStandardSculptBrushOpProps : public UMeshSculptBrushOpProps
{
    float Strength;                                                                   // 0x00A8 (size: 0x4)
    float Falloff;                                                                    // 0x00AC (size: 0x4)

}; // Size: 0xB0

class UTransferMeshTool : public UMultiSelectionMeshEditingTool
{
    class UTransferMeshToolProperties* BasicProperties;                               // 0x00C0 (size: 0x8)

}; // Size: 0xC8

class UTransferMeshToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
}; // Size: 0x28

class UTransferMeshToolProperties : public UInteractiveToolPropertySet
{
    bool bTransferMaterials;                                                          // 0x00A8 (size: 0x1)
    bool bTransferCollision;                                                          // 0x00A9 (size: 0x1)
    FString SourceLOD;                                                                // 0x00B0 (size: 0x10)
    FString TargetLod;                                                                // 0x00C0 (size: 0x10)
    bool bIsStaticMeshSource;                                                         // 0x00D0 (size: 0x1)
    TArray<FString> SourceLODNamesList;                                               // 0x00D8 (size: 0x10)
    TArray<FString> TargetLODNamesList;                                               // 0x00F8 (size: 0x10)
    bool bIsStaticMeshTarget;                                                         // 0x0118 (size: 0x1)

    TArray<FString> GetTargetLODNamesFunc();
    TArray<FString> GetSourceLODNamesFunc();
}; // Size: 0x120

class UTransformMeshesTool : public UMultiSelectionMeshEditingTool
{
    class UTransformMeshesToolProperties* TransformProps;                             // 0x00C8 (size: 0x8)
    TArray<FTransformMeshesTarget> ActiveGizmos;                                      // 0x00D0 (size: 0x10)
    class UDragAlignmentMechanic* DragAlignmentMechanic;                              // 0x00E0 (size: 0x8)

}; // Size: 0x1A0

class UTransformMeshesToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
}; // Size: 0x28

class UTransformMeshesToolProperties : public UInteractiveToolPropertySet
{
    ETransformMeshesTransformMode TransformMode;                                      // 0x00A8 (size: 0x1)
    bool bApplyToInstances;                                                           // 0x00A9 (size: 0x1)
    bool bSetPivotMode;                                                               // 0x00AA (size: 0x1)
    bool bEnableSnapDragging;                                                         // 0x00AB (size: 0x1)
    ETransformMeshesSnapDragSource SnapDragSource;                                    // 0x00AC (size: 0x1)
    ETransformMeshesSnapDragRotationMode RotationMode;                                // 0x00AD (size: 0x1)
    bool bHaveInstances;                                                              // 0x00AE (size: 0x1)

}; // Size: 0xB0

class UTriangulateSplinesTool : public UInteractiveTool
{
    class UTriangulateSplinesToolProperties* TriangulateProperties;                   // 0x00A8 (size: 0x8)
    class UCreateMeshObjectTypeProperties* OutputTypeProperties;                      // 0x00B0 (size: 0x8)
    class UMeshOpPreviewWithBackgroundCompute* Preview;                               // 0x00B8 (size: 0x8)
    TWeakObjectPtr<class UWorld> TargetWorld;                                         // 0x00C0 (size: 0x8)
    TArray<TWeakObjectPtr<AActor>> ActorsWithSplines;                                 // 0x00C8 (size: 0x10)

}; // Size: 0xF8

class UTriangulateSplinesToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x28

class UTriangulateSplinesToolProperties : public UInteractiveToolPropertySet
{
    double ErrorTolerance;                                                            // 0x00A8 (size: 0x8)
    EFlattenCurveMethod FlattenMethod;                                                // 0x00B0 (size: 0x1)
    ECombineCurvesMethod CombineMethod;                                               // 0x00B1 (size: 0x1)
    double Thickness;                                                                 // 0x00B8 (size: 0x8)
    bool bFlipResult;                                                                 // 0x00C0 (size: 0x1)
    EOffsetOpenCurvesMethod OpenCurves;                                               // 0x00C1 (size: 0x1)
    double CurveOffset;                                                               // 0x00C8 (size: 0x8)
    EOffsetClosedCurvesMethod OffsetClosedCurves;                                     // 0x00D0 (size: 0x1)
    EOpenCurveEndShapes EndShapes;                                                    // 0x00D1 (size: 0x1)
    EOffsetJoinMethod JoinMethod;                                                     // 0x00D2 (size: 0x1)
    double MiterLimit;                                                                // 0x00D8 (size: 0x8)

}; // Size: 0xE0

class UTwistKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{
    float Strength;                                                                   // 0x00B8 (size: 0x4)
    float Falloff;                                                                    // 0x00BC (size: 0x4)

}; // Size: 0xC0

class UVertexBrushAlphaProperties : public UInteractiveToolPropertySet
{
    class UTexture2D* Alpha;                                                          // 0x00A8 (size: 0x8)
    float RotationAngle;                                                              // 0x00B0 (size: 0x4)
    bool bRandomize;                                                                  // 0x00B4 (size: 0x1)
    float RandomRange;                                                                // 0x00B8 (size: 0x4)
    TWeakObjectPtr<class UMeshVertexSculptTool> Tool;                                 // 0x00BC (size: 0x8)

}; // Size: 0xC8

class UVertexBrushSculptProperties : public UInteractiveToolPropertySet
{
    EMeshVertexSculptBrushType PrimaryBrushType;                                      // 0x00A8 (size: 0x1)
    EMeshSculptFalloffType PrimaryFalloffType;                                        // 0x00A9 (size: 0x1)
    EMeshVertexSculptBrushFilterType BrushFilter;                                     // 0x00AA (size: 0x1)
    bool bFreezeTarget;                                                               // 0x00AB (size: 0x1)
    TWeakObjectPtr<class UMeshVertexSculptTool> Tool;                                 // 0x00AC (size: 0x8)

}; // Size: 0xB8

class UVertexColorBaseBrushOpProps : public UMeshSculptBrushOpProps
{
    float Strength;                                                                   // 0x00A8 (size: 0x4)
    float Falloff;                                                                    // 0x00AC (size: 0x4)
    EVertexColorPaintBrushOpBlendMode BlendMode;                                      // 0x00B0 (size: 0x4)
    bool bApplyFalloff;                                                               // 0x00B4 (size: 0x1)

}; // Size: 0xB8

class UVertexColorPaintBrushOpProps : public UVertexColorBaseBrushOpProps
{
    FLinearColor Color;                                                               // 0x00B8 (size: 0x10)

}; // Size: 0xC8

class UVertexColorSmoothBrushOpProps : public UVertexColorBaseBrushOpProps
{
}; // Size: 0xB8

class UVertexColorSoftenBrushOpProps : public UVertexColorBaseBrushOpProps
{
}; // Size: 0xB8

class UVertexPaintBasicProperties : public UInteractiveToolPropertySet
{
    EMeshVertexPaintBrushType PrimaryBrushType;                                       // 0x00A8 (size: 0x1)
    EMeshVertexPaintInteractionType SubToolType;                                      // 0x00A9 (size: 0x1)
    FLinearColor PaintColor;                                                          // 0x00AC (size: 0x10)
    EMeshVertexPaintColorBlendMode BlendMode;                                         // 0x00BC (size: 0x1)
    EMeshVertexPaintSecondaryActionType SecondaryActionType;                          // 0x00BD (size: 0x1)
    FLinearColor EraseColor;                                                          // 0x00C0 (size: 0x10)
    float SmoothStrength;                                                             // 0x00D0 (size: 0x4)
    FModelingToolsColorChannelFilter ChannelFilter;                                   // 0x00D4 (size: 0x4)
    bool bHardEdges;                                                                  // 0x00D8 (size: 0x1)

}; // Size: 0xE0

class UVertexPaintBrushFilterProperties : public UInteractiveToolPropertySet
{
    EMeshVertexPaintBrushAreaType BrushAreaMode;                                      // 0x00A8 (size: 0x1)
    float AngleThreshold;                                                             // 0x00AC (size: 0x4)
    bool bUVSeams;                                                                    // 0x00B0 (size: 0x1)
    bool bNormalSeams;                                                                // 0x00B1 (size: 0x1)
    EMeshVertexPaintVisibilityType VisibilityFilter;                                  // 0x00B2 (size: 0x1)
    int32 MinTriVertCount;                                                            // 0x00B4 (size: 0x4)
    EMeshVertexPaintMaterialMode MaterialMode;                                        // 0x00B8 (size: 0x1)
    bool bShowHitColor;                                                               // 0x00B9 (size: 0x1)
    EMeshVertexPaintInteractionType CurrentSubToolType;                               // 0x00BA (size: 0x1)

}; // Size: 0xC0

class UViewAlignedPlaneBrushOpProps : public UBasePlaneBrushOpProps
{
    float Strength;                                                                   // 0x00A8 (size: 0x4)
    float Falloff;                                                                    // 0x00AC (size: 0x4)
    float Depth;                                                                      // 0x00B0 (size: 0x4)
    EPlaneBrushSideMode WhichSide;                                                    // 0x00B4 (size: 0x1)

}; // Size: 0xB8

class UViewAlignedSculptBrushOpProps : public UMeshSculptBrushOpProps
{
    float Strength;                                                                   // 0x00A8 (size: 0x4)
    float Falloff;                                                                    // 0x00AC (size: 0x4)

}; // Size: 0xB0

class UVolumeToMeshTool : public UInteractiveTool
{
    class UVolumeToMeshToolProperties* Settings;                                      // 0x0098 (size: 0x8)
    class UCreateMeshObjectTypeProperties* OutputTypeProperties;                      // 0x00A0 (size: 0x8)
    class UPreviewMesh* PreviewMesh;                                                  // 0x00A8 (size: 0x8)
    TLazyObjectPtr<class AVolume> TargetVolume;                                       // 0x00B0 (size: 0x18)
    class ULineSetComponent* VolumeEdgesSet;                                          // 0x00C8 (size: 0x8)

}; // Size: 0x300

class UVolumeToMeshToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x28

class UVolumeToMeshToolProperties : public UInteractiveToolPropertySet
{
    bool bWeldEdges;                                                                  // 0x00A8 (size: 0x1)
    bool bAutoRepair;                                                                 // 0x00A9 (size: 0x1)
    bool bOptimizeMesh;                                                               // 0x00AA (size: 0x1)
    bool bShowWireframe;                                                              // 0x00AB (size: 0x1)

}; // Size: 0xB0

class UVoxelBlendMeshesTool : public UBaseVoxelTool
{
    class UVoxelBlendMeshesToolProperties* BlendProperties;                           // 0x0120 (size: 0x8)

}; // Size: 0x128

class UVoxelBlendMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
}; // Size: 0x28

class UVoxelBlendMeshesToolProperties : public UInteractiveToolPropertySet
{
    double BlendPower;                                                                // 0x00A8 (size: 0x8)
    double BlendFalloff;                                                              // 0x00B0 (size: 0x8)
    EVoxelBlendOperation Operation;                                                   // 0x00B8 (size: 0x1)
    bool bVoxWrap;                                                                    // 0x00B9 (size: 0x1)
    bool bRemoveInternalsAfterVoxWrap;                                                // 0x00BA (size: 0x1)
    double ThickenShells;                                                             // 0x00C0 (size: 0x8)

}; // Size: 0xC8

class UVoxelMorphologyMeshesTool : public UBaseVoxelTool
{
    class UVoxelMorphologyMeshesToolProperties* MorphologyProperties;                 // 0x0120 (size: 0x8)

}; // Size: 0x128

class UVoxelMorphologyMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
}; // Size: 0x28

class UVoxelMorphologyMeshesToolProperties : public UInteractiveToolPropertySet
{
    EMorphologyOperation Operation;                                                   // 0x00A8 (size: 0x1)
    double Distance;                                                                  // 0x00B0 (size: 0x8)
    bool bVoxWrap;                                                                    // 0x00B8 (size: 0x1)
    bool bRemoveInternalsAfterVoxWrap;                                                // 0x00B9 (size: 0x1)
    double ThickenShells;                                                             // 0x00C0 (size: 0x8)

}; // Size: 0xC8

class UVoxelSolidifyMeshesTool : public UBaseVoxelTool
{
    class UVoxelSolidifyMeshesToolProperties* SolidifyProperties;                     // 0x0120 (size: 0x8)

}; // Size: 0x128

class UVoxelSolidifyMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
}; // Size: 0x28

class UVoxelSolidifyMeshesToolProperties : public UInteractiveToolPropertySet
{
    double WindingThreshold;                                                          // 0x00A8 (size: 0x8)
    double ExtendBounds;                                                              // 0x00B0 (size: 0x8)
    int32 SurfaceSearchSteps;                                                         // 0x00B8 (size: 0x4)
    bool bSolidAtBoundaries;                                                          // 0x00BC (size: 0x1)
    bool bApplyThickenShells;                                                         // 0x00BD (size: 0x1)
    double ThickenShells;                                                             // 0x00C0 (size: 0x8)

}; // Size: 0xC8

class UWeldMeshEdgesOperatorFactory : public UObject
{
    class UWeldMeshEdgesTool* WeldMeshEdgesTool;                                      // 0x0030 (size: 0x8)

}; // Size: 0x38

class UWeldMeshEdgesTool : public USingleSelectionMeshEditingTool
{
    class UWeldMeshEdgesToolProperties* Settings;                                     // 0x00B0 (size: 0x8)
    class UMeshOpPreviewWithBackgroundCompute* PreviewCompute;                        // 0x00B8 (size: 0x8)
    class UMeshElementsVisualizer* MeshElementsDisplay;                               // 0x00C0 (size: 0x8)
    class UWeldMeshEdgesOperatorFactory* OperatorFactory;                             // 0x00C8 (size: 0x8)

}; // Size: 0xE0

class UWeldMeshEdgesToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
}; // Size: 0x28

class UWeldMeshEdgesToolProperties : public UInteractiveToolPropertySet
{
    float Tolerance;                                                                  // 0x00A8 (size: 0x4)
    bool bOnlyUnique;                                                                 // 0x00AC (size: 0x1)
    bool bResolveTJunctions;                                                          // 0x00AD (size: 0x1)
    int32 InitialEdges;                                                               // 0x00B0 (size: 0x4)
    int32 RemainingEdges;                                                             // 0x00B4 (size: 0x4)
    EWeldMeshEdgesAttributeUIMode AttrWeldingMode;                                    // 0x00B8 (size: 0x1)
    float SplitNormalThreshold;                                                       // 0x00BC (size: 0x4)
    float SplitTangentsThreshold;                                                     // 0x00C0 (size: 0x4)
    float SplitUVThreshold;                                                           // 0x00C4 (size: 0x4)
    float SplitColorThreshold;                                                        // 0x00C8 (size: 0x4)

}; // Size: 0xD0

class UWorkPlaneProperties : public UInteractiveToolPropertySet
{
    bool bPropertySetEnabled;                                                         // 0x00A8 (size: 0x1)
    bool bShowGizmo;                                                                  // 0x00A9 (size: 0x1)
    FVector Position;                                                                 // 0x00B0 (size: 0x18)
    FQuat Rotation;                                                                   // 0x00D0 (size: 0x20)

}; // Size: 0xF0

#endif
