#ifndef UE4SS_SDK_hiredMercenaryCompanyBanner_HPP
#define UE4SS_SDK_hiredMercenaryCompanyBanner_HPP

class UhiredMercenaryCompanyBanner_C : public UUserWidget
{
    class UImage* banner;                                                             // 0x0260 (size: 0x8)
    class UTextBlock* cost;                                                           // 0x0268 (size: 0x8)
    class UImage* Image;                                                              // 0x0270 (size: 0x8)
    class UImage* Image_104;                                                          // 0x0278 (size: 0x8)
    class UTextBlock* TimeLeft;                                                       // 0x0280 (size: 0x8)
    int32 companyID;                                                                  // 0x0288 (size: 0x4)
    FMercenaryCompany Mercenary Company;                                              // 0x0290 (size: 0x60)
    int32 costPerMonth;                                                               // 0x02F0 (size: 0x4)

    void updateCompanyTooltipAndPaymentDate();
    void updateCompanyDetails(FMercenaryCompany MercenaryCompany, bool firstTimeUpdate);
}; // Size: 0x2F4

#endif
