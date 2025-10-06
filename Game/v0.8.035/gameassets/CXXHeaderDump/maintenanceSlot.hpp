#ifndef UE4SS_SDK_maintenanceSlot_HPP
#define UE4SS_SDK_maintenanceSlot_HPP

class UmaintenanceSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UTextBlock* frequency_text;                                                 // 0x02D8 (size: 0x8)
    class UmaintenanceTypeEntry_C* maintenanceTypeEntry;                              // 0x02E0 (size: 0x8)
    class UTextBlock* Month_1;                                                        // 0x02E8 (size: 0x8)
    class UHorizontalBox* resourceTypeContainer_hb;                                   // 0x02F0 (size: 0x8)
    class UButton* TooltipHighlightButton;                                            // 0x02F8 (size: 0x8)
    class UProgressBar* upkeepCollection_pb;                                          // 0x0300 (size: 0x8)
    double startDay;                                                                  // 0x0308 (size: 0x8)
    double UpkeepDay;                                                                 // 0x0310 (size: 0x8)
    double Days Total;                                                                // 0x0318 (size: 0x8)
    FMaintenanceTypes MaintenanceTypes;                                               // 0x0320 (size: 0x10)
    class UMaintenanceComponent* Maintenance Component;                               // 0x0330 (size: 0x8)

    void GetMaintenanceStatusText(FText& Result);
    void UpdateDynamicContents();
    void Construct();
    void ExecuteUbergraph_maintenanceSlot(int32 EntryPoint);
}; // Size: 0x338

#endif
