#ifndef UE4SS_SDK_colorWidget_HPP
#define UE4SS_SDK_colorWidget_HPP

class UcolorWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UImage* Border;                                                             // 0x02D8 (size: 0x8)
    class UImage* colorIMG;                                                           // 0x02E0 (size: 0x8)
    double Color;                                                                     // 0x02E8 (size: 0x8)

    void setColor(double Color);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_colorWidget(int32 EntryPoint);
}; // Size: 0x2F0

#endif
