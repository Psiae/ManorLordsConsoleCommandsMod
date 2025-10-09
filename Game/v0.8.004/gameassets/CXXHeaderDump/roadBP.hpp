#ifndef UE4SS_SDK_roadBP_HPP
#define UE4SS_SDK_roadBP_HPP

class AroadBP_C : public ARoad
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B0 (size: 0x8)
    bool zeroTangents;                                                                // 0x04B8 (size: 0x1)
    bool snapToNearest_deprec;                                                        // 0x04B9 (size: 0x1)
    double snapThreshold;                                                             // 0x04C0 (size: 0x8)
    bool adjustHeightAlways;                                                          // 0x04C8 (size: 0x1)
    bool spawnMeshes;                                                                 // 0x04C9 (size: 0x1)
    bool clearMeshes;                                                                 // 0x04CA (size: 0x1)
    bool fixRegions;                                                                  // 0x04CB (size: 0x1)
    class AActor* copyFrom;                                                           // 0x04D0 (size: 0x8)
    bool deformLandscapeRVT;                                                          // 0x04D8 (size: 0x1)
    bool bCommit;                                                                     // 0x04D9 (size: 0x1)
    double snapToEdgeThresholdSq;                                                     // 0x04E0 (size: 0x8)
    double mapWidthHalf_deprec;                                                       // 0x04E8 (size: 0x8)

    void fixSplineOrderForTriangulation();
    void clampTangentsTo1();
    void snapToMapEdge();
    void adjustHeightToGround();
    void Snap To Nearest Point();
    void copyPointsFromAnotherSpline();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_roadBP(int32 EntryPoint);
}; // Size: 0x4F0

#endif
