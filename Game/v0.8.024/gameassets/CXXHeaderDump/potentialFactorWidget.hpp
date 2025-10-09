#ifndef UE4SS_SDK_potentialFactorWidget_HPP
#define UE4SS_SDK_potentialFactorWidget_HPP

class UpotentialFactorWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UBorder* Border_0;                                                          // 0x02E8 (size: 0x8)
    class UTextBlock* effect_txt;                                                     // 0x02F0 (size: 0x8)
    class UImage* Image_496;                                                          // 0x02F8 (size: 0x8)
    class UTextBlock* potential_txt;                                                  // 0x0300 (size: 0x8)
    FPotentialFactor PotentialFactor;                                                 // 0x0308 (size: 0xC)
    int32 advantage;                                                                  // 0x0314 (size: 0x4)
    bool isMorale;                                                                    // 0x0318 (size: 0x1)

    void Construct();
    void ExecuteUbergraph_potentialFactorWidget(int32 EntryPoint);
}; // Size: 0x319

#endif
