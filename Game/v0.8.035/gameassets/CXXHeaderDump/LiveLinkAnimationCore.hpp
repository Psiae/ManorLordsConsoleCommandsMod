#ifndef UE4SS_SDK_LiveLinkAnimationCore_HPP
#define UE4SS_SDK_LiveLinkAnimationCore_HPP

struct FAnimNode_LiveLinkPose : public FAnimNode_Base
{
    FPoseLink InputPose;                                                              // 0x0010 (size: 0x10)
    FLiveLinkSubjectName LiveLinkSubjectName;                                         // 0x0020 (size: 0x8)
    bool bDoLiveLinkEvaluation;                                                       // 0x0028 (size: 0x1)
    TSubclassOf<class ULiveLinkRetargetAsset> RetargetAsset;                          // 0x0030 (size: 0x8)
    class ULiveLinkRetargetAsset* CurrentRetargetAsset;                               // 0x0038 (size: 0x8)

}; // Size: 0x68

struct FLiveLinkInstanceProxy : public FAnimInstanceProxy
{
    FAnimNode_LiveLinkPose PoseNode;                                                  // 0x0798 (size: 0x68)

}; // Size: 0x800

class ULiveLinkInstance : public UAnimInstance
{
    class ULiveLinkRetargetAsset* CurrentRetargetAsset;                               // 0x03B8 (size: 0x8)

    void SetSubject(FLiveLinkSubjectName SubjectName);
    void SetRetargetAsset(TSubclassOf<class ULiveLinkRetargetAsset> RetargetAsset);
    void EnableLiveLinkEvaluation(bool bDoEnable);
}; // Size: 0x3C0

class ULiveLinkRemapAsset : public ULiveLinkRetargetAsset
{

    void RemapCurveElements(TMap<FName, float>& CurveItems);
    FName GetRemappedCurveName(FName CurveName);
    FName GetRemappedBoneName(FName BoneName);
}; // Size: 0xC8

class ULiveLinkRetargetAsset : public UObject
{
}; // Size: 0x28

#endif
