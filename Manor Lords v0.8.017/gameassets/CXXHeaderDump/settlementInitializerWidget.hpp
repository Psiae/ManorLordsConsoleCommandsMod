#ifndef UE4SS_SDK_settlementInitializerWidget_HPP
#define UE4SS_SDK_settlementInitializerWidget_HPP

class UsettlementInitializerWidget_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    class UBorder* Border_0;                                                          // 0x0358 (size: 0x8)
    class UBorder* Border_1;                                                          // 0x0360 (size: 0x8)
    class UBorder* Border_2;                                                          // 0x0368 (size: 0x8)
    class UBorder* Border_3;                                                          // 0x0370 (size: 0x8)
    class UBorder* Border_4;                                                          // 0x0378 (size: 0x8)
    class UBorder* Border_5;                                                          // 0x0380 (size: 0x8)
    class UBorder* Border_6;                                                          // 0x0388 (size: 0x8)
    class UButton* Button;                                                            // 0x0390 (size: 0x8)
    class UButton* Button_1;                                                          // 0x0398 (size: 0x8)
    class UButton* Button_516;                                                        // 0x03A0 (size: 0x8)
    class UmenuButton_C* confirm_button;                                              // 0x03A8 (size: 0x8)
    class UImage* Grunge;                                                             // 0x03B0 (size: 0x8)
    class UTextBlock* header_txt_2;                                                   // 0x03B8 (size: 0x8)
    class UVerticalBox* header_VB;                                                    // 0x03C0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_0;                                            // 0x03C8 (size: 0x8)
    class UImage* Image_2;                                                            // 0x03D0 (size: 0x8)
    class UImage* Image_136;                                                          // 0x03D8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x03E0 (size: 0x8)
    class UButton* playOld;                                                           // 0x03E8 (size: 0x8)
    class UTextBlock* recruit_txt;                                                    // 0x03F0 (size: 0x8)
    class UTextBlock* recruit_txt_1;                                                  // 0x03F8 (size: 0x8)
    class UmenuButton_C* return_button;                                               // 0x0400 (size: 0x8)
    class UButton* returnOld;                                                         // 0x0408 (size: 0x8)
    class URichTextBlock* RichTextBlock;                                              // 0x0410 (size: 0x8)
    class URichTextBlock* RichTextBlock_1;                                            // 0x0418 (size: 0x8)
    class URichTextBlock* RichTextBlock_48;                                           // 0x0420 (size: 0x8)
    class UsettlementTypeButton_C* settlementTypeButton_1;                            // 0x0428 (size: 0x8)
    class UsettlementTypeButton_C* settlementTypeButton_2;                            // 0x0430 (size: 0x8)
    class UsettlementTypeButton_C* settlementTypeButton_3;                            // 0x0438 (size: 0x8)
    class UsettlementTypeButton_C* settlementTypeButton_4;                            // 0x0440 (size: 0x8)
    class UHorizontalBox* SettlementTypeList;                                         // 0x0448 (size: 0x8)
    class UMD_NaviAutoButton_C* startSupplies_Left;                                   // 0x0450 (size: 0x8)
    class UMD_NaviAutoButton_C* startSupplies_Middle;                                 // 0x0458 (size: 0x8)
    class UMD_NaviAutoButton_C* startSupplies_Right;                                  // 0x0460 (size: 0x8)
    class UHorizontalBox* StartSuppliesList;                                          // 0x0468 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x0470 (size: 0x8)
    FsettlementInitializerWidget_CScenarioPicked scenarioPicked;                      // 0x0478 (size: 0x10)
    void scenarioPicked();
    class ARegion* Region;                                                            // 0x0488 (size: 0x8)
    uint8 Supply Level;                                                               // 0x0490 (size: 0x1)
    ESettlementType Settlement Type;                                                  // 0x0491 (size: 0x1)
    class ARegion* outpostTo;                                                         // 0x0498 (size: 0x8)

    void RemoveSelfFromMainUi();
    FNaviSubGridLayout ComputeSubGridLayout();
    void updateOutpostRegionFromSelection();
    void selectSettlementType(class UBorder* borderHighlight, ESettlementType Settlement Type);
    void selectSupplyLevel(class UBorder* highlightBorderWidget, uint8 Supply Level);
    void formatSupplyList(class URichTextBlock* richTextWidget, uint8 Level);
    void BndEvt__settlementInitializerWidget_settlementTypeButton_C_0_K2Node_ComponentBoundEvent_5_onButtonPressed__DelegateSignature();
    void BndEvt__settlementInitializerWidget_settlementTypeButton_C_2_K2Node_ComponentBoundEvent_6_onButtonPressed__DelegateSignature();
    void BndEvt__settlementInitializerWidget_settlementTypeButton_C_1_K2Node_ComponentBoundEvent_10_onButtonPressed__DelegateSignature();
    void BndEvt__settlementInitializerWidget_settlementTypeButton_C_K2Node_ComponentBoundEvent_11_onButtonPressed__DelegateSignature();
    void BndEvt__settlementInitializerWidget_Button_1_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__settlementInitializerWidget_Button_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__settlementInitializerWidget_Button_516_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__settlementInitializerWidget_return_button_1_K2Node_ComponentBoundEvent_1_onReleased__DelegateSignature();
    void Translate();
    void BndEvt__settlementInitializerWidget_settlementTypeButton_C_2_K2Node_ComponentBoundEvent_7_regionChanged__DelegateSignature(FString regionUniqueTag);
    void BndEvt__chooseScenario_return_button_K2Node_ComponentBoundEvent_0_onReleased__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_settlementInitializerWidget(int32 EntryPoint);
    void scenarioPicked__DelegateSignature();
}; // Size: 0x4A0

#endif
