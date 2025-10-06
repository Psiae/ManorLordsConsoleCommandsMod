#ifndef UE4SS_SDK_MassCommon_HPP
#define UE4SS_SDK_MassCommon_HPP

struct FAgentRadiusFragment : public FMassFragment
{
    float Radius;                                                                     // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FMassInt16Real
{
    int16 Value;                                                                      // 0x0000 (size: 0x2)

}; // Size: 0x2

struct FMassInt16Real10
{
    int16 Value;                                                                      // 0x0000 (size: 0x2)

}; // Size: 0x2

struct FMassInt16Vector
{
    int16 X;                                                                          // 0x0000 (size: 0x2)
    int16 Y;                                                                          // 0x0002 (size: 0x2)
    int16 Z;                                                                          // 0x0004 (size: 0x2)

}; // Size: 0x6

struct FMassInt16Vector2D
{
    int16 X;                                                                          // 0x0000 (size: 0x2)
    int16 Y;                                                                          // 0x0002 (size: 0x2)

}; // Size: 0x4

struct FMassNetworkID : public FSequentialIDBase
{
}; // Size: 0x4

struct FMassSnorm8Vector
{
    int8 X;                                                                           // 0x0000 (size: 0x1)
    int8 Y;                                                                           // 0x0001 (size: 0x1)
    int8 Z;                                                                           // 0x0002 (size: 0x1)

}; // Size: 0x3

struct FMassSnorm8Vector2D
{
    int8 X;                                                                           // 0x0000 (size: 0x1)
    int8 Y;                                                                           // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FMassUnorm8Real
{
    uint8 Value;                                                                      // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FObjectWrapperFragment : public FMassFragment
{
}; // Size: 0x1

struct FTransformFragment : public FMassFragment
{
    FTransform Transform;                                                             // 0x0000 (size: 0x60)

}; // Size: 0x60

class UMassGameplaySettings : public UMassModuleSettings
{
    bool bLogSpawnLocations;                                                          // 0x0028 (size: 0x1)

}; // Size: 0x30

#endif
