#ifndef UE4SS_SDK_MD_NaviHijackProxy_HPP
#define UE4SS_SDK_MD_NaviHijackProxy_HPP

class UMD_NaviHijackProxy_C : public UNaviUi
{
    class UMD_NaviAutoFocusHighlight_C* MD_NaviAutoFocusHighlight;                    // 0x0348 (size: 0x8)
    FMD_NaviHijackProxy_CHijackedHandleInput HijackedHandleInput;                     // 0x0350 (size: 0x10)
    void HijackedHandleInput(ENaviUiIntent intent);
    bool DoesWantAllInput;                                                            // 0x0360 (size: 0x1)

    bool WantsAllInput();
    ENaviHandleMethod HandleInput(ENaviUiIntent Key);
    void HijackedHandleInput__DelegateSignature(ENaviUiIntent intent);
}; // Size: 0x361

#endif
