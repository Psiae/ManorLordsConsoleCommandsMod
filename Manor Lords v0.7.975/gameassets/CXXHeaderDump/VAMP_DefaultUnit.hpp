#ifndef UE4SS_SDK_VAMP_DefaultUnit_HPP
#define UE4SS_SDK_VAMP_DefaultUnit_HPP

class AVAMP_DefaultUnit_C : public ASMUnit
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0C20 (size: 0x8)
    class UVAHISMController* VAHISMController_Helmet;                                 // 0x0C28 (size: 0x8)
    class UVAHISMController* VAHISMController_Head;                                   // 0x0C30 (size: 0x8)
    class UVAHISMController* VAHISMController_Body;                                   // 0x0C38 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0C40 (size: 0x8)
    class UVARuntimeComponent* VARuntimeBP;                                           // 0x0C48 (size: 0x8)
    class UVAHISMController* VAHISMController_Weapon;                                 // 0x0C50 (size: 0x8)
    class UVAHISMController* VAHISMController_Bonus;                                  // 0x0C58 (size: 0x8)
    class UVAHISMController* VAHISMController_Accessory;                              // 0x0C60 (size: 0x8)
    class UVAHISMController* VAHISMController_Shield;                                 // 0x0C68 (size: 0x8)
    int32 Unique ID;                                                                  // 0x0C70 (size: 0x4)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_VAMP_DefaultUnit(int32 EntryPoint);
}; // Size: 0xC74

#endif
