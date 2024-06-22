#ifndef UE4SS_SDK_mercenaryCompanyCard_HPP
#define UE4SS_SDK_mercenaryCompanyCard_HPP

class UmercenaryCompanyCard_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* openAnim;                                                 // 0x0268 (size: 0x8)
    class UTextBlock* arrivein_txt;                                                   // 0x0270 (size: 0x8)
    class UTextBlock* arrivein_txt_1;                                                 // 0x0278 (size: 0x8)
    class UImage* banner;                                                             // 0x0280 (size: 0x8)
    class UButton* Button_76;                                                         // 0x0288 (size: 0x8)
    class UButton* check_region;                                                      // 0x0290 (size: 0x8)
    class UTextBlock* companyName_txt;                                                // 0x0298 (size: 0x8)
    class UTextBlock* cost;                                                           // 0x02A0 (size: 0x8)
    class UHorizontalBox* cost-HB;                                                    // 0x02A8 (size: 0x8)
    class UTextBlock* eta_txt;                                                        // 0x02B0 (size: 0x8)
    class UImage* Image;                                                              // 0x02B8 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02C0 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02C8 (size: 0x8)
    class UImage* Image_54;                                                           // 0x02D0 (size: 0x8)
    class UImage* Image_104;                                                          // 0x02D8 (size: 0x8)
    class UrecruitmentCard_C* recruitmentCard;                                        // 0x02E0 (size: 0x8)
    class UrecruitmentCard_C* recruitmentCard_1;                                      // 0x02E8 (size: 0x8)
    class UrecruitmentCard_C* recruitmentCard_2;                                      // 0x02F0 (size: 0x8)
    class UTextBlock* traits_txt;                                                     // 0x02F8 (size: 0x8)
    class UWrapBox* traits_WrapBox_1;                                                 // 0x0300 (size: 0x8)
    class UHorizontalBox* units_hb;                                                   // 0x0308 (size: 0x8)
    class UVerticalBox* VB_Traits;                                                    // 0x0310 (size: 0x8)
    FMercenaryCompany MercenaryCompany;                                               // 0x0318 (size: 0x60)
    int32 Index;                                                                      // 0x0378 (size: 0x4)

    void updateContents();
    void getIndex(class UPanelWidget* companiesHorizontalBox);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_76_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_mercenaryCompanyCard(int32 EntryPoint);
}; // Size: 0x37C

#endif
