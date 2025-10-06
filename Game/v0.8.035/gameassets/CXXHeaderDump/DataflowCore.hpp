#ifndef UE4SS_SDK_DataflowCore_HPP
#define UE4SS_SDK_DataflowCore_HPP

#include "DataflowCore_enums.hpp"

struct FDataflowAllTypes : public FDataflowAnyType
{
}; // Size: 0x1

struct FDataflowAnyType
{
}; // Size: 0x1

struct FDataflowArrayInput : public FDataflowInput
{
}; // Size: 0x60

struct FDataflowBranchNode : public FDataflowNode
{
    FDataflowAnyType TrueValue;                                                       // 0x0198 (size: 0x1)
    FDataflowAnyType FalseValue;                                                      // 0x0199 (size: 0x1)
    bool bCondition;                                                                  // 0x019A (size: 0x1)
    FDataflowAnyType Result;                                                          // 0x019B (size: 0x1)

}; // Size: 0x1A0

struct FDataflowConnection
{
}; // Size: 0x48

struct FDataflowFaceSelection : public FDataflowSelection
{
}; // Size: 0x20

struct FDataflowGeometrySelection : public FDataflowSelection
{
}; // Size: 0x20

struct FDataflowInput : public FDataflowConnection
{
}; // Size: 0x50

struct FDataflowMaterialSelection : public FDataflowSelection
{
}; // Size: 0x20

struct FDataflowMathAbsNode : public FDataflowMathOneInputOperatorNode
{
    FDataflowNumericTypes Fallback;                                                   // 0x01A8 (size: 0x8)

}; // Size: 0x1B0

struct FDataflowMathAddNode : public FDataflowMathTwoInputsOperatorNode
{
}; // Size: 0x1B0

struct FDataflowMathArcCosNode : public FDataflowMathOneInputOperatorNode
{
}; // Size: 0x1A8

struct FDataflowMathArcSinNode : public FDataflowMathOneInputOperatorNode
{
}; // Size: 0x1A8

struct FDataflowMathArcTan2Node : public FDataflowMathTwoInputsOperatorNode
{
}; // Size: 0x1B0

struct FDataflowMathArcTanNode : public FDataflowMathOneInputOperatorNode
{
}; // Size: 0x1A8

struct FDataflowMathCeilNode : public FDataflowMathOneInputOperatorNode
{
}; // Size: 0x1A8

struct FDataflowMathConstantNode : public FDataflowNode
{
    EDataflowMathConstantsEnum Constant;                                              // 0x0198 (size: 0x1)
    FDataflowNumericTypes Result;                                                     // 0x01A0 (size: 0x8)

}; // Size: 0x1A8

struct FDataflowMathCosNode : public FDataflowMathOneInputOperatorNode
{
}; // Size: 0x1A8

struct FDataflowMathCubeNode : public FDataflowMathOneInputOperatorNode
{
}; // Size: 0x1A8

struct FDataflowMathDegToRadNode : public FDataflowMathOneInputOperatorNode
{
}; // Size: 0x1A8

struct FDataflowMathDivideNode : public FDataflowMathTwoInputsOperatorNode
{
    FDataflowNumericTypes Fallback;                                                   // 0x01B0 (size: 0x8)

}; // Size: 0x1B8

struct FDataflowMathExpNode : public FDataflowMathOneInputOperatorNode
{
}; // Size: 0x1A8

struct FDataflowMathFloorNode : public FDataflowMathOneInputOperatorNode
{
}; // Size: 0x1A8

struct FDataflowMathFracNode : public FDataflowMathOneInputOperatorNode
{
}; // Size: 0x1A8

struct FDataflowMathInverseSquareRootNode : public FDataflowMathOneInputOperatorNode
{
    FDataflowNumericTypes Fallback;                                                   // 0x01A8 (size: 0x8)

}; // Size: 0x1B0

struct FDataflowMathLogNode : public FDataflowMathOneInputOperatorNode
{
}; // Size: 0x1A8

struct FDataflowMathLogXNode : public FDataflowMathOneInputOperatorNode
{
    FDataflowNumericTypes base;                                                       // 0x01A8 (size: 0x8)

}; // Size: 0x1B0

struct FDataflowMathMaximumNode : public FDataflowMathTwoInputsOperatorNode
{
}; // Size: 0x1B0

struct FDataflowMathMinimumNode : public FDataflowMathTwoInputsOperatorNode
{
}; // Size: 0x1B0

struct FDataflowMathMultiplyNode : public FDataflowMathTwoInputsOperatorNode
{
}; // Size: 0x1B0

struct FDataflowMathNegateNode : public FDataflowMathOneInputOperatorNode
{
    FDataflowNumericTypes Fallback;                                                   // 0x01A8 (size: 0x8)

}; // Size: 0x1B0

