#ifndef UE4SS_SDK_StreamlineDeepDVCBlueprint_HPP
#define UE4SS_SDK_StreamlineDeepDVCBlueprint_HPP

#include "StreamlineDeepDVCBlueprint_enums.hpp"

class UStreamlineLibraryDeepDVC : public UBlueprintFunctionLibrary
{

    void SetDeepDVCSaturationBoost(float Intensity);
    void SetDeepDVCMode(EStreamlineDeepDVCMode DeepDVCMode);
    void SetDeepDVCIntensity(float Intensity);
    EStreamlineFeatureSupport QueryDeepDVCSupport();
    bool IsDeepDVCSupported();
    bool IsDeepDVCModeSupported(EStreamlineDeepDVCMode DeepDVCMode);
    TArray<EStreamlineDeepDVCMode> GetSupportedDeepDVCModes();
    EStreamlineDeepDVCMode GetDefaultDeepDVCMode();
    float GetDeepDVCSaturationBoost();
    EStreamlineDeepDVCMode GetDeepDVCMode();
    float GetDeepDVCIntensity();
}; // Size: 0x28

#endif
