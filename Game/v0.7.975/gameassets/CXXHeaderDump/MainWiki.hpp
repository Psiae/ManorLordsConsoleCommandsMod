#ifndef UE4SS_SDK_MainWiki_HPP
#define UE4SS_SDK_MainWiki_HPP

class UMainWiki_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* openWikiAnim;                                             // 0x0268 (size: 0x8)
    class UWidgetAnimation* changeSubjectAnim;                                        // 0x0270 (size: 0x8)
    class UImage* big_img;                                                            // 0x0278 (size: 0x8)
    class UBorder* Border_4;                                                          // 0x0280 (size: 0x8)
    class UVerticalBox* buildings_vb;                                                 // 0x0288 (size: 0x8)
    class UVerticalBox* description_paragraphs_VB;                                    // 0x0290 (size: 0x8)
    class UWrapBox* description_wrapBox;                                              // 0x0298 (size: 0x8)
    class UHorizontalBox* HorizontalBox_113;                                          // 0x02A0 (size: 0x8)
    class UHorizontalRadioSelect_C* HorizontalRadioSelect;                            // 0x02A8 (size: 0x8)
    class UImage* Icon;                                                               // 0x02B0 (size: 0x8)
    class UImage* Image_114;                                                          // 0x02B8 (size: 0x8)
    class UOverlay* Overlay_1;                                                        // 0x02C0 (size: 0x8)
    class UImage* regionName_spacer;                                                  // 0x02C8 (size: 0x8)
    class UTextBlock* regionName_txt;                                                 // 0x02D0 (size: 0x8)
    class UVerticalBox* resourceDescriptionParagraphs_VB;                             // 0x02D8 (size: 0x8)
    class UVerticalBox* resources_vb;                                                 // 0x02E0 (size: 0x8)
    class UmenuButton_C* return_button;                                               // 0x02E8 (size: 0x8)
    class URichTextBlock* RichTextBlock;                                              // 0x02F0 (size: 0x8)
    class UTextBlock* subject_name_txt;                                               // 0x02F8 (size: 0x8)
    class UVerticalBox* Subjects;                                                     // 0x0300 (size: 0x8)
    class UWiki_Subject_C* Wiki_Subject;                                              // 0x0308 (size: 0x8)
    class UWiki_Subject_C* Wiki_Subject_128;                                          // 0x0310 (size: 0x8)
    FString StringSoFar;                                                              // 0x0318 (size: 0x10)
    FString clickableString;                                                          // 0x0328 (size: 0x10)
    FString selectedSubjectCategory;                                                  // 0x0338 (size: 0x10)

    void updateWrapboxSize(class Uwiki_wrapBox_paragraph_C* wrapBoxParagraph);
    void setSubject_Upgrade(FName RowName);
    bool Contains Good ID(TArray<FGood>& Array, int32 goodID);
    void setSubject_Resource(FName RowName);
    void Remove Last Character If Space(FString SourceString, FString& cleanedString);
    void setSubject_Generic(FName RowName);
    void filterSubjectsByCategory(FName Category);
    void searchForSubjectLocalizedAndChange(FText localizedSubjectLabel);
    bool isLastIndex(int32 Index, const TArray<FString>& TargetArray);
    void produceClickableDescription(FText combinedLocalizedText, class UWrapBox*& WrapBox);
    void setSubject_Building(FName RowName);
    void changeSubject(FName subjectKey);
    void repopulateSubjects();
    void Construct();
    void BndEvt__MainWiki_HorizontalRadioSelect_K2Node_ComponentBoundEvent_1_RadioSelectedSignature__DelegateSignature(FString Value);
    void BndEvt__MainWiki_return_button_K2Node_ComponentBoundEvent_2_onReleased__DelegateSignature();
    void loadTexture(TSoftObjectPtr<UTexture> Path, class UImage* imageWidget);
    void ExecuteUbergraph_MainWiki(int32 EntryPoint);
}; // Size: 0x348

#endif
