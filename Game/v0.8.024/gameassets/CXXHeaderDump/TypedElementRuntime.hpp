#ifndef UE4SS_SDK_TypedElementRuntime_HPP
#define UE4SS_SDK_TypedElementRuntime_HPP

#include "TypedElementRuntime_enums.hpp"

struct FTypedElementIsSelectedOptions
{
    bool bAllowIndirect;                                                              // 0x0000 (size: 0x1)

}; // Size: 0xC

struct FTypedElementSelectionNormalizationOptions
{
    bool bExpandGroups;                                                               // 0x0000 (size: 0x1)
    bool bFollowAttachment;                                                           // 0x0001 (size: 0x1)

}; // Size: 0xC

struct FTypedElementSelectionOptions
{
    bool bAllowHidden;                                                                // 0x0000 (size: 0x1)
    bool bAllowGroups;                                                                // 0x0001 (size: 0x1)
    bool bAllowLegacyNotifications;                                                   // 0x0002 (size: 0x1)
    bool bWarnIfLocked;                                                               // 0x0003 (size: 0x1)
    bool bAllowSubRootSelection;                                                      // 0x0004 (size: 0x1)
    ETypedElementChildInclusionMethod ChildElementInclusionMethod;                    // 0x0005 (size: 0x1)

}; // Size: 0x10

struct FTypedElementSelectionSetState
{
    TWeakObjectPtr<class UTypedElementSelectionSet> CreatedFromSelectionSet;          // 0x0000 (size: 0x8)

}; // Size: 0x18

class ITypedElementAssetDataInterface : public IInterface
{

    FAssetData GetAssetData(const FScriptTypedElementHandle& InElementHandle);
    TArray<FAssetData> GetAllReferencedAssetDatas(const FScriptTypedElementHandle& InElementHandle);
}; // Size: 0x28

class ITypedElementHierarchyInterface : public IInterface
{

    FScriptTypedElementHandle GetParentElement(const FScriptTypedElementHandle& InElementHandle, const bool bAllowCreate);
    void GetChildElements(const FScriptTypedElementHandle& InElementHandle, TArray<FScriptTypedElementHandle>& OutElementHandles, const bool bAllowCreate);
}; // Size: 0x28

class ITypedElementObjectInterface : public IInterface
{

    UClass* GetObjectClass(const FScriptTypedElementHandle& InElementHandle);
    class UObject* GetObject(const FScriptTypedElementHandle& InElementHandle);
}; // Size: 0x28

class ITypedElementPrimitiveCustomDataInterface : public IInterface
{

    void SetCustomDataValue(const FScriptTypedElementHandle& InElementHandle, int32 CustomDataIndex, float CustomDataValue, bool bMarkRenderStateDirty);
    void SetCustomData(const FScriptTypedElementHandle& InElementHandle, const TArray<float>& CustomDataFloats, bool bMarkRenderStateDirty);
}; // Size: 0x28

class ITypedElementSelectionInterface : public IInterface
{

    bool SelectElement(const FScriptTypedElementHandle& InElementHandle, FScriptTypedElementListProxy InSelectionSet, const FTypedElementSelectionOptions& InSelectionOptions);
    bool IsElementSelected(const FScriptTypedElementHandle& InElementHandle, const FScriptTypedElementListProxy InSelectionSet, const FTypedElementIsSelectedOptions& InSelectionOptions);
    FScriptTypedElementHandle GetSelectionElement(const FScriptTypedElementHandle& InElementHandle, const FScriptTypedElementListProxy InCurrentSelection, const ETypedElementSelectionMethod InSelectionMethod);
    bool DeselectElement(const FScriptTypedElementHandle& InElementHandle, FScriptTypedElementListProxy InSelectionSet, const FTypedElementSelectionOptions& InSelectionOptions);
    bool CanSelectElement(const FScriptTypedElementHandle& InElementHandle, const FTypedElementSelectionOptions& InSelectionOptions);
    bool CanDeselectElement(const FScriptTypedElementHandle& InElementHandle, const FTypedElementSelectionOptions& InSelectionOptions);
    bool AllowSelectionModifiers(const FScriptTypedElementHandle& InElementHandle, const FScriptTypedElementListProxy InSelectionSet);
}; // Size: 0x28

