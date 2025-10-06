#ifndef UE4SS_SDK_BP_SimpleBirdFlock_HPP
#define UE4SS_SDK_BP_SimpleBirdFlock_HPP

class ABP_SimpleBirdFlock_C : public ABirdFlock
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0410 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_SimpleBirdFlock(int32 EntryPoint);
}; // Size: 0x418

#endif
