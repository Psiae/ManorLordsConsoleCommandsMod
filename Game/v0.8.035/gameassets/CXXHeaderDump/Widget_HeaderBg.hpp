#ifndef UE4SS_SDK_Widget_HeaderBg_HPP
#define UE4SS_SDK_Widget_HeaderBg_HPP

class UWidget_HeaderBg_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UImage* Left;                                                               // 0x02D8 (size: 0x8)
    class UImage* Mid;                                                                // 0x02E0 (size: 0x8)
    class UImage* Right;                                                              // 0x02E8 (size: 0x8)
    bool MID_Created;                                                                 // 0x02F0 (size: 0x1)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_Widget_HeaderBg(int32 EntryPoint);
}; // Size: 0x2F1

#endif
