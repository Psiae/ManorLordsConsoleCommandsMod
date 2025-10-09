#ifndef UE4SS_SDK_SaveBlueprint_Settings_HPP
#define UE4SS_SDK_SaveBlueprint_Settings_HPP

class USaveBlueprint_Settings_C : public USaveGame
{
    FRTSSettings Settings;                                                            // 0x0028 (size: 0xA8)
    FAudioSliders AudioSliders;                                                       // 0x00D0 (size: 0x24)

}; // Size: 0xF4

#endif
