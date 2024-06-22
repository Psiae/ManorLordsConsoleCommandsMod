#ifndef UE4SS_SDK_letterCreator_HPP
#define UE4SS_SDK_letterCreator_HPP

class UletterCreator_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* lerpIn;                                                   // 0x0268 (size: 0x8)
    class UButton* ACCEPT_button;                                                     // 0x0270 (size: 0x8)
    class UButton* ACCEPT_button_1;                                                   // 0x0278 (size: 0x8)
    class UButton* ACCEPT_button_2;                                                   // 0x0280 (size: 0x8)
    class UImage* boards;                                                             // 0x0288 (size: 0x8)
    class UHorizontalBox* categories_HB;                                              // 0x0290 (size: 0x8)
    class UHorizontalRadioSelect_C* category_HRS;                                     // 0x0298 (size: 0x8)
    class UButton* close_button;                                                      // 0x02A0 (size: 0x8)
    class UmenuButton_C* close_button_new;                                            // 0x02A8 (size: 0x8)
    class UHorizontalBox* diplo_playerStats_HB;                                       // 0x02B0 (size: 0x8)
    class UBorder* glow_cat0;                                                         // 0x02B8 (size: 0x8)
    class UBorder* glow_cat1;                                                         // 0x02C0 (size: 0x8)
    class UBorder* glow_cat2;                                                         // 0x02C8 (size: 0x8)
    class UImage* Image;                                                              // 0x02D0 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02D8 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02E0 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02E8 (size: 0x8)
    class UImage* Image_3;                                                            // 0x02F0 (size: 0x8)
    class UImage* Image_4;                                                            // 0x02F8 (size: 0x8)
    class UImage* Image_5;                                                            // 0x0300 (size: 0x8)
    class UImage* Image_128;                                                          // 0x0308 (size: 0x8)
    class UImage* Image_208;                                                          // 0x0310 (size: 0x8)
    class UImage* Image_1010;                                                         // 0x0318 (size: 0x8)
    class UTextBlock* influence_txt;                                                  // 0x0320 (size: 0x8)
    class UVerticalBox* letterparts;                                                  // 0x0328 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x0330 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_0;                                  // 0x0338 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_relations;                            // 0x0340 (size: 0x8)
    class UVerticalBox* main_vb;                                                      // 0x0348 (size: 0x8)
    class UTextBlock* not_aquainted_txt;                                              // 0x0350 (size: 0x8)
    class UVerticalBox* paragraph_list;                                               // 0x0358 (size: 0x8)
    class UTextBlock* recipient;                                                      // 0x0360 (size: 0x8)
    class UImage* recipient_portrait;                                                 // 0x0368 (size: 0x8)
    class UBorder* relations_border;                                                  // 0x0370 (size: 0x8)
    class UTextBlock* relations_txt;                                                  // 0x0378 (size: 0x8)
    class UVerticalBox* relations_VB;                                                 // 0x0380 (size: 0x8)
    class UButton* sendLetter;                                                        // 0x0388 (size: 0x8)
    class UmenuButton_C* sendLetter_button_new_1;                                     // 0x0390 (size: 0x8)
    class UButton* sendLetter_old;                                                    // 0x0398 (size: 0x8)
    class UVerticalBox* tags_vb;                                                      // 0x03A0 (size: 0x8)
    class UVerticalBox* traits_VB;                                                    // 0x03A8 (size: 0x8)
    class UVerticalBox* tratis_verticalbox;                                           // 0x03B0 (size: 0x8)
    class UImage* vignette;                                                           // 0x03B8 (size: 0x8)
    bool hasAllRequired;                                                              // 0x03C0 (size: 0x1)
    class APawnCPP* recipientPawn;                                                    // 0x03C8 (size: 0x8)
    int32 influenceSpentSoFar;                                                        // 0x03D0 (size: 0x4)
    int32 playerInfluence;                                                            // 0x03D4 (size: 0x4)
    TArray<FName> paras;                                                              // 0x03D8 (size: 0x10)
    float relationChangeFinal;                                                        // 0x03E8 (size: 0x4)
    int32 currentCategory;                                                            // 0x03EC (size: 0x4)

    void setRecipient(class APawnCPP* newLetterRecipient);
    void filterCategories();
    void clearLetter();
    void hasAlreadyUsedParagraph(FName para, bool& has);
    void updateAvailableParagraphs();
    bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    void BndEvt__sendLetter_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__close_button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void Construct();
    void BndEvt__ACCEPT_button_1_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__ACCEPT_button_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__ACCEPT_button_2_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
    void close_letters();
    void BndEvt__letterCreator_category_HRS_K2Node_ComponentBoundEvent_4_RadioSelectedSignature__DelegateSignature(FString Value);
    void BndEvt__letterCreator_sendLetter_button_new_K2Node_ComponentBoundEvent_6_onReleased__DelegateSignature();
    void BndEvt__letterCreator_sendLetter_button_new_1_K2Node_ComponentBoundEvent_7_onReleased__DelegateSignature();
    void ExecuteUbergraph_letterCreator(int32 EntryPoint);
}; // Size: 0x3F0

#endif
