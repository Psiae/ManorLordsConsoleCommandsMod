#ifndef UE4SS_SDK_MeshModelingTools_HPP
#define UE4SS_SDK_MeshModelingTools_HPP

#include "MeshModelingTools_enums.hpp"

class UAddArrowPrimitiveTool : public UAddPrimitiveTool
{
}; // Size: 0x138

class UAddBoxPrimitiveTool : public UAddPrimitiveTool
{
}; // Size: 0x138

class UAddCapsulePrimitiveTool : public UAddPrimitiveTool
{
}; // Size: 0x138

class UAddConePrimitiveTool : public UAddPrimitiveTool
{
}; // Size: 0x138

class UAddCylinderPrimitiveTool : public UAddPrimitiveTool
{
}; // Size: 0x138

class UAddDiscPrimitiveTool : public UAddPrimitiveTool
{
}; // Size: 0x138

class UAddPrimitiveTool : public USingleClickTool
{
    class UCreateMeshObjectTypeProperties* OutputTypeProperties;                      // 0x00B8 (size: 0x8)
    class UProceduralShapeToolProperties* ShapeSettings;                              // 0x00C0 (size: 0x8)
    class UNewMeshMaterialProperties* MaterialProperties;                             // 0x00C8 (size: 0x8)
    class UPreviewMesh* PreviewMesh;                                                  // 0x00D0 (size: 0x8)
    class UCombinedTransformGizmo* Gizmo;                                             // 0x00D8 (size: 0x8)
    class UDragAlignmentMechanic* DragAlignmentMechanic;                              // 0x00E0 (size: 0x8)
    FString AssetName;                                                                // 0x00E8 (size: 0x10)

}; // Size: 0x138

class UAddPrimitiveToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x30

class UAddRectanglePrimitiveTool : public UAddPrimitiveTool
{
}; // Size: 0x138

class UAddSpherePrimitiveTool : public UAddPrimitiveTool
{
}; // Size: 0x138

class UAddStairsPrimitiveTool : public UAddPrimitiveTool
{
}; // Size: 0x138

class UAddTorusPrimitiveTool : public UAddPrimitiveTool
{
}; // Size: 0x138

class UCSGMeshesTool : public UBaseCreateFromSelectedTool
{
    class UCSGMeshesToolProperties* CSGProperties;                                    // 0x0108 (size: 0x8)
    class UTrimMeshesToolProperties* TrimProperties;                                  // 0x0110 (size: 0x8)
    TArray<class UPreviewMesh*> OriginalMeshPreviews;                                 // 0x0128 (size: 0x10)
    class UMaterialInstanceDynamic* PreviewsGhostMaterial;                            // 0x0138 (size: 0x8)
    class ULineSetComponent* DrawnLineSet;                                            // 0x0140 (size: 0x8)

}; // Size: 0x160

class UCSGMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
}; // Size: 0x30

class UCSGMeshesToolProperties : public UInteractiveToolPropertySet
{
    ECSGOperation Operation;                                                          // 0x00A8 (size: 0x1)
    bool bTryFixHoles;                                                                // 0x00A9 (size: 0x1)
    bool bTryCollapseEdges;                                                           // 0x00AA (size: 0x1)
    float WindingThreshold;                                                           // 0x00AC (size: 0x4)
    bool bShowNewBoundaries;                                                          // 0x00B0 (size: 0x1)
    bool bShowSubtractedMesh;                                                         // 0x00B1 (size: 0x1)
    float SubtractedMeshOpacity;                                                      // 0x00B4 (size: 0x4)
    FLinearColor SubtractedMeshColor;                                                 // 0x00B8 (size: 0x10)
    bool bUseFirstMeshMaterials;                                                      // 0x00C8 (size: 0x1)

}; // Size: 0xD0

class UCombineMeshesTool : public UMultiSelectionMeshEditingTool
{
    class UCombineMeshesToolProperties* BasicProperties;                              // 0x00C0 (size: 0x8)
    class UCreateMeshObjectTypeProperties* OutputTypeProperties;                      // 0x00C8 (size: 0x8)
    class UOnAcceptHandleSourcesPropertiesBase* HandleSourceProperties;               // 0x00D0 (size: 0x8)

}; // Size: 0xE0

class UCombineMeshesToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
}; // Size: 0x30

class UCombineMeshesToolProperties : public UInteractiveToolPropertySet
{
    bool bIsDuplicateMode;                                                            // 0x00A8 (size: 0x1)
    EBaseCreateFromSelectedTargetType OutputWriteTo;                                  // 0x00AC (size: 0x4)
    FString OutputNewName;                                                            // 0x00B0 (size: 0x10)
    FString OutputExistingName;                                                       // 0x00C0 (size: 0x10)

}; // Size: 0xD0

class UCutMeshWithMeshTool : public UBaseCreateFromSelectedTool
{
    class UCutMeshWithMeshToolProperties* CutProperties;                              // 0x0108 (size: 0x8)
    class UPreviewMesh* IntersectPreviewMesh;                                         // 0x0110 (size: 0x8)
    class ULineSetComponent* DrawnLineSet;                                            // 0x0138 (size: 0x8)

}; // Size: 0x380

class UCutMeshWithMeshToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
}; // Size: 0x28

