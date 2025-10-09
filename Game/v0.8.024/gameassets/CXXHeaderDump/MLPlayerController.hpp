#ifndef UE4SS_SDK_MLPlayerController_HPP
#define UE4SS_SDK_MLPlayerController_HPP

class AMLPlayerController_C : public APlayerController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0858 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_MLPlayerController(int32 EntryPoint);
}; // Size: 0x860

#endif
