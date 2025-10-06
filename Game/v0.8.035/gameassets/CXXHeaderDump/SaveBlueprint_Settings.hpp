#ifndef UE4SS_SDK_SaveBlueprint_Settings_HPP
#define UE4SS_SDK_SaveBlueprint_Settings_HPP

class USaveBlueprint_Settings_C : public USaveGame
{
    FRTSSettings Settings;                                                            // 0x0028 (size: 0xF8)
    FAudioSliders AudioSliders;                                                       // 0x0120 (size: 0x24)

}; // Size: 0x144

#endif
