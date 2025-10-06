#ifndef UE4SS_SDK_MD_ControllerHotkey_HPP
#define UE4SS_SDK_MD_ControllerHotkey_HPP

class UMD_ControllerHotkey_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UImage* IconDisplay;                                                        // 0x02D8 (size: 0x8)
    class UCanvasPanel* IconRoot;                                                     // 0x02E0 (size: 0x8)
    bool WasControllerMode;                                                           // 0x02E8 (size: 0x1)
    EInputIconButton InputButton;                                                     // 0x02E9 (size: 0x1)

    void SetSelfVisible(bool IsVisible);
    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_MD_ControllerHotkey(int32 EntryPoint);
}; // Size: 0x2EA

#endif
