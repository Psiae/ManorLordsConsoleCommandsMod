#ifndef UE4SS_SDK_Mission01_ROBBER_HPP
#define UE4SS_SDK_Mission01_ROBBER_HPP

class AMission01_ROBBER_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class AMyRTSMultiEngineCPP_BP_C* masterPtr;                                       // 0x02A0 (size: 0x8)
    double windT;                                                                     // 0x02A8 (size: 0x8)
    class AMyRTSMultiEngineCPP_BP_C* RTSGameManager_ExecuteUbergraph_Mission01_ROBBER_RefProperty; // 0x02B0 (size: 0x8)
    class AFogBP_C* FogBP_2_ExecuteUbergraph_Mission01_ROBBER_RefProperty;            // 0x02B8 (size: 0x8)
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
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void showPP();
    void xp();
    void inf();
    void gold();
    void plenty();
    void favour();
    void Fire();
    void buffai();
    void infall();
    void spawnSheep();
    void spawnOxen();
    void setDay(int32 day);
    void setFogMul(double fogMultiplier);
    void thirsty();
    void weapons();
    void raiders();
    void testsquad();
    void crime();
    void rain();
    void drought();
    void eraseProblems();
    void basics();
    void triggerGameOver();
    void openSweep();
    void triggerVictory();
    void addGood(int32 Good Type);
    void kill();
    void wealth(int32 amt);
    void addGoodRegion(int32 regionIndex, int32 Good Type);
    void spawnLambs();
    void spawnPigs();
    void ExecuteUbergraph_Mission01_ROBBER(int32 EntryPoint);
}; // Size: 0x2E0

#endif
