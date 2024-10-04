#ifndef UE4SS_SDK_InterchangeCommonParser_HPP
#define UE4SS_SDK_InterchangeCommonParser_HPP

#include "InterchangeCommonParser_enums.hpp"

struct FInterchangeCurve
{
    TArray<FInterchangeCurveKey> keys;                                                // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FInterchangeCurveKey
{
    EInterchangeCurveInterpMode InterpMode;                                           // 0x0000 (size: 0x1)
    EInterchangeCurveTangentMode TangentMode;                                         // 0x0001 (size: 0x1)
    EInterchangeCurveTangentWeightMode TangentWeightMode;                             // 0x0002 (size: 0x1)
    float Time;                                                                       // 0x0004 (size: 0x4)
    float Value;                                                                      // 0x0008 (size: 0x4)
    float ArriveTangent;                                                              // 0x000C (size: 0x4)
    float ArriveTangentWeight;                                                        // 0x0010 (size: 0x4)
    float LeaveTangent;                                                               // 0x0014 (size: 0x4)
    float LeaveTangentWeight;                                                         // 0x0018 (size: 0x4)

}; // Size: 0x1C

struct FInterchangeStepCurve
{
    TArray<float> KeyTimes;                                                           // 0x0000 (size: 0x10)

}; // Size: 0x88

#endif
