#ifndef UE4SS_SDK_costResource_HPP
#define UE4SS_SDK_costResource_HPP

class UcostResource_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* amt_txt;                                                        // 0x0268 (size: 0x8)
    class UImage* Icon;                                                               // 0x0270 (size: 0x8)
    int32 Type;                                                                       // 0x0278 (size: 0x4)
    int32 amt;                                                                        // 0x027C (size: 0x4)
    bool colorRed;                                                                    // 0x0280 (size: 0x1)

    void Construct();
    void ExecuteUbergraph_costResource(int32 EntryPoint);
}; // Size: 0x281

#endif
