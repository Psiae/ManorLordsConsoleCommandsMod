#ifndef UE4SS_SDK_PropertyPath_HPP
#define UE4SS_SDK_PropertyPath_HPP

#include "PropertyPath_enums.hpp"

struct FCachedPropertyPath
{
    TArray<FPropertyPathSegment> Segments;                                            // 0x0000 (size: 0x10)
    class UFunction* CachedFunction;                                                  // 0x0018 (size: 0x8)

}; // Size: 0x38

struct FPropertyPathSegment
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    int32 ArrayIndex;                                                                 // 0x0008 (size: 0x4)
    class UStruct* Struct;                                                            // 0x0010 (size: 0x8)

}; // Size: 0x20

struct FPropertyPathTestBaseStruct
{
}; // Size: 0x8

struct FPropertyPathTestBed
{
    class UPropertyPathTestObject* Object;                                            // 0x0000 (size: 0x8)
    class UPropertyPathTestObject* ModifiedObject;                                    // 0x0008 (size: 0x8)
    FPropertyPathTestStruct ModifiedStruct;                                           // 0x0010 (size: 0x60)
    FPropertyPathTestStruct DefaultStruct;                                            // 0x0070 (size: 0x60)

}; // Size: 0xD0

struct FPropertyPathTestInnerStruct : public FPropertyPathTestBaseStruct
{
    float float;                                                                      // 0x0008 (size: 0x4)
    bool bool;                                                                        // 0x000C (size: 0x1)
    TEnumAsByte<EPropertyPathTestEnum> EnumOne;                                       // 0x000D (size: 0x1)
    TEnumAsByte<EPropertyPathTestEnum> EnumTwo;                                       // 0x000E (size: 0x1)
    TEnumAsByte<EPropertyPathTestEnum> EnumThree;                                     // 0x000F (size: 0x1)
    TEnumAsByte<EPropertyPathTestEnum> EnumFour;                                      // 0x0010 (size: 0x1)
    int32 Integer;                                                                    // 0x0014 (size: 0x4)
    FString String;                                                                   // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FPropertyPathTestStruct : public FPropertyPathTestBaseStruct
{
    bool bool;                                                                        // 0x0008 (size: 0x1)
    int32 Integer;                                                                    // 0x000C (size: 0x4)
    TEnumAsByte<EPropertyPathTestEnum> EnumOne;                                       // 0x0010 (size: 0x1)
    TEnumAsByte<EPropertyPathTestEnum> EnumTwo;                                       // 0x0011 (size: 0x1)
    TEnumAsByte<EPropertyPathTestEnum> EnumThree;                                     // 0x0012 (size: 0x1)
    TEnumAsByte<EPropertyPathTestEnum> EnumFour;                                      // 0x0013 (size: 0x1)
    FString String;                                                                   // 0x0018 (size: 0x10)
    float float;                                                                      // 0x0028 (size: 0x4)
    FPropertyPathTestInnerStruct InnerStruct;                                         // 0x0030 (size: 0x28)
    class UPropertyPathTestObject* InnerObject;                                       // 0x0058 (size: 0x8)

}; // Size: 0x60

class UPropertyPathTestObject : public UObject
{
    bool bool;                                                                        // 0x0028 (size: 0x1)
    TEnumAsByte<EPropertyPathTestEnum> EnumOne;                                       // 0x0029 (size: 0x1)
    TEnumAsByte<EPropertyPathTestEnum> EnumTwo;                                       // 0x002A (size: 0x1)
    TEnumAsByte<EPropertyPathTestEnum> EnumThree;                                     // 0x002B (size: 0x1)
    TEnumAsByte<EPropertyPathTestEnum> EnumFour;                                      // 0x002C (size: 0x1)
    int32 Integer;                                                                    // 0x0030 (size: 0x4)
    FString String;                                                                   // 0x0038 (size: 0x10)
    float float;                                                                      // 0x0048 (size: 0x4)
    FPropertyPathTestStruct Struct;                                                   // 0x0050 (size: 0x60)
    FPropertyPathTestStruct StructRef;                                                // 0x00B0 (size: 0x60)
    FPropertyPathTestStruct StructConstRef;                                           // 0x0110 (size: 0x60)
    class UPropertyPathTestObject* InnerObject;                                       // 0x0170 (size: 0x8)

    void SetStructRef(FPropertyPathTestStruct InStruct);
    void SetStructConstRef(FPropertyPathTestStruct InStruct);
    void SetStruct(FPropertyPathTestStruct InStruct);
    void SetFloat(float InFloat);
    FPropertyPathTestStruct GetStructRef();
    FPropertyPathTestStruct GetStructConstRef();
    FPropertyPathTestStruct GetStruct();
    float GetFloat();
}; // Size: 0x180

#endif
