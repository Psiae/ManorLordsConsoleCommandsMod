#ifndef UE4SS_SDK_FallenTreeBP_HPP
#define UE4SS_SDK_FallenTreeBP_HPP

class AFallenTreeBP_C : public AResource
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0328 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0330 (size: 0x8)
    float death_NewTrack_0_70C8B5C84B4F30B0AC80B880FA86F5B9;                          // 0x0338 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> death__Direction_70C8B5C84B4F30B0AC80B880FA86F5B9; // 0x033C (size: 0x1)
    class UTimelineComponent* death;                                                  // 0x0340 (size: 0x8)
    float fallAnim_wind_1A6DBA594B97876A8BEB8E9A5B672A41;                             // 0x0348 (size: 0x4)
    float fallAnim_rotation_1A6DBA594B97876A8BEB8E9A5B672A41;                         // 0x034C (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> fallAnim__Direction_1A6DBA594B97876A8BEB8E9A5B672A41; // 0x0350 (size: 0x1)
    class UTimelineComponent* fallAnim;                                               // 0x0358 (size: 0x8)
    FTransform InitialTransform;                                                      // 0x0360 (size: 0x60)
    class UMaterialInstanceDynamic* Mat0;                                             // 0x03C0 (size: 0x8)
    class UMaterialInstanceDynamic* Mat1;                                             // 0x03C8 (size: 0x8)
    double fallTime;                                                                  // 0x03D0 (size: 0x8)
    class AMyPawnCPP_BP3_C* playerRef;                                                // 0x03D8 (size: 0x8)
    FTransform toppledTransform;                                                      // 0x03E0 (size: 0x60)

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
}; // Size: 0x440

#endif
