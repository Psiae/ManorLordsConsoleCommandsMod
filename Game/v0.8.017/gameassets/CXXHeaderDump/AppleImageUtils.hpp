#ifndef UE4SS_SDK_AppleImageUtils_HPP
#define UE4SS_SDK_AppleImageUtils_HPP

#include "AppleImageUtils_enums.hpp"

struct FAppleImageUtilsImageConversionResult
{
    FString Error;                                                                    // 0x0000 (size: 0x10)
    TArray<uint8> ImageData;                                                          // 0x0010 (size: 0x10)

}; // Size: 0x20

class IAppleImageInterface : public IInterface
{
}; // Size: 0x28

class UAppleImageUtilsBaseAsyncTaskBlueprintProxy : public UObject
{
    FAppleImageUtilsBaseAsyncTaskBlueprintProxyOnSuccess OnSuccess;                   // 0x0030 (size: 0x10)
    void AppleImageConversionDelegate(const FAppleImageUtilsImageConversionResult& ConversionResult);
    FAppleImageUtilsBaseAsyncTaskBlueprintProxyOnFailure OnFailure;                   // 0x0040 (size: 0x10)
    void AppleImageConversionDelegate(const FAppleImageUtilsImageConversionResult& ConversionResult);
    FAppleImageUtilsImageConversionResult ConversionResult;                           // 0x0060 (size: 0x20)

    class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToTIFF(class UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate);
    class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToPNG(class UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate);
    class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToJPEG(class UTexture* SourceImage, int32 Quality, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate);
    class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToHEIF(class UTexture* SourceImage, int32 Quality, bool bWantColor, bool bUseGpu, float Scale, ETextureRotationDirection Rotate);
}; // Size: 0x88

#endif
