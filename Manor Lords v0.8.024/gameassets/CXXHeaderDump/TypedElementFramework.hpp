#ifndef UE4SS_SDK_TypedElementFramework_HPP
#define UE4SS_SDK_TypedElementFramework_HPP

#include "TypedElementFramework_enums.hpp"

struct FObjectOverrideColumn : public FTypedElementDataStorageColumn
{
}; // Size: 0x1

struct FSCCExternalRevisionIdColumn : public FTypedElementDataStorageColumn
{
    FSCCRevisionId RevisionId;                                                        // 0x0000 (size: 0x14)

}; // Size: 0x14

struct FSCCExternallyEditedTag : public FTypedElementDataStorageTag
{
}; // Size: 0x1

struct FSCCExternallyLockedColumn : public FTypedElementDataStorageColumn
{
    FSCCUserInfo LockedBy;                                                            // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FSCCInChangelistTag : public FTypedElementDataStorageTag
{
}; // Size: 0x1

struct FSCCLockedTag : public FTypedElementDataStorageTag
{
}; // Size: 0x1

struct FSCCNotCurrentTag : public FTypedElementDataStorageTag
{
}; // Size: 0x1

struct FSCCRevisionId
{
    uint32 ID;                                                                        // 0x0000 (size: 0x14)

}; // Size: 0x14

struct FSCCRevisionIdColumn : public FTypedElementDataStorageColumn
{
    FSCCRevisionId RevisionId;                                                        // 0x0000 (size: 0x14)

}; // Size: 0x14

struct FSCCStagedTag : public FTypedElementDataStorageTag
{
}; // Size: 0x1

struct FSCCStatusColumn : public FTypedElementDataStorageColumn
{
    ESCCModification Modification;                                                    // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FSCCUserInfo
{
    FString Name;                                                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FScriptTypedElementHandle
{
}; // Size: 0x8

struct FScriptTypedElementListProxy
{
}; // Size: 0x10

struct FTestColumnA : public FTypedElementDataStorageColumn
{
}; // Size: 0x1

struct FTestColumnB : public FTypedElementDataStorageColumn
{
}; // Size: 0x1

struct FTestColumnC : public FTypedElementDataStorageColumn
{
}; // Size: 0x1

struct FTestColumnD : public FTypedElementDataStorageColumn
{
}; // Size: 0x1

struct FTestColumnE : public FTypedElementDataStorageColumn
{
}; // Size: 0x1

struct FTestColumnF : public FTypedElementDataStorageColumn
{
}; // Size: 0x1

struct FTestColumnG : public FTypedElementDataStorageColumn
{
}; // Size: 0x1

struct FTestTagColumnA : public FTypedElementDataStorageTag
{
}; // Size: 0x1

struct FTestTagColumnB : public FTypedElementDataStorageTag
{
}; // Size: 0x1

struct FTestTagColumnC : public FTypedElementDataStorageTag
{
}; // Size: 0x1

struct FTestTagColumnD : public FTypedElementDataStorageTag
{
}; // Size: 0x1

struct FTypedElementAlertColumn : public FTypedElementDataStorageColumn
{
    FText Message;                                                                    // 0x0000 (size: 0x10)
    FTypedElementAlertColumnType AlertType;                                           // 0x001A (size: 0x1)

}; // Size: 0x20

struct FTypedElementChildAlertColumn : public FTypedElementDataStorageColumn
{
}; // Size: 0x10

struct FTypedElementClassTypeInfoColumn : public FTypedElementDataStorageColumn
{
}; // Size: 0x8

struct FTypedElementDataStorageColumn
{
}; // Size: 0x1

struct FTypedElementDataStorageTag
{
}; // Size: 0x1

struct FTypedElementExternalObjectColumn : public FTypedElementDataStorageColumn
{
}; // Size: 0x8

struct FTypedElementFloatValueCacheColumn : public FTypedElementDataStorageColumn
{
    float Value;                                                                      // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FTypedElementI32IntValueCacheColumn : public FTypedElementDataStorageColumn
{
    int32 Value;                                                                      // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FTypedElementI64IntValueCacheColumn : public FTypedElementDataStorageColumn
{
    int64 Value;                                                                      // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FTypedElementLabelColumn : public FTypedElementDataStorageColumn
{
    FString Label;                                                                    // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FTypedElementLabelHashColumn : public FTypedElementDataStorageColumn
{
    uint64 LabelHash;                                                                 // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FTypedElementLocalTransformColumn : public FTypedElementDataStorageColumn
{
    FTransform Transform;                                                             // 0x0000 (size: 0x60)

}; // Size: 0x60

struct FTypedElementPackageLoadedPathColumn : public FTypedElementDataStorageColumn
{
}; // Size: 0xC

struct FTypedElementPackagePathColumn : public FTypedElementDataStorageColumn
{
    FString Path;                                                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FTypedElementPackageReference : public FTypedElementDataStorageColumn
{
}; // Size: 0x8

struct FTypedElementPackageUnresolvedReference : public FTypedElementDataStorageColumn
{
}; // Size: 0x18

struct FTypedElementParentColumn : public FTypedElementDataStorageColumn
{
}; // Size: 0x8

struct FTypedElementPivotOffset : public FTypedElementDataStorageColumn
{
    FVector Offset;                                                                   // 0x0000 (size: 0x18)

}; // Size: 0x18

struct FTypedElementRowReferenceColumn : public FTypedElementDataStorageColumn
{
}; // Size: 0x8

struct FTypedElementScriptStructTypeInfoColumn : public FTypedElementDataStorageColumn
{
}; // Size: 0x8

struct FTypedElementSelectionColumn : public FTypedElementDataStorageColumn
{
    FName SelectionSet;                                                               // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FTypedElementSlateWidgetReferenceColumn : public FTypedElementDataStorageColumn
{
}; // Size: 0x20

struct FTypedElementSlateWidgetReferenceDeletesRowTag : public FTypedElementDataStorageTag
{
}; // Size: 0x1

struct FTypedElementSyncBackToWorldTag : public FTypedElementDataStorageTag
{
}; // Size: 0x1

struct FTypedElementSyncFromWorldInteractiveTag : public FTypedElementDataStorageTag
{
}; // Size: 0x1

struct FTypedElementSyncFromWorldTag : public FTypedElementDataStorageTag
{
}; // Size: 0x1

struct FTypedElementU32IntValueCacheColumn : public FTypedElementDataStorageColumn
{
    uint32 Value;                                                                     // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FTypedElementU64IntValueCacheColumn : public FTypedElementDataStorageColumn
{
    uint64 Value;                                                                     // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FTypedElementUObjectColumn : public FTypedElementDataStorageColumn
{
}; // Size: 0x8

struct FTypedElementUnresolvedParentColumn : public FTypedElementDataStorageColumn
{
    uint64 ParentIdHash;                                                              // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FTypedElementViewportColorColumn : public FTypedElementDataStorageColumn
{
    uint8 SelectionOutlineColorIndex;                                                 // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FTypedElementWidgetConstructor
{
}; // Size: 0x28

class ITestTypedElementInterfaceA : public IInterface
{

    bool SetDisplayName(const FScriptTypedElementHandle& InElementHandle, FText InNewName, bool bNotify);
    FText GetDisplayName(const FScriptTypedElementHandle& InElementHandle);
}; // Size: 0x28

class ITestTypedElementInterfaceB : public IInterface
{

    bool MarkAsTested(const FScriptTypedElementHandle& InElementHandle);
}; // Size: 0x28

class ITestTypedElementInterfaceC : public IInterface
{

    bool GetIsTested(const FScriptTypedElementHandle& InElementHandle);
}; // Size: 0x28

class ITypedElementCounterInterface : public IInterface
{
}; // Size: 0x28

class ITypedElementDataStorageCompatibilityInterface : public IInterface
{
}; // Size: 0x28

class ITypedElementDataStorageInterface : public IInterface
{
}; // Size: 0x28

class ITypedElementDataStorageUiInterface : public IInterface
{
}; // Size: 0x28

class UTestTypedElementInterfaceA_ImplTyped : public UObject
{
}; // Size: 0x30

class UTestTypedElementInterfaceA_ImplUntyped : public UObject
{
}; // Size: 0x30

class UTestTypedElementInterfaceBAndC_Typed : public UObject
{
}; // Size: 0x38

class UTypedElementDataStorageFactory : public UObject
{
}; // Size: 0x28

class UTypedElementHandleLibrary : public UObject
{

    void Release(FScriptTypedElementHandle& ElementHandle);
    bool NotEqual(const FScriptTypedElementHandle& LHS, const FScriptTypedElementHandle& RHS);
    bool IsSet(const FScriptTypedElementHandle& ElementHandle);
    bool Equal(const FScriptTypedElementHandle& LHS, const FScriptTypedElementHandle& RHS);
}; // Size: 0x28

class UTypedElementListLibrary : public UObject
{

    void Shrink(FScriptTypedElementListProxy ElementList);
    void Reset(FScriptTypedElementListProxy ElementList);
    void Reserve(FScriptTypedElementListProxy ElementList, const int32 Size);
    bool Remove(FScriptTypedElementListProxy ElementList, const FScriptTypedElementHandle& ElementHandle);
    int32 Num(const FScriptTypedElementListProxy ElementList);
    bool IsValidIndex(const FScriptTypedElementListProxy ElementList, const int32 Index);
    bool HasElementsOfType(const FScriptTypedElementListProxy ElementList, const FName ElementTypeName);
    bool HasElements(const FScriptTypedElementListProxy ElementList, const TSubclassOf<class UInterface> BaseInterfaceType);
    class UObject* GetElementInterface(const FScriptTypedElementListProxy ElementList, const FScriptTypedElementHandle& ElementHandle, const TSubclassOf<class UInterface> BaseInterfaceType);
    TArray<FScriptTypedElementHandle> GetElementHandles(const FScriptTypedElementListProxy ElementList, const TSubclassOf<class UInterface> BaseInterfaceType);
    FScriptTypedElementHandle GetElementHandleAt(const FScriptTypedElementListProxy ElementList, const int32 Index);
    void Empty(FScriptTypedElementListProxy ElementList, const int32 Slack);
    FScriptTypedElementListProxy CreateScriptElementList(class UTypedElementRegistry* Registry);
    int32 CountElementsOfType(const FScriptTypedElementListProxy ElementList, const FName ElementTypeName);
    int32 CountElements(const FScriptTypedElementListProxy ElementList, const TSubclassOf<class UInterface> BaseInterfaceType);
    bool Contains(const FScriptTypedElementListProxy ElementList, const FScriptTypedElementHandle& ElementHandle);
    FScriptTypedElementListProxy Clone(const FScriptTypedElementListProxy ElementList);
    void AppendList(FScriptTypedElementListProxy ElementList, const FScriptTypedElementListProxy OtherElementList);
    void Append(FScriptTypedElementListProxy ElementList, const TArray<FScriptTypedElementHandle>& ElementHandles);
    bool Add(FScriptTypedElementListProxy ElementList, const FScriptTypedElementHandle& ElementHandle);
}; // Size: 0x28

class UTypedElementRegistry : public UObject
{

    class UTypedElementRegistry* GetInstance();
    class UObject* GetElementInterface(const FScriptTypedElementHandle& InElementHandle, const TSubclassOf<class UInterface> InBaseInterfaceType);
}; // Size: 0x978

#endif
