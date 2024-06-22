#ifndef UE4SS_SDK_AndroidPermission_HPP
#define UE4SS_SDK_AndroidPermission_HPP

class UAndroidPermissionCallbackProxy : public UObject
{
    FAndroidPermissionCallbackProxyOnPermissionsGrantedDynamicDelegate OnPermissionsGrantedDynamicDelegate; // 0x0028 (size: 0x10)
    void AndroidPermissionDynamicDelegate(const TArray<FString>& Permissions, const TArray<bool>& GrantResults);

}; // Size: 0x48

class UAndroidPermissionFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool CheckPermission(FString permission);
    class UAndroidPermissionCallbackProxy* AcquirePermissions(const TArray<FString>& Permissions);
}; // Size: 0x28

#endif
