#ifndef UE4SS_SDK_ACLPlugin_HPP
#define UE4SS_SDK_ACLPlugin_HPP

#include "ACLPlugin_enums.hpp"

class UAnimBoneCompressionCodec_ACL : public UAnimBoneCompressionCodec_ACLBase
{
}; // Size: 0x38

class UAnimBoneCompressionCodec_ACLBase : public UAnimBoneCompressionCodec
{
}; // Size: 0x38

class UAnimBoneCompressionCodec_ACLCustom : public UAnimBoneCompressionCodec_ACLBase
{
}; // Size: 0x38

class UAnimBoneCompressionCodec_ACLDatabase : public UAnimBoneCompressionCodec_ACLBase
{
    class UAnimationCompressionLibraryDatabase* DatabaseAsset;                        // 0x0038 (size: 0x8)

}; // Size: 0x40

class UAnimBoneCompressionCodec_ACLSafe : public UAnimBoneCompressionCodec_ACLBase
{
}; // Size: 0x38

class UAnimCurveCompressionCodec_ACL : public UAnimCurveCompressionCodec
{
}; // Size: 0x28

class UAnimationCompressionLibraryDatabase : public UObject
{
    TArray<uint8> CookedCompressedBytes;                                              // 0x0028 (size: 0x10)
    TArray<uint64> CookedAnimSequenceMappings;                                        // 0x0038 (size: 0x10)
    uint32 MaxStreamRequestSizeKB;                                                    // 0x0120 (size: 0x4)

    void SetVisualFidelity(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class UAnimationCompressionLibraryDatabase* DatabaseAsset, ACLVisualFidelityChangeResult& Result, ACLVisualFidelity VisualFidelity);
    ACLVisualFidelity GetVisualFidelity(class UAnimationCompressionLibraryDatabase* DatabaseAsset);
}; // Size: 0x128

#endif