struct FDataflowMathOneInputOperatorNode : public FDataflowNode
{
    FDataflowNumericTypes A;                                                          // 0x0198 (size: 0x8)
    FDataflowNumericTypes Result;                                                     // 0x01A0 (size: 0x8)

}; // Size: 0x1A8

struct FDataflowMathOneMinusNode : public FDataflowMathOneInputOperatorNode
{
}; // Size: 0x1A8

struct FDataflowMathPowNode : public FDataflowMathTwoInputsOperatorNode
{
}; // Size: 0x1B0

struct FDataflowMathRadToDegNode : public FDataflowMathOneInputOperatorNode
{
}; // Size: 0x1A8

struct FDataflowMathReciprocalNode : public FDataflowMathOneInputOperatorNode
{
    FDataflowNumericTypes Fallback;                                                   // 0x01A8 (size: 0x8)

}; // Size: 0x1B0

struct FDataflowMathRoundNode : public FDataflowMathOneInputOperatorNode
{
}; // Size: 0x1A8

struct FDataflowMathSignNode : public FDataflowMathOneInputOperatorNode
{
}; // Size: 0x1A8

struct FDataflowMathSinNode : public FDataflowMathOneInputOperatorNode
{
}; // Size: 0x1A8

struct FDataflowMathSquareNode : public FDataflowMathOneInputOperatorNode
{
}; // Size: 0x1A8

struct FDataflowMathSquareRootNode : public FDataflowMathOneInputOperatorNode
{
}; // Size: 0x1A8

struct FDataflowMathSubtractNode : public FDataflowMathTwoInputsOperatorNode
{
}; // Size: 0x1B0

struct FDataflowMathTanNode : public FDataflowMathOneInputOperatorNode
{
}; // Size: 0x1A8

struct FDataflowMathTruncNode : public FDataflowMathOneInputOperatorNode
{
}; // Size: 0x1A8

struct FDataflowMathTwoInputsOperatorNode : public FDataflowNode
{
    FDataflowNumericTypes A;                                                          // 0x0198 (size: 0x8)
    FDataflowNumericTypes B;                                                          // 0x01A0 (size: 0x8)
    FDataflowNumericTypes Result;                                                     // 0x01A8 (size: 0x8)

}; // Size: 0x1B0

struct FDataflowNode
{
    bool bActive;                                                                     // 0x00C8 (size: 0x1)

}; // Size: 0x198

