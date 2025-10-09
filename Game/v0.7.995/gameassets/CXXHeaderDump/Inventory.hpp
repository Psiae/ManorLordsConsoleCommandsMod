#ifndef UE4SS_SDK_Inventory_HPP
#define UE4SS_SDK_Inventory_HPP

class UInventory_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    class UWidgetAnimation* removeWorker;                                             // 0x0358 (size: 0x8)
    class UWidgetAnimation* addWorker;                                                // 0x0360 (size: 0x8)
    class UWidgetAnimation* IntroAnim;                                                // 0x0368 (size: 0x8)
    class UHorizontalBox* activeWorkers_HB;                                           // 0x0370 (size: 0x8)
    class UVerticalBox* advanced_vb;                                                  // 0x0378 (size: 0x8)
    class UVerticalBox* animals_VB;                                                   // 0x0380 (size: 0x8)
    class UImage* buildingHelp;                                                       // 0x0388 (size: 0x8)
    class UImage* buildingImage;                                                      // 0x0390 (size: 0x8)
    class UButton* button_demolish;                                                   // 0x0398 (size: 0x8)
    class UButton* button_relocate;                                                   // 0x03A0 (size: 0x8)
    class UButton* button_sleep;                                                      // 0x03A8 (size: 0x8)
    class UButton* button_stall;                                                      // 0x03B0 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x03B8 (size: 0x8)
    class UCheckBox* CheckBox_autoSupply;                                             // 0x03C0 (size: 0x8)
    class UCheckBox* CheckBox_chopFirewood;                                           // 0x03C8 (size: 0x8)
    class UCheckBox* CheckBox_collectBrushwood;                                       // 0x03D0 (size: 0x8)
    class UButton* close_button;                                                      // 0x03D8 (size: 0x8)
    class USizeBox* Construction_SizeBox;                                             // 0x03E0 (size: 0x8)
    class UconstructionList_Item_C* constructionList_Item;                            // 0x03E8 (size: 0x8)
    class UconstructionList_Item_C* constructionList_Item_1;                          // 0x03F0 (size: 0x8)
    class UconstructionList_Item_C* constructionList_Item_2;                          // 0x03F8 (size: 0x8)
    class UHorizontalBox* constructionPriority_HB;                                    // 0x0400 (size: 0x8)
    class UPlusMinus_C* constructionPriorityPlusMinus;                                // 0x0408 (size: 0x8)
    class UTextBlock* constructionStatus_txt;                                         // 0x0410 (size: 0x8)
    class UComboBoxString* crop_options;                                              // 0x0418 (size: 0x8)
    class UComboBoxString* crop_options_1;                                            // 0x0420 (size: 0x8)
    class UComboBoxString* crop_options_2;                                            // 0x0428 (size: 0x8)
    class UVerticalBox* cropOptions_VB;                                               // 0x0430 (size: 0x8)
    class UCheckBox* cropRotation_CheckBox_0;                                         // 0x0438 (size: 0x8)
    class UVerticalBox* cropRotationDetails_VB;                                       // 0x0440 (size: 0x8)
    class UVerticalBox* customBuildingSlot;                                           // 0x0448 (size: 0x8)
    class UMLDefaultSpinner_C* DefaultSpinner_threshing;                              // 0x0450 (size: 0x8)
    class UImage* demolish_img;                                                       // 0x0458 (size: 0x8)
    class UTextBlock* DisplayName;                                                    // 0x0460 (size: 0x8)
    class UButton* erase_crop_button;                                                 // 0x0468 (size: 0x8)
    class UVerticalBox* extensions_and_upgrades_VB;                                   // 0x0470 (size: 0x8)
    class UHorizontalBox* extensionSlots_HB;                                          // 0x0478 (size: 0x8)
    class UBorder* field_priority_border;                                             // 0x0480 (size: 0x8)
    class UTextBlock* field_workers_num;                                              // 0x0488 (size: 0x8)
    class UHorizontalBox* fieldOperationModes_HB;                                     // 0x0490 (size: 0x8)
    class UHorizontalBox* fieldPriority_HB_1;                                         // 0x0498 (size: 0x8)
    class UPlusMinus_C* fieldPriorityPlusMinus;                                       // 0x04A0 (size: 0x8)
    class URichTextBlock* fieldStatus;                                                // 0x04A8 (size: 0x8)
    class UVerticalBox* fieldStatus_VB;                                               // 0x04B0 (size: 0x8)
    class UImage* firewoodIcon;                                                       // 0x04B8 (size: 0x8)
    class UImage* firewoodIcon_1;                                                     // 0x04C0 (size: 0x8)
    class UImage* firewoodIcon_2;                                                     // 0x04C8 (size: 0x8)
    class UImage* firewoodIcon_3;                                                     // 0x04D0 (size: 0x8)
    class UCheckBox* forceHarvest_CheckBox_66;                                        // 0x04D8 (size: 0x8)
    class UVerticalBox* general_and_storage_vb;                                       // 0x04E0 (size: 0x8)
    class USizeBox* General_SizeBox;                                                  // 0x04E8 (size: 0x8)
    class UVerticalBox* general_VB;                                                   // 0x04F0 (size: 0x8)
    class UHorizontalBox* genericStorage_HB;                                          // 0x04F8 (size: 0x8)
    class UProgressBar* grow_progress;                                                // 0x0500 (size: 0x8)
    class UProgressBar* harvest_progress_1;                                           // 0x0508 (size: 0x8)
    class UButton* Header_button;                                                     // 0x0510 (size: 0x8)
    class UButton* help_buildingType;                                                 // 0x0518 (size: 0x8)
    class UHorizontalRadioSelect_C* HorizontalRadioSelect_MainTabs;                   // 0x0520 (size: 0x8)
    class UImage* hunt_img_1;                                                         // 0x0528 (size: 0x8)
    class UVerticalBox* hunting_VB;                                                   // 0x0530 (size: 0x8)
    class UButton* huntingLimit_dec;                                                  // 0x0538 (size: 0x8)
    class UEditableText* huntingLimit_editableNum;                                    // 0x0540 (size: 0x8)
    class UButton* huntingLimit_inc;                                                  // 0x0548 (size: 0x8)
    class UTextBlock* huntingLimit_txt;                                               // 0x0550 (size: 0x8)
    class UImage* Image;                                                              // 0x0558 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0560 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0568 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0570 (size: 0x8)
    class UImage* Image_5;                                                            // 0x0578 (size: 0x8)
    class UImage* Image_6;                                                            // 0x0580 (size: 0x8)
    class UImage* Image_7;                                                            // 0x0588 (size: 0x8)
    class UImage* Image_8;                                                            // 0x0590 (size: 0x8)
    class UImage* Image_9;                                                            // 0x0598 (size: 0x8)
    class UImage* Image_10;                                                           // 0x05A0 (size: 0x8)
    class UImage* Image_11;                                                           // 0x05A8 (size: 0x8)
    class UImage* Image_12;                                                           // 0x05B0 (size: 0x8)
    class UImage* Image_17;                                                           // 0x05B8 (size: 0x8)
    class UImage* Image_18;                                                           // 0x05C0 (size: 0x8)
    class UImage* Image_20;                                                           // 0x05C8 (size: 0x8)
    class UImage* Image_23;                                                           // 0x05D0 (size: 0x8)
    class UImage* Image_25;                                                           // 0x05D8 (size: 0x8)
    class UImage* Image_28;                                                           // 0x05E0 (size: 0x8)
    class UImage* Image_29;                                                           // 0x05E8 (size: 0x8)
    class UImage* Image_30;                                                           // 0x05F0 (size: 0x8)
    class UImage* Image_31;                                                           // 0x05F8 (size: 0x8)
    class UImage* Image_72;                                                           // 0x0600 (size: 0x8)
    class UImage* Image_80;                                                           // 0x0608 (size: 0x8)
    class UImage* Image_91;                                                           // 0x0610 (size: 0x8)
    class UImage* Image_114;                                                          // 0x0618 (size: 0x8)
    class UImage* Image_119;                                                          // 0x0620 (size: 0x8)
    class UImage* Image_146;                                                          // 0x0628 (size: 0x8)
    class UUniformGridPanel* inventoryGrid;                                           // 0x0630 (size: 0x8)
    class UHorizontalBox* LargeStorage_HB;                                            // 0x0638 (size: 0x8)
    class UHorizontalBox* limit_hunting_HB;                                           // 0x0640 (size: 0x8)
    class USizeBox* livestock_sb;                                                     // 0x0648 (size: 0x8)
    class UVerticalBox* livestock_VB;                                                 // 0x0650 (size: 0x8)
    class UVerticalBox* livestockList_vb;                                             // 0x0658 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x0660 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_1;                                    // 0x0668 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_90;                                   // 0x0670 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C;                                    // 0x0678 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_0;                                  // 0x0680 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_1;                                  // 0x0688 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_2;                                  // 0x0690 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_3;                                  // 0x0698 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_4;                                  // 0x06A0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_5;                                  // 0x06A8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_6;                                  // 0x06B0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_7;                                  // 0x06B8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_8;                                  // 0x06C0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_9;                                  // 0x06C8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_10;                                 // 0x06D0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_11;                                 // 0x06D8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_12;                                 // 0x06E0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_13;                                 // 0x06E8 (size: 0x8)
    class UBorder* MainBorder;                                                        // 0x06F0 (size: 0x8)
    class UNamedSlot* manor_slot;                                                     // 0x06F8 (size: 0x8)
    class UNamedSlot* manor_slot_refuel;                                              // 0x0700 (size: 0x8)
    class UNamedSlot* marketProsperitySlot;                                           // 0x0708 (size: 0x8)
    class UVerticalBox* marketSlot;                                                   // 0x0710 (size: 0x8)
    class UMD_NaviAutoButton_C* naviBtn_close;                                        // 0x0718 (size: 0x8)
    class UMD_NaviAutoButton_C* naviBtn_Demolish;                                     // 0x0720 (size: 0x8)
    class UMD_NaviAutoButton_C* naviBtn_help;                                         // 0x0728 (size: 0x8)
    class UMD_NaviAutoButton_C* naviBtn_relocate;                                     // 0x0730 (size: 0x8)
    class UMD_NaviAutoButton_C* naviBtn_sleep;                                        // 0x0738 (size: 0x8)
    class UMD_NaviAutoButton_C* naviBtn_stall;                                        // 0x0740 (size: 0x8)
    class UMD_NaviAutoButton_C* naviBtn_workerMinus;                                  // 0x0748 (size: 0x8)
    class UMD_NaviAutoButton_C* naviBtn_workerPlus;                                   // 0x0750 (size: 0x8)
    class URichTextBlock* nextHarvest_num_txt_1;                                      // 0x0758 (size: 0x8)
    class UHorizontalBox* occupantNum_HB;                                             // 0x0760 (size: 0x8)
    class UTextBlock* occupants;                                                      // 0x0768 (size: 0x8)
    class UImage* operation_grow_icon;                                                // 0x0770 (size: 0x8)
    class UImage* operation_harvest_icon;                                             // 0x0778 (size: 0x8)
    class UImage* operation_plough_icon;                                              // 0x0780 (size: 0x8)
    class UImage* operation_sow_icon;                                                 // 0x0788 (size: 0x8)
    class UHorizontalBox* pantryStorage_HB;                                           // 0x0790 (size: 0x8)
    class UImage* pasture_img;                                                        // 0x0798 (size: 0x8)
    class UImage* pasture_img_1;                                                      // 0x07A0 (size: 0x8)
    class UTextBlock* pastureSpace_txt;                                               // 0x07A8 (size: 0x8)
    class UHorizontalBox* pastureStats_HB;                                            // 0x07B0 (size: 0x8)
    class USizeBox* PeopleList_SizeBox;                                               // 0x07B8 (size: 0x8)
    class UVerticalBox* PeopleList_VB;                                                // 0x07C0 (size: 0x8)
    class UVerticalBox* PeopleSection_VB;                                             // 0x07C8 (size: 0x8)
    class UButton* Pin_Button;                                                        // 0x07D0 (size: 0x8)
    class UImage* pin_img;                                                            // 0x07D8 (size: 0x8)
    class UProgressBar* plow_progress;                                                // 0x07E0 (size: 0x8)
    class USizeBox* popList_SB;                                                       // 0x07E8 (size: 0x8)
    class UHorizontalBox* popsWorking-HB;                                             // 0x07F0 (size: 0x8)
    class UHorizontalBox* popsWorking-HB_1;                                           // 0x07F8 (size: 0x8)
    class UTextBlock* popsWorking_txt;                                                // 0x0800 (size: 0x8)
    class UHorizontalBox* predicted_harvest_hb;                                       // 0x0808 (size: 0x8)
    class UButton* priority_button;                                                   // 0x0810 (size: 0x8)
    class UImage* priority_img;                                                       // 0x0818 (size: 0x8)
    class USizeBox* production_sizeBox;                                               // 0x0820 (size: 0x8)
    class UNamedSlot* productionLimitsSlot;                                           // 0x0828 (size: 0x8)
    class UProgressBar* ProgressBar_1;                                                // 0x0830 (size: 0x8)
    class UProgressBar* ProgressBar_92;                                               // 0x0838 (size: 0x8)
    class UProgressBar* ProgressBarLogs;                                              // 0x0840 (size: 0x8)
    class UTextBlock* queue_txt;                                                      // 0x0848 (size: 0x8)
    class UTextBlock* regionName_txt;                                                 // 0x0850 (size: 0x8)
    class UImage* relocate_img;                                                       // 0x0858 (size: 0x8)
    class UButton* reset_work_area_button;                                            // 0x0860 (size: 0x8)
    class USizeBox* residential_sizeBox;                                              // 0x0868 (size: 0x8)
    class UVerticalBox* residential_VB_Complete;                                      // 0x0870 (size: 0x8)
    class UNamedSlot* residentialFuelSlot;                                            // 0x0878 (size: 0x8)
    class UVerticalBox* residentialSlot_VB;                                           // 0x0880 (size: 0x8)
    class UHorizontalBox* residentialUpg;                                             // 0x0888 (size: 0x8)
    class UBorder* retinue_border_old;                                                // 0x0890 (size: 0x8)
    class UTextBlock* road_txt;                                                       // 0x0898 (size: 0x8)
    class UImage* roadConnectionIcon;                                                 // 0x08A0 (size: 0x8)
    class UHorizontalBox* roadStatus_HB;                                              // 0x08A8 (size: 0x8)
    class UButton* setWorkAreaButton;                                                 // 0x08B0 (size: 0x8)
    class UImage* sleep_img;                                                          // 0x08B8 (size: 0x8)
    class UProgressBar* sow_progress_1;                                               // 0x08C0 (size: 0x8)
    class UImage* Spacer_14;                                                          // 0x08C8 (size: 0x8)
    class UImage* Spacer_403;                                                         // 0x08D0 (size: 0x8)
    class UImage* spacer_dot;                                                         // 0x08D8 (size: 0x8)
    class UImage* spacer_storage_2;                                                   // 0x08E0 (size: 0x8)
    class UTextBlock* stable_space_txt;                                               // 0x08E8 (size: 0x8)
    class UHorizontalBox* stableStats_HB_1;                                           // 0x08F0 (size: 0x8)
    class UImage* stallAllow_img_1;                                                   // 0x08F8 (size: 0x8)
    class UlocalizedTextBox_C* storage_empty;                                         // 0x0900 (size: 0x8)
    class UNamedSlot* storage_filters_slot;                                           // 0x0908 (size: 0x8)
    class UVerticalBox* storage_limits_vb;                                            // 0x0910 (size: 0x8)
    class UlocalizedTextBox_C* storage_txt;                                           // 0x0918 (size: 0x8)
    class UTextBlock* StorageNumbersLogs;                                             // 0x0920 (size: 0x8)
    class USizeBox* taxes_SizeBox;                                                    // 0x0928 (size: 0x8)
    class UVerticalBox* taxes_VB;                                                     // 0x0930 (size: 0x8)
    class UTextBlock* TextBlock_15;                                                   // 0x0938 (size: 0x8)
    class UTextBlock* TextBlock_17;                                                   // 0x0940 (size: 0x8)
    class UHorizontalBox* threshing_hb;                                               // 0x0948 (size: 0x8)
    class UVerticalBox* threshing_vb;                                                 // 0x0950 (size: 0x8)
    class UBorder* topHeader_border;                                                  // 0x0958 (size: 0x8)
    class USizeBox* trade_sizeBox;                                                    // 0x0960 (size: 0x8)
    class UVerticalBox* tradeSlot_VB;                                                 // 0x0968 (size: 0x8)
    class UHorizontalBox* transportedRes_HB;                                          // 0x0970 (size: 0x8)
    class UHorizontalBox* upgradesHB;                                                 // 0x0978 (size: 0x8)
    class UVerticalBox* VB_ConstructionReserves;                                      // 0x0980 (size: 0x8)
    class UVerticalBox* vb_detailsWoodcutter;                                         // 0x0988 (size: 0x8)
    class UTextBlock* work-area_text;                                                 // 0x0990 (size: 0x8)
    class UBorder* work_area_border;                                                  // 0x0998 (size: 0x8)
    class UHorizontalBox* workArea_HB;                                                // 0x09A0 (size: 0x8)
    class UNamedSlot* workbuildingFuelStatus_slot;                                    // 0x09A8 (size: 0x8)
    class UButton* worker_add;                                                        // 0x09B0 (size: 0x8)
    class UButton* worker_add_oldstyle;                                               // 0x09B8 (size: 0x8)
    class UButton* worker_remove;                                                     // 0x09C0 (size: 0x8)
    class UNamedSlot* workerAssignmentSlot_Animals;                                   // 0x09C8 (size: 0x8)
    class USizeBox* workerGrid_sizeBox;                                               // 0x09D0 (size: 0x8)
    class UVerticalBox* workers_VB;                                                   // 0x09D8 (size: 0x8)
    class UUniformGridPanel* workerSlots_Grid;                                        // 0x09E0 (size: 0x8)
    class UVerticalBox* workStats_VB;                                                 // 0x09E8 (size: 0x8)
    class UTextBlock* yield_num_txt;                                                  // 0x09F0 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x09F8 (size: 0x8)
    bool dragging;                                                                    // 0x0A00 (size: 0x1)
    FVector2D Offset;                                                                 // 0x0A08 (size: 0x10)
    FVector2D LastPosition;                                                           // 0x0A18 (size: 0x10)
    class APawnCPP* playerPawn;                                                       // 0x0A28 (size: 0x8)
    bool foundPawn;                                                                   // 0x0A30 (size: 0x1)
    class UMainUICPP_C* Daddy;                                                        // 0x0A38 (size: 0x8)
    TArray<class UTR_Destination_C*> TR_Destinations;                                 // 0x0A40 (size: 0x10)
    int32 tabIndex;                                                                   // 0x0A50 (size: 0x4)
    int32 mainTabIndex;                                                               // 0x0A54 (size: 0x4)
    TArray<class ASMUnit*> people;                                                    // 0x0A58 (size: 0x10)
    TArray<class UFamilyEntry_C*> peopleEntries;                                      // 0x0A68 (size: 0x10)
    FStat bData;                                                                      // 0x0A80 (size: 0x240)
    int32 bType;                                                                      // 0x0CC0 (size: 0x4)
    TArray<class UInventory_Item_C*> inventoryItems;                                  // 0x0CC8 (size: 0x10)
    TArray<class UStallEntry_C*> stallEntries;                                        // 0x0CD8 (size: 0x10)
    TArray<class UworkerSlot_C*> workerSlots;                                         // 0x0CE8 (size: 0x10)
    bool closing;                                                                     // 0x0CF8 (size: 0x1)
    TArray<FSettingOption> mainTabOptions;                                            // 0x0D00 (size: 0x10)
    bool isConstructed;                                                               // 0x0D10 (size: 0x1)

    FNaviSubGridLayout ComputeSubGridLayout();
    bool isBuildingTypeWorkOrArtisanWorkshop();
    void respawnProductionLimitWidgetsIfNeeded();
    void debugFamilies();
    void updateFarmingTooltip(FText tooltipTxt, class UWidget* Widget);
    void getStallOwnerFamily(FWorkerFamily& ownerFamily, int32& ownerFamilyIndex);
    void repopulateConstructionResourceList();
    void Update Production Focus Widget if Needed();
    bool upgradeIsMultiUse(int32 A);
    void Change Active Livestock Workers(int32 amt);
    void updateProsperity();
    void updateFuelStatus();
    class UresidentialWidgetFull_C* getResidentialWidget();
    void upgradeMarketWidgetItemsStatus(class UlivestockMarketWidget_C* marketWidget);
    void updateWorkAreaLabel();
    void addInventoryMainTabs();
    void setPerBuildingDetails();
    void getWealth(int32& amt);
    void isDebugMode(bool& Draw Battle Debug);
    void changeHuntingLimit(int32 change);
    void checkIfContainsTabID(FString tabID, TArray<FSettingOption>& tabOptions, bool& Contains);
    double getSettingsUIScale();
    FVector2D scaleByDPI_IThink(FVector2D A);
    void updateExtensionSlots();
    void getStock(int32 Type, int32& amt);
    void udpateRetinueOptions();
    void translateText();
    void updateTaxOptions();
    class UWidget* On_crop_options_GenerateWidget_0(FString Item);
    void updateDemolish();
    void updateLimits&AnimalStats();
    void Update Field Status DEPREC();
    class UWidget* On_sellingGood_comboBox_GenerateWidget_0(FString Item);
    void updateFieldCropProgress();
    void updateFieldOperationButtons();
    void updatePosition();
    void updateUpgrades();
    void playClickSnd();
    class UWidget* Get_close_button_ToolTipWidget_0();
    void updateIsConstructed();
    void updateWorkerSlots();
    class UWidget* Get_worker_add_ToolTipWidget_0();
    void animateInventoryCategories(double Delta);
    void udpateWealth();
    void updateTrade();
    void updateStorageAndFuel();
    void Update Market();
    void updateCropOptions();
    void updatePeople();
    void setWindows_IsHomeOrWork();
    void constructionAndFieldPriorityUpdate();
    void OnLoaded_B172AFCD4C155EDA3CCC20B65E555612(class UObject* Loaded);
    void BndEvt__Inventory_HorizontalRadioSelect_K2Node_ComponentBoundEvent_13_RadioSelectedSignature__DelegateSignature(FString Value);
    void BndEvt__forceHarvest_CheckBox_66_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__Inventory_worker_remove_K2Node_ComponentBoundEvent_18_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__huntingLimit_editableNum_K2Node_ComponentBoundEvent_8_OnEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__Inventory_huntingLimit_inc_K2Node_ComponentBoundEvent_15_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__Inventory_huntingLimit_dec_K2Node_ComponentBoundEvent_29_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__Inventory_retinue_rally_button_1_K2Node_ComponentBoundEvent_38_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__Inventory_squad_edit_1_K2Node_ComponentBoundEvent_39_OnButtonReleasedEvent__DelegateSignature();
    void updatePos();
    void BndEvt__Inventory_fieldPriorityPlusMinus_K2Node_ComponentBoundEvent_1_priorityChanged__DelegateSignature(int32 change);
    void BndEvt__button_demolish_K2Node_ComponentBoundEvent_21_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__Inventory_priorityPlusMinus_K2Node_ComponentBoundEvent_2_priorityChanged__DelegateSignature(int32 change);
    void confirmDemolish();
    void BndEvt__Inventory_help_buildingType_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__worker_add_K2Node_ComponentBoundEvent_33_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__close_button_K2Node_ComponentBoundEvent_82_OnButtonReleasedEvent__DelegateSignature();
    void OnAnimationFinished_Event_0();
    void Close();
    void Update Inventory Event();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__Inventory_button_stall_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__Inventory_button_relocate_K2Node_ComponentBoundEvent_12_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__button_sleep_K2Node_ComponentBoundEvent_21_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__priority_button_K2Node_ComponentBoundEvent_20_OnButtonReleasedEvent__DelegateSignature();
    void updateTogglesColor();
    void changePriority(int32 NewParam);
    void updatePinColor();
    void BndEvt__Header_button_K2Node_ComponentBoundEvent_112_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__Header_button_K2Node_ComponentBoundEvent_94_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Pin_Button_K2Node_ComponentBoundEvent_45_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__Inventory_cropRotation_CheckBox_0_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__Inventory_crop_options_2_K2Node_ComponentBoundEvent_6_OnOpeningEvent__DelegateSignature();
    void BndEvt__Inventory_crop_options_1_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature();
    void BndEvt__Inventory_crop_options_2_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__Inventory_crop_options_1_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__Inventory_crop_options_K2Node_ComponentBoundEvent_17_OnOpeningEvent__DelegateSignature();
    void BndEvt__Inventory_DefaultSpinner_K2Node_ComponentBoundEvent_14_SpinnerSelectionChanged__DelegateSignature(FString Value);
    void BndEvt__erase_crop_button_K2Node_ComponentBoundEvent_25_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__crop_options_K2Node_ComponentBoundEvent_24_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void ExecuteUbergraph_Inventory(int32 EntryPoint);
}; // Size: 0xD11

#endif
