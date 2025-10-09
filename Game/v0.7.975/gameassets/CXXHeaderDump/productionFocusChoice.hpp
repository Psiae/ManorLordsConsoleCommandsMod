#ifndef UE4SS_SDK_productionFocusChoice_HPP
#define UE4SS_SDK_productionFocusChoice_HPP

class UproductionFocusChoice_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_15;                                                         // 0x0268 (size: 0x8)
    class UImage* goodIcon;                                                           // 0x0270 (size: 0x8)
    class UImage* selected_img;                                                       // 0x0278 (size: 0x8)
    int32 goodType;                                                                   // 0x0280 (size: 0x4)
    bool isSelected;                                                                  // 0x0284 (size: 0x1)
    FproductionFocusChoice_CProductionFocusChanged productionFocusChanged;            // 0x0288 (size: 0x10)
    void productionFocusChanged(int32 goodType);

    void listGoods(TArray<FGood>& Array, FString& text1);
    void Construct();
    void BndEvt__productionFocusChoice_Button_15_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_productionFocusChoice(int32 EntryPoint);
    void productionFocusChanged__DelegateSignature(int32 goodType);
}; // Size: 0x298

#endif
