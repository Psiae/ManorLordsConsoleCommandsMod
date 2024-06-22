#ifndef UE4SS_SDK_MagicLeapIdentity_HPP
#define UE4SS_SDK_MagicLeapIdentity_HPP

#include "MagicLeapIdentity_enums.hpp"

struct FMagicLeapIdentityAttribute
{
    EMagicLeapIdentityKey Attribute;                                                  // 0x0000 (size: 0x1)
    FString Value;                                                                    // 0x0008 (size: 0x10)

}; // Size: 0x18

class UMagicLeapIdentity : public UObject
{

    void RequestIdentityAttributeValueDelegate__DelegateSignature(EMagicLeapIdentityError ResultCode, const TArray<FMagicLeapIdentityAttribute>& AttributeValue);
    EMagicLeapIdentityError RequestAttributeValueAsync(const TArray<EMagicLeapIdentityKey>& RequestedAttributeList, const FRequestAttributeValueAsyncResultDelegate& ResultDelegate);
    EMagicLeapIdentityError RequestAttributeValue(const TArray<EMagicLeapIdentityKey>& RequestedAttributeList, TArray<FMagicLeapIdentityAttribute>& RequestedAttributeValues);
    void ModifyIdentityAttributeValueDelegate__DelegateSignature(EMagicLeapIdentityError ResultCode, const TArray<EMagicLeapIdentityKey>& AttributesUpdatedSuccessfully);
    void GetAllAvailableAttributesAsync(const FGetAllAvailableAttributesAsyncResultDelegate& ResultDelegate);
    EMagicLeapIdentityError GetAllAvailableAttributes(TArray<EMagicLeapIdentityKey>& AvailableAttributes);
    void AvailableIdentityAttributesDelegate__DelegateSignature(EMagicLeapIdentityError ResultCode, const TArray<EMagicLeapIdentityKey>& AvailableAttributes);
}; // Size: 0x38

#endif
