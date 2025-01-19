#ifndef UE4SS_SDK_CableComponent_HPP
#define UE4SS_SDK_CableComponent_HPP

class ACableActor : public AActor
{
    class UCableComponent* CableComponent;                                            // 0x0290 (size: 0x8)

}; // Size: 0x298

class UCableComponent : public UMeshComponent
{
    bool bAttachStart;                                                                // 0x0550 (size: 0x1)
    bool bAttachEnd;                                                                  // 0x0551 (size: 0x1)
    FComponentReference AttachEndTo;                                                  // 0x0558 (size: 0x28)
    FName AttachEndToSocketName;                                                      // 0x0580 (size: 0x8)
    FVector endLocation;                                                              // 0x0588 (size: 0x18)
    float CableLength;                                                                // 0x05A0 (size: 0x4)
    int32 NumSegments;                                                                // 0x05A4 (size: 0x4)
    float SubstepTime;                                                                // 0x05A8 (size: 0x4)
    int32 SolverIterations;                                                           // 0x05AC (size: 0x4)
    bool bEnableStiffness;                                                            // 0x05B0 (size: 0x1)
    bool bUseSubstepping;                                                             // 0x05B1 (size: 0x1)
    bool bSkipCableUpdateWhenNotVisible;                                              // 0x05B2 (size: 0x1)
    bool bSkipCableUpdateWhenNotOwnerRecentlyRendered;                                // 0x05B3 (size: 0x1)
    bool bEnableCollision;                                                            // 0x05B4 (size: 0x1)
    float CollisionFriction;                                                          // 0x05B8 (size: 0x4)
    FVector CableForce;                                                               // 0x05C0 (size: 0x18)
    float CableGravityScale;                                                          // 0x05D8 (size: 0x4)
    float CableWidth;                                                                 // 0x05DC (size: 0x4)
    int32 NumSides;                                                                   // 0x05E0 (size: 0x4)
    float TileMaterial;                                                               // 0x05E4 (size: 0x4)

    void SetAttachEndToComponent(class USceneComponent* Component, FName SocketName);
    void SetAttachEndTo(class AActor* Actor, FName ComponentProperty, FName SocketName);
    void GetCableParticleLocations(TArray<FVector>& Locations);
    class USceneComponent* GetAttachedComponent();
    class AActor* GetAttachedActor();
}; // Size: 0x600

#endif
