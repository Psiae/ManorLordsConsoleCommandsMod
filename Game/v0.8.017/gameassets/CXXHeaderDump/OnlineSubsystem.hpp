#ifndef UE4SS_SDK_OnlineSubsystem_HPP
#define UE4SS_SDK_OnlineSubsystem_HPP

#include "OnlineSubsystem_enums.hpp"

struct FNamedInterface
{
    FName InterfaceName;                                                              // 0x0000 (size: 0x8)
    class UObject* InterfaceObject;                                                   // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FNamedInterfaceDef
{
    FName InterfaceName;                                                              // 0x0000 (size: 0x8)
    FString InterfaceClassName;                                                       // 0x0008 (size: 0x10)

}; // Size: 0x18

class ITurnBasedMatchInterface : public IInterface
{

    void OnMatchReceivedTurn(FString Match, bool bDidBecomeActive);
    void OnMatchEnded(FString Match);
}; // Size: 0x28

class UNamedInterfaces : public UObject
{
    TArray<FNamedInterface> NamedInterfaces;                                          // 0x0028 (size: 0x10)
    TArray<FNamedInterfaceDef> NamedInterfaceDefs;                                    // 0x0038 (size: 0x10)

}; // Size: 0x60

#endif
