#ifndef UE4SS_SDK_StructUtils_HPP
#define UE4SS_SDK_StructUtils_HPP

#include "StructUtils_enums.hpp"

struct FConstSharedStruct
{
}; // Size: 0x10

struct FDefault__PropertyBag
{
}; // Size: 0x0

struct FInstancedPropertyBag
{
    FInstancedStruct Value;                                                           // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FInstancedStruct
{
}; // Size: 0x10

struct FInstancedStructContainer
{
}; // Size: 0x10

struct FPropertyBagContainerTypes
{
}; // Size: 0x3

struct FPropertyBagMissingStruct
{
}; // Size: 0x1

struct FPropertyBagPropertyDesc
{
    class UObject* ValueTypeObject;                                                   // 0x0000 (size: 0x8)
    FGuid ID;                                                                         // 0x0008 (size: 0x10)
    FName Name;                                                                       // 0x0018 (size: 0x8)
    EPropertyBagPropertyType ValueType;                                               // 0x0020 (size: 0x1)
    FPropertyBagContainerTypes ContainerTypes;                                        // 0x0021 (size: 0x3)

}; // Size: 0x30

struct FPropertyBagPropertyDescMetaData
{
    FName Key;                                                                        // 0x0000 (size: 0x8)
    FString Value;                                                                    // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FSharedStruct
{
}; // Size: 0x10

class UPropertyBag : public UScriptStruct
{
    TArray<FPropertyBagPropertyDesc> PropertyDescs;                                   // 0x00C0 (size: 0x10)

}; // Size: 0xD8

class UPropertyBagMissingObject : public UObject
{
}; // Size: 0x28

#endif
