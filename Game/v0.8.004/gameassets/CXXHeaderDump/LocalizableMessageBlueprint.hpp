#ifndef UE4SS_SDK_LocalizableMessageBlueprint_HPP
#define UE4SS_SDK_LocalizableMessageBlueprint_HPP

class ULocalizableMessageLibrary : public UBlueprintFunctionLibrary
{

    void Reset_LocalizableMessage(FLocalizableMessage& Message);
    bool IsEmpty_LocalizableMessage(const FLocalizableMessage& Message);
    FText Conv_LocalizableMessageToText(class UObject* WorldContextObject, const FLocalizableMessage& Message);
}; // Size: 0x28

#endif
