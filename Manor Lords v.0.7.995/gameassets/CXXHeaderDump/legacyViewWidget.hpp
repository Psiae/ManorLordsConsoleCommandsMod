#ifndef UE4SS_SDK_legacyViewWidget_HPP
#define UE4SS_SDK_legacyViewWidget_HPP

class UlegacyViewWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* openAnim;                                                 // 0x02E8 (size: 0x8)
    class UImage* big_img_1;                                                          // 0x02F0 (size: 0x8)
    class UBorder* Border_4;                                                          // 0x02F8 (size: 0x8)
    class UBorder* Border_7;                                                          // 0x0300 (size: 0x8)
    class UVerticalBox* buildings_vb_1;                                               // 0x0308 (size: 0x8)
    class UVerticalBox* buildings_vb_2;                                               // 0x0310 (size: 0x8)
    class UVerticalBox* description_paragraphs_VB;                                    // 0x0318 (size: 0x8)
    class UWrapBox* description_wrapBox;                                              // 0x0320 (size: 0x8)
    class UHorizontalBox* HorizontalBox;                                              // 0x0328 (size: 0x8)
    class UHorizontalBox* HorizontalBox_113;                                          // 0x0330 (size: 0x8)
    class UImage* Icon;                                                               // 0x0338 (size: 0x8)
    class UImage* Icon_1;                                                             // 0x0340 (size: 0x8)
    class UImage* Image_55;                                                           // 0x0348 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x0350 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_1;                                    // 0x0358 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_2;                                    // 0x0360 (size: 0x8)
    class UOverlay* Overlay_1;                                                        // 0x0368 (size: 0x8)
    class UProgressBar* ProgressBar_58;                                               // 0x0370 (size: 0x8)
    class UImage* regionName_spacer;                                                  // 0x0378 (size: 0x8)
    class UTextBlock* regionName_txt;                                                 // 0x0380 (size: 0x8)
    class UVerticalBox* resourceDescriptionParagraphs_VB;                             // 0x0388 (size: 0x8)
    class UVerticalBox* resources_vb_1;                                               // 0x0390 (size: 0x8)
    class UVerticalBox* resources_vb_2;                                               // 0x0398 (size: 0x8)
    class UmenuButton_C* return_button;                                               // 0x03A0 (size: 0x8)
    class URichTextBlock* RichTextBlock;                                              // 0x03A8 (size: 0x8)
    class URichTextBlock* RichTextBlock_1;                                            // 0x03B0 (size: 0x8)
    class UTextBlock* subject_name_txt;                                               // 0x03B8 (size: 0x8)
    class UTextBlock* subject_name_txt_1;                                             // 0x03C0 (size: 0x8)
    class UTextBlock* subject_name_txt_2;                                             // 0x03C8 (size: 0x8)
    class UTextBlock* subject_name_txt_3;                                             // 0x03D0 (size: 0x8)
    class UTextBlock* subject_name_txt_4;                                             // 0x03D8 (size: 0x8)
    class UTextBlock* subject_name_txt_5;                                             // 0x03E0 (size: 0x8)
    class UVerticalBox* subjects;                                                     // 0x03E8 (size: 0x8)
    class UVerticalBox* subjects_1;                                                   // 0x03F0 (size: 0x8)
    class UVerticalBox* subjects_2;                                                   // 0x03F8 (size: 0x8)
    class UWiki_Subject_C* Wiki_Subject;                                              // 0x0400 (size: 0x8)
    class UWiki_Subject_C* Wiki_Subject_1;                                            // 0x0408 (size: 0x8)
    class UWiki_Subject_C* Wiki_Subject_2;                                            // 0x0410 (size: 0x8)
    class UWiki_Subject_C* Wiki_Subject_3;                                            // 0x0418 (size: 0x8)
    class UWiki_Subject_C* Wiki_Subject_4;                                            // 0x0420 (size: 0x8)
    class UWiki_Subject_C* Wiki_Subject_128;                                          // 0x0428 (size: 0x8)
    class AMyPawnCPP_BP3_C* playerRef;                                                // 0x0430 (size: 0x8)

    void Open();
    void repopulateOpportunities();
    void BndEvt__legacyViewWidget_return_button_K2Node_ComponentBoundEvent_0_onReleased__DelegateSignature();
    void ExecuteUbergraph_legacyViewWidget(int32 EntryPoint);
}; // Size: 0x438

#endif
