#ifndef UE4SS_SDK_MovieSceneCapture_HPP
#define UE4SS_SDK_MovieSceneCapture_HPP

#include "MovieSceneCapture_enums.hpp"

struct FCaptureResolution
{
    int32 ResX;                                                                       // 0x0000 (size: 0x4)
    int32 ResY;                                                                       // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FCapturedPixels
{
}; // Size: 0x10

struct FCapturedPixelsID
{
    TMap<class FName, class FName> Identifiers;                                       // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FCompositionGraphCapturePasses
{
    TArray<FString> Value;                                                            // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FFrameMetrics
{
    float TotalElapsedTime;                                                           // 0x0000 (size: 0x4)
    float FrameDelta;                                                                 // 0x0004 (size: 0x4)
    int32 FrameNumber;                                                                // 0x0008 (size: 0x4)
    int32 NumDroppedFrames;                                                           // 0x000C (size: 0x4)

}; // Size: 0x10

struct FMovieSceneCaptureSettings
{
    FDirectoryPath OutputDirectory;                                                   // 0x0000 (size: 0x10)
    TSubclassOf<class AGameModeBase> GameModeOverride;                                // 0x0010 (size: 0x8)
    FString OutputFormat;                                                             // 0x0018 (size: 0x10)
    bool bOverwriteExisting;                                                          // 0x0028 (size: 0x1)
    bool bUseRelativeFrameNumbers;                                                    // 0x0029 (size: 0x1)
    int32 HandleFrames;                                                               // 0x002C (size: 0x4)
    FString MovieExtension;                                                           // 0x0030 (size: 0x10)
    uint8 ZeroPadFrameNumbers;                                                        // 0x0040 (size: 0x1)
    FFrameRate FrameRate;                                                             // 0x0044 (size: 0x8)
    bool bUseCustomFrameRate;                                                         // 0x004C (size: 0x1)
    FFrameRate CustomFrameRate;                                                       // 0x0050 (size: 0x8)
    FCaptureResolution Resolution;                                                    // 0x0058 (size: 0x8)
    bool bEnableTextureStreaming;                                                     // 0x0060 (size: 0x1)
    bool bCinematicEngineScalability;                                                 // 0x0061 (size: 0x1)
    bool bCinematicMode;                                                              // 0x0062 (size: 0x1)
    bool bAllowMovement;                                                              // 0x0063 (size: 0x1)
    bool bAllowTurning;                                                               // 0x0064 (size: 0x1)
    bool bShowPlayer;                                                                 // 0x0065 (size: 0x1)
    bool bShowHUD;                                                                    // 0x0066 (size: 0x1)
    bool bUsePathTracer;                                                              // 0x0067 (size: 0x1)
    int32 PathTracerSamplePerPixel;                                                   // 0x0068 (size: 0x4)

}; // Size: 0x70

class IMovieSceneCaptureInterface : public IInterface
{
}; // Size: 0x28

class UCompositionGraphCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{
    FCompositionGraphCapturePasses IncludeRenderPasses;                               // 0x0058 (size: 0x10)
    bool bCaptureFramesInHDR;                                                         // 0x0068 (size: 0x1)
    int32 HDRCompressionQuality;                                                      // 0x006C (size: 0x4)
    TEnumAsByte<EHDRCaptureGamut> CaptureGamut;                                       // 0x0070 (size: 0x1)
    FSoftObjectPath PostProcessingMaterial;                                           // 0x0078 (size: 0x20)
    bool bDisableScreenPercentage;                                                    // 0x0098 (size: 0x1)
    class UMaterialInterface* PostProcessingMaterialPtr;                              // 0x00A0 (size: 0x8)

}; // Size: 0xC8

class UCompressedImageSequenceProtocol : public UImageSequenceProtocol
{
    int32 CompressionQuality;                                                         // 0x00D8 (size: 0x4)

}; // Size: 0xE0

class UFrameGrabberProtocol : public UMovieSceneImageCaptureProtocolBase
{
}; // Size: 0x68

class UImageSequenceProtocol : public UFrameGrabberProtocol
{
}; // Size: 0xD8

class UImageSequenceProtocol_BMP : public UImageSequenceProtocol
{
}; // Size: 0xD8

class UImageSequenceProtocol_EXR : public UImageSequenceProtocol
{
    bool bCompressed;                                                                 // 0x00D8 (size: 0x1)
    TEnumAsByte<EHDRCaptureGamut> CaptureGamut;                                       // 0x00D9 (size: 0x1)

}; // Size: 0xE8

class UImageSequenceProtocol_JPG : public UCompressedImageSequenceProtocol
{
}; // Size: 0xE0

class UImageSequenceProtocol_PNG : public UCompressedImageSequenceProtocol
{
}; // Size: 0xE0

class ULevelCapture : public UMovieSceneCapture
{
    bool bAutoStartCapture;                                                           // 0x0238 (size: 0x1)
    FGuid PrerequisiteActorId;                                                        // 0x0244 (size: 0x10)

}; // Size: 0x258

class UMasterAudioSubmixCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{
    FString Filename;                                                                 // 0x0058 (size: 0x10)

}; // Size: 0x90

class UMovieSceneAudioCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{
}; // Size: 0x58

class UMovieSceneCapture : public UObject
{
    FSoftClassPath ImageCaptureProtocolType;                                          // 0x0038 (size: 0x20)
    FSoftClassPath AudioCaptureProtocolType;                                          // 0x0058 (size: 0x20)
    class UMovieSceneImageCaptureProtocolBase* ImageCaptureProtocol;                  // 0x0078 (size: 0x8)
    class UMovieSceneAudioCaptureProtocolBase* AudioCaptureProtocol;                  // 0x0080 (size: 0x8)
    FMovieSceneCaptureSettings Settings;                                              // 0x0088 (size: 0x70)
    bool bUseSeparateProcess;                                                         // 0x00F8 (size: 0x1)
    bool bCloseEditorWhenCaptureStarts;                                               // 0x00F9 (size: 0x1)
    FString AdditionalCommandLineArguments;                                           // 0x0100 (size: 0x10)
    FString InheritedCommandLineArguments;                                            // 0x0110 (size: 0x10)

    void SetImageCaptureProtocolType(TSubclassOf<class UMovieSceneCaptureProtocolBase> ProtocolType);
    void SetAudioCaptureProtocolType(TSubclassOf<class UMovieSceneCaptureProtocolBase> ProtocolType);
    class UMovieSceneCaptureProtocolBase* GetImageCaptureProtocol();
    class UMovieSceneCaptureProtocolBase* GetAudioCaptureProtocol();
}; // Size: 0x238

class UMovieSceneCaptureEnvironment : public UObject
{

    bool IsCaptureInProgress();
    int32 GetCaptureFrameNumber();
    float GetCaptureElapsedTime();
    class UMovieSceneImageCaptureProtocolBase* FindImageCaptureProtocol();
    class UMovieSceneAudioCaptureProtocolBase* FindAudioCaptureProtocol();
}; // Size: 0x28

class UMovieSceneCaptureProtocolBase : public UObject
{
    EMovieSceneCaptureProtocolState State;                                            // 0x0050 (size: 0x1)

    bool IsCapturing();
    EMovieSceneCaptureProtocolState GetState();
}; // Size: 0x58

class UMovieSceneImageCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{
}; // Size: 0x58

class UNullAudioCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{
}; // Size: 0x58

class UUserDefinedCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{
    class UWorld* World;                                                              // 0x0058 (size: 0x8)

    void StopCapturingFinalPixels();
    void StartCapturingFinalPixels(const FCapturedPixelsID& StreamID);
    void ResolveBuffer(class UTexture* Buffer, const FCapturedPixelsID& BufferID);
    void OnWarmUp();
    void OnTick();
    void OnStartCapture();
    bool OnSetup();
    void OnPreTick();
    void OnPixelsReceived(const FCapturedPixels& Pixels, const FCapturedPixelsID& ID, FFrameMetrics FrameMetrics);
    void OnPauseCapture();
    void OnFinalize();
    void OnCaptureFrame();
    bool OnCanFinalize();
    void OnBeginFinalize();
    FFrameMetrics GetCurrentFrameMetrics();
    FString GenerateFilename(const FFrameMetrics& InFrameMetrics);
}; // Size: 0xD8

class UUserDefinedImageCaptureProtocol : public UUserDefinedCaptureProtocol
{
    EDesiredImageFormat Format;                                                       // 0x00D8 (size: 0x1)
    bool bEnableCompression;                                                          // 0x00D9 (size: 0x1)
    int32 CompressionQuality;                                                         // 0x00DC (size: 0x4)

    void WriteImageToDisk(const FCapturedPixels& PixelData, const FCapturedPixelsID& StreamID, const FFrameMetrics& FrameMetrics, bool bCopyImageData);
    FString GenerateFilenameForCurrentFrame();
    FString GenerateFilenameForBuffer(class UTexture* Buffer, const FCapturedPixelsID& StreamID);
}; // Size: 0xE0

class UVideoCaptureProtocol : public UFrameGrabberProtocol
{
    bool bUseCompression;                                                             // 0x0068 (size: 0x1)
    float CompressionQuality;                                                         // 0x006C (size: 0x4)

}; // Size: 0x80

#endif
