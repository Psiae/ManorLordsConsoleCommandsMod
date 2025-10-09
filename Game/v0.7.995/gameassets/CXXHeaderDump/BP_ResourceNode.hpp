#ifndef UE4SS_SDK_BP_ResourceNode_HPP
#define UE4SS_SDK_BP_ResourceNode_HPP

class ABP_ResourceNode_C : public AActor
{
    class UBillboardComponent* Billboard;                                             // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    TEnumAsByte<EResourceNodeType::Type> NodeType;                                    // 0x02A0 (size: 0x1)

    void UserConstructionScript();
}; // Size: 0x2A1

#endif
