#ifndef UE4SS_SDK_ALS_Base_CharacterBP_HPP
#define UE4SS_SDK_ALS_Base_CharacterBP_HPP

class AALS_Base_CharacterBP_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0670 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0678 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x0680 (size: 0x8)
    float MantleTimeline_BlendIn_91D7A42A4A23268AEE2E28853DEE703D;                    // 0x0688 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> MantleTimeline__Direction_91D7A42A4A23268AEE2E28853DEE703D; // 0x068C (size: 0x1)
    class UTimelineComponent* MantleTimeline;                                         // 0x0690 (size: 0x8)
    TEnumAsByte<ALS_MovementState::Type> MovementState;                               // 0x0698 (size: 0x1)
    TEnumAsByte<ALS_MovementState::Type> PrevMovementState;                           // 0x0699 (size: 0x1)
    TEnumAsByte<ALS_RotationMode::Type> DesiredRotationMode;                          // 0x069A (size: 0x1)
    TEnumAsByte<ALS_MovementAction::Type> MovementAction;                             // 0x069B (size: 0x1)
    TEnumAsByte<ALS_RotationMode::Type> RotationMode;                                 // 0x069C (size: 0x1)
    TEnumAsByte<ALS_Gait::Type> DesiredGait;                                          // 0x069D (size: 0x1)
    TEnumAsByte<ALS_Gait::Type> Gait;                                                 // 0x069E (size: 0x1)
    TEnumAsByte<ALS_Stance::Type> Stance;                                             // 0x069F (size: 0x1)
    TEnumAsByte<ALS_ViewMode::Type> ViewMode;                                         // 0x06A0 (size: 0x1)
    FVector PreviousVelocity;                                                         // 0x06A8 (size: 0x18)
    FVector Acceleration;                                                             // 0x06C0 (size: 0x18)
    bool IsMoving;                                                                    // 0x06D8 (size: 0x1)
    bool HasMovementInput;                                                            // 0x06D9 (size: 0x1)
    FRotator LastVelocityRotation;                                                    // 0x06E0 (size: 0x18)
    FRotator LastMovementInputRotation;                                               // 0x06F8 (size: 0x18)
    double Speed;                                                                     // 0x0710 (size: 0x8)
    double MovementInputAmount;                                                       // 0x0718 (size: 0x8)
    double PreviousAimYaw;                                                            // 0x0720 (size: 0x8)
    FRotator TargetRotation;                                                          // 0x0728 (size: 0x18)
    FRotator InAirRotation;                                                           // 0x0740 (size: 0x18)
    double YawOffset;                                                                 // 0x0758 (size: 0x8)
    FDataTableRowHandle MovementModel;                                                // 0x0760 (size: 0x10)
    FMovementSettings_State MovementData;                                             // 0x0770 (size: 0xC0)
    FMovementSettings CurrentMovementSettings;                                        // 0x0830 (size: 0x20)
    FMantle_Params MantleParams;                                                      // 0x0850 (size: 0x30)
    FALS_ComponentAndTransform MantleLedgeLS;                                         // 0x0880 (size: 0x70)
    FTransform MantleTarget;                                                          // 0x08F0 (size: 0x60)
    FTransform MantleActualStartOffset;                                               // 0x0950 (size: 0x60)
    FTransform MantleAnimatedStartOffset;                                             // 0x09B0 (size: 0x60)
    FMantle_TraceSettings GroundedTraceSettings;                                      // 0x0A10 (size: 0x14)
    FMantle_TraceSettings AutomaticTraceSettings;                                     // 0x0A24 (size: 0x14)
    FMantle_TraceSettings FallingTraceSettings;                                       // 0x0A38 (size: 0x14)
    TEnumAsByte<ALS_Stance::Type> DesiredStance;                                      // 0x0A4C (size: 0x1)
    double LookUp/DownRate;                                                           // 0x0A50 (size: 0x8)
    double LookLeftRightRate;                                                         // 0x0A58 (size: 0x8)
    double AimYawRate;                                                                // 0x0A60 (size: 0x8)
    TEnumAsByte<ALS_OverlayState::Type> OverlayState;                                 // 0x0A68 (size: 0x1)
    int32 TimesPressedStance;                                                         // 0x0A6C (size: 0x4)
    bool BreakFall;                                                                   // 0x0A70 (size: 0x1)
    bool SprintHeld;                                                                  // 0x0A71 (size: 0x1)
    class UAnimInstance* MainAnimInstance;                                            // 0x0A78 (size: 0x8)
    bool RagdollOnGround;                                                             // 0x0A80 (size: 0x1)
    bool RagdollFaceUp;                                                               // 0x0A81 (size: 0x1)
    FVector LastRagdollVelocity;                                                      // 0x0A88 (size: 0x18)
    double ThirdPersonFOV;                                                            // 0x0AA0 (size: 0x8)
    double FirstPersonFOV;                                                            // 0x0AA8 (size: 0x8)
    bool RightShoulder;                                                               // 0x0AB0 (size: 0x1)
    class APawnCPP* rtsPawn;                                                          // 0x0AB8 (size: 0x8)
    FVector2D mouseMove2d;                                                            // 0x0AC0 (size: 0x10)
    FVector2D prevMousePos2D;                                                         // 0x0AD0 (size: 0x10)
    double walkaroundCamera_rotationSpeed;                                            // 0x0AE0 (size: 0x8)
    class UHideCursorWidget_C* HideCursorWidget;                                      // 0x0AE8 (size: 0x8)

    void BPI_Get_CameraParameters(double& TP_FOV, double& FP_FOV, bool& RightShoulder);
    void BPI_Get_3P_TraceParams(FVector& TraceOrigin, double& TraceRadius, TEnumAsByte<ETraceTypeQuery>& TraceChannel);
    FTransform BPI_Get_3P_PivotTarget();
    FVector BPI_Get_FP_CameraTarget();
    void BPI_Get_EssentialValues(FVector& Velocity, FVector& Acceleration, FVector& MovementInput, bool& IsMoving, bool& HasMovementInput, double& Speed, double& MovementInputAmount, FRotator& AimingRotation, double& AimYawRate);
    void BPI_Get_CurrentStates(TEnumAsByte<EMovementMode>& PawnMovementMode, TEnumAsByte<ALS_MovementState::Type>& MovementState, TEnumAsByte<ALS_MovementState::Type>& PrevMovementState, TEnumAsByte<ALS_MovementAction::Type>& MovementAction, TEnumAsByte<ALS_RotationMode::Type>& RotationMode, TEnumAsByte<ALS_Gait::Type>& ActualGait, TEnumAsByte<ALS_Stance::Type>& ActualStance, TEnumAsByte<ALS_ViewMode::Type>& ViewMode, TEnumAsByte<ALS_OverlayState::Type>& OverlayState);
    void walkaround_rotation(FVector2D InVec);
    void updateMouse();
    class UAnimMontage* GetGetUpAnimation(bool RagdollFaceUp);
    class UAnimMontage* GetRollAnimation();
    double GetMappedSpeed();
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
    double GetAnimCurveValue(FName CurveName);
    TEnumAsByte<EDrawDebugTrace::Type> GetTraceDebugType(TEnumAsByte<EDrawDebugTrace::Type> ShowTraceType);
    void SetActorLocationDuringRagdoll();
    void RagdollUpdate();
    void RagdollEnd();
    void RagDollStart();
    FVector CalculateAcceleration();
    FVector GetCapsuleLocationFromBase(FVector BaseLocation, double ZOffset);
    FVector GetCalpsuleBaseLocation(double ZOffset);
    void GetControlForward/RightVector(FVector& ForwardVector, FVector& RightVector);
    FMantle_Asset GetMantleAsset(TEnumAsByte<MantleType::Type> MantleType);
    void CapsuleHasRoomCheck(class UCapsuleComponent* Capsule, FVector TargetLocation, double HeightOffset, double RadiusOffset, TEnumAsByte<EDrawDebugTrace::Type> DebugType, bool& HasRoom);
    void MantleUpdate(double BlendIn);
    void MantleEnd();
    void MantleStart(double MantleHeight, FALS_ComponentAndTransform MantleLedgeWS, TEnumAsByte<MantleType::Type> MantleType);
    void DrawDebugShapes();
    void FixDiagonalGamepadValues(double Y in, double X in, double& Y Out, double& X Out);
    FVector GetPlayerMovementInput();
    void MantleCheck(FMantle_TraceSettings Trace Settings, TEnumAsByte<EDrawDebugTrace::Type> DebugType, bool& CanClimb/Vault);
    double CalculateGroundedRotationRate();
    bool SetActorLocationAndRotation(UpdateTarget)(FVector NewLocation, FRotator NewRotation, bool bSweep, bool bTeleport, FHitResult& SweepHitResult);
    void LimitRotation(double AimYawMin, double AimYawMax, double InterpSpeed);
    void AddToCharacterRotation(FRotator DeltaRotation);
    void CanSprint(bool& CanSprint);
    void GetActualGait(TEnumAsByte<ALS_Gait::Type> AllowedGait, TEnumAsByte<ALS_Gait::Type>& ActualGait);
    void GetAllowedGait(TEnumAsByte<ALS_Gait::Type>& AllowedGait);
    void GetTargetMovementSettings(FMovementSettings& MovementSettings);
    void UpdateDynamicMovementSettings(TEnumAsByte<ALS_Gait::Type> AllowedGait);
    void UpdateCharacterMovement();
    void SetMovementModel();
    void SmoothCharacterRotation(FRotator Target, double TargetInterpSpeed(Const), double ActorInterpSpeed(Smooth));
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
}; // Size: 0xAF0

#endif
