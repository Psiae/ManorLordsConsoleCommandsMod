#ifndef UE4SS_SDK_tabHint_HPP
#define UE4SS_SDK_tabHint_HPP

class UtabHint_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UMD_ControllerHotkey_C* MD_ControllerHotkey;                                // 0x02D8 (size: 0x8)
    class UBorder* tab_border;                                                        // 0x02E0 (size: 0x8)
    class UTextBlock* TabLabel;                                                       // 0x02E8 (size: 0x8)
    bool WasControllerMode;                                                           // 0x02F0 (size: 0x1)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_tabHint(int32 EntryPoint);
}; // Size: 0x2F1

#endif
