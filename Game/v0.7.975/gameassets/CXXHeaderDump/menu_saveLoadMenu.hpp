#ifndef UE4SS_SDK_menu_saveLoadMenu_HPP
#define UE4SS_SDK_menu_saveLoadMenu_HPP

class Umenu_saveLoadMenu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* lerpIn;                                                   // 0x0268 (size: 0x8)
    class UImage* Grunge;                                                             // 0x0270 (size: 0x8)
    class UTextBlock* header_txt;                                                     // 0x0278 (size: 0x8)
    class UHorizontalBox* HorizontalBox_0;                                            // 0x0280 (size: 0x8)
    class UImage* Image;                                                              // 0x0288 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0290 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0298 (size: 0x8)
    class UImage* Image_3;                                                            // 0x02A0 (size: 0x8)
    class UImage* Image_136;                                                          // 0x02A8 (size: 0x8)
    class UVerticalBox* load_slots_vb;                                                // 0x02B0 (size: 0x8)
    class UTextBlock* no_saves;                                                       // 0x02B8 (size: 0x8)
    class UScrollBox* ScrollBox_0;                                                    // 0x02C0 (size: 0x8)
    class USizeBox* ScrollSizeBox_1;                                                  // 0x02C8 (size: 0x8)
    class UThrobber* Throbber_49;                                                     // 0x02D0 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x02D8 (size: 0x8)
    bool saveMode;                                                                    // 0x02E0 (size: 0x1)
    FString nextEmptySlot;                                                            // 0x02E8 (size: 0x10)
    int32 nextEmptySlotNum;                                                           // 0x02F8 (size: 0x4)
    TArray<int32> foundSlots;                                                         // 0x0300 (size: 0x10)
    TMap<int32, FDateTime> slotDateMap;                                               // 0x0310 (size: 0x50)
    bool shouldRepopulateSlots;                                                       // 0x0360 (size: 0x1)
    int32 savefileIteratorIndex;                                                      // 0x0364 (size: 0x4)
    bool bIterateOverSaves;                                                           // 0x0368 (size: 0x1)
    int32 maxSaveFiles;                                                               // 0x036C (size: 0x4)

    void sortSaveMapByDateAndRepopulate();
    void Update Save Slots();
    void Completed_399032AE4A2EBE4CEEFE68A2A288870A(class USaveGame* SaveGame, bool bSuccess);
    void startUpdateSaveSlotsAsync();
    void updateHeader();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void repopulateSaveList();
    void nextIterator();
    void ExecuteUbergraph_menu_saveLoadMenu(int32 EntryPoint);
}; // Size: 0x370

#endif
