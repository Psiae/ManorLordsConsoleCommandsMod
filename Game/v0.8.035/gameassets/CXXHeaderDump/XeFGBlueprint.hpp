#ifndef UE4SS_SDK_XeFGBlueprint_HPP
#define UE4SS_SDK_XeFGBlueprint_HPP

#include "XeFGBlueprint_enums.hpp"

class UXeFGBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void SetXeFGMode(EXeFGMode Mode);
    bool IsXeFGSupported();
    bool IfRelaunchRequiredByXeFG();
    EXeFGMode GetXeFGMode();
    TArray<EXeFGMode> GetSupportedXeFGModes();
}; // Size: 0x28

#endif
