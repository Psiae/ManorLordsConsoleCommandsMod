#ifndef UE4SS_SDK_BP_PerkSelectionPanel_HPP
#define UE4SS_SDK_BP_PerkSelectionPanel_HPP

class UBP_PerkSelectionPanel_C : public URegionDevelopmentPerksPanel
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)
    class UWidgetAnimation* SelectedPerkChanged;                                      // 0x0388 (size: 0x8)
    class UWidgetAnimation* openAnim;                                                 // 0x0390 (size: 0x8)
    class UImage* BigCardPreview_IMG;                                                 // 0x0398 (size: 0x8)
    class UButton* Button_Accept;                                                     // 0x03A0 (size: 0x8)
    class UTextBlock* choiceA;                                                        // 0x03A8 (size: 0x8)
    class UmenuButton_C* closeButton;                                                 // 0x03B0 (size: 0x8)
    class UfullscreenConfirmationGeneric_C* confirmButton;                            // 0x03B8 (size: 0x8)
    class UImage* DecoratedManuscript_IMG;                                            // 0x03C0 (size: 0x8)
    class URichTextBlock* Description;                                                // 0x03C8 (size: 0x8)
    class UBP_PerkSelectionCard_C* exampleEntrygetsremoved;                           // 0x03D0 (size: 0x8)
    class UBP_PerkSelectionCard_C* exampleEntrygetsremoved_1;                         // 0x03D8 (size: 0x8)
    class UBP_PerkSelectionCard_C* exampleEntrygetsremoved_2;                         // 0x03E0 (size: 0x8)
    class UBP_PerkSelectionCard_C* exampleEntrygetsremoved_3;                         // 0x03E8 (size: 0x8)
    class UBP_PerkSelectionCard_C* exampleEntrygetsremoved_4;                         // 0x03F0 (size: 0x8)
    class UBP_PerkSelectionCard_C* exampleEntrygetsremoved_5;                         // 0x03F8 (size: 0x8)
    class UBP_PerkSelectionCard_C* exampleEntrygetsremoved_6;                         // 0x0400 (size: 0x8)
    class UBP_PerkSelectionCard_C* exampleEntrygetsremoved_7;                         // 0x0408 (size: 0x8)
    class UBP_PerkSelectionCard_C* exampleEntrygetsremoved_8;                         // 0x0410 (size: 0x8)
    class UTextBlock* header_txt;                                                     // 0x0418 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton_Accept;                             // 0x0420 (size: 0x8)
    class UBorder* PatternedBackground_Border;                                        // 0x0428 (size: 0x8)
    class UVerticalBox* perkeffect_vb;                                                // 0x0430 (size: 0x8)
    class URichTextBlock* Title;                                                      // 0x0438 (size: 0x8)
    FName CurrentlySelectedPerk;                                                      // 0x0440 (size: 0x8)
    FName PerkSlotName;                                                               // 0x0448 (size: 0x8)

    FNaviSubGridLayout ComputeSubGridLayout();
    void CleanupAndCose();
    void UpdatePerkOverviewState(bool playOpenAnimation);
    void UpdatePanel(const FName InPerkName);
    void ConfirmPerkSelection(const FName InPerkName);
    void BndEvt__BP_PerkSelectionPanel_closeButton_K2Node_ComponentBoundEvent_0_onReleased__DelegateSignature();
    void BndEvt__BP_PerkSelectionPanel_confirmButton_K2Node_ComponentBoundEvent_1_onDecision__DelegateSignature(bool confirmed);
    void BndEvt__BP_PerkSelectionPanel_Button_Accept_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_BP_PerkSelectionPanel(int32 EntryPoint);
}; // Size: 0x450

#endif
