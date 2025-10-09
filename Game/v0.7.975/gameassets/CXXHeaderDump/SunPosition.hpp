#ifndef UE4SS_SDK_SunPosition_HPP
#define UE4SS_SDK_SunPosition_HPP

struct FSunPositionData
{
    float Elevation;                                                                  // 0x0000 (size: 0x4)
    float CorrectedElevation;                                                         // 0x0004 (size: 0x4)
    float Azimuth;                                                                    // 0x0008 (size: 0x4)
    FTimespan SunriseTime;                                                            // 0x0010 (size: 0x8)
    FTimespan SunsetTime;                                                             // 0x0018 (size: 0x8)
    FTimespan SolarNoon;                                                              // 0x0020 (size: 0x8)

}; // Size: 0x28

class USunPositionFunctionLibrary : public UBlueprintFunctionLibrary
{

    void GetSunPosition(float Latitude, float Longitude, float TimeZone, bool bIsDaylightSavingTime, int32 Year, int32 Month, int32 Day, int32 Hours, int32 Minutes, int32 Seconds, FSunPositionData& SunPositionData);
}; // Size: 0x28

#endif
