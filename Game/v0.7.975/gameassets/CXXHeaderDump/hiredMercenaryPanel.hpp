#ifndef UE4SS_SDK_hiredMercenaryPanel_HPP
#define UE4SS_SDK_hiredMercenaryPanel_HPP

class UhiredMercenaryPanel_C : public UUserWidget
{
    class UHorizontalBox* companyBanners_HB;                                          // 0x0260 (size: 0x8)
    class UTextBlock* cost_total;                                                     // 0x0268 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0270 (size: 0x8)
    class UImage* Image_55;                                                           // 0x0278 (size: 0x8)
    class UImage* Image_65;                                                           // 0x0280 (size: 0x8)
    class UImage* Image_104;                                                          // 0x0288 (size: 0x8)
    class UImage* Image_116;                                                          // 0x0290 (size: 0x8)
    class UMaterialInstanceDynamic* dynamicPortraitMat;                               // 0x0298 (size: 0x8)
    FhiredMercenaryPanel_CEnableVisitModeSmooth enableVisitModeSmooth;                // 0x02A0 (size: 0x10)
    void enableVisitModeSmooth();

    void enableVisitModeSmooth__DelegateSignature();
}; // Size: 0x2B0

#endif
