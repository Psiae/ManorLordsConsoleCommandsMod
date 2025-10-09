#ifndef UE4SS_SDK_MagicLeapSecureStorage_HPP
#define UE4SS_SDK_MagicLeapSecureStorage_HPP

class UMagicLeapSecureStorage : public UBlueprintFunctionLibrary
{

    bool PutSecureVector(FString Key, const FVector& DataToStore);
    bool PutSecureTransform(FString Key, const FTransform& DataToStore);
    bool PutSecureString(FString Key, FString DataToStore);
    bool PutSecureSaveGame(FString Key, class USaveGame* ObjectToStore);
    bool PutSecureRotator(FString Key, const FRotator& DataToStore);
    bool PutSecureInt64(FString Key, int64 DataToStore);
    bool PutSecureInt(FString Key, int32 DataToStore);
    bool PutSecureFloat(FString Key, float DataToStore);
    bool PutSecureByte(FString Key, uint8 DataToStore);
    bool PutSecureBool(FString Key, bool DataToStore);
    bool PutSecureArray(FString Key, const TArray<int32>& DataToStore);
    bool GetSecureVector(FString Key, FVector& DataToRetrieve);
    bool GetSecureTransform(FString Key, FTransform& DataToRetrieve);
    bool GetSecureString(FString Key, FString& DataToRetrieve);
    bool GetSecureSaveGame(FString Key, class USaveGame*& ObjectToRetrieve);
    bool GetSecureRotator(FString Key, FRotator& DataToRetrieve);
    bool GetSecureInt64(FString Key, int64& DataToRetrieve);
    bool GetSecureInt(FString Key, int32& DataToRetrieve);
    bool GetSecureFloat(FString Key, float& DataToRetrieve);
    bool GetSecureByte(FString Key, uint8& DataToRetrieve);
    bool GetSecureBool(FString Key, bool& DataToRetrieve);
    bool GetSecureArray(FString Key, TArray<int32>& DataToRetrieve);
    bool DeleteSecureData(FString Key);
}; // Size: 0x28

#endif
