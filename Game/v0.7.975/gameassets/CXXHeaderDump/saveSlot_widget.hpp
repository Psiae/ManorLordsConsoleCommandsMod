#ifndef UE4SS_SDK_saveSlot_widget_HPP
#define UE4SS_SDK_saveSlot_widget_HPP

class UsaveSlot_widget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* fadeInThumb;                                              // 0x0268 (size: 0x8)
    class UBorder* Border_2;                                                          // 0x0270 (size: 0x8)
    class UTextBlock* dateTxt;                                                        // 0x0278 (size: 0x8)
    class UButton* delete_button;                                                     // 0x0280 (size: 0x8)
    class UEditableText* editable_name;                                               // 0x0288 (size: 0x8)
    class UImage* Image_34;                                                           // 0x0290 (size: 0x8)
    class UImage* Image_63;                                                           // 0x0298 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_0;                                  // 0x02A0 (size: 0x8)
    class UTextBlock* non_editable_name;                                              // 0x02A8 (size: 0x8)
    class UButton* save_load_button;                                                  // 0x02B0 (size: 0x8)
    class UTextBlock* TextBlock_83;                                                   // 0x02B8 (size: 0x8)
    class UTextBlock* verTxt_1;                                                       // 0x02C0 (size: 0x8)
    bool saveMode;                                                                    // 0x02C8 (size: 0x1)
    FString SlotName;                                                                 // 0x02D0 (size: 0x10)
    bool newSave;                                                                     // 0x02E0 (size: 0x1)
    FsaveSlot_widget_CUpdateSaveSlots updateSaveSlots;                                // 0x02E8 (size: 0x10)
    void updateSaveSlots();
    class UTextureRenderTarget2D* thumb_RT;                                           // 0x02F8 (size: 0x8)
    FString Level Name;                                                               // 0x0300 (size: 0x10)
    int32 childIndexInverse;                                                          // 0x0310 (size: 0x4)

    void loadThumbnailTimeSliced();
    void setSaveSlotData(FString Level Name, FString saveName, const FDateTime& date, FString ver);
    void updateParentSaveSlots();
    void Completed_6AB8DB6F4165D2E72520BFAFDA041E98(class USaveGame* SaveGame, bool bSuccess);
    void Completed_4B5ADD4543D344113E1E09B9C77C8494(class USaveGame* SaveGame, bool bSuccess);
    void BndEvt__saveSlot_widget_delete_button_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void Construct();
    void BndEvt__saveSlot_widget_save_load_button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void deleteConfirmed(bool confirmed);
    void loadThumbnailTimeSliced_PauseFriendly(float DelayDuration);
    void ExecuteUbergraph_saveSlot_widget(int32 EntryPoint);
    void updateSaveSlots__DelegateSignature();
}; // Size: 0x314

#endif
