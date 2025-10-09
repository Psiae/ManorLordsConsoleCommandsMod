#ifndef UE4SS_SDK_settlementTypeButton_HPP
#define UE4SS_SDK_settlementTypeButton_HPP

class UsettlementTypeButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* artwork;                                                            // 0x0268 (size: 0x8)
    class UButton* Button_62;                                                         // 0x0270 (size: 0x8)
    class UImage* Image;                                                              // 0x0278 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0280 (size: 0x8)
    class UMLDefaultSpinner_C* MLDefaultSpinner;                                      // 0x0288 (size: 0x8)
    class USizeBox* outpostMotherSelector;                                            // 0x0290 (size: 0x8)
    class UTextBlock* TextBlock_294;                                                  // 0x0298 (size: 0x8)
    class UMaterialInterface* Material;                                               // 0x02A0 (size: 0x8)
    FsettlementTypeButton_COnButtonPressed onButtonPressed;                           // 0x02A8 (size: 0x10)
    void onButtonPressed();
    ESettlementType settlementType;                                                   // 0x02B8 (size: 0x1)
    FsettlementTypeButton_CRegionChanged regionChanged;                               // 0x02C0 (size: 0x10)
    void regionChanged(FString regionUniqueTag);

    void BndEvt__scenarioButton_Button_62_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void Translate();
    void Construct();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void BndEvt__scenarioButton_Button_62_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__scenarioButton_Button_62_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__settlementTypeButton_MLDefaultSpinner_K2Node_ComponentBoundEvent_3_SpinnerSelectionChanged__DelegateSignature(FString Value);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_settlementTypeButton(int32 EntryPoint);
    void regionChanged__DelegateSignature(FString regionUniqueTag);
    void onButtonPressed__DelegateSignature();
}; // Size: 0x2D0

#endif
