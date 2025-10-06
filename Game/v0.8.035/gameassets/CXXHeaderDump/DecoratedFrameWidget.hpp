#ifndef UE4SS_SDK_DecoratedFrameWidget_HPP
#define UE4SS_SDK_DecoratedFrameWidget_HPP

class UDecoratedFrameWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UImage* bottom_loop;                                                        // 0x02D8 (size: 0x8)
    class UImage* centerTiling;                                                       // 0x02E0 (size: 0x8)
    class UImage* corner;                                                             // 0x02E8 (size: 0x8)
    class UImage* corner_1;                                                           // 0x02F0 (size: 0x8)
    class UImage* corner_2;                                                           // 0x02F8 (size: 0x8)
    class UImage* corner_3;                                                           // 0x0300 (size: 0x8)
    class UImage* left_loop;                                                          // 0x0308 (size: 0x8)
    class UImage* right_loop;                                                         // 0x0310 (size: 0x8)
    class UImage* top_loop;                                                           // 0x0318 (size: 0x8)
    double CornerSize;                                                                // 0x0320 (size: 0x8)
    double FrameThickness;                                                            // 0x0328 (size: 0x8)
    double DefaultWidth;                                                              // 0x0330 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_DecoratedFrameWidget(int32 EntryPoint);
}; // Size: 0x338

#endif
