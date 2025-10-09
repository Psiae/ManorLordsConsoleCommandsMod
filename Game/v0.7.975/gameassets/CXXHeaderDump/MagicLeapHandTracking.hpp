#ifndef UE4SS_SDK_MagicLeapHandTracking_HPP
#define UE4SS_SDK_MagicLeapHandTracking_HPP

#include "MagicLeapHandTracking_enums.hpp"

class ULiveLinkMagicLeapHandTrackingSourceFactory : public ULiveLinkSourceFactory
{
}; // Size: 0x28

class UMagicLeapHandTrackingFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetStaticGestureConfidenceThreshold(EMagicLeapHandTrackingGesture Gesture, float Confidence);
    bool SetConfiguration(const TArray<EMagicLeapHandTrackingGesture>& StaticGesturesToActivate, EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel, EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel, bool bTrackingEnabled);
    bool IsHoldingControl(EControllerHand hand);
    float GetStaticGestureConfidenceThreshold(EMagicLeapHandTrackingGesture Gesture);
    bool GetMotionSourceForHandKeypoint(EControllerHand hand, EMagicLeapHandTrackingKeypoint Keypoint, FName& OutMotionSource);
    bool GetMagicLeapHandTrackingLiveLinkSource(FLiveLinkSourceHandle& SourceHandle);
    bool GetHandThumbTip(EControllerHand hand, EMagicLeapGestureTransformSpace TransformSpace, FTransform& Secondary);
    bool GetHandKeypointForMotionSource(FName MotionSource, EMagicLeapHandTrackingKeypoint& OutKeyPoint);
    bool GetHandIndexFingerTip(EControllerHand hand, EMagicLeapGestureTransformSpace TransformSpace, FTransform& Pointer);
    bool GetHandCenterNormalized(EControllerHand hand, FVector& HandCenterNormalized);
    bool GetHandCenter(EControllerHand hand, FTransform& HandCenter);
    bool GetGestureKeypointTransform(EControllerHand hand, EMagicLeapHandTrackingKeypoint Keypoint, EMagicLeapGestureTransformSpace TransformSpace, FTransform& Transform);
    bool GetGestureKeypoints(EControllerHand hand, TArray<FTransform>& Keypoints);
    bool GetCurrentGestureConfidence(EControllerHand hand, float& Confidence);
    bool GetCurrentGesture(EControllerHand hand, EMagicLeapHandTrackingGesture& Gesture);
    bool GetConfiguration(TArray<EMagicLeapHandTrackingGesture>& ActiveStaticGestures, EMagicLeapHandTrackingKeypointFilterLevel& KeypointsFilterLevel, EMagicLeapHandTrackingGestureFilterLevel& GestureFilterLevel, bool& bTrackingEnabled);
}; // Size: 0x28

#endif
