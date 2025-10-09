#ifndef UE4SS_SDK_Serialization_HPP
#define UE4SS_SDK_Serialization_HPP

struct FStructSerializerArrayTestStruct
{
    TArray<int32> Int32Array;                                                         // 0x0000 (size: 0x10)
    TArray<uint8> ByteArray;                                                          // 0x0010 (size: 0x10)
    int32 StaticSingleElement;                                                        // 0x0020 (size: 0x4)
    int32 StaticInt32Array;                                                           // 0x0024 (size: 0xC)
    float StaticFloatArray;                                                           // 0x0030 (size: 0xC)
    TArray<FVector> VectorArray;                                                      // 0x0040 (size: 0x10)
    TArray<FStructSerializerBuiltinTestStruct> StructArray;                           // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FStructSerializerBooleanTestStruct
{
    bool BoolFalse;                                                                   // 0x0000 (size: 0x1)
    bool BoolTrue;                                                                    // 0x0001 (size: 0x1)
    uint8 Bitfield0;                                                                  // 0x0002 (size: 0x1)
    uint8 Bitfield1;                                                                  // 0x0002 (size: 0x1)
    uint8 Bitfield2Set;                                                               // 0x0002 (size: 0x1)
    uint8 Bitfield3;                                                                  // 0x0002 (size: 0x1)
    uint8 Bitfield4Set;                                                               // 0x0002 (size: 0x1)
    uint8 Bitfield5Set;                                                               // 0x0002 (size: 0x1)
    uint8 Bitfield6;                                                                  // 0x0002 (size: 0x1)
    uint8 Bitfield7Set;                                                               // 0x0002 (size: 0x1)

}; // Size: 0x3

struct FStructSerializerBuiltinTestStruct
{
    FGuid Guid;                                                                       // 0x0000 (size: 0x10)
    FName Name;                                                                       // 0x0010 (size: 0x8)
    FString string;                                                                   // 0x0018 (size: 0x10)
    FText Text;                                                                       // 0x0028 (size: 0x18)
    FVector Vector;                                                                   // 0x0040 (size: 0xC)
    FVector4 Vector4;                                                                 // 0x0050 (size: 0x10)
    FRotator Rotator;                                                                 // 0x0060 (size: 0xC)
    FQuat Quat;                                                                       // 0x0070 (size: 0x10)
    FColor Color;                                                                     // 0x0080 (size: 0x4)

}; // Size: 0x90

struct FStructSerializerByteArray
{
    int32 Dummy1;                                                                     // 0x0000 (size: 0x4)
    TArray<uint8> ByteArray;                                                          // 0x0008 (size: 0x10)
    int32 Dummy2;                                                                     // 0x0018 (size: 0x4)
    TArray<int8> Int8Array;                                                           // 0x0020 (size: 0x10)
    int32 Dummy3;                                                                     // 0x0030 (size: 0x4)

}; // Size: 0x38

struct FStructSerializerMapTestStruct
{
    TMap<int32, FString> IntToStr;                                                    // 0x0000 (size: 0x50)
    TMap<class FString, class FString> StrToStr;                                      // 0x0050 (size: 0x50)
    TMap<class FString, class FVector> StrToVec;                                      // 0x00A0 (size: 0x50)
    TMap<class FString, class FStructSerializerBuiltinTestStruct> StrToStruct;        // 0x00F0 (size: 0x50)

}; // Size: 0x140

struct FStructSerializerNumericTestStruct
{
    int8 Int8;                                                                        // 0x0000 (size: 0x1)
    int16 Int16;                                                                      // 0x0002 (size: 0x2)
    int32 Int32;                                                                      // 0x0004 (size: 0x4)
    int64 Int64;                                                                      // 0x0008 (size: 0x8)
    uint8 UInt8;                                                                      // 0x0010 (size: 0x1)
    uint16 UInt16;                                                                    // 0x0012 (size: 0x2)
    uint32 UInt32;                                                                    // 0x0014 (size: 0x4)
    uint64 UInt64;                                                                    // 0x0018 (size: 0x8)
    float Float;                                                                      // 0x0020 (size: 0x4)
    double Double;                                                                    // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FStructSerializerObjectTestStruct
{
    UClass* Class;                                                                    // 0x0000 (size: 0x8)
    TSubclassOf<class UMetaData> SubClass;                                            // 0x0008 (size: 0x8)
    TSoftClassPtr<UMetaData> SoftClass;                                               // 0x0010 (size: 0x28)
    class UObject* Object;                                                            // 0x0038 (size: 0x8)
    TWeakObjectPtr<class UMetaData> WeakObject;                                       // 0x0040 (size: 0x8)
    TSoftObjectPtr<UMetaData> SoftObject;                                             // 0x0048 (size: 0x28)
    FSoftClassPath ClassPath;                                                         // 0x0070 (size: 0x18)
    FSoftObjectPath ObjectPath;                                                       // 0x0088 (size: 0x18)

}; // Size: 0xA0

struct FStructSerializerSetTestStruct
{
    TSet<FString> StrSet;                                                             // 0x0000 (size: 0x50)
    TSet<int32> IntSet;                                                               // 0x0050 (size: 0x50)
    TSet<FName> NameSet;                                                              // 0x00A0 (size: 0x50)
    TSet<FStructSerializerBuiltinTestStruct> StructSet;                               // 0x00F0 (size: 0x50)

}; // Size: 0x140

struct FStructSerializerTestStruct
{
    FStructSerializerNumericTestStruct Numerics;                                      // 0x0000 (size: 0x30)
    FStructSerializerBooleanTestStruct Booleans;                                      // 0x0030 (size: 0x3)
    FStructSerializerObjectTestStruct Objects;                                        // 0x0038 (size: 0xA0)
    FStructSerializerBuiltinTestStruct Builtins;                                      // 0x00E0 (size: 0x90)
    FStructSerializerArrayTestStruct Arrays;                                          // 0x0170 (size: 0x60)
    FStructSerializerMapTestStruct Maps;                                              // 0x01D0 (size: 0x140)
    FStructSerializerSetTestStruct Sets;                                              // 0x0310 (size: 0x140)

}; // Size: 0x450

#endif
