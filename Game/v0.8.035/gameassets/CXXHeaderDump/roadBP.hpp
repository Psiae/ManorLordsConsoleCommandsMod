#ifndef UE4SS_SDK_roadBP_HPP
#define UE4SS_SDK_roadBP_HPP

class AroadBP_C : public ARoad
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04E0 (size: 0x8)
    bool zeroTangents;                                                                // 0x04E8 (size: 0x1)
    bool snapToNearest_deprec;                                                        // 0x04E9 (size: 0x1)
    double snapThreshold;                                                             // 0x04F0 (size: 0x8)
    bool adjustHeightAlways;                                                          // 0x04F8 (size: 0x1)
    bool spawnMeshes;                                                                 // 0x04F9 (size: 0x1)
    bool clearMeshes;                                                                 // 0x04FA (size: 0x1)
    bool fixRegions;                                                                  // 0x04FB (size: 0x1)
    class AActor* copyFrom;                                                           // 0x0500 (size: 0x8)
    bool deformLandscapeRVT;                                                          // 0x0508 (size: 0x1)
    bool bCommit;                                                                     // 0x0509 (size: 0x1)
    double snapToEdgeThresholdSq;                                                     // 0x0510 (size: 0x8)
    double mapWidthHalf_deprec;                                                       // 0x0518 (size: 0x8)

    void clampTangentsTo1();
    void snapToMapEdge();
    void adjustHeightToGround();
    void Snap To Nearest Point();
    void copyPointsFromAnotherSpline();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_roadBP(int32 EntryPoint);
}; // Size: 0x520

#endif
