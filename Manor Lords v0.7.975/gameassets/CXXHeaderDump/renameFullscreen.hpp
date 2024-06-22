#ifndef UE4SS_SDK_renameFullscreen_HPP
#define UE4SS_SDK_renameFullscreen_HPP

class UrenameFullscreen_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* close_button_1;                                                    // 0x0268 (size: 0x8)
    class UEditableText* EditableText_130;                                            // 0x0270 (size: 0x8)
    class UTextBlock* header_txt;                                                     // 0x0278 (size: 0x8)
    class UImage* Image;                                                              // 0x0280 (size: 0x8)
    class ARegion* Region;                                                            // 0x0288 (size: 0x8)

    void Construct();
    void BndEvt__close_button_1_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__EditableText_130_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void Open();
    void BndEvt__renameFullscreen_EditableText_130_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature(const FText& Text);
    void ExecuteUbergraph_renameFullscreen(int32 EntryPoint);
}; // Size: 0x290

#endif
