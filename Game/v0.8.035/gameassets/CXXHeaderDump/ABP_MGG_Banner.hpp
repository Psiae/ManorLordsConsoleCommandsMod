#ifndef UE4SS_SDK_ABP_MGG_Banner_HPP
#define UE4SS_SDK_ABP_MGG_Banner_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    class UAnimSequenceBase* __AnimSequenceBase_42;                                   // 0x0008 (size: 0x8)
    class UBlendProfile* __BlendProfile_43;                                           // 0x0010 (size: 0x8)
    class UCurveFloat* __CurveFloat_44;                                               // 0x0018 (size: 0x8)
    EAlphaBlendOption __EnumProperty_45;                                              // 0x0020 (size: 0x1)
    EBlendListTransitionType __EnumProperty_46;                                       // 0x0021 (size: 0x1)
    TArray<float> __ArrayProperty_47;                                                 // 0x0028 (size: 0x10)
    FName __NameProperty_48;                                                          // 0x0038 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_49;                                         // 0x0040 (size: 0x20)
    TEnumAsByte<ESequenceEvalReinit::Type> __ByteProperty_50;                         // 0x0060 (size: 0x1)
    bool __BoolProperty_51;                                                           // 0x0061 (size: 0x1)
    int32 __IntProperty_52;                                                           // 0x0064 (size: 0x4)
    float __FloatProperty_53;                                                         // 0x0068 (size: 0x4)
    bool __BoolProperty_54;                                                           // 0x006C (size: 0x1)
    EAnimSyncMethod __EnumProperty_55;                                                // 0x006D (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_56;                              // 0x006E (size: 0x1)
    FName __NameProperty_57;                                                          // 0x0070 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0078 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00F8 (size: 0x18)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TwoWayBlend;            // 0x0110 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequenceEvaluator_2;    // 0x0140 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequenceEvaluator_1;    // 0x0170 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendListByBool;        // 0x01A0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x01D0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequenceEvaluator;      // 0x0200 (size: 0x30)

}; // Size: 0x230

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)
    float __FloatProperty_0;                                                          // 0x0008 (size: 0x4)
    bool __BoolProperty_1;                                                            // 0x000C (size: 0x1)
    class UAnimSequenceBase* __AnimSequenceBase_2;                                    // 0x0010 (size: 0x8)

}; // Size: 0x18

class UABP_MGG_Banner_C : public UBannerAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E0 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x03E8 (size: 0x18)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0400 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0408 (size: 0x8)
    FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend;                                  // 0x0410 (size: 0xC8)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2;                    // 0x04D8 (size: 0x40)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;                    // 0x0518 (size: 0x40)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x0558 (size: 0x48)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x05A0 (size: 0x20)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;                      // 0x05C0 (size: 0x40)
    class UPoseAsset* animPose;                                                       // 0x0600 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MGG_Banner_AnimGraphNode_SequenceEvaluator_966B7A884EA300921E877A8EBD9F78B9();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MGG_Banner_AnimGraphNode_SequenceEvaluator_2D15F59B4F4B593CFB37A0A7CCD63DC1();
    void ExecuteUbergraph_ABP_MGG_Banner(int32 EntryPoint);
}; // Size: 0x608

#endif
