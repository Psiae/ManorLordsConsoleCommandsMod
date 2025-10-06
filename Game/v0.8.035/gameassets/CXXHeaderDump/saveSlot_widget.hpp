#ifndef UE4SS_SDK_saveSlot_widget_HPP
#define UE4SS_SDK_saveSlot_widget_HPP

class UsaveSlot_widget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UWidgetAnimation* fadeInThumb;                                              // 0x02D8 (size: 0x8)
    class UCanvasPanel* Container;                                                    // 0x02E0 (size: 0x8)
    class UTextBlock* dateTxt;                                                        // 0x02E8 (size: 0x8)
    class UImage* deprecatedSaveImage;                                                // 0x02F0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_0;                                            // 0x02F8 (size: 0x8)
    class UImage* Image_13;                                                           // 0x0300 (size: 0x8)
    class UTextBlock* non_editable_name;                                              // 0x0308 (size: 0x8)
    class UButton* rename_button;                                                     // 0x0310 (size: 0x8)
    class UImage* SavethumbDisplay;                                                   // 0x0318 (size: 0x8)
    class UsquareButton_C* squareButton_Delete;                                       // 0x0320 (size: 0x8)
    class UsquareButton_C* squareButton_SaveLoad;                                     // 0x0328 (size: 0x8)
    class UHorizontalBox* ver_hb;                                                     // 0x0330 (size: 0x8)
    class UVerticalBox* VerticalBox_48;                                               // 0x0338 (size: 0x8)
    class UTextBlock* verTxt_1;                                                       // 0x0340 (size: 0x8)
    bool saveMode;                                                                    // 0x0348 (size: 0x1)
    FString SlotName;                                                                 // 0x0350 (size: 0x10)
    bool newSave;                                                                     // 0x0360 (size: 0x1)
    class UTextureRenderTarget2D* thumb_RT;                                           // 0x0368 (size: 0x8)
    FString Level Name;                                                               // 0x0370 (size: 0x10)
    FsaveSlot_widget_COnConfirmDialogChange OnConfirmDialogChange;                    // 0x0380 (size: 0x10)
    void OnConfirmDialogChange(bool DialogOpened, class UNaviUi* Dialog);
    class UMLSaveGameDescr* SaveDescriptor;                                           // 0x0390 (size: 0x8)
    class UTexture2D* thumbnailTexture;                                               // 0x0398 (size: 0x8)
    TSubclassOf<class UCoatOfArmsLibrary> CoatOfArmsLibraryClass;                     // 0x03A0 (size: 0x8)
    bool autosave;                                                                    // 0x03A8 (size: 0x1)
    class Umenu_saveLoadMenu_C* SaveLoadMenu;                                         // 0x03B0 (size: 0x8)

    bool IsSaveDeprecated?();
    void CleanupForMapEntry();
    void ApplyEditableTextLimit(const FText& InText);
    void setSaveSlotData(FString Level Name, FString saveName, const FDateTime& date, FString Ver);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void deleteConfirmed(bool confirmed);
    void loadThumbnailTimeSliced_PauseFriendly(double DelayDuration);
    void BndEvt__saveSlot_widget_squareButton_SaveLoad_K2Node_ComponentBoundEvent_2_onReleased__DelegateSignature();
    void BndEvt__saveSlot_widget_squareButton_Delete_K2Node_ComponentBoundEvent_3_onReleased__DelegateSignature();
    void DoSave(bool Save);
    void BndEvt__saveSlot_widget_rename_button_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_saveSlot_widget(int32 EntryPoint);
    void OnConfirmDialogChange__DelegateSignature(bool DialogOpened, class UNaviUi* Dialog);
}; // Size: 0x3B8

#endif
