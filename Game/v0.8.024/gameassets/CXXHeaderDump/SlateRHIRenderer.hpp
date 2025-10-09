#ifndef UE4SS_SDK_SlateRHIRenderer_HPP
#define UE4SS_SDK_SlateRHIRenderer_HPP

struct FSlatePostSettings
{
    uint8 bEnabled;                                                                   // 0x0000 (size: 0x1)
    TSubclassOf<class USlateRHIPostBufferProcessor> PostProcessorClass;               // 0x0008 (size: 0x8)
    FString PathToSlatePostRT;                                                        // 0x0010 (size: 0x10)
    class UTextureRenderTarget2D* CachedSlatePostRT;                                  // 0x0020 (size: 0x8)

}; // Size: 0x30

class USlateFXSubsystem : public UEngineSubsystem
{
    TMap<class ESlatePostRT, class USlateRHIPostBufferProcessor*> SlatePostBufferProcessors; // 0x0030 (size: 0x50)

    class USlateRHIPostBufferProcessor* GetSlatePostProcessor(ESlatePostRT InPostBufferBit);
}; // Size: 0xD0

class USlatePostBufferBlur : public USlateRHIPostBufferProcessor
{
    float GaussianBlurStrength;                                                       // 0x0028 (size: 0x4)

}; // Size: 0x40

class USlateRHIPostBufferProcessor : public UObject
{
}; // Size: 0x28

class USlateRHIRendererSettings : public UDeveloperSettings
{
    TMap<class ESlatePostRT, class FSlatePostSettings> SlatePostSettings;             // 0x0038 (size: 0x50)

    FSlatePostSettings GetSlatePostSetting(ESlatePostRT InPostBufferBit);
    FSlatePostSettings GetMutableSlatePostSetting(ESlatePostRT InPostBufferBit);
}; // Size: 0x88

#endif
