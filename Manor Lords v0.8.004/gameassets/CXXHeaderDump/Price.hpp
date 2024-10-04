#ifndef UE4SS_SDK_Price_HPP
#define UE4SS_SDK_Price_HPP

class UPrice_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* good_txt;                                                       // 0x02E8 (size: 0x8)
    class UTextBlock* price_txt;                                                      // 0x02F0 (size: 0x8)
    int32 goodID;                                                                     // 0x02F8 (size: 0x4)
    double Price;                                                                     // 0x0300 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_Price(int32 EntryPoint);
}; // Size: 0x308

#endif
