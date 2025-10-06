#ifndef UE4SS_SDK_BP_PerkEffect_HPP
#define UE4SS_SDK_BP_PerkEffect_HPP

class UBP_PerkEffect_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UImage* Image_23;                                                           // 0x02D8 (size: 0x8)
    class URichTextBlock* perkeffect_text_rt;                                         // 0x02E0 (size: 0x8)
    EPerkEffect Effect;                                                               // 0x02E8 (size: 0x1)

    void Construct();
    void ExecuteUbergraph_BP_PerkEffect(int32 EntryPoint);
}; // Size: 0x2E9

#endif
