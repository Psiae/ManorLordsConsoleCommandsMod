#ifndef UE4SS_SDK_StreamlineReflexBlueprint_HPP
#define UE4SS_SDK_StreamlineReflexBlueprint_HPP

#include "StreamlineReflexBlueprint_enums.hpp"

class UStreamlineLibraryReflex : public UBlueprintFunctionLibrary
{

    void SetReflexMode(const EStreamlineReflexMode Mode);
    EStreamlineFeatureSupport QueryReflexSupport();
    bool IsReflexSupported();
    bool IsReflexModeSupported(EStreamlineReflexMode ReflexMode);
    TArray<EStreamlineReflexMode> GetSupportedReflexModes();
    float GetRenderLatencyInMs();
    EStreamlineReflexMode GetReflexMode();
    float GetGameToRenderLatencyInMs();
    float GetGameLatencyInMs();
    EStreamlineReflexMode GetDefaultReflexMode();
}; // Size: 0x28

#endif
