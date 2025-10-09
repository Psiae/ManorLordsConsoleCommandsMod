#ifndef UE4SS_SDK_MLCheatManager_HPP
#define UE4SS_SDK_MLCheatManager_HPP

class UMLCheatManager_C : public UCheatManager
{

    void killSheep();
    void addGoodRegion(int32 regionIndex, int32 Good Type);
    void kill();
    void basics();
    void showPP();
    void xp();
    void inf();
    void infall();
    void gold();
    void plenty();
    void favour();
    void Fire();
    void buffai();
    void spawnPigs();
    void spawnLambs();
    void spawnSheep();
    void spawnOxen();
    void setDay(int32 day);
    void thirsty();
    void wealth(int32 amt);
    void weapons();
    void raiders();
    void brigandSquad();
    void testsquad();
    void openSweep();
    void triggerVictory();
    void triggerGameOver();
    void eraseProblems();
    void drought();
    void rain();
    void crime();
    void addGood(int32 Good Type);
    void testCheat();
    void spawnTestSquad(const FName tempName);
    void getRTSManager(class ARTSMultiEngineCPP*& rtsManager);
    void addInventory(int32 Type, int32 amt);
    void spawnSomeAnimals(EUnitRole unitType, int32 LastIndex, class ARTSMultiEngineCPP* rtsManager);
}; // Size: 0x88

#endif
