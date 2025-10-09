#ifndef UE4SS_SDK_Price_HPP
#define UE4SS_SDK_Price_HPP

class UPrice_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* good_txt;                                                       // 0x0268 (size: 0x8)
    class UTextBlock* price_txt;                                                      // 0x0270 (size: 0x8)
    int32 goodID;                                                                     // 0x0278 (size: 0x4)
    float Price;                                                                      // 0x027C (size: 0x4)

    void Construct();
    void ExecuteUbergraph_Price(int32 EntryPoint);
}; // Size: 0x280

#endif
