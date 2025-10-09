#ifndef UE4SS_SDK_ALS_Animation_BPI_HPP
#define UE4SS_SDK_ALS_Animation_BPI_HPP

class IALS_Animation_BPI_C : public IInterface
{

    void BPI_SetOverlayOverrideState(int32 OverlayOverrideState);
    void BPI_SetGroundedEntryState(TEnumAsByte<GroundedEntryState::Type> GroundedEntryState);
    void BPI_Jumped();
}; // Size: 0x28

#endif
