#ifndef UE4SS_SDK_BigMap3d_HPP
#define UE4SS_SDK_BigMap3d_HPP

class UBigMap3d_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* NewAnimation_1;                                           // 0x0268 (size: 0x8)
    class UImage* blackGrad;                                                          // 0x0270 (size: 0x8)
    class UHorizontalBox* HB_Coats;                                                   // 0x0278 (size: 0x8)
    class UImage* Image_38;                                                           // 0x0280 (size: 0x8)
    class UImage* Image_69;                                                           // 0x0288 (size: 0x8)
    class UImage* spacervertical;                                                     // 0x0290 (size: 0x8)
    TArray<class URegionWidget_C*> regionWidgets;                                     // 0x0298 (size: 0x10)
    bool diploMode;                                                                   // 0x02A8 (size: 0x1)
    class ARegion* diploRegion;                                                       // 0x02B0 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void updateRegionList();
    void PlayAnim();
    void updateCoats();
    void Open();
    void ExecuteUbergraph_BigMap3d(int32 EntryPoint);
}; // Size: 0x2B8

#endif
