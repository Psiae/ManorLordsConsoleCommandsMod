#ifndef UE4SS_SDK_OnlineSubsystemGOG_HPP
#define UE4SS_SDK_OnlineSubsystemGOG_HPP

class UGOGLoginCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FGOGLoginCallbackProxyOnSuccess OnSuccess;                                        // 0x0030 (size: 0x10)
    void OnlineLogoutResultDelegate(class APlayerController* PlayerController);
    FGOGLoginCallbackProxyOnFailure OnFailure;                                        // 0x0040 (size: 0x10)
    void OnlineLogoutResultDelegate(class APlayerController* PlayerController);

    class UGOGLoginCallbackProxy* Login(class UObject* WorldContextObject, class APlayerController* PlayerController, FString AuthType, FString UserID, FString UserToken);
}; // Size: 0xA8

class UNetConnectionGOG : public UNetConnection
{
}; // Size: 0x1BD0

class UNetDriverGOG : public UNetDriver
{
}; // Size: 0x1778

#endif
