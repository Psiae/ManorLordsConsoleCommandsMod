#ifndef UE4SS_SDK_letterCreator_HPP
#define UE4SS_SDK_letterCreator_HPP

class UletterCreator_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    class UWidgetAnimation* lerpIn;                                                   // 0x0358 (size: 0x8)
    class UImage* boards;                                                             // 0x0360 (size: 0x8)
    class UHorizontalRadioSelect_C* category_HRS;                                     // 0x0368 (size: 0x8)
    class UScrollBox* choiceScrollBox;                                                // 0x0370 (size: 0x8)
    class UmenuButton_C* close_button;                                                // 0x0378 (size: 0x8)
    class UHorizontalBox* diplo_playerStats_HB;                                       // 0x0380 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0388 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0390 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0398 (size: 0x8)
    class UImage* Image_5;                                                            // 0x03A0 (size: 0x8)
    class UImage* Image_128;                                                          // 0x03A8 (size: 0x8)
    class UImage* Image_208;                                                          // 0x03B0 (size: 0x8)
    class UTextBlock* influence_txt;                                                  // 0x03B8 (size: 0x8)
    class UVerticalBox* letterparts;                                                  // 0x03C0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_0;                                  // 0x03C8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_relations;                            // 0x03D0 (size: 0x8)
    class UVerticalBox* main_vb;                                                      // 0x03D8 (size: 0x8)
    class UTextBlock* not_aquainted_txt;                                              // 0x03E0 (size: 0x8)
    class UVerticalBox* paragraph_list;                                               // 0x03E8 (size: 0x8)
    class UTextBlock* recipient;                                                      // 0x03F0 (size: 0x8)
    class UImage* recipient_portrait;                                                 // 0x03F8 (size: 0x8)
    class UBorder* relations_border;                                                  // 0x0400 (size: 0x8)
    class UTextBlock* relations_txt;                                                  // 0x0408 (size: 0x8)
    class UVerticalBox* relations_VB;                                                 // 0x0410 (size: 0x8)
    class UmenuButton_C* sendLetter_button;                                           // 0x0418 (size: 0x8)
    class UVerticalBox* tags_vb;                                                      // 0x0420 (size: 0x8)
    class UVerticalBox* traits_VB;                                                    // 0x0428 (size: 0x8)
    class UVerticalBox* tratis_verticalbox;                                           // 0x0430 (size: 0x8)
    class UImage* vignette;                                                           // 0x0438 (size: 0x8)
    bool hasAllRequired;                                                              // 0x0440 (size: 0x1)
    class APawnCPP* recipientPawn;                                                    // 0x0448 (size: 0x8)
    int32 influenceSpentSoFar;                                                        // 0x0450 (size: 0x4)
    int32 playerInfluence;                                                            // 0x0454 (size: 0x4)
    TArray<FName> paras;                                                              // 0x0458 (size: 0x10)
    double relationChangeFinal;                                                       // 0x0468 (size: 0x8)
    int32 currentCategory;                                                            // 0x0470 (size: 0x4)
    class UletterParagrahSlot_C* LetterDropTarget;                                    // 0x0478 (size: 0x8)

    void SetGamePauseStatus(bool IsPaused);
    void AttemptSendConfiguredLetter();
    void CloseLetterCreator();
    FNaviSubGridLayout ComputeSubGridLayout();
    void setRecipient(class APawnCPP* newLetterRecipient);
    void Filter Pragraphs by Category();
    void clearLetter();
    void hasAlreadyUsedParagraph(FName para, bool& has);
    void updateAvailableParagraphs();
    void BndEvt__letterCreator_category_HRS_K2Node_ComponentBoundEvent_4_RadioSelectedSignature__DelegateSignature(FString Value);
    void BndEvt__letterCreator_sendLetter_button_new_K2Node_ComponentBoundEvent_6_onReleased__DelegateSignature();
    void BndEvt__letterCreator_sendLetter_button_new_1_K2Node_ComponentBoundEvent_7_onReleased__DelegateSignature();
    void close_letters();
    void StartLetter(class APawnCPP* recipient);
    void Construct();
    void ExecuteUbergraph_letterCreator(int32 EntryPoint);
}; // Size: 0x480

#endif
