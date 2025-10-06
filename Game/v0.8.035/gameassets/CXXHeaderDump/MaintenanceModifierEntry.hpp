#ifndef UE4SS_SDK_MaintenanceModifierEntry_HPP
#define UE4SS_SDK_MaintenanceModifierEntry_HPP

class UMaintenanceModifierEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class URichTextBlock* RichTextBlock_15;                                           // 0x02D8 (size: 0x8)
    class UTextBlock* value_txt;                                                      // 0x02E0 (size: 0x8)
    FName modifierName;                                                               // 0x02E8 (size: 0x8)
    int32 Value;                                                                      // 0x02F0 (size: 0x4)

    void Construct();
    void ExecuteUbergraph_MaintenanceModifierEntry(int32 EntryPoint);
}; // Size: 0x2F4

#endif
