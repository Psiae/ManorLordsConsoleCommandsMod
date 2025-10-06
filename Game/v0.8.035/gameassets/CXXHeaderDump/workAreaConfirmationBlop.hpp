#ifndef UE4SS_SDK_workAreaConfirmationBlop_HPP
#define UE4SS_SDK_workAreaConfirmationBlop_HPP

class AworkAreaConfirmationBlop_C : public AStaticMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B8 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_workAreaConfirmationBlop(int32 EntryPoint);
}; // Size: 0x2C0

#endif
