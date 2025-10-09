#ifndef UE4SS_SDK_DataflowCore_HPP
#define UE4SS_SDK_DataflowCore_HPP

struct FDataflowConnection
{
}; // Size: 0x40

struct FDataflowFaceSelection : public FDataflowSelection
{
}; // Size: 0x20

struct FDataflowInput : public FDataflowConnection
{
}; // Size: 0x48

struct FDataflowNode
{
    bool bActive;                                                                     // 0x00C8 (size: 0x1)

}; // Size: 0xE8

struct FDataflowOutput : public FDataflowConnection
{
}; // Size: 0x68

struct FDataflowOverrideNode : public FDataflowNode
{
    FName Key;                                                                        // 0x00E8 (size: 0x8)
    FString Default;                                                                  // 0x00F0 (size: 0x10)
    bool IsOverriden;                                                                 // 0x0100 (size: 0x1)

}; // Size: 0x108

struct FDataflowSelection
{
}; // Size: 0x20

struct FDataflowTerminalNode : public FDataflowNode
{
}; // Size: 0xE8

struct FDataflowTransformSelection : public FDataflowSelection
{
}; // Size: 0x20

struct FDataflowVertexSelection : public FDataflowSelection
{
}; // Size: 0x20

struct FNodeColors
{
    FLinearColor NodeTitleColor;                                                      // 0x0000 (size: 0x10)
    FLinearColor NodeBodyTintColor;                                                   // 0x0010 (size: 0x10)

}; // Size: 0x20

class UDataflowSettings : public UDeveloperSettings
{
    FLinearColor ArrayPinTypeColor;                                                   // 0x0038 (size: 0x10)
    FLinearColor ManagedArrayCollectionPinTypeColor;                                  // 0x0048 (size: 0x10)
    FLinearColor BoxPinTypeColor;                                                     // 0x0058 (size: 0x10)
    FLinearColor SpherePinTypeColor;                                                  // 0x0068 (size: 0x10)
    TMap<class FName, class FNodeColors> NodeColorsMap;                               // 0x0078 (size: 0x50)

}; // Size: 0xE0

#endif
