#ifndef UE4SS_SDK_roadCurvatureBar_WorkAreaBar_HPP
#define UE4SS_SDK_roadCurvatureBar_WorkAreaBar_HPP

class UroadCurvatureBar_WorkAreaBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UProgressBar* ProgressBar_59;                                               // 0x02D8 (size: 0x8)
    class UTextBlock* TextBlock_142;                                                  // 0x02E0 (size: 0x8)
    bool workAreaSize;                                                                // 0x02E8 (size: 0x1)
    uint8 Mode;                                                                       // 0x02E9 (size: 0x1)
    uint8 modePrev;                                                                   // 0x02EA (size: 0x1)
    double workAreaMin;                                                               // 0x02F0 (size: 0x8)
    double workAreaMax;                                                               // 0x02F8 (size: 0x8)

    void updateModeLabel();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_roadCurvatureBar_WorkAreaBar(int32 EntryPoint);
}; // Size: 0x300

#endif
