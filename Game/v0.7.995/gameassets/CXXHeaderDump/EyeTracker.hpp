#ifndef UE4SS_SDK_EyeTracker_HPP
#define UE4SS_SDK_EyeTracker_HPP

#include "EyeTracker_enums.hpp"

struct FEyeTrackerGazeData
{
    FVector GazeOrigin;                                                               // 0x0000 (size: 0x18)
    FVector GazeDirection;                                                            // 0x0018 (size: 0x18)
    FVector FixationPoint;                                                            // 0x0030 (size: 0x18)
    float ConfidenceValue;                                                            // 0x0048 (size: 0x4)
    bool bIsLeftEyeBlink;                                                             // 0x004C (size: 0x1)
    bool bIsRightEyeBlink;                                                            // 0x004D (size: 0x1)
    float LeftPupilDiameter;                                                          // 0x0050 (size: 0x4)
    float RightPupilDiameter;                                                         // 0x0054 (size: 0x4)

}; // Size: 0x58

struct FEyeTrackerStereoGazeData
{
    FVector LeftEyeOrigin;                                                            // 0x0000 (size: 0x18)
    FVector LeftEyeDirection;                                                         // 0x0018 (size: 0x18)
    FVector RightEyeOrigin;                                                           // 0x0030 (size: 0x18)
    FVector RightEyeDirection;                                                        // 0x0048 (size: 0x18)
    FVector FixationPoint;                                                            // 0x0060 (size: 0x18)
    float ConfidenceValue;                                                            // 0x0078 (size: 0x4)

}; // Size: 0x80

class UEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetEyeTrackedPlayer(class APlayerController* PlayerController);
    bool IsStereoGazeDataAvailable();
    bool IsEyeTrackerConnected();
    bool GetStereoGazeData(FEyeTrackerStereoGazeData& OutGazeData);
    bool GetGazeData(FEyeTrackerGazeData& OutGazeData);
}; // Size: 0x28

#endif
