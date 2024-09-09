#ifndef UE4SS_SDK_ALS_AI_Controller_HPP
#define UE4SS_SDK_ALS_AI_Controller_HPP

class AALS_AI_Controller_C : public AAIController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03B8 (size: 0x8)

    void ReceivePossess(class APawn* PossessedPawn);
    void ExecuteUbergraph_ALS_AI_Controller(int32 EntryPoint);
}; // Size: 0x3C0

#endif
