#ifndef UE4SS_SDK_OnlineSubsystemUtils_HPP
#define UE4SS_SDK_OnlineSubsystemUtils_HPP

#include "OnlineSubsystemUtils_enums.hpp"

struct FBlueprintSessionResult
{
}; // Size: 0x108

struct FInAppPurchaseProductInfo2
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
    TMap<class FString, class FString> DynamicFields;                                 // 0x00A8 (size: 0x50)

}; // Size: 0xF8

struct FInAppPurchaseProductRequest2
{
    FString ProductIdentifier;                                                        // 0x0000 (size: 0x10)
    bool bIsConsumable;                                                               // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FInAppPurchaseReceiptInfo
{
    FString ItemName;                                                                 // 0x0000 (size: 0x10)
    FString ItemId;                                                                   // 0x0010 (size: 0x10)
    FString ValidationInfo;                                                           // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FInAppPurchaseReceiptInfo2
{
    FString ItemName;                                                                 // 0x0000 (size: 0x10)
    FString ItemId;                                                                   // 0x0010 (size: 0x10)
    FString ValidationInfo;                                                           // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FInAppPurchaseRestoreInfo2
{
    FString ItemName;                                                                 // 0x0000 (size: 0x10)
    FString ItemId;                                                                   // 0x0010 (size: 0x10)
    FString ValidationInfo;                                                           // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FOnlineProxyStoreOffer
{
    FString OfferId;                                                                  // 0x0000 (size: 0x10)
    FText Title;                                                                      // 0x0010 (size: 0x18)
    FText Description;                                                                // 0x0028 (size: 0x18)
    FText LongDescription;                                                            // 0x0040 (size: 0x18)
    FText RegularPriceText;                                                           // 0x0058 (size: 0x18)
    int32 RegularPrice;                                                               // 0x0070 (size: 0x4)
    FText PriceText;                                                                  // 0x0078 (size: 0x18)
    int32 NumericPrice;                                                               // 0x0090 (size: 0x4)
    FString CurrencyCode;                                                             // 0x0098 (size: 0x10)
    FDateTime ReleaseDate;                                                            // 0x00A8 (size: 0x8)
    FDateTime ExpirationDate;                                                         // 0x00B0 (size: 0x8)
    EOnlineProxyStoreOfferDiscountType DiscountType;                                  // 0x00B8 (size: 0x1)
    TMap<class FString, class FString> DynamicFields;                                 // 0x00C0 (size: 0x50)

}; // Size: 0x110

struct FPIELoginSettingsInternal
{
    FString ID;                                                                       // 0x0000 (size: 0x10)
    FString Token;                                                                    // 0x0010 (size: 0x10)
    FString Type;                                                                     // 0x0020 (size: 0x10)
    TArray<uint8> TokenBytes;                                                         // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FPartyBeaconCrossplayPlatformMapping
{
    FString PlatformName;                                                             // 0x0000 (size: 0x10)
    FString PlatformType;                                                             // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FPartyReservation
{
    int32 TeamNum;                                                                    // 0x0000 (size: 0x4)
    FUniqueNetIdRepl PartyLeader;                                                     // 0x0008 (size: 0x28)
    TArray<FPlayerReservation> PartyMembers;                                          // 0x0030 (size: 0x10)
    TArray<FPlayerReservation> RemovedPartyMembers;                                   // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FPlayerReservation
{
    FUniqueNetIdRepl UniqueId;                                                        // 0x0000 (size: 0x28)
    FString ValidationStr;                                                            // 0x0028 (size: 0x10)
    FString Platform;                                                                 // 0x0038 (size: 0x10)
    bool bAllowCrossplay;                                                             // 0x0048 (size: 0x1)
    float ElapsedTime;                                                                // 0x004C (size: 0x4)

}; // Size: 0x50

struct FSpectatorReservation
{
    FUniqueNetIdRepl SpectatorId;                                                     // 0x0000 (size: 0x28)
    FPlayerReservation Spectator;                                                     // 0x0028 (size: 0x50)

}; // Size: 0x78

class AOnlineBeacon : public AActor
{
    float BeaconConnectionInitialTimeout;                                             // 0x0228 (size: 0x4)
    float BeaconConnectionTimeout;                                                    // 0x022C (size: 0x4)
    class UNetDriver* NetDriver;                                                      // 0x0230 (size: 0x8)

}; // Size: 0x250

class AOnlineBeaconClient : public AOnlineBeacon
{
    class AOnlineBeaconHostObject* BeaconOwner;                                       // 0x0250 (size: 0x8)
    class UNetConnection* BeaconConnection;                                           // 0x0258 (size: 0x8)
    EBeaconConnectionState ConnectionState;                                           // 0x0260 (size: 0x1)

    void ClientOnConnected();
}; // Size: 0x2B0

class AOnlineBeaconHost : public AOnlineBeacon
{
    int32 ListenPort;                                                                 // 0x0250 (size: 0x4)
    TArray<class AOnlineBeaconClient*> ClientActors;                                  // 0x0258 (size: 0x10)

}; // Size: 0x308

class AOnlineBeaconHostObject : public AActor
{
    FString BeaconTypeName;                                                           // 0x0220 (size: 0x10)
    TSubclassOf<class AOnlineBeaconClient> ClientBeaconActorClass;                    // 0x0230 (size: 0x8)
    TArray<class AOnlineBeaconClient*> ClientActors;                                  // 0x0238 (size: 0x10)

}; // Size: 0x248

class APartyBeaconClient : public AOnlineBeaconClient
{
    FString DestSessionId;                                                            // 0x02E0 (size: 0x10)
    FPartyReservation PendingReservation;                                             // 0x02F0 (size: 0x50)
    EClientRequestType RequestType;                                                   // 0x0340 (size: 0x1)
    bool bPendingReservationSent;                                                     // 0x0341 (size: 0x1)
    bool bCancelReservation;                                                          // 0x0342 (size: 0x1)

    void ServerUpdateReservationRequest(FString SessionId, const FPartyReservation& ReservationUpdate);
    void ServerReservationRequest(FString SessionId, const FPartyReservation& Reservation);
    void ServerRemoveMemberFromReservationRequest(FString SessionId, const FPartyReservation& ReservationUpdate);
    void ServerCancelReservationRequest(const FUniqueNetIdRepl& PartyLeader);
    void ServerAddOrUpdateReservationRequest(FString SessionId, const FPartyReservation& Reservation);
    void ClientSendReservationUpdates(int32 NumRemainingReservations);
    void ClientSendReservationFull();
    void ClientReservationResponse(TEnumAsByte<EPartyReservationResult::Type> ReservationResponse);
    void ClientCancelReservationResponse(TEnumAsByte<EPartyReservationResult::Type> ReservationResponse);
}; // Size: 0x370

class APartyBeaconHost : public AOnlineBeaconHostObject
{
    class UPartyBeaconState* State;                                                   // 0x0248 (size: 0x8)
    bool bLogoutOnSessionTimeout;                                                     // 0x02B0 (size: 0x1)
    float SessionTimeoutSecs;                                                         // 0x02B4 (size: 0x4)
    float TravelSessionTimeoutSecs;                                                   // 0x02B8 (size: 0x4)

}; // Size: 0x2C0

class ASpectatorBeaconClient : public AOnlineBeaconClient
{
    FString DestSessionId;                                                            // 0x02E0 (size: 0x10)
    FSpectatorReservation PendingReservation;                                         // 0x02F0 (size: 0x78)
    ESpectatorClientRequestType RequestType;                                          // 0x0368 (size: 0x1)
    bool bPendingReservationSent;                                                     // 0x0369 (size: 0x1)
    bool bCancelReservation;                                                          // 0x036A (size: 0x1)

    void ServerReservationRequest(FString SessionId, const FSpectatorReservation& Reservation);
    void ServerCancelReservationRequest(const FUniqueNetIdRepl& Spectator);
    void ClientSendReservationUpdates(int32 NumRemainingReservations);
    void ClientSendReservationFull();
    void ClientReservationResponse(TEnumAsByte<ESpectatorReservationResult::Type> ReservationResponse);
    void ClientCancelReservationResponse(TEnumAsByte<ESpectatorReservationResult::Type> ReservationResponse);
}; // Size: 0x398

class ASpectatorBeaconHost : public AOnlineBeaconHostObject
{
    class USpectatorBeaconState* State;                                               // 0x0248 (size: 0x8)
    bool bLogoutOnSessionTimeout;                                                     // 0x02B0 (size: 0x1)
    float SessionTimeoutSecs;                                                         // 0x02B4 (size: 0x4)
    float TravelSessionTimeoutSecs;                                                   // 0x02B8 (size: 0x4)

}; // Size: 0x2C0

class ATestBeaconClient : public AOnlineBeaconClient
{

    void ServerPong();
    void ClientPing();
}; // Size: 0x2B0

class ATestBeaconHost : public AOnlineBeaconHostObject
{
}; // Size: 0x248

class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void GetCachedAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, FName AchievementID, bool& bFoundID, float& progress);
    void GetCachedAchievementDescription(class UObject* WorldContextObject, class APlayerController* PlayerController, FName AchievementID, bool& bFoundID, FText& Title, FText& LockedDescription, FText& UnlockedDescription, bool& bHidden);
}; // Size: 0x28

class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FAchievementQueryCallbackProxyOnSuccess OnSuccess;                                // 0x0030 (size: 0x10)
    void EmptyOnlineDelegate();
    FAchievementQueryCallbackProxyOnFailure OnFailure;                                // 0x0040 (size: 0x10)
    void EmptyOnlineDelegate();

    class UAchievementQueryCallbackProxy* CacheAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController);
    class UAchievementQueryCallbackProxy* CacheAchievementDescriptions(class UObject* WorldContextObject, class APlayerController* PlayerController);
}; // Size: 0x68

class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FAchievementWriteCallbackProxyOnSuccess OnSuccess;                                // 0x0030 (size: 0x10)
    void AchievementWriteDelegate(FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag);
    FAchievementWriteCallbackProxyOnFailure OnFailure;                                // 0x0040 (size: 0x10)
    void AchievementWriteDelegate(FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag);

    class UAchievementWriteCallbackProxy* WriteAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, FName AchievementName, float progress, int32 UserTag);
}; // Size: 0x80

class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FConnectionCallbackProxyOnSuccess OnSuccess;                                      // 0x0030 (size: 0x10)
    void OnlineConnectionResult(int32 ErrorCode);
    FConnectionCallbackProxyOnFailure OnFailure;                                      // 0x0040 (size: 0x10)
    void OnlineConnectionResult(int32 ErrorCode);

