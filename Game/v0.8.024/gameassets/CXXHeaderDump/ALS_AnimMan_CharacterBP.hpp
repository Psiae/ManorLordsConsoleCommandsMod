#ifndef UE4SS_SDK_ALS_AnimMan_CharacterBP_HPP
#define UE4SS_SDK_ALS_AnimMan_CharacterBP_HPP

class AALS_AnimMan_CharacterBP_C : public AALS_Base_CharacterBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0AF0 (size: 0x8)
    FLinearColor DefaultColor;                                                        // 0x0AF8 (size: 0x10)
    FLinearColor SkinColor;                                                           // 0x0B08 (size: 0x10)
    FLinearColor ShirtColor;                                                          // 0x0B18 (size: 0x10)
    FLinearColor PantsColor;                                                          // 0x0B28 (size: 0x10)
    FLinearColor ShoesColor;                                                          // 0x0B38 (size: 0x10)
    FLinearColor GlovesColor;                                                         // 0x0B48 (size: 0x10)
    int32 ShirtType;                                                                  // 0x0B58 (size: 0x4)
    int32 PantsType;                                                                  // 0x0B5C (size: 0x4)
    bool shoes;                                                                       // 0x0B60 (size: 0x1)
    bool Gloves;                                                                      // 0x0B61 (size: 0x1)
    bool SolidColor;                                                                  // 0x0B62 (size: 0x1)
    FLinearColor BaseLayerColor;                                                      // 0x0B64 (size: 0x10)
    FLinearColor OverlayLayerColor;                                                   // 0x0B74 (size: 0x10)
    FLinearColor AdditiveAmount_Color;                                                // 0x0B84 (size: 0x10)
    FLinearColor Hand_Color;                                                          // 0x0B94 (size: 0x10)
    FLinearColor HandIK_Color;                                                        // 0x0BA4 (size: 0x10)
    class UMaterialInstanceDynamic* Head;                                             // 0x0BB8 (size: 0x8)
    class UMaterialInstanceDynamic* Torso;                                            // 0x0BC0 (size: 0x8)
    class UMaterialInstanceDynamic* pelvis;                                           // 0x0BC8 (size: 0x8)
    class UMaterialInstanceDynamic* Feet;                                             // 0x0BD0 (size: 0x8)
    class UMaterialInstanceDynamic* Shoulder_L;                                       // 0x0BD8 (size: 0x8)
    class UMaterialInstanceDynamic* UpperArm_L;                                       // 0x0BE0 (size: 0x8)
    class UMaterialInstanceDynamic* LowerArm_L;                                       // 0x0BE8 (size: 0x8)
    class UMaterialInstanceDynamic* Hand_L;                                           // 0x0BF0 (size: 0x8)
    class UMaterialInstanceDynamic* Shoulder_R;                                       // 0x0BF8 (size: 0x8)
    class UMaterialInstanceDynamic* UpperArm_R;                                       // 0x0C00 (size: 0x8)
    class UMaterialInstanceDynamic* LowerArm_R;                                       // 0x0C08 (size: 0x8)
    class UMaterialInstanceDynamic* Hand_R;                                           // 0x0C10 (size: 0x8)
    class UMaterialInstanceDynamic* UpperLegs;                                        // 0x0C18 (size: 0x8)
    class UMaterialInstanceDynamic* LowerLegs;                                        // 0x0C20 (size: 0x8)
    FMantle_Asset Mantle_2m_Default;                                                  // 0x0C28 (size: 0x40)
    FMantle_Asset Mantle_1m_Default;                                                  // 0x0C68 (size: 0x40)
    FMantle_Asset Mantle_1m_RH;                                                       // 0x0CA8 (size: 0x40)
    FMantle_Asset Mantle_1m_LH;                                                       // 0x0CE8 (size: 0x40)
    FMantle_Asset Mantle_1m_2H;                                                       // 0x0D28 (size: 0x40)
    FMantle_Asset Mantle_1m_Box;                                                      // 0x0D68 (size: 0x40)
    class UAnimMontage* LandRoll_Default;                                             // 0x0DA8 (size: 0x8)
    class UAnimMontage* GetUpFront_Default;                                           // 0x0DB0 (size: 0x8)
    class UAnimMontage* LandRoll_RH;                                                  // 0x0DB8 (size: 0x8)
    class UAnimMontage* LandRoll_LH;                                                  // 0x0DC0 (size: 0x8)
    class UAnimMontage* LandRoll_2H;                                                  // 0x0DC8 (size: 0x8)
    class UAnimMontage* GetUpFront_RH;                                                // 0x0DD0 (size: 0x8)
    class UAnimMontage* GetUpFront_LH;                                                // 0x0DD8 (size: 0x8)
    class UAnimMontage* GetUpFront_2H;                                                // 0x0DE0 (size: 0x8)
    class UAnimMontage* GetUpBack_Default;                                            // 0x0DE8 (size: 0x8)
    class UAnimMontage* GetUpBack_RH;                                                 // 0x0DF0 (size: 0x8)
    class UAnimMontage* GetUpBack_LH;                                                 // 0x0DF8 (size: 0x8)
    class UAnimMontage* GetUpBack_2H;                                                 // 0x0E00 (size: 0x8)
    class UHideCursorWidget_C* HideCursorWidget_0;                                    // 0x0E08 (size: 0x8)
    TSoftObjectPtr<UObject> skeletalMesh_Asset;                                       // 0x0E10 (size: 0x28)

    void On Begin Play();
    void MantleStart(double MantleHeight, FALS_ComponentAndTransform MantleLedgeWS, TEnumAsByte<MantleType::Type> MantleType);
    void UpdateHeldObjectAnimations();
    void RagdollEnd();
    void RagDollStart();
    class UAnimMontage* GetGetUpAnimation(bool RagdollFaceUp);
    void MantleEnd();
    class UAnimMontage* GetRollAnimation();
    void OnOverlayStateChanged(TEnumAsByte<ALS_OverlayState::Type> NewOverlayState);
    void BPI_Get_3P_TraceParams(FVector& TraceOrigin, double& TraceRadius, TEnumAsByte<ETraceTypeQuery>& TraceChannel);
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
}; // Size: 0xE38

#endif
