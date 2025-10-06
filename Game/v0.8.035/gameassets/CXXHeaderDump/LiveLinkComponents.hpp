#ifndef UE4SS_SDK_LiveLinkComponents_HPP
#define UE4SS_SDK_LiveLinkComponents_HPP

struct FLiveLinkTransformControllerData
{
    bool bWorldTransform;                                                             // 0x0000 (size: 0x1)
    bool bUseLocation;                                                                // 0x0001 (size: 0x1)
    bool bUseRotation;                                                                // 0x0002 (size: 0x1)
    bool bUseScale;                                                                   // 0x0003 (size: 0x1)
    bool bSweep;                                                                      // 0x0004 (size: 0x1)
    bool bTeleport;                                                                   // 0x0005 (size: 0x1)

}; // Size: 0x6

class ULiveLinkComponentController : public UActorComponent
{
    FLiveLinkSubjectRepresentation SubjectRepresentation;                             // 0x00A0 (size: 0x10)
    TMap<class TSubclassOf<ULiveLinkRole>, class ULiveLinkControllerBase*> ControllerMap; // 0x00B0 (size: 0x50)
    bool bUpdateInEditor;                                                             // 0x0100 (size: 0x1)
    FLiveLinkComponentControllerOnLiveLinkUpdated OnLiveLinkUpdated;                  // 0x0108 (size: 0x10)
    void LiveLinkTickDelegate(float DeltaTime);
    FLiveLinkComponentControllerOnControllerMapUpdatedDelegate OnControllerMapUpdatedDelegate; // 0x0118 (size: 0x10)
    void OnControllerMapUpdatedDelegate();
    bool bDisableEvaluateLiveLinkWhenSpawnable;                                       // 0x0128 (size: 0x1)
    bool bEvaluateLiveLink;                                                           // 0x0129 (size: 0x1)
    bool bUpdateInPreviewEditor;                                                      // 0x012A (size: 0x1)

    void SetSubjectRepresentation(FLiveLinkSubjectRepresentation InSubjectRepresentation);
    void SetControlledComponent(TSubclassOf<class ULiveLinkRole> InRoleClass, class UActorComponent* InComponent);
    FLiveLinkSubjectRepresentation GetSubjectRepresentation();
    class UActorComponent* GetControlledComponent(TSubclassOf<class ULiveLinkRole> InRoleClass);
}; // Size: 0x148

class ULiveLinkComponentSettings : public UObject
{
    TMap<class TSubclassOf<ULiveLinkRole>, class TSubclassOf<ULiveLinkControllerBase>> DefaultControllerForRole; // 0x0028 (size: 0x50)
    bool bUpdateSubjectsImmediatelyInPIE;                                             // 0x0078 (size: 0x1)

}; // Size: 0x80

class ULiveLinkControllerBase : public UObject
{
    FComponentReference ComponentPicker;                                              // 0x0028 (size: 0x28)

}; // Size: 0x68

class ULiveLinkLightController : public ULiveLinkControllerBase
{
}; // Size: 0x68

class ULiveLinkTransformController : public ULiveLinkControllerBase
{
    FLiveLinkTransformControllerData TransformData;                                   // 0x0068 (size: 0x6)
    FTransform OffsetTransform;                                                       // 0x0070 (size: 0x60)

}; // Size: 0x130

#endif
