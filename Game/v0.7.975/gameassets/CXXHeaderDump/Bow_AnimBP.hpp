#ifndef UE4SS_SDK_Bow_AnimBP_HPP
#define UE4SS_SDK_Bow_AnimBP_HPP

class UBow_AnimBP_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x02C8 (size: 0x30)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;                      // 0x02F8 (size: 0x50)
    float Draw;                                                                       // 0x0348 (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_Bow_AnimBP(int32 EntryPoint);
}; // Size: 0x34C

#endif
