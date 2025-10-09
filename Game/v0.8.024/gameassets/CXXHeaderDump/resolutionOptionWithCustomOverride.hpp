#ifndef UE4SS_SDK_resolutionOptionWithCustomOverride_HPP
#define UE4SS_SDK_resolutionOptionWithCustomOverride_HPP

class UresolutionOptionWithCustomOverride_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* TextBlock_16;                                                   // 0x02E8 (size: 0x8)
    FString Item;                                                                     // 0x02F0 (size: 0x10)
    TArray<FIntPoint> commonResolutions;                                              // 0x0300 (size: 0x10)

    void Construct();
    void ExecuteUbergraph_resolutionOptionWithCustomOverride(int32 EntryPoint);
}; // Size: 0x310

#endif
