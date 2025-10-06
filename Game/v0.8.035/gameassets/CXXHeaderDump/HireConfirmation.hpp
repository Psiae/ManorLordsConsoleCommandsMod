#ifndef UE4SS_SDK_HireConfirmation_HPP
#define UE4SS_SDK_HireConfirmation_HPP

class UHireConfirmation_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UWidgetAnimation* NewAnimation_1;                                           // 0x0350 (size: 0x8)
    class UmenuButton_C* btnCancel;                                                   // 0x0358 (size: 0x8)
    class UmenuButton_C* btnConfirm;                                                  // 0x0360 (size: 0x8)
    class UBorder* confirmation_border;                                               // 0x0368 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x0370 (size: 0x8)
    class UWidget* Daddy;                                                             // 0x0378 (size: 0x8)
    FName question;                                                                   // 0x0380 (size: 0x8)
    int32 Index;                                                                      // 0x0388 (size: 0x4)
    FMercenaryCompany MercenaryCompany;                                               // 0x0390 (size: 0x60)

    FNaviSubGridLayout ComputeSubGridLayout();
    void Close();
    void BndEvt__HireConfirmation_menuButton_K2Node_ComponentBoundEvent_2_onReleased__DelegateSignature();
    void BndEvt__HireConfirmation_menuButton_1_K2Node_ComponentBoundEvent_3_onReleased__DelegateSignature();
    void ExecuteUbergraph_HireConfirmation(int32 EntryPoint);
}; // Size: 0x3F0

#endif