    class UConnectionCallbackProxy* ConnectToService(class UObject* WorldContextObject, class APlayerController* PlayerController);
}; // Size: 0x78

class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FCreateSessionCallbackProxyOnSuccess OnSuccess;                                   // 0x0030 (size: 0x10)
    void EmptyOnlineDelegate();
    FCreateSessionCallbackProxyOnFailure OnFailure;                                   // 0x0040 (size: 0x10)
    void EmptyOnlineDelegate();

    class UCreateSessionCallbackProxy* CreateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, int32 PublicConnections, bool bUseLAN);
}; // Size: 0x98

class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FDestroySessionCallbackProxyOnSuccess OnSuccess;                                  // 0x0030 (size: 0x10)
    void EmptyOnlineDelegate();
    FDestroySessionCallbackProxyOnFailure OnFailure;                                  // 0x0040 (size: 0x10)
    void EmptyOnlineDelegate();

    class UDestroySessionCallbackProxy* DestroySession(class UObject* WorldContextObject, class APlayerController* PlayerController);
}; // Size: 0x78

class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FEndMatchCallbackProxyOnSuccess OnSuccess;                                        // 0x0030 (size: 0x10)
    void EmptyOnlineDelegate();
    FEndMatchCallbackProxyOnFailure OnFailure;                                        // 0x0040 (size: 0x10)
    void EmptyOnlineDelegate();

    class UEndMatchCallbackProxy* EndMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, TScriptInterface<class ITurnBasedMatchInterface> MatchActor, FString MatchID, TEnumAsByte<EMPMatchOutcome::Type> LocalPlayerOutcome, TEnumAsByte<EMPMatchOutcome::Type> OtherPlayersOutcome);
}; // Size: 0x80

