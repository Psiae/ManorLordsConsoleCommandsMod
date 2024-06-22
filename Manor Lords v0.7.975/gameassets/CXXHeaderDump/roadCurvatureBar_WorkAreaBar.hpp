#ifndef UE4SS_SDK_roadCurvatureBar_WorkAreaBar_HPP
#define UE4SS_SDK_roadCurvatureBar_WorkAreaBar_HPP

class UroadCurvatureBar_WorkAreaBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UProgressBar* ProgressBar_59;                                               // 0x0268 (size: 0x8)
    class UTextBlock* TextBlock_142;                                                  // 0x0270 (size: 0x8)
    bool workAreaSize;                                                                // 0x0278 (size: 0x1)
    uint8 Mode;                                                                       // 0x0279 (size: 0x1)
    uint8 modePrev;                                                                   // 0x027A (size: 0x1)
    float workAreaMin;                                                                // 0x027C (size: 0x4)
    float workAreaMax;                                                                // 0x0280 (size: 0x4)

    void updateModeLabel();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_roadCurvatureBar_WorkAreaBar(int32 EntryPoint);
}; // Size: 0x284

#endif
