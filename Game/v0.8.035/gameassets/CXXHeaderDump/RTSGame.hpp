#ifndef UE4SS_SDK_RTSGame_HPP
#define UE4SS_SDK_RTSGame_HPP

class ARTSGame_C : public AGameModeBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0348 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_RTSGame(int32 EntryPoint);
}; // Size: 0x350

#endif
