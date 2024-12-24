#ifndef UE4SS_SDK_Bow_AnimBP_HPP
#define UE4SS_SDK_Bow_AnimBP_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_7;                                                           // 0x0004 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_8;                                          // 0x0010 (size: 0x20)
    float __FloatProperty_9;                                                          // 0x0030 (size: 0x4)
    TEnumAsByte<ESequenceEvalReinit::Type> __ByteProperty_10;                         // 0x0034 (size: 0x1)
    bool __BoolProperty_11;                                                           // 0x0035 (size: 0x1)
    int32 __IntProperty_12;                                                           // 0x0038 (size: 0x4)
    class UAnimSequenceBase* __AnimSequenceBase_13;                                   // 0x0040 (size: 0x8)
    bool __BoolProperty_14;                                                           // 0x0048 (size: 0x1)
    EAnimSyncMethod __EnumProperty_15;                                                // 0x0049 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_16;                              // 0x004A (size: 0x1)
    FName __NameProperty_17;                                                          // 0x004C (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0058 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00D8 (size: 0x18)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x00F0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequenceEvaluator;      // 0x0120 (size: 0x30)

}; // Size: 0x150

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)

}; // Size: 0x8

class UBow_AnimBP_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0378 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0380 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0388 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0390 (size: 0x20)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;                      // 0x03B0 (size: 0x40)
    double Draw;                                                                      // 0x03F0 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_Bow_AnimBP(int32 EntryPoint);
}; // Size: 0x3F8

#endif
