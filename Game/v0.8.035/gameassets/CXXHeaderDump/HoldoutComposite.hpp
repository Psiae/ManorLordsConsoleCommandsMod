#ifndef UE4SS_SDK_HoldoutComposite_HPP
#define UE4SS_SDK_HoldoutComposite_HPP

class UHoldoutCompositeComponent : public USceneComponent
{
    bool bIsEnabled;                                                                  // 0x0230 (size: 0x1)

    void SetEnabled(bool bInEnabled);
    bool IsEnabled();
}; // Size: 0x240

class UHoldoutCompositeSettings : public UDeveloperSettings
{
    bool bCompositeFollowsSceneExposure;                                              // 0x0038 (size: 0x1)
    bool bCompositeSupportsSSR;                                                       // 0x0039 (size: 0x1)
    int32 SceneViewExtensionPriority;                                                 // 0x003C (size: 0x4)
    TArray<FSoftClassPath> DisabledPrimitiveClasses;                                  // 0x0040 (size: 0x10)

}; // Size: 0x50

class UHoldoutCompositeSubsystem : public UWorldSubsystem
{

    void UnregisterPrimitive(TSoftObjectPtr<UPrimitiveComponent> InPrimitiveComponent, bool bInHoldoutState);
    void RegisterPrimitive(TSoftObjectPtr<UPrimitiveComponent> InPrimitiveComponent, bool bInHoldoutState);
}; // Size: 0x40

#endif
