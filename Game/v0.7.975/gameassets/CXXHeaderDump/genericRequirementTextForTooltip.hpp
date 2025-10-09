#ifndef UE4SS_SDK_genericRequirementTextForTooltip_HPP
#define UE4SS_SDK_genericRequirementTextForTooltip_HPP

class UgenericRequirementTextForTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* TextBlock_127;                                                  // 0x0268 (size: 0x8)
    bool redColored;                                                                  // 0x0270 (size: 0x1)
    FText Text;                                                                       // 0x0278 (size: 0x18)

    void Construct();
    void ExecuteUbergraph_genericRequirementTextForTooltip(int32 EntryPoint);
}; // Size: 0x290

#endif