class UCutMeshWithMeshToolProperties : public UInteractiveToolPropertySet
{
    bool bTryFixHoles;                                                                // 0x00A8 (size: 0x1)
    bool bTryCollapseEdges;                                                           // 0x00A9 (size: 0x1)
    float WindingThreshold;                                                           // 0x00AC (size: 0x4)
    bool bShowNewBoundaries;                                                          // 0x00B0 (size: 0x1)
    bool bUseFirstMeshMaterials;                                                      // 0x00B1 (size: 0x1)

}; // Size: 0xB8

class UDeleteGeometrySelectionCommand : public UGeometrySelectionEditCommand
{
}; // Size: 0x28

class UDisconnectGeometrySelectionCommand : public UGeometrySelectionEditCommand
{
}; // Size: 0x28

class UDrawAndRevolveTool : public UInteractiveTool
{
    class UCurveControlPointsMechanic* ControlPointsMechanic;                         // 0x0160 (size: 0x8)
    class UConstructionPlaneMechanic* PlaneMechanic;                                  // 0x0168 (size: 0x8)
    class UCreateMeshObjectTypeProperties* OutputTypeProperties;                      // 0x0170 (size: 0x8)
    class URevolveToolProperties* Settings;                                           // 0x0178 (size: 0x8)
    class UNewMeshMaterialProperties* MaterialProperties;                             // 0x0180 (size: 0x8)
    class UMeshOpPreviewWithBackgroundCompute* Preview;                               // 0x0188 (size: 0x8)

}; // Size: 0x190

class UDrawAndRevolveToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x28

class UDrawPolygonTool : public UInteractiveTool
{
    class UCreateMeshObjectTypeProperties* OutputTypeProperties;                      // 0x00A0 (size: 0x8)
    class UDrawPolygonToolStandardProperties* PolygonProperties;                      // 0x00A8 (size: 0x8)
    class UDrawPolygonToolSnapProperties* SnapProperties;                             // 0x00B0 (size: 0x8)
    class UNewMeshMaterialProperties* MaterialProperties;                             // 0x00B8 (size: 0x8)
    class UPreviewMesh* PreviewMesh;                                                  // 0x0150 (size: 0x8)
    class UPlaneDistanceFromHitMechanic* HeightMechanic;                              // 0x0568 (size: 0x8)
    class UDragAlignmentMechanic* DragAlignmentMechanic;                              // 0x0570 (size: 0x8)
    class UConstructionPlaneMechanic* PlaneMechanic;                                  // 0x0578 (size: 0x8)

}; // Size: 0x590

class UDrawPolygonToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x28

class UDrawPolygonToolSnapProperties : public UInteractiveToolPropertySet
{
    bool bEnableSnapping;                                                             // 0x00A8 (size: 0x1)
    bool bSnapToWorldGrid;                                                            // 0x00A9 (size: 0x1)
    bool bSnapToVertices;                                                             // 0x00AA (size: 0x1)
    bool bSnapToEdges;                                                                // 0x00AB (size: 0x1)
    bool bSnapToAxes;                                                                 // 0x00AC (size: 0x1)
    bool bSnapToLengths;                                                              // 0x00AD (size: 0x1)
    bool bSnapToSurfaces;                                                             // 0x00AE (size: 0x1)
    float SnapToSurfacesOffset;                                                       // 0x00B0 (size: 0x4)

}; // Size: 0xB8

class UDrawPolygonToolStandardProperties : public UInteractiveToolPropertySet
{
    EDrawPolygonDrawMode PolygonDrawMode;                                             // 0x00A8 (size: 0x1)
    bool bAllowSelfIntersections;                                                     // 0x00A9 (size: 0x1)
    float FeatureSizeRatio;                                                           // 0x00AC (size: 0x4)
    int32 RadialSlices;                                                               // 0x00B0 (size: 0x4)
    float Distance;                                                                   // 0x00B4 (size: 0x4)
    bool bShowGridGizmo;                                                              // 0x00B8 (size: 0x1)
    EDrawPolygonExtrudeMode ExtrudeMode;                                              // 0x00B9 (size: 0x1)
    float ExtrudeHeight;                                                              // 0x00BC (size: 0x4)

}; // Size: 0xC0

class UEdgeLoopInsertionProperties : public UInteractiveToolPropertySet
{
    EEdgeLoopPositioningMode PositionMode;                                            // 0x00A8 (size: 0x4)
    EEdgeLoopInsertionMode InsertionMode;                                             // 0x00AC (size: 0x4)
    int32 NumLoops;                                                                   // 0x00B0 (size: 0x4)
    double ProportionOffset;                                                          // 0x00B8 (size: 0x8)
    double DistanceOffset;                                                            // 0x00C0 (size: 0x8)
    bool bInteractive;                                                                // 0x00C8 (size: 0x1)
    bool bFlipOffsetDirection;                                                        // 0x00C9 (size: 0x1)
    bool bHighlightProblemGroups;                                                     // 0x00CA (size: 0x1)
    double VertexTolerance;                                                           // 0x00D0 (size: 0x8)

}; // Size: 0xD8

class UEditMeshPolygonsActionModeToolBuilder : public UEditMeshPolygonsToolBuilder
{
}; // Size: 0x38

class UEditMeshPolygonsSelectionModeToolBuilder : public UEditMeshPolygonsToolBuilder
{
}; // Size: 0x38

