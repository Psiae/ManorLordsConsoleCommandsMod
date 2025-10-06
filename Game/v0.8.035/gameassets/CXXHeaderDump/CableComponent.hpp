#ifndef UE4SS_SDK_CableComponent_HPP
#define UE4SS_SDK_CableComponent_HPP

class ACableActor : public AActor
{
    class UCableComponent* CableComponent;                                            // 0x02A8 (size: 0x8)

}; // Size: 0x2B0

class UCableComponent : public UMeshComponent
{
    bool bAttachStart;                                                                // 0x0518 (size: 0x1)
    bool bAttachEnd;                                                                  // 0x0519 (size: 0x1)
    FComponentReference AttachEndTo;                                                  // 0x0520 (size: 0x28)
    FName AttachEndToSocketName;                                                      // 0x0548 (size: 0x8)
    FVector endLocation;                                                              // 0x0550 (size: 0x18)
    float CableLength;                                                                // 0x0568 (size: 0x4)
    int32 NumSegments;                                                                // 0x056C (size: 0x4)
    float SubstepTime;                                                                // 0x0570 (size: 0x4)
    int32 SolverIterations;                                                           // 0x0574 (size: 0x4)
    bool bEnableStiffness;                                                            // 0x0578 (size: 0x1)
    bool bUseSubstepping;                                                             // 0x0579 (size: 0x1)
    bool bSkipCableUpdateWhenNotVisible;                                              // 0x057A (size: 0x1)
    bool bSkipCableUpdateWhenNotOwnerRecentlyRendered;                                // 0x057B (size: 0x1)
    bool bEnableCollision;                                                            // 0x057C (size: 0x1)
    float CollisionFriction;                                                          // 0x0580 (size: 0x4)
    FVector CableForce;                                                               // 0x0588 (size: 0x18)
    float CableGravityScale;                                                          // 0x05A0 (size: 0x4)
    float CableWidth;                                                                 // 0x05A4 (size: 0x4)
    int32 NumSides;                                                                   // 0x05A8 (size: 0x4)
    float TileMaterial;                                                               // 0x05AC (size: 0x4)

    void SetAttachEndToComponent(class USceneComponent* Component, FName SocketName);
    void SetAttachEndTo(class AActor* Actor, FName ComponentProperty, FName SocketName);
    void GetCableParticleLocations(TArray<FVector>& Locations);
    class USceneComponent* GetAttachedComponent();
    class AActor* GetAttachedActor();
}; // Size: 0x5D0

#endif
