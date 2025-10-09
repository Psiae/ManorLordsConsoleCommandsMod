#ifndef UE4SS_SDK_SplineRiver_HPP
#define UE4SS_SDK_SplineRiver_HPP

class ASplineRiver_C : public AActor
{
    class USplineComponent* spline;                                                   // 0x0220 (size: 0x8)
    class USceneComponent* RootScreneComponent;                                       // 0x0228 (size: 0x8)
    float Spacing;                                                                    // 0x0230 (size: 0x4)
    float rangentScale;                                                               // 0x0234 (size: 0x4)
    class UMaterialInterface* RiverMat;                                               // 0x0238 (size: 0x8)
    class UStaticMesh* Mesh;                                                          // 0x0240 (size: 0x8)
    FVector riverOffset;                                                              // 0x0248 (size: 0xC)
    bool SetHeight;                                                                   // 0x0254 (size: 0x1)
    float Height;                                                                     // 0x0258 (size: 0x4)
    bool drawToRVT;                                                                   // 0x025C (size: 0x1)
    TArray<class URuntimeVirtualTexture*> RVTs;                                       // 0x0260 (size: 0x10)

    void flattenSpline();
    void UserConstructionScript();
}; // Size: 0x270

#endif