class UEditMeshPolygonsTool : public USingleTargetWithSelectionTool
{
    class UMeshOpPreviewWithBackgroundCompute* Preview;                               // 0x0140 (size: 0x8)
    class UPolyEditCommonProperties* CommonProps;                                     // 0x0148 (size: 0x8)
    class UEditMeshPolygonsToolActions* EditActions;                                  // 0x0150 (size: 0x8)
    class UEditMeshPolygonsToolActions_Triangles* EditActions_Triangles;              // 0x0158 (size: 0x8)
    class UEditMeshPolygonsToolEdgeActions* EditEdgeActions;                          // 0x0160 (size: 0x8)
    class UEditMeshPolygonsToolEdgeActions_Triangles* EditEdgeActions_Triangles;      // 0x0168 (size: 0x8)
    class UEditMeshPolygonsToolUVActions* EditUVActions;                              // 0x0170 (size: 0x8)
    class UPolyEditTopologyProperties* TopologyProperties;                            // 0x0178 (size: 0x8)
    class UPolyEditExtrudeActivity* ExtrudeActivity;                                  // 0x0180 (size: 0x8)
    class UPolyEditInsetOutsetActivity* InsetOutsetActivity;                          // 0x0188 (size: 0x8)
    class UPolyEditCutFacesActivity* CutFacesActivity;                                // 0x0190 (size: 0x8)
    class UPolyEditPlanarProjectionUVActivity* PlanarProjectionUVActivity;            // 0x0198 (size: 0x8)
    class UPolyEditInsertEdgeActivity* InsertEdgeActivity;                            // 0x01A0 (size: 0x8)
    class UPolyEditInsertEdgeLoopActivity* InsertEdgeLoopActivity;                    // 0x01A8 (size: 0x8)
    class UPolyEditBevelEdgeActivity* BevelEdgeActivity;                              // 0x01B0 (size: 0x8)
    class UPolyEditExtrudeEdgeActivity* ExtrudeEdgeActivity;                          // 0x01B8 (size: 0x8)
    class UPolyEditActivityContext* ActivityContext;                                  // 0x0298 (size: 0x8)
    class UPolygonSelectionMechanic* SelectionMechanic;                               // 0x02A0 (size: 0x8)
    class UDragAlignmentMechanic* DragAlignmentMechanic;                              // 0x02A8 (size: 0x8)
    class UCombinedTransformGizmo* TransformGizmo;                                    // 0x02B0 (size: 0x8)
    class UTransformProxy* TransformProxy;                                            // 0x02B8 (size: 0x8)

}; // Size: 0x900

class UEditMeshPolygonsToolActionPropertySet : public UInteractiveToolPropertySet
{
}; // Size: 0xB0

class UEditMeshPolygonsToolActions : public UEditMeshPolygonsToolActionPropertySet
{

    void SimplifyByGroups();
    void Retriangulate();
    void RecalcNormals();
    void PushPull();
    void Outset();
    void Offset();
    void Merge();
    void Inset();
    void InsertEdgeLoop();
    void InsertEdge();
    void Flip();
    void Extrude();
    void Duplicate();
    void Disconnect();
    void Delete();
    void Decompose();
    void CutFaces();
    void Bevel();
}; // Size: 0xB0

class UEditMeshPolygonsToolActions_Triangles : public UEditMeshPolygonsToolActionPropertySet
{

    void RecalcNormals();
    void PushPull();
    void Poke();
    void Outset();
    void Offset();
    void Inset();
    void Flip();
    void Extrude();
    void Duplicate();
    void Disconnect();
    void Delete();
    void CutFaces();
}; // Size: 0xB0

class UEditMeshPolygonsToolBuilder : public USingleTargetWithSelectionToolBuilder
{
}; // Size: 0x30

class UEditMeshPolygonsToolEdgeActions : public UEditMeshPolygonsToolActionPropertySet
{

    void WeldCentered();
    void Weld();
    void Straighten();
    void Simplify();
    void FillHole();
    void Extrude();
    void DeleteEdge();
    void Collapse();
    void Bridge();
    void Bevel();
}; // Size: 0xB0

class UEditMeshPolygonsToolEdgeActions_Triangles : public UEditMeshPolygonsToolActionPropertySet
{

    void WeldCentered();
    void Weld();
    void Split();
    void Flip();
    void FillHole();
    void Extrude();
    void Collapse();
    void Bridge();
}; // Size: 0xB0

class UEditMeshPolygonsToolUVActions : public UEditMeshPolygonsToolActionPropertySet
{

    void PlanarProjection();
}; // Size: 0xB0

class UExistingMeshMaterialProperties : public UInteractiveToolPropertySet
{
    ESetMeshMaterialMode MaterialMode;                                                // 0x00A8 (size: 0x1)
    float CheckerDensity;                                                             // 0x00AC (size: 0x4)
    class UMaterialInterface* OverrideMaterial;                                       // 0x00B0 (size: 0x8)
    FString UVChannel;                                                                // 0x00B8 (size: 0x10)
    TArray<FString> UVChannelNamesList;                                               // 0x00C8 (size: 0x10)
    class UMaterialInstanceDynamic* CheckerMaterial;                                  // 0x00D8 (size: 0x8)

    TArray<FString> GetUVChannelNamesFunc();
}; // Size: 0xE0

class UGroupEdgeInsertionProperties : public UInteractiveToolPropertySet
{
    EGroupEdgeInsertionMode InsertionMode;                                            // 0x00A8 (size: 0x4)
    bool bContinuousInsertion;                                                        // 0x00AC (size: 0x1)
    double VertexTolerance;                                                           // 0x00B0 (size: 0x8)

}; // Size: 0xB8