class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FEndTurnCallbackProxyOnSuccess OnSuccess;                                         // 0x0030 (size: 0x10)
    void EmptyOnlineDelegate();
    FEndTurnCallbackProxyOnFailure OnFailure;                                         // 0x0040 (size: 0x10)
    void EmptyOnlineDelegate();

    class UEndTurnCallbackProxy* EndTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, TScriptInterface<class ITurnBasedMatchInterface> TurnBasedMatchInterface);
}; // Size: 0x78

class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FFindSessionsCallbackProxyOnSuccess OnSuccess;                                    // 0x0030 (size: 0x10)
    void BlueprintFindSessionsResultDelegate(const TArray<FBlueprintSessionResult>& Results);
    FFindSessionsCallbackProxyOnFailure OnFailure;                                    // 0x0040 (size: 0x10)
    void BlueprintFindSessionsResultDelegate(const TArray<FBlueprintSessionResult>& Results);

    FString GetServerName(const FBlueprintSessionResult& Result);
    int32 GetPingInMs(const FBlueprintSessionResult& Result);
    int32 GetMaxPlayers(const FBlueprintSessionResult& Result);
    int32 GetCurrentPlayers(const FBlueprintSessionResult& Result);
    class UFindSessionsCallbackProxy* FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int32 MaxResults, bool bUseLAN);
}; // Size: 0x90

