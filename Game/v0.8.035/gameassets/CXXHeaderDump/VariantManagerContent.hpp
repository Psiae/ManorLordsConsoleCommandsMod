#ifndef UE4SS_SDK_VariantManagerContent_HPP
#define UE4SS_SDK_VariantManagerContent_HPP

#include "VariantManagerContent_enums.hpp"

struct FCapturedPropSegment
{
    FString PropertyName;                                                             // 0x0000 (size: 0x10)
    int32 PropertyIndex;                                                              // 0x0010 (size: 0x4)
    FString ComponentName;                                                            // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FFunctionCaller
{
    FName FunctionName;                                                               // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FVariantDependency
{
    TSoftObjectPtr<UVariantSet> VariantSet;                                           // 0x0000 (size: 0x28)
    TSoftObjectPtr<UVariant> Variant;                                                 // 0x0028 (size: 0x28)
    bool bEnabled;                                                                    // 0x0050 (size: 0x1)

}; // Size: 0x58

class ALevelVariantSetsActor : public AActor
{
    FSoftObjectPath LevelVariantSets;                                                 // 0x02A8 (size: 0x20)
    TMap<class UClass*, class ULevelVariantSetsFunctionDirector*> DirectorInstances;  // 0x02C8 (size: 0x50)

    bool SwitchOnVariantByName(FString VariantSetName, FString VariantName);
    bool SwitchOnVariantByIndex(int32 VariantSetIndex, int32 VariantIndex);
    void SetLevelVariantSets(class ULevelVariantSets* InVariantSets);
    class ULevelVariantSets* GetLevelVariantSets(bool bLoad);
}; // Size: 0x318

class ASwitchActor : public AActor
{
    class USceneComponent* SceneComponent;                                            // 0x02C0 (size: 0x8)
    int32 LastSelectedOption;                                                         // 0x02C8 (size: 0x4)

    void SelectOption(int32 OptionIndex);
    int32 GetSelectedOption();
    TArray<class AActor*> GetOptions();
}; // Size: 0x2D0

class ULevelVariantSets : public UObject
{
    UClass* DirectorClass;                                                            // 0x0028 (size: 0x8)
    TArray<class UVariantSet*> VariantSets;                                           // 0x0030 (size: 0x10)

    class UVariantSet* GetVariantSetByName(FString VariantSetName);
    class UVariantSet* GetVariantSet(int32 VariantSetIndex);
    int32 GetNumVariantSets();
}; // Size: 0x90

class ULevelVariantSetsFunctionDirector : public UObject
{
}; // Size: 0x40

class UPropertyValue : public UObject
{
    TArray<TFieldPath<FProperty>> Properties;                                         // 0x0088 (size: 0x10)
    TArray<int32> PropertyIndices;                                                    // 0x0098 (size: 0x10)
    TArray<FCapturedPropSegment> CapturedPropSegments;                                // 0x00A8 (size: 0x10)
    FString FullDisplayString;                                                        // 0x00B8 (size: 0x10)
    FName PropertySetterName;                                                         // 0x00C8 (size: 0x8)
    TMap<class FString, class FString> PropertySetterParameterDefaults;               // 0x00D0 (size: 0x50)
    bool bHasRecordedData;                                                            // 0x0120 (size: 0x1)
    UClass* LeafPropertyClass;                                                        // 0x0128 (size: 0x8)
    TArray<uint8> ValueBytes;                                                         // 0x0138 (size: 0x10)
    EPropertyValueCategory PropCategory;                                              // 0x0148 (size: 0x1)

    bool HasRecordedData();
    FText GetPropertyTooltip();
    FString GetFullDisplayString();
}; // Size: 0x1B0

class UPropertyValueColor : public UPropertyValue
{
}; // Size: 0x1B0

class UPropertyValueMaterial : public UPropertyValue
{
}; // Size: 0x1B0

class UPropertyValueOption : public UPropertyValue
{
}; // Size: 0x1B0

class UPropertyValueSoftObject : public UPropertyValue
{
}; // Size: 0x1B0

class UPropertyValueTransform : public UPropertyValue
{
}; // Size: 0x1B0

class UPropertyValueVisibility : public UPropertyValue
{
}; // Size: 0x1B0

class UVariant : public UObject
{
    TArray<FVariantDependency> Dependencies;                                          // 0x0028 (size: 0x10)
    FText DisplayText;                                                                // 0x0038 (size: 0x10)
    TArray<class UVariantObjectBinding*> ObjectBindings;                              // 0x0058 (size: 0x10)
    class UTexture2D* Thumbnail;                                                      // 0x0068 (size: 0x8)

    void SwitchOn();
    void SetThumbnailFromTexture(class UTexture2D* NewThumbnail);
    void SetThumbnailFromFile(FString FilePath);
    void SetThumbnailFromEditorViewport();
    void SetThumbnailFromCamera(class UObject* WorldContextObject, const FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma);
    void SetDisplayText(const FText& NewDisplayText);
    void SetDependency(int32 Index, FVariantDependency& Dependency);
    bool IsActive();
    class UTexture2D* GetThumbnail();
    class UVariantSet* GetParent();
    int32 GetNumDependencies();
    int32 GetNumActors();
    FText GetDisplayText();
    TArray<class UVariant*> GetDependents(class ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies);
    FVariantDependency GetDependency(int32 Index);
    class AActor* GetActor(int32 ActorIndex);
    void DeleteDependency(int32 Index);
    int32 AddDependency(FVariantDependency& Dependency);
}; // Size: 0x70

class UVariantObjectBinding : public UObject
{
    FString CachedActorLabel;                                                         // 0x0028 (size: 0x10)
    FSoftObjectPath ObjectPtr;                                                        // 0x0038 (size: 0x20)
    TLazyObjectPtr<class UObject> LazyObjectPtr;                                      // 0x0058 (size: 0x18)
    TArray<class UPropertyValue*> CapturedProperties;                                 // 0x0070 (size: 0x10)
    TArray<FFunctionCaller> FunctionCallers;                                          // 0x0080 (size: 0x10)

}; // Size: 0x90

class UVariantSet : public UObject
{
    FText DisplayText;                                                                // 0x0028 (size: 0x10)
    bool bExpanded;                                                                   // 0x0048 (size: 0x1)
    TArray<class UVariant*> Variants;                                                 // 0x0050 (size: 0x10)
    class UTexture2D* Thumbnail;                                                      // 0x0060 (size: 0x8)

    void SetThumbnailFromTexture(class UTexture2D* NewThumbnail);
    void SetThumbnailFromFile(FString FilePath);
    void SetThumbnailFromEditorViewport();
    void SetThumbnailFromCamera(class UObject* WorldContextObject, const FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma);
    void SetDisplayText(const FText& NewDisplayText);
    class UVariant* GetVariantByName(FString VariantName);
    class UVariant* GetVariant(int32 VariantIndex);
    class UTexture2D* GetThumbnail();
    class ULevelVariantSets* GetParent();
    int32 GetNumVariants();
    FText GetDisplayText();
}; // Size: 0x68

#endif
