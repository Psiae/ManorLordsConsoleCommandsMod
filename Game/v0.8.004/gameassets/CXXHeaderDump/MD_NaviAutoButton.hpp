#ifndef UE4SS_SDK_MD_NaviAutoButton_HPP
#define UE4SS_SDK_MD_NaviAutoButton_HPP

class UMD_NaviAutoButton_C : public UNaviUi
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UMD_NaviAutoFocusHighlight_C* MD_NaviAutoFocusHighlight;                    // 0x0350 (size: 0x8)
    ENaviUiHighlightStyle Style;                                                      // 0x0358 (size: 0x1)
    FMD_NaviAutoButton_COnPress OnPress;                                              // 0x0360 (size: 0x10)
    void OnPress();

    ENaviHandleMethod HandleInput(ENaviUiIntent Key);
    void PreConstruct(bool IsDesignTime);
    void OnFocusChanged(bool nowHasFocus);
    void ExecuteUbergraph_MD_NaviAutoButton(int32 EntryPoint);
    void OnPress__DelegateSignature();
}; // Size: 0x370

#endif
