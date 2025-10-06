#ifndef UE4SS_SDK_maintenanceTypeEntry_HPP
#define UE4SS_SDK_maintenanceTypeEntry_HPP

class UmaintenanceTypeEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UImage* Icon;                                                               // 0x02D8 (size: 0x8)
    class UImage* Image_90;                                                           // 0x02E0 (size: 0x8)
    int32 goodID;                                                                     // 0x02E8 (size: 0x4)

    void Construct();
    void ExecuteUbergraph_maintenanceTypeEntry(int32 EntryPoint);
}; // Size: 0x2EC

#endif
