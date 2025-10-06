#ifndef UE4SS_SDK_MD_NaviAutoButton_HPP
#define UE4SS_SDK_MD_NaviAutoButton_HPP

class UMD_NaviAutoButton_C : public UNaviUi
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UMD_NaviAutoFocusHighlight_C* MD_NaviAutoFocusHighlight;                    // 0x0348 (size: 0x8)
    ENaviUiHighlightStyle Style;                                                      // 0x0350 (size: 0x1)
    FMD_NaviAutoButton_COnPress OnPress;                                              // 0x0358 (size: 0x10)
    void OnPress();
    bool TooltipIsEarlyAcces;                                                         // 0x0368 (size: 0x1)
    bool TooltipIsPcOnly;                                                             // 0x0369 (size: 0x1)
    double HighlightWidthMultiplier;                                                  // 0x0370 (size: 0x8)

    ENaviHandleMethod HandleInput(ENaviUiIntent Key);
    void OnFocusChanged(bool nowHasFocus);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_MD_NaviAutoButton(int32 EntryPoint);
    void OnPress__DelegateSignature();
}; // Size: 0x378

#endif
