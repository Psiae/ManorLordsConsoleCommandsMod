#ifndef UE4SS_SDK_NiagaraAnimNotifies_HPP
#define UE4SS_SDK_NiagaraAnimNotifies_HPP

struct FCurveParameterPair
{
    FName AnimCurveName;                                                              // 0x0000 (size: 0x8)
    FName UserVariableName;                                                           // 0x0008 (size: 0x8)

}; // Size: 0x10

class UAnimNotifyState_TimedNiagaraEffect : public UAnimNotifyState
{
    class UNiagaraSystem* Template;                                                   // 0x0030 (size: 0x8)
    FName SocketName;                                                                 // 0x0038 (size: 0x8)
    FVector LocationOffset;                                                           // 0x0040 (size: 0x18)
    FRotator RotationOffset;                                                          // 0x0058 (size: 0x18)
    bool bApplyRateScaleAsTimeDilation;                                               // 0x0070 (size: 0x1)
    bool bDestroyAtEnd;                                                               // 0x0071 (size: 0x1)

    class UFXSystemComponent* GetSpawnedEffect(class UMeshComponent* MeshComp);
}; // Size: 0x78

class UAnimNotifyState_TimedNiagaraEffectAdvanced : public UAnimNotifyState_TimedNiagaraEffect
{
    bool bEnableNormalizedNotifyProgress;                                             // 0x0078 (size: 0x1)
    bool bApplyRateScaleToProgress;                                                   // 0x0079 (size: 0x1)
    FName NotifyProgressUserParameter;                                                // 0x007C (size: 0x8)
    TArray<FCurveParameterPair> AnimCurves;                                           // 0x0088 (size: 0x10)

    float GetNotifyProgress(class UMeshComponent* MeshComp);
}; // Size: 0xE8

class UAnimNotify_PlayNiagaraEffect : public UAnimNotify
{
    class UNiagaraSystem* Template;                                                   // 0x0038 (size: 0x8)
    FVector LocationOffset;                                                           // 0x0040 (size: 0x18)
    FRotator RotationOffset;                                                          // 0x0058 (size: 0x18)
    FVector Scale;                                                                    // 0x0070 (size: 0x18)
    bool bAbsoluteScale;                                                              // 0x0088 (size: 0x1)
    uint8 Attached;                                                                   // 0x00C0 (size: 0x1)
    FName SocketName;                                                                 // 0x00C4 (size: 0x8)

    class UFXSystemComponent* GetSpawnedEffect();
}; // Size: 0xD0

#endif
