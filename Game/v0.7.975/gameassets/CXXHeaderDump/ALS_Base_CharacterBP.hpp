#ifndef UE4SS_SDK_ALS_Base_CharacterBP_HPP
#define UE4SS_SDK_ALS_Base_CharacterBP_HPP

class AALS_Base_CharacterBP_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x04C8 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x04D0 (size: 0x8)
    float MantleTimeline_BlendIn_91D7A42A4A23268AEE2E28853DEE703D;                    // 0x04D8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> MantleTimeline__Direction_91D7A42A4A23268AEE2E28853DEE703D; // 0x04DC (size: 0x1)
    class UTimelineComponent* MantleTimeline;                                         // 0x04E0 (size: 0x8)
    TEnumAsByte<ALS_MovementState::Type> MovementState;                               // 0x04E8 (size: 0x1)
    TEnumAsByte<ALS_MovementState::Type> PrevMovementState;                           // 0x04E9 (size: 0x1)
    TEnumAsByte<ALS_RotationMode::Type> DesiredRotationMode;                          // 0x04EA (size: 0x1)
    TEnumAsByte<ALS_MovementAction::Type> MovementAction;                             // 0x04EB (size: 0x1)
    TEnumAsByte<ALS_RotationMode::Type> RotationMode;                                 // 0x04EC (size: 0x1)
    TEnumAsByte<ALS_Gait::Type> DesiredGait;                                          // 0x04ED (size: 0x1)
    TEnumAsByte<ALS_Gait::Type> Gait;                                                 // 0x04EE (size: 0x1)
    TEnumAsByte<ALS_Stance::Type> stance;                                             // 0x04EF (size: 0x1)
    TEnumAsByte<ALS_ViewMode::Type> ViewMode;                                         // 0x04F0 (size: 0x1)
    FVector PreviousVelocity;                                                         // 0x04F4 (size: 0xC)
    FVector Acceleration;                                                             // 0x0500 (size: 0xC)
    bool IsMoving;                                                                    // 0x050C (size: 0x1)
    bool HasMovementInput;                                                            // 0x050D (size: 0x1)
    FRotator LastVelocityRotation;                                                    // 0x0510 (size: 0xC)
    FRotator LastMovementInputRotation;                                               // 0x051C (size: 0xC)
    float Speed;                                                                      // 0x0528 (size: 0x4)
    float MovementInputAmount;                                                        // 0x052C (size: 0x4)
    float PreviousAimYaw;                                                             // 0x0530 (size: 0x4)
    FRotator targetRotation;                                                          // 0x0534 (size: 0xC)
    FRotator InAirRotation;                                                           // 0x0540 (size: 0xC)
    float YawOffset;                                                                  // 0x054C (size: 0x4)
    FDataTableRowHandle MovementModel;                                                // 0x0550 (size: 0x10)
    FMovementSettings_State MovementData;                                             // 0x0560 (size: 0xC0)
    FMovementSettings CurrentMovementSettings;                                        // 0x0620 (size: 0x20)
    FMantle_Params MantleParams;                                                      // 0x0640 (size: 0x28)
    FALS_ComponentAndTransform MantleLedgeLS;                                         // 0x0670 (size: 0x40)
    FTransform MantleTarget;                                                          // 0x06B0 (size: 0x30)
    FTransform MantleActualStartOffset;                                               // 0x06E0 (size: 0x30)
    FTransform MantleAnimatedStartOffset;                                             // 0x0710 (size: 0x30)
    FMantle_TraceSettings GroundedTraceSettings;                                      // 0x0740 (size: 0x14)
    FMantle_TraceSettings AutomaticTraceSettings;                                     // 0x0754 (size: 0x14)
    FMantle_TraceSettings FallingTraceSettings;                                       // 0x0768 (size: 0x14)
    TEnumAsByte<ALS_Stance::Type> DesiredStance;                                      // 0x077C (size: 0x1)
    float LookUp/DownRate;                                                            // 0x0780 (size: 0x4)
    float LookLeftRightRate;                                                          // 0x0784 (size: 0x4)
    float AimYawRate;                                                                 // 0x0788 (size: 0x4)
    TEnumAsByte<ALS_OverlayState::Type> OverlayState;                                 // 0x078C (size: 0x1)
    int32 TimesPressedStance;                                                         // 0x0790 (size: 0x4)
    bool BreakFall;                                                                   // 0x0794 (size: 0x1)
    bool SprintHeld;                                                                  // 0x0795 (size: 0x1)
    class UAnimInstance* MainAnimInstance;                                            // 0x0798 (size: 0x8)
    bool RagdollOnGround;                                                             // 0x07A0 (size: 0x1)
    bool RagdollFaceUp;                                                               // 0x07A1 (size: 0x1)
    FVector LastRagdollVelocity;                                                      // 0x07A4 (size: 0xC)
    float ThirdPersonFOV;                                                             // 0x07B0 (size: 0x4)
    float FirstPersonFOV;                                                             // 0x07B4 (size: 0x4)
    bool RightShoulder;                                                               // 0x07B8 (size: 0x1)
    class APawnCPP* rtsPawn;                                                          // 0x07C0 (size: 0x8)
    FVector2D mouseMove2d;                                                            // 0x07C8 (size: 0x8)
    FVector2D prevMousePos2D;                                                         // 0x07D0 (size: 0x8)
    float walkaroundCamera_rotationSpeed;                                             // 0x07D8 (size: 0x4)
    class UHideCursorWidget_C* HideCursorWidget;                                      // 0x07E0 (size: 0x8)

    void BPI_Get_CameraParameters(float& TP_FOV, float& FP_FOV, bool& RightShoulder);
    void BPI_Get_3P_TraceParams(FVector& TraceOrigin, float& TraceRadius, TEnumAsByte<ETraceTypeQuery>& TraceChannel);
    FTransform BPI_Get_3P_PivotTarget();
    FVector BPI_Get_FP_CameraTarget();
    void BPI_Get_EssentialValues(FVector& Velocity, FVector& Acceleration, FVector& MovementInput, bool& IsMoving, bool& HasMovementInput, float& Speed, float& MovementInputAmount, FRotator& AimingRotation, float& AimYawRate);
    void BPI_Get_CurrentStates(TEnumAsByte<EMovementMode>& PawnMovementMode, TEnumAsByte<ALS_MovementState::Type>& MovementState, TEnumAsByte<ALS_MovementState::Type>& PrevMovementState, TEnumAsByte<ALS_MovementAction::Type>& MovementAction, TEnumAsByte<ALS_RotationMode::Type>& RotationMode, TEnumAsByte<ALS_Gait::Type>& ActualGait, TEnumAsByte<ALS_Stance::Type>& ActualStance, TEnumAsByte<ALS_ViewMode::Type>& ViewMode, TEnumAsByte<ALS_OverlayState::Type>& OverlayState);
    void walkaround_rotation(FVector2D InVec);
    void updateMouse();
    class UAnimMontage* GetGetUpAnimation(bool RagdollFaceUp);
    class UAnimMontage* GetRollAnimation();
    float GetMappedSpeed();
    bool CanUpdateMovingRotation();
    void OnOverlayStateChanged(TEnumAsByte<ALS_OverlayState::Type> NewOverlayState);
    void OnViewModeChanged(TEnumAsByte<ALS_ViewMode::Type> NewViewMode);
    void OnGaitChanged(TEnumAsByte<ALS_Gait::Type> NewActualGait);
    void OnRotationModeChanged(TEnumAsByte<ALS_RotationMode::Type> NewRotationMode);
    void OnStanceChanged(TEnumAsByte<ALS_Stance::Type> newStance);
    void OnMovementActionChanged(TEnumAsByte<ALS_MovementAction::Type> NewMovementAction);
    void OnMovementStateChanged(TEnumAsByte<ALS_MovementState::Type> NewMovementState);
    void OnCharacterMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, uint8 PrevCustomMode, uint8 NewCustomMode);
    void On Begin Play();
    float GetAnimCurveValue(FName CurveName);
    TEnumAsByte<EDrawDebugTrace::Type> GetTraceDebugType(TEnumAsByte<EDrawDebugTrace::Type> ShowTraceType);
    void SetActorLocationDuringRagdoll();
    void RagdollUpdate();
    void RagdollEnd();
    void RagDollStart();
    FVector CalculateAcceleration();
    FVector GetCapsuleLocationFromBase(FVector BaseLocation, float ZOffset);
    FVector GetCalpsuleBaseLocation(float ZOffset);
    void GetControlForward/RightVector(FVector& ForwardVector, FVector& RightVector);
    FMantle_Asset GetMantleAsset(TEnumAsByte<MantleType::Type> MantleType);
    void CapsuleHasRoomCheck(class UCapsuleComponent* Capsule, FVector targetLocation, float HeightOffset, float RadiusOffset, TEnumAsByte<EDrawDebugTrace::Type> DebugType, bool& HasRoom);
    void MantleUpdate(float BlendIn);
    void MantleEnd();
    void MantleStart(float MantleHeight, FALS_ComponentAndTransform MantleLedgeWS, TEnumAsByte<MantleType::Type> MantleType);
    void DrawDebugShapes();
    void FixDiagonalGamepadValues(float Y in, float X in, float& Y Out, float& X Out);
    FVector GetPlayerMovementInput();
    void MantleCheck(FMantle_TraceSettings Trace Settings, TEnumAsByte<EDrawDebugTrace::Type> DebugType, bool& CanClimb/Vault);
    float CalculateGroundedRotationRate();
    bool SetActorLocationAndRotation(UpdateTarget)(FVector NewLocation, FRotator NewRotation, bool bSweep, bool bTeleport, FHitResult& SweepHitResult);
    void LimitRotation(float AimYawMin, float AimYawMax, float InterpSpeed);
    void AddToCharacterRotation(FRotator DeltaRotation);
    void CanSprint(bool& CanSprint);
    void GetActualGait(TEnumAsByte<ALS_Gait::Type> AllowedGait, TEnumAsByte<ALS_Gait::Type>& ActualGait);
    void GetAllowedGait(TEnumAsByte<ALS_Gait::Type>& AllowedGait);
    void GetTargetMovementSettings(FMovementSettings& MovementSettings);
    void UpdateDynamicMovementSettings(TEnumAsByte<ALS_Gait::Type> AllowedGait);
    void UpdateCharacterMovement();
    void SetMovementModel();
    void SmoothCharacterRotation(FRotator Target, float TargetInterpSpeed(Const), float ActorInterpSpeed(Smooth));
    void UpdateInAirRotation();
    void UpdateGroudedRotation();
    void CacheValues();
    void SetEssentialValues();
    void PlayerMovementInput(bool IsForwardAxis);
    void MantleTimeline__FinishedFunc();
    void MantleTimeline__UpdateFunc();
    void InpActEvt_unposses_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_SprintAction_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_SprintAction_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, uint8 PrevCustomMode, uint8 NewCustomMode);
    void OnJumped();
    void OnLanded(const FHitResult& hit);
    void Breakfall Event();
    void Roll Event();
    void InpAxisEvt_MoveForward/Backwards_K2Node_InputAxisEvent_0(float AxisValue);
    void InpAxisEvt_MoveRight/Left_K2Node_InputAxisEvent_1(float AxisValue);
    void InpAxisEvt_LookUp/Down_K2Node_InputAxisEvent_2(float AxisValue);
    void BPI_Set_MovementState(TEnumAsByte<ALS_MovementState::Type> NewMovementState);
    void InpAxisEvt_LookLeft/Right_K2Node_InputAxisEvent_3(float AxisValue);
    void BPI_Set_MovementAction(TEnumAsByte<ALS_MovementAction::Type> NewMovementAction);
    void BPI_Set_RotationMode(TEnumAsByte<ALS_RotationMode::Type> NewRotationMode);
    void BPI_Set_Gait(TEnumAsByte<ALS_Gait::Type> NewGait);
    void BPI_Set_ViewMode(TEnumAsByte<ALS_ViewMode::Type> NewViewMode);
    void BPI_Set_OverlayState(TEnumAsByte<ALS_OverlayState::Type> NewOverlayState);
    void ReceivePossessed(class AController* NewController);
    void ExecuteUbergraph_ALS_Base_CharacterBP(int32 EntryPoint);
}; // Size: 0x7E8

#endif
