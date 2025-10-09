#ifndef UE4SS_SDK_ALS_AnimMan_CharacterBP_HPP
#define UE4SS_SDK_ALS_AnimMan_CharacterBP_HPP

class AALS_AnimMan_CharacterBP_C : public AALS_Base_CharacterBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x07E8 (size: 0x8)
    FLinearColor DefaultColor;                                                        // 0x07F0 (size: 0x10)
    FLinearColor SkinColor;                                                           // 0x0800 (size: 0x10)
    FLinearColor ShirtColor;                                                          // 0x0810 (size: 0x10)
    FLinearColor PantsColor;                                                          // 0x0820 (size: 0x10)
    FLinearColor ShoesColor;                                                          // 0x0830 (size: 0x10)
    FLinearColor GlovesColor;                                                         // 0x0840 (size: 0x10)
    int32 ShirtType;                                                                  // 0x0850 (size: 0x4)
    int32 PantsType;                                                                  // 0x0854 (size: 0x4)
    bool shoes;                                                                       // 0x0858 (size: 0x1)
    bool Gloves;                                                                      // 0x0859 (size: 0x1)
    bool SolidColor;                                                                  // 0x085A (size: 0x1)
    FLinearColor BaseLayerColor;                                                      // 0x085C (size: 0x10)
    FLinearColor OverlayLayerColor;                                                   // 0x086C (size: 0x10)
    FLinearColor AdditiveAmount_Color;                                                // 0x087C (size: 0x10)
    FLinearColor Hand_Color;                                                          // 0x088C (size: 0x10)
    FLinearColor HandIK_Color;                                                        // 0x089C (size: 0x10)
    class UMaterialInstanceDynamic* Head;                                             // 0x08B0 (size: 0x8)
    class UMaterialInstanceDynamic* Torso;                                            // 0x08B8 (size: 0x8)
    class UMaterialInstanceDynamic* pelvis;                                           // 0x08C0 (size: 0x8)
    class UMaterialInstanceDynamic* Feet;                                             // 0x08C8 (size: 0x8)
    class UMaterialInstanceDynamic* Shoulder_L;                                       // 0x08D0 (size: 0x8)
    class UMaterialInstanceDynamic* UpperArm_L;                                       // 0x08D8 (size: 0x8)
    class UMaterialInstanceDynamic* LowerArm_L;                                       // 0x08E0 (size: 0x8)
    class UMaterialInstanceDynamic* Hand_L;                                           // 0x08E8 (size: 0x8)
    class UMaterialInstanceDynamic* Shoulder_R;                                       // 0x08F0 (size: 0x8)
    class UMaterialInstanceDynamic* UpperArm_R;                                       // 0x08F8 (size: 0x8)
    class UMaterialInstanceDynamic* LowerArm_R;                                       // 0x0900 (size: 0x8)
    class UMaterialInstanceDynamic* Hand_R;                                           // 0x0908 (size: 0x8)
    class UMaterialInstanceDynamic* UpperLegs;                                        // 0x0910 (size: 0x8)
    class UMaterialInstanceDynamic* LowerLegs;                                        // 0x0918 (size: 0x8)
    FMantle_Asset Mantle_2m_Default;                                                  // 0x0920 (size: 0x38)
    FMantle_Asset Mantle_1m_Default;                                                  // 0x0958 (size: 0x38)
    FMantle_Asset Mantle_1m_RH;                                                       // 0x0990 (size: 0x38)
    FMantle_Asset Mantle_1m_LH;                                                       // 0x09C8 (size: 0x38)
    FMantle_Asset Mantle_1m_2H;                                                       // 0x0A00 (size: 0x38)
    FMantle_Asset Mantle_1m_Box;                                                      // 0x0A38 (size: 0x38)
    class UAnimMontage* LandRoll_Default;                                             // 0x0A70 (size: 0x8)
    class UAnimMontage* GetUpFront_Default;                                           // 0x0A78 (size: 0x8)
    class UAnimMontage* LandRoll_RH;                                                  // 0x0A80 (size: 0x8)
    class UAnimMontage* LandRoll_LH;                                                  // 0x0A88 (size: 0x8)
    class UAnimMontage* LandRoll_2H;                                                  // 0x0A90 (size: 0x8)
    class UAnimMontage* GetUpFront_RH;                                                // 0x0A98 (size: 0x8)
    class UAnimMontage* GetUpFront_LH;                                                // 0x0AA0 (size: 0x8)
    class UAnimMontage* GetUpFront_2H;                                                // 0x0AA8 (size: 0x8)
    class UAnimMontage* GetUpBack_Default;                                            // 0x0AB0 (size: 0x8)
    class UAnimMontage* GetUpBack_RH;                                                 // 0x0AB8 (size: 0x8)
    class UAnimMontage* GetUpBack_LH;                                                 // 0x0AC0 (size: 0x8)
    class UAnimMontage* GetUpBack_2H;                                                 // 0x0AC8 (size: 0x8)
    class UHideCursorWidget_C* HideCursorWidget_0;                                    // 0x0AD0 (size: 0x8)
    TSoftObjectPtr<UObject> skeletalMesh_Asset;                                       // 0x0AD8 (size: 0x28)

    void On Begin Play();
    void MantleStart(float MantleHeight, FALS_ComponentAndTransform MantleLedgeWS, TEnumAsByte<MantleType::Type> MantleType);
    void UpdateHeldObjectAnimations();
    void RagdollEnd();
    void RagDollStart();
    class UAnimMontage* GetGetUpAnimation(bool RagdollFaceUp);
    void MantleEnd();
    class UAnimMontage* GetRollAnimation();
    void OnOverlayStateChanged(TEnumAsByte<ALS_OverlayState::Type> NewOverlayState);
    void BPI_Get_3P_TraceParams(FVector& TraceOrigin, float& TraceRadius, TEnumAsByte<ETraceTypeQuery>& TraceChannel);
    FMantle_Asset GetMantleAsset(TEnumAsByte<MantleType::Type> MantleType);
    void UpdateLayeringColors();
    void UpdateColoringSystem();
    void Set/ResetColors();
    void SetDynamicMaterials();
    FVector BPI_Get_FP_CameraTarget();
    FTransform BPI_Get_3P_PivotTarget();
    void AttachToHand(class UStaticMesh* NewStaticMesh, class USkeletalMesh* NewSkeletalMesh, UClass* NewAnimClass, bool LeftHand, FVector Offset);
    void ClearHeldObject();
    void UpdateHeldObject();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_ALS_AnimMan_CharacterBP(int32 EntryPoint);
}; // Size: 0xB00

#endif