class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FFindTurnBasedMatchCallbackProxyOnSuccess OnSuccess;                              // 0x0030 (size: 0x10)
    void OnlineTurnBasedMatchResult(FString MatchID);
    FFindTurnBasedMatchCallbackProxyOnFailure OnFailure;                              // 0x0040 (size: 0x10)
    void OnlineTurnBasedMatchResult(FString MatchID);

    class UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, TScriptInterface<class ITurnBasedMatchInterface> MatchActor, int32 MinPlayers, int32 MaxPlayers, int32 PlayerGroup, bool ShowExistingMatches);
}; // Size: 0x88

class UInAppPurchaseCallbackProxy : public UObject
{
    FInAppPurchaseCallbackProxyOnSuccess OnSuccess;                                   // 0x0028 (size: 0x10)
    void InAppPurchaseResult(TEnumAsByte<EInAppPurchaseState::Type> PurchaseStatus, const FInAppPurchaseProductInfo& InAppPurchaseReceipts);
    FInAppPurchaseCallbackProxyOnFailure OnFailure;                                   // 0x0038 (size: 0x10)
    void InAppPurchaseResult(TEnumAsByte<EInAppPurchaseState::Type> PurchaseStatus, const FInAppPurchaseProductInfo& InAppPurchaseReceipts);

    class UInAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, const FInAppPurchaseProductRequest& ProductRequest);
}; // Size: 0x80

