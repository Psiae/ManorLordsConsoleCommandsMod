#ifndef UE4SS_SDK_skillTier_HPP
#define UE4SS_SDK_skillTier_HPP

class UskillTier_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_262;                                                          // 0x0268 (size: 0x8)
    class UTextBlock* TextBlock_495;                                                  // 0x0270 (size: 0x8)
    FText tierTxt;                                                                    // 0x0278 (size: 0x18)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_skillTier(int32 EntryPoint);
}; // Size: 0x290

#endif
