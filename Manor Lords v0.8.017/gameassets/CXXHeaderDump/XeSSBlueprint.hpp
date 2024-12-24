#ifndef UE4SS_SDK_XeSSBlueprint_HPP
#define UE4SS_SDK_XeSSBlueprint_HPP

#include "XeSSBlueprint_enums.hpp"

class UXeSSBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void SetXeSSQualityMode(EXeSSQualityMode QualityMode);
    bool IsXeSSSupported();
    bool GetXeSSQualityModeInformation(EXeSSQualityMode QualityMode, float& ScreenPercentage);
    EXeSSQualityMode GetXeSSQualityMode();
    TArray<EXeSSQualityMode> GetSupportedXeSSQualityModes();
    EXeSSQualityMode GetDefaultXeSSQualityMode(FIntPoint ScreenResolution);
}; // Size: 0x28

#endif