class UTypedElementSelectionSet : public UObject
{
    FTypedElementSelectionSetOnPreSelectionChange OnPreSelectionChange;               // 0x0828 (size: 0x10)
    void OnPreChangeDynamic(const class UTypedElementSelectionSet* SelectionSet);
    FTypedElementSelectionSetOnSelectionChange OnSelectionChange;                     // 0x0838 (size: 0x10)
    void OnChangeDynamic(const class UTypedElementSelectionSet* SelectionSet);

    bool SetSelection(const TArray<FScriptTypedElementHandle>& InElementHandles, const FTypedElementSelectionOptions InSelectionOptions);
    bool SelectElements(const TArray<FScriptTypedElementHandle>& InElementHandles, const FTypedElementSelectionOptions InSelectionOptions);
    bool SelectElement(const FScriptTypedElementHandle& InElementHandle, const FTypedElementSelectionOptions InSelectionOptions);
    void RestoreSelectionState(const FTypedElementSelectionSetState& InSelectionState);
    void OnPreChangeDynamic__DelegateSignature(const class UTypedElementSelectionSet* SelectionSet);
    void OnChangeDynamic__DelegateSignature(const class UTypedElementSelectionSet* SelectionSet);
    TArray<FScriptTypedElementHandle> K2_GetSelectedElementHandles(const TSubclassOf<class UInterface> InBaseInterfaceType);
    bool IsElementSelected(const FScriptTypedElementHandle& InElementHandle, const FTypedElementIsSelectedOptions InSelectionOptions);
    bool HasSelectedObjects(const UClass* InRequiredClass);
    bool HasSelectedElements(const TSubclassOf<class UInterface> InBaseInterfaceType);
    class UObject* GetTopSelectedObject(const UClass* InRequiredClass);
    FScriptTypedElementHandle GetSelectionElement(const FScriptTypedElementHandle& InElementHandle, const ETypedElementSelectionMethod InSelectionMethod);
    TArray<class UObject*> GetSelectedObjects(const UClass* InRequiredClass);
    int32 GetNumSelectedElements();
    FTypedElementSelectionSetState GetCurrentSelectionState();
    class UObject* GetBottomSelectedObject(const UClass* InRequiredClass);
    bool DeselectElements(const TArray<FScriptTypedElementHandle>& InElementHandles, const FTypedElementSelectionOptions InSelectionOptions);
    bool DeselectElement(const FScriptTypedElementHandle& InElementHandle, const FTypedElementSelectionOptions InSelectionOptions);
    int32 CountSelectedObjects(const UClass* InRequiredClass);
    int32 CountSelectedElements(const TSubclassOf<class UInterface> InBaseInterfaceType);
    bool ClearSelection(const FTypedElementSelectionOptions InSelectionOptions);
    bool CanSelectElement(const FScriptTypedElementHandle& InElementHandle, const FTypedElementSelectionOptions InSelectionOptions);
    bool CanDeselectElement(const FScriptTypedElementHandle& InElementHandle, const FTypedElementSelectionOptions InSelectionOptions);
    bool AllowSelectionModifiers(const FScriptTypedElementHandle& InElementHandle);
}; // Size: 0x8A0

class UTypedElementSelectionSetLibrary : public UObject
{

    bool SetSelectionFromList(class UTypedElementSelectionSet* SelectionSet, const FScriptTypedElementListProxy ElementList, const FTypedElementSelectionOptions SelectionOptions);
    bool SelectElementsFromList(class UTypedElementSelectionSet* SelectionSet, const FScriptTypedElementListProxy ElementList, const FTypedElementSelectionOptions SelectionOptions);
    FScriptTypedElementListProxy GetNormalizedSelection(class UTypedElementSelectionSet* SelectionSet, const FTypedElementSelectionNormalizationOptions NormalizationOptions);
    FScriptTypedElementListProxy GetNormalizedElementList(class UTypedElementSelectionSet* SelectionSet, const FScriptTypedElementListProxy ElementList, const FTypedElementSelectionNormalizationOptions NormalizationOptions);
    bool DeselectElementsFromList(class UTypedElementSelectionSet* SelectionSet, const FScriptTypedElementListProxy ElementList, const FTypedElementSelectionOptions SelectionOptions);
}; // Size: 0x28

#endif
