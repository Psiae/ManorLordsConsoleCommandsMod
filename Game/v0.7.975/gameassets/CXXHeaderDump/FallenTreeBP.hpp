#ifndef UE4SS_SDK_FallenTreeBP_HPP
#define UE4SS_SDK_FallenTreeBP_HPP

class AFallenTreeBP_C : public AResource
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x02B8 (size: 0x8)
    float death_NewTrack_0_70C8B5C84B4F30B0AC80B880FA86F5B9;                          // 0x02C0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> death__Direction_70C8B5C84B4F30B0AC80B880FA86F5B9; // 0x02C4 (size: 0x1)
    class UTimelineComponent* death;                                                  // 0x02C8 (size: 0x8)
    float fallAnim_wind_1A6DBA594B97876A8BEB8E9A5B672A41;                             // 0x02D0 (size: 0x4)
    float fallAnim_rotation_1A6DBA594B97876A8BEB8E9A5B672A41;                         // 0x02D4 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> fallAnim__Direction_1A6DBA594B97876A8BEB8E9A5B672A41; // 0x02D8 (size: 0x1)
    class UTimelineComponent* fallAnim;                                               // 0x02E0 (size: 0x8)
    FTransform InitialTransform;                                                      // 0x02F0 (size: 0x30)
    class UMaterialInstanceDynamic* Mat0;                                             // 0x0320 (size: 0x8)
    class UMaterialInstanceDynamic* Mat1;                                             // 0x0328 (size: 0x8)
    float fallTime;                                                                   // 0x0330 (size: 0x4)
    class AMyPawnCPP_BP3_C* playerRef;                                                // 0x0338 (size: 0x8)
    FTransform toppledTransform;                                                      // 0x0340 (size: 0x30)

    void fallAnim__FinishedFunc();
    void fallAnim__UpdateFunc();
    void fallAnim__event__EventFunc();
    void death__FinishedFunc();
    void death__UpdateFunc();
    void removeResource();
    void ReceiveTick(float DeltaSeconds);
    void startFalling();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_FallenTreeBP(int32 EntryPoint);
}; // Size: 0x370

#endif
