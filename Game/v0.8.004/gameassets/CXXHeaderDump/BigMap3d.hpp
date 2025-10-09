#ifndef UE4SS_SDK_BigMap3d_HPP
#define UE4SS_SDK_BigMap3d_HPP

class UBigMap3d_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* NewAnimation_1;                                           // 0x02E8 (size: 0x8)
    class UImage* blackGrad;                                                          // 0x02F0 (size: 0x8)
    class UHorizontalBox* HB_Coats;                                                   // 0x02F8 (size: 0x8)
    class UImage* Image_38;                                                           // 0x0300 (size: 0x8)
    class UImage* Image_69;                                                           // 0x0308 (size: 0x8)
    class UImage* spacervertical;                                                     // 0x0310 (size: 0x8)
    TArray<class URegionWidget_C*> regionWidgets;                                     // 0x0318 (size: 0x10)
    bool diploMode;                                                                   // 0x0328 (size: 0x1)
    class ARegion* diploRegion;                                                       // 0x0330 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void updateRegionList();
    void PlayAnim();
    void updateCoats();
    void Open();
    void ExecuteUbergraph_BigMap3d(int32 EntryPoint);
}; // Size: 0x338

#endif
