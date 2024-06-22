#ifndef UE4SS_SDK_scenarioButton_HPP
#define UE4SS_SDK_scenarioButton_HPP

class UscenarioButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* artwork;                                                            // 0x0268 (size: 0x8)
    class UButton* Button_62;                                                         // 0x0270 (size: 0x8)
    class UImage* Image;                                                              // 0x0278 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0280 (size: 0x8)
    class UTextBlock* TextBlock_294;                                                  // 0x0288 (size: 0x8)
    class UTextBlock* TextBlock_descr;                                                // 0x0290 (size: 0x8)
    class UMaterialInterface* Material;                                               // 0x0298 (size: 0x8)
    FscenarioButton_COnButtonPressed onButtonPressed;                                 // 0x02A0 (size: 0x10)
    void onButtonPressed();
    FName scenarioName;                                                               // 0x02B0 (size: 0x8)
    bool In Is Enabled;                                                               // 0x02B8 (size: 0x1)

    void Translate();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void BndEvt__scenarioButton_Button_62_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__scenarioButton_Button_62_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__scenarioButton_Button_62_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_scenarioButton(int32 EntryPoint);
    void onButtonPressed__DelegateSignature();
}; // Size: 0x2B9

#endif
