#ifndef UE4SS_SDK_ALS_BTTask_SetFocus_HPP
#define UE4SS_SDK_ALS_BTTask_SetFocus_HPP

class UALS_BTTask_SetFocus_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_ALS_BTTask_SetFocus(int32 EntryPoint);
}; // Size: 0xB0

#endif
