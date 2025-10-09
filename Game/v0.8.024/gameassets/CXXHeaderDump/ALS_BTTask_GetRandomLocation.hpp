#ifndef UE4SS_SDK_ALS_BTTask_GetRandomLocation_HPP
#define UE4SS_SDK_ALS_BTTask_GetRandomLocation_HPP

class UALS_BTTask_GetRandomLocation_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    double Radius;                                                                    // 0x00B0 (size: 0x8)
    FBlackboardKeySelector MoveToLocation;                                            // 0x00B8 (size: 0x28)
    FVector Location;                                                                 // 0x00E0 (size: 0x18)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_ALS_BTTask_GetRandomLocation(int32 EntryPoint);
}; // Size: 0xF8

#endif
