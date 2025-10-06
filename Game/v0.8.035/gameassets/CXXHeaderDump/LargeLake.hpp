#ifndef UE4SS_SDK_LargeLake_HPP
#define UE4SS_SDK_LargeLake_HPP

class ALargeLake_C : public ALevelScriptActor
{
    class AMyRTSMultiEngineCPP_BP_C* masterPtr;                                       // 0x02B0 (size: 0x8)
    double windT;                                                                     // 0x02B8 (size: 0x8)
    class AWindDirectionalSource* WindDirectionalSource_2_windDir_MERGED_RefProperty; // 0x02C0 (size: 0x8)
    class AWindDirectionalSource* WindDirectionalSource_2_windStr_MERGED_RefProperty; // 0x02C8 (size: 0x8)
    class AWindDirectionalSource* WindDirectionalSource_2_windSpeedBlend_MERGED_RefProperty; // 0x02D0 (size: 0x8)
    class AMyRTSMultiEngineCPP_BP_C* RTSGameManager_spawnSomeAnimals_MERGED_RefProperty; // 0x02D8 (size: 0x8)

    void addInventory(int32 Type, int32 amt);
    void spawnSomeAnimals(EUnitRole unitType, int32 LastIndex);
    void windSpeedBlend();
    void windStr();
    void windDir();
    void windSpeed();
}; // Size: 0x2E0

#endif
