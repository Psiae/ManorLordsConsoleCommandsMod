#ifndef UE4SS_SDK_NiagaraAnimNotifies_HPP
#define UE4SS_SDK_NiagaraAnimNotifies_HPP

class UAnimNotifyState_TimedNiagaraEffect : public UAnimNotifyState
{
    class UNiagaraSystem* Template;                                                   // 0x0030 (size: 0x8)
    FName SocketName;                                                                 // 0x0038 (size: 0x8)
    FVector LocationOffset;                                                           // 0x0040 (size: 0xC)
    FRotator RotationOffset;                                                          // 0x004C (size: 0xC)
    bool bDestroyAtEnd;                                                               // 0x0058 (size: 0x1)

    class UFXSystemComponent* GetSpawnedEffect(class UMeshComponent* MeshComp);
}; // Size: 0x60

class UAnimNotifyState_TimedNiagaraEffectAdvanced : public UAnimNotifyState_TimedNiagaraEffect
{

    float GetNotifyProgress(class UMeshComponent* MeshComp);
}; // Size: 0xB0

class UAnimNotify_PlayNiagaraEffect : public UAnimNotify
{
    class UNiagaraSystem* Template;                                                   // 0x0038 (size: 0x8)
    FVector LocationOffset;                                                           // 0x0040 (size: 0xC)
    FRotator RotationOffset;                                                          // 0x004C (size: 0xC)
    FVector Scale;                                                                    // 0x0058 (size: 0xC)
    bool bAbsoluteScale;                                                              // 0x0064 (size: 0x1)
    uint8 Attached;                                                                   // 0x0080 (size: 0x1)
    FName SocketName;                                                                 // 0x0084 (size: 0x8)

    class UFXSystemComponent* GetSpawnedEffect();
}; // Size: 0x90

#endif
