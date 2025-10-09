#ifndef UE4SS_SDK_EyeTracker_HPP
#define UE4SS_SDK_EyeTracker_HPP

#include "EyeTracker_enums.hpp"

struct FEyeTrackerGazeData
{
    FVector GazeOrigin;                                                               // 0x0000 (size: 0xC)
    FVector GazeDirection;                                                            // 0x000C (size: 0xC)
    FVector FixationPoint;                                                            // 0x0018 (size: 0xC)
    float ConfidenceValue;                                                            // 0x0024 (size: 0x4)
    bool bIsLeftEyeBlink;                                                             // 0x0028 (size: 0x1)
    bool bIsRightEyeBlink;                                                            // 0x0029 (size: 0x1)
    float LeftPupilDiameter;                                                          // 0x002C (size: 0x4)
    float RightPupilDiameter;                                                         // 0x0030 (size: 0x4)

}; // Size: 0x34

struct FEyeTrackerStereoGazeData
{
    FVector LeftEyeOrigin;                                                            // 0x0000 (size: 0xC)
    FVector LeftEyeDirection;                                                         // 0x000C (size: 0xC)
    FVector RightEyeOrigin;                                                           // 0x0018 (size: 0xC)
    FVector RightEyeDirection;                                                        // 0x0024 (size: 0xC)
    FVector FixationPoint;                                                            // 0x0030 (size: 0xC)
    float ConfidenceValue;                                                            // 0x003C (size: 0x4)

}; // Size: 0x40

class UEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetEyeTrackedPlayer(class APlayerController* PlayerController);
    bool IsStereoGazeDataAvailable();
    bool IsEyeTrackerConnected();
    bool GetStereoGazeData(FEyeTrackerStereoGazeData& OutGazeData);
    bool GetGazeData(FEyeTrackerGazeData& OutGazeData);
}; // Size: 0x28

#endif