struct FDataflowNumericTypes : public FDataflowAnyType
{
    double Value;                                                                     // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FDataflowOutput : public FDataflowConnection
{
}; // Size: 0x78

struct FDataflowOverrideNode : public FDataflowNode
{
    FName Key;                                                                        // 0x0198 (size: 0x8)
    FString Default;                                                                  // 0x01A0 (size: 0x10)
    bool IsOverriden;                                                                 // 0x01B0 (size: 0x1)

}; // Size: 0x1B8

struct FDataflowPrintNode : public FDataflowNode
{
    FDataflowStringConvertibleTypes Value;                                            // 0x0198 (size: 0x10)

}; // Size: 0x1A8

struct FDataflowReRouteNode : public FDataflowNode
{
    FDataflowAnyType Value;                                                           // 0x0198 (size: 0x1)

}; // Size: 0x1A0

struct FDataflowSelectNode : public FDataflowNode
{
    TArray<FDataflowAnyType> Inputs;                                                  // 0x0198 (size: 0x10)
    int32 SelectedIndex;                                                              // 0x01A8 (size: 0x4)
    FDataflowAnyType Result;                                                          // 0x01AC (size: 0x1)

}; // Size: 0x1B0

struct FDataflowSelection
{
}; // Size: 0x20

struct FDataflowStringConvertibleTypes : public FDataflowAnyType
{
    FString Value;                                                                    // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FDataflowStringTypes : public FDataflowAnyType
{
    FString Value;                                                                    // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FDataflowTerminalNode : public FDataflowNode
{
}; // Size: 0x198

struct FDataflowTransformSelection : public FDataflowSelection
{
}; // Size: 0x20

struct FDataflowUObjectConvertibleTypes : public FDataflowAnyType
{
    class UObject* Value;                                                             // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FDataflowVectorAddNode : public FDataflowNode
{
    FDataflowVectorTypes A;                                                           // 0x01A0 (size: 0x20)
    FDataflowVectorTypes B;                                                           // 0x01C0 (size: 0x20)
    FDataflowVectorTypes V;                                                           // 0x01E0 (size: 0x20)

}; // Size: 0x200

struct FDataflowVectorBreakNode : public FDataflowNode
{
    FDataflowVectorTypes V;                                                           // 0x01A0 (size: 0x20)
    FDataflowNumericTypes X;                                                          // 0x01C0 (size: 0x8)
    FDataflowNumericTypes Y;                                                          // 0x01C8 (size: 0x8)
    FDataflowNumericTypes Z;                                                          // 0x01D0 (size: 0x8)
    FDataflowNumericTypes W;                                                          // 0x01D8 (size: 0x8)

}; // Size: 0x1E0

struct FDataflowVectorCrossProductNode : public FDataflowNode
{
    FDataflowVectorTypes A;                                                           // 0x01A0 (size: 0x20)
    FDataflowVectorTypes B;                                                           // 0x01C0 (size: 0x20)
    FDataflowVectorTypes CrossProduct;                                                // 0x01E0 (size: 0x20)

}; // Size: 0x200

struct FDataflowVectorDistanceNode : public FDataflowNode
{
    FDataflowVectorTypes A;                                                           // 0x01A0 (size: 0x20)
    FDataflowVectorTypes B;                                                           // 0x01C0 (size: 0x20)
    FDataflowNumericTypes Distance;                                                   // 0x01E0 (size: 0x8)

}; // Size: 0x1F0

struct FDataflowVectorDotProductNode : public FDataflowNode
{
    FDataflowVectorTypes A;                                                           // 0x01A0 (size: 0x20)
    FDataflowVectorTypes B;                                                           // 0x01C0 (size: 0x20)
    FDataflowNumericTypes DotProduct;                                                 // 0x01E0 (size: 0x8)

}; // Size: 0x1F0

struct FDataflowVectorLengthNode : public FDataflowNode
{
    FDataflowVectorTypes V;                                                           // 0x01A0 (size: 0x20)
    FDataflowNumericTypes Length;                                                     // 0x01C0 (size: 0x8)

}; // Size: 0x1D0

struct FDataflowVectorMakeVec2Node : public FDataflowNode
{
    FDataflowNumericTypes X;                                                          // 0x0198 (size: 0x8)
    FDataflowNumericTypes Y;                                                          // 0x01A0 (size: 0x8)
    FDataflowVectorTypes Vector2D;                                                    // 0x01B0 (size: 0x20)

}; // Size: 0x1D0

struct FDataflowVectorMakeVec3Node : public FDataflowNode
{
    FDataflowNumericTypes X;                                                          // 0x0198 (size: 0x8)
    FDataflowNumericTypes Y;                                                          // 0x01A0 (size: 0x8)
    FDataflowNumericTypes Z;                                                          // 0x01A8 (size: 0x8)
    FDataflowVectorTypes Vector3d;                                                    // 0x01B0 (size: 0x20)

}; // Size: 0x1D0

struct FDataflowVectorMakeVec4Node : public FDataflowNode
{
    FDataflowNumericTypes X;                                                          // 0x0198 (size: 0x8)
    FDataflowNumericTypes Y;                                                          // 0x01A0 (size: 0x8)
    FDataflowNumericTypes Z;                                                          // 0x01A8 (size: 0x8)
    FDataflowNumericTypes W;                                                          // 0x01B0 (size: 0x8)
    FDataflowVectorTypes Vector4d;                                                    // 0x01C0 (size: 0x20)

}; // Size: 0x1E0

struct FDataflowVectorNormalize : public FDataflowNode
{
    FDataflowVectorTypes V;                                                           // 0x01A0 (size: 0x20)
    FDataflowVectorTypes Normalized;                                                  // 0x01C0 (size: 0x20)

}; // Size: 0x1E0

struct FDataflowVectorScaleNode : public FDataflowNode
{
    FDataflowVectorTypes V;                                                           // 0x01A0 (size: 0x20)
    FDataflowNumericTypes scale;                                                      // 0x01C0 (size: 0x8)
    FDataflowVectorTypes Scaled;                                                      // 0x01D0 (size: 0x20)

}; // Size: 0x1F0

struct FDataflowVectorSquaredLengthNode : public FDataflowNode
{
    FDataflowVectorTypes V;                                                           // 0x01A0 (size: 0x20)
    FDataflowNumericTypes SquaredLength;                                              // 0x01C0 (size: 0x8)

}; // Size: 0x1D0

struct FDataflowVectorSubtractNode : public FDataflowNode
{
    FDataflowVectorTypes A;                                                           // 0x01A0 (size: 0x20)
    FDataflowVectorTypes B;                                                           // 0x01C0 (size: 0x20)
    FDataflowVectorTypes V;                                                           // 0x01E0 (size: 0x20)

}; // Size: 0x200

struct FDataflowVectorTypes : public FDataflowAnyType
{
    FVector4 Value;                                                                   // 0x0000 (size: 0x20)

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
    FLinearColor DataflowAnyTypePinTypeColor;                                         // 0x0078 (size: 0x10)
    TMap<class FName, class FNodeColors> NodeColorsMap;                               // 0x0088 (size: 0x50)

}; // Size: 0xF0

#endif
