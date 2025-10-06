#ifndef UE4SS_SDK_RequirementRatingSimplePip_HPP
#define UE4SS_SDK_RequirementRatingSimplePip_HPP

class URequirementRatingSimplePip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UImage* Pip_Border;                                                         // 0x02D8 (size: 0x8)
    class UImage* SuppliedGoodIcon_Image;                                             // 0x02E0 (size: 0x8)
    FLinearColor UnsatisfiedTint;                                                     // 0x02E8 (size: 0x10)
    FLinearColor TriggeringTint;                                                      // 0x02F8 (size: 0x10)

    void UpdatePipImage(bool satisfied, int32 SuppliedGoodType, bool Triggering);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_RequirementRatingSimplePip(int32 EntryPoint);
}; // Size: 0x308

#endif
