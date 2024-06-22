#ifndef UE4SS_SDK_minimapIcon_HPP
#define UE4SS_SDK_minimapIcon_HPP

class UminimapIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* iconButton;                                                        // 0x0268 (size: 0x8)
    int32 Type;                                                                       // 0x0270 (size: 0x4)

    void Construct();
    void ExecuteUbergraph_minimapIcon(int32 EntryPoint);
}; // Size: 0x274

#endif
