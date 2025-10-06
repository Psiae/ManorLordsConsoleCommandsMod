#ifndef UE4SS_SDK_StreamlineDLSSGBlueprint_HPP
#define UE4SS_SDK_StreamlineDLSSGBlueprint_HPP

#include "StreamlineDLSSGBlueprint_enums.hpp"

class UStreamlineLibraryDLSSG : public UBlueprintFunctionLibrary
{

    void SetDLSSGMode(EStreamlineDLSSGMode DLSSGMode);
    EStreamlineFeatureSupport QueryDLSSGSupport();
    bool IsDLSSGSupported();
    bool IsDLSSGModeSupported(EStreamlineDLSSGMode DLSSGMode);
    TArray<EStreamlineDLSSGMode> GetSupportedDLSSGModes();
    EStreamlineDLSSGMode GetDLSSGMode();
    void GetDLSSGFrameTiming(float& FrameRateInHertz, int32& FramesPresented);
    EStreamlineDLSSGMode GetDefaultDLSSGMode();
}; // Size: 0x28

#endif