class UMeshEditingViewProperties : public UInteractiveToolPropertySet
{
    bool bShowWireframe;                                                              // 0x00A8 (size: 0x1)
    EMeshEditingMaterialModes MaterialMode;                                           // 0x00AC (size: 0x4)
    bool bFlatShading;                                                                // 0x00B0 (size: 0x1)
    FLinearColor Color;                                                               // 0x00B4 (size: 0x10)
    class UTexture2D* Image;                                                          // 0x00C8 (size: 0x8)
    double Opacity;                                                                   // 0x00D0 (size: 0x8)
    FLinearColor TransparentMaterialColor;                                            // 0x00D8 (size: 0x10)
    bool bTwoSided;                                                                   // 0x00E8 (size: 0x1)
    TWeakObjectPtr<class UMaterialInterface> CustomMaterial;                          // 0x00EC (size: 0x8)

}; // Size: 0xF8

class UMeshUVChannelProperties : public UInteractiveToolPropertySet
{
    FString UVChannel;                                                                // 0x00A8 (size: 0x10)
    TArray<FString> UVChannelNamesList;                                               // 0x00B8 (size: 0x10)

    TArray<FString> GetUVChannelNamesFunc();
}; // Size: 0xC8

class UModifyGeometrySelectionCommand : public UGeometrySelectionEditCommand
{
}; // Size: 0x28

class UModifyGeometrySelectionCommand_Contract : public UModifyGeometrySelectionCommand
{
}; // Size: 0x28

class UModifyGeometrySelectionCommand_Expand : public UModifyGeometrySelectionCommand
{
}; // Size: 0x28

class UModifyGeometrySelectionCommand_ExpandToConnected : public UModifyGeometrySelectionCommand
{
}; // Size: 0x28

class UModifyGeometrySelectionCommand_Invert : public UModifyGeometrySelectionCommand
{
}; // Size: 0x28

class UModifyGeometrySelectionCommand_InvertConnected : public UModifyGeometrySelectionCommand
{
}; // Size: 0x28

class UNewMeshMaterialProperties : public UInteractiveToolPropertySet
{
    TWeakObjectPtr<class UMaterialInterface> Material;                                // 0x00A8 (size: 0x8)
    float UVScale;                                                                    // 0x00B0 (size: 0x4)
    bool bWorldSpaceUVScale;                                                          // 0x00B4 (size: 0x1)
    bool bShowWireframe;                                                              // 0x00B5 (size: 0x1)
    bool bShowExtendedOptions;                                                        // 0x00B6 (size: 0x1)

}; // Size: 0xB8

class UPolyEditActivityContext : public UObject
{
    class UPolyEditCommonProperties* CommonProperties;                                // 0x0028 (size: 0x8)
    class UMeshOpPreviewWithBackgroundCompute* Preview;                               // 0x0040 (size: 0x8)
    class UPolygonSelectionMechanic* SelectionMechanic;                               // 0x0070 (size: 0x8)

}; // Size: 0x120

class UPolyEditBevelEdgeActivity : public UInteractiveToolActivity
{
    class UPolyEditBevelEdgeProperties* BevelProperties;                              // 0x0038 (size: 0x8)
    class UPolyEditActivityContext* ActivityContext;                                  // 0x0040 (size: 0x8)

}; // Size: 0x140

class UPolyEditBevelEdgeProperties : public UInteractiveToolPropertySet
{
    double BevelDistance;                                                             // 0x00A8 (size: 0x8)
    int32 Subdivisions;                                                               // 0x00B0 (size: 0x4)
    float RoundWeight;                                                                // 0x00B4 (size: 0x4)
    bool bInferMaterialID;                                                            // 0x00B8 (size: 0x1)
    int32 SetMaterialID;                                                              // 0x00BC (size: 0x4)

}; // Size: 0xC0

class UPolyEditCommonProperties : public UInteractiveToolPropertySet
{
    bool bShowWireframe;                                                              // 0x00A8 (size: 0x1)
    bool bShowSelectableCorners;                                                      // 0x00A9 (size: 0x1)
    bool bGizmoVisible;                                                               // 0x00AA (size: 0x1)
    ELocalFrameMode LocalFrameMode;                                                   // 0x00AC (size: 0x4)
    bool bLockRotation;                                                               // 0x00B0 (size: 0x1)
    bool bLocalCoordSystem;                                                           // 0x00B1 (size: 0x1)

}; // Size: 0xB8

class UPolyEditCutFacesActivity : public UInteractiveToolActivity
{
    class UPolyEditCutProperties* CutProperties;                                      // 0x0040 (size: 0x8)
    class UPolyEditPreviewMesh* EditPreview;                                          // 0x0048 (size: 0x8)
    class UCollectSurfacePathMechanic* SurfacePathMechanic;                           // 0x0050 (size: 0x8)
    class UPolyEditActivityContext* ActivityContext;                                  // 0x0058 (size: 0x8)

}; // Size: 0xC0

class UPolyEditCutProperties : public UInteractiveToolPropertySet
{
    EPolyEditCutPlaneOrientation Orientation;                                         // 0x00A8 (size: 0x4)
    bool bSnapToVertices;                                                             // 0x00AC (size: 0x1)

}; // Size: 0xB0

