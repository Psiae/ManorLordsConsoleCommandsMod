#ifndef UE4SS_SDK_ImgMedia_HPP
#define UE4SS_SDK_ImgMedia_HPP

struct FImgMediaSourceCustomizationSequenceProxy
{
}; // Size: 0x1

class UImgMediaSource : public UBaseMediaSource
{
    bool IsPathRelativeToProjectRoot;                                                 // 0x0088 (size: 0x1)
    FFrameRate FrameRateOverride;                                                     // 0x008C (size: 0x8)
    FString ProxyOverride;                                                            // 0x0098 (size: 0x10)
    bool bFillGapsInSequence;                                                         // 0x00A8 (size: 0x1)
    FDirectoryPath SequencePath;                                                      // 0x00B0 (size: 0x10)

    void SetTokenizedSequencePath(FString Path);
    void SetSequencePath(FString Path);
    void RemoveTargetObject(class AActor* InActor);
    FString GetSequencePath();
    void GetProxies(TArray<FString>& OutProxies);
    void AddTargetObject(class AActor* InActor);
}; // Size: 0xD0

#endif
