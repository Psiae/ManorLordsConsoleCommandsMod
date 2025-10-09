#ifndef UE4SS_SDK_mercenaryScreen_HPP
#define UE4SS_SDK_mercenaryScreen_HPP

class UmercenaryScreen_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* duckHeader;                                               // 0x02E8 (size: 0x8)
    class UWidgetAnimation* openAnim;                                                 // 0x02F0 (size: 0x8)
    class UmenuButton_C* closeButton;                                                 // 0x02F8 (size: 0x8)
    class UlocalizedTextBox_C* Header;                                                // 0x0300 (size: 0x8)
    class UImage* header_spacer;                                                      // 0x0308 (size: 0x8)
    class UImage* header_swords;                                                      // 0x0310 (size: 0x8)
    class UHireConfirmation_C* HireConfirmation;                                      // 0x0318 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x0320 (size: 0x8)
    class UHorizontalBox* mercenary_companies_HB;                                     // 0x0328 (size: 0x8)
    class UmercenaryCompanyCard_C* mercenaryCompanyCard;                              // 0x0330 (size: 0x8)
    class UmercenaryCompanyCard_C* mercenaryCompanyCard_1;                            // 0x0338 (size: 0x8)
    class UmercenaryCompanyCard_C* mercenaryCompanyCard_2;                            // 0x0340 (size: 0x8)

    void updateCompanies();
    void Open();
    void Construct();
    void BndEvt__mercenaryScreen_closeButton_K2Node_ComponentBoundEvent_1_onReleased__DelegateSignature();
    void ExecuteUbergraph_mercenaryScreen(int32 EntryPoint);
}; // Size: 0x348

#endif