class UPolyEditExtrudeActivity : public UInteractiveToolActivity
{
    class UPolyEditExtrudeProperties* ExtrudeProperties;                              // 0x0050 (size: 0x8)
    class UPolyEditOffsetProperties* OffsetProperties;                                // 0x0058 (size: 0x8)
    class UPolyEditPushPullProperties* PushPullProperties;                            // 0x0060 (size: 0x8)
    class UPlaneDistanceFromHitMechanic* ExtrudeHeightMechanic;                       // 0x0068 (size: 0x8)
    class UPolyEditActivityContext* ActivityContext;                                  // 0x0070 (size: 0x8)

}; // Size: 0x1D0

class UPolyEditExtrudeEdgeActivity : public UInteractiveToolActivity
{
    class UPolyEditExtrudeEdgeActivityProperties* Settings;                           // 0x0038 (size: 0x8)
    class UPolyEditActivityContext* ActivityContext;                                  // 0x0040 (size: 0x8)
    class UTransformProxy* ExtrudeFrameProxy;                                         // 0x0048 (size: 0x8)
    class UCombinedTransformGizmo* ExtrudeFrameGizmo;                                 // 0x0050 (size: 0x8)
    class UTransformProxy* SingleDirectionProxy;                                      // 0x0058 (size: 0x8)
    class UCombinedTransformGizmo* SingleDirectionGizmo;                              // 0x0060 (size: 0x8)
    class UPreviewGeometry* PreviewGeometry;                                          // 0x0068 (size: 0x8)

}; // Size: 0x2F0

class UPolyEditExtrudeEdgeActivityProperties : public UInteractiveToolPropertySet
{
    EPolyEditExtrudeEdgeDirectionMode DirectionMode;                                  // 0x00A8 (size: 0x4)
    EPolyEditExtrudeEdgeDistanceMode DistanceMode;                                    // 0x00AC (size: 0x4)
    double Distance;                                                                  // 0x00B0 (size: 0x8)
    bool bUseUnselectedForFrames;                                                     // 0x00B8 (size: 0x1)
    bool bAdjustToExtrudeEvenly;                                                      // 0x00B9 (size: 0x1)

}; // Size: 0xC0

class UPolyEditExtrudeProperties : public UInteractiveToolPropertySet
{
    EPolyEditExtrudeDistanceMode DistanceMode;                                        // 0x00A8 (size: 0x4)
    double Distance;                                                                  // 0x00B0 (size: 0x8)
    EPolyEditExtrudeModeOptions DirectionMode;                                        // 0x00B8 (size: 0x4)
    EPolyEditExtrudeDirection Direction;                                              // 0x00BC (size: 0x4)
    double MaxDistanceScaleFactor;                                                    // 0x00C0 (size: 0x8)
    bool bShellsToSolids;                                                             // 0x00C8 (size: 0x1)
    EPolyEditExtrudeDirection MeasureDirection;                                       // 0x00CC (size: 0x4)
    bool bUseColinearityForSettingBorderGroups;                                       // 0x00D0 (size: 0x1)

}; // Size: 0xD8

class UPolyEditInsertEdgeActivity : public UInteractiveToolActivity
{
    class UGroupEdgeInsertionProperties* Settings;                                    // 0x0048 (size: 0x8)
    class UPolyEditActivityContext* ActivityContext;                                  // 0x0050 (size: 0x8)

}; // Size: 0x470

class UPolyEditInsertEdgeLoopActivity : public UInteractiveToolActivity
{
    class UEdgeLoopInsertionProperties* Settings;                                     // 0x0048 (size: 0x8)
    class UPolyEditActivityContext* ActivityContext;                                  // 0x0050 (size: 0x8)

}; // Size: 0x400

class UPolyEditInsetOutsetActivity : public UInteractiveToolActivity
{
    class UPolyEditInsetOutsetProperties* Settings;                                   // 0x0040 (size: 0x8)
    class UPolyEditPreviewMesh* EditPreview;                                          // 0x0050 (size: 0x8)
    class USpatialCurveDistanceMechanic* CurveDistMechanic;                           // 0x0058 (size: 0x8)
    class UPolyEditActivityContext* ActivityContext;                                  // 0x0060 (size: 0x8)

}; // Size: 0x70

class UPolyEditInsetOutsetProperties : public UInteractiveToolPropertySet
{
    float Softness;                                                                   // 0x00A8 (size: 0x4)
    bool bBoundaryOnly;                                                               // 0x00AC (size: 0x1)
    float AreaScale;                                                                  // 0x00B0 (size: 0x4)
    bool bReproject;                                                                  // 0x00B4 (size: 0x1)
    bool bOutset;                                                                     // 0x00B5 (size: 0x1)

}; // Size: 0xB8

class UPolyEditOffsetProperties : public UInteractiveToolPropertySet
{
    EPolyEditExtrudeDistanceMode DistanceMode;                                        // 0x00A8 (size: 0x4)
    double Distance;                                                                  // 0x00B0 (size: 0x8)
    EPolyEditOffsetModeOptions DirectionMode;                                         // 0x00B8 (size: 0x4)
    double MaxDistanceScaleFactor;                                                    // 0x00C0 (size: 0x8)
    bool bShellsToSolids;                                                             // 0x00C8 (size: 0x1)
    EPolyEditExtrudeDirection MeasureDirection;                                       // 0x00CC (size: 0x4)
    bool bUseColinearityForSettingBorderGroups;                                       // 0x00D0 (size: 0x1)

}; // Size: 0xD8

