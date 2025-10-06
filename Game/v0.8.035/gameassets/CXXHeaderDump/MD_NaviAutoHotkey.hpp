#ifndef UE4SS_SDK_MD_NaviAutoHotkey_HPP
#define UE4SS_SDK_MD_NaviAutoHotkey_HPP

class UMD_NaviAutoHotkey_C : public UAutoIconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UImage* IconDisplay;                                                        // 0x02D8 (size: 0x8)

    void SetIcon(class UTexture2D* iconSource);
    void ExecuteUbergraph_MD_NaviAutoHotkey(int32 EntryPoint);
}; // Size: 0x2E0

#endif
