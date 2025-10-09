#ifndef UE4SS_SDK_MagicLeapEyeTracker_HPP
#define UE4SS_SDK_MagicLeapEyeTracker_HPP

#include "MagicLeapEyeTracker_enums.hpp"

struct FMagicLeapEyeBlinkState
{
    bool LeftEyeBlinked;                                                              // 0x0000 (size: 0x1)
    bool RightEyeBlinked;                                                             // 0x0001 (size: 0x1)

}; // Size: 0x2

class UMagicLeapEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool GetEyeBlinkState(FMagicLeapEyeBlinkState& BlinkState);
    EMagicLeapEyeTrackingCalibrationStatus GetCalibrationStatus();
}; // Size: 0x28

#endif
