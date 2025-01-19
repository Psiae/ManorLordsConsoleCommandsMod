#ifndef UE4SS_SDK_PlayerStart_MainMenu_HPP
#define UE4SS_SDK_PlayerStart_MainMenu_HPP

class APlayerStart_MainMenu_C : public APlayerStart
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UCineCameraComponent* CineCamera;                                           // 0x02C8 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_PlayerStart_MainMenu(int32 EntryPoint);
}; // Size: 0x2D0

#endif
