#ifndef UE4SS_SDK_taxOption_HPP
#define UE4SS_SDK_taxOption_HPP

class UtaxOption_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UBorder* Border_0;                                                          // 0x02E8 (size: 0x8)
    class UEditableTextBox* editableText_taxRate;                                     // 0x02F0 (size: 0x8)
    class UTextBlock* form_txt;                                                       // 0x02F8 (size: 0x8)
    class UImage* Image;                                                              // 0x0300 (size: 0x8)
    class UImage* Image_23;                                                           // 0x0308 (size: 0x8)
    class USizeBox* SizeBox_150;                                                      // 0x0310 (size: 0x8)
    class UButton* tax_decr;                                                          // 0x0318 (size: 0x8)
    class UButton* tax_incr;                                                          // 0x0320 (size: 0x8)
    class UImage* taxIcon;                                                            // 0x0328 (size: 0x8)
    class USizeBox* taxName_sb;                                                       // 0x0330 (size: 0x8)
    class UTextBlock* taxName_txt;                                                    // 0x0338 (size: 0x8)
    class USlider* taxSlider;                                                         // 0x0340 (size: 0x8)
    class UTexture2D* taxIconTexture;                                                 // 0x0348 (size: 0x8)
    class ARegion* Region;                                                            // 0x0350 (size: 0x8)
    class UInventory_C* Inventory;                                                    // 0x0358 (size: 0x8)
    FName taxType;                                                                    // 0x0360 (size: 0x8)
    FName taxedInKey;                                                                 // 0x0368 (size: 0x8)
    int32 taxMin;                                                                     // 0x0370 (size: 0x4)
    int32 taxMax;                                                                     // 0x0374 (size: 0x4)
    FtaxOption_CTaxChanged taxChanged;                                                // 0x0378 (size: 0x10)
    void taxChanged();
    int32 taxButtonMul;                                                               // 0x0388 (size: 0x4)

    void increaseDecreaseTax(int32 amt);
    void Change to Amt(int32 amt);
    void Update Current Rate();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__taxOption_tax_incr_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__taxOption_tax_decr_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__taxOption_editableText_taxRate_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__editableText_taxRate_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__Slider_279_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void setAndTranslate(class ARegion* Region);
    void ExecuteUbergraph_taxOption(int32 EntryPoint);
    void taxChanged__DelegateSignature();
}; // Size: 0x38C

#endif
