#ifndef UE4SS_SDK_SellingGood_HPP
#define UE4SS_SDK_SellingGood_HPP

class USellingGood_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* amt_txt;                                                        // 0x0268 (size: 0x8)
    class UImage* Icon;                                                               // 0x0270 (size: 0x8)
    class UTextBlock* name_txt;                                                       // 0x0278 (size: 0x8)
    class UTextBlock* price_txt;                                                      // 0x0280 (size: 0x8)
    class UImage* sellico;                                                            // 0x0288 (size: 0x8)
    int32 Type;                                                                       // 0x0290 (size: 0x4)
    float Price;                                                                      // 0x0294 (size: 0x4)
    FString Name;                                                                     // 0x0298 (size: 0x10)
    class ARegion* Region;                                                            // 0x02A8 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_SellingGood(int32 EntryPoint);
}; // Size: 0x2B0

#endif
