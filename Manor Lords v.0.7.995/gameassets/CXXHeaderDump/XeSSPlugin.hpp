#ifndef UE4SS_SDK_XeSSPlugin_HPP
#define UE4SS_SDK_XeSSPlugin_HPP

class UXeSSSettings : public UDeveloperSettings
{
    bool bEnableXeSSInEditorViewports;                                                // 0x0038 (size: 0x1)
    FString DebugDataDumpPath;                                                        // 0x0040 (size: 0x10)

}; // Size: 0x50

#endif
