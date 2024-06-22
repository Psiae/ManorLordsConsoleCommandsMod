#ifndef UE4SS_SDK_mercenaryScreen_HPP
#define UE4SS_SDK_mercenaryScreen_HPP

class UmercenaryScreen_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* duckHeader;                                               // 0x0268 (size: 0x8)
    class UWidgetAnimation* openAnim;                                                 // 0x0270 (size: 0x8)
    class UmenuButton_C* closeButton;                                                 // 0x0278 (size: 0x8)
    class UlocalizedTextBox_C* Header;                                                // 0x0280 (size: 0x8)
    class UImage* header_spacer;                                                      // 0x0288 (size: 0x8)
    class UImage* header_swords;                                                      // 0x0290 (size: 0x8)
    class UHireConfirmation_C* HireConfirmation;                                      // 0x0298 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x02A0 (size: 0x8)
    class UHorizontalBox* mercenary_companies_HB;                                     // 0x02A8 (size: 0x8)
    class UmercenaryCompanyCard_C* mercenaryCompanyCard;                              // 0x02B0 (size: 0x8)
    class UmercenaryCompanyCard_C* mercenaryCompanyCard_1;                            // 0x02B8 (size: 0x8)
    class UmercenaryCompanyCard_C* mercenaryCompanyCard_2;                            // 0x02C0 (size: 0x8)

    void updateCompanies();
    void Open();
    void Construct();
    void BndEvt__mercenaryScreen_closeButton_K2Node_ComponentBoundEvent_1_onReleased__DelegateSignature();
    void ExecuteUbergraph_mercenaryScreen(int32 EntryPoint);
}; // Size: 0x2C8

#endif
