#ifndef UE4SS_SDK_TypedElementFramework_HPP
#define UE4SS_SDK_TypedElementFramework_HPP

#include "TypedElementFramework_enums.hpp"

struct FDescriptionColumn : public FEditorDataStorageColumn
{
    FText Description;                                                                // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FDisplayNameColumn : public FEditorDataStorageColumn
{
    FText DisplayName;                                                                // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FEditorDataStorageColumn
{
}; // Size: 0x1

struct FEditorDataStorageTag
{
}; // Size: 0x1

struct FFolderTag : public FEditorDataStorageTag
{
}; // Size: 0x1

struct FHideRowFromUITag : public FEditorDataStorageTag
{
}; // Size: 0x1

struct FNameColumn : public FEditorDataStorageColumn
{
    FName Name;                                                                       // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FObjectOverrideColumn : public FEditorDataStorageColumn
{
}; // Size: 0x1

struct FSCCExternalRevisionIdColumn : public FEditorDataStorageColumn
{
    FSCCRevisionId RevisionId;                                                        // 0x0000 (size: 0x14)

}; // Size: 0x14

struct FSCCExternallyEditedTag : public FEditorDataStorageTag
{
}; // Size: 0x1

struct FSCCExternallyLockedColumn : public FEditorDataStorageColumn
{
    FSCCUserInfo LockedBy;                                                            // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FSCCInChangelistTag : public FEditorDataStorageTag
{
}; // Size: 0x1

struct FSCCLockedTag : public FEditorDataStorageTag
{
}; // Size: 0x1

struct FSCCNotCurrentTag : public FEditorDataStorageTag
{
}; // Size: 0x1

struct FSCCRevisionId
{
    uint32 ID;                                                                        // 0x0000 (size: 0x14)

}; // Size: 0x14

struct FSCCRevisionIdColumn : public FEditorDataStorageColumn
{
    FSCCRevisionId RevisionId;                                                        // 0x0000 (size: 0x14)

}; // Size: 0x14

struct FSCCStagedTag : public FEditorDataStorageTag
{
}; // Size: 0x1

struct FSCCStatusColumn : public FEditorDataStorageColumn
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

struct FSimpleWidgetConstructor : public FTypedElementWidgetConstructor
{
}; // Size: 0x28

struct FSlateColorColumn : public FEditorDataStorageColumn
{
    FSlateColor Color;                                                                // 0x0000 (size: 0x14)

}; // Size: 0x14

struct FTEDSProcessorTestsReferenceColumn : public FEditorDataStorageColumn
{
}; // Size: 0x10

struct FTEDSProcessorTests_Linked : public FEditorDataStorageTag
{
}; // Size: 0x1

struct FTEDSProcessorTests_PrimaryTag : public FEditorDataStorageTag
{
}; // Size: 0x1

struct FTEDSProcessorTests_SecondaryTag : public FEditorDataStorageTag
{
}; // Size: 0x1

struct FTableRowParentColumn : public FEditorDataStorageColumn
{
}; // Size: 0x8

struct FTedsRowHandle
{
    uint64 RowHandle;                                                                 // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FTestColumnA : public FEditorDataStorageColumn
{
}; // Size: 0x1

struct FTestColumnB : public FEditorDataStorageColumn
{
}; // Size: 0x1

struct FTestColumnC : public FEditorDataStorageColumn
{
}; // Size: 0x1

struct FTestColumnD : public FEditorDataStorageColumn
{
}; // Size: 0x1

struct FTestColumnE : public FEditorDataStorageColumn
{
}; // Size: 0x1

struct FTestColumnF : public FEditorDataStorageColumn
{
}; // Size: 0x1

struct FTestColumnG : public FEditorDataStorageColumn
{
}; // Size: 0x1

struct FTestColumnInt : public FEditorDataStorageColumn
{
    int32 TestInt;                                                                    // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FTestColumnString : public FEditorDataStorageColumn
{
    FString TestString;                                                               // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FTestTagColumnA : public FEditorDataStorageTag
{
}; // Size: 0x1

struct FTestTagColumnB : public FEditorDataStorageTag
{
}; // Size: 0x1

struct FTestTagColumnC : public FEditorDataStorageTag
{
}; // Size: 0x1

struct FTestTagColumnD : public FEditorDataStorageTag
{
}; // Size: 0x1

struct FTest_PingPongDurPhys : public FEditorDataStorageColumn
{
    uint64 Value;                                                                     // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FTest_PingPongPostPhys : public FEditorDataStorageColumn
{
    uint64 Value;                                                                     // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FTest_PingPongPrePhys : public FEditorDataStorageColumn
{
    uint64 Value;                                                                     // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FTypedElementActorTag : public FEditorDataStorageTag
{
}; // Size: 0x1

struct FTypedElementAlertActionColumn : public FEditorDataStorageColumn
{
}; // Size: 0x40

struct FTypedElementAlertColumn : public FEditorDataStorageColumn
{
    FText Message;                                                                    // 0x0000 (size: 0x10)
    FTypedElementAlertColumnType AlertType;                                           // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FTypedElementChildAlertColumn : public FEditorDataStorageColumn
{
}; // Size: 0x10

struct FTypedElementClassDefaultObjectTag : public FEditorDataStorageTag
{
}; // Size: 0x1

struct FTypedElementClassTypeInfoColumn : public FEditorDataStorageColumn
{
}; // Size: 0x8

struct FTypedElementExternalObjectColumn : public FEditorDataStorageColumn
{
}; // Size: 0x8

struct FTypedElementFloatValueCacheColumn : public FEditorDataStorageColumn
{
    float Value;                                                                      // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FTypedElementI32IntValueCacheColumn : public FEditorDataStorageColumn
{
    int32 Value;                                                                      // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FTypedElementI64IntValueCacheColumn : public FEditorDataStorageColumn
{
    int64 Value;                                                                      // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FTypedElementIconOverrideColumn : public FEditorDataStorageColumn
{
    FName IconName;                                                                   // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FTypedElementLabelColumn : public FEditorDataStorageColumn
{
    FString Label;                                                                    // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FTypedElementLabelHashColumn : public FEditorDataStorageColumn
{
    uint64 LabelHash;                                                                 // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FTypedElementLocalTransformColumn : public FEditorDataStorageColumn
{
    FTransform Transform;                                                             // 0x0000 (size: 0x60)

}; // Size: 0x60

struct FTypedElementLoosePropertyTag : public FEditorDataStorageTag
{
}; // Size: 0x1

struct FTypedElementPackageLoadedPathColumn : public FEditorDataStorageColumn
{
}; // Size: 0xC

struct FTypedElementPackagePathColumn : public FEditorDataStorageColumn
{
    FString Path;                                                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FTypedElementPackageReference : public FEditorDataStorageColumn
{
}; // Size: 0x8

struct FTypedElementPackageUnresolvedReference : public FEditorDataStorageColumn
{
}; // Size: 0x18

struct FTypedElementPackageUpdatedTag : public FEditorDataStorageTag
{
}; // Size: 0x1

struct FTypedElementPivotOffset : public FEditorDataStorageColumn
{
    FVector Offset;                                                                   // 0x0000 (size: 0x18)

}; // Size: 0x18

struct FTypedElementPropertyBagPlaceholderTag : public FEditorDataStorageTag
{
}; // Size: 0x1

struct FTypedElementPropertyBagPlaceholderTypeInfoColumn : public FEditorDataStorageColumn
{
}; // Size: 0x8

struct FTypedElementRowReferenceColumn : public FEditorDataStorageColumn
{
}; // Size: 0x8

struct FTypedElementScriptStructTypeInfoColumn : public FEditorDataStorageColumn
{
}; // Size: 0x8

struct FTypedElementSelectionColumn : public FEditorDataStorageColumn
{
    FName SelectionSet;                                                               // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FTypedElementSlateWidgetReferenceColumn : public FEditorDataStorageColumn
{
}; // Size: 0x30

struct FTypedElementSlateWidgetReferenceDeletesRowTag : public FEditorDataStorageTag
{
}; // Size: 0x1

struct FTypedElementSyncBackToWorldTag : public FEditorDataStorageTag
{
}; // Size: 0x1

struct FTypedElementSyncFromWorldInteractiveTag : public FEditorDataStorageTag
{
}; // Size: 0x1

struct FTypedElementSyncFromWorldTag : public FEditorDataStorageTag
{
}; // Size: 0x1

struct FTypedElementU32IntValueCacheColumn : public FEditorDataStorageColumn
{
    uint32 Value;                                                                     // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FTypedElementU64IntValueCacheColumn : public FEditorDataStorageColumn
{
    uint64 Value;                                                                     // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FTypedElementUObjectColumn : public FEditorDataStorageColumn
{
}; // Size: 0x8

struct FTypedElementUObjectIdColumn : public FEditorDataStorageColumn
{
    uint32 ID;                                                                        // 0x0000 (size: 0x4)
    int32 SerialNumber;                                                               // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FTypedElementViewportOutlineColorColumn : public FEditorDataStorageColumn
{
    uint8 SelectionOutlineColorIndex;                                                 // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FTypedElementViewportOverlayColorColumn : public FEditorDataStorageColumn
{
    FColor OverlayColor;                                                              // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FTypedElementWidgetConstructor
{
}; // Size: 0x28

struct FTypedElementWorldColumn : public FEditorDataStorageColumn
{
}; // Size: 0x8

struct FUnresolvedTableRowParentColumn : public FEditorDataStorageColumn
{
    uint64 ParentIdHash;                                                              // 0x0000 (size: 0x8)

}; // Size: 0x8

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

class UEditorDataStorageFactory : public UObject
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

class UTest_PingPongBetweenPhaseFactory : public UEditorDataStorageFactory
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
}; // Size: 0x948

#endif
