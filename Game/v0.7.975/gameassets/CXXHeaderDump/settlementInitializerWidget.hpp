#ifndef UE4SS_SDK_settlementInitializerWidget_HPP
#define UE4SS_SDK_settlementInitializerWidget_HPP

class UsettlementInitializerWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UBorder* Border_0;                                                          // 0x0268 (size: 0x8)
    class UBorder* Border_1;                                                          // 0x0270 (size: 0x8)
    class UBorder* Border_2;                                                          // 0x0278 (size: 0x8)
    class UBorder* Border_3;                                                          // 0x0280 (size: 0x8)
    class UBorder* Border_4;                                                          // 0x0288 (size: 0x8)
    class UBorder* Border_5;                                                          // 0x0290 (size: 0x8)
    class UBorder* Border_6;                                                          // 0x0298 (size: 0x8)
    class UButton* Button;                                                            // 0x02A0 (size: 0x8)
    class UButton* Button_1;                                                          // 0x02A8 (size: 0x8)
    class UButton* Button_516;                                                        // 0x02B0 (size: 0x8)
    class UImage* Grunge;                                                             // 0x02B8 (size: 0x8)
    class UTextBlock* header_txt_2;                                                   // 0x02C0 (size: 0x8)
    class UVerticalBox* header_VB;                                                    // 0x02C8 (size: 0x8)
    class UHorizontalBox* HorizontalBox_0;                                            // 0x02D0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_1;                                            // 0x02D8 (size: 0x8)
    class UHorizontalBox* HorizontalBox_2;                                            // 0x02E0 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02E8 (size: 0x8)
    class UImage* Image_136;                                                          // 0x02F0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x02F8 (size: 0x8)
    class UButton* playOld;                                                           // 0x0300 (size: 0x8)
    class UTextBlock* recruit_txt;                                                    // 0x0308 (size: 0x8)
    class UTextBlock* recruit_txt_1;                                                  // 0x0310 (size: 0x8)
    class UmenuButton_C* return_button;                                               // 0x0318 (size: 0x8)
    class UmenuButton_C* return_button_1;                                             // 0x0320 (size: 0x8)
    class UButton* returnOld;                                                         // 0x0328 (size: 0x8)
    class URichTextBlock* RichTextBlock;                                              // 0x0330 (size: 0x8)
    class URichTextBlock* RichTextBlock_1;                                            // 0x0338 (size: 0x8)
    class URichTextBlock* RichTextBlock_48;                                           // 0x0340 (size: 0x8)
    class UsettlementTypeButton_C* settlementTypeButton_C;                            // 0x0348 (size: 0x8)
    class UsettlementTypeButton_C* settlementTypeButton_C_0;                          // 0x0350 (size: 0x8)
    class UsettlementTypeButton_C* settlementTypeButton_C_1;                          // 0x0358 (size: 0x8)
    class UsettlementTypeButton_C* settlementTypeButton_C_2;                          // 0x0360 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x0368 (size: 0x8)
    FsettlementInitializerWidget_CScenarioPicked scenarioPicked;                      // 0x0370 (size: 0x10)
    void scenarioPicked();
    class ARegion* Region;                                                            // 0x0380 (size: 0x8)
    uint8 Supply Level;                                                               // 0x0388 (size: 0x1)
    ESettlementType Settlement Type;                                                  // 0x0389 (size: 0x1)
    class ARegion* outpostTo;                                                         // 0x0390 (size: 0x8)

    void updateOutpostRegionFromSelection();
    void selectSettlementType(class UBorder* borderHighlight, ESettlementType Settlement Type);
    void selectSupplyLevel(class UBorder* highlightBorderWidget, uint8 Supply Level);
    void formatSupplyList(class URichTextBlock* richTextWidget, uint8 Level);
    void BndEvt__settlementInitializerWidget_Button_1_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__settlementInitializerWidget_Button_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__settlementInitializerWidget_settlementTypeButton_C_0_K2Node_ComponentBoundEvent_5_onButtonPressed__DelegateSignature();
    void BndEvt__settlementInitializerWidget_settlementTypeButton_C_2_K2Node_ComponentBoundEvent_6_onButtonPressed__DelegateSignature();
    void BndEvt__settlementInitializerWidget_settlementTypeButton_C_1_K2Node_ComponentBoundEvent_10_onButtonPressed__DelegateSignature();
    void BndEvt__settlementInitializerWidget_settlementTypeButton_C_K2Node_ComponentBoundEvent_11_onButtonPressed__DelegateSignature();
    void BndEvt__settlementInitializerWidget_Button_516_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__settlementInitializerWidget_return_button_1_K2Node_ComponentBoundEvent_1_onReleased__DelegateSignature();
    void Translate();
    void BndEvt__chooseScenario_return_button_K2Node_ComponentBoundEvent_0_onReleased__DelegateSignature();
    void BndEvt__settlementInitializerWidget_settlementTypeButton_C_2_K2Node_ComponentBoundEvent_7_regionChanged__DelegateSignature(FString regionUniqueTag);
    void Construct();
    void ExecuteUbergraph_settlementInitializerWidget(int32 EntryPoint);
    void scenarioPicked__DelegateSignature();
}; // Size: 0x398

#endif
