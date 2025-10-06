#ifndef UE4SS_SDK_MaintenanceTooltip_HPP
#define UE4SS_SDK_MaintenanceTooltip_HPP

class UMaintenanceTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UImage* BorderExterior;                                                     // 0x02D8 (size: 0x8)
    class UImage* BorderInterior;                                                     // 0x02E0 (size: 0x8)
    class UTextBlock* daysLeft_txt;                                                   // 0x02E8 (size: 0x8)
    class UImage* Decor_Top;                                                          // 0x02F0 (size: 0x8)
    class URichTextBlock* descr_RichTxt;                                              // 0x02F8 (size: 0x8)
    class UImage* Image;                                                              // 0x0300 (size: 0x8)
    class UImage* Image_334;                                                          // 0x0308 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x0310 (size: 0x8)
    class UTextBlock* MaintenanceStatus_txt;                                          // 0x0318 (size: 0x8)
    class UTextBlock* modifier_um_txt;                                                // 0x0320 (size: 0x8)
    class UVerticalBox* ModifierList_VB;                                              // 0x0328 (size: 0x8)
    class UTextBlock* name_txt_1;                                                     // 0x0330 (size: 0x8)
    class UTextBlock* pst_none_txt_1;                                                 // 0x0338 (size: 0x8)
    class UTextBlock* TextBlock_59;                                                   // 0x0340 (size: 0x8)
    FMaintenanceTypes MaintenanceTypes;                                               // 0x0348 (size: 0x10)
    class UMaintenanceComponent* Maintenance Component;                               // 0x0358 (size: 0x8)

    void GetMaintenanceStatusText(FText& Result);
    void UpdateContents();
    void Construct();
    void ExecuteUbergraph_MaintenanceTooltip(int32 EntryPoint);
}; // Size: 0x360

#endif
