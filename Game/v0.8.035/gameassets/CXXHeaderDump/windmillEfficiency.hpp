#ifndef UE4SS_SDK_windmillEfficiency_HPP
#define UE4SS_SDK_windmillEfficiency_HPP

class UwindmillEfficiency_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UlocalizedTextBox_C* efficiencyText;                                        // 0x02D8 (size: 0x8)
    class UTextBlock* efficiencyValue;                                                // 0x02E0 (size: 0x8)
    class UImage* Image_20;                                                           // 0x02E8 (size: 0x8)
    class UTextBlock* percentSymbol;                                                  // 0x02F0 (size: 0x8)
    class UButton* WindmillButton;                                                    // 0x02F8 (size: 0x8)
    class UHorizontalBox* WindmillEfficiency_Container;                               // 0x0300 (size: 0x8)
    class UImage* windmillIcon;                                                       // 0x0308 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_windmillEfficiency(int32 EntryPoint);
}; // Size: 0x310

#endif
