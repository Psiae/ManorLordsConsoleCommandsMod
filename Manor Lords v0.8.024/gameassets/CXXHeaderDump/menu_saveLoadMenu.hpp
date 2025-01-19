#ifndef UE4SS_SDK_menu_saveLoadMenu_HPP
#define UE4SS_SDK_menu_saveLoadMenu_HPP

class Umenu_saveLoadMenu_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    class UWidgetAnimation* lerpIn;                                                   // 0x0358 (size: 0x8)
    class UImage* Grunge;                                                             // 0x0360 (size: 0x8)
    class UTextBlock* header_txt;                                                     // 0x0368 (size: 0x8)
    class UHorizontalBox* HorizontalBox_0;                                            // 0x0370 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0378 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0380 (size: 0x8)
    class UImage* Image_136;                                                          // 0x0388 (size: 0x8)
    class UVerticalBox* load_slots_vb;                                                // 0x0390 (size: 0x8)
    class UBorder* LoadingInteractionBlocker;                                         // 0x0398 (size: 0x8)
    class UTextBlock* no_saves;                                                       // 0x03A0 (size: 0x8)
    class UScrollBox* SaveSlotScrollBox;                                              // 0x03A8 (size: 0x8)
    class USizeBox* ScrollSizeBox_1;                                                  // 0x03B0 (size: 0x8)
    class UThrobber* Throbber_49;                                                     // 0x03B8 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x03C0 (size: 0x8)
    bool saveMode;                                                                    // 0x03C8 (size: 0x1)
    FString nextEmptySlot;                                                            // 0x03D0 (size: 0x10)
    int32 nextEmptySlotNum;                                                           // 0x03E0 (size: 0x4)
    TArray<int32> foundSlots;                                                         // 0x03E8 (size: 0x10)
    TMap<int32, FDateTime> slotDateMap;                                               // 0x03F8 (size: 0x50)
    bool shouldRepopulateSlots;                                                       // 0x0448 (size: 0x1)
    int32 savefileIteratorIndex;                                                      // 0x044C (size: 0x4)
    bool bIterateOverSaves;                                                           // 0x0450 (size: 0x1)
    int32 maxSaveFiles;                                                               // 0x0454 (size: 0x4)
    class UNaviUi* OpenDialog;                                                        // 0x0458 (size: 0x8)

    void IsNowLoading(bool& IsLoading);
    void OnDeleteConfirmDialogChange(bool DialogOpened, class UNaviUi* DialogUi);
    void OnSlotReceivedFocus(bool HasFocus);
    FNaviSubGridLayout ComputeSubGridLayout();
    void sortSaveMapByDateAndRepopulate();
    void Update Save Slots();
    void Completed_399032AE4A2EBE4CEEFE68A2A288870A(class USaveGame* SaveGame, bool bSuccess);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void updateHeader();
    void startUpdateSaveSlotsAsync();
    void repopulateSaveList();
    void nextIterator();
    void ExecuteUbergraph_menu_saveLoadMenu(int32 EntryPoint);
}; // Size: 0x460

#endif
