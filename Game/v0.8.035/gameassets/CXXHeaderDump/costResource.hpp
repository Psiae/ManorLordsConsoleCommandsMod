#ifndef UE4SS_SDK_costResource_HPP
#define UE4SS_SDK_costResource_HPP

class UcostResource_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UTextBlock* Amt_Txt;                                                        // 0x02D8 (size: 0x8)
    class UImage* Icon;                                                               // 0x02E0 (size: 0x8)
    int32 Type;                                                                       // 0x02E8 (size: 0x4)
    int32 amt;                                                                        // 0x02EC (size: 0x4)
    bool colorRed;                                                                    // 0x02F0 (size: 0x1)

    void Construct();
    void ExecuteUbergraph_costResource(int32 EntryPoint);
}; // Size: 0x2F1

#endif
