#ifndef UE4SS_SDK_CableComponent_HPP
#define UE4SS_SDK_CableComponent_HPP

class ACableActor : public AActor
{
    class UCableComponent* CableComponent;                                            // 0x0220 (size: 0x8)

}; // Size: 0x228

class UCableComponent : public UMeshComponent
{
    bool bAttachStart;                                                                // 0x0478 (size: 0x1)
    bool bAttachEnd;                                                                  // 0x0479 (size: 0x1)
    FComponentReference AttachEndTo;                                                  // 0x0480 (size: 0x28)
    FName AttachEndToSocketName;                                                      // 0x04A8 (size: 0x8)
    FVector endLocation;                                                              // 0x04B0 (size: 0xC)
    float CableLength;                                                                // 0x04BC (size: 0x4)
    int32 NumSegments;                                                                // 0x04C0 (size: 0x4)
    float SubstepTime;                                                                // 0x04C4 (size: 0x4)
    int32 SolverIterations;                                                           // 0x04C8 (size: 0x4)
    bool bEnableStiffness;                                                            // 0x04CC (size: 0x1)
    bool bUseSubstepping;                                                             // 0x04CD (size: 0x1)
    bool bSkipCableUpdateWhenNotVisible;                                              // 0x04CE (size: 0x1)
    bool bSkipCableUpdateWhenNotOwnerRecentlyRendered;                                // 0x04CF (size: 0x1)
    bool bEnableCollision;                                                            // 0x04D0 (size: 0x1)
    float CollisionFriction;                                                          // 0x04D4 (size: 0x4)
    FVector CableForce;                                                               // 0x04D8 (size: 0xC)
    float CableGravityScale;                                                          // 0x04E4 (size: 0x4)
    float CableWidth;                                                                 // 0x04E8 (size: 0x4)
    int32 NumSides;                                                                   // 0x04EC (size: 0x4)
    float TileMaterial;                                                               // 0x04F0 (size: 0x4)

    void SetAttachEndToComponent(class USceneComponent* Component, FName SocketName);
    void SetAttachEndTo(class AActor* Actor, FName ComponentProperty, FName SocketName);
    void GetCableParticleLocations(TArray<FVector>& locations);
    class USceneComponent* GetAttachedComponent();
    class AActor* GetAttachedActor();
}; // Size: 0x510

#endif
