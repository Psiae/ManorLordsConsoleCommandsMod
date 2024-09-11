#ifndef UE4SS_SDK_saveSlot_widget_HPP
#define UE4SS_SDK_saveSlot_widget_HPP

class UsaveSlot_widget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* fadeInThumb;                                              // 0x02E8 (size: 0x8)
    class UBorder* Border_2;                                                          // 0x02F0 (size: 0x8)
    class UTextBlock* dateTxt;                                                        // 0x02F8 (size: 0x8)
    class UEditableText* editable_name;                                               // 0x0300 (size: 0x8)
    class UImage* Image_34;                                                           // 0x0308 (size: 0x8)
    class UMD_NaviHijackProxy_C* MD_NaviHijackProxy;                                  // 0x0310 (size: 0x8)
    class UTextBlock* non_editable_name;                                              // 0x0318 (size: 0x8)
    class UsquareButton_C* squareButton_Delete;                                       // 0x0320 (size: 0x8)
    class UsquareButton_C* squareButton_SaveLoad;                                     // 0x0328 (size: 0x8)
    class UImage* TextEditableSymbol;                                                 // 0x0330 (size: 0x8)
    class UTextBlock* verTxt_1;                                                       // 0x0338 (size: 0x8)
    bool saveMode;                                                                    // 0x0340 (size: 0x1)
    FString SlotName;                                                                 // 0x0348 (size: 0x10)
    bool newSave;                                                                     // 0x0358 (size: 0x1)
    FsaveSlot_widget_CUpdateSaveSlots updateSaveSlots;                                // 0x0360 (size: 0x10)
    void updateSaveSlots();
    class UTextureRenderTarget2D* thumb_RT;                                           // 0x0370 (size: 0x8)
    FString Level Name;                                                               // 0x0378 (size: 0x10)
    int32 childIndexInverse;                                                          // 0x0388 (size: 0x4)
    FsaveSlot_widget_COnConfirmDialogChange OnConfirmDialogChange;                    // 0x0390 (size: 0x10)
    void OnConfirmDialogChange(bool DialogOpened, class UNaviUi* Dialog);

    void ApplyEditableTextLimit(const FText& InText);
    void loadThumbnailTimeSliced();
    void setSaveSlotData(FString Level Name, FString saveName, const FDateTime& date, FString Ver);
    void updateParentSaveSlots();
    void Completed_4B5ADD4543D344113E1E09B9C77C8494(class USaveGame* SaveGame, bool bSuccess);
    void Completed_6AB8DB6F4165D2E72520BFAFDA041E98(class USaveGame* SaveGame, bool bSuccess);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void deleteConfirmed(bool confirmed);
    void loadThumbnailTimeSliced_PauseFriendly(double DelayDuration);
    void BndEvt__saveSlot_widget_squareButton_SaveLoad_K2Node_ComponentBoundEvent_2_onReleased__DelegateSignature();
    void BndEvt__saveSlot_widget_squareButton_Delete_K2Node_ComponentBoundEvent_3_onReleased__DelegateSignature();
    void BndEvt__saveSlot_widget_editable_name_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__saveSlot_widget_editable_name_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__saveSlot_widget_MD_NaviHijackProxy_K2Node_ComponentBoundEvent_4_HijackedHandleInput__DelegateSignature(ENaviUiIntent intent);
    void ExecuteUbergraph_saveSlot_widget(int32 EntryPoint);
    void OnConfirmDialogChange__DelegateSignature(bool DialogOpened, class UNaviUi* Dialog);
    void updateSaveSlots__DelegateSignature();
}; // Size: 0x3A0

#endif
