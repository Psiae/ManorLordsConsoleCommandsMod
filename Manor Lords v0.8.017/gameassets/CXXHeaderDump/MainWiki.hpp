#ifndef UE4SS_SDK_MainWiki_HPP
#define UE4SS_SDK_MainWiki_HPP

class UMainWiki_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    class UWidgetAnimation* openWikiAnim;                                             // 0x0358 (size: 0x8)
    class UWidgetAnimation* changeSubjectAnim;                                        // 0x0360 (size: 0x8)
    class UImage* big_img;                                                            // 0x0368 (size: 0x8)
    class UBorder* Border_4;                                                          // 0x0370 (size: 0x8)
    class UVerticalBox* buildings_vb;                                                 // 0x0378 (size: 0x8)
    class UHorizontalRadioSelect_C* CategoryParent;                                   // 0x0380 (size: 0x8)
    class UVerticalBox* defaultDescriptionParagraphs_VB;                              // 0x0388 (size: 0x8)
    class UHorizontalBox* HorizontalBox_113;                                          // 0x0390 (size: 0x8)
    class UImage* Icon;                                                               // 0x0398 (size: 0x8)
    class UImage* Image_114;                                                          // 0x03A0 (size: 0x8)
    class UOverlay* Overlay_1;                                                        // 0x03A8 (size: 0x8)
    class UImage* regionName_spacer;                                                  // 0x03B0 (size: 0x8)
    class UTextBlock* regionName_txt;                                                 // 0x03B8 (size: 0x8)
    class UVerticalBox* resourceDescriptionParagraphs_VB;                             // 0x03C0 (size: 0x8)
    class UVerticalBox* resources_vb;                                                 // 0x03C8 (size: 0x8)
    class UmenuButton_C* return_button;                                               // 0x03D0 (size: 0x8)
    class URichTextBlock* RichTextBlock;                                              // 0x03D8 (size: 0x8)
    class UTextBlock* subject_name_txt;                                               // 0x03E0 (size: 0x8)
    class UVerticalBox* subjectsList;                                                 // 0x03E8 (size: 0x8)
    class UScrollBox* subjectsScrollBox;                                              // 0x03F0 (size: 0x8)
    class UVerticalBox* variousDescriptions_VB;                                       // 0x03F8 (size: 0x8)
    FString StringSoFar;                                                              // 0x0400 (size: 0x10)
    FString clickableString;                                                          // 0x0410 (size: 0x10)
    FString selectedSubjectCategory;                                                  // 0x0420 (size: 0x10)
    bool scheduleWidthUpdate;                                                         // 0x0430 (size: 0x1)
    FName DefaultSubjectKey;                                                          // 0x0434 (size: 0x8)

    void setSubject_Tutorial(FName RowName);
    void OnSubjectControllerScroll(bool HasFocus);
    void AddNonClickableIntoWrapBox(class UWrapBox* WrapBox, FString StringToShow);
    FNaviSubGridLayout ComputeSubGridLayout();
    void createClickableParagraphsFromLocalizedText(const FText& InText);
    void setSubject_Upgrade(FName RowName);
    bool Contains Good ID(TArray<FGood>& Array, int32 goodID);
    void setSubject_Resource(FName Name);
    void Remove Last Character If Space(FString SourceString, FString& cleanedString);
    void setSubject_Generic(FName RowName);
    void filterSubjectsByCategory(FName Category);
    void searchForSubjectLocalizedAndChange(FText localizedSubjectLabel);
    bool isLastIndex(int32 Index, const TArray<FString>& TargetArray);
    void produceClickableDescription(FText combinedLocalizedText, class UWrapBox* WrapBox);
    void setSubject_Building(FName RowName);
    void changeSubject(FName subjectKey);
    void repopulateSubjects();
    void BndEvt__MainWiki_HorizontalRadioSelect_K2Node_ComponentBoundEvent_1_RadioSelectedSignature__DelegateSignature(FString Value);
    void BndEvt__MainWiki_return_button_K2Node_ComponentBoundEvent_2_onReleased__DelegateSignature();
    void LoadTexture(TSoftObjectPtr<UTexture> Path, class UImage* imageWidget);
    void Construct();
    void ExecuteUbergraph_MainWiki(int32 EntryPoint);
}; // Size: 0x43C

#endif
