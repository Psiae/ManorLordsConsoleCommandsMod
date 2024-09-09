#ifndef UE4SS_SDK_skillTier_HPP
#define UE4SS_SDK_skillTier_HPP

class UskillTier_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Image_262;                                                          // 0x02E8 (size: 0x8)
    class UTextBlock* TextBlock_495;                                                  // 0x02F0 (size: 0x8)
    FText tierTxt;                                                                    // 0x02F8 (size: 0x10)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_skillTier(int32 EntryPoint);
}; // Size: 0x308

#endif