class UInAppPurchaseCallbackProxy2 : public UObject
{
    FInAppPurchaseCallbackProxy2OnSuccess OnSuccess;                                  // 0x0028 (size: 0x10)
    void InAppPurchaseResult2(EInAppPurchaseStatus PurchaseStatus, const TArray<FInAppPurchaseReceiptInfo2>& InAppPurchaseReceipts);
    FInAppPurchaseCallbackProxy2OnFailure OnFailure;                                  // 0x0038 (size: 0x10)
    void InAppPurchaseResult2(EInAppPurchaseStatus PurchaseStatus, const TArray<FInAppPurchaseReceiptInfo2>& InAppPurchaseReceipts);

    class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(class APlayerController* PlayerController);
    class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned(class APlayerController* PlayerController);
    class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, const FInAppPurchaseProductRequest2& ProductRequest);
}; // Size: 0xA8

class UInAppPurchaseQueryCallbackProxy : public UObject
{
    FInAppPurchaseQueryCallbackProxyOnSuccess OnSuccess;                              // 0x0028 (size: 0x10)
    void InAppPurchaseQueryResult(const TArray<FInAppPurchaseProductInfo>& InAppPurchaseInformation);
    FInAppPurchaseQueryCallbackProxyOnFailure OnFailure;                              // 0x0038 (size: 0x10)
    void InAppPurchaseQueryResult(const TArray<FInAppPurchaseProductInfo>& InAppPurchaseInformation);

    class UInAppPurchaseQueryCallbackProxy* CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, const TArray<FString>& ProductIdentifiers);
}; // Size: 0x90

class UInAppPurchaseQueryCallbackProxy2 : public UObject
{
    FInAppPurchaseQueryCallbackProxy2OnSuccess OnSuccess;                             // 0x0028 (size: 0x10)
    void InAppPurchaseQuery2Result(const TArray<FOnlineProxyStoreOffer>& InAppOfferInformation);
    FInAppPurchaseQueryCallbackProxy2OnFailure OnFailure;                             // 0x0038 (size: 0x10)
    void InAppPurchaseQuery2Result(const TArray<FOnlineProxyStoreOffer>& InAppOfferInformation);

    class UInAppPurchaseQueryCallbackProxy2* CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, const TArray<FString>& ProductIdentifiers);
}; // Size: 0x68

class UInAppPurchaseRestoreCallbackProxy : public UObject
{
    FInAppPurchaseRestoreCallbackProxyOnSuccess OnSuccess;                            // 0x0028 (size: 0x10)
    void InAppPurchaseRestoreResult(TEnumAsByte<EInAppPurchaseState::Type> CompletionStatus, const TArray<FInAppPurchaseRestoreInfo>& InAppRestorePurchaseInformation);
    FInAppPurchaseRestoreCallbackProxyOnFailure OnFailure;                            // 0x0038 (size: 0x10)
    void InAppPurchaseRestoreResult(TEnumAsByte<EInAppPurchaseState::Type> CompletionStatus, const TArray<FInAppPurchaseRestoreInfo>& InAppRestorePurchaseInformation);

    class UInAppPurchaseRestoreCallbackProxy* CreateProxyObjectForInAppPurchaseRestore(const TArray<FInAppPurchaseProductRequest>& ConsumableProductFlags, class APlayerController* PlayerController);
}; // Size: 0x90

class UInAppPurchaseRestoreCallbackProxy2 : public UObject
{
    FInAppPurchaseRestoreCallbackProxy2OnSuccess OnSuccess;                           // 0x0028 (size: 0x10)
    void InAppPurchaseRestoreResult2(EInAppPurchaseStatus PurchaseStatus, const TArray<FInAppPurchaseRestoreInfo2>& InAppPurchaseRestoreInfo);
    FInAppPurchaseRestoreCallbackProxy2OnFailure OnFailure;                           // 0x0038 (size: 0x10)
    void InAppPurchaseRestoreResult2(EInAppPurchaseStatus PurchaseStatus, const TArray<FInAppPurchaseRestoreInfo2>& InAppPurchaseRestoreInfo);

