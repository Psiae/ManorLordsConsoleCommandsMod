#ifndef UE4SS_SDK_Winding_River_HPP
#define UE4SS_SDK_Winding_River_HPP

class AWinding_River_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class AMyRTSMultiEngineCPP_BP_C* masterPtr;                                       // 0x02A0 (size: 0x8)
    double windT;                                                                     // 0x02A8 (size: 0x8)
    class AWindDirectionalSource* WindDirectionalSource_2_windDir_MERGED_RefProperty; // 0x02B0 (size: 0x8)
    class AWindDirectionalSource* WindDirectionalSource_2_windStr_MERGED_RefProperty; // 0x02B8 (size: 0x8)
    class AWindDirectionalSource* WindDirectionalSource_2_windSpeedBlend_MERGED_RefProperty; // 0x02C0 (size: 0x8)
    class AMyRTSMultiEngineCPP_BP_C* RTSGameManager_spawnSomeAnimals_MERGED_RefProperty; // 0x02C8 (size: 0x8)

    void addInventory(int32 Type, int32 amt);
    void spawnSomeAnimals(EUnitRole unitType, int32 LastIndex);
    void windSpeedBlend();
    void windStr();
    void windDir();
    void windSpeed();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Winding_River(int32 EntryPoint);
}; // Size: 0x2D0

#endif
