#ifndef UE4SS_SDK_RigVM_HPP
#define UE4SS_SDK_RigVM_HPP

#include "RigVM_enums.hpp"

struct FMathRBFInterpolateQuatColor_Target
{
    FQuat Target;                                                                     // 0x0000 (size: 0x20)
    FLinearColor Value;                                                               // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FMathRBFInterpolateQuatFloat_Target
{
    FQuat Target;                                                                     // 0x0000 (size: 0x20)
    float Value;                                                                      // 0x0020 (size: 0x4)

}; // Size: 0x30

struct FMathRBFInterpolateQuatQuat_Target
{
    FQuat Target;                                                                     // 0x0000 (size: 0x20)
    FQuat Value;                                                                      // 0x0020 (size: 0x20)

}; // Size: 0x40

struct FMathRBFInterpolateQuatVector_Target
{
    FQuat Target;                                                                     // 0x0000 (size: 0x20)
    FVector Value;                                                                    // 0x0020 (size: 0x18)

}; // Size: 0x40

struct FMathRBFInterpolateQuatXform_Target
{
    FQuat Target;                                                                     // 0x0000 (size: 0x20)
    FTransform Value;                                                                 // 0x0020 (size: 0x60)

}; // Size: 0x80

struct FMathRBFInterpolateVectorColor_Target
{
    FVector Target;                                                                   // 0x0000 (size: 0x18)
    FLinearColor Value;                                                               // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FMathRBFInterpolateVectorFloat_Target
{
    FVector Target;                                                                   // 0x0000 (size: 0x18)
    float Value;                                                                      // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FMathRBFInterpolateVectorQuat_Target
{
    FVector Target;                                                                   // 0x0000 (size: 0x18)
    FQuat Value;                                                                      // 0x0020 (size: 0x20)

}; // Size: 0x40

struct FMathRBFInterpolateVectorVector_Target
{
    FVector Target;                                                                   // 0x0000 (size: 0x18)
    FVector Value;                                                                    // 0x0018 (size: 0x18)

}; // Size: 0x30

struct FMathRBFInterpolateVectorXform_Target
{
    FVector Target;                                                                   // 0x0000 (size: 0x18)
    FTransform Value;                                                                 // 0x0020 (size: 0x60)

}; // Size: 0x80

struct FRigDispatch_FromString : public FRigVMDispatchFactory
{
}; // Size: 0x70

struct FRigDispatch_ToString : public FRigVMDispatchFactory
{
}; // Size: 0x70

struct FRigVMBaseOp
{
}; // Size: 0x1

struct FRigVMBinaryOp : public FRigVMBaseOp
{
}; // Size: 0xE

struct FRigVMBranchInfo
{
    int32 Index;                                                                      // 0x0000 (size: 0x4)
    FName Label;                                                                      // 0x0004 (size: 0x8)
    int32 InstructionIndex;                                                           // 0x000C (size: 0x4)
    int32 ArgumentIndex;                                                              // 0x0010 (size: 0x4)
    uint16 FirstInstruction;                                                          // 0x0014 (size: 0x2)
    uint16 LastInstruction;                                                           // 0x0016 (size: 0x2)

}; // Size: 0x18

struct FRigVMBreakpoint
{
}; // Size: 0x24

struct FRigVMByteCode
{
    TArray<uint8> ByteCode;                                                           // 0x0000 (size: 0x10)
    int32 NumInstructions;                                                            // 0x0010 (size: 0x4)
    TArray<FRigVMByteCodeEntry> Entries;                                              // 0x0018 (size: 0x10)
    TArray<FRigVMBranchInfo> BranchInfos;                                             // 0x0028 (size: 0x10)
    TArray<FRigVMPredicateBranch> PredicateBranches;                                  // 0x0038 (size: 0x10)
    FString PublicContextPathName;                                                    // 0x0048 (size: 0x10)

}; // Size: 0xB0

struct FRigVMByteCodeEntry
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    int32 InstructionIndex;                                                           // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FRigVMByteCodeStatistics
{
    int32 InstructionCount;                                                           // 0x0000 (size: 0x4)
    int32 DataBytes;                                                                  // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FRigVMChangeTypeOp : public FRigVMUnaryOp
{
}; // Size: 0x8

struct FRigVMComparisonOp : public FRigVMBaseOp
{
}; // Size: 0x14

struct FRigVMCopyOp : public FRigVMBaseOp
{
}; // Size: 0x12

struct FRigVMDebugInfo
{
}; // Size: 0x140

struct FRigVMDispatchFactory
{
}; // Size: 0x70

struct FRigVMDispatch_ArrayAdd : public FRigVMDispatch_ArraySetAtIndex
{
}; // Size: 0x70

struct FRigVMDispatch_ArrayAppend : public FRigVMDispatch_ArrayBaseMutable
{
}; // Size: 0x70

struct FRigVMDispatch_ArrayBase : public FRigVMDispatch_CoreBase
{
}; // Size: 0x70

struct FRigVMDispatch_ArrayBaseMutable : public FRigVMDispatch_ArrayBase
{
}; // Size: 0x70

struct FRigVMDispatch_ArrayClone : public FRigVMDispatch_ArrayBase
{
}; // Size: 0x70

struct FRigVMDispatch_ArrayDifference : public FRigVMDispatch_ArrayBase
{
}; // Size: 0x70

struct FRigVMDispatch_ArrayFind : public FRigVMDispatch_ArrayBase
{
}; // Size: 0x70

struct FRigVMDispatch_ArrayGetAtIndex : public FRigVMDispatch_ArrayBase
{
}; // Size: 0x70

struct FRigVMDispatch_ArrayGetNum : public FRigVMDispatch_ArrayBase
{
}; // Size: 0x70

struct FRigVMDispatch_ArrayInit : public FRigVMDispatch_ArrayBaseMutable
{
}; // Size: 0x70

struct FRigVMDispatch_ArrayInsert : public FRigVMDispatch_ArraySetAtIndex
{
}; // Size: 0x70

struct FRigVMDispatch_ArrayIntersection : public FRigVMDispatch_ArrayDifference
{
}; // Size: 0x70

struct FRigVMDispatch_ArrayIterator : public FRigVMDispatch_ArrayBaseMutable
{
}; // Size: 0x70

struct FRigVMDispatch_ArrayMake : public FRigVMDispatch_ArrayBase
{
}; // Size: 0x70

struct FRigVMDispatch_ArrayRemove : public FRigVMDispatch_ArrayBaseMutable
{
}; // Size: 0x70

struct FRigVMDispatch_ArrayReset : public FRigVMDispatch_ArrayBaseMutable
{
}; // Size: 0x70

struct FRigVMDispatch_ArrayReverse : public FRigVMDispatch_ArrayReset
{
}; // Size: 0x70

struct FRigVMDispatch_ArraySetAtIndex : public FRigVMDispatch_ArrayBaseMutable
{
}; // Size: 0x70

struct FRigVMDispatch_ArraySetNum : public FRigVMDispatch_ArrayBaseMutable
{
}; // Size: 0x70

struct FRigVMDispatch_ArrayUnion : public FRigVMDispatch_ArrayAppend
{
}; // Size: 0x70

struct FRigVMDispatch_BreakStruct : public FRigVMDispatch_MakeStruct
{
}; // Size: 0x70

struct FRigVMDispatch_CastEnumToInt : public FRigVMDispatchFactory
{
}; // Size: 0x70

struct FRigVMDispatch_CastIntToEnum : public FRigVMDispatchFactory
{
}; // Size: 0x70

struct FRigVMDispatch_CastObject : public FRigVMDispatchFactory
{
}; // Size: 0x70

struct FRigVMDispatch_Constant : public FRigVMDispatch_CoreBase
{
}; // Size: 0x70

struct FRigVMDispatch_CoreBase : public FRigVMDispatchFactory
{
}; // Size: 0x70

struct FRigVMDispatch_CoreEquals : public FRigVMDispatch_CoreBase
{
}; // Size: 0x70

struct FRigVMDispatch_CoreNotEquals : public FRigVMDispatch_CoreEquals
{
}; // Size: 0x70

struct FRigVMDispatch_If : public FRigVMDispatch_CoreBase
{
}; // Size: 0x70

struct FRigVMDispatch_MakeStruct : public FRigVMDispatch_CoreBase
{
}; // Size: 0x70

struct FRigVMDispatch_Print : public FRigVMDispatchFactory
{
}; // Size: 0x70

struct FRigVMDispatch_SelectInt32 : public FRigVMDispatch_CoreBase
{
}; // Size: 0x70

struct FRigVMDispatch_SwitchInt32 : public FRigVMDispatch_CoreBase
{
}; // Size: 0x70

struct FRigVMDrawContainer
{
    TArray<FRigVMDrawInstruction> Instructions;                                       // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FRigVMDrawInstruction
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    TEnumAsByte<ERigVMDrawSettings::Type> PrimitiveType;                              // 0x0008 (size: 0x1)
    TArray<FVector> Positions;                                                        // 0x0010 (size: 0x10)
    FLinearColor Color;                                                               // 0x0020 (size: 0x10)
    float Thickness;                                                                  // 0x0030 (size: 0x4)
    FTransform Transform;                                                             // 0x0040 (size: 0x60)

}; // Size: 0xD0

struct FRigVMDrawInterface : public FRigVMDrawContainer
{
}; // Size: 0x18

struct FRigVMExecuteContext
{
}; // Size: 0x110

struct FRigVMExecuteOp : public FRigVMBaseOp
{
}; // Size: 0xA

struct FRigVMExtendedExecuteContext
{
}; // Size: 0x228

struct FRigVMExternalVariable : public FRigVMExternalVariableDef
{
}; // Size: 0x30

struct FRigVMExternalVariableDef
{
}; // Size: 0x28

struct FRigVMFourPointBezier
{
    FVector A;                                                                        // 0x0000 (size: 0x18)
    FVector B;                                                                        // 0x0018 (size: 0x18)
    FVector C;                                                                        // 0x0030 (size: 0x18)
    FVector D;                                                                        // 0x0048 (size: 0x18)

}; // Size: 0x60

struct FRigVMFunctionCompilationData
{
    FRigVMByteCode ByteCode;                                                          // 0x0000 (size: 0xB0)
    TArray<FName> FunctionNames;                                                      // 0x00B0 (size: 0x10)
    TArray<FRigVMFunctionCompilationPropertyDescription> WorkPropertyDescriptions;    // 0x00C0 (size: 0x10)
    TArray<FRigVMFunctionCompilationPropertyPath> WorkPropertyPathDescriptions;       // 0x00D0 (size: 0x10)
    TArray<FRigVMFunctionCompilationPropertyDescription> LiteralPropertyDescriptions; // 0x00E0 (size: 0x10)
    TArray<FRigVMFunctionCompilationPropertyPath> LiteralPropertyPathDescriptions;    // 0x00F0 (size: 0x10)
    TArray<FRigVMFunctionCompilationPropertyDescription> DebugPropertyDescriptions;   // 0x0100 (size: 0x10)
    TArray<FRigVMFunctionCompilationPropertyPath> DebugPropertyPathDescriptions;      // 0x0110 (size: 0x10)
    TArray<FRigVMFunctionCompilationPropertyDescription> ExternalPropertyDescriptions; // 0x0120 (size: 0x10)
    TArray<FRigVMFunctionCompilationPropertyPath> ExternalPropertyPathDescriptions;   // 0x0130 (size: 0x10)
    TMap<int32, FName> ExternalRegisterIndexToVariable;                               // 0x0140 (size: 0x50)
    TMap<class FString, class FRigVMOperand> Operands;                                // 0x0190 (size: 0x50)
    uint32 Hash;                                                                      // 0x01E0 (size: 0x4)
    bool bEncounteredSurpressedErrors;                                                // 0x01E4 (size: 0x1)

}; // Size: 0x238

struct FRigVMFunctionCompilationPropertyDescription
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FString CPPType;                                                                  // 0x0008 (size: 0x10)
    TSoftObjectPtr<UObject> CPPTypeObject;                                            // 0x0018 (size: 0x28)
    FString DefaultValue;                                                             // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FRigVMFunctionCompilationPropertyPath
{
    int32 PropertyIndex;                                                              // 0x0000 (size: 0x4)
    FString HeadCPPType;                                                              // 0x0008 (size: 0x10)
    FString SegmentPath;                                                              // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FRigVMFunction_AccumulateBase : public FRigVMFunction_SimBase
{
}; // Size: 0x8

struct FRigVMFunction_AccumulateFloatAdd : public FRigVMFunction_AccumulateBase
{
    float Increment;                                                                  // 0x0008 (size: 0x4)
    float InitialValue;                                                               // 0x000C (size: 0x4)
    bool bIntegrateDeltaTime;                                                         // 0x0010 (size: 0x1)
    float Result;                                                                     // 0x0014 (size: 0x4)
    float AccumulatedValue;                                                           // 0x0018 (size: 0x4)
    bool bIsInitialized;                                                              // 0x001C (size: 0x1)

}; // Size: 0x20

struct FRigVMFunction_AccumulateFloatLerp : public FRigVMFunction_AccumulateBase
{
    float TargetValue;                                                                // 0x0008 (size: 0x4)
    float InitialValue;                                                               // 0x000C (size: 0x4)
    float Blend;                                                                      // 0x0010 (size: 0x4)
    bool bIntegrateDeltaTime;                                                         // 0x0014 (size: 0x1)
    float Result;                                                                     // 0x0018 (size: 0x4)
    float AccumulatedValue;                                                           // 0x001C (size: 0x4)
    bool bIsInitialized;                                                              // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FRigVMFunction_AccumulateFloatMul : public FRigVMFunction_AccumulateBase
{
    float Multiplier;                                                                 // 0x0008 (size: 0x4)
    float InitialValue;                                                               // 0x000C (size: 0x4)
    bool bIntegrateDeltaTime;                                                         // 0x0010 (size: 0x1)
    float Result;                                                                     // 0x0014 (size: 0x4)
    float AccumulatedValue;                                                           // 0x0018 (size: 0x4)
    bool bIsInitialized;                                                              // 0x001C (size: 0x1)

}; // Size: 0x20

struct FRigVMFunction_AccumulateFloatRange : public FRigVMFunction_AccumulateBase
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    float Minimum;                                                                    // 0x000C (size: 0x4)
    float Maximum;                                                                    // 0x0010 (size: 0x4)
    float AccumulatedMinimum;                                                         // 0x0014 (size: 0x4)
    float AccumulatedMaximum;                                                         // 0x0018 (size: 0x4)
    bool bIsInitialized;                                                              // 0x001C (size: 0x1)

}; // Size: 0x20

struct FRigVMFunction_AccumulateQuatLerp : public FRigVMFunction_AccumulateBase
{
    FQuat TargetValue;                                                                // 0x0010 (size: 0x20)
    FQuat InitialValue;                                                               // 0x0030 (size: 0x20)
    float Blend;                                                                      // 0x0050 (size: 0x4)
    bool bIntegrateDeltaTime;                                                         // 0x0054 (size: 0x1)
    FQuat Result;                                                                     // 0x0060 (size: 0x20)
    FQuat AccumulatedValue;                                                           // 0x0080 (size: 0x20)
    bool bIsInitialized;                                                              // 0x00A0 (size: 0x1)

}; // Size: 0xB0

struct FRigVMFunction_AccumulateQuatMul : public FRigVMFunction_AccumulateBase
{
    FQuat Multiplier;                                                                 // 0x0010 (size: 0x20)
    FQuat InitialValue;                                                               // 0x0030 (size: 0x20)
    bool bFlipOrder;                                                                  // 0x0050 (size: 0x1)
    bool bIntegrateDeltaTime;                                                         // 0x0051 (size: 0x1)
    FQuat Result;                                                                     // 0x0060 (size: 0x20)
    FQuat AccumulatedValue;                                                           // 0x0080 (size: 0x20)
    bool bIsInitialized;                                                              // 0x00A0 (size: 0x1)

}; // Size: 0xB0

struct FRigVMFunction_AccumulateTransformLerp : public FRigVMFunction_AccumulateBase
{
    FTransform TargetValue;                                                           // 0x0010 (size: 0x60)
    FTransform InitialValue;                                                          // 0x0070 (size: 0x60)
    float Blend;                                                                      // 0x00D0 (size: 0x4)
    bool bIntegrateDeltaTime;                                                         // 0x00D4 (size: 0x1)
    FTransform Result;                                                                // 0x00E0 (size: 0x60)
    FTransform AccumulatedValue;                                                      // 0x0140 (size: 0x60)
    bool bIsInitialized;                                                              // 0x01A0 (size: 0x1)

}; // Size: 0x1B0

struct FRigVMFunction_AccumulateTransformMul : public FRigVMFunction_AccumulateBase
{
    FTransform Multiplier;                                                            // 0x0010 (size: 0x60)
    FTransform InitialValue;                                                          // 0x0070 (size: 0x60)
    bool bFlipOrder;                                                                  // 0x00D0 (size: 0x1)
    bool bIntegrateDeltaTime;                                                         // 0x00D1 (size: 0x1)
    FTransform Result;                                                                // 0x00E0 (size: 0x60)
    FTransform AccumulatedValue;                                                      // 0x0140 (size: 0x60)
    bool bIsInitialized;                                                              // 0x01A0 (size: 0x1)

}; // Size: 0x1B0

struct FRigVMFunction_AccumulateVectorAdd : public FRigVMFunction_AccumulateBase
{
    FVector Increment;                                                                // 0x0008 (size: 0x18)
    FVector InitialValue;                                                             // 0x0020 (size: 0x18)
    bool bIntegrateDeltaTime;                                                         // 0x0038 (size: 0x1)
    FVector Result;                                                                   // 0x0040 (size: 0x18)
    FVector AccumulatedValue;                                                         // 0x0058 (size: 0x18)
    bool bIsInitialized;                                                              // 0x0070 (size: 0x1)

}; // Size: 0x78

struct FRigVMFunction_AccumulateVectorLerp : public FRigVMFunction_AccumulateBase
{
    FVector TargetValue;                                                              // 0x0008 (size: 0x18)
    FVector InitialValue;                                                             // 0x0020 (size: 0x18)
    float Blend;                                                                      // 0x0038 (size: 0x4)
    bool bIntegrateDeltaTime;                                                         // 0x003C (size: 0x1)
    FVector Result;                                                                   // 0x0040 (size: 0x18)
    FVector AccumulatedValue;                                                         // 0x0058 (size: 0x18)
    bool bIsInitialized;                                                              // 0x0070 (size: 0x1)

}; // Size: 0x78

struct FRigVMFunction_AccumulateVectorMul : public FRigVMFunction_AccumulateBase
{
    FVector Multiplier;                                                               // 0x0008 (size: 0x18)
    FVector InitialValue;                                                             // 0x0020 (size: 0x18)
    bool bIntegrateDeltaTime;                                                         // 0x0038 (size: 0x1)
    FVector Result;                                                                   // 0x0040 (size: 0x18)
    FVector AccumulatedValue;                                                         // 0x0058 (size: 0x18)
    bool bIsInitialized;                                                              // 0x0070 (size: 0x1)

}; // Size: 0x78

struct FRigVMFunction_AccumulateVectorRange : public FRigVMFunction_AccumulateBase
{
    FVector Value;                                                                    // 0x0008 (size: 0x18)
    FVector Minimum;                                                                  // 0x0020 (size: 0x18)
    FVector Maximum;                                                                  // 0x0038 (size: 0x18)
    FVector AccumulatedMinimum;                                                       // 0x0050 (size: 0x18)
    FVector AccumulatedMaximum;                                                       // 0x0068 (size: 0x18)
    bool bIsInitialized;                                                              // 0x0080 (size: 0x1)

}; // Size: 0x88

struct FRigVMFunction_AlphaInterp : public FRigVMFunction_SimBase
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    float scale;                                                                      // 0x000C (size: 0x4)
    float Bias;                                                                       // 0x0010 (size: 0x4)
    bool bMapRange;                                                                   // 0x0014 (size: 0x1)
    FInputRange InRange;                                                              // 0x0018 (size: 0x8)
    FInputRange OutRange;                                                             // 0x0020 (size: 0x8)
    bool bClampResult;                                                                // 0x0028 (size: 0x1)
    float ClampMin;                                                                   // 0x002C (size: 0x4)
    float ClampMax;                                                                   // 0x0030 (size: 0x4)
    bool bInterpResult;                                                               // 0x0034 (size: 0x1)
    float InterpSpeedIncreasing;                                                      // 0x0038 (size: 0x4)
    float InterpSpeedDecreasing;                                                      // 0x003C (size: 0x4)
    float Result;                                                                     // 0x0040 (size: 0x4)
    FInputScaleBiasClamp ScaleBiasClamp;                                              // 0x0044 (size: 0x30)

}; // Size: 0x78

struct FRigVMFunction_AlphaInterpQuat : public FRigVMFunction_SimBase
{
    FQuat Value;                                                                      // 0x0010 (size: 0x20)
    float scale;                                                                      // 0x0030 (size: 0x4)
    float Bias;                                                                       // 0x0034 (size: 0x4)
    bool bMapRange;                                                                   // 0x0038 (size: 0x1)
    FInputRange InRange;                                                              // 0x003C (size: 0x8)
    FInputRange OutRange;                                                             // 0x0044 (size: 0x8)
    bool bClampResult;                                                                // 0x004C (size: 0x1)
    float ClampMin;                                                                   // 0x0050 (size: 0x4)
    float ClampMax;                                                                   // 0x0054 (size: 0x4)
    bool bInterpResult;                                                               // 0x0058 (size: 0x1)
    float InterpSpeedIncreasing;                                                      // 0x005C (size: 0x4)
    float InterpSpeedDecreasing;                                                      // 0x0060 (size: 0x4)
    FQuat Result;                                                                     // 0x0070 (size: 0x20)
    FInputScaleBiasClamp ScaleBiasClamp;                                              // 0x0090 (size: 0x30)

}; // Size: 0xC0

struct FRigVMFunction_AlphaInterpVector : public FRigVMFunction_SimBase
{
    FVector Value;                                                                    // 0x0008 (size: 0x18)
    float scale;                                                                      // 0x0020 (size: 0x4)
    float Bias;                                                                       // 0x0024 (size: 0x4)
    bool bMapRange;                                                                   // 0x0028 (size: 0x1)
    FInputRange InRange;                                                              // 0x002C (size: 0x8)
    FInputRange OutRange;                                                             // 0x0034 (size: 0x8)
    bool bClampResult;                                                                // 0x003C (size: 0x1)
    float ClampMin;                                                                   // 0x0040 (size: 0x4)
    float ClampMax;                                                                   // 0x0044 (size: 0x4)
    bool bInterpResult;                                                               // 0x0048 (size: 0x1)
    float InterpSpeedIncreasing;                                                      // 0x004C (size: 0x4)
    float InterpSpeedDecreasing;                                                      // 0x0050 (size: 0x4)
    FVector Result;                                                                   // 0x0058 (size: 0x18)
    FInputScaleBiasClamp ScaleBiasClamp;                                              // 0x0070 (size: 0x30)

}; // Size: 0xA0

struct FRigVMFunction_AnimBase : public FRigVMStruct
{
}; // Size: 0x8

struct FRigVMFunction_AnimEasing : public FRigVMFunction_AnimBase
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    ERigVMAnimEasingType Type;                                                        // 0x000C (size: 0x1)
    float SourceMinimum;                                                              // 0x0010 (size: 0x4)
    float SourceMaximum;                                                              // 0x0014 (size: 0x4)
    float TargetMinimum;                                                              // 0x0018 (size: 0x4)
    float TargetMaximum;                                                              // 0x001C (size: 0x4)
    float Result;                                                                     // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FRigVMFunction_AnimEasingType : public FRigVMFunction_AnimBase
{
    ERigVMAnimEasingType Type;                                                        // 0x0008 (size: 0x1)

}; // Size: 0x10

struct FRigVMFunction_AnimEvalRichCurve : public FRigVMFunction_AnimBase
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    FRuntimeFloatCurve Curve;                                                         // 0x0010 (size: 0x88)
    float SourceMinimum;                                                              // 0x0098 (size: 0x4)
    float SourceMaximum;                                                              // 0x009C (size: 0x4)
    float TargetMinimum;                                                              // 0x00A0 (size: 0x4)
    float TargetMaximum;                                                              // 0x00A4 (size: 0x4)
    float Result;                                                                     // 0x00A8 (size: 0x4)

}; // Size: 0xB0

struct FRigVMFunction_AnimRichCurve : public FRigVMFunction_AnimBase
{
    FRuntimeFloatCurve Curve;                                                         // 0x0008 (size: 0x88)

}; // Size: 0x90

struct FRigVMFunction_Contains : public FRigVMFunction_NameBase
{
    FName Name;                                                                       // 0x0008 (size: 0x8)
    FName search;                                                                     // 0x0010 (size: 0x8)
    bool Result;                                                                      // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FRigVMFunction_ControlFlowBase : public FRigVMStruct
{
}; // Size: 0x8

struct FRigVMFunction_ControlFlowBranch : public FRigVMFunction_ControlFlowBase
{
    FRigVMExecuteContext ExecuteContext;                                              // 0x0010 (size: 0x110)
    bool Condition;                                                                   // 0x0120 (size: 0x1)
    FRigVMExecuteContext TRUE;                                                        // 0x0130 (size: 0x110)
    FRigVMExecuteContext FALSE;                                                       // 0x0240 (size: 0x110)
    FRigVMExecuteContext Completed;                                                   // 0x0350 (size: 0x110)
    FName BlockToRun;                                                                 // 0x0460 (size: 0x8)

}; // Size: 0x470

struct FRigVMFunction_DebugArc : public FRigVMFunction_DebugBaseMutable
{
    FTransform Transform;                                                             // 0x0120 (size: 0x60)
    FLinearColor Color;                                                               // 0x0180 (size: 0x10)
    float Radius;                                                                     // 0x0190 (size: 0x4)
    float MinimumDegrees;                                                             // 0x0194 (size: 0x4)
    float MaximumDegrees;                                                             // 0x0198 (size: 0x4)
    float Thickness;                                                                  // 0x019C (size: 0x4)
    int32 Detail;                                                                     // 0x01A0 (size: 0x4)
    FName Space;                                                                      // 0x01A4 (size: 0x8)
    FTransform WorldOffset;                                                           // 0x01B0 (size: 0x60)
    bool bEnabled;                                                                    // 0x0210 (size: 0x1)

}; // Size: 0x220

struct FRigVMFunction_DebugArcNoSpace : public FRigVMFunction_DebugBaseMutable
{
    FTransform Transform;                                                             // 0x0120 (size: 0x60)
    FLinearColor Color;                                                               // 0x0180 (size: 0x10)
    float Radius;                                                                     // 0x0190 (size: 0x4)
    float MinimumDegrees;                                                             // 0x0194 (size: 0x4)
    float MaximumDegrees;                                                             // 0x0198 (size: 0x4)
    float Thickness;                                                                  // 0x019C (size: 0x4)
    int32 Detail;                                                                     // 0x01A0 (size: 0x4)
    FTransform WorldOffset;                                                           // 0x01B0 (size: 0x60)
    bool bEnabled;                                                                    // 0x0210 (size: 0x1)

}; // Size: 0x220

struct FRigVMFunction_DebugBase : public FRigVMStruct
{
}; // Size: 0x8

struct FRigVMFunction_DebugBaseMutable : public FRigVMStructMutable
{
}; // Size: 0x120

struct FRigVMFunction_DebugBoxNoSpace : public FRigVMFunction_DebugBaseMutable
{
    FBox Box;                                                                         // 0x0120 (size: 0x38)
    FLinearColor Color;                                                               // 0x0158 (size: 0x10)
    float Thickness;                                                                  // 0x0168 (size: 0x4)
    FTransform WorldOffset;                                                           // 0x0170 (size: 0x60)
    bool bEnabled;                                                                    // 0x01D0 (size: 0x1)

}; // Size: 0x1E0

struct FRigVMFunction_DebugLineNoSpace : public FRigVMFunction_DebugBaseMutable
{
    FVector A;                                                                        // 0x0120 (size: 0x18)
    FVector B;                                                                        // 0x0138 (size: 0x18)
    FLinearColor Color;                                                               // 0x0150 (size: 0x10)
    float Thickness;                                                                  // 0x0160 (size: 0x4)
    FTransform WorldOffset;                                                           // 0x0170 (size: 0x60)
    bool bEnabled;                                                                    // 0x01D0 (size: 0x1)

}; // Size: 0x1E0

struct FRigVMFunction_DebugLineStripNoSpace : public FRigVMFunction_DebugBaseMutable
{
    TArray<FVector> Points;                                                           // 0x0120 (size: 0x10)
    FLinearColor Color;                                                               // 0x0130 (size: 0x10)
    float Thickness;                                                                  // 0x0140 (size: 0x4)
    FTransform WorldOffset;                                                           // 0x0150 (size: 0x60)
    bool bEnabled;                                                                    // 0x01B0 (size: 0x1)

}; // Size: 0x1C0

struct FRigVMFunction_DebugPoint : public FRigVMFunction_DebugBase
{
    FVector Vector;                                                                   // 0x0008 (size: 0x18)
    ERigUnitDebugPointMode Mode;                                                      // 0x0020 (size: 0x1)
    FLinearColor Color;                                                               // 0x0024 (size: 0x10)
    float scale;                                                                      // 0x0034 (size: 0x4)
    float Thickness;                                                                  // 0x0038 (size: 0x4)
    FName Space;                                                                      // 0x003C (size: 0x8)
    FTransform WorldOffset;                                                           // 0x0050 (size: 0x60)
    bool bEnabled;                                                                    // 0x00B0 (size: 0x1)

}; // Size: 0xC0

struct FRigVMFunction_DebugPointMutable : public FRigVMFunction_DebugBaseMutable
{
    FVector Vector;                                                                   // 0x0120 (size: 0x18)
    ERigUnitDebugPointMode Mode;                                                      // 0x0138 (size: 0x1)
    FLinearColor Color;                                                               // 0x013C (size: 0x10)
    float scale;                                                                      // 0x014C (size: 0x4)
    float Thickness;                                                                  // 0x0150 (size: 0x4)
    FName Space;                                                                      // 0x0154 (size: 0x8)
    FTransform WorldOffset;                                                           // 0x0160 (size: 0x60)
    bool bEnabled;                                                                    // 0x01C0 (size: 0x1)

}; // Size: 0x1D0

struct FRigVMFunction_DebugRectangle : public FRigVMFunction_DebugBaseMutable
{
    FTransform Transform;                                                             // 0x0120 (size: 0x60)
    FLinearColor Color;                                                               // 0x0180 (size: 0x10)
    float scale;                                                                      // 0x0190 (size: 0x4)
    float Thickness;                                                                  // 0x0194 (size: 0x4)
    FName Space;                                                                      // 0x0198 (size: 0x8)
    FTransform WorldOffset;                                                           // 0x01A0 (size: 0x60)
    bool bEnabled;                                                                    // 0x0200 (size: 0x1)

}; // Size: 0x210

struct FRigVMFunction_DebugRectangleNoSpace : public FRigVMFunction_DebugBaseMutable
{
    FTransform Transform;                                                             // 0x0120 (size: 0x60)
    FLinearColor Color;                                                               // 0x0180 (size: 0x10)
    float scale;                                                                      // 0x0190 (size: 0x4)
    float Thickness;                                                                  // 0x0194 (size: 0x4)
    FTransform WorldOffset;                                                           // 0x01A0 (size: 0x60)
    bool bEnabled;                                                                    // 0x0200 (size: 0x1)

}; // Size: 0x210

struct FRigVMFunction_DebugTransformArrayMutableNoSpace : public FRigVMFunction_DebugBaseMutable
{
    TArray<FTransform> Transforms;                                                    // 0x0120 (size: 0x10)
    TArray<int32> ParentIndices;                                                      // 0x0130 (size: 0x10)
    ERigUnitDebugTransformMode Mode;                                                  // 0x0140 (size: 0x1)
    FLinearColor Color;                                                               // 0x0144 (size: 0x10)
    float Thickness;                                                                  // 0x0154 (size: 0x4)
    float scale;                                                                      // 0x0158 (size: 0x4)
    FTransform WorldOffset;                                                           // 0x0160 (size: 0x60)
    bool bEnabled;                                                                    // 0x01C0 (size: 0x1)

}; // Size: 0x1D0

struct FRigVMFunction_DebugTransformArrayMutable_WorkData
{
    TArray<FTransform> DrawTransforms;                                                // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FRigVMFunction_DebugTransformMutableNoSpace : public FRigVMFunction_DebugBaseMutable
{
    FTransform Transform;                                                             // 0x0120 (size: 0x60)
    ERigUnitDebugTransformMode Mode;                                                  // 0x0180 (size: 0x1)
    FLinearColor Color;                                                               // 0x0184 (size: 0x10)
    float Thickness;                                                                  // 0x0194 (size: 0x4)
    float scale;                                                                      // 0x0198 (size: 0x4)
    FTransform WorldOffset;                                                           // 0x01A0 (size: 0x60)
    bool bEnabled;                                                                    // 0x0200 (size: 0x1)

}; // Size: 0x210

struct FRigVMFunction_DeltaFromPreviousFloat : public FRigVMFunction_SimBase
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    float Delta;                                                                      // 0x000C (size: 0x4)
    float PreviousValue;                                                              // 0x0010 (size: 0x4)
    float Cache;                                                                      // 0x0014 (size: 0x4)
    bool bIsInitialized;                                                              // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FRigVMFunction_DeltaFromPreviousQuat : public FRigVMFunction_SimBase
{
    FQuat Value;                                                                      // 0x0010 (size: 0x20)
    FQuat Delta;                                                                      // 0x0030 (size: 0x20)
    FQuat PreviousValue;                                                              // 0x0050 (size: 0x20)
    FQuat Cache;                                                                      // 0x0070 (size: 0x20)
    bool bIsInitialized;                                                              // 0x0090 (size: 0x1)

}; // Size: 0xA0

struct FRigVMFunction_DeltaFromPreviousTransform : public FRigVMFunction_SimBase
{
    FTransform Value;                                                                 // 0x0010 (size: 0x60)
    FTransform Delta;                                                                 // 0x0070 (size: 0x60)
    FTransform PreviousValue;                                                         // 0x00D0 (size: 0x60)
    FTransform Cache;                                                                 // 0x0130 (size: 0x60)
    bool bIsInitialized;                                                              // 0x0190 (size: 0x1)

}; // Size: 0x1A0

struct FRigVMFunction_DeltaFromPreviousVector : public FRigVMFunction_SimBase
{
    FVector Value;                                                                    // 0x0008 (size: 0x18)
    FVector Delta;                                                                    // 0x0020 (size: 0x18)
    FVector PreviousValue;                                                            // 0x0038 (size: 0x18)
    FVector Cache;                                                                    // 0x0050 (size: 0x18)
    bool bIsInitialized;                                                              // 0x0068 (size: 0x1)

}; // Size: 0x70

struct FRigVMFunction_EndsWith : public FRigVMFunction_NameBase
{
    FName Name;                                                                       // 0x0008 (size: 0x8)
    FName Ending;                                                                     // 0x0010 (size: 0x8)
    bool Result;                                                                      // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FRigVMFunction_ForLoopCount : public FRigVMStructMutable
{
    FName BlockToRun;                                                                 // 0x0120 (size: 0x8)
    int32 Count;                                                                      // 0x0128 (size: 0x4)
    int32 Index;                                                                      // 0x012C (size: 0x4)
    float Ratio;                                                                      // 0x0130 (size: 0x4)
    FRigVMExecuteContext Completed;                                                   // 0x0140 (size: 0x110)

}; // Size: 0x250

struct FRigVMFunction_FramesToSeconds : public FRigVMFunction_AnimBase
{
    float Frames;                                                                     // 0x0008 (size: 0x4)
    float Seconds;                                                                    // 0x000C (size: 0x4)

}; // Size: 0x10

struct FRigVMFunction_GetDeltaTime : public FRigVMFunction_AnimBase
{
    float Result;                                                                     // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FRigVMFunction_GetWorldTime : public FRigVMFunction_AnimBase
{
    float Year;                                                                       // 0x0008 (size: 0x4)
    float Month;                                                                      // 0x000C (size: 0x4)
    float day;                                                                        // 0x0010 (size: 0x4)
    float WeekDay;                                                                    // 0x0014 (size: 0x4)
    float Hours;                                                                      // 0x0018 (size: 0x4)
    float Minutes;                                                                    // 0x001C (size: 0x4)
    float Seconds;                                                                    // 0x0020 (size: 0x4)
    float OverallSeconds;                                                             // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FRigVMFunction_IsHostBeingDebugged : public FRigVMStruct
{
    bool Result;                                                                      // 0x0008 (size: 0x1)

}; // Size: 0x10

struct FRigVMFunction_KalmanFloat : public FRigVMFunction_SimBase
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    int32 BufferSize;                                                                 // 0x000C (size: 0x4)
    float Result;                                                                     // 0x0010 (size: 0x4)
    TArray<float> Buffer;                                                             // 0x0018 (size: 0x10)
    int32 LastInsertIndex;                                                            // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FRigVMFunction_KalmanTransform : public FRigVMFunction_SimBase
{
    FTransform Value;                                                                 // 0x0010 (size: 0x60)
    int32 BufferSize;                                                                 // 0x0070 (size: 0x4)
    FTransform Result;                                                                // 0x0080 (size: 0x60)
    TArray<FTransform> Buffer;                                                        // 0x00E0 (size: 0x10)
    int32 LastInsertIndex;                                                            // 0x00F0 (size: 0x4)

}; // Size: 0x100

struct FRigVMFunction_KalmanVector : public FRigVMFunction_SimBase
{
    FVector Value;                                                                    // 0x0008 (size: 0x18)
    int32 BufferSize;                                                                 // 0x0020 (size: 0x4)
    FVector Result;                                                                   // 0x0028 (size: 0x18)
    TArray<FVector> Buffer;                                                           // 0x0040 (size: 0x10)
    int32 LastInsertIndex;                                                            // 0x0050 (size: 0x4)

}; // Size: 0x58

struct FRigVMFunction_MathBase : public FRigVMStruct
{
}; // Size: 0x8

struct FRigVMFunction_MathBoolAnd : public FRigVMFunction_MathBoolBinaryAggregateOp
{
}; // Size: 0x10

struct FRigVMFunction_MathBoolBase : public FRigVMFunction_MathBase
{
}; // Size: 0x8

struct FRigVMFunction_MathBoolBinaryAggregateOp : public FRigVMFunction_MathBoolBase
{
    bool A;                                                                           // 0x0008 (size: 0x1)
    bool B;                                                                           // 0x0009 (size: 0x1)
    bool Result;                                                                      // 0x000A (size: 0x1)

}; // Size: 0x10

struct FRigVMFunction_MathBoolBinaryOp : public FRigVMFunction_MathBoolBase
{
    bool A;                                                                           // 0x0008 (size: 0x1)
    bool B;                                                                           // 0x0009 (size: 0x1)
    bool Result;                                                                      // 0x000A (size: 0x1)

}; // Size: 0x10

struct FRigVMFunction_MathBoolConstFalse : public FRigVMFunction_MathBoolConstant
{
}; // Size: 0x10

struct FRigVMFunction_MathBoolConstTrue : public FRigVMFunction_MathBoolConstant
{
}; // Size: 0x10

struct FRigVMFunction_MathBoolConstant : public FRigVMFunction_MathBoolBase
{
    bool Value;                                                                       // 0x0008 (size: 0x1)

}; // Size: 0x10

struct FRigVMFunction_MathBoolEquals : public FRigVMFunction_MathBoolBase
{
    bool A;                                                                           // 0x0008 (size: 0x1)
    bool B;                                                                           // 0x0009 (size: 0x1)
    bool Result;                                                                      // 0x000A (size: 0x1)

}; // Size: 0x10

struct FRigVMFunction_MathBoolFlipFlop : public FRigVMFunction_MathBoolBase
{
    bool StartValue;                                                                  // 0x0008 (size: 0x1)
    float Duration;                                                                   // 0x000C (size: 0x4)
    bool Result;                                                                      // 0x0010 (size: 0x1)
    bool LastValue;                                                                   // 0x0011 (size: 0x1)
    float TimeLeft;                                                                   // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FRigVMFunction_MathBoolMake : public FRigVMFunction_MathBoolBase
{
    bool Value;                                                                       // 0x0008 (size: 0x1)

}; // Size: 0x10

struct FRigVMFunction_MathBoolNand : public FRigVMFunction_MathBoolBinaryOp
{
}; // Size: 0x10

struct FRigVMFunction_MathBoolNand2 : public FRigVMFunction_MathBoolBinaryOp
{
}; // Size: 0x10

struct FRigVMFunction_MathBoolNot : public FRigVMFunction_MathBoolUnaryOp
{
}; // Size: 0x10

struct FRigVMFunction_MathBoolNotEquals : public FRigVMFunction_MathBoolBase
{
    bool A;                                                                           // 0x0008 (size: 0x1)
    bool B;                                                                           // 0x0009 (size: 0x1)
    bool Result;                                                                      // 0x000A (size: 0x1)

}; // Size: 0x10

struct FRigVMFunction_MathBoolOnce : public FRigVMFunction_MathBoolBase
{
    float Duration;                                                                   // 0x0008 (size: 0x4)
    bool Result;                                                                      // 0x000C (size: 0x1)
    bool LastValue;                                                                   // 0x000D (size: 0x1)
    float TimeLeft;                                                                   // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FRigVMFunction_MathBoolOr : public FRigVMFunction_MathBoolBinaryAggregateOp
{
}; // Size: 0x10

struct FRigVMFunction_MathBoolToFloat : public FRigVMFunction_MathBoolBase
{
    bool Value;                                                                       // 0x0008 (size: 0x1)
    float Result;                                                                     // 0x000C (size: 0x4)

}; // Size: 0x10

struct FRigVMFunction_MathBoolToInteger : public FRigVMFunction_MathBoolBase
{
    bool Value;                                                                       // 0x0008 (size: 0x1)
    int32 Result;                                                                     // 0x000C (size: 0x4)

}; // Size: 0x10

struct FRigVMFunction_MathBoolToggled : public FRigVMFunction_MathBoolBase
{
    bool Value;                                                                       // 0x0008 (size: 0x1)
    bool Toggled;                                                                     // 0x0009 (size: 0x1)
    bool Initialized;                                                                 // 0x000A (size: 0x1)
    bool LastValue;                                                                   // 0x000B (size: 0x1)

}; // Size: 0x10

struct FRigVMFunction_MathBoolUnaryOp : public FRigVMFunction_MathBoolBase
{
    bool Value;                                                                       // 0x0008 (size: 0x1)
    bool Result;                                                                      // 0x0009 (size: 0x1)

}; // Size: 0x10

struct FRigVMFunction_MathBoxBase : public FRigVMFunction_MathBase
{
}; // Size: 0x8

struct FRigVMFunction_MathBoxExpand : public FRigVMFunction_MathBoxBase
{
    FBox Box;                                                                         // 0x0008 (size: 0x38)
    FVector Amount;                                                                   // 0x0040 (size: 0x18)
    FBox Result;                                                                      // 0x0058 (size: 0x38)

}; // Size: 0x90

struct FRigVMFunction_MathBoxFromArray : public FRigVMFunction_MathBoxBase
{
    TArray<FVector> Array;                                                            // 0x0008 (size: 0x10)
    FBox Box;                                                                         // 0x0018 (size: 0x38)
    FVector Minimum;                                                                  // 0x0050 (size: 0x18)
    FVector Maximum;                                                                  // 0x0068 (size: 0x18)
    FVector Center;                                                                   // 0x0080 (size: 0x18)
    FVector Size;                                                                     // 0x0098 (size: 0x18)

}; // Size: 0xB0

struct FRigVMFunction_MathBoxGetCenter : public FRigVMFunction_MathBoxBase
{
    FBox Box;                                                                         // 0x0008 (size: 0x38)
    FVector Center;                                                                   // 0x0040 (size: 0x18)

}; // Size: 0x58

struct FRigVMFunction_MathBoxGetDistance : public FRigVMFunction_MathBoxBase
{
    FBox Box;                                                                         // 0x0008 (size: 0x38)
    FVector position;                                                                 // 0x0040 (size: 0x18)
    bool Square;                                                                      // 0x0058 (size: 0x1)
    bool Valid;                                                                       // 0x0059 (size: 0x1)
    float Distance;                                                                   // 0x005C (size: 0x4)

}; // Size: 0x60

struct FRigVMFunction_MathBoxGetSize : public FRigVMFunction_MathBoxBase
{
    FBox Box;                                                                         // 0x0008 (size: 0x38)
    FVector Size;                                                                     // 0x0040 (size: 0x18)
    FVector Extent;                                                                   // 0x0058 (size: 0x18)

}; // Size: 0x70

struct FRigVMFunction_MathBoxGetVolume : public FRigVMFunction_MathBoxBase
{
    FBox Box;                                                                         // 0x0008 (size: 0x38)
    float Volume;                                                                     // 0x0040 (size: 0x4)

}; // Size: 0x48

struct FRigVMFunction_MathBoxIsInside : public FRigVMFunction_MathBoxBase
{
    FBox Box;                                                                         // 0x0008 (size: 0x38)
    FVector position;                                                                 // 0x0040 (size: 0x18)
    bool Result;                                                                      // 0x0058 (size: 0x1)

}; // Size: 0x60

struct FRigVMFunction_MathBoxIsValid : public FRigVMFunction_MathBoxBase
{
    FBox Box;                                                                         // 0x0008 (size: 0x38)
    bool Valid;                                                                       // 0x0040 (size: 0x1)

}; // Size: 0x48

struct FRigVMFunction_MathBoxMoveTo : public FRigVMFunction_MathBoxBase
{
    FBox Box;                                                                         // 0x0008 (size: 0x38)
    FVector Center;                                                                   // 0x0040 (size: 0x18)
    FBox Result;                                                                      // 0x0058 (size: 0x38)

}; // Size: 0x90

struct FRigVMFunction_MathBoxShift : public FRigVMFunction_MathBoxBase
{
    FBox Box;                                                                         // 0x0008 (size: 0x38)
    FVector Amount;                                                                   // 0x0040 (size: 0x18)
    FBox Result;                                                                      // 0x0058 (size: 0x38)

}; // Size: 0x90

struct FRigVMFunction_MathBoxTransform : public FRigVMFunction_MathBoxBase
{
    FBox Box;                                                                         // 0x0008 (size: 0x38)
    FTransform Transform;                                                             // 0x0040 (size: 0x60)
    FBox Result;                                                                      // 0x00A0 (size: 0x38)

}; // Size: 0xE0

struct FRigVMFunction_MathColorAdd : public FRigVMFunction_MathColorBinaryAggregateOp
{
}; // Size: 0x38

struct FRigVMFunction_MathColorBase : public FRigVMFunction_MathBase
{
}; // Size: 0x8

struct FRigVMFunction_MathColorBinaryAggregateOp : public FRigVMFunction_MathColorBase
{
    FLinearColor A;                                                                   // 0x0008 (size: 0x10)
    FLinearColor B;                                                                   // 0x0018 (size: 0x10)
    FLinearColor Result;                                                              // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FRigVMFunction_MathColorBinaryOp : public FRigVMFunction_MathColorBase
{
    FLinearColor A;                                                                   // 0x0008 (size: 0x10)
    FLinearColor B;                                                                   // 0x0018 (size: 0x10)
    FLinearColor Result;                                                              // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FRigVMFunction_MathColorFromDouble : public FRigVMFunction_MathColorBase
{
    double Value;                                                                     // 0x0008 (size: 0x8)
    FLinearColor Result;                                                              // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FRigVMFunction_MathColorFromFloat : public FRigVMFunction_MathColorBase
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    FLinearColor Result;                                                              // 0x000C (size: 0x10)

}; // Size: 0x20

struct FRigVMFunction_MathColorLerp : public FRigVMFunction_MathColorBase
{
    FLinearColor A;                                                                   // 0x0008 (size: 0x10)
    FLinearColor B;                                                                   // 0x0018 (size: 0x10)
    float T;                                                                          // 0x0028 (size: 0x4)
    FLinearColor Result;                                                              // 0x002C (size: 0x10)

}; // Size: 0x40

struct FRigVMFunction_MathColorMake : public FRigVMFunction_MathColorBase
{
    float R;                                                                          // 0x0008 (size: 0x4)
    float G;                                                                          // 0x000C (size: 0x4)
    float B;                                                                          // 0x0010 (size: 0x4)
    float A;                                                                          // 0x0014 (size: 0x4)
    FLinearColor Result;                                                              // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FRigVMFunction_MathColorMul : public FRigVMFunction_MathColorBinaryAggregateOp
{
}; // Size: 0x38

struct FRigVMFunction_MathColorSub : public FRigVMFunction_MathColorBinaryOp
{
}; // Size: 0x38

struct FRigVMFunction_MathDistanceToPlane : public FRigVMFunction_MathVectorBase
{
    FVector Point;                                                                    // 0x0008 (size: 0x18)
    FVector PlanePoint;                                                               // 0x0020 (size: 0x18)
    FVector PlaneNormal;                                                              // 0x0038 (size: 0x18)
    FVector ClosestPointOnPlane;                                                      // 0x0050 (size: 0x18)
    float SignedDistance;                                                             // 0x0068 (size: 0x4)

}; // Size: 0x70

struct FRigVMFunction_MathDoubleAbs : public FRigVMFunction_MathDoubleUnaryOp
{
}; // Size: 0x18

struct FRigVMFunction_MathDoubleAcos : public FRigVMFunction_MathDoubleUnaryOp
{
}; // Size: 0x18

struct FRigVMFunction_MathDoubleAdd : public FRigVMFunction_MathDoubleBinaryAggregateOp
{
}; // Size: 0x20

struct FRigVMFunction_MathDoubleArrayAverage : public FRigVMFunction_MathDoubleBase
{
    TArray<double> Array;                                                             // 0x0008 (size: 0x10)
    double Average;                                                                   // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FRigVMFunction_MathDoubleArraySum : public FRigVMFunction_MathDoubleBase
{
    TArray<double> Array;                                                             // 0x0008 (size: 0x10)
    double sum;                                                                       // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FRigVMFunction_MathDoubleAsin : public FRigVMFunction_MathDoubleUnaryOp
{
}; // Size: 0x18

struct FRigVMFunction_MathDoubleAtan : public FRigVMFunction_MathDoubleUnaryOp
{
}; // Size: 0x18

struct FRigVMFunction_MathDoubleAtan2 : public FRigVMFunction_MathDoubleBinaryOp
{
}; // Size: 0x20

struct FRigVMFunction_MathDoubleBase : public FRigVMFunction_MathBase
{
}; // Size: 0x8

struct FRigVMFunction_MathDoubleBinaryAggregateOp : public FRigVMFunction_MathDoubleBase
{
    double A;                                                                         // 0x0008 (size: 0x8)
    double B;                                                                         // 0x0010 (size: 0x8)
    double Result;                                                                    // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FRigVMFunction_MathDoubleBinaryOp : public FRigVMFunction_MathDoubleBase
{
    double A;                                                                         // 0x0008 (size: 0x8)
    double B;                                                                         // 0x0010 (size: 0x8)
    double Result;                                                                    // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FRigVMFunction_MathDoubleCeil : public FRigVMFunction_MathDoubleBase
{
    double Value;                                                                     // 0x0008 (size: 0x8)
    double Result;                                                                    // 0x0010 (size: 0x8)
    int32 int;                                                                        // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FRigVMFunction_MathDoubleClamp : public FRigVMFunction_MathDoubleBase
{
    double Value;                                                                     // 0x0008 (size: 0x8)
    double Minimum;                                                                   // 0x0010 (size: 0x8)
    double Maximum;                                                                   // 0x0018 (size: 0x8)
    double Result;                                                                    // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FRigVMFunction_MathDoubleConstE : public FRigVMFunction_MathDoubleConstant
{
}; // Size: 0x10

struct FRigVMFunction_MathDoubleConstHalfPi : public FRigVMFunction_MathDoubleConstant
{
}; // Size: 0x10

struct FRigVMFunction_MathDoubleConstPi : public FRigVMFunction_MathDoubleConstant
{
}; // Size: 0x10

struct FRigVMFunction_MathDoubleConstTwoPi : public FRigVMFunction_MathDoubleConstant
{
}; // Size: 0x10

struct FRigVMFunction_MathDoubleConstant : public FRigVMFunction_MathDoubleBase
{
    double Value;                                                                     // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FRigVMFunction_MathDoubleCos : public FRigVMFunction_MathDoubleUnaryOp
{
}; // Size: 0x18

struct FRigVMFunction_MathDoubleDeg : public FRigVMFunction_MathDoubleUnaryOp
{
}; // Size: 0x18

struct FRigVMFunction_MathDoubleDiv : public FRigVMFunction_MathDoubleBinaryOp
{
}; // Size: 0x20

struct FRigVMFunction_MathDoubleEquals : public FRigVMFunction_MathDoubleBase
{
    double A;                                                                         // 0x0008 (size: 0x8)
    double B;                                                                         // 0x0010 (size: 0x8)
    bool Result;                                                                      // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FRigVMFunction_MathDoubleExponential : public FRigVMFunction_MathDoubleUnaryOp
{
}; // Size: 0x18

struct FRigVMFunction_MathDoubleFloor : public FRigVMFunction_MathDoubleBase
{
    double Value;                                                                     // 0x0008 (size: 0x8)
    double Result;                                                                    // 0x0010 (size: 0x8)
    int32 int;                                                                        // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FRigVMFunction_MathDoubleGreater : public FRigVMFunction_MathDoubleBase
{
    double A;                                                                         // 0x0008 (size: 0x8)
    double B;                                                                         // 0x0010 (size: 0x8)
    bool Result;                                                                      // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FRigVMFunction_MathDoubleGreaterEqual : public FRigVMFunction_MathDoubleBase
{
    double A;                                                                         // 0x0008 (size: 0x8)
    double B;                                                                         // 0x0010 (size: 0x8)
    bool Result;                                                                      // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FRigVMFunction_MathDoubleIsNearlyEqual : public FRigVMFunction_MathDoubleBase
{
    double A;                                                                         // 0x0008 (size: 0x8)
    double B;                                                                         // 0x0010 (size: 0x8)
    double Tolerance;                                                                 // 0x0018 (size: 0x8)
    bool Result;                                                                      // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FRigVMFunction_MathDoubleIsNearlyZero : public FRigVMFunction_MathDoubleBase
{
    double Value;                                                                     // 0x0008 (size: 0x8)
    double Tolerance;                                                                 // 0x0010 (size: 0x8)
    bool Result;                                                                      // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FRigVMFunction_MathDoubleLawOfCosine : public FRigVMFunction_MathDoubleBase
{
    double A;                                                                         // 0x0008 (size: 0x8)
    double B;                                                                         // 0x0010 (size: 0x8)
    double C;                                                                         // 0x0018 (size: 0x8)
    double AlphaAngle;                                                                // 0x0020 (size: 0x8)
    double BetaAngle;                                                                 // 0x0028 (size: 0x8)
    double GammaAngle;                                                                // 0x0030 (size: 0x8)
    bool bValid;                                                                      // 0x0038 (size: 0x1)

}; // Size: 0x40

struct FRigVMFunction_MathDoubleLerp : public FRigVMFunction_MathDoubleBase
{
    double A;                                                                         // 0x0008 (size: 0x8)
    double B;                                                                         // 0x0010 (size: 0x8)
    double T;                                                                         // 0x0018 (size: 0x8)
    double Result;                                                                    // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FRigVMFunction_MathDoubleLess : public FRigVMFunction_MathDoubleBase
{
    double A;                                                                         // 0x0008 (size: 0x8)
    double B;                                                                         // 0x0010 (size: 0x8)
    bool Result;                                                                      // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FRigVMFunction_MathDoubleLessEqual : public FRigVMFunction_MathDoubleBase
{
    double A;                                                                         // 0x0008 (size: 0x8)
    double B;                                                                         // 0x0010 (size: 0x8)
    bool Result;                                                                      // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FRigVMFunction_MathDoubleMake : public FRigVMFunction_MathDoubleBase
{
    double Value;                                                                     // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FRigVMFunction_MathDoubleMax : public FRigVMFunction_MathDoubleBinaryAggregateOp
{
}; // Size: 0x20

struct FRigVMFunction_MathDoubleMin : public FRigVMFunction_MathDoubleBinaryAggregateOp
{
}; // Size: 0x20

struct FRigVMFunction_MathDoubleMod : public FRigVMFunction_MathDoubleBinaryOp
{
}; // Size: 0x20

struct FRigVMFunction_MathDoubleMul : public FRigVMFunction_MathDoubleBinaryAggregateOp
{
}; // Size: 0x20

struct FRigVMFunction_MathDoubleNegate : public FRigVMFunction_MathDoubleUnaryOp
{
}; // Size: 0x18

struct FRigVMFunction_MathDoubleNotEquals : public FRigVMFunction_MathDoubleBase
{
    double A;                                                                         // 0x0008 (size: 0x8)
    double B;                                                                         // 0x0010 (size: 0x8)
    bool Result;                                                                      // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FRigVMFunction_MathDoublePow : public FRigVMFunction_MathDoubleBinaryOp
{
}; // Size: 0x20

struct FRigVMFunction_MathDoubleRad : public FRigVMFunction_MathDoubleUnaryOp
{
}; // Size: 0x18

struct FRigVMFunction_MathDoubleRemap : public FRigVMFunction_MathDoubleBase
{
    double Value;                                                                     // 0x0008 (size: 0x8)
    double SourceMinimum;                                                             // 0x0010 (size: 0x8)
    double SourceMaximum;                                                             // 0x0018 (size: 0x8)
    double TargetMinimum;                                                             // 0x0020 (size: 0x8)
    double TargetMaximum;                                                             // 0x0028 (size: 0x8)
    bool bClamp;                                                                      // 0x0030 (size: 0x1)
    double Result;                                                                    // 0x0038 (size: 0x8)

}; // Size: 0x40

struct FRigVMFunction_MathDoubleRound : public FRigVMFunction_MathDoubleBase
{
    double Value;                                                                     // 0x0008 (size: 0x8)
    double Result;                                                                    // 0x0010 (size: 0x8)
    int32 int;                                                                        // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FRigVMFunction_MathDoubleSign : public FRigVMFunction_MathDoubleUnaryOp
{
}; // Size: 0x18

struct FRigVMFunction_MathDoubleSin : public FRigVMFunction_MathDoubleUnaryOp
{
}; // Size: 0x18

struct FRigVMFunction_MathDoubleSqrt : public FRigVMFunction_MathDoubleUnaryOp
{
}; // Size: 0x18

struct FRigVMFunction_MathDoubleSub : public FRigVMFunction_MathDoubleBinaryOp
{
}; // Size: 0x20

struct FRigVMFunction_MathDoubleTan : public FRigVMFunction_MathDoubleUnaryOp
{
}; // Size: 0x18

struct FRigVMFunction_MathDoubleToFloat : public FRigVMFunction_MathDoubleBase
{
    double Value;                                                                     // 0x0008 (size: 0x8)
    float Result;                                                                     // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FRigVMFunction_MathDoubleToInt : public FRigVMFunction_MathDoubleBase
{
    double Value;                                                                     // 0x0008 (size: 0x8)
    int32 Result;                                                                     // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FRigVMFunction_MathDoubleUnaryOp : public FRigVMFunction_MathDoubleBase
{
    double Value;                                                                     // 0x0008 (size: 0x8)
    double Result;                                                                    // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FRigVMFunction_MathFloatAbs : public FRigVMFunction_MathFloatUnaryOp
{
}; // Size: 0x10

struct FRigVMFunction_MathFloatAcos : public FRigVMFunction_MathFloatUnaryOp
{
}; // Size: 0x10

struct FRigVMFunction_MathFloatAdd : public FRigVMFunction_MathFloatBinaryAggregateOp
{
}; // Size: 0x18

struct FRigVMFunction_MathFloatArrayAverage : public FRigVMFunction_MathFloatBase
{
    TArray<float> Array;                                                              // 0x0008 (size: 0x10)
    float Average;                                                                    // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FRigVMFunction_MathFloatArraySum : public FRigVMFunction_MathFloatBase
{
    TArray<float> Array;                                                              // 0x0008 (size: 0x10)
    float sum;                                                                        // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FRigVMFunction_MathFloatAsin : public FRigVMFunction_MathFloatUnaryOp
{
}; // Size: 0x10

struct FRigVMFunction_MathFloatAtan : public FRigVMFunction_MathFloatUnaryOp
{
}; // Size: 0x10

struct FRigVMFunction_MathFloatAtan2 : public FRigVMFunction_MathFloatBinaryOp
{
}; // Size: 0x18

struct FRigVMFunction_MathFloatBase : public FRigVMFunction_MathBase
{
}; // Size: 0x8

struct FRigVMFunction_MathFloatBinaryAggregateOp : public FRigVMFunction_MathFloatBase
{
    float A;                                                                          // 0x0008 (size: 0x4)
    float B;                                                                          // 0x000C (size: 0x4)
    float Result;                                                                     // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FRigVMFunction_MathFloatBinaryOp : public FRigVMFunction_MathFloatBase
{
    float A;                                                                          // 0x0008 (size: 0x4)
    float B;                                                                          // 0x000C (size: 0x4)
    float Result;                                                                     // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FRigVMFunction_MathFloatCeil : public FRigVMFunction_MathFloatBase
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    float Result;                                                                     // 0x000C (size: 0x4)
    int32 int;                                                                        // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FRigVMFunction_MathFloatClamp : public FRigVMFunction_MathFloatBase
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    float Minimum;                                                                    // 0x000C (size: 0x4)
    float Maximum;                                                                    // 0x0010 (size: 0x4)
    float Result;                                                                     // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FRigVMFunction_MathFloatConstE : public FRigVMFunction_MathFloatConstant
{
}; // Size: 0x10

struct FRigVMFunction_MathFloatConstHalfPi : public FRigVMFunction_MathFloatConstant
{
}; // Size: 0x10

struct FRigVMFunction_MathFloatConstPi : public FRigVMFunction_MathFloatConstant
{
}; // Size: 0x10

struct FRigVMFunction_MathFloatConstTwoPi : public FRigVMFunction_MathFloatConstant
{
}; // Size: 0x10

struct FRigVMFunction_MathFloatConstant : public FRigVMFunction_MathFloatBase
{
    float Value;                                                                      // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FRigVMFunction_MathFloatCos : public FRigVMFunction_MathFloatUnaryOp
{
}; // Size: 0x10

struct FRigVMFunction_MathFloatDeg : public FRigVMFunction_MathFloatUnaryOp
{
}; // Size: 0x10

struct FRigVMFunction_MathFloatDiv : public FRigVMFunction_MathFloatBinaryOp
{
}; // Size: 0x18

struct FRigVMFunction_MathFloatEquals : public FRigVMFunction_MathFloatBase
{
    float A;                                                                          // 0x0008 (size: 0x4)
    float B;                                                                          // 0x000C (size: 0x4)
    bool Result;                                                                      // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FRigVMFunction_MathFloatExponential : public FRigVMFunction_MathFloatUnaryOp
{
}; // Size: 0x10

struct FRigVMFunction_MathFloatFloor : public FRigVMFunction_MathFloatBase
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    float Result;                                                                     // 0x000C (size: 0x4)
    int32 int;                                                                        // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FRigVMFunction_MathFloatGreater : public FRigVMFunction_MathFloatBase
{
    float A;                                                                          // 0x0008 (size: 0x4)
    float B;                                                                          // 0x000C (size: 0x4)
    bool Result;                                                                      // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FRigVMFunction_MathFloatGreaterEqual : public FRigVMFunction_MathFloatBase
{
    float A;                                                                          // 0x0008 (size: 0x4)
    float B;                                                                          // 0x000C (size: 0x4)
    bool Result;                                                                      // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FRigVMFunction_MathFloatIsNearlyEqual : public FRigVMFunction_MathFloatBase
{
    float A;                                                                          // 0x0008 (size: 0x4)
    float B;                                                                          // 0x000C (size: 0x4)
    float Tolerance;                                                                  // 0x0010 (size: 0x4)
    bool Result;                                                                      // 0x0014 (size: 0x1)

}; // Size: 0x18

struct FRigVMFunction_MathFloatIsNearlyZero : public FRigVMFunction_MathFloatBase
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    float Tolerance;                                                                  // 0x000C (size: 0x4)
    bool Result;                                                                      // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FRigVMFunction_MathFloatLawOfCosine : public FRigVMFunction_MathFloatBase
{
    float A;                                                                          // 0x0008 (size: 0x4)
    float B;                                                                          // 0x000C (size: 0x4)
    float C;                                                                          // 0x0010 (size: 0x4)
    float AlphaAngle;                                                                 // 0x0014 (size: 0x4)
    float BetaAngle;                                                                  // 0x0018 (size: 0x4)
    float GammaAngle;                                                                 // 0x001C (size: 0x4)
    bool bValid;                                                                      // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FRigVMFunction_MathFloatLerp : public FRigVMFunction_MathFloatBase
{
    float A;                                                                          // 0x0008 (size: 0x4)
    float B;                                                                          // 0x000C (size: 0x4)
    float T;                                                                          // 0x0010 (size: 0x4)
    float Result;                                                                     // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FRigVMFunction_MathFloatLess : public FRigVMFunction_MathFloatBase
{
    float A;                                                                          // 0x0008 (size: 0x4)
    float B;                                                                          // 0x000C (size: 0x4)
    bool Result;                                                                      // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FRigVMFunction_MathFloatLessEqual : public FRigVMFunction_MathFloatBase
{
    float A;                                                                          // 0x0008 (size: 0x4)
    float B;                                                                          // 0x000C (size: 0x4)
    bool Result;                                                                      // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FRigVMFunction_MathFloatMake : public FRigVMFunction_MathFloatBase
{
    float Value;                                                                      // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FRigVMFunction_MathFloatMax : public FRigVMFunction_MathFloatBinaryAggregateOp
{
}; // Size: 0x18

struct FRigVMFunction_MathFloatMin : public FRigVMFunction_MathFloatBinaryAggregateOp
{
}; // Size: 0x18

struct FRigVMFunction_MathFloatMod : public FRigVMFunction_MathFloatBinaryOp
{
}; // Size: 0x18

struct FRigVMFunction_MathFloatMul : public FRigVMFunction_MathFloatBinaryAggregateOp
{
}; // Size: 0x18

struct FRigVMFunction_MathFloatNegate : public FRigVMFunction_MathFloatUnaryOp
{
}; // Size: 0x10

struct FRigVMFunction_MathFloatNotEquals : public FRigVMFunction_MathFloatBase
{
    float A;                                                                          // 0x0008 (size: 0x4)
    float B;                                                                          // 0x000C (size: 0x4)
    bool Result;                                                                      // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FRigVMFunction_MathFloatPow : public FRigVMFunction_MathFloatBinaryOp
{
}; // Size: 0x18

struct FRigVMFunction_MathFloatRad : public FRigVMFunction_MathFloatUnaryOp
{
}; // Size: 0x10

struct FRigVMFunction_MathFloatRemap : public FRigVMFunction_MathFloatBase
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    float SourceMinimum;                                                              // 0x000C (size: 0x4)
    float SourceMaximum;                                                              // 0x0010 (size: 0x4)
    float TargetMinimum;                                                              // 0x0014 (size: 0x4)
    float TargetMaximum;                                                              // 0x0018 (size: 0x4)
    bool bClamp;                                                                      // 0x001C (size: 0x1)
    float Result;                                                                     // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FRigVMFunction_MathFloatRound : public FRigVMFunction_MathFloatBase
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    float Result;                                                                     // 0x000C (size: 0x4)
    int32 int;                                                                        // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FRigVMFunction_MathFloatSelectBool : public FRigVMFunction_MathFloatBase
{
    bool Condition;                                                                   // 0x0008 (size: 0x1)
    float IfTrue;                                                                     // 0x000C (size: 0x4)
    float IfFalse;                                                                    // 0x0010 (size: 0x4)
    float Result;                                                                     // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FRigVMFunction_MathFloatSign : public FRigVMFunction_MathFloatUnaryOp
{
}; // Size: 0x10

struct FRigVMFunction_MathFloatSin : public FRigVMFunction_MathFloatUnaryOp
{
}; // Size: 0x10

struct FRigVMFunction_MathFloatSqrt : public FRigVMFunction_MathFloatUnaryOp
{
}; // Size: 0x10

struct FRigVMFunction_MathFloatSub : public FRigVMFunction_MathFloatBinaryOp
{
}; // Size: 0x18

struct FRigVMFunction_MathFloatTan : public FRigVMFunction_MathFloatUnaryOp
{
}; // Size: 0x10

struct FRigVMFunction_MathFloatToDouble : public FRigVMFunction_MathFloatBase
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    double Result;                                                                    // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FRigVMFunction_MathFloatToInt : public FRigVMFunction_MathFloatBase
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    int32 Result;                                                                     // 0x000C (size: 0x4)

}; // Size: 0x10

struct FRigVMFunction_MathFloatUnaryOp : public FRigVMFunction_MathFloatBase
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    float Result;                                                                     // 0x000C (size: 0x4)

}; // Size: 0x10

struct FRigVMFunction_MathIntAbs : public FRigVMFunction_MathIntUnaryOp
{
}; // Size: 0x10

struct FRigVMFunction_MathIntAdd : public FRigVMFunction_MathIntBinaryAggregateOp
{
}; // Size: 0x18

struct FRigVMFunction_MathIntArrayAverage : public FRigVMFunction_MathIntBase
{
    TArray<int32> Array;                                                              // 0x0008 (size: 0x10)
    int32 Average;                                                                    // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FRigVMFunction_MathIntArraySum : public FRigVMFunction_MathIntBase
{
    TArray<int32> Array;                                                              // 0x0008 (size: 0x10)
    int32 sum;                                                                        // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FRigVMFunction_MathIntBase : public FRigVMFunction_MathBase
{
}; // Size: 0x8

struct FRigVMFunction_MathIntBinaryAggregateOp : public FRigVMFunction_MathIntBase
{
    int32 A;                                                                          // 0x0008 (size: 0x4)
    int32 B;                                                                          // 0x000C (size: 0x4)
    int32 Result;                                                                     // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FRigVMFunction_MathIntBinaryOp : public FRigVMFunction_MathIntBase
{
    int32 A;                                                                          // 0x0008 (size: 0x4)
    int32 B;                                                                          // 0x000C (size: 0x4)
    int32 Result;                                                                     // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FRigVMFunction_MathIntClamp : public FRigVMFunction_MathIntBase
{
    int32 Value;                                                                      // 0x0008 (size: 0x4)
    int32 Minimum;                                                                    // 0x000C (size: 0x4)
    int32 Maximum;                                                                    // 0x0010 (size: 0x4)
    int32 Result;                                                                     // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FRigVMFunction_MathIntDiv : public FRigVMFunction_MathIntBinaryOp
{
}; // Size: 0x18

struct FRigVMFunction_MathIntEquals : public FRigVMFunction_MathIntBase
{
    int32 A;                                                                          // 0x0008 (size: 0x4)
    int32 B;                                                                          // 0x000C (size: 0x4)
    bool Result;                                                                      // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FRigVMFunction_MathIntGreater : public FRigVMFunction_MathIntBase
{
    int32 A;                                                                          // 0x0008 (size: 0x4)
    int32 B;                                                                          // 0x000C (size: 0x4)
    bool Result;                                                                      // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FRigVMFunction_MathIntGreaterEqual : public FRigVMFunction_MathIntBase
{
    int32 A;                                                                          // 0x0008 (size: 0x4)
    int32 B;                                                                          // 0x000C (size: 0x4)
    bool Result;                                                                      // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FRigVMFunction_MathIntLess : public FRigVMFunction_MathIntBase
{
    int32 A;                                                                          // 0x0008 (size: 0x4)
    int32 B;                                                                          // 0x000C (size: 0x4)
    bool Result;                                                                      // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FRigVMFunction_MathIntLessEqual : public FRigVMFunction_MathIntBase
{
    int32 A;                                                                          // 0x0008 (size: 0x4)
    int32 B;                                                                          // 0x000C (size: 0x4)
    bool Result;                                                                      // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FRigVMFunction_MathIntMake : public FRigVMFunction_MathIntBase
{
    int32 Value;                                                                      // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FRigVMFunction_MathIntMax : public FRigVMFunction_MathIntBinaryAggregateOp
{
}; // Size: 0x18

struct FRigVMFunction_MathIntMin : public FRigVMFunction_MathIntBinaryAggregateOp
{
}; // Size: 0x18

struct FRigVMFunction_MathIntMod : public FRigVMFunction_MathIntBinaryOp
{
}; // Size: 0x18

struct FRigVMFunction_MathIntMul : public FRigVMFunction_MathIntBinaryAggregateOp
{
}; // Size: 0x18

struct FRigVMFunction_MathIntNegate : public FRigVMFunction_MathIntUnaryOp
{
}; // Size: 0x10

struct FRigVMFunction_MathIntNotEquals : public FRigVMFunction_MathIntBase
{
    int32 A;                                                                          // 0x0008 (size: 0x4)
    int32 B;                                                                          // 0x000C (size: 0x4)
    bool Result;                                                                      // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FRigVMFunction_MathIntPow : public FRigVMFunction_MathIntBinaryOp
{
}; // Size: 0x18

struct FRigVMFunction_MathIntSign : public FRigVMFunction_MathIntUnaryOp
{
}; // Size: 0x10

struct FRigVMFunction_MathIntSub : public FRigVMFunction_MathIntBinaryOp
{
}; // Size: 0x18

struct FRigVMFunction_MathIntToDouble : public FRigVMFunction_MathIntBase
{
    int32 Value;                                                                      // 0x0008 (size: 0x4)
    double Result;                                                                    // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FRigVMFunction_MathIntToFloat : public FRigVMFunction_MathIntBase
{
    int32 Value;                                                                      // 0x0008 (size: 0x4)
    float Result;                                                                     // 0x000C (size: 0x4)

}; // Size: 0x10

struct FRigVMFunction_MathIntToName : public FRigVMFunction_MathIntBase
{
    int32 Number;                                                                     // 0x0008 (size: 0x4)
    int32 PaddedSize;                                                                 // 0x000C (size: 0x4)
    FName Result;                                                                     // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FRigVMFunction_MathIntToString : public FRigVMFunction_MathIntBase
{
    int32 Number;                                                                     // 0x0008 (size: 0x4)
    int32 PaddedSize;                                                                 // 0x000C (size: 0x4)
    FString Result;                                                                   // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FRigVMFunction_MathIntUnaryOp : public FRigVMFunction_MathIntBase
{
    int32 Value;                                                                      // 0x0008 (size: 0x4)
    int32 Result;                                                                     // 0x000C (size: 0x4)

}; // Size: 0x10

struct FRigVMFunction_MathIntersectPlane : public FRigVMFunction_MathVectorBase
{
    FVector Start;                                                                    // 0x0008 (size: 0x18)
    FVector Direction;                                                                // 0x0020 (size: 0x18)
    FVector PlanePoint;                                                               // 0x0038 (size: 0x18)
    FVector PlaneNormal;                                                              // 0x0050 (size: 0x18)
    FVector Result;                                                                   // 0x0068 (size: 0x18)
    float Distance;                                                                   // 0x0080 (size: 0x4)

}; // Size: 0x88

struct FRigVMFunction_MathMatrixBase : public FRigVMFunction_MathBase
{
}; // Size: 0x8

struct FRigVMFunction_MathMatrixBinaryAggregateOp : public FRigVMFunction_MathMatrixBase
{
    FMatrix A;                                                                        // 0x0010 (size: 0x80)
    FMatrix B;                                                                        // 0x0090 (size: 0x80)
    FMatrix Result;                                                                   // 0x0110 (size: 0x80)

}; // Size: 0x190

struct FRigVMFunction_MathMatrixBinaryOp : public FRigVMFunction_MathMatrixBase
{
    FMatrix A;                                                                        // 0x0010 (size: 0x80)
    FMatrix B;                                                                        // 0x0090 (size: 0x80)
    FMatrix Result;                                                                   // 0x0110 (size: 0x80)

}; // Size: 0x190

struct FRigVMFunction_MathMatrixFromTransform : public FRigVMFunction_MathMatrixBase
{
    FTransform Transform;                                                             // 0x0010 (size: 0x60)
    FMatrix Result;                                                                   // 0x0070 (size: 0x80)

}; // Size: 0xF0

struct FRigVMFunction_MathMatrixFromTransformV2 : public FRigVMFunction_MathMatrixBase
{
    FTransform Value;                                                                 // 0x0010 (size: 0x60)
    FMatrix Result;                                                                   // 0x0070 (size: 0x80)

}; // Size: 0xF0

struct FRigVMFunction_MathMatrixFromVectors : public FRigVMFunction_MathMatrixBase
{
    FVector Origin;                                                                   // 0x0008 (size: 0x18)
    FVector X;                                                                        // 0x0020 (size: 0x18)
    FVector Y;                                                                        // 0x0038 (size: 0x18)
    FVector Z;                                                                        // 0x0050 (size: 0x18)
    FMatrix Result;                                                                   // 0x0070 (size: 0x80)

}; // Size: 0xF0

struct FRigVMFunction_MathMatrixInverse : public FRigVMFunction_MathMatrixUnaryOp
{
}; // Size: 0x110

struct FRigVMFunction_MathMatrixMul : public FRigVMFunction_MathMatrixBinaryAggregateOp
{
}; // Size: 0x190

struct FRigVMFunction_MathMatrixToTransform : public FRigVMFunction_MathMatrixBase
{
    FMatrix Value;                                                                    // 0x0010 (size: 0x80)
    FTransform Result;                                                                // 0x0090 (size: 0x60)

}; // Size: 0xF0

struct FRigVMFunction_MathMatrixToVectors : public FRigVMFunction_MathMatrixBase
{
    FMatrix Value;                                                                    // 0x0010 (size: 0x80)
    FVector Origin;                                                                   // 0x0090 (size: 0x18)
    FVector X;                                                                        // 0x00A8 (size: 0x18)
    FVector Y;                                                                        // 0x00C0 (size: 0x18)
    FVector Z;                                                                        // 0x00D8 (size: 0x18)

}; // Size: 0xF0

struct FRigVMFunction_MathMatrixUnaryOp : public FRigVMFunction_MathMatrixBase
{
    FMatrix Value;                                                                    // 0x0010 (size: 0x80)
    FMatrix Result;                                                                   // 0x0090 (size: 0x80)

}; // Size: 0x110

struct FRigVMFunction_MathMutableBase : public FRigVMStructMutable
{
}; // Size: 0x120

struct FRigVMFunction_MathQuaternionBase : public FRigVMFunction_MathBase
{
}; // Size: 0x8

struct FRigVMFunction_MathQuaternionBinaryAggregateOp : public FRigVMFunction_MathQuaternionBase
{
    FQuat A;                                                                          // 0x0010 (size: 0x20)
    FQuat B;                                                                          // 0x0030 (size: 0x20)
    FQuat Result;                                                                     // 0x0050 (size: 0x20)

}; // Size: 0x70

struct FRigVMFunction_MathQuaternionBinaryOp : public FRigVMFunction_MathQuaternionBase
{
    FQuat A;                                                                          // 0x0010 (size: 0x20)
    FQuat B;                                                                          // 0x0030 (size: 0x20)
    FQuat Result;                                                                     // 0x0050 (size: 0x20)

}; // Size: 0x70

struct FRigVMFunction_MathQuaternionDot : public FRigVMFunction_MathQuaternionBase
{
    FQuat A;                                                                          // 0x0010 (size: 0x20)
    FQuat B;                                                                          // 0x0030 (size: 0x20)
    float Result;                                                                     // 0x0050 (size: 0x4)

}; // Size: 0x60

struct FRigVMFunction_MathQuaternionEquals : public FRigVMFunction_MathQuaternionBase
{
    FQuat A;                                                                          // 0x0010 (size: 0x20)
    FQuat B;                                                                          // 0x0030 (size: 0x20)
    bool Result;                                                                      // 0x0050 (size: 0x1)

}; // Size: 0x60

struct FRigVMFunction_MathQuaternionFromAxisAndAngle : public FRigVMFunction_MathQuaternionBase
{
    FVector Axis;                                                                     // 0x0008 (size: 0x18)
    float Angle;                                                                      // 0x0020 (size: 0x4)
    FQuat Result;                                                                     // 0x0030 (size: 0x20)

}; // Size: 0x50

struct FRigVMFunction_MathQuaternionFromEuler : public FRigVMFunction_MathQuaternionBase
{
    FVector Euler;                                                                    // 0x0008 (size: 0x18)
    EEulerRotationOrder RotationOrder;                                                // 0x0020 (size: 0x1)
    FQuat Result;                                                                     // 0x0030 (size: 0x20)

}; // Size: 0x50

struct FRigVMFunction_MathQuaternionFromRotator : public FRigVMFunction_MathQuaternionBase
{
    FRotator Rotator;                                                                 // 0x0008 (size: 0x18)
    FQuat Result;                                                                     // 0x0020 (size: 0x20)

}; // Size: 0x40

struct FRigVMFunction_MathQuaternionFromRotatorV2 : public FRigVMFunction_MathQuaternionBase
{
    FRotator Value;                                                                   // 0x0008 (size: 0x18)
    FQuat Result;                                                                     // 0x0020 (size: 0x20)

}; // Size: 0x40

struct FRigVMFunction_MathQuaternionFromTwoVectors : public FRigVMFunction_MathQuaternionBase
{
    FVector A;                                                                        // 0x0008 (size: 0x18)
    FVector B;                                                                        // 0x0020 (size: 0x18)
    FQuat Result;                                                                     // 0x0040 (size: 0x20)

}; // Size: 0x60

struct FRigVMFunction_MathQuaternionGetAxis : public FRigVMFunction_MathQuaternionBase
{
    FQuat Quaternion;                                                                 // 0x0010 (size: 0x20)
    TEnumAsByte<EAxis::Type> Axis;                                                    // 0x0030 (size: 0x1)
    FVector Result;                                                                   // 0x0038 (size: 0x18)

}; // Size: 0x50

struct FRigVMFunction_MathQuaternionInverse : public FRigVMFunction_MathQuaternionUnaryOp
{
}; // Size: 0x50

struct FRigVMFunction_MathQuaternionMake : public FRigVMFunction_MathQuaternionBase
{
    float X;                                                                          // 0x0008 (size: 0x4)
    float Y;                                                                          // 0x000C (size: 0x4)
    float Z;                                                                          // 0x0010 (size: 0x4)
    float W;                                                                          // 0x0014 (size: 0x4)
    FQuat Result;                                                                     // 0x0020 (size: 0x20)

}; // Size: 0x40

struct FRigVMFunction_MathQuaternionMakeAbsolute : public FRigVMFunction_MathQuaternionBase
{
    FQuat Local;                                                                      // 0x0010 (size: 0x20)
    FQuat Parent;                                                                     // 0x0030 (size: 0x20)
    FQuat Global;                                                                     // 0x0050 (size: 0x20)

}; // Size: 0x70

struct FRigVMFunction_MathQuaternionMakeRelative : public FRigVMFunction_MathQuaternionBase
{
    FQuat Global;                                                                     // 0x0010 (size: 0x20)
    FQuat Parent;                                                                     // 0x0030 (size: 0x20)
    FQuat Local;                                                                      // 0x0050 (size: 0x20)

}; // Size: 0x70

struct FRigVMFunction_MathQuaternionMirrorTransform : public FRigVMFunction_MathQuaternionBase
{
    FQuat Value;                                                                      // 0x0010 (size: 0x20)
    TEnumAsByte<EAxis::Type> MirrorAxis;                                              // 0x0030 (size: 0x1)
    TEnumAsByte<EAxis::Type> AxisToFlip;                                              // 0x0031 (size: 0x1)
    FTransform CentralTransform;                                                      // 0x0040 (size: 0x60)
    FQuat Result;                                                                     // 0x00A0 (size: 0x20)

}; // Size: 0xC0

struct FRigVMFunction_MathQuaternionMul : public FRigVMFunction_MathQuaternionBinaryAggregateOp
{
}; // Size: 0x70

struct FRigVMFunction_MathQuaternionNotEquals : public FRigVMFunction_MathQuaternionBase
{
    FQuat A;                                                                          // 0x0010 (size: 0x20)
    FQuat B;                                                                          // 0x0030 (size: 0x20)
    bool Result;                                                                      // 0x0050 (size: 0x1)

}; // Size: 0x60

struct FRigVMFunction_MathQuaternionRotateVector : public FRigVMFunction_MathQuaternionBase
{
    FQuat Transform;                                                                  // 0x0010 (size: 0x20)
    FVector Vector;                                                                   // 0x0030 (size: 0x18)
    FVector Result;                                                                   // 0x0048 (size: 0x18)

}; // Size: 0x60

struct FRigVMFunction_MathQuaternionRotationOrder : public FRigVMFunction_MathBase
{
    EEulerRotationOrder RotationOrder;                                                // 0x0008 (size: 0x1)

}; // Size: 0x10

struct FRigVMFunction_MathQuaternionScale : public FRigVMFunction_MathQuaternionBase
{
    FQuat Value;                                                                      // 0x0010 (size: 0x20)
    float scale;                                                                      // 0x0030 (size: 0x4)

}; // Size: 0x40

struct FRigVMFunction_MathQuaternionScaleV2 : public FRigVMFunction_MathQuaternionBase
{
    FQuat Value;                                                                      // 0x0010 (size: 0x20)
    float Factor;                                                                     // 0x0030 (size: 0x4)
    FQuat Result;                                                                     // 0x0040 (size: 0x20)

}; // Size: 0x60

struct FRigVMFunction_MathQuaternionSelectBool : public FRigVMFunction_MathQuaternionBase
{
    bool Condition;                                                                   // 0x0008 (size: 0x1)
    FQuat IfTrue;                                                                     // 0x0010 (size: 0x20)
    FQuat IfFalse;                                                                    // 0x0030 (size: 0x20)
    FQuat Result;                                                                     // 0x0050 (size: 0x20)

}; // Size: 0x70

struct FRigVMFunction_MathQuaternionSlerp : public FRigVMFunction_MathQuaternionBase
{
    FQuat A;                                                                          // 0x0010 (size: 0x20)
    FQuat B;                                                                          // 0x0030 (size: 0x20)
    float T;                                                                          // 0x0050 (size: 0x4)
    FQuat Result;                                                                     // 0x0060 (size: 0x20)

}; // Size: 0x80

struct FRigVMFunction_MathQuaternionSwingTwist : public FRigVMFunction_MathQuaternionBase
{
    FQuat Input;                                                                      // 0x0010 (size: 0x20)
    FVector TwistAxis;                                                                // 0x0030 (size: 0x18)
    FQuat Swing;                                                                      // 0x0050 (size: 0x20)
    FQuat Twist;                                                                      // 0x0070 (size: 0x20)

}; // Size: 0x90

struct FRigVMFunction_MathQuaternionToAxisAndAngle : public FRigVMFunction_MathQuaternionBase
{
    FQuat Value;                                                                      // 0x0010 (size: 0x20)
    FVector Axis;                                                                     // 0x0030 (size: 0x18)
    float Angle;                                                                      // 0x0048 (size: 0x4)

}; // Size: 0x50

struct FRigVMFunction_MathQuaternionToEuler : public FRigVMFunction_MathQuaternionBase
{
    FQuat Value;                                                                      // 0x0010 (size: 0x20)
    EEulerRotationOrder RotationOrder;                                                // 0x0030 (size: 0x1)
    FVector Result;                                                                   // 0x0038 (size: 0x18)

}; // Size: 0x50

struct FRigVMFunction_MathQuaternionToRotator : public FRigVMFunction_MathQuaternionBase
{
    FQuat Value;                                                                      // 0x0010 (size: 0x20)
    FRotator Result;                                                                  // 0x0030 (size: 0x18)

}; // Size: 0x50

struct FRigVMFunction_MathQuaternionToVectors : public FRigVMFunction_MathQuaternionBase
{
    FQuat Value;                                                                      // 0x0010 (size: 0x20)
    FVector Forward;                                                                  // 0x0030 (size: 0x18)
    FVector Right;                                                                    // 0x0048 (size: 0x18)
    FVector Up;                                                                       // 0x0060 (size: 0x18)

}; // Size: 0x80

struct FRigVMFunction_MathQuaternionUnaryOp : public FRigVMFunction_MathQuaternionBase
{
    FQuat Value;                                                                      // 0x0010 (size: 0x20)
    FQuat Result;                                                                     // 0x0030 (size: 0x20)

}; // Size: 0x50

struct FRigVMFunction_MathQuaternionUnit : public FRigVMFunction_MathQuaternionUnaryOp
{
}; // Size: 0x50

struct FRigVMFunction_MathRBFInterpolateBase : public FRigVMFunction_MathBase
{
}; // Size: 0x8

struct FRigVMFunction_MathRBFInterpolateQuatBase : public FRigVMFunction_MathRBFInterpolateBase
{
    FQuat Input;                                                                      // 0x0010 (size: 0x20)
    ERBFQuatDistanceType DistanceFunction;                                            // 0x0030 (size: 0x1)
    ERBFKernelType SmoothingFunction;                                                 // 0x0031 (size: 0x1)
    float SmoothingAngle;                                                             // 0x0034 (size: 0x4)
    bool bNormalizeOutput;                                                            // 0x0038 (size: 0x1)
    FVector TwistAxis;                                                                // 0x0040 (size: 0x18)
    FRigVMFunction_MathRBFInterpolateQuatWorkData WorkData;                           // 0x0060 (size: 0x90)

}; // Size: 0xF0

struct FRigVMFunction_MathRBFInterpolateQuatColor : public FRigVMFunction_MathRBFInterpolateQuatBase
{
    TArray<FMathRBFInterpolateQuatColor_Target> Targets;                              // 0x00F0 (size: 0x10)
    FLinearColor Output;                                                              // 0x0100 (size: 0x10)

}; // Size: 0x110

struct FRigVMFunction_MathRBFInterpolateQuatFloat : public FRigVMFunction_MathRBFInterpolateQuatBase
{
    TArray<FMathRBFInterpolateQuatFloat_Target> Targets;                              // 0x00F0 (size: 0x10)
    float Output;                                                                     // 0x0100 (size: 0x4)

}; // Size: 0x110

struct FRigVMFunction_MathRBFInterpolateQuatQuat : public FRigVMFunction_MathRBFInterpolateQuatBase
{
    TArray<FMathRBFInterpolateQuatQuat_Target> Targets;                               // 0x00F0 (size: 0x10)
    FQuat Output;                                                                     // 0x0100 (size: 0x20)

}; // Size: 0x120

struct FRigVMFunction_MathRBFInterpolateQuatVector : public FRigVMFunction_MathRBFInterpolateQuatBase
{
    TArray<FMathRBFInterpolateQuatVector_Target> Targets;                             // 0x00F0 (size: 0x10)
    FVector Output;                                                                   // 0x0100 (size: 0x18)

}; // Size: 0x120

struct FRigVMFunction_MathRBFInterpolateQuatWorkData
{
}; // Size: 0x90

struct FRigVMFunction_MathRBFInterpolateQuatXform : public FRigVMFunction_MathRBFInterpolateQuatBase
{
    TArray<FMathRBFInterpolateQuatXform_Target> Targets;                              // 0x00F0 (size: 0x10)
    FTransform Output;                                                                // 0x0100 (size: 0x60)

}; // Size: 0x160

struct FRigVMFunction_MathRBFInterpolateVectorBase : public FRigVMFunction_MathRBFInterpolateBase
{
    FVector Input;                                                                    // 0x0008 (size: 0x18)
    ERBFVectorDistanceType DistanceFunction;                                          // 0x0020 (size: 0x1)
    ERBFKernelType SmoothingFunction;                                                 // 0x0021 (size: 0x1)
    float SmoothingRadius;                                                            // 0x0024 (size: 0x4)
    bool bNormalizeOutput;                                                            // 0x0028 (size: 0x1)
    FRigVMFunction_MathRBFInterpolateVectorWorkData WorkData;                         // 0x0030 (size: 0x90)

}; // Size: 0xC0

struct FRigVMFunction_MathRBFInterpolateVectorColor : public FRigVMFunction_MathRBFInterpolateVectorBase
{
    TArray<FMathRBFInterpolateVectorColor_Target> Targets;                            // 0x00C0 (size: 0x10)
    FLinearColor Output;                                                              // 0x00D0 (size: 0x10)

}; // Size: 0xE0

struct FRigVMFunction_MathRBFInterpolateVectorFloat : public FRigVMFunction_MathRBFInterpolateVectorBase
{
    TArray<FMathRBFInterpolateVectorFloat_Target> Targets;                            // 0x00C0 (size: 0x10)
    float Output;                                                                     // 0x00D0 (size: 0x4)

}; // Size: 0xE0

struct FRigVMFunction_MathRBFInterpolateVectorQuat : public FRigVMFunction_MathRBFInterpolateVectorBase
{
    TArray<FMathRBFInterpolateVectorQuat_Target> Targets;                             // 0x00C0 (size: 0x10)
    FQuat Output;                                                                     // 0x00D0 (size: 0x20)

}; // Size: 0xF0

struct FRigVMFunction_MathRBFInterpolateVectorVector : public FRigVMFunction_MathRBFInterpolateVectorBase
{
    TArray<FMathRBFInterpolateVectorVector_Target> Targets;                           // 0x00C0 (size: 0x10)
    FVector Output;                                                                   // 0x00D0 (size: 0x18)

}; // Size: 0xF0

struct FRigVMFunction_MathRBFInterpolateVectorWorkData
{
}; // Size: 0x90

struct FRigVMFunction_MathRBFInterpolateVectorXform : public FRigVMFunction_MathRBFInterpolateVectorBase
{
    TArray<FMathRBFInterpolateVectorXform_Target> Targets;                            // 0x00C0 (size: 0x10)
    FTransform Output;                                                                // 0x00D0 (size: 0x60)

}; // Size: 0x130

struct FRigVMFunction_MathRayBase : public FRigVMFunction_MathBase
{
}; // Size: 0x8

struct FRigVMFunction_MathRayGetAt : public FRigVMFunction_MathRayBase
{
    FRay Ray;                                                                         // 0x0008 (size: 0x30)
    float Ratio;                                                                      // 0x0038 (size: 0x4)
    FVector Result;                                                                   // 0x0040 (size: 0x18)

}; // Size: 0x58

struct FRigVMFunction_MathRayIntersectPlane : public FRigVMFunction_MathRayBase
{
    FRay Ray;                                                                         // 0x0008 (size: 0x30)
    FVector PlanePoint;                                                               // 0x0038 (size: 0x18)
    FVector PlaneNormal;                                                              // 0x0050 (size: 0x18)
    FVector Result;                                                                   // 0x0068 (size: 0x18)
    float Distance;                                                                   // 0x0080 (size: 0x4)
    float Ratio;                                                                      // 0x0084 (size: 0x4)

}; // Size: 0x88

struct FRigVMFunction_MathRayIntersectRay : public FRigVMFunction_MathRayBase
{
    FRay A;                                                                           // 0x0008 (size: 0x30)
    FRay B;                                                                           // 0x0038 (size: 0x30)
    FVector Result;                                                                   // 0x0068 (size: 0x18)
    float Distance;                                                                   // 0x0080 (size: 0x4)
    float RatioA;                                                                     // 0x0084 (size: 0x4)
    float RatioB;                                                                     // 0x0088 (size: 0x4)

}; // Size: 0x90

struct FRigVMFunction_MathRayTransform : public FRigVMFunction_MathRayBase
{
    FRay Ray;                                                                         // 0x0008 (size: 0x30)
    FTransform Transform;                                                             // 0x0040 (size: 0x60)
    FRay Result;                                                                      // 0x00A0 (size: 0x30)

}; // Size: 0xD0

struct FRigVMFunction_MathTransformAccumulateArray : public FRigVMFunction_MathTransformMutableBase
{
    TArray<FTransform> Transforms;                                                    // 0x0120 (size: 0x10)
    ERigVMTransformSpace TargetSpace;                                                 // 0x0130 (size: 0x1)
    FTransform Root;                                                                  // 0x0140 (size: 0x60)
    TArray<int32> ParentIndices;                                                      // 0x01A0 (size: 0x10)

}; // Size: 0x1B0

struct FRigVMFunction_MathTransformArrayToSRT : public FRigVMFunction_MathTransformBase
{
    TArray<FTransform> Transforms;                                                    // 0x0008 (size: 0x10)
    TArray<FVector> Translations;                                                     // 0x0018 (size: 0x10)
    TArray<FQuat> Rotations;                                                          // 0x0028 (size: 0x10)
    TArray<FVector> scales;                                                           // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FRigVMFunction_MathTransformBase : public FRigVMFunction_MathBase
{
}; // Size: 0x8

struct FRigVMFunction_MathTransformBinaryAggregateOp : public FRigVMFunction_MathTransformBase
{
    FTransform A;                                                                     // 0x0010 (size: 0x60)
    FTransform B;                                                                     // 0x0070 (size: 0x60)
    FTransform Result;                                                                // 0x00D0 (size: 0x60)

}; // Size: 0x130

struct FRigVMFunction_MathTransformBinaryOp : public FRigVMFunction_MathTransformBase
{
    FTransform A;                                                                     // 0x0010 (size: 0x60)
    FTransform B;                                                                     // 0x0070 (size: 0x60)
    FTransform Result;                                                                // 0x00D0 (size: 0x60)

}; // Size: 0x130

struct FRigVMFunction_MathTransformClampSpatially : public FRigVMFunction_MathTransformBase
{
    FTransform Value;                                                                 // 0x0010 (size: 0x60)
    TEnumAsByte<EAxis::Type> Axis;                                                    // 0x0070 (size: 0x1)
    TEnumAsByte<ERigVMClampSpatialMode::Type> Type;                                   // 0x0071 (size: 0x1)
    float Minimum;                                                                    // 0x0074 (size: 0x4)
    float Maximum;                                                                    // 0x0078 (size: 0x4)
    FTransform Space;                                                                 // 0x0080 (size: 0x60)
    bool bDrawDebug;                                                                  // 0x00E0 (size: 0x1)
    FLinearColor DebugColor;                                                          // 0x00E4 (size: 0x10)
    float DebugThickness;                                                             // 0x00F4 (size: 0x4)
    FTransform Result;                                                                // 0x0100 (size: 0x60)

}; // Size: 0x160

struct FRigVMFunction_MathTransformFromEulerTransform : public FRigVMFunction_MathTransformBase
{
    FEulerTransform EulerTransform;                                                   // 0x0008 (size: 0x48)
    FTransform Result;                                                                // 0x0050 (size: 0x60)

}; // Size: 0xB0

struct FRigVMFunction_MathTransformFromEulerTransformV2 : public FRigVMFunction_MathTransformBase
{
    FEulerTransform Value;                                                            // 0x0008 (size: 0x48)
    FTransform Result;                                                                // 0x0050 (size: 0x60)

}; // Size: 0xB0

struct FRigVMFunction_MathTransformFromSRT : public FRigVMFunction_MathTransformBase
{
    FVector Location;                                                                 // 0x0008 (size: 0x18)
    FVector Rotation;                                                                 // 0x0020 (size: 0x18)
    EEulerRotationOrder RotationOrder;                                                // 0x0038 (size: 0x1)
    FVector scale;                                                                    // 0x0040 (size: 0x18)
    FTransform Transform;                                                             // 0x0060 (size: 0x60)
    FEulerTransform EulerTransform;                                                   // 0x00C0 (size: 0x48)

}; // Size: 0x110

struct FRigVMFunction_MathTransformInverse : public FRigVMFunction_MathTransformUnaryOp
{
}; // Size: 0xD0

struct FRigVMFunction_MathTransformLerp : public FRigVMFunction_MathTransformBase
{
    FTransform A;                                                                     // 0x0010 (size: 0x60)
    FTransform B;                                                                     // 0x0070 (size: 0x60)
    float T;                                                                          // 0x00D0 (size: 0x4)
    FTransform Result;                                                                // 0x00E0 (size: 0x60)

}; // Size: 0x140

struct FRigVMFunction_MathTransformMake : public FRigVMFunction_MathTransformBase
{
    FVector Translation;                                                              // 0x0008 (size: 0x18)
    FQuat Rotation;                                                                   // 0x0020 (size: 0x20)
    FVector scale;                                                                    // 0x0040 (size: 0x18)
    FTransform Result;                                                                // 0x0060 (size: 0x60)

}; // Size: 0xC0

struct FRigVMFunction_MathTransformMakeAbsolute : public FRigVMFunction_MathTransformBase
{
    FTransform Local;                                                                 // 0x0010 (size: 0x60)
    FTransform Parent;                                                                // 0x0070 (size: 0x60)
    FTransform Global;                                                                // 0x00D0 (size: 0x60)

}; // Size: 0x130

struct FRigVMFunction_MathTransformMakeRelative : public FRigVMFunction_MathTransformBase
{
    FTransform Global;                                                                // 0x0010 (size: 0x60)
    FTransform Parent;                                                                // 0x0070 (size: 0x60)
    FTransform Local;                                                                 // 0x00D0 (size: 0x60)

}; // Size: 0x130

struct FRigVMFunction_MathTransformMirrorTransform : public FRigVMFunction_MathTransformBase
{
    FTransform Value;                                                                 // 0x0010 (size: 0x60)
    TEnumAsByte<EAxis::Type> MirrorAxis;                                              // 0x0070 (size: 0x1)
    TEnumAsByte<EAxis::Type> AxisToFlip;                                              // 0x0071 (size: 0x1)
    FTransform CentralTransform;                                                      // 0x0080 (size: 0x60)
    FTransform Result;                                                                // 0x00E0 (size: 0x60)

}; // Size: 0x140

struct FRigVMFunction_MathTransformMul : public FRigVMFunction_MathTransformBinaryAggregateOp
{
}; // Size: 0x130

struct FRigVMFunction_MathTransformMutableBase : public FRigVMFunction_MathMutableBase
{
}; // Size: 0x120

struct FRigVMFunction_MathTransformRotateVector : public FRigVMFunction_MathTransformBase
{
    FTransform Transform;                                                             // 0x0010 (size: 0x60)
    FVector Vector;                                                                   // 0x0070 (size: 0x18)
    FVector Result;                                                                   // 0x0088 (size: 0x18)

}; // Size: 0xA0

struct FRigVMFunction_MathTransformSelectBool : public FRigVMFunction_MathTransformBase
{
    bool Condition;                                                                   // 0x0008 (size: 0x1)
    FTransform IfTrue;                                                                // 0x0010 (size: 0x60)
    FTransform IfFalse;                                                               // 0x0070 (size: 0x60)
    FTransform Result;                                                                // 0x00D0 (size: 0x60)

}; // Size: 0x130

struct FRigVMFunction_MathTransformToEulerTransform : public FRigVMFunction_MathTransformBase
{
    FTransform Value;                                                                 // 0x0010 (size: 0x60)
    FEulerTransform Result;                                                           // 0x0070 (size: 0x48)

}; // Size: 0xC0

struct FRigVMFunction_MathTransformToVectors : public FRigVMFunction_MathTransformBase
{
    FTransform Value;                                                                 // 0x0010 (size: 0x60)
    FVector Forward;                                                                  // 0x0070 (size: 0x18)
    FVector Right;                                                                    // 0x0088 (size: 0x18)
    FVector Up;                                                                       // 0x00A0 (size: 0x18)

}; // Size: 0xC0

struct FRigVMFunction_MathTransformTransformVector : public FRigVMFunction_MathTransformBase
{
    FTransform Transform;                                                             // 0x0010 (size: 0x60)
    FVector Location;                                                                 // 0x0070 (size: 0x18)
    FVector Result;                                                                   // 0x0088 (size: 0x18)

}; // Size: 0xA0

struct FRigVMFunction_MathTransformUnaryOp : public FRigVMFunction_MathTransformBase
{
    FTransform Value;                                                                 // 0x0010 (size: 0x60)
    FTransform Result;                                                                // 0x0070 (size: 0x60)

}; // Size: 0xD0

struct FRigVMFunction_MathVectorAbs : public FRigVMFunction_MathVectorUnaryOp
{
}; // Size: 0x38

struct FRigVMFunction_MathVectorAdd : public FRigVMFunction_MathVectorBinaryAggregateOp
{
}; // Size: 0x50

struct FRigVMFunction_MathVectorAngle : public FRigVMFunction_MathVectorBase
{
    FVector A;                                                                        // 0x0008 (size: 0x18)
    FVector B;                                                                        // 0x0020 (size: 0x18)
    float Result;                                                                     // 0x0038 (size: 0x4)

}; // Size: 0x40

struct FRigVMFunction_MathVectorArrayAverage : public FRigVMFunction_MathVectorBase
{
    TArray<FVector> Array;                                                            // 0x0008 (size: 0x10)
    FVector Average;                                                                  // 0x0018 (size: 0x18)

}; // Size: 0x30

struct FRigVMFunction_MathVectorArraySum : public FRigVMFunction_MathVectorBase
{
    TArray<FVector> Array;                                                            // 0x0008 (size: 0x10)
    FVector sum;                                                                      // 0x0018 (size: 0x18)

}; // Size: 0x30

struct FRigVMFunction_MathVectorBase : public FRigVMFunction_MathBase
{
}; // Size: 0x8

struct FRigVMFunction_MathVectorBezierFourPoint : public FRigVMFunction_MathVectorBase
{
    FRigVMFourPointBezier Bezier;                                                     // 0x0008 (size: 0x60)
    float T;                                                                          // 0x0068 (size: 0x4)
    FVector Result;                                                                   // 0x0070 (size: 0x18)
    FVector Tangent;                                                                  // 0x0088 (size: 0x18)

}; // Size: 0xA0

struct FRigVMFunction_MathVectorBinaryAggregateOp : public FRigVMFunction_MathVectorBase
{
    FVector A;                                                                        // 0x0008 (size: 0x18)
    FVector B;                                                                        // 0x0020 (size: 0x18)
    FVector Result;                                                                   // 0x0038 (size: 0x18)

}; // Size: 0x50

struct FRigVMFunction_MathVectorBinaryOp : public FRigVMFunction_MathVectorBase
{
    FVector A;                                                                        // 0x0008 (size: 0x18)
    FVector B;                                                                        // 0x0020 (size: 0x18)
    FVector Result;                                                                   // 0x0038 (size: 0x18)

}; // Size: 0x50

struct FRigVMFunction_MathVectorCeil : public FRigVMFunction_MathVectorUnaryOp
{
}; // Size: 0x38

struct FRigVMFunction_MathVectorClamp : public FRigVMFunction_MathVectorBase
{
    FVector Value;                                                                    // 0x0008 (size: 0x18)
    FVector Minimum;                                                                  // 0x0020 (size: 0x18)
    FVector Maximum;                                                                  // 0x0038 (size: 0x18)
    FVector Result;                                                                   // 0x0050 (size: 0x18)

}; // Size: 0x68

struct FRigVMFunction_MathVectorClampLength : public FRigVMFunction_MathVectorBase
{
    FVector Value;                                                                    // 0x0008 (size: 0x18)
    float MinimumLength;                                                              // 0x0020 (size: 0x4)
    float MaximumLength;                                                              // 0x0024 (size: 0x4)
    FVector Result;                                                                   // 0x0028 (size: 0x18)

}; // Size: 0x40

struct FRigVMFunction_MathVectorClampSpatially : public FRigVMFunction_MathVectorBase
{
    FVector Value;                                                                    // 0x0008 (size: 0x18)
    TEnumAsByte<EAxis::Type> Axis;                                                    // 0x0020 (size: 0x1)
    TEnumAsByte<ERigVMClampSpatialMode::Type> Type;                                   // 0x0021 (size: 0x1)
    float Minimum;                                                                    // 0x0024 (size: 0x4)
    float Maximum;                                                                    // 0x0028 (size: 0x4)
    FTransform Space;                                                                 // 0x0030 (size: 0x60)
    bool bDrawDebug;                                                                  // 0x0090 (size: 0x1)
    FLinearColor DebugColor;                                                          // 0x0094 (size: 0x10)
    float DebugThickness;                                                             // 0x00A4 (size: 0x4)
    FVector Result;                                                                   // 0x00A8 (size: 0x18)

}; // Size: 0xC0

struct FRigVMFunction_MathVectorCross : public FRigVMFunction_MathVectorBinaryOp
{
}; // Size: 0x50

struct FRigVMFunction_MathVectorDeg : public FRigVMFunction_MathVectorUnaryOp
{
}; // Size: 0x38

struct FRigVMFunction_MathVectorDistance : public FRigVMFunction_MathVectorBase
{
    FVector A;                                                                        // 0x0008 (size: 0x18)
    FVector B;                                                                        // 0x0020 (size: 0x18)
    float Result;                                                                     // 0x0038 (size: 0x4)

}; // Size: 0x40

struct FRigVMFunction_MathVectorDiv : public FRigVMFunction_MathVectorBinaryOp
{
}; // Size: 0x50

struct FRigVMFunction_MathVectorDot : public FRigVMFunction_MathVectorBase
{
    FVector A;                                                                        // 0x0008 (size: 0x18)
    FVector B;                                                                        // 0x0020 (size: 0x18)
    float Result;                                                                     // 0x0038 (size: 0x4)

}; // Size: 0x40

struct FRigVMFunction_MathVectorEquals : public FRigVMFunction_MathVectorBase
{
    FVector A;                                                                        // 0x0008 (size: 0x18)
    FVector B;                                                                        // 0x0020 (size: 0x18)
    bool Result;                                                                      // 0x0038 (size: 0x1)

}; // Size: 0x40

struct FRigVMFunction_MathVectorFloor : public FRigVMFunction_MathVectorUnaryOp
{
}; // Size: 0x38

struct FRigVMFunction_MathVectorFromDouble : public FRigVMFunction_MathVectorBase
{
    double Value;                                                                     // 0x0008 (size: 0x8)
    FVector Result;                                                                   // 0x0010 (size: 0x18)

}; // Size: 0x28

struct FRigVMFunction_MathVectorFromFloat : public FRigVMFunction_MathVectorBase
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    FVector Result;                                                                   // 0x0010 (size: 0x18)

}; // Size: 0x28

struct FRigVMFunction_MathVectorIsNearlyEqual : public FRigVMFunction_MathVectorBase
{
    FVector A;                                                                        // 0x0008 (size: 0x18)
    FVector B;                                                                        // 0x0020 (size: 0x18)
    float Tolerance;                                                                  // 0x0038 (size: 0x4)
    bool Result;                                                                      // 0x003C (size: 0x1)

}; // Size: 0x40

struct FRigVMFunction_MathVectorIsNearlyZero : public FRigVMFunction_MathVectorBase
{
    FVector Value;                                                                    // 0x0008 (size: 0x18)
    float Tolerance;                                                                  // 0x0020 (size: 0x4)
    bool Result;                                                                      // 0x0024 (size: 0x1)

}; // Size: 0x28

struct FRigVMFunction_MathVectorLength : public FRigVMFunction_MathVectorBase
{
    FVector Value;                                                                    // 0x0008 (size: 0x18)
    float Result;                                                                     // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FRigVMFunction_MathVectorLengthSquared : public FRigVMFunction_MathVectorBase
{
    FVector Value;                                                                    // 0x0008 (size: 0x18)
    float Result;                                                                     // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FRigVMFunction_MathVectorLerp : public FRigVMFunction_MathVectorBase
{
    FVector A;                                                                        // 0x0008 (size: 0x18)
    FVector B;                                                                        // 0x0020 (size: 0x18)
    float T;                                                                          // 0x0038 (size: 0x4)
    FVector Result;                                                                   // 0x0040 (size: 0x18)

}; // Size: 0x58

struct FRigVMFunction_MathVectorMake : public FRigVMFunction_MathVectorBase
{
    float X;                                                                          // 0x0008 (size: 0x4)
    float Y;                                                                          // 0x000C (size: 0x4)
    float Z;                                                                          // 0x0010 (size: 0x4)
    FVector Result;                                                                   // 0x0018 (size: 0x18)

}; // Size: 0x30

struct FRigVMFunction_MathVectorMakeAbsolute : public FRigVMFunction_MathVectorBase
{
    FVector Local;                                                                    // 0x0008 (size: 0x18)
    FVector Parent;                                                                   // 0x0020 (size: 0x18)
    FVector Global;                                                                   // 0x0038 (size: 0x18)

}; // Size: 0x50

struct FRigVMFunction_MathVectorMakeBezierFourPoint : public FRigVMFunction_MathVectorBase
{
    FRigVMFourPointBezier Bezier;                                                     // 0x0008 (size: 0x60)

}; // Size: 0x68

struct FRigVMFunction_MathVectorMakeRelative : public FRigVMFunction_MathVectorBase
{
    FVector Global;                                                                   // 0x0008 (size: 0x18)
    FVector Parent;                                                                   // 0x0020 (size: 0x18)
    FVector Local;                                                                    // 0x0038 (size: 0x18)

}; // Size: 0x50

struct FRigVMFunction_MathVectorMax : public FRigVMFunction_MathVectorBinaryAggregateOp
{
}; // Size: 0x50

struct FRigVMFunction_MathVectorMin : public FRigVMFunction_MathVectorBinaryAggregateOp
{
}; // Size: 0x50

struct FRigVMFunction_MathVectorMirror : public FRigVMFunction_MathVectorBase
{
    FVector Value;                                                                    // 0x0008 (size: 0x18)
    FVector Normal;                                                                   // 0x0020 (size: 0x18)
    FVector Result;                                                                   // 0x0038 (size: 0x18)

}; // Size: 0x50

struct FRigVMFunction_MathVectorMirrorTransform : public FRigVMFunction_MathVectorBase
{
    FVector Value;                                                                    // 0x0008 (size: 0x18)
    TEnumAsByte<EAxis::Type> MirrorAxis;                                              // 0x0020 (size: 0x1)
    TEnumAsByte<EAxis::Type> AxisToFlip;                                              // 0x0021 (size: 0x1)
    FTransform CentralTransform;                                                      // 0x0030 (size: 0x60)
    FVector Result;                                                                   // 0x0090 (size: 0x18)

}; // Size: 0xB0

struct FRigVMFunction_MathVectorMod : public FRigVMFunction_MathVectorBinaryOp
{
}; // Size: 0x50

struct FRigVMFunction_MathVectorMul : public FRigVMFunction_MathVectorBinaryAggregateOp
{
}; // Size: 0x50

struct FRigVMFunction_MathVectorNegate : public FRigVMFunction_MathVectorUnaryOp
{
}; // Size: 0x38

struct FRigVMFunction_MathVectorNotEquals : public FRigVMFunction_MathVectorBase
{
    FVector A;                                                                        // 0x0008 (size: 0x18)
    FVector B;                                                                        // 0x0020 (size: 0x18)
    bool Result;                                                                      // 0x0038 (size: 0x1)

}; // Size: 0x40

struct FRigVMFunction_MathVectorOrthogonal : public FRigVMFunction_MathVectorBase
{
    FVector A;                                                                        // 0x0008 (size: 0x18)
    FVector B;                                                                        // 0x0020 (size: 0x18)
    bool Result;                                                                      // 0x0038 (size: 0x1)

}; // Size: 0x40

struct FRigVMFunction_MathVectorParallel : public FRigVMFunction_MathVectorBase
{
    FVector A;                                                                        // 0x0008 (size: 0x18)
    FVector B;                                                                        // 0x0020 (size: 0x18)
    bool Result;                                                                      // 0x0038 (size: 0x1)

}; // Size: 0x40

struct FRigVMFunction_MathVectorRad : public FRigVMFunction_MathVectorUnaryOp
{
}; // Size: 0x38

struct FRigVMFunction_MathVectorRemap : public FRigVMFunction_MathVectorBase
{
    FVector Value;                                                                    // 0x0008 (size: 0x18)
    FVector SourceMinimum;                                                            // 0x0020 (size: 0x18)
    FVector SourceMaximum;                                                            // 0x0038 (size: 0x18)
    FVector TargetMinimum;                                                            // 0x0050 (size: 0x18)
    FVector TargetMaximum;                                                            // 0x0068 (size: 0x18)
    bool bClamp;                                                                      // 0x0080 (size: 0x1)
    FVector Result;                                                                   // 0x0088 (size: 0x18)

}; // Size: 0xA0

struct FRigVMFunction_MathVectorRound : public FRigVMFunction_MathVectorUnaryOp
{
}; // Size: 0x38

struct FRigVMFunction_MathVectorScale : public FRigVMFunction_MathVectorBase
{
    FVector Value;                                                                    // 0x0008 (size: 0x18)
    float Factor;                                                                     // 0x0020 (size: 0x4)
    FVector Result;                                                                   // 0x0028 (size: 0x18)

}; // Size: 0x40

struct FRigVMFunction_MathVectorSelectBool : public FRigVMFunction_MathVectorBase
{
    bool Condition;                                                                   // 0x0008 (size: 0x1)
    FVector IfTrue;                                                                   // 0x0010 (size: 0x18)
    FVector IfFalse;                                                                  // 0x0028 (size: 0x18)
    FVector Result;                                                                   // 0x0040 (size: 0x18)

}; // Size: 0x58

struct FRigVMFunction_MathVectorSetLength : public FRigVMFunction_MathVectorBase
{
    FVector Value;                                                                    // 0x0008 (size: 0x18)
    float Length;                                                                     // 0x0020 (size: 0x4)
    FVector Result;                                                                   // 0x0028 (size: 0x18)

}; // Size: 0x40

struct FRigVMFunction_MathVectorSign : public FRigVMFunction_MathVectorUnaryOp
{
}; // Size: 0x38

struct FRigVMFunction_MathVectorSub : public FRigVMFunction_MathVectorBinaryOp
{
}; // Size: 0x50

struct FRigVMFunction_MathVectorUnaryOp : public FRigVMFunction_MathVectorBase
{
    FVector Value;                                                                    // 0x0008 (size: 0x18)
    FVector Result;                                                                   // 0x0020 (size: 0x18)

}; // Size: 0x38

struct FRigVMFunction_MathVectorUnit : public FRigVMFunction_MathVectorUnaryOp
{
}; // Size: 0x38

struct FRigVMFunction_NameBase : public FRigVMStruct
{
}; // Size: 0x8

struct FRigVMFunction_NameConcat : public FRigVMFunction_NameBase
{
    FName A;                                                                          // 0x0008 (size: 0x8)
    FName B;                                                                          // 0x0010 (size: 0x8)
    FName Result;                                                                     // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FRigVMFunction_NameReplace : public FRigVMFunction_NameBase
{
    FName Name;                                                                       // 0x0008 (size: 0x8)
    FName Old;                                                                        // 0x0010 (size: 0x8)
    FName New;                                                                        // 0x0018 (size: 0x8)
    FName Result;                                                                     // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FRigVMFunction_NameTruncate : public FRigVMFunction_NameBase
{
    FName Name;                                                                       // 0x0008 (size: 0x8)
    int32 Count;                                                                      // 0x0010 (size: 0x4)
    bool FromEnd;                                                                     // 0x0014 (size: 0x1)
    FName Remainder;                                                                  // 0x0018 (size: 0x8)
    FName Chopped;                                                                    // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FRigVMFunction_NoiseDouble : public FRigVMFunction_MathBase
{
    double Value;                                                                     // 0x0008 (size: 0x8)
    double Speed;                                                                     // 0x0010 (size: 0x8)
    double Frequency;                                                                 // 0x0018 (size: 0x8)
    double Minimum;                                                                   // 0x0020 (size: 0x8)
    double Maximum;                                                                   // 0x0028 (size: 0x8)
    double Result;                                                                    // 0x0030 (size: 0x8)
    double Time;                                                                      // 0x0038 (size: 0x8)

}; // Size: 0x40

struct FRigVMFunction_NoiseFloat : public FRigVMFunction_MathBase
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    float Speed;                                                                      // 0x000C (size: 0x4)
    float Frequency;                                                                  // 0x0010 (size: 0x4)
    float Minimum;                                                                    // 0x0014 (size: 0x4)
    float Maximum;                                                                    // 0x0018 (size: 0x4)
    float Result;                                                                     // 0x001C (size: 0x4)
    float Time;                                                                       // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FRigVMFunction_NoiseVector : public FRigVMFunction_MathBase
{
    FVector position;                                                                 // 0x0008 (size: 0x18)
    FVector Speed;                                                                    // 0x0020 (size: 0x18)
    FVector Frequency;                                                                // 0x0038 (size: 0x18)
    float Minimum;                                                                    // 0x0050 (size: 0x4)
    float Maximum;                                                                    // 0x0054 (size: 0x4)
    FVector Result;                                                                   // 0x0058 (size: 0x18)
    FVector Time;                                                                     // 0x0070 (size: 0x18)

}; // Size: 0x88

struct FRigVMFunction_NoiseVector2 : public FRigVMFunction_MathBase
{
    FVector Value;                                                                    // 0x0008 (size: 0x18)
    FVector Speed;                                                                    // 0x0020 (size: 0x18)
    FVector Frequency;                                                                // 0x0038 (size: 0x18)
    double Minimum;                                                                   // 0x0050 (size: 0x8)
    double Maximum;                                                                   // 0x0058 (size: 0x8)
    FVector Result;                                                                   // 0x0060 (size: 0x18)
    FVector Time;                                                                     // 0x0078 (size: 0x18)

}; // Size: 0x90

struct FRigVMFunction_RandomFloat : public FRigVMFunction_MathBase
{
    int32 Seed;                                                                       // 0x0008 (size: 0x4)
    float Minimum;                                                                    // 0x000C (size: 0x4)
    float Maximum;                                                                    // 0x0010 (size: 0x4)
    float Duration;                                                                   // 0x0014 (size: 0x4)
    float Result;                                                                     // 0x0018 (size: 0x4)
    float LastResult;                                                                 // 0x001C (size: 0x4)
    int32 LastSeed;                                                                   // 0x0020 (size: 0x4)
    int32 BaseSeed;                                                                   // 0x0024 (size: 0x4)
    float TimeLeft;                                                                   // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FRigVMFunction_RandomVector : public FRigVMFunction_MathBase
{
    int32 Seed;                                                                       // 0x0008 (size: 0x4)
    float Minimum;                                                                    // 0x000C (size: 0x4)
    float Maximum;                                                                    // 0x0010 (size: 0x4)
    float Duration;                                                                   // 0x0014 (size: 0x4)
    FVector Result;                                                                   // 0x0018 (size: 0x18)
    FVector LastResult;                                                               // 0x0030 (size: 0x18)
    int32 LastSeed;                                                                   // 0x0048 (size: 0x4)
    int32 BaseSeed;                                                                   // 0x004C (size: 0x4)
    float TimeLeft;                                                                   // 0x0050 (size: 0x4)

}; // Size: 0x58

struct FRigVMFunction_SecondsToFrames : public FRigVMFunction_AnimBase
{
    float Seconds;                                                                    // 0x0008 (size: 0x4)
    float Frames;                                                                     // 0x000C (size: 0x4)

}; // Size: 0x10

struct FRigVMFunction_Sequence : public FRigVMStruct
{
    FRigVMExecuteContext ExecuteContext;                                              // 0x0010 (size: 0x110)
    FRigVMExecuteContext A;                                                           // 0x0120 (size: 0x110)
    FRigVMExecuteContext B;                                                           // 0x0230 (size: 0x110)

}; // Size: 0x340

struct FRigVMFunction_SimBase : public FRigVMStruct
{
}; // Size: 0x8

struct FRigVMFunction_SimBaseMutable : public FRigVMStructMutable
{
}; // Size: 0x120

struct FRigVMFunction_StartsWith : public FRigVMFunction_NameBase
{
    FName Name;                                                                       // 0x0008 (size: 0x8)
    FName Start;                                                                      // 0x0010 (size: 0x8)
    bool Result;                                                                      // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FRigVMFunction_StringBase : public FRigVMStruct
{
}; // Size: 0x8

struct FRigVMFunction_StringConcat : public FRigVMFunction_StringBase
{
    FString A;                                                                        // 0x0008 (size: 0x10)
    FString B;                                                                        // 0x0018 (size: 0x10)
    FString Result;                                                                   // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FRigVMFunction_StringContains : public FRigVMFunction_StringBase
{
    FString Name;                                                                     // 0x0008 (size: 0x10)
    FString search;                                                                   // 0x0018 (size: 0x10)
    bool Result;                                                                      // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FRigVMFunction_StringEndsWith : public FRigVMFunction_StringBase
{
    FString Name;                                                                     // 0x0008 (size: 0x10)
    FString Ending;                                                                   // 0x0018 (size: 0x10)
    bool Result;                                                                      // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FRigVMFunction_StringFind : public FRigVMFunction_StringBase
{
    FString Value;                                                                    // 0x0008 (size: 0x10)
    FString search;                                                                   // 0x0018 (size: 0x10)
    bool Found;                                                                       // 0x0028 (size: 0x1)
    int32 Index;                                                                      // 0x002C (size: 0x4)

}; // Size: 0x30

struct FRigVMFunction_StringJoin : public FRigVMFunction_StringBase
{
    TArray<FString> Values;                                                           // 0x0008 (size: 0x10)
    FString Separator;                                                                // 0x0018 (size: 0x10)
    FString Result;                                                                   // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FRigVMFunction_StringLeft : public FRigVMFunction_StringBase
{
    FString Value;                                                                    // 0x0008 (size: 0x10)
    int32 Count;                                                                      // 0x0018 (size: 0x4)
    FString Result;                                                                   // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FRigVMFunction_StringLength : public FRigVMFunction_StringBase
{
    FString Value;                                                                    // 0x0008 (size: 0x10)
    int32 Length;                                                                     // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FRigVMFunction_StringMiddle : public FRigVMFunction_StringBase
{
    FString Value;                                                                    // 0x0008 (size: 0x10)
    int32 Start;                                                                      // 0x0018 (size: 0x4)
    int32 Count;                                                                      // 0x001C (size: 0x4)
    FString Result;                                                                   // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FRigVMFunction_StringPadInteger : public FRigVMFunction_StringBase
{
    int32 Value;                                                                      // 0x0008 (size: 0x4)
    int32 Digits;                                                                     // 0x000C (size: 0x4)
    FString Result;                                                                   // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FRigVMFunction_StringReplace : public FRigVMFunction_StringBase
{
    FString Name;                                                                     // 0x0008 (size: 0x10)
    FString Old;                                                                      // 0x0018 (size: 0x10)
    FString New;                                                                      // 0x0028 (size: 0x10)
    FString Result;                                                                   // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FRigVMFunction_StringReverse : public FRigVMFunction_StringBase
{
    FString Value;                                                                    // 0x0008 (size: 0x10)
    FString Reverse;                                                                  // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FRigVMFunction_StringRight : public FRigVMFunction_StringBase
{
    FString Value;                                                                    // 0x0008 (size: 0x10)
    int32 Count;                                                                      // 0x0018 (size: 0x4)
    FString Result;                                                                   // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FRigVMFunction_StringSplit : public FRigVMFunction_StringBase
{
    FString Value;                                                                    // 0x0008 (size: 0x10)
    FString Separator;                                                                // 0x0018 (size: 0x10)
    TArray<FString> Result;                                                           // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FRigVMFunction_StringStartsWith : public FRigVMFunction_StringBase
{
    FString Name;                                                                     // 0x0008 (size: 0x10)
    FString Start;                                                                    // 0x0018 (size: 0x10)
    bool Result;                                                                      // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FRigVMFunction_StringToLowercase : public FRigVMFunction_StringBase
{
    FString Value;                                                                    // 0x0008 (size: 0x10)
    FString Result;                                                                   // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FRigVMFunction_StringToUppercase : public FRigVMFunction_StringBase
{
    FString Value;                                                                    // 0x0008 (size: 0x10)
    FString Result;                                                                   // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FRigVMFunction_StringTrimWhitespace : public FRigVMFunction_StringBase
{
    FString Value;                                                                    // 0x0008 (size: 0x10)
    FString Result;                                                                   // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FRigVMFunction_StringTruncate : public FRigVMFunction_StringBase
{
    FString Name;                                                                     // 0x0008 (size: 0x10)
    int32 Count;                                                                      // 0x0018 (size: 0x4)
    bool FromEnd;                                                                     // 0x001C (size: 0x1)
    FString Remainder;                                                                // 0x0020 (size: 0x10)
    FString Chopped;                                                                  // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FRigVMFunction_TimeLoop : public FRigVMFunction_SimBase
{
    float Speed;                                                                      // 0x0008 (size: 0x4)
    float Duration;                                                                   // 0x000C (size: 0x4)
    bool Normalize;                                                                   // 0x0010 (size: 0x1)
    float Absolute;                                                                   // 0x0014 (size: 0x4)
    float Relative;                                                                   // 0x0018 (size: 0x4)
    float FlipFlop;                                                                   // 0x001C (size: 0x4)
    bool Even;                                                                        // 0x0020 (size: 0x1)
    float AccumulatedAbsolute;                                                        // 0x0024 (size: 0x4)
    float AccumulatedRelative;                                                        // 0x0028 (size: 0x4)
    int32 NumIterations;                                                              // 0x002C (size: 0x4)
    bool bIsInitialized;                                                              // 0x0030 (size: 0x1)

}; // Size: 0x38

struct FRigVMFunction_TimeOffsetFloat : public FRigVMFunction_SimBase
{
    float Value;                                                                      // 0x0008 (size: 0x4)
    float SecondsAgo;                                                                 // 0x000C (size: 0x4)
    int32 BufferSize;                                                                 // 0x0010 (size: 0x4)
    float TimeRange;                                                                  // 0x0014 (size: 0x4)
    float Result;                                                                     // 0x0018 (size: 0x4)
    TArray<float> Buffer;                                                             // 0x0020 (size: 0x10)
    TArray<float> DeltaTimes;                                                         // 0x0030 (size: 0x10)
    int32 LastInsertIndex;                                                            // 0x0040 (size: 0x4)
    int32 UpperBound;                                                                 // 0x0044 (size: 0x4)

}; // Size: 0x48

struct FRigVMFunction_TimeOffsetTransform : public FRigVMFunction_SimBase
{
    FTransform Value;                                                                 // 0x0010 (size: 0x60)
    float SecondsAgo;                                                                 // 0x0070 (size: 0x4)
    int32 BufferSize;                                                                 // 0x0074 (size: 0x4)
    float TimeRange;                                                                  // 0x0078 (size: 0x4)
    FTransform Result;                                                                // 0x0080 (size: 0x60)
    TArray<FTransform> Buffer;                                                        // 0x00E0 (size: 0x10)
    TArray<float> DeltaTimes;                                                         // 0x00F0 (size: 0x10)
    int32 LastInsertIndex;                                                            // 0x0100 (size: 0x4)
    int32 UpperBound;                                                                 // 0x0104 (size: 0x4)

}; // Size: 0x110

struct FRigVMFunction_TimeOffsetVector : public FRigVMFunction_SimBase
{
    FVector Value;                                                                    // 0x0008 (size: 0x18)
    float SecondsAgo;                                                                 // 0x0020 (size: 0x4)
    int32 BufferSize;                                                                 // 0x0024 (size: 0x4)
    float TimeRange;                                                                  // 0x0028 (size: 0x4)
    FVector Result;                                                                   // 0x0030 (size: 0x18)
    TArray<FVector> Buffer;                                                           // 0x0048 (size: 0x10)
    TArray<float> DeltaTimes;                                                         // 0x0058 (size: 0x10)
    int32 LastInsertIndex;                                                            // 0x0068 (size: 0x4)
    int32 UpperBound;                                                                 // 0x006C (size: 0x4)

}; // Size: 0x70

struct FRigVMFunction_Timeline : public FRigVMFunction_SimBase
{
    float Speed;                                                                      // 0x0008 (size: 0x4)
    float Time;                                                                       // 0x000C (size: 0x4)
    float AccumulatedValue;                                                           // 0x0010 (size: 0x4)
    bool bIsInitialized;                                                              // 0x0014 (size: 0x1)

}; // Size: 0x18

struct FRigVMFunction_UserDefinedEvent : public FRigVMStruct
{
    FRigVMExecuteContext ExecuteContext;                                              // 0x0010 (size: 0x110)
    FName EventName;                                                                  // 0x0120 (size: 0x8)

}; // Size: 0x130

struct FRigVMFunction_VerletIntegrateVector : public FRigVMFunction_SimBase
{
    FVector Target;                                                                   // 0x0008 (size: 0x18)
    float Strength;                                                                   // 0x0020 (size: 0x4)
    float Damp;                                                                       // 0x0024 (size: 0x4)
    float Blend;                                                                      // 0x0028 (size: 0x4)
    FVector Force;                                                                    // 0x0030 (size: 0x18)
    FVector position;                                                                 // 0x0048 (size: 0x18)
    FVector Velocity;                                                                 // 0x0060 (size: 0x18)
    FVector Acceleration;                                                             // 0x0078 (size: 0x18)
    FRigVMSimPoint Point;                                                             // 0x0090 (size: 0x40)
    bool bInitialized;                                                                // 0x00D0 (size: 0x1)

}; // Size: 0xD8

struct FRigVMFunction_VisualDebugQuat : public FRigVMFunction_DebugBase
{
    FQuat Value;                                                                      // 0x0010 (size: 0x20)
    bool bEnabled;                                                                    // 0x0030 (size: 0x1)
    float Thickness;                                                                  // 0x0034 (size: 0x4)
    float scale;                                                                      // 0x0038 (size: 0x4)
    FName BoneSpace;                                                                  // 0x003C (size: 0x8)

}; // Size: 0x50

struct FRigVMFunction_VisualDebugQuatNoSpace : public FRigVMFunction_DebugBase
{
    FQuat Value;                                                                      // 0x0010 (size: 0x20)
    bool bEnabled;                                                                    // 0x0030 (size: 0x1)
    float Thickness;                                                                  // 0x0034 (size: 0x4)
    float scale;                                                                      // 0x0038 (size: 0x4)

}; // Size: 0x40

struct FRigVMFunction_VisualDebugTransform : public FRigVMFunction_DebugBase
{
    FTransform Value;                                                                 // 0x0010 (size: 0x60)
    bool bEnabled;                                                                    // 0x0070 (size: 0x1)
    float Thickness;                                                                  // 0x0074 (size: 0x4)
    float scale;                                                                      // 0x0078 (size: 0x4)
    FName BoneSpace;                                                                  // 0x007C (size: 0x8)

}; // Size: 0x90

struct FRigVMFunction_VisualDebugTransformNoSpace : public FRigVMFunction_DebugBase
{
    FTransform Value;                                                                 // 0x0010 (size: 0x60)
    bool bEnabled;                                                                    // 0x0070 (size: 0x1)
    float Thickness;                                                                  // 0x0074 (size: 0x4)
    float scale;                                                                      // 0x0078 (size: 0x4)

}; // Size: 0x80

struct FRigVMFunction_VisualDebugVector : public FRigVMFunction_DebugBase
{
    FVector Value;                                                                    // 0x0008 (size: 0x18)
    bool bEnabled;                                                                    // 0x0020 (size: 0x1)
    ERigUnitVisualDebugPointMode Mode;                                                // 0x0021 (size: 0x1)
    FLinearColor Color;                                                               // 0x0024 (size: 0x10)
    float Thickness;                                                                  // 0x0034 (size: 0x4)
    float scale;                                                                      // 0x0038 (size: 0x4)
    FName BoneSpace;                                                                  // 0x003C (size: 0x8)

}; // Size: 0x48

struct FRigVMFunction_VisualDebugVectorNoSpace : public FRigVMFunction_DebugBase
{
    FVector Value;                                                                    // 0x0008 (size: 0x18)
    bool bEnabled;                                                                    // 0x0020 (size: 0x1)
    ERigUnitVisualDebugPointMode Mode;                                                // 0x0021 (size: 0x1)
    FLinearColor Color;                                                               // 0x0024 (size: 0x10)
    float Thickness;                                                                  // 0x0034 (size: 0x4)
    float scale;                                                                      // 0x0038 (size: 0x4)

}; // Size: 0x40

struct FRigVMGraphFunctionArgument
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FName DisplayName;                                                                // 0x0008 (size: 0x8)
    FName CPPType;                                                                    // 0x0010 (size: 0x8)
    TSoftObjectPtr<UObject> CPPTypeObject;                                            // 0x0018 (size: 0x28)
    bool bIsArray;                                                                    // 0x0040 (size: 0x1)
    ERigVMPinDirection Direction;                                                     // 0x0041 (size: 0x1)
    FString DefaultValue;                                                             // 0x0048 (size: 0x10)
    bool bIsConst;                                                                    // 0x0058 (size: 0x1)
    TMap<class FString, class FText> PathToTooltip;                                   // 0x0060 (size: 0x50)

}; // Size: 0xB0

struct FRigVMGraphFunctionData
{
    FRigVMGraphFunctionHeader Header;                                                 // 0x0000 (size: 0x1F8)
    FRigVMFunctionCompilationData CompilationData;                                    // 0x01F8 (size: 0x238)
    FString SerializedCollapsedNode;                                                  // 0x0430 (size: 0x10)

}; // Size: 0x440

struct FRigVMGraphFunctionHeader
{
    FRigVMGraphFunctionIdentifier LibraryPointer;                                     // 0x0000 (size: 0x50)
    FRigVMVariant Variant;                                                            // 0x0050 (size: 0x20)
    FName Name;                                                                       // 0x0070 (size: 0x8)
    FString NodeTitle;                                                                // 0x0078 (size: 0x10)
    FLinearColor NodeColor;                                                           // 0x0088 (size: 0x10)
    FText ToolTip;                                                                    // 0x0098 (size: 0x10)
    FString Description;                                                              // 0x00A8 (size: 0x10)
    FString Category;                                                                 // 0x00B8 (size: 0x10)
    FString Keywords;                                                                 // 0x00C8 (size: 0x10)
    TArray<FRigVMGraphFunctionArgument> Arguments;                                    // 0x00D8 (size: 0x10)
    TMap<FRigVMGraphFunctionIdentifier, uint32> Dependencies;                         // 0x00E8 (size: 0x50)
    TArray<FRigVMExternalVariable> ExternalVariables;                                 // 0x0138 (size: 0x10)
    FRigVMNodeLayout Layout;                                                          // 0x0148 (size: 0xB0)

}; // Size: 0x1F8

struct FRigVMGraphFunctionHeaderArray
{
    TArray<FRigVMGraphFunctionHeader> Headers;                                        // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FRigVMGraphFunctionIdentifier
{
    FSoftObjectPath LibraryNode;                                                      // 0x0000 (size: 0x20)
    FString LibraryNodePath;                                                          // 0x0020 (size: 0x10)
    FSoftObjectPath HostObject;                                                       // 0x0030 (size: 0x20)

}; // Size: 0x50

struct FRigVMGraphFunctionStore
{
    TArray<FRigVMGraphFunctionData> PublicFunctions;                                  // 0x0000 (size: 0x10)
    TArray<FRigVMGraphFunctionData> PrivateFunctions;                                 // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FRigVMInstruction
{
    uint64 ByteCodeIndex;                                                             // 0x0000 (size: 0x8)
    ERigVMOpCode OpCode;                                                              // 0x0008 (size: 0x1)
    uint8 OperandAlignment;                                                           // 0x0009 (size: 0x1)

}; // Size: 0x10

struct FRigVMInstructionArray
{
    TArray<FRigVMInstruction> Instructions;                                           // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FRigVMInstructionSetExecuteState
{
    TMap<uint32, uint32> SliceHashToNumInstruction;                                   // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FRigVMInstructionVisitInfo
{
}; // Size: 0x28

struct FRigVMInvokeEntryOp : public FRigVMBaseOp
{
}; // Size: 0xC

struct FRigVMJumpIfOp : public FRigVMUnaryOp
{
}; // Size: 0x10

struct FRigVMJumpOp : public FRigVMBaseOp
{
}; // Size: 0x8

struct FRigVMJumpToBranchOp : public FRigVMUnaryOp
{
}; // Size: 0xC

struct FRigVMMemoryContainer
{
    bool bUseNameMap;                                                                 // 0x0000 (size: 0x1)
    ERigVMMemoryType MemoryType;                                                      // 0x0001 (size: 0x1)
    TArray<FRigVMRegister> Registers;                                                 // 0x0008 (size: 0x10)
    TArray<FRigVMRegisterOffset> RegisterOffsets;                                     // 0x0018 (size: 0x10)
    TArray<uint8> Data;                                                               // 0x0028 (size: 0x10)
    TArray<class UScriptStruct*> ScriptStructs;                                       // 0x0038 (size: 0x10)
    TMap<FName, int32> NameMap;                                                       // 0x0048 (size: 0x50)
    bool bEncounteredErrorDuringLoad;                                                 // 0x0098 (size: 0x1)

}; // Size: 0xA0

struct FRigVMMemoryStatistics
{
    int32 RegisterCount;                                                              // 0x0000 (size: 0x4)
    int32 DataBytes;                                                                  // 0x0004 (size: 0x4)
    int32 TotalBytes;                                                                 // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FRigVMMemoryStorageStruct : public FInstancedPropertyBag
{
}; // Size: 0x50

struct FRigVMMirrorSettings
{
    TEnumAsByte<EAxis::Type> MirrorAxis;                                              // 0x0000 (size: 0x1)
    TEnumAsByte<EAxis::Type> AxisToFlip;                                              // 0x0001 (size: 0x1)
    FString SearchString;                                                             // 0x0008 (size: 0x10)
    FString ReplaceString;                                                            // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FRigVMNodeLayout
{
    TArray<FRigVMPinCategory> Categories;                                             // 0x0000 (size: 0x10)
    TMap<FString, int32> PinIndexInCategory;                                          // 0x0010 (size: 0x50)
    TMap<class FString, class FString> DisplayNames;                                  // 0x0060 (size: 0x50)

}; // Size: 0xB0

struct FRigVMOperand
{
    ERigVMMemoryType MemoryType;                                                      // 0x0000 (size: 0x1)
    uint16 RegisterIndex;                                                             // 0x0002 (size: 0x2)
    uint16 RegisterOffset;                                                            // 0x0004 (size: 0x2)

}; // Size: 0x6

struct FRigVMParameter
{
    ERigVMParameterType Type;                                                         // 0x0000 (size: 0x1)
    FName Name;                                                                       // 0x0004 (size: 0x8)
    int32 RegisterIndex;                                                              // 0x000C (size: 0x4)
    FString CPPType;                                                                  // 0x0010 (size: 0x10)
    class UScriptStruct* ScriptStruct;                                                // 0x0020 (size: 0x8)
    FName ScriptStructPath;                                                           // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FRigVMPinCategory
{
    FString Path;                                                                     // 0x0000 (size: 0x10)
    TArray<FString> Elements;                                                         // 0x0010 (size: 0x10)
    bool bExpandedByDefault;                                                          // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FRigVMPredicateBranch
{
}; // Size: 0x30

struct FRigVMProfilingInfo
{
}; // Size: 0x28

struct FRigVMQuaternaryOp : public FRigVMBaseOp
{
}; // Size: 0x1A

struct FRigVMQuinaryOp : public FRigVMBaseOp
{
}; // Size: 0x20

struct FRigVMRegister
{
    ERigVMRegisterType Type;                                                          // 0x0000 (size: 0x1)
    uint32 ByteIndex;                                                                 // 0x0004 (size: 0x4)
    uint16 ElementSize;                                                               // 0x0008 (size: 0x2)
    uint16 ElementCount;                                                              // 0x000A (size: 0x2)
    uint16 SliceCount;                                                                // 0x000C (size: 0x2)
    uint8 AlignmentBytes;                                                             // 0x000E (size: 0x1)
    uint16 TrailingBytes;                                                             // 0x0010 (size: 0x2)
    FName Name;                                                                       // 0x0014 (size: 0x8)
    int32 ScriptStructIndex;                                                          // 0x001C (size: 0x4)
    bool bIsArray;                                                                    // 0x0020 (size: 0x1)
    bool bIsDynamic;                                                                  // 0x0021 (size: 0x1)

}; // Size: 0x24

struct FRigVMRegisterOffset
{
    TArray<int32> Segments;                                                           // 0x0000 (size: 0x10)
    ERigVMRegisterType Type;                                                          // 0x0010 (size: 0x1)
    FName CPPType;                                                                    // 0x0014 (size: 0x8)
    class UScriptStruct* ScriptStruct;                                                // 0x0020 (size: 0x8)
    class UScriptStruct* ParentScriptStruct;                                          // 0x0028 (size: 0x8)
    int32 ArrayIndex;                                                                 // 0x0030 (size: 0x4)
    uint16 ElementSize;                                                               // 0x0034 (size: 0x2)
    FString CachedSegmentPath;                                                        // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FRigVMRunInstructionsOp : public FRigVMUnaryOp
{
}; // Size: 0x10

struct FRigVMRuntimeSettings
{
    int32 MaximumArraySize;                                                           // 0x0000 (size: 0x4)

}; // Size: 0x18

struct FRigVMSenaryOp : public FRigVMBaseOp
{
}; // Size: 0x26

struct FRigVMSetupTraitsOp : public FRigVMUnaryOp
{
}; // Size: 0x8

struct FRigVMSimPoint
{
    float Mass;                                                                       // 0x0000 (size: 0x4)
    float Size;                                                                       // 0x0004 (size: 0x4)
    float LinearDamping;                                                              // 0x0008 (size: 0x4)
    float InheritMotion;                                                              // 0x000C (size: 0x4)
    FVector position;                                                                 // 0x0010 (size: 0x18)
    FVector LinearVelocity;                                                           // 0x0028 (size: 0x18)

}; // Size: 0x40

struct FRigVMSlice
{
}; // Size: 0x14

struct FRigVMStatistics
{
    int32 BytesForCDO;                                                                // 0x0000 (size: 0x4)
    int32 BytesPerInstance;                                                           // 0x0004 (size: 0x4)
    FRigVMMemoryStatistics LiteralMemory;                                             // 0x0008 (size: 0xC)
    FRigVMMemoryStatistics WorkMemory;                                                // 0x0014 (size: 0xC)
    FRigVMMemoryStatistics DebugMemory;                                               // 0x0020 (size: 0xC)
    int32 BytesForCaching;                                                            // 0x002C (size: 0x4)
    FRigVMByteCodeStatistics ByteCode;                                                // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FRigVMStruct
{
}; // Size: 0x8

struct FRigVMStructMutable : public FRigVMStruct
{
    FRigVMExecuteContext ExecuteContext;                                              // 0x0010 (size: 0x110)

}; // Size: 0x120

struct FRigVMTag
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FString Label;                                                                    // 0x0008 (size: 0x10)
    FText ToolTip;                                                                    // 0x0018 (size: 0x10)
    FLinearColor Color;                                                               // 0x0028 (size: 0x10)
    bool bShowInUserInterface;                                                        // 0x0038 (size: 0x1)
    bool bMarksSubjectAsInvalid;                                                      // 0x0039 (size: 0x1)

}; // Size: 0x40

struct FRigVMTemplateArgumentType
{
    FName CPPType;                                                                    // 0x0000 (size: 0x8)
    class UObject* CPPTypeObject;                                                     // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FRigVMTernaryOp : public FRigVMBaseOp
{
}; // Size: 0x14

struct FRigVMTrait : public FRigVMStruct
{
    FString Name;                                                                     // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FRigVMUnaryOp : public FRigVMBaseOp
{
}; // Size: 0x8

struct FRigVMUnknownType
{
    uint32 Hash;                                                                      // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FRigVMUserWorkflow
{
    FString Title;                                                                    // 0x0008 (size: 0x10)
    FString ToolTip;                                                                  // 0x0018 (size: 0x10)
    ERigVMUserWorkflowType Type;                                                      // 0x0028 (size: 0x1)
    FRigVMUserWorkflowPerformDynamicDelegate PerformDynamicDelegate;                  // 0x0040 (size: 0x10)
    bool RigVMPeformUserWorkflowDynamicDelegate(const class URigVMUserWorkflowOptions* InOptions, class UObject* InController);
    UClass* OptionsClass;                                                             // 0x0050 (size: 0x8)

}; // Size: 0x58

struct FRigVMVariant
{
    FGuid Guid;                                                                       // 0x0000 (size: 0x10)
    TArray<FRigVMTag> Tags;                                                           // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FRigVMVariantRef
{
    FSoftObjectPath ObjectPath;                                                       // 0x0000 (size: 0x20)
    FRigVMVariant Variant;                                                            // 0x0020 (size: 0x20)

}; // Size: 0x40

class IRigVMGraphFunctionHost : public IInterface
{
}; // Size: 0x28

class UDataAssetLink : public UNameSpacedUserData
{
    TSoftObjectPtr<UDataAsset> DataAsset;                                             // 0x0100 (size: 0x28)
    class UDataAsset* DataAssetCached;                                                // 0x0128 (size: 0x8)

    void SetDataAsset(TSoftObjectPtr<UDataAsset> InDataAsset);
    TSoftObjectPtr<UDataAsset> GetDataAsset();
}; // Size: 0x130

class UDefault__RigVMBlueprintGeneratedClass
{
}; // Size: 0x0

class UDefault__RigVMMemoryStorageGeneratorClass
{
}; // Size: 0x0

class UNameSpacedUserData : public UAssetUserData
{
    FString NameSpace;                                                                // 0x0028 (size: 0x10)

}; // Size: 0x100

class URigVM : public UObject
{
    FRigVMMemoryStorageStruct LiteralMemoryStorage;                                   // 0x0028 (size: 0x50)
    FRigVMMemoryStorageStruct DefaultWorkMemoryStorage;                               // 0x0078 (size: 0x50)
    FRigVMMemoryStorageStruct DefaultDebugMemoryStorage;                              // 0x00C8 (size: 0x50)
    FRigVMByteCode ByteCodeStorage;                                                   // 0x0138 (size: 0xB0)
    FRigVMInstructionArray Instructions;                                              // 0x01F0 (size: 0x10)
    TArray<FName> FunctionNamesStorage;                                               // 0x0208 (size: 0x10)
    TArray<FRigVMParameter> Parameters;                                               // 0x0250 (size: 0x10)
    uint32 CachedVMHash;                                                              // 0x0338 (size: 0x4)

    void SetParameterValueVector2D(const FName& InParameterName, const FVector2D& InValue, int32 InArrayIndex);
    void SetParameterValueVector(const FName& InParameterName, const FVector& InValue, int32 InArrayIndex);
    void SetParameterValueTransform(const FName& InParameterName, const FTransform& InValue, int32 InArrayIndex);
    void SetParameterValueString(const FName& InParameterName, FString InValue, int32 InArrayIndex);
    void SetParameterValueQuat(const FName& InParameterName, const FQuat& InValue, int32 InArrayIndex);
    void SetParameterValueName(const FName& InParameterName, const FName& InValue, int32 InArrayIndex);
    void SetParameterValueInt(const FName& InParameterName, int32 InValue, int32 InArrayIndex);
    void SetParameterValueFloat(const FName& InParameterName, float InValue, int32 InArrayIndex);
    void SetParameterValueDouble(const FName& InParameterName, double InValue, int32 InArrayIndex);
    void SetParameterValueBool(const FName& InParameterName, bool InValue, int32 InArrayIndex);
    FRigVMStatistics GetStatistics();
    FString GetRigVMFunctionName(int32 InFunctionIndex);
    FVector2D GetParameterValueVector2D(const FName& InParameterName, int32 InArrayIndex);
    FVector GetParameterValueVector(const FName& InParameterName, int32 InArrayIndex);
    FTransform GetParameterValueTransform(const FName& InParameterName, int32 InArrayIndex);
    FString GetParameterValueString(const FName& InParameterName, int32 InArrayIndex);
    FQuat GetParameterValueQuat(const FName& InParameterName, int32 InArrayIndex);
    FName GetParameterValueName(const FName& InParameterName, int32 InArrayIndex);
    int32 GetParameterValueInt(const FName& InParameterName, int32 InArrayIndex);
    float GetParameterValueFloat(const FName& InParameterName, int32 InArrayIndex);
    double GetParameterValueDouble(const FName& InParameterName, int32 InArrayIndex);
    bool GetParameterValueBool(const FName& InParameterName, int32 InArrayIndex);
    bool Execute(FRigVMExtendedExecuteContext& Context, const FName& InEntryName);
    int32 AddRigVMFunction(class UScriptStruct* InRigVMStruct, const FName& InMethodName);
}; // Size: 0x390

class URigVMBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
    FRigVMGraphFunctionStore GraphFunctionStore;                                      // 0x0368 (size: 0x20)

}; // Size: 0x388

class URigVMEditorSettings : public UDeveloperSettings
{
}; // Size: 0x38

class URigVMHost : public UObject
{
    FRigVMRuntimeSettings VMRuntimeSettings;                                          // 0x0030 (size: 0x18)
    class URigVM* VM;                                                                 // 0x0058 (size: 0x8)
    TMap<class FString, class FSoftObjectPath> UserDefinedStructGuidToPathName;       // 0x0060 (size: 0x50)
    TMap<class FString, class FSoftObjectPath> UserDefinedEnumToPathName;             // 0x00B0 (size: 0x50)
    TSet<UObject*> UserDefinedTypesInUse;                                             // 0x0100 (size: 0x50)
    FRigVMDrawContainer DrawContainer;                                                // 0x0158 (size: 0x18)
    TArray<FName> EventQueue;                                                         // 0x0188 (size: 0x10)
    TArray<class UAssetUserData*> AssetUserData;                                      // 0x0228 (size: 0x10)

    bool SupportsEvent(const FName& InEventName);
    bool SetVariableFromString(const FName& InVariableName, FString InValue);
    void SetFramesPerSecond(float InFramesPerSecond);
    void SetDeltaTime(float InDeltaTime);
    void SetAbsoluteTime(float InAbsoluteTime, bool InSetDeltaTimeZero);
    void SetAbsoluteAndDeltaTime(float InAbsoluteTime, float InDeltaTime);
    void RequestRunOnceEvent(const FName& InEventName, int32 InEventIndex);
    void RequestInit();
    bool RemoveRunOnceEvent(const FName& InEventName);
    bool IsInitRequired();
    class URigVM* GetVM();
    FName GetVariableType(const FName& InVariableName);
    FString GetVariableAsString(const FName& InVariableName);
    TArray<FName> GetSupportedEvents();
    TArray<FName> GetScriptAccessibleVariables();
    FRigVMExtendedExecuteContext GetExtendedExecuteContext();
    float GetDeltaTime();
    float GetCurrentFramesPerSecond();
    float GetAbsoluteTime();
    TArray<class URigVMHost*> FindRigVMHosts(class UObject* Outer, TSubclassOf<class URigVMHost> OptionalClass);
    bool ExecuteEvent(const FName& InEventName);
    bool Execute(const FName& InEventName);
    bool CanExecute();
}; // Size: 0x278

class URigVMMemoryStorage : public UObject
{
}; // Size: 0x28

class URigVMMemoryStorageGeneratorClass : public UClass
{
}; // Size: 0x240

class URigVMNativized : public URigVM
{
}; // Size: 0x3B8

class URigVMProjectSettings : public UDeveloperSettings
{
    TArray<FRigVMTag> VariantTags;                                                    // 0x0038 (size: 0x10)

    FRigVMTag GetTag(FName InTagName);
}; // Size: 0x48

class URigVMUserWorkflowOptions : public UObject
{
    class UObject* Subject;                                                           // 0x0028 (size: 0x8)
    FRigVMUserWorkflow Workflow;                                                      // 0x0030 (size: 0x58)

    bool RequiresDialog();
    void ReportWarning(FString InMessage);
    void ReportInfo(FString InMessage);
    void ReportError(FString InMessage);
    bool IsValid();
}; // Size: 0x98

#endif
