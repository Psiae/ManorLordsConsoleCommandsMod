#ifndef UE4SS_SDK_MD_NaviAutoFocusHighlight_HPP
#define UE4SS_SDK_MD_NaviAutoFocusHighlight_HPP

class UMD_NaviAutoFocusHighlight_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Bg;                                                                 // 0x02E8 (size: 0x8)
    bool SelfManage;                                                                  // 0x02F0 (size: 0x1)
    ENaviUiHighlightStyle Style;                                                      // 0x02F1 (size: 0x1)

    void ApplyStyle(ENaviUiHighlightStyle NewStyle);
    void ConsiderTooltipShown(bool WantToShow);
    void ApplyDoShowHasFocus(bool HasFocus);
    void FindNaviParent(class UNaviUi*& AsNavi Ui);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnParentHasFocus(bool HasFocus);
    void ExecuteUbergraph_MD_NaviAutoFocusHighlight(int32 EntryPoint);
}; // Size: 0x2F2

#endif
