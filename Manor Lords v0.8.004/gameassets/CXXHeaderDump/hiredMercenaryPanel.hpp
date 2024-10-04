#ifndef UE4SS_SDK_hiredMercenaryPanel_HPP
#define UE4SS_SDK_hiredMercenaryPanel_HPP

class UhiredMercenaryPanel_C : public UUserWidget
{
    class UHorizontalBox* companyBanners_HB;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* cost_total;                                                     // 0x02E8 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02F0 (size: 0x8)
    class UImage* Image_55;                                                           // 0x02F8 (size: 0x8)
    class UImage* Image_65;                                                           // 0x0300 (size: 0x8)
    class UImage* Image_104;                                                          // 0x0308 (size: 0x8)
    class UImage* Image_116;                                                          // 0x0310 (size: 0x8)
    class UMaterialInstanceDynamic* dynamicPortraitMat;                               // 0x0318 (size: 0x8)
    FhiredMercenaryPanel_CEnableVisitModeSmooth enableVisitModeSmooth;                // 0x0320 (size: 0x10)
    void enableVisitModeSmooth();

    void enableVisitModeSmooth__DelegateSignature();
}; // Size: 0x330

#endif
