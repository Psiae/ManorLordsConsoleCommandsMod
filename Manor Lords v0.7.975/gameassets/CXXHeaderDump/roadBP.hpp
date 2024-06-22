#ifndef UE4SS_SDK_roadBP_HPP
#define UE4SS_SDK_roadBP_HPP

class AroadBP_C : public ARoad
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0428 (size: 0x8)
    bool zeroTangents;                                                                // 0x0430 (size: 0x1)
    bool snapToNearest_deprec;                                                        // 0x0431 (size: 0x1)
    float snapThreshold;                                                              // 0x0434 (size: 0x4)
    bool adjustHeightAlways;                                                          // 0x0438 (size: 0x1)
    bool spawnMeshes;                                                                 // 0x0439 (size: 0x1)
    bool clearMeshes;                                                                 // 0x043A (size: 0x1)
    bool fixRegions;                                                                  // 0x043B (size: 0x1)
    class AActor* copyFrom;                                                           // 0x0440 (size: 0x8)
    bool deformLandscapeRVT;                                                          // 0x0448 (size: 0x1)
    bool bCommit;                                                                     // 0x0449 (size: 0x1)
    float snapToEdgeThresholdSq;                                                      // 0x044C (size: 0x4)
    float mapWidthHalf_deprec;                                                        // 0x0450 (size: 0x4)

    void fixSplineOrderForTriangulation();
    void clampTangentsTo1();
    void snapToMapEdge();
    void adjustHeightToGround();
    void Snap To Nearest Point();
    void copyPointsFromAnotherSpline();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_roadBP(int32 EntryPoint);
}; // Size: 0x454

#endif
