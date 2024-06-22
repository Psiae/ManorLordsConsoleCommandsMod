#ifndef UE4SS_SDK_ALS_Character_BPI_HPP
#define UE4SS_SDK_ALS_Character_BPI_HPP

class IALS_Character_BPI_C : public IInterface
{

    void BPI_Set_OverlayState(TEnumAsByte<ALS_OverlayState::Type> NewOverlayState);
    void BPI_Set_ViewMode(TEnumAsByte<ALS_ViewMode::Type> NewViewMode);
    void BPI_Set_Gait(TEnumAsByte<ALS_Gait::Type> NewGait);
    void BPI_Set_RotationMode(TEnumAsByte<ALS_RotationMode::Type> NewRotationMode);
    void BPI_Set_MovementAction(TEnumAsByte<ALS_MovementAction::Type> NewMovementAction);
    void BPI_Set_MovementState(TEnumAsByte<ALS_MovementState::Type> NewMovementState);
    void BPI_Get_EssentialValues(FVector& Velocity, FVector& Acceleration, FVector& MovementInput, bool& IsMoving, bool& HasMovementInput, float& Speed, float& MovementInputAmount, FRotator& AimingRotation, float& AimYawRate);
    void BPI_Get_CurrentStates(TEnumAsByte<EMovementMode>& PawnMovementMode, TEnumAsByte<ALS_MovementState::Type>& MovementState, TEnumAsByte<ALS_MovementState::Type>& PrevMovementState, TEnumAsByte<ALS_MovementAction::Type>& MovementAction, TEnumAsByte<ALS_RotationMode::Type>& RotationMode, TEnumAsByte<ALS_Gait::Type>& ActualGait, TEnumAsByte<ALS_Stance::Type>& ActualStance, TEnumAsByte<ALS_ViewMode::Type>& ViewMode, TEnumAsByte<ALS_OverlayState::Type>& OverlayState);
}; // Size: 0x28

#endif
