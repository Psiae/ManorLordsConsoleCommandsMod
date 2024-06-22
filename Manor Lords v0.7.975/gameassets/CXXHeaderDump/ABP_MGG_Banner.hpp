#ifndef UE4SS_SDK_ABP_MGG_Banner_HPP
#define UE4SS_SDK_ABP_MGG_Banner_HPP

class UABP_MGG_Banner_C : public UBannerAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend;                                  // 0x02E8 (size: 0xC8)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2;                    // 0x03B0 (size: 0x50)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;                    // 0x0400 (size: 0x50)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x0450 (size: 0xA0)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x04F0 (size: 0x30)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;                      // 0x0520 (size: 0x50)
    class UPoseAsset* animPose;                                                       // 0x0570 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MGG_Banner_AnimGraphNode_SequenceEvaluator_966B7A884EA300921E877A8EBD9F78B9();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MGG_Banner_AnimGraphNode_SequenceEvaluator_2D15F59B4F4B593CFB37A0A7CCD63DC1();
    void ExecuteUbergraph_ABP_MGG_Banner(int32 EntryPoint);
}; // Size: 0x578

#endif
