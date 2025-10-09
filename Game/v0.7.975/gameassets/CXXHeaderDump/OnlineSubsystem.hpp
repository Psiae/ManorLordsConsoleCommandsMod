#ifndef UE4SS_SDK_OnlineSubsystem_HPP
#define UE4SS_SDK_OnlineSubsystem_HPP

#include "OnlineSubsystem_enums.hpp"

struct FInAppPurchaseProductInfo
{
    FString Identifier;                                                               // 0x0000 (size: 0x10)
    FString TransactionIdentifier;                                                    // 0x0010 (size: 0x10)
    FString DisplayName;                                                              // 0x0020 (size: 0x10)
    FString DisplayDescription;                                                       // 0x0030 (size: 0x10)
    FString DisplayPrice;                                                             // 0x0040 (size: 0x10)
    float RawPrice;                                                                   // 0x0050 (size: 0x4)
    FString CurrencyCode;                                                             // 0x0058 (size: 0x10)
    FString CurrencySymbol;                                                           // 0x0068 (size: 0x10)
    FString DecimalSeparator;                                                         // 0x0078 (size: 0x10)
    FString GroupingSeparator;                                                        // 0x0088 (size: 0x10)
    FString ReceiptData;                                                              // 0x0098 (size: 0x10)

}; // Size: 0xA8

struct FInAppPurchaseProductRequest
{
    FString ProductIdentifier;                                                        // 0x0000 (size: 0x10)
    bool bIsConsumable;                                                               // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FInAppPurchaseRestoreInfo
{
    FString Identifier;                                                               // 0x0000 (size: 0x10)
    FString ReceiptData;                                                              // 0x0010 (size: 0x10)
    FString TransactionIdentifier;                                                    // 0x0020 (size: 0x10)

}; // Size: 0x30

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
