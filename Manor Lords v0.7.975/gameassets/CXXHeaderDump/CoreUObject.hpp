#ifndef UE4SS_SDK_CoreUObject_HPP
#define UE4SS_SDK_CoreUObject_HPP

#include "CoreUObject_enums.hpp"

struct FARFilter
{
    TArray<FName> PackageNames;                                                       // 0x0000 (size: 0x10)
    TArray<FName> PackagePaths;                                                       // 0x0010 (size: 0x10)
    TArray<FName> ObjectPaths;                                                        // 0x0020 (size: 0x10)
    TArray<FName> ClassNames;                                                         // 0x0030 (size: 0x10)
    TSet<FName> RecursiveClassesExclusionSet;                                         // 0x0090 (size: 0x50)
    bool bRecursivePaths;                                                             // 0x00E0 (size: 0x1)
    bool bRecursiveClasses;                                                           // 0x00E1 (size: 0x1)
    bool bIncludeOnlyOnDiskAssets;                                                    // 0x00E2 (size: 0x1)

}; // Size: 0xF0

struct FAssetBundleData
{
    TArray<FAssetBundleEntry> Bundles;                                                // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FAssetBundleEntry
{
    FName BundleName;                                                                 // 0x0000 (size: 0x8)
    TArray<FSoftObjectPath> BundleAssets;                                             // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FAssetData
{
    FName ObjectPath;                                                                 // 0x0000 (size: 0x8)
    FName PackageName;                                                                // 0x0008 (size: 0x8)
    FName PackagePath;                                                                // 0x0010 (size: 0x8)
    FName AssetName;                                                                  // 0x0018 (size: 0x8)
    FName AssetClass;                                                                 // 0x0020 (size: 0x8)

}; // Size: 0x60

struct FAutomationEvent
{
    EAutomationEventType Type;                                                        // 0x0000 (size: 0x1)
    FString Message;                                                                  // 0x0008 (size: 0x10)
    FString Context;                                                                  // 0x0018 (size: 0x10)
    FGuid Artifact;                                                                   // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FAutomationExecutionEntry
{
    FAutomationEvent Event;                                                           // 0x0000 (size: 0x38)
    FString Filename;                                                                 // 0x0038 (size: 0x10)
    int32 LineNumber;                                                                 // 0x0048 (size: 0x4)
    FDateTime Timestamp;                                                              // 0x0050 (size: 0x8)

}; // Size: 0x58

struct FBox
{
    FVector Min;                                                                      // 0x0000 (size: 0xC)
    FVector Max;                                                                      // 0x000C (size: 0xC)
    uint8 IsValid;                                                                    // 0x0018 (size: 0x1)

}; // Size: 0x1C

struct FBox2D
{
    FVector2D Min;                                                                    // 0x0000 (size: 0x8)
    FVector2D Max;                                                                    // 0x0008 (size: 0x8)
    uint8 bIsValid;                                                                   // 0x0010 (size: 0x1)

}; // Size: 0x14

struct FBoxSphereBounds
{
    FVector Origin;                                                                   // 0x0000 (size: 0xC)
    FVector BoxExtent;                                                                // 0x000C (size: 0xC)
    float SphereRadius;                                                               // 0x0018 (size: 0x4)

}; // Size: 0x1C

struct FColor
{
    uint8 B;                                                                          // 0x0000 (size: 0x1)
    uint8 G;                                                                          // 0x0001 (size: 0x1)
    uint8 R;                                                                          // 0x0002 (size: 0x1)
    uint8 A;                                                                          // 0x0003 (size: 0x1)

}; // Size: 0x4

struct FDateTime
{
}; // Size: 0x8

struct FDefault__ScriptStruct
{
}; // Size: 0x0

struct FFallbackStruct
{
}; // Size: 0x1

struct FFloatInterval
{
    float Min;                                                                        // 0x0000 (size: 0x4)
    float Max;                                                                        // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FFloatRange
{
    FFloatRangeBound LowerBound;                                                      // 0x0000 (size: 0x8)
    FFloatRangeBound UpperBound;                                                      // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FFloatRangeBound
{
    TEnumAsByte<ERangeBoundTypes::Type> Type;                                         // 0x0000 (size: 0x1)
    float Value;                                                                      // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FFrameNumber
{
    int32 Value;                                                                      // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FFrameNumberRange
{
    FFrameNumberRangeBound LowerBound;                                                // 0x0000 (size: 0x8)
    FFrameNumberRangeBound UpperBound;                                                // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FFrameNumberRangeBound
{
    TEnumAsByte<ERangeBoundTypes::Type> Type;                                         // 0x0000 (size: 0x1)
    FFrameNumber Value;                                                               // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FFrameRate
{
    int32 Numerator;                                                                  // 0x0000 (size: 0x4)
    int32 Denominator;                                                                // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FFrameTime
{
    FFrameNumber FrameNumber;                                                         // 0x0000 (size: 0x4)
    float SubFrame;                                                                   // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FGuid
{
    int32 A;                                                                          // 0x0000 (size: 0x4)
    int32 B;                                                                          // 0x0004 (size: 0x4)
    int32 C;                                                                          // 0x0008 (size: 0x4)
    int32 D;                                                                          // 0x000C (size: 0x4)

}; // Size: 0x10

struct FInt32Interval
{
    int32 Min;                                                                        // 0x0000 (size: 0x4)
    int32 Max;                                                                        // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FInt32Range
{
    FInt32RangeBound LowerBound;                                                      // 0x0000 (size: 0x8)
    FInt32RangeBound UpperBound;                                                      // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FInt32RangeBound
{
    TEnumAsByte<ERangeBoundTypes::Type> Type;                                         // 0x0000 (size: 0x1)
    int32 Value;                                                                      // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FIntPoint
{
    int32 X;                                                                          // 0x0000 (size: 0x4)
    int32 Y;                                                                          // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FIntVector
{
    int32 X;                                                                          // 0x0000 (size: 0x4)
    int32 Y;                                                                          // 0x0004 (size: 0x4)
    int32 Z;                                                                          // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FInterpCurveFloat
{
    TArray<FInterpCurvePointFloat> Points;                                            // 0x0000 (size: 0x10)
    bool bIsLooped;                                                                   // 0x0010 (size: 0x1)
    float LoopKeyOffset;                                                              // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FInterpCurveLinearColor
{
    TArray<FInterpCurvePointLinearColor> Points;                                      // 0x0000 (size: 0x10)
    bool bIsLooped;                                                                   // 0x0010 (size: 0x1)
    float LoopKeyOffset;                                                              // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FInterpCurvePointFloat
{
    float InVal;                                                                      // 0x0000 (size: 0x4)
    float OutVal;                                                                     // 0x0004 (size: 0x4)
    float ArriveTangent;                                                              // 0x0008 (size: 0x4)
    float LeaveTangent;                                                               // 0x000C (size: 0x4)
    TEnumAsByte<EInterpCurveMode> InterpMode;                                         // 0x0010 (size: 0x1)

}; // Size: 0x14

struct FInterpCurvePointLinearColor
{
    float InVal;                                                                      // 0x0000 (size: 0x4)
    FLinearColor OutVal;                                                              // 0x0004 (size: 0x10)
    FLinearColor ArriveTangent;                                                       // 0x0014 (size: 0x10)
    FLinearColor LeaveTangent;                                                        // 0x0024 (size: 0x10)
    TEnumAsByte<EInterpCurveMode> InterpMode;                                         // 0x0034 (size: 0x1)

}; // Size: 0x38

struct FInterpCurvePointQuat
{
    float InVal;                                                                      // 0x0000 (size: 0x4)
    FQuat OutVal;                                                                     // 0x0010 (size: 0x10)
    FQuat ArriveTangent;                                                              // 0x0020 (size: 0x10)
    FQuat LeaveTangent;                                                               // 0x0030 (size: 0x10)
    TEnumAsByte<EInterpCurveMode> InterpMode;                                         // 0x0040 (size: 0x1)

}; // Size: 0x50

struct FInterpCurvePointTwoVectors
{
    float InVal;                                                                      // 0x0000 (size: 0x4)
    FTwoVectors OutVal;                                                               // 0x0004 (size: 0x18)
    FTwoVectors ArriveTangent;                                                        // 0x001C (size: 0x18)
    FTwoVectors LeaveTangent;                                                         // 0x0034 (size: 0x18)
    TEnumAsByte<EInterpCurveMode> InterpMode;                                         // 0x004C (size: 0x1)

}; // Size: 0x50

struct FInterpCurvePointVector
{
    float InVal;                                                                      // 0x0000 (size: 0x4)
    FVector OutVal;                                                                   // 0x0004 (size: 0xC)
    FVector ArriveTangent;                                                            // 0x0010 (size: 0xC)
    FVector LeaveTangent;                                                             // 0x001C (size: 0xC)
    TEnumAsByte<EInterpCurveMode> InterpMode;                                         // 0x0028 (size: 0x1)

}; // Size: 0x2C

struct FInterpCurvePointVector2D
{
    float InVal;                                                                      // 0x0000 (size: 0x4)
    FVector2D OutVal;                                                                 // 0x0004 (size: 0x8)
    FVector2D ArriveTangent;                                                          // 0x000C (size: 0x8)
    FVector2D LeaveTangent;                                                           // 0x0014 (size: 0x8)
    TEnumAsByte<EInterpCurveMode> InterpMode;                                         // 0x001C (size: 0x1)

}; // Size: 0x20

struct FInterpCurveQuat
{
    TArray<FInterpCurvePointQuat> Points;                                             // 0x0000 (size: 0x10)
    bool bIsLooped;                                                                   // 0x0010 (size: 0x1)
    float LoopKeyOffset;                                                              // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FInterpCurveTwoVectors
{
    TArray<FInterpCurvePointTwoVectors> Points;                                       // 0x0000 (size: 0x10)
    bool bIsLooped;                                                                   // 0x0010 (size: 0x1)
    float LoopKeyOffset;                                                              // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FInterpCurveVector
{
    TArray<FInterpCurvePointVector> Points;                                           // 0x0000 (size: 0x10)
    bool bIsLooped;                                                                   // 0x0010 (size: 0x1)
    float LoopKeyOffset;                                                              // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FInterpCurveVector2D
{
    TArray<FInterpCurvePointVector2D> Points;                                         // 0x0000 (size: 0x10)
    bool bIsLooped;                                                                   // 0x0010 (size: 0x1)
    float LoopKeyOffset;                                                              // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FJoinabilitySettings
{
    FName SessionName;                                                                // 0x0000 (size: 0x8)
    bool bPublicSearchable;                                                           // 0x0008 (size: 0x1)
    bool bAllowInvites;                                                               // 0x0009 (size: 0x1)
    bool bJoinViaPresence;                                                            // 0x000A (size: 0x1)
    bool bJoinViaPresenceFriendsOnly;                                                 // 0x000B (size: 0x1)
    int32 MaxPlayers;                                                                 // 0x000C (size: 0x4)
    int32 MaxPartySize;                                                               // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FLinearColor
{
    float R;                                                                          // 0x0000 (size: 0x4)
    float G;                                                                          // 0x0004 (size: 0x4)
    float B;                                                                          // 0x0008 (size: 0x4)
    float A;                                                                          // 0x000C (size: 0x4)

}; // Size: 0x10

struct FMatrix
{
    FPlane XPlane;                                                                    // 0x0000 (size: 0x10)
    FPlane YPlane;                                                                    // 0x0010 (size: 0x10)
    FPlane ZPlane;                                                                    // 0x0020 (size: 0x10)
    FPlane WPlane;                                                                    // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FOrientedBox
{
    FVector Center;                                                                   // 0x0000 (size: 0xC)
    FVector AxisX;                                                                    // 0x000C (size: 0xC)
    FVector AxisY;                                                                    // 0x0018 (size: 0xC)
    FVector AxisZ;                                                                    // 0x0024 (size: 0xC)
    float ExtentX;                                                                    // 0x0030 (size: 0x4)
    float ExtentY;                                                                    // 0x0034 (size: 0x4)
    float ExtentZ;                                                                    // 0x0038 (size: 0x4)

}; // Size: 0x3C

struct FPackedNormal
{
    uint8 X;                                                                          // 0x0000 (size: 0x1)
    uint8 Y;                                                                          // 0x0001 (size: 0x1)
    uint8 Z;                                                                          // 0x0002 (size: 0x1)
    uint8 W;                                                                          // 0x0003 (size: 0x1)

}; // Size: 0x4

struct FPackedRGB10A2N
{
    int32 Packed;                                                                     // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FPackedRGBA16N
{
    int32 XY;                                                                         // 0x0000 (size: 0x4)
    int32 ZW;                                                                         // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FPlane : public FVector
{
    float W;                                                                          // 0x000C (size: 0x4)

}; // Size: 0x10

struct FPolyglotTextData
{
    ELocalizedTextSourceCategory Category;                                            // 0x0000 (size: 0x1)
    FString NativeCulture;                                                            // 0x0008 (size: 0x10)
    FString Namespace;                                                                // 0x0018 (size: 0x10)
    FString Key;                                                                      // 0x0028 (size: 0x10)
    FString NativeString;                                                             // 0x0038 (size: 0x10)
    TMap<class FString, class FString> LocalizedStrings;                              // 0x0048 (size: 0x50)
    bool bIsMinimalPatch;                                                             // 0x0098 (size: 0x1)
    FText CachedText;                                                                 // 0x00A0 (size: 0x18)

}; // Size: 0xB8

struct FPrimaryAssetId
{
    FPrimaryAssetType PrimaryAssetType;                                               // 0x0000 (size: 0x8)
    FName PrimaryAssetName;                                                           // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FPrimaryAssetType
{
    FName Name;                                                                       // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FQualifiedFrameTime
{
    FFrameTime Time;                                                                  // 0x0000 (size: 0x8)
    FFrameRate Rate;                                                                  // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FQuat
{
    float X;                                                                          // 0x0000 (size: 0x4)
    float Y;                                                                          // 0x0004 (size: 0x4)
    float Z;                                                                          // 0x0008 (size: 0x4)
    float W;                                                                          // 0x000C (size: 0x4)

}; // Size: 0x10

struct FRandomStream
{
    int32 InitialSeed;                                                                // 0x0000 (size: 0x4)
    int32 Seed;                                                                       // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FRotator
{
    float Pitch;                                                                      // 0x0000 (size: 0x4)
    float Yaw;                                                                        // 0x0004 (size: 0x4)
    float roll;                                                                       // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FSoftClassPath : public FSoftObjectPath
{
}; // Size: 0x18

struct FSoftObjectPath
{
    FName AssetPathName;                                                              // 0x0000 (size: 0x8)
    FString SubPathString;                                                            // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FTestUninitializedScriptStructMembersTest
{
    class UObject* UninitializedObjectReference;                                      // 0x0000 (size: 0x8)
    class UObject* InitializedObjectReference;                                        // 0x0008 (size: 0x8)
    float UnusedValue;                                                                // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FTimecode
{
    int32 Hours;                                                                      // 0x0000 (size: 0x4)
    int32 Minutes;                                                                    // 0x0004 (size: 0x4)
    int32 Seconds;                                                                    // 0x0008 (size: 0x4)
    int32 Frames;                                                                     // 0x000C (size: 0x4)
    bool bDropFrameFormat;                                                            // 0x0010 (size: 0x1)

}; // Size: 0x14

struct FTimespan
{
}; // Size: 0x8

struct FTransform
{
    FQuat Rotation;                                                                   // 0x0000 (size: 0x10)
    FVector Translation;                                                              // 0x0010 (size: 0xC)
    FVector Scale3D;                                                                  // 0x0020 (size: 0xC)

}; // Size: 0x30

struct FTwoVectors
{
    FVector v1;                                                                       // 0x0000 (size: 0xC)
    FVector v2;                                                                       // 0x000C (size: 0xC)

}; // Size: 0x18

struct FUniqueNetIdWrapper
{
}; // Size: 0x1

struct FVector
{
    float X;                                                                          // 0x0000 (size: 0x4)
    float Y;                                                                          // 0x0004 (size: 0x4)
    float Z;                                                                          // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FVector2D
{
    float X;                                                                          // 0x0000 (size: 0x4)
    float Y;                                                                          // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FVector4
{
    float X;                                                                          // 0x0000 (size: 0x4)
    float Y;                                                                          // 0x0004 (size: 0x4)
    float Z;                                                                          // 0x0008 (size: 0x4)
    float W;                                                                          // 0x000C (size: 0x4)

}; // Size: 0x10

class IInterface : public UObject
{
}; // Size: 0x28

class UArrayProperty : public UProperty
{
}; // Size: 0x78

class UBoolProperty : public UProperty
{
}; // Size: 0x78

class UByteProperty : public UNumericProperty
{
}; // Size: 0x78

class UClass : public UStruct
{
}; // Size: 0x230

class UClassProperty : public UObjectProperty
{
}; // Size: 0x80

class UDefault__Class
{
}; // Size: 0x0

class UDefault__DynamicClass
{
}; // Size: 0x0

class UDefault__LinkerPlaceholderClass
{
}; // Size: 0x0

class UDelegateFunction : public UFunction
{
}; // Size: 0xE0

class UDelegateProperty : public UProperty
{
}; // Size: 0x78

class UDoubleProperty : public UNumericProperty
{
}; // Size: 0x70

class UDynamicClass : public UClass
{
}; // Size: 0x2B0

class UEnum : public UField
{
}; // Size: 0x60

class UEnumProperty : public UProperty
{
}; // Size: 0x80

class UField : public UObject
{
}; // Size: 0x30

class UFloatProperty : public UNumericProperty
{
}; // Size: 0x70

class UFunction : public UStruct
{
}; // Size: 0xE0

class UGCObjectReferencer : public UObject
{
}; // Size: 0x70

class UInt16Property : public UNumericProperty
{
}; // Size: 0x70

class UInt64Property : public UNumericProperty
{
}; // Size: 0x70

class UInt8Property : public UNumericProperty
{
}; // Size: 0x70

class UIntProperty : public UNumericProperty
{
}; // Size: 0x70

class UInterfaceProperty : public UProperty
{
}; // Size: 0x78

class ULazyObjectProperty : public UObjectPropertyBase
{
}; // Size: 0x78

class ULinkerPlaceholderClass : public UClass
{
}; // Size: 0x3E8

class ULinkerPlaceholderExportObject : public UObject
{
}; // Size: 0xF0

class ULinkerPlaceholderFunction : public UFunction
{
}; // Size: 0x298

class UMapProperty : public UProperty
{
}; // Size: 0x98

class UMetaData : public UObject
{
}; // Size: 0xC8

class UMulticastDelegateProperty : public UProperty
{
}; // Size: 0x78

class UMulticastDelegatePropertyWrapper : public UPropertyWrapper
{
}; // Size: 0x30

class UMulticastInlineDelegateProperty : public UMulticastDelegateProperty
{
}; // Size: 0x78

class UMulticastInlineDelegatePropertyWrapper : public UMulticastDelegatePropertyWrapper
{
}; // Size: 0x30

class UMulticastSparseDelegateProperty : public UMulticastDelegateProperty
{
}; // Size: 0x78

class UNameProperty : public UProperty
{
}; // Size: 0x70

class UNumericProperty : public UProperty
{
}; // Size: 0x70

class UObject
{

    void ExecuteUbergraph(int32 EntryPoint);
}; // Size: 0x28

class UObjectProperty : public UObjectPropertyBase
{
}; // Size: 0x78

class UObjectPropertyBase : public UProperty
{
}; // Size: 0x78

class UObjectRedirector : public UObject
{
}; // Size: 0x30

class UPackage : public UObject
{
}; // Size: 0xA0

class UPackageMap : public UObject
{
}; // Size: 0xE0

class UProperty : public UField
{
}; // Size: 0x70

class UPropertyWrapper : public UObject
{
}; // Size: 0x30

class UScriptStruct : public UStruct
{
}; // Size: 0xC0

class USetProperty : public UProperty
{
}; // Size: 0x90

class USoftClassProperty : public USoftObjectProperty
{
}; // Size: 0x80

class USoftObjectProperty : public UObjectPropertyBase
{
}; // Size: 0x78

class USparseDelegateFunction : public UDelegateFunction
{
}; // Size: 0xF0

class UStrProperty : public UProperty
{
}; // Size: 0x70

class UStruct : public UField
{
}; // Size: 0xB0

class UStructProperty : public UProperty
{
}; // Size: 0x78

class UTextBuffer : public UObject
{
}; // Size: 0x50

class UTextProperty : public UProperty
{
}; // Size: 0x70

class UUInt16Property : public UNumericProperty
{
}; // Size: 0x70

class UUInt32Property : public UNumericProperty
{
}; // Size: 0x70

class UUInt64Property : public UNumericProperty
{
}; // Size: 0x70

class UWeakObjectProperty : public UObjectPropertyBase
{
}; // Size: 0x78

#endif
