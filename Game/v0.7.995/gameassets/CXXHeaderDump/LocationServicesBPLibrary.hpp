#ifndef UE4SS_SDK_LocationServicesBPLibrary_HPP
#define UE4SS_SDK_LocationServicesBPLibrary_HPP

#include "LocationServicesBPLibrary_enums.hpp"

struct FLocationServicesData
{
    float Timestamp;                                                                  // 0x0000 (size: 0x4)
    float Longitude;                                                                  // 0x0004 (size: 0x4)
    float Latitude;                                                                   // 0x0008 (size: 0x4)
    float HorizontalAccuracy;                                                         // 0x000C (size: 0x4)
    float VerticalAccuracy;                                                           // 0x0010 (size: 0x4)
    float Altitude;                                                                   // 0x0014 (size: 0x4)

}; // Size: 0x18

class ULocationServices : public UBlueprintFunctionLibrary
{

    bool StopLocationServices();
    bool StartLocationServices();
    bool IsLocationAccuracyAvailable(ELocationAccuracy Accuracy);
    bool InitLocationServices(ELocationAccuracy Accuracy, float UpdateFrequency, float MinDistanceFilter);
    class ULocationServicesImpl* GetLocationServicesImpl();
    FLocationServicesData GetLastKnownLocation();
    bool AreLocationServicesEnabled();
}; // Size: 0x28

class ULocationServicesImpl : public UObject
{
    FLocationServicesImplOnLocationChanged OnLocationChanged;                         // 0x0028 (size: 0x10)
    void LocationServicesData_OnLocationChanged(FLocationServicesData LocationData);

}; // Size: 0x38

#endif
