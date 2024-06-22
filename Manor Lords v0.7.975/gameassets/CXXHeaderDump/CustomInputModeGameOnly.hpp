#ifndef UE4SS_SDK_CustomInputModeGameOnly_HPP
#define UE4SS_SDK_CustomInputModeGameOnly_HPP

class UCustomInputModeGameOnlyBPLibrary : public UBlueprintFunctionLibrary
{

    void SetInputMode_GameOnlyCustom(class APlayerController* PlayerController, bool bConsumeCaptureMouseDown);
}; // Size: 0x28

#endif
