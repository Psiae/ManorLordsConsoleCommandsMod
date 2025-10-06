#ifndef UE4SS_SDK_menu_saveLoadMenu_HPP
#define UE4SS_SDK_menu_saveLoadMenu_HPP

class Umenu_saveLoadMenu_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UWidgetAnimation* lerpIn;                                                   // 0x0350 (size: 0x8)
    class UImage* Grunge;                                                             // 0x0358 (size: 0x8)
    class UTextBlock* header_txt;                                                     // 0x0360 (size: 0x8)
    class UHorizontalBox* HorizontalBox_0;                                            // 0x0368 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0370 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0378 (size: 0x8)
    class UImage* Image_136;                                                          // 0x0380 (size: 0x8)
    class UVerticalBox* load_slots_vb;                                                // 0x0388 (size: 0x8)
    class UBorder* LoadingInteractionBlocker;                                         // 0x0390 (size: 0x8)
    class UMainMenu_LoadingThrobber_C* MainMenu_LoadingThrobber;                      // 0x0398 (size: 0x8)
    class UTextBlock* no_saves;                                                       // 0x03A0 (size: 0x8)
    class UScrollBox* SaveSlotScrollBox;                                              // 0x03A8 (size: 0x8)
    class USizeBox* ScrollSizeBox_1;                                                  // 0x03B0 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x03B8 (size: 0x8)
    bool activeSaveMode;                                                              // 0x03C0 (size: 0x1)
    bool saveMode;                                                                    // 0x03C1 (size: 0x1)
    FString nextEmptySlot;                                                            // 0x03C8 (size: 0x10)
    int32 nextEmptySlotNum;                                                           // 0x03D8 (size: 0x4)
    TArray<int32> foundSlots;                                                         // 0x03E0 (size: 0x10)
    TMap<int32, FDateTime> slotDateMap;                                               // 0x03F0 (size: 0x50)
    TMap<int32, UMLSaveGameDescr*> slotDescriptors;                                   // 0x0440 (size: 0x50)
    bool shouldRepopulateSlots;                                                       // 0x0490 (size: 0x1)
    int32 savefileIteratorIndex;                                                      // 0x0494 (size: 0x4)
    bool bIterateOverSaves;                                                           // 0x0498 (size: 0x1)
    int32 maxSaveFiles;                                                               // 0x049C (size: 0x4)
    class UUserWidget* OpenDialog;                                                    // 0x04A0 (size: 0x8)
    TArray<int32> PendingSlotsToDisplay;                                              // 0x04A8 (size: 0x10)
    int32 EarlyLoadImageCount;                                                        // 0x04B8 (size: 0x4)
    double PerSlotScreenshotRevealPeriod;                                             // 0x04C0 (size: 0x8)

    void CloseOpenDialog();
    void DoCloseAndHideSelf();
    void TriggerAsyncThumbnails();
    void MakeSlotNameFromSlotNumber(int32 SlotNumber, FString& SlotName);
    void MakeDescriptorNameFromSlotName(FString SlotName, FString& DescriptorName);
    void CleanupAfterMenuLoad();
    void AddSlot(int32 SlotNumber, class UsaveSlot_widget_C*& NewSlot);
    void AddNoSlotsLabelIfLoading();
    void AddQuicksaveSlot(double InRevealTime, double& ScreenshotRevealTime);
    void AddEmptySlotIfSaving();
    void AddAutosaveSlot(double& ScreenshotRevealTime);
    void ClearAllSots();
    void IsNowLoading(bool& IsLoading);
    void OnDeleteConfirmDialogChange(bool DialogOpened, class UNaviUi* DialogUi);
    void OnSlotReceivedFocus(bool HasFocus);
    FNaviSubGridLayout ComputeSubGridLayout();
    void sortSaveMapByDateAndRepopulate();
    void Update Save Slots();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void updateHeader();
    void startUpdateSaveSlotsAsync();
    void repopulateSaveList();
    void nextIterator();
    void WaitUntilSafe();
    void ShowNextSlot();
    void ExecuteUbergraph_menu_saveLoadMenu(int32 EntryPoint);
}; // Size: 0x4C8

#endif