class UPolyEditPlanarProjectionUVActivity : public UInteractiveToolActivity
{
    class UPolyEditSetUVProperties* SetUVProperties;                                  // 0x0040 (size: 0x8)
    class UPolyEditPreviewMesh* EditPreview;                                          // 0x0048 (size: 0x8)
    class UCollectSurfacePathMechanic* SurfacePathMechanic;                           // 0x0050 (size: 0x8)
    class UPolyEditActivityContext* ActivityContext;                                  // 0x0058 (size: 0x8)

}; // Size: 0xF0

class UPolyEditPushPullProperties : public UInteractiveToolPropertySet
{
    EPolyEditExtrudeDistanceMode DistanceMode;                                        // 0x00A8 (size: 0x4)
    double Distance;                                                                  // 0x00B0 (size: 0x8)
    EPolyEditPushPullModeOptions DirectionMode;                                       // 0x00B8 (size: 0x4)
    EPolyEditExtrudeDirection SingleDirection;                                        // 0x00BC (size: 0x4)
    double MaxDistanceScaleFactor;                                                    // 0x00C0 (size: 0x8)
    bool bShellsToSolids;                                                             // 0x00C8 (size: 0x1)
    EPolyEditExtrudeDirection MeasureDirection;                                       // 0x00CC (size: 0x4)
    bool bUseColinearityForSettingBorderGroups;                                       // 0x00D0 (size: 0x1)

}; // Size: 0xD8

class UPolyEditSetUVProperties : public UInteractiveToolPropertySet
{
    bool bShowMaterial;                                                               // 0x00A8 (size: 0x1)

}; // Size: 0xB0

class UPolyEditTopologyProperties : public UEditMeshPolygonsToolActionPropertySet
{
    bool bAddExtraCorners;                                                            // 0x00B0 (size: 0x1)
    double ExtraCornerAngleThresholdDegrees;                                          // 0x00B8 (size: 0x8)

    void RegenerateExtraCorners();
}; // Size: 0xC0

class UProceduralArrowToolProperties : public UProceduralShapeToolProperties
{
    float ShaftRadius;                                                                // 0x00B8 (size: 0x4)
    float ShaftHeight;                                                                // 0x00BC (size: 0x4)
    float HeadRadius;                                                                 // 0x00C0 (size: 0x4)
    float HeadHeight;                                                                 // 0x00C4 (size: 0x4)
    int32 RadialSlices;                                                               // 0x00C8 (size: 0x4)
    int32 HeightSubdivisions;                                                         // 0x00CC (size: 0x4)

}; // Size: 0xD0

class UProceduralBoxToolProperties : public UProceduralShapeToolProperties
{
    float Width;                                                                      // 0x00B8 (size: 0x4)
    float Depth;                                                                      // 0x00BC (size: 0x4)
    float Height;                                                                     // 0x00C0 (size: 0x4)
    int32 WidthSubdivisions;                                                          // 0x00C4 (size: 0x4)
    int32 DepthSubdivisions;                                                          // 0x00C8 (size: 0x4)
    int32 HeightSubdivisions;                                                         // 0x00CC (size: 0x4)

}; // Size: 0xD0

class UProceduralCapsuleToolProperties : public UProceduralShapeToolProperties
{
    float Radius;                                                                     // 0x00B8 (size: 0x4)
    float CylinderLength;                                                             // 0x00BC (size: 0x4)
    int32 HemisphereSlices;                                                           // 0x00C0 (size: 0x4)
    int32 CylinderSlices;                                                             // 0x00C4 (size: 0x4)
    int32 CylinderSubdivisions;                                                       // 0x00C8 (size: 0x4)

}; // Size: 0xD0

class UProceduralConeToolProperties : public UProceduralShapeToolProperties
{
    float Radius;                                                                     // 0x00B8 (size: 0x4)
    float Height;                                                                     // 0x00BC (size: 0x4)
    int32 RadialSlices;                                                               // 0x00C0 (size: 0x4)
    int32 HeightSubdivisions;                                                         // 0x00C4 (size: 0x4)

}; // Size: 0xC8

class UProceduralCylinderToolProperties : public UProceduralShapeToolProperties
{
    float Radius;                                                                     // 0x00B8 (size: 0x4)
    float Height;                                                                     // 0x00BC (size: 0x4)
    int32 RadialSlices;                                                               // 0x00C0 (size: 0x4)
    int32 HeightSubdivisions;                                                         // 0x00C4 (size: 0x4)

}; // Size: 0xC8

class UProceduralDiscToolProperties : public UProceduralShapeToolProperties
{
    EProceduralDiscType DiscType;                                                     // 0x00B8 (size: 0x4)
    float Radius;                                                                     // 0x00BC (size: 0x4)
    int32 RadialSlices;                                                               // 0x00C0 (size: 0x4)
    int32 RadialSubdivisions;                                                         // 0x00C4 (size: 0x4)
    float HoleRadius;                                                                 // 0x00C8 (size: 0x4)

}; // Size: 0xD0

