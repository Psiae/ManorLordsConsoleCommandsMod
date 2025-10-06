#ifndef UE4SS_SDK_Widget_Frame_Scroll_Simple_HPP
#define UE4SS_SDK_Widget_Frame_Scroll_Simple_HPP

class UWidget_Frame_Scroll_Simple_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UImage* BorderInterior;                                                     // 0x02D8 (size: 0x8)
    class UImage* BottomLeft;                                                         // 0x02E0 (size: 0x8)
    class UImage* BottomRight;                                                        // 0x02E8 (size: 0x8)
    class UImage* LoopBottom;                                                         // 0x02F0 (size: 0x8)
    class UImage* LoopLeft;                                                           // 0x02F8 (size: 0x8)
    class UImage* LoopRight;                                                          // 0x0300 (size: 0x8)
    class UImage* LoopTop;                                                            // 0x0308 (size: 0x8)
    class UImage* TopLeft;                                                            // 0x0310 (size: 0x8)
    class UImage* TopRight;                                                           // 0x0318 (size: 0x8)
    bool MID_Created;                                                                 // 0x0320 (size: 0x1)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_Widget_Frame_Scroll_Simple(int32 EntryPoint);
}; // Size: 0x321

#endif
