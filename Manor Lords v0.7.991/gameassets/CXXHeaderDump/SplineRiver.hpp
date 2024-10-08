#ifndef UE4SS_SDK_SplineRiver_HPP
#define UE4SS_SDK_SplineRiver_HPP

class ASplineRiver_C : public AActor
{
    class USplineComponent* Spline;                                                   // 0x0290 (size: 0x8)
    class USceneComponent* RootScreneComponent;                                       // 0x0298 (size: 0x8)
    double spacing;                                                                   // 0x02A0 (size: 0x8)
    double rangentScale;                                                              // 0x02A8 (size: 0x8)
    class UMaterialInterface* RiverMat;                                               // 0x02B0 (size: 0x8)
    class UStaticMesh* Mesh;                                                          // 0x02B8 (size: 0x8)
    FVector riverOffset;                                                              // 0x02C0 (size: 0x18)
    bool SetHeight;                                                                   // 0x02D8 (size: 0x1)
    double Height;                                                                    // 0x02E0 (size: 0x8)
    bool drawToRVT;                                                                   // 0x02E8 (size: 0x1)
    TArray<class URuntimeVirtualTexture*> RVTs;                                       // 0x02F0 (size: 0x10)

    void flattenSpline();
    void UserConstructionScript();
}; // Size: 0x300

#endif
