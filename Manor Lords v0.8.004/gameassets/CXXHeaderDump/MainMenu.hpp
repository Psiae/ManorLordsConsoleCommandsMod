#ifndef UE4SS_SDK_MainMenu_HPP
#define UE4SS_SDK_MainMenu_HPP

class AMainMenu_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_MainMenu(int32 EntryPoint);
}; // Size: 0x2A0

#endif
