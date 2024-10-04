#ifndef UE4SS_SDK_mercenaryCompanyCard_HPP
#define UE4SS_SDK_mercenaryCompanyCard_HPP

class UmercenaryCompanyCard_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* openAnim;                                                 // 0x02E8 (size: 0x8)
    class UTextBlock* arrivein_txt;                                                   // 0x02F0 (size: 0x8)
    class UTextBlock* arrivein_txt_1;                                                 // 0x02F8 (size: 0x8)
    class UImage* banner;                                                             // 0x0300 (size: 0x8)
    class UButton* Button_76;                                                         // 0x0308 (size: 0x8)
    class UButton* check_region;                                                      // 0x0310 (size: 0x8)
    class UTextBlock* companyName_txt;                                                // 0x0318 (size: 0x8)
    class UTextBlock* cost;                                                           // 0x0320 (size: 0x8)
    class UHorizontalBox* cost-HB;                                                    // 0x0328 (size: 0x8)
    class UTextBlock* eta_txt;                                                        // 0x0330 (size: 0x8)
    class UImage* Image;                                                              // 0x0338 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0340 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0348 (size: 0x8)
    class UImage* Image_54;                                                           // 0x0350 (size: 0x8)
    class UImage* Image_104;                                                          // 0x0358 (size: 0x8)
    class UrecruitmentCard_C* recruitmentCard;                                        // 0x0360 (size: 0x8)
    class UrecruitmentCard_C* recruitmentCard_1;                                      // 0x0368 (size: 0x8)
    class UrecruitmentCard_C* recruitmentCard_2;                                      // 0x0370 (size: 0x8)
    class UTextBlock* traits_txt;                                                     // 0x0378 (size: 0x8)
    class UWrapBox* traits_WrapBox_1;                                                 // 0x0380 (size: 0x8)
    class UHorizontalBox* units_hb;                                                   // 0x0388 (size: 0x8)
    class UVerticalBox* VB_Traits;                                                    // 0x0390 (size: 0x8)
    FMercenaryCompany MercenaryCompany;                                               // 0x0398 (size: 0x60)
    int32 Index;                                                                      // 0x03F8 (size: 0x4)

    void updateContents();
    void getIndex(class UPanelWidget* companiesHorizontalBox);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_76_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_mercenaryCompanyCard(int32 EntryPoint);
}; // Size: 0x3FC

#endif
