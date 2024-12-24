#ifndef UE4SS_SDK_BP_BuildingMaster_HPP
#define UE4SS_SDK_BP_BuildingMaster_HPP

class ABP_BuildingMaster_C : public ASMBuildingMaster
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0E30 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_BuildingMaster(int32 EntryPoint);
}; // Size: 0xE38

#endif
