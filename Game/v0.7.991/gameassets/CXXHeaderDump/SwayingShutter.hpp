#ifndef UE4SS_SDK_SwayingShutter_HPP
#define UE4SS_SDK_SwayingShutter_HPP

class USwayingShutter_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A0 (size: 0x8)
    FRotator defaultRotation;                                                         // 0x00A8 (size: 0x18)
    double swayDegrees;                                                               // 0x00C0 (size: 0x8)
    double swaySpeed;                                                                 // 0x00C8 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_SwayingShutter(int32 EntryPoint);
}; // Size: 0xD0

#endif