    class UInAppPurchaseRestoreCallbackProxy2* CreateProxyObjectForInAppPurchaseRestore(const TArray<FInAppPurchaseProductRequest2>& ConsumableProductFlags, class APlayerController* PlayerController);
}; // Size: 0xA8

class UIpConnection : public UNetConnection
{
    float SocketErrorDisconnectDelay;                                                 // 0x1BF8 (size: 0x4)

}; // Size: 0x1C48

class UIpNetDriver : public UNetDriver
{
    uint8 LogPortUnreach;                                                             // 0x0760 (size: 0x1)
    uint8 AllowPlayerPortUnreach;                                                     // 0x0760 (size: 0x1)
    uint32 MaxPortCountToTry;                                                         // 0x0764 (size: 0x4)
    uint32 ServerDesiredSocketReceiveBufferBytes;                                     // 0x0774 (size: 0x4)
    uint32 ServerDesiredSocketSendBufferBytes;                                        // 0x0778 (size: 0x4)
    uint32 ClientDesiredSocketReceiveBufferBytes;                                     // 0x077C (size: 0x4)
    uint32 ClientDesiredSocketSendBufferBytes;                                        // 0x0780 (size: 0x4)
    double MaxSecondsInReceive;                                                       // 0x0788 (size: 0x8)
    int32 NbPacketsBetweenReceiveTimeTest;                                            // 0x0790 (size: 0x4)
    float ResolutionConnectionTimeout;                                                // 0x0794 (size: 0x4)

}; // Size: 0x7D0

class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FJoinSessionCallbackProxyOnSuccess OnSuccess;                                     // 0x0030 (size: 0x10)
    void EmptyOnlineDelegate();
    FJoinSessionCallbackProxyOnFailure OnFailure;                                     // 0x0040 (size: 0x10)
    void EmptyOnlineDelegate();

    class UJoinSessionCallbackProxy* JoinSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const FBlueprintSessionResult& SearchResult);
}; // Size: 0x180

class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{

    bool WriteLeaderboardInteger(class APlayerController* PlayerController, FName StatName, int32 StatValue);
}; // Size: 0x28

class ULeaderboardFlushCallbackProxy : public UObject
{
    FLeaderboardFlushCallbackProxyOnSuccess OnSuccess;                                // 0x0028 (size: 0x10)
    void OnLeaderboardFlushed(FName SessionName);
    FLeaderboardFlushCallbackProxyOnFailure OnFailure;                                // 0x0038 (size: 0x10)
    void OnLeaderboardFlushed(FName SessionName);

    class ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(class APlayerController* PlayerController, FName SessionName);
}; // Size: 0x68

class ULeaderboardQueryCallbackProxy : public UObject
{
    FLeaderboardQueryCallbackProxyOnSuccess OnSuccess;                                // 0x0028 (size: 0x10)
    void LeaderboardQueryResult(int32 LeaderboardValue);
    FLeaderboardQueryCallbackProxyOnFailure OnFailure;                                // 0x0038 (size: 0x10)
    void LeaderboardQueryResult(int32 LeaderboardValue);

    class ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(class APlayerController* PlayerController, FName StatName);
}; // Size: 0x98

class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{
    FLogoutCallbackProxyOnSuccess OnSuccess;                                          // 0x0030 (size: 0x10)
    void OnlineLogoutResult(class APlayerController* PlayerController);
    FLogoutCallbackProxyOnFailure OnFailure;                                          // 0x0040 (size: 0x10)
    void OnlineLogoutResult(class APlayerController* PlayerController);

    class ULogoutCallbackProxy* Logout(class UObject* WorldContextObject, class APlayerController* PlayerController);
}; // Size: 0x68

class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{
    TMap<class FName, class FName> MappedUniqueNetIdTypes;                            // 0x0028 (size: 0x50)
    TArray<FName> CompatibleUniqueNetIdTypes;                                         // 0x0078 (size: 0x10)
    FName VoiceSubsystemNameOverride;                                                 // 0x0088 (size: 0x8)

}; // Size: 0x188

