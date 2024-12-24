#ifndef UE4SS_SDK_hiredMercenaryCompanyBanner_HPP
#define UE4SS_SDK_hiredMercenaryCompanyBanner_HPP

class UhiredMercenaryCompanyBanner_C : public UUserWidget
{
    class UImage* banner;                                                             // 0x02E0 (size: 0x8)
    class UTextBlock* cost;                                                           // 0x02E8 (size: 0x8)
    class UImage* Image;                                                              // 0x02F0 (size: 0x8)
    class UImage* Image_104;                                                          // 0x02F8 (size: 0x8)
    class UTextBlock* timeLeft;                                                       // 0x0300 (size: 0x8)
    int32 companyID;                                                                  // 0x0308 (size: 0x4)
    FMercenaryCompany Mercenary Company;                                              // 0x0310 (size: 0x60)
    int32 costPerMonth;                                                               // 0x0370 (size: 0x4)

    void updateCompanyTooltipAndPaymentDate();
    void updateCompanyDetails(FMercenaryCompany MercenaryCompany, bool firstTimeUpdate);
}; // Size: 0x374

#endif
