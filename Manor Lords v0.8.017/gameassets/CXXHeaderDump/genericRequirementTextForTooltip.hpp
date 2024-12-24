#ifndef UE4SS_SDK_genericRequirementTextForTooltip_HPP
#define UE4SS_SDK_genericRequirementTextForTooltip_HPP

class UgenericRequirementTextForTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* TextBlock_127;                                                  // 0x02E8 (size: 0x8)
    bool redColored;                                                                  // 0x02F0 (size: 0x1)
    FText Text;                                                                       // 0x02F8 (size: 0x10)

    void Construct();
    void ExecuteUbergraph_genericRequirementTextForTooltip(int32 EntryPoint);
}; // Size: 0x308

#endif
