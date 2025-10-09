#ifndef UE4SS_SDK_BuildPatchServices_HPP
#define UE4SS_SDK_BuildPatchServices_HPP

struct FChunkInfoData
{
    FGuid Guid;                                                                       // 0x0000 (size: 0x10)
    uint64 Hash;                                                                      // 0x0010 (size: 0x8)
    FSHAHashData ShaHash;                                                             // 0x0018 (size: 0x14)
    int64 FileSize;                                                                   // 0x0030 (size: 0x8)
    uint8 GroupNumber;                                                                // 0x0038 (size: 0x1)

}; // Size: 0x40

struct FChunkPartData
{
    FGuid Guid;                                                                       // 0x0000 (size: 0x10)
    uint32 Offset;                                                                    // 0x0010 (size: 0x4)
    uint32 Size;                                                                      // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FCustomFieldData
{
    FString Key;                                                                      // 0x0000 (size: 0x10)
    FString Value;                                                                    // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FFileManifestData
{
    FString Filename;                                                                 // 0x0000 (size: 0x10)
    FSHAHashData FileHash;                                                            // 0x0010 (size: 0x14)
    TArray<FChunkPartData> FileChunkParts;                                            // 0x0028 (size: 0x10)
    TArray<FString> InstallTags;                                                      // 0x0038 (size: 0x10)
    bool bIsUnixExecutable;                                                           // 0x0048 (size: 0x1)
    FString SymlinkTarget;                                                            // 0x0050 (size: 0x10)
    bool bIsReadOnly;                                                                 // 0x0060 (size: 0x1)
    bool bIsCompressed;                                                               // 0x0061 (size: 0x1)

}; // Size: 0x68

struct FSHAHashData
{
    uint8 Hash;                                                                       // 0x0000 (size: 0x14)

}; // Size: 0x14

class UBuildPatchManifest : public UObject
{
    uint8 ManifestFileVersion;                                                        // 0x0028 (size: 0x1)
    bool bIsFileData;                                                                 // 0x0029 (size: 0x1)
    uint32 AppID;                                                                     // 0x002C (size: 0x4)
    FString AppName;                                                                  // 0x0030 (size: 0x10)
    FString BuildVersion;                                                             // 0x0040 (size: 0x10)
    FString LaunchExe;                                                                // 0x0050 (size: 0x10)
    FString LaunchCommand;                                                            // 0x0060 (size: 0x10)
    TSet<FString> PrereqIds;                                                          // 0x0070 (size: 0x50)
    FString PrereqName;                                                               // 0x00C0 (size: 0x10)
    FString PrereqPath;                                                               // 0x00D0 (size: 0x10)
    FString PrereqArgs;                                                               // 0x00E0 (size: 0x10)
    TArray<FFileManifestData> FileManifestList;                                       // 0x00F0 (size: 0x10)
    TArray<FChunkInfoData> ChunkList;                                                 // 0x0100 (size: 0x10)
    TArray<FCustomFieldData> CustomFields;                                            // 0x0110 (size: 0x10)

}; // Size: 0x120

#endif
