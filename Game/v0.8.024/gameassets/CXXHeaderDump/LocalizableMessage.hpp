#ifndef UE4SS_SDK_LocalizableMessage_HPP
#define UE4SS_SDK_LocalizableMessage_HPP

struct FLocalizableMessage
{
    FString Key;                                                                      // 0x0000 (size: 0x10)
    FString DefaultText;                                                              // 0x0010 (size: 0x10)
    TArray<FLocalizableMessageParameterEntry> Substitutions;                          // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FLocalizableMessageParameterEntry
{
    FString Key;                                                                      // 0x0000 (size: 0x10)
    FInstancedStruct Value;                                                           // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FLocalizableMessageParameterFloat
{
    double Value;                                                                     // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FLocalizableMessageParameterInt
{
    int64 Value;                                                                      // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FLocalizableMessageParameterMessage
{
    FLocalizableMessage Value;                                                        // 0x0000 (size: 0x30)

}; // Size: 0x30

struct FLocalizableMessageParameterString
{
    FString Value;                                                                    // 0x0000 (size: 0x10)

}; // Size: 0x10

#endif
