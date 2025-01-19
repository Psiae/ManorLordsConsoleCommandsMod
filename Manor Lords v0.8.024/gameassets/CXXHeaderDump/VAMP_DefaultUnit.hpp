#ifndef UE4SS_SDK_VAMP_DefaultUnit_HPP
#define UE4SS_SDK_VAMP_DefaultUnit_HPP

class AVAMP_DefaultUnit_C : public ASMUnit
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0E90 (size: 0x8)
    class UVAISMController* VAISMController_Head;                                     // 0x0E98 (size: 0x8)
    class UVAISMController* VAISMController_Helmet;                                   // 0x0EA0 (size: 0x8)
    class UVAISMController* VAISMController_Body;                                     // 0x0EA8 (size: 0x8)
    class USpatialEntityComponent* SpatialEntity;                                     // 0x0EB0 (size: 0x8)
    class UVAISMController* VAISMController_Bonus;                                    // 0x0EB8 (size: 0x8)
    class UVAISMController* VAISMController_Accessory;                                // 0x0EC0 (size: 0x8)
    class UVAISMController* VAISMController_Weapon;                                   // 0x0EC8 (size: 0x8)
    class UVAISMController* VAISMController_Shield;                                   // 0x0ED0 (size: 0x8)
    class UVARuntimeComponent* VARuntimeBP;                                           // 0x0ED8 (size: 0x8)
    int32 Unique ID;                                                                  // 0x0EE0 (size: 0x4)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_VAMP_DefaultUnit(int32 EntryPoint);
}; // Size: 0xEE4

#endif
