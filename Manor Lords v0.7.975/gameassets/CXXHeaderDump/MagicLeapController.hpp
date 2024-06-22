#ifndef UE4SS_SDK_MagicLeapController_HPP
#define UE4SS_SDK_MagicLeapController_HPP

#include "MagicLeapController_enums.hpp"

struct FMagicLeapTouchpadGesture
{
    EControllerHand hand;                                                             // 0x0000 (size: 0x1)
    FName MotionSource;                                                               // 0x0004 (size: 0x8)
    EMagicLeapTouchpadGestureType Type;                                               // 0x000C (size: 0x1)
    EMagicLeapTouchpadGestureDirection Direction;                                     // 0x000D (size: 0x1)
    FVector PositionAndForce;                                                         // 0x0010 (size: 0xC)
    float Speed;                                                                      // 0x001C (size: 0x4)
    float Distance;                                                                   // 0x0020 (size: 0x4)
    float FingerGap;                                                                  // 0x0024 (size: 0x4)
    float Radius;                                                                     // 0x0028 (size: 0x4)
    float Angle;                                                                      // 0x002C (size: 0x4)

}; // Size: 0x30

class UMagicLeapControllerFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool SetMotionSourceForHand(EControllerHand hand, FName MotionSource);
    bool SetControllerTrackingMode(EMagicLeapControllerTrackingMode TrackingMode);
    bool PlayLEDPattern(FName MotionSource, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
    bool PlayLEDEffect(FName MotionSource, EMagicLeapControllerLEDEffect LEDEffect, EMagicLeapControllerLEDSpeed LEDSpeed, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
    bool PlayHapticPattern(FName MotionSource, EMagicLeapControllerHapticPattern HapticPattern, EMagicLeapControllerHapticIntensity Intensity);
    bool PlayControllerLEDEffect(EControllerHand hand, EMagicLeapControllerLEDEffect LEDEffect, EMagicLeapControllerLEDSpeed LEDSpeed, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
    bool PlayControllerLED(EControllerHand hand, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
    bool PlayControllerHapticFeedback(EControllerHand hand, EMagicLeapControllerHapticPattern HapticPattern, EMagicLeapControllerHapticIntensity Intensity);
    int32 MaxSupportedMagicLeapControllers();
    bool IsMLControllerConnected(FName MotionSource);
    void InvertControllerMapping();
    FName GetMotionSourceForHand(EControllerHand hand);
    EMagicLeapControllerType GetMLControllerType(EControllerHand hand);
    EControllerHand GetHandForMotionSource(FName MotionSource);
    EMagicLeapControllerType GetControllerType(FName MotionSource);
    EMagicLeapControllerTrackingMode GetControllerTrackingMode();
    bool GetControllerMapping(int32 ControllerIndex, EControllerHand& hand);
}; // Size: 0x28

class UMagicLeapTouchpadGesturesComponent : public UActorComponent
{
    FMagicLeapTouchpadGesturesComponentOnTouchpadGestureStart OnTouchpadGestureStart; // 0x00B8 (size: 0x10)
    void TouchpadGestureEvent(const FMagicLeapTouchpadGesture& GestureData);
    FMagicLeapTouchpadGesturesComponentOnTouchpadGestureContinue OnTouchpadGestureContinue; // 0x00C8 (size: 0x10)
    void TouchpadGestureEvent(const FMagicLeapTouchpadGesture& GestureData);
    FMagicLeapTouchpadGesturesComponentOnTouchpadGestureEnd OnTouchpadGestureEnd;     // 0x00D8 (size: 0x10)
    void TouchpadGestureEvent(const FMagicLeapTouchpadGesture& GestureData);

}; // Size: 0x140

#endif
