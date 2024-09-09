#ifndef UE4SS_SDK_Serialization_HPP
#define UE4SS_SDK_Serialization_HPP

struct FOrientedBoxFloat
{
    FVector3f Center;                                                                 // 0x0000 (size: 0xC)
    FVector3f AxisX;                                                                  // 0x000C (size: 0xC)
    FVector3f AxisY;                                                                  // 0x0018 (size: 0xC)
    FVector3f AxisZ;                                                                  // 0x0024 (size: 0xC)
    float ExtentX;                                                                    // 0x0030 (size: 0x4)
    float ExtentY;                                                                    // 0x0034 (size: 0x4)
    float ExtentZ;                                                                    // 0x0038 (size: 0x4)

}; // Size: 0x3C

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
    FString String;                                                                   // 0x0018 (size: 0x10)
    FText Text;                                                                       // 0x0028 (size: 0x10)
    FVector Vector;                                                                   // 0x0038 (size: 0x18)
    FVector4 Vector4;                                                                 // 0x0050 (size: 0x20)
    FRotator Rotator;                                                                 // 0x0070 (size: 0x18)
    FQuat Quat;                                                                       // 0x0090 (size: 0x20)
    FColor Color;                                                                     // 0x00B0 (size: 0x4)

}; // Size: 0xC0

struct FStructSerializerByteArray
{
    int32 Dummy1;                                                                     // 0x0000 (size: 0x4)
    TArray<uint8> ByteArray;                                                          // 0x0008 (size: 0x10)
    int32 Dummy2;                                                                     // 0x0018 (size: 0x4)
    TArray<int8> Int8Array;                                                           // 0x0020 (size: 0x10)
    int32 Dummy3;                                                                     // 0x0030 (size: 0x4)

}; // Size: 0x38

struct FStructSerializerLWCTypesTest
{
    FVector Vector;                                                                   // 0x0000 (size: 0x18)
    FVector2D Vector2D;                                                               // 0x0018 (size: 0x10)
    FVector4 Vector4;                                                                 // 0x0030 (size: 0x20)
    FMatrix Matrix;                                                                   // 0x0050 (size: 0x80)
    FPlane Plane;                                                                     // 0x00D0 (size: 0x20)
    FQuat Quat;                                                                       // 0x00F0 (size: 0x20)
    FRotator Rotator;                                                                 // 0x0110 (size: 0x18)
    FTransform Transform;                                                             // 0x0130 (size: 0x60)
    FBox Box;                                                                         // 0x0190 (size: 0x38)
    FBox2D Box2D;                                                                     // 0x01C8 (size: 0x28)
    FBoxSphereBounds BoxSphereBounds;                                                 // 0x01F0 (size: 0x38)
    FOrientedBox OrientedBox;                                                         // 0x0228 (size: 0x78)
    float float;                                                                      // 0x02A0 (size: 0x4)
    double Double;                                                                    // 0x02A8 (size: 0x8)
    TArray<FVector> VectorArray;                                                      // 0x02B0 (size: 0x10)
    TMap<class FString, class FVector> StrToVec;                                      // 0x02C0 (size: 0x50)
    TSet<FVector> VectorSet;                                                          // 0x0310 (size: 0x50)

}; // Size: 0x360

struct FStructSerializerMapTestStruct
{
    TMap<int32, FString> IntToStr;                                                    // 0x0000 (size: 0x50)
    TMap<class FString, class FString> StrToStr;                                      // 0x0050 (size: 0x50)
    TMap<class FString, class FVector> StrToVec;                                      // 0x00A0 (size: 0x50)
    TMap<class FString, class FStructSerializerBuiltinTestStruct> StrToStruct;        // 0x00F0 (size: 0x50)

}; // Size: 0x140

struct FStructSerializerNonLWCTypesTest
{
    FVector3f Vector;                                                                 // 0x0000 (size: 0xC)
    FVector2f Vector2D;                                                               // 0x000C (size: 0x8)
    FVector4f Vector4;                                                                // 0x0020 (size: 0x10)
    FMatrix44f Matrix;                                                                // 0x0030 (size: 0x40)
    FPlane4f Plane;                                                                   // 0x0070 (size: 0x10)
    FQuat4f Quat;                                                                     // 0x0080 (size: 0x10)
    FRotator3f Rotator;                                                               // 0x0090 (size: 0xC)
    FTransform3f Transform;                                                           // 0x00A0 (size: 0x30)
    FBox3f Box;                                                                       // 0x00D0 (size: 0x1C)
    FBox2f Box2D;                                                                     // 0x00EC (size: 0x14)
    FBoxSphereBounds3f BoxSphereBounds;                                               // 0x0100 (size: 0x1C)
    FOrientedBoxFloat OrientedBox;                                                    // 0x011C (size: 0x3C)
    float float;                                                                      // 0x0158 (size: 0x4)
    double Double;                                                                    // 0x0160 (size: 0x8)
    TArray<FVector3f> VectorArray;                                                    // 0x0168 (size: 0x10)
    TMap<class FString, class FVector3f> StrToVec;                                    // 0x0178 (size: 0x50)
    TSet<FVector3f> VectorSet;                                                        // 0x01C8 (size: 0x50)

}; // Size: 0x220

struct FStructSerializerNumericTestStruct
{
    int8 Int8;                                                                        // 0x0000 (size: 0x1)
    int16 Int16;                                                                      // 0x0002 (size: 0x2)
    int32 int32;                                                                      // 0x0004 (size: 0x4)
    int64 Int64;                                                                      // 0x0008 (size: 0x8)
    uint8 uint8;                                                                      // 0x0010 (size: 0x1)
    uint16 UInt16;                                                                    // 0x0012 (size: 0x2)
    uint32 uint32;                                                                    // 0x0014 (size: 0x4)
    uint64 UInt64;                                                                    // 0x0018 (size: 0x8)
    float float;                                                                      // 0x0020 (size: 0x4)
    double Double;                                                                    // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FStructSerializerObjectTestStruct
{
    UClass* RawClass;                                                                 // 0x0000 (size: 0x8)
    UClass* WrappedClass;                                                             // 0x0008 (size: 0x8)
    TSubclassOf<class UMetaData> SubClass;                                            // 0x0010 (size: 0x8)
    TSoftClassPtr<UMetaData> SoftClass;                                               // 0x0018 (size: 0x28)
    class UObject* RawObject;                                                         // 0x0040 (size: 0x8)
    class UObject* WrappedObject;                                                     // 0x0048 (size: 0x8)
    TWeakObjectPtr<class UMetaData> WeakObject;                                       // 0x0050 (size: 0x8)
    TSoftObjectPtr<UMetaData> SoftObject;                                             // 0x0058 (size: 0x28)
    FSoftClassPath ClassPath;                                                         // 0x0080 (size: 0x20)
    FSoftObjectPath ObjectPath;                                                       // 0x00A0 (size: 0x20)

}; // Size: 0xC0

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
    FStructSerializerObjectTestStruct Objects;                                        // 0x0038 (size: 0xC0)
    FStructSerializerBuiltinTestStruct Builtins;                                      // 0x0100 (size: 0xC0)
    FStructSerializerArrayTestStruct Arrays;                                          // 0x01C0 (size: 0x60)
    FStructSerializerMapTestStruct Maps;                                              // 0x0220 (size: 0x140)
    FStructSerializerSetTestStruct Sets;                                              // 0x0360 (size: 0x140)
    FStructSerializerLWCTypesTest LWCTypes;                                           // 0x04A0 (size: 0x360)

}; // Size: 0x800

#endif
