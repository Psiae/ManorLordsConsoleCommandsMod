#ifndef UE4SS_SDK_SellingGood_HPP
#define UE4SS_SDK_SellingGood_HPP

class USellingGood_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* amt_txt;                                                        // 0x02E8 (size: 0x8)
    class UImage* Icon;                                                               // 0x02F0 (size: 0x8)
    class UTextBlock* name_txt;                                                       // 0x02F8 (size: 0x8)
    class UTextBlock* price_txt;                                                      // 0x0300 (size: 0x8)
    class UImage* sellico;                                                            // 0x0308 (size: 0x8)
    int32 Type;                                                                       // 0x0310 (size: 0x4)
    double Price;                                                                     // 0x0318 (size: 0x8)
    FString Name;                                                                     // 0x0320 (size: 0x10)
    class ARegion* Region;                                                            // 0x0330 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_SellingGood(int32 EntryPoint);
}; // Size: 0x338

#endif
