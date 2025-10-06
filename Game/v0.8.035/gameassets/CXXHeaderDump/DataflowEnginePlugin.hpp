#ifndef UE4SS_SDK_DataflowEnginePlugin_HPP
#define UE4SS_SDK_DataflowEnginePlugin_HPP

struct FCollectionAttributeKey
{
    FString Attribute;                                                                // 0x0000 (size: 0x10)
    FString Group;                                                                    // 0x0010 (size: 0x10)

}; // Size: 0x20

class ADataflowActor : public AActor
{
    class UDataflowComponent* DataflowComponent;                                      // 0x02A8 (size: 0x8)

}; // Size: 0x2B0

class UDataflowComponent : public UPrimitiveComponent
{
}; // Size: 0x630

#endif