class UOnlinePIESettings : public UDeveloperSettings
{
    bool bOnlinePIEEnabled;                                                           // 0x0038 (size: 0x1)
    TArray<FPIELoginSettingsInternal> Logins;                                         // 0x0040 (size: 0x10)

}; // Size: 0x50

class UOnlineSessionClient : public UOnlineSession
{
    bool bIsFromInvite;                                                               // 0x01C0 (size: 0x1)
    bool bHandlingDisconnect;                                                         // 0x01C1 (size: 0x1)

}; // Size: 0x1C8

class UPartyBeaconState : public UObject
{
    FName SessionName;                                                                // 0x0028 (size: 0x8)
    int32 NumConsumedReservations;                                                    // 0x0030 (size: 0x4)
    int32 MaxReservations;                                                            // 0x0034 (size: 0x4)
    int32 NumTeams;                                                                   // 0x0038 (size: 0x4)
    int32 NumPlayersPerTeam;                                                          // 0x003C (size: 0x4)
    FName TeamAssignmentMethod;                                                       // 0x0040 (size: 0x8)
    int32 ReservedHostTeamNum;                                                        // 0x0048 (size: 0x4)
    int32 ForceTeamNum;                                                               // 0x004C (size: 0x4)
    bool bRestrictCrossConsole;                                                       // 0x0050 (size: 0x1)
    TArray<FString> PlatformCrossplayRestrictions;                                    // 0x0058 (size: 0x10)
    TArray<FPartyBeaconCrossplayPlatformMapping> PlatformTypeMapping;                 // 0x0068 (size: 0x10)
    bool bEnableRemovalRequests;                                                      // 0x0078 (size: 0x1)
    TArray<FPartyReservation> Reservations;                                           // 0x0080 (size: 0x10)

}; // Size: 0xA0

class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FQuitMatchCallbackProxyOnSuccess OnSuccess;                                       // 0x0030 (size: 0x10)
    void EmptyOnlineDelegate();
    FQuitMatchCallbackProxyOnFailure OnFailure;                                       // 0x0040 (size: 0x10)
    void EmptyOnlineDelegate();

    class UQuitMatchCallbackProxy* QuitMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, TEnumAsByte<EMPMatchOutcome::Type> Outcome, int32 TurnTimeoutInSeconds);
}; // Size: 0x78

class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{
    FShowLoginUICallbackProxyOnSuccess OnSuccess;                                     // 0x0030 (size: 0x10)
    void OnlineShowLoginUIResult(class APlayerController* PlayerController);
    FShowLoginUICallbackProxyOnFailure OnFailure;                                     // 0x0040 (size: 0x10)
    void OnlineShowLoginUIResult(class APlayerController* PlayerController);

    class UShowLoginUICallbackProxy* ShowExternalLoginUI(class UObject* WorldContextObject, class APlayerController* InPlayerController);
}; // Size: 0x60

class USpectatorBeaconState : public UObject
{
    FName SessionName;                                                                // 0x0028 (size: 0x8)
    int32 NumConsumedReservations;                                                    // 0x0030 (size: 0x4)
    int32 MaxReservations;                                                            // 0x0034 (size: 0x4)
    bool bRestrictCrossConsole;                                                       // 0x0038 (size: 0x1)
    TArray<FSpectatorReservation> Reservations;                                       // 0x0040 (size: 0x10)

}; // Size: 0x60

class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class APlayerController* PlayerController, class UObject* Object);
    void GetPlayerDisplayName(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, int32 PlayerIndex, FString& PlayerDisplayName);
    void GetMyPlayerIndex(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, int32& PlayerIndex);
    void GetIsMyTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, bool& bIsMyTurn);
}; // Size: 0x28

class UVoipListenerSynthComponent : public USynthComponent
{

    bool IsIdling();
}; // Size: 0x720

#endif
