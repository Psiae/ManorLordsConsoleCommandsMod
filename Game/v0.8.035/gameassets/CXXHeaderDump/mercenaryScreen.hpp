#ifndef UE4SS_SDK_mercenaryScreen_HPP
#define UE4SS_SDK_mercenaryScreen_HPP

class UmercenaryScreen_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UWidgetAnimation* duckHeader;                                               // 0x0350 (size: 0x8)
    class UWidgetAnimation* openAnim;                                                 // 0x0358 (size: 0x8)
    class UmenuButton_C* closeButton;                                                 // 0x0360 (size: 0x8)
    class UlocalizedTextBox_C* Header;                                                // 0x0368 (size: 0x8)
    class UImage* header_spacer;                                                      // 0x0370 (size: 0x8)
    class UImage* header_swords;                                                      // 0x0378 (size: 0x8)
    class UHireConfirmation_C* HireConfirmation;                                      // 0x0380 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x0388 (size: 0x8)
    class UHorizontalBox* mercenary_companies_HB;                                     // 0x0390 (size: 0x8)
    class UmercenaryCompanyCard_C* mercenaryCompanyCard;                              // 0x0398 (size: 0x8)
    class UmercenaryCompanyCard_C* mercenaryCompanyCard_1;                            // 0x03A0 (size: 0x8)
    class UmercenaryCompanyCard_C* mercenaryCompanyCard_2;                            // 0x03A8 (size: 0x8)

    void Close();
    FNaviSubGridLayout ComputeSubGridLayout();
    void updateCompanies();
    void Open();
    void Construct();
    void BndEvt__mercenaryScreen_closeButton_K2Node_ComponentBoundEvent_1_onReleased__DelegateSignature();
    void ExecuteUbergraph_mercenaryScreen(int32 EntryPoint);
}; // Size: 0x3B0

#endif
