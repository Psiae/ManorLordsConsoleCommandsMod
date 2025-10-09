#ifndef UE4SS_SDK_Mission01_ROBBER_HPP
#define UE4SS_SDK_Mission01_ROBBER_HPP

class AMission01_ROBBER_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class AMyRTSMultiEngineCPP_BP_C* masterPtr;                                       // 0x0230 (size: 0x8)
    float windT;                                                                      // 0x0238 (size: 0x4)
    class AMyRTSMultiEngineCPP_BP_C* RTSGameManager_ExecuteUbergraph_Mission01_ROBBER_RefProperty; // 0x0240 (size: 0x8)
    class AFogBP_C* FogBP_2_ExecuteUbergraph_Mission01_ROBBER_RefProperty;            // 0x0248 (size: 0x8)
    class AWindDirectionalSource* WindDirectionalSource_2_EdGraph_1_RefProperty;      // 0x0250 (size: 0x8)
    class AWindDirectionalSource* WindDirectionalSource_2_EdGraph_2_RefProperty;      // 0x0258 (size: 0x8)
    class AWindDirectionalSource* WindDirectionalSource_2_EdGraph_3_RefProperty;      // 0x0260 (size: 0x8)
    class AMyRTSMultiEngineCPP_BP_C* RTSGameManager_EdGraph_4_RefProperty;            // 0x0268 (size: 0x8)

    void addInventory(int32 Type, int32 amt);
    void spawnSomeAnimals(EUnitRole unitType);
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
    void setDay(int32 Day);
    void setFogMul(float FogMultiplier);
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
    void ExecuteUbergraph_Mission01_ROBBER(int32 EntryPoint);
}; // Size: 0x270

#endif
