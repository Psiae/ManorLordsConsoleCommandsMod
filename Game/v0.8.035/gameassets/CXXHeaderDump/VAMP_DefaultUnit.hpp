#ifndef UE4SS_SDK_VAMP_DefaultUnit_HPP
#define UE4SS_SDK_VAMP_DefaultUnit_HPP

class AVAMP_DefaultUnit_C : public ASMUnit
{
    class UVAISMController* VAISMController_Head;                                     // 0x1460 (size: 0x8)
    class UVAISMController* VAISMController_Helmet;                                   // 0x1468 (size: 0x8)
    class UVAISMController* VAISMController_Body;                                     // 0x1470 (size: 0x8)
    class USpatialEntityComponent* SpatialEntity;                                     // 0x1478 (size: 0x8)
    class UVAISMController* VAISMController_Bonus;                                    // 0x1480 (size: 0x8)
    class UVAISMController* VAISMController_Accessory;                                // 0x1488 (size: 0x8)
    class UVAISMController* VAISMController_Weapon;                                   // 0x1490 (size: 0x8)
    class UVAISMController* VAISMController_Shield;                                   // 0x1498 (size: 0x8)
    class UVARuntimeComponent* VARuntimeBP;                                           // 0x14A0 (size: 0x8)
    int32 Unique ID;                                                                  // 0x14A8 (size: 0x4)

}; // Size: 0x14AC

#endif
