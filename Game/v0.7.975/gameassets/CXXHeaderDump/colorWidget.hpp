#ifndef UE4SS_SDK_colorWidget_HPP
#define UE4SS_SDK_colorWidget_HPP

class UcolorWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Border;                                                             // 0x0268 (size: 0x8)
    class UImage* colorIMG;                                                           // 0x0270 (size: 0x8)
    float Color;                                                                      // 0x0278 (size: 0x4)

    void setColor(float Color);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_colorWidget(int32 EntryPoint);
}; // Size: 0x27C

#endif