class UProceduralRectangleToolProperties : public UProceduralShapeToolProperties
{
    EProceduralRectType RectangleType;                                                // 0x00B8 (size: 0x4)
    float Width;                                                                      // 0x00BC (size: 0x4)
    float Depth;                                                                      // 0x00C0 (size: 0x4)
    int32 WidthSubdivisions;                                                          // 0x00C4 (size: 0x4)
    int32 DepthSubdivisions;                                                          // 0x00C8 (size: 0x4)
    bool bMaintainDimension;                                                          // 0x00CC (size: 0x1)
    float CornerRadius;                                                               // 0x00D0 (size: 0x4)
    int32 CornerSlices;                                                               // 0x00D4 (size: 0x4)

}; // Size: 0xD8

class UProceduralShapeToolProperties : public UInteractiveToolPropertySet
{
    EMakeMeshPolygroupMode PolygroupMode;                                             // 0x00A8 (size: 0x1)
    EMakeMeshPlacementType TargetSurface;                                             // 0x00A9 (size: 0x1)
    EMakeMeshPivotLocation PivotLocation;                                             // 0x00AA (size: 0x1)
    float Rotation;                                                                   // 0x00AC (size: 0x4)
    bool bAlignToNormal;                                                              // 0x00B0 (size: 0x1)
    bool bShowGizmo;                                                                  // 0x00B1 (size: 0x1)
    bool bShowGizmoOptions;                                                           // 0x00B2 (size: 0x1)

}; // Size: 0xB8

class UProceduralSphereToolProperties : public UProceduralShapeToolProperties
{
    float Radius;                                                                     // 0x00B8 (size: 0x4)
    EProceduralSphereType SubdivisionType;                                            // 0x00BC (size: 0x4)
    int32 Subdivisions;                                                               // 0x00C0 (size: 0x4)
    int32 HorizontalSlices;                                                           // 0x00C4 (size: 0x4)
    int32 VerticalSlices;                                                             // 0x00C8 (size: 0x4)

}; // Size: 0xD0

class UProceduralStairsToolProperties : public UProceduralShapeToolProperties
{
    EProceduralStairsType StairsType;                                                 // 0x00B8 (size: 0x4)
    int32 NumSteps;                                                                   // 0x00BC (size: 0x4)
    float StepWidth;                                                                  // 0x00C0 (size: 0x4)
    float StepHeight;                                                                 // 0x00C4 (size: 0x4)
    float StepDepth;                                                                  // 0x00C8 (size: 0x4)
    float CurveAngle;                                                                 // 0x00CC (size: 0x4)
    float SpiralAngle;                                                                // 0x00D0 (size: 0x4)
    float InnerRadius;                                                                // 0x00D4 (size: 0x4)

}; // Size: 0xD8

class UProceduralTorusToolProperties : public UProceduralShapeToolProperties
{
    float MajorRadius;                                                                // 0x00B8 (size: 0x4)
    float MinorRadius;                                                                // 0x00BC (size: 0x4)
    int32 MajorSlices;                                                                // 0x00C0 (size: 0x4)
    int32 MinorSlices;                                                                // 0x00C4 (size: 0x4)

}; // Size: 0xC8

class URecomputeUVsTool : public USingleSelectionMeshEditingTool
{
    class UMeshUVChannelProperties* UVChannelProperties;                              // 0x00B8 (size: 0x8)
    class URecomputeUVsToolProperties* Settings;                                      // 0x00C0 (size: 0x8)
    class UPolygroupLayersProperties* PolygroupLayerProperties;                       // 0x00C8 (size: 0x8)
    class UExistingMeshMaterialProperties* MaterialSettings;                          // 0x00D0 (size: 0x8)
    bool bCreateUVLayoutViewOnSetup;                                                  // 0x00D8 (size: 0x1)
    class UUVLayoutPreview* UVLayoutView;                                             // 0x00E0 (size: 0x8)
    class URecomputeUVsOpFactory* RecomputeUVsOpFactory;                              // 0x00E8 (size: 0x8)
    class UMeshOpPreviewWithBackgroundCompute* Preview;                               // 0x00F0 (size: 0x8)

}; // Size: 0x118

class URecomputeUVsToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
}; // Size: 0x28

class URetriangulateGeometrySelectionCommand : public UGeometrySelectionEditCommand
{
}; // Size: 0x28

class URevolveOperatorFactory : public UObject
{
    class UDrawAndRevolveTool* RevolveTool;                                           // 0x0030 (size: 0x8)

}; // Size: 0x38

class URevolveProperties : public UInteractiveToolPropertySet
{
    double RevolveDegreesClamped;                                                     // 0x00A8 (size: 0x8)
    double RevolveDegrees;                                                            // 0x00B0 (size: 0x8)
    double RevolveDegreesOffset;                                                      // 0x00B8 (size: 0x8)
    double StepsMaxDegrees;                                                           // 0x00C0 (size: 0x8)
    bool bExplicitSteps;                                                              // 0x00C8 (size: 0x1)
    int32 NumExplicitSteps;                                                           // 0x00CC (size: 0x4)
    double HeightOffsetPerDegree;                                                     // 0x00D0 (size: 0x8)
    bool bReverseRevolutionDirection;                                                 // 0x00D8 (size: 0x1)
    bool bFlipMesh;                                                                   // 0x00D9 (size: 0x1)
    bool bSharpNormals;                                                               // 0x00DA (size: 0x1)
    double SharpNormalsDegreeThreshold;                                               // 0x00E0 (size: 0x8)
    bool bPathAtMidpointOfStep;                                                       // 0x00E8 (size: 0x1)
    ERevolvePropertiesPolygroupMode PolygroupMode;                                    // 0x00E9 (size: 0x1)
    ERevolvePropertiesQuadSplit QuadSplitMode;                                        // 0x00EA (size: 0x1)

}; // Size: 0x118

