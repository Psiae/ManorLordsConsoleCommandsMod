#ifndef UE4SS_SDK_UObjectPlugin_HPP
#define UE4SS_SDK_UObjectPlugin_HPP

struct FMyPluginStruct
{
    FString TestString;                                                               // 0x0000 (size: 0x10)

}; // Size: 0x10

class UMyPluginObject : public UObject
{
    FMyPluginStruct MyStruct;                                                         // 0x0028 (size: 0x10)

}; // Size: 0x38

#endif
