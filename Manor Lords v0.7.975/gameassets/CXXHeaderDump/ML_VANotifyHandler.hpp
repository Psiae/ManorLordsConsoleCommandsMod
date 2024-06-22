#ifndef UE4SS_SDK_ML_VANotifyHandler_HPP
#define UE4SS_SDK_ML_VANotifyHandler_HPP

class UML_VANotifyHandler_C : public UVANotifyHandler
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0028 (size: 0x8)

    void playSfxAndVfxIfClose(FName cueName, class UParticleSystem* EmitterTemplate, FName SocketName, FTransform Offset);
    void playSfxIfClose(FName cueName);
    void AnimNotify_animEnding();
    void AnimNotify_hit();
    void AnimNotify_loopOut();
    void AnimNotify_step();
    void AnimNotify_deathEnding();
    void AnimNotify_arrow();
    void AnimNotify_death();
    void AnimNotify_sfx_cow();
    void AnimNotify_sfx_cowHead();
    void AnimNotify_sfx_hitShield();
    void AnimNotify_sfx_poleBlock();
    void AnimNotify_sfx_attack();
    void AnimNotify_loadDrop();
    void AnimNotify_loadEquip();
    void AnimNotifY_sfx_takeOutTool();
    void AnimNotify_sfx_quiver();
    void AnimNotify_Randomize();
    void ExecuteUbergraph_ML_VANotifyHandler(int32 EntryPoint);
}; // Size: 0x30

#endif