class URevolveToolProperties : public URevolveProperties
{
    ERevolvePropertiesCapFillMode CapFillMode;                                        // 0x0118 (size: 0x1)
    bool bClosePathToAxis;                                                            // 0x0119 (size: 0x1)
    FVector DrawPlaneOrigin;                                                          // 0x0120 (size: 0x18)
    FRotator DrawPlaneOrientation;                                                    // 0x0138 (size: 0x18)
    bool bEnableSnapping;                                                             // 0x0150 (size: 0x1)
    bool bAllowedToEditDrawPlane;                                                     // 0x0151 (size: 0x1)

}; // Size: 0x158

class UTrimMeshesToolProperties : public UInteractiveToolPropertySet
{
    ETrimOperation WhichMesh;                                                         // 0x00A8 (size: 0x1)
    ETrimSide TrimSide;                                                               // 0x00A9 (size: 0x1)
    float WindingThreshold;                                                           // 0x00AC (size: 0x4)
    bool bShowTrimmingMesh;                                                           // 0x00B0 (size: 0x1)
    float OpacityOfTrimmingMesh;                                                      // 0x00B4 (size: 0x4)
    FLinearColor ColorOfTrimmingMesh;                                                 // 0x00B8 (size: 0x10)

}; // Size: 0xC8

class UUVLayoutTool : public UMultiSelectionMeshEditingTool
{
    class UMeshUVChannelProperties* UVChannelProperties;                              // 0x00C0 (size: 0x8)
    class UUVLayoutProperties* BasicProperties;                                       // 0x00C8 (size: 0x8)
    class UExistingMeshMaterialProperties* MaterialSettings;                          // 0x00D0 (size: 0x8)
    TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                      // 0x00D8 (size: 0x10)
    TArray<class UUVLayoutOperatorFactory*> Factories;                                // 0x00E8 (size: 0x10)
    class UUVLayoutPreview* UVLayoutView;                                             // 0x0160 (size: 0x8)

}; // Size: 0x170

class UUVLayoutToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
}; // Size: 0x28

class UUVProjectionOperatorFactory : public UObject
{
    class UUVProjectionTool* Tool;                                                    // 0x0030 (size: 0x8)

}; // Size: 0x38

class UUVProjectionTool : public USingleTargetWithSelectionTool
{
    class UMeshUVChannelProperties* UVChannelProperties;                              // 0x0120 (size: 0x8)
    class UUVProjectionToolProperties* BasicProperties;                               // 0x0128 (size: 0x8)
    class UUVProjectionToolEditActions* EditActions;                                  // 0x0130 (size: 0x8)
    class UExistingMeshMaterialProperties* MaterialSettings;                          // 0x0138 (size: 0x8)
    class UMeshOpPreviewWithBackgroundCompute* Preview;                               // 0x0140 (size: 0x8)
    class UMaterialInstanceDynamic* CheckerMaterial;                                  // 0x0148 (size: 0x8)
    class UCombinedTransformGizmo* TransformGizmo;                                    // 0x0150 (size: 0x8)
    class UTransformProxy* TransformProxy;                                            // 0x0158 (size: 0x8)
    class UUVProjectionOperatorFactory* OperatorFactory;                              // 0x0160 (size: 0x8)
    class UPreviewGeometry* EdgeRenderer;                                             // 0x0168 (size: 0x8)
    class USingleClickInputBehavior* ClickToSetPlaneBehavior;                         // 0x04B8 (size: 0x8)

}; // Size: 0x4D0

class UUVProjectionToolBuilder : public USingleTargetWithSelectionToolBuilder
{
}; // Size: 0x28

class UUVProjectionToolEditActions : public UInteractiveToolPropertySet
{

    void Reset();
    void AutoFitAlign();
    void AutoFit();
}; // Size: 0xB0

class UUVProjectionToolProperties : public UInteractiveToolPropertySet
{
    EUVProjectionMethod ProjectionType;                                               // 0x00A8 (size: 0x1)
    FVector Dimensions;                                                               // 0x00B0 (size: 0x18)
    bool bProportionalDimensions;                                                     // 0x00C8 (size: 0x1)
    EUVProjectionToolInitializationMode Initialization;                               // 0x00CC (size: 0x4)
    float CylinderSplitAngle;                                                         // 0x00D0 (size: 0x4)
    float ExpMapNormalBlending;                                                       // 0x00D4 (size: 0x4)
    int32 ExpMapSmoothingSteps;                                                       // 0x00D8 (size: 0x4)
    float ExpMapSmoothingAlpha;                                                       // 0x00DC (size: 0x4)
    float Rotation;                                                                   // 0x00E0 (size: 0x4)
    FVector2D scale;                                                                  // 0x00E8 (size: 0x10)
    FVector2D Translation;                                                            // 0x00F8 (size: 0x10)
    FVector SavedDimensions;                                                          // 0x0108 (size: 0x18)
    bool bSavedProportionalDimensions;                                                // 0x0120 (size: 0x1)
    FTransform SavedTransform;                                                        // 0x0130 (size: 0x60)

}; // Size: 0x190

#endif
