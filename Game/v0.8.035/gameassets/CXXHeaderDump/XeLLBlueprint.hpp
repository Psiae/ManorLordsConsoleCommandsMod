#ifndef UE4SS_SDK_XeLLBlueprint_HPP
#define UE4SS_SDK_XeLLBlueprint_HPP

#include "XeLLBlueprint_enums.hpp"

class UXeLLBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void SetXeLLMode(const EXeLLMode Mode);
    void SetFlashIndicatorEnabled(const bool bEnabled);
    bool IsXeLLSupported();
    EXeLLMode GetXeLLMode();
    TArray<EXeLLMode> GetSupportedXeLLModes();
    float GetSimulationLatencyInMs();
    float GetRenderSubmitLatencyInMs();
    float GetRenderLatencyInMs();
    float GetPresentLatencyInMs();
    bool GetLatencyMarkEnabled();
    float GetInputLatencyInMs();
    float GetGameToRenderLatencyInMs();
    float GetGameLatencyInMs();
    bool GetFlashIndicatorEnabled();
}; // Size: 0x28

#endif
