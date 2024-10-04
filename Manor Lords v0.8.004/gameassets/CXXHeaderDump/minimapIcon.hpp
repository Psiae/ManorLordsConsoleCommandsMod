#ifndef UE4SS_SDK_minimapIcon_HPP
#define UE4SS_SDK_minimapIcon_HPP

class UminimapIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* iconButton;                                                        // 0x02E8 (size: 0x8)
    int32 Type;                                                                       // 0x02F0 (size: 0x4)

    void Construct();
    void ExecuteUbergraph_minimapIcon(int32 EntryPoint);
}; // Size: 0x2F4

#endif
