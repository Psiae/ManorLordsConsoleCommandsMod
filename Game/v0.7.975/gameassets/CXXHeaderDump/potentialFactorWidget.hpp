#ifndef UE4SS_SDK_potentialFactorWidget_HPP
#define UE4SS_SDK_potentialFactorWidget_HPP

class UpotentialFactorWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UBorder* Border_0;                                                          // 0x0268 (size: 0x8)
    class UTextBlock* effect_txt;                                                     // 0x0270 (size: 0x8)
    class UImage* Image_496;                                                          // 0x0278 (size: 0x8)
    class UTextBlock* potential_txt;                                                  // 0x0280 (size: 0x8)
    FPotentialFactor PotentialFactor;                                                 // 0x0288 (size: 0xC)
    int32 advantage;                                                                  // 0x0294 (size: 0x4)
    bool isMorale;                                                                    // 0x0298 (size: 0x1)

    void Construct();
    void ExecuteUbergraph_potentialFactorWidget(int32 EntryPoint);
}; // Size: 0x299

#endif
