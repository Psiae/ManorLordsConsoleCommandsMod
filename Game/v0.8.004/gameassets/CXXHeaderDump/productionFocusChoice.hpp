#ifndef UE4SS_SDK_productionFocusChoice_HPP
#define UE4SS_SDK_productionFocusChoice_HPP

class UproductionFocusChoice_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Button_15;                                                         // 0x02E8 (size: 0x8)
    class UImage* goodIcon;                                                           // 0x02F0 (size: 0x8)
    class UImage* selected_img;                                                       // 0x02F8 (size: 0x8)
    int32 goodType;                                                                   // 0x0300 (size: 0x4)
    bool IsSelected;                                                                  // 0x0304 (size: 0x1)
    FproductionFocusChoice_CProductionFocusChanged productionFocusChanged;            // 0x0308 (size: 0x10)
    void productionFocusChanged(int32 goodType);

    void listGoods(TArray<FGood>& Array, FString& text1);
    void Construct();
    void BndEvt__productionFocusChoice_Button_15_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_productionFocusChoice(int32 EntryPoint);
    void productionFocusChanged__DelegateSignature(int32 goodType);
}; // Size: 0x318

#endif
