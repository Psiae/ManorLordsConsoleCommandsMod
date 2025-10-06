#ifndef UE4SS_SDK_Constraints_HPP
#define UE4SS_SDK_Constraints_HPP

#include "Constraints_enums.hpp"

struct FConstraintAndActiveChannel
{
    FMovieSceneConstraintChannel ActiveChannel;                                       // 0x0000 (size: 0x108)
    class UTickableConstraint* ConstraintCopyToSpawn;                                 // 0x0108 (size: 0x8)

}; // Size: 0x110

struct FConstraintTickFunction : public FTickFunction
{
}; // Size: 0x40

struct FConstraintsInWorld
{
    TWeakObjectPtr<class UWorld> World;                                               // 0x0000 (size: 0x8)
    TArray<TWeakObjectPtr<UTickableConstraint>> Constraints;                          // 0x0008 (size: 0x10)

}; // Size: 0x28

struct FMovieSceneConstraintChannel : public FMovieSceneBoolChannel
{
}; // Size: 0x108

class AConstraintsActor : public AActor
{
    class UConstraintsManager* ConstraintsManager;                                    // 0x02A8 (size: 0x8)

}; // Size: 0x2B0

class UConstraintSubsystem : public UEngineSubsystem
{
    FConstraintSubsystemOnConstraintAddedToSystem_BP OnConstraintAddedToSystem_BP;    // 0x0030 (size: 0x1)
    void OnConstraintAddedToSystem(class UConstraintSubsystem* Mananger, class UTickableConstraint* Constraint);
    FConstraintSubsystemOnConstraintRemovedFromSystem_BP OnConstraintRemovedFromSystem_BP; // 0x0031 (size: 0x1)
    void OnConstraintRemovedFromSystem(class UConstraintSubsystem* Mananger, class UTickableConstraint* Constraint, bool bDoNotCompensate);
    TArray<FConstraintsInWorld> ConstraintsInWorld;                                   // 0x0038 (size: 0x10)

    void OnConstraintRemovedFromSystem__DelegateSignature(class UConstraintSubsystem* Mananger, class UTickableConstraint* Constraint, bool bDoNotCompensate);
    void OnConstraintAddedToSystem__DelegateSignature(class UConstraintSubsystem* Mananger, class UTickableConstraint* Constraint);
}; // Size: 0x50

class UConstraintsManager : public UObject
{
    FConstraintsManagerOnConstraintAdded_BP OnConstraintAdded_BP;                     // 0x0028 (size: 0x1)
    void OnConstraintAdded(class UConstraintsManager* Mananger, class UTickableConstraint* Constraint);
    FConstraintsManagerOnConstraintRemoved_BP OnConstraintRemoved_BP;                 // 0x0029 (size: 0x1)
    void OnConstraintRemoved(class UConstraintsManager* Mananger, class UTickableConstraint* Constraint, bool bDoNotCompensate);
    TArray<class UTickableConstraint*> Constraints;                                   // 0x0038 (size: 0x10)

    void OnConstraintRemoved__DelegateSignature(class UConstraintsManager* Mananger, class UTickableConstraint* Constraint, bool bDoNotCompensate);
    void OnConstraintAdded__DelegateSignature(class UConstraintsManager* Mananger, class UTickableConstraint* Constraint);
}; // Size: 0x48

class UConstraintsScriptingLibrary : public UBlueprintFunctionLibrary
{

    bool RemoveThisConstraint(class UWorld* InWorld, class UTickableConstraint* InTickableConstraint);
    bool RemoveConstraint(class UWorld* InWorld, int32 InIndex);
    TArray<class UTickableConstraint*> GetConstraintsArray(class UWorld* InWorld);
    class UTransformableHandle* CreateTransformableHandle(class UWorld* InWorld, class UObject* InObject, const FName& InAttachmentName);
    class UTransformableComponentHandle* CreateTransformableComponentHandle(class UWorld* InWorld, class USceneComponent* InSceneComponent, const FName& InSocketName);
    class UTickableTransformConstraint* CreateFromType(class UWorld* InWorld, const ETransformConstraintType InType);
    bool AddConstraint(class UWorld* InWorld, class UTransformableHandle* InParentHandle, class UTransformableHandle* InChildHandle, class UTickableTransformConstraint* InConstraint, const bool bMaintainOffset);
}; // Size: 0x28

class UTickableConstraint : public UObject
{
    bool Active;                                                                      // 0x0028 (size: 0x1)
    bool bValid;                                                                      // 0x0029 (size: 0x1)

}; // Size: 0x90

class UTickableLookAtConstraint : public UTickableTransformConstraint
{
    FVector Axis;                                                                     // 0x00B0 (size: 0x18)

}; // Size: 0xC8

class UTickableParentConstraint : public UTickableTransformConstraint
{
    FTransform OffsetTransform;                                                       // 0x00C0 (size: 0x60)
    bool bScaling;                                                                    // 0x0120 (size: 0x1)
    FTransformFilter TransformFilter;                                                 // 0x0121 (size: 0x9)

}; // Size: 0x130

class UTickableRotationConstraint : public UTickableTransformConstraint
{
    FQuat OffsetRotation;                                                             // 0x00C0 (size: 0x20)
    FFilterOptionPerAxis AxisFilter;                                                  // 0x00E0 (size: 0x3)

}; // Size: 0xF0

class UTickableScaleConstraint : public UTickableTransformConstraint
{
    FVector OffsetScale;                                                              // 0x00B8 (size: 0x18)
    FFilterOptionPerAxis AxisFilter;                                                  // 0x00D0 (size: 0x3)

}; // Size: 0xD8

class UTickableTransformConstraint : public UTickableConstraint
{
    class UTransformableHandle* ParentTRSHandle;                                      // 0x0090 (size: 0x8)
    class UTransformableHandle* ChildTRSHandle;                                       // 0x0098 (size: 0x8)
    bool bMaintainOffset;                                                             // 0x00A0 (size: 0x1)
    float Weight;                                                                     // 0x00A4 (size: 0x4)
    bool bDynamicOffset;                                                              // 0x00A8 (size: 0x1)
    ETransformConstraintType Type;                                                    // 0x00A9 (size: 0x1)

}; // Size: 0xB0

class UTickableTranslationConstraint : public UTickableTransformConstraint
{
    FVector OffsetTranslation;                                                        // 0x00B8 (size: 0x18)
    FFilterOptionPerAxis AxisFilter;                                                  // 0x00D0 (size: 0x3)

}; // Size: 0xD8

class UTransformableComponentHandle : public UTransformableHandle
{
    TWeakObjectPtr<class USceneComponent> Component;                                  // 0x0060 (size: 0x8)
    FName SocketName;                                                                 // 0x0068 (size: 0x8)

}; // Size: 0x70

class UTransformableHandle : public UObject
{
    FMovieSceneObjectBindingID ConstraintBindingID;                                   // 0x002C (size: 0x18)

}; // Size: 0x60

#endif
