#ifndef UE4SS_SDK_EnhancedInput_HPP
#define UE4SS_SDK_EnhancedInput_HPP

#include "EnhancedInput_enums.hpp"

struct FBlueprintEnhancedInputActionBinding
{
    class UInputAction* InputAction;                                                  // 0x0000 (size: 0x8)
    ETriggerEvent TriggerEvent;                                                       // 0x0008 (size: 0x1)
    FName FunctionNameToBind;                                                         // 0x000C (size: 0x8)

}; // Size: 0x18

struct FBlueprintInputDebugKeyDelegateBinding
{
    FInputChord InputChord;                                                           // 0x0000 (size: 0x20)
    TEnumAsByte<EInputEvent> InputKeyEvent;                                           // 0x0020 (size: 0x1)
    FName FunctionNameToBind;                                                         // 0x0024 (size: 0x8)
    bool bExecuteWhenPaused;                                                          // 0x002C (size: 0x1)

}; // Size: 0x30

struct FDefaultContextSetting
{
    TSoftObjectPtr<UInputMappingContext> InputMappingContext;                         // 0x0000 (size: 0x28)
    int32 Priority;                                                                   // 0x0028 (size: 0x4)
    bool bAddImmediately;                                                             // 0x002C (size: 0x1)
    bool bRegisterWithUserSettings;                                                   // 0x002D (size: 0x1)

}; // Size: 0x30

struct FEnhancedActionKeyMapping
{
    TArray<class UInputTrigger*> Triggers;                                            // 0x0000 (size: 0x10)
    TArray<class UInputModifier*> Modifiers;                                          // 0x0010 (size: 0x10)
    class UInputAction* Action;                                                       // 0x0020 (size: 0x8)
    FKey Key;                                                                         // 0x0028 (size: 0x18)
    uint8 bShouldBeIgnored;                                                           // 0x0040 (size: 0x1)
    uint8 bHasAlwaysTickTrigger;                                                      // 0x0040 (size: 0x1)
    EPlayerMappableKeySettingBehaviors SettingBehavior;                               // 0x0041 (size: 0x1)
    class UPlayerMappableKeySettings* PlayerMappableKeySettings;                      // 0x0048 (size: 0x8)

}; // Size: 0x50

struct FInjectedInput
{
    TArray<class UInputTrigger*> Triggers;                                            // 0x0020 (size: 0x10)
    TArray<class UInputModifier*> Modifiers;                                          // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FInjectedInputArray
{
    TArray<FInjectedInput> Injected;                                                  // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FInputActionInstance
{
    class UInputAction* SourceAction;                                                 // 0x0000 (size: 0x8)
    ETriggerEvent TriggerEvent;                                                       // 0x0013 (size: 0x1)
    float LastTriggeredWorldTime;                                                     // 0x0014 (size: 0x4)
    TArray<class UInputTrigger*> Triggers;                                            // 0x0018 (size: 0x10)
    TArray<class UInputModifier*> Modifiers;                                          // 0x0028 (size: 0x10)
    float ElapsedProcessedTime;                                                       // 0x0058 (size: 0x4)
    float ElapsedTriggeredTime;                                                       // 0x005C (size: 0x4)

}; // Size: 0x60

struct FInputActionValue
{
}; // Size: 0x20

struct FInputCancelAction
{
    class UInputAction* CancelAction;                                                 // 0x0000 (size: 0x8)
    uint8 CancellationStates;                                                         // 0x0008 (size: 0x1)

}; // Size: 0x10

struct FInputComboStepData
{
    class UInputAction* ComboStepAction;                                              // 0x0000 (size: 0x8)
    uint8 ComboStepCompletionStates;                                                  // 0x0008 (size: 0x1)
    float TimeToPressKey;                                                             // 0x000C (size: 0x4)

}; // Size: 0x10

struct FKeyConsumptionOptions
{
}; // Size: 0x18

struct FKeyMappingRow
{
    TSet<FPlayerKeyMapping> Mappings;                                                 // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FMapPlayerKeyArgs
{
    FName MappingName;                                                                // 0x0000 (size: 0x8)
    EPlayerMappableKeySlot Slot;                                                      // 0x0008 (size: 0x1)
    FKey NewKey;                                                                      // 0x0010 (size: 0x18)
    FName HardwareDeviceId;                                                           // 0x0028 (size: 0x8)
    FGameplayTag ProfileId;                                                           // 0x0030 (size: 0x8)
    uint8 bCreateMatchingSlotIfNeeded;                                                // 0x0038 (size: 0x1)
    uint8 bDeferOnSettingsChangedBroadcast;                                           // 0x0038 (size: 0x1)

}; // Size: 0x40

struct FMappingQueryIssue
{
    EMappingQueryIssue Issue;                                                         // 0x0000 (size: 0x1)
    class UInputMappingContext* BlockingContext;                                      // 0x0008 (size: 0x8)
    class UInputAction* BlockingAction;                                               // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FModifyContextOptions
{
    uint8 bIgnoreAllPressedKeysUntilRelease;                                          // 0x0000 (size: 0x1)
    uint8 bForceImmediately;                                                          // 0x0000 (size: 0x1)
    uint8 bNotifyUserSettings;                                                        // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FPlayerKeyMapping
{
    FName MappingName;                                                                // 0x0000 (size: 0x8)
    FText DisplayName;                                                                // 0x0008 (size: 0x10)
    FText DisplayCategory;                                                            // 0x0018 (size: 0x10)
    EPlayerMappableKeySlot Slot;                                                      // 0x0028 (size: 0x1)
    uint8 bIsDirty;                                                                   // 0x0029 (size: 0x1)
    FKey DefaultKey;                                                                  // 0x0030 (size: 0x18)
    FKey CurrentKey;                                                                  // 0x0048 (size: 0x18)
    FHardwareDeviceIdentifier HardwareDeviceId;                                       // 0x0060 (size: 0x18)
    class UInputAction* AssociatedInputAction;                                        // 0x0078 (size: 0x8)

}; // Size: 0x80

struct FPlayerMappableKeyOptions
{
    class UObject* MetaData;                                                          // 0x0000 (size: 0x8)
    FName Name;                                                                       // 0x0008 (size: 0x8)
    FText DisplayName;                                                                // 0x0010 (size: 0x10)
    FText DisplayCategory;                                                            // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FPlayerMappableKeyProfileCreationArgs
{
    TSubclassOf<class UEnhancedPlayerMappableKeyProfile> ProfileType;                 // 0x0000 (size: 0x8)
    FGameplayTag ProfileIdentifier;                                                   // 0x0008 (size: 0x8)
    FPlatformUserId UserId;                                                           // 0x0010 (size: 0x4)
    FText DisplayName;                                                                // 0x0018 (size: 0x10)
    uint8 bSetAsCurrentProfile;                                                       // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FPlayerMappableKeyQueryOptions
{
    FName MappingName;                                                                // 0x0000 (size: 0x8)
    FKey KeyToMatch;                                                                  // 0x0008 (size: 0x18)
    EPlayerMappableKeySlot SlotToMatch;                                               // 0x0020 (size: 0x1)
    uint8 bMatchBasicKeyTypes;                                                        // 0x0021 (size: 0x1)
    uint8 bMatchKeyAxisType;                                                          // 0x0021 (size: 0x1)
    EHardwareDevicePrimaryType RequiredDeviceType;                                    // 0x0022 (size: 0x1)
    int32 RequiredDeviceFlags;                                                        // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FPlayerMappableKeySlot
{
    int32 SlotNumber;                                                                 // 0x0000 (size: 0x4)

}; // Size: 0x4

class IEnhancedInputSubsystemInterface : public IInterface
{

    void UpdateValueOfContinuousInputInjectionForPlayerMapping(const FName MappingName, FInputActionValue RawValue);
    void UpdateValueOfContinuousInputInjectionForAction(const class UInputAction* Action, FInputActionValue RawValue);
    void StopContinuousInputInjectionForPlayerMapping(const FName MappingName);
    void StopContinuousInputInjectionForAction(const class UInputAction* Action);
    void StartContinuousInputInjectionForPlayerMapping(const FName MappingName, FInputActionValue RawValue, const TArray<class UInputModifier*>& Modifiers, const TArray<class UInputTrigger*>& Triggers);
    void StartContinuousInputInjectionForAction(const class UInputAction* Action, FInputActionValue RawValue, const TArray<class UInputModifier*>& Modifiers, const TArray<class UInputTrigger*>& Triggers);
    void RequestRebuildControlMappings(const FModifyContextOptions& Options, EInputMappingRebuildType RebuildType);
    void RemoveMappingContext(const class UInputMappingContext* MappingContext, const FModifyContextOptions& Options);
    EMappingQueryResult QueryMapKeyInContextSet(const TArray<class UInputMappingContext*>& PrioritizedActiveContexts, const class UInputMappingContext* InputContext, const class UInputAction* Action, FKey Key, TArray<FMappingQueryIssue>& OutIssues, EMappingQueryIssue BlockingIssues);
    EMappingQueryResult QueryMapKeyInActiveContextSet(const class UInputMappingContext* InputContext, const class UInputAction* Action, FKey Key, TArray<FMappingQueryIssue>& OutIssues, EMappingQueryIssue BlockingIssues);
    TArray<FKey> QueryKeysMappedToAction(const class UInputAction* Action);
    void OnUserSettingsChanged(class UEnhancedInputUserSettings* Settings);
    void OnUserKeyProfileChanged(const class UEnhancedPlayerMappableKeyProfile* InNewProfile);
    void InjectInputVectorForPlayerMapping(const FName MappingName, FVector Value, const TArray<class UInputModifier*>& Modifiers, const TArray<class UInputTrigger*>& Triggers);
    void InjectInputVectorForAction(const class UInputAction* Action, FVector Value, const TArray<class UInputModifier*>& Modifiers, const TArray<class UInputTrigger*>& Triggers);
    void InjectInputForPlayerMapping(const FName MappingName, FInputActionValue RawValue, const TArray<class UInputModifier*>& Modifiers, const TArray<class UInputTrigger*>& Triggers);
    void InjectInputForAction(const class UInputAction* Action, FInputActionValue RawValue, const TArray<class UInputModifier*>& Modifiers, const TArray<class UInputTrigger*>& Triggers);
    bool HasMappingContext(const class UInputMappingContext* MappingContext, int32& OutFoundPriority);
    class UEnhancedInputUserSettings* GetUserSettings();
    TArray<FEnhancedActionKeyMapping> GetAllPlayerMappableActionKeyMappings();
    void ClearAllMappings();
    void AddMappingContext(const class UInputMappingContext* MappingContext, int32 Priority, const FModifyContextOptions& Options);
}; // Size: 0x28

class UEnhancedInputActionDelegateBinding : public UInputDelegateBinding
{
    TArray<FBlueprintEnhancedInputActionBinding> InputActionDelegateBindings;         // 0x0028 (size: 0x10)

}; // Size: 0x38

class UEnhancedInputActionValueBinding : public UInputDelegateBinding
{
    TArray<FBlueprintEnhancedInputActionBinding> InputActionValueBindings;            // 0x0028 (size: 0x10)

}; // Size: 0x38

class UEnhancedInputComponent : public UInputComponent
{

    FInputActionValue GetBoundActionValue(const class UInputAction* Action);
}; // Size: 0x160

class UEnhancedInputDeveloperSettings : public UDeveloperSettingsBackedByCVars
{
    TArray<FDefaultContextSetting> DefaultMappingContexts;                            // 0x0038 (size: 0x10)
    TArray<FDefaultContextSetting> DefaultWorldSubsystemMappingContexts;              // 0x0048 (size: 0x10)
    FPerPlatformSettings PlatformSettings;                                            // 0x0058 (size: 0x10)
    TSoftClassPtr<UEnhancedInputUserSettings> UserSettingsClass;                      // 0x0068 (size: 0x28)
    TSoftClassPtr<UEnhancedPlayerMappableKeyProfile> DefaultPlayerMappableKeyProfileClass; // 0x0090 (size: 0x28)
    TSoftClassPtr<UEnhancedPlayerInput> DefaultWorldInputClass;                       // 0x00B8 (size: 0x28)
    uint8 bSendTriggeredEventsWhenInputIsFlushed;                                     // 0x00E0 (size: 0x1)
    uint8 bEnableUserSettings;                                                        // 0x00E0 (size: 0x1)
    uint8 bEnableDefaultMappingContexts;                                              // 0x00E0 (size: 0x1)
    uint8 bShouldOnlyTriggerLastActionInChord;                                        // 0x00E0 (size: 0x1)
    uint8 bLogOnDeprecatedConfigUsed;                                                 // 0x00E0 (size: 0x1)
    uint8 bEnableWorldSubsystem;                                                      // 0x00E0 (size: 0x1)
    uint8 bShouldLogAllWorldSubsystemInputs;                                          // 0x00E0 (size: 0x1)

}; // Size: 0xE8

class UEnhancedInputLibrary : public UBlueprintFunctionLibrary
{

    void RequestRebuildControlMappingsUsingContext(const class UInputMappingContext* Context, bool bForceImmediately);
    FInputActionValue MakeInputActionValueOfType(double X, double Y, double Z, const EInputActionValueType ValueType);
    FInputActionValue MakeInputActionValue(double X, double Y, double Z, const FInputActionValue& MatchValueType);
    bool IsActionKeyMappingPlayerMappable(const FEnhancedActionKeyMapping& ActionKeyMapping);
    FPlayerMappableKeySlot GetThirdPlayerMappableKeySlot();
    FPlayerMappableKeySlot GetSecondPlayerMappableKeySlot();
    class UPlayerMappableKeySettings* GetPlayerMappableKeySettings(const FEnhancedActionKeyMapping& ActionKeyMapping);
    FName GetMappingName(const FEnhancedActionKeyMapping& ActionKeyMapping);
    FPlayerMappableKeySlot GetFourthPlayerMappableKeySlot();
    FPlayerMappableKeySlot GetFirstPlayerMappableKeySlot();
    FInputActionValue GetBoundActionValue(class AActor* Actor, const class UInputAction* Action);
    void FlushPlayerInput(class APlayerController* PlayerController);
    FString Conv_TriggerEventValueToString(const ETriggerEvent TriggerEvent);
    FString Conv_InputActionValueToString(FInputActionValue ActionValue);
    bool Conv_InputActionValueToBool(FInputActionValue InValue);
    FVector Conv_InputActionValueToAxis3D(FInputActionValue ActionValue);
    FVector2D Conv_InputActionValueToAxis2D(FInputActionValue InValue);
    double Conv_InputActionValueToAxis1D(FInputActionValue InValue);
    void BreakInputActionValue(FInputActionValue InActionValue, double& X, double& Y, double& Z, EInputActionValueType& Type);
}; // Size: 0x28

class UEnhancedInputLocalPlayerSubsystem : public ULocalPlayerSubsystem
{
    FEnhancedInputLocalPlayerSubsystemControlMappingsRebuiltDelegate ControlMappingsRebuiltDelegate; // 0x0180 (size: 0x10)
    void OnControlMappingsRebuilt();
    class UEnhancedInputUserSettings* UserSettings;                                   // 0x0190 (size: 0x8)
    TMap<class UInputAction*, class FInjectedInput> ContinuouslyInjectedInputs;       // 0x0198 (size: 0x50)

    void OnControlMappingsRebuilt__DelegateSignature();
}; // Size: 0x1E8

class UEnhancedInputPlatformData : public UObject
{
    TMap<class UInputMappingContext*, class UInputMappingContext*> MappingContextRedirects; // 0x0028 (size: 0x50)

    class UInputMappingContext* GetContextRedirect(class UInputMappingContext* InContext);
}; // Size: 0x78

class UEnhancedInputPlatformSettings : public UPlatformSettings
{
    TArray<TSoftClassPtr<UEnhancedInputPlatformData>> InputData;                      // 0x0040 (size: 0x10)
    TArray<class TSubclassOf<UEnhancedInputPlatformData>> InputDataClasses;           // 0x0050 (size: 0x10)
    bool bShouldLogMappingContextRedirects;                                           // 0x0060 (size: 0x1)

}; // Size: 0x68

class UEnhancedInputUserSettings : public USaveGame
{
    FEnhancedInputUserSettingsOnSettingsChanged OnSettingsChanged;                    // 0x0030 (size: 0x10)
    void EnhancedInputUserSettingsChanged(class UEnhancedInputUserSettings* Settings);
    FEnhancedInputUserSettingsOnSettingsApplied OnSettingsApplied;                    // 0x0040 (size: 0x10)
    void EnhancedInputUserSettingsApplied();
    FGameplayTag CurrentProfileIdentifier;                                            // 0x0070 (size: 0x8)
    TMap<class FGameplayTag, class UEnhancedPlayerMappableKeyProfile*> SavedKeyProfiles; // 0x0078 (size: 0x50)
    TWeakObjectPtr<class ULocalPlayer> OwningLocalPlayer;                             // 0x00C8 (size: 0x8)
    TSet<UInputMappingContext*> RegisteredMappingContexts;                            // 0x00D0 (size: 0x50)

    bool UnregisterInputMappingContexts(const TSet<UInputMappingContext*>& MappingContexts);
    bool UnregisterInputMappingContext(const class UInputMappingContext* IMC);
    void UnMapPlayerKey(const FMapPlayerKeyArgs& InArgs, FGameplayTagContainer& FailureReason);
    bool SetKeyProfile(const FGameplayTag& InProfileId);
    void SaveSettings();
    void ResetKeyProfileToDefault(const FGameplayTag& ProfileId, FGameplayTagContainer& FailureReason);
    void ResetAllPlayerKeysInRow(const FMapPlayerKeyArgs& InArgs, FGameplayTagContainer& FailureReason);
    bool RegisterInputMappingContexts(const TSet<UInputMappingContext*>& MappingContexts);
    bool RegisterInputMappingContext(const class UInputMappingContext* IMC);
    void MapPlayerKey(const FMapPlayerKeyArgs& InArgs, FGameplayTagContainer& FailureReason);
    void MappingContextRegisteredWithSettings__DelegateSignature(const class UInputMappingContext* IMC);
    void MappableKeyProfileChanged__DelegateSignature(const class UEnhancedPlayerMappableKeyProfile* NewProfile);
    bool IsMappingContextRegistered(const class UInputMappingContext* IMC);
    class UEnhancedPlayerMappableKeyProfile* GetKeyProfileWithIdentifier(const FGameplayTag& ProfileId);
    FGameplayTag GetCurrentKeyProfileIdentifier();
    class UEnhancedPlayerMappableKeyProfile* GetCurrentKeyProfile();
    TSet<FPlayerKeyMapping> FindMappingsInRow(const FName MappingName);
    void EnhancedInputUserSettingsChanged__DelegateSignature(class UEnhancedInputUserSettings* Settings);
    void EnhancedInputUserSettingsApplied__DelegateSignature();
    class UEnhancedPlayerMappableKeyProfile* CreateNewKeyProfile(const FPlayerMappableKeyProfileCreationArgs& InArgs);
    void AsyncSaveSettings();
    void ApplySettings();
}; // Size: 0x120

class UEnhancedInputWorldSubsystem : public UWorldSubsystem
{
    class UEnhancedPlayerInput* PlayerInput;                                          // 0x0180 (size: 0x8)
    TArray<TWeakObjectPtr<UInputComponent>> CurrentInputStack;                        // 0x0198 (size: 0x10)
    TMap<class UInputAction*, class FInjectedInput> ContinuouslyInjectedInputs;       // 0x01A8 (size: 0x50)

    bool RemoveActorInputComponent(class AActor* Actor);
    void AddActorInputComponent(class AActor* Actor);
}; // Size: 0x1F8

class UEnhancedPlayerInput : public UPlayerInput
{
    TMap<class UInputAction*, class FKeyConsumptionOptions> KeyConsumptionData;       // 0x0498 (size: 0x50)
    TMap<UInputMappingContext*, int32> AppliedInputContexts;                          // 0x04E8 (size: 0x50)
    TArray<FEnhancedActionKeyMapping> EnhancedActionMappings;                         // 0x0538 (size: 0x10)
    TMap<class UInputAction*, class FInputActionInstance> ActionInstanceData;         // 0x0598 (size: 0x50)
    TMap<class FKey, class FVector> KeysPressedThisTick;                              // 0x06D8 (size: 0x50)
    TMap<class UInputAction*, class FInjectedInputArray> InputsInjectedThisTick;      // 0x0728 (size: 0x50)
    TSet<UInputAction*> LastInjectedActions;                                          // 0x0778 (size: 0x50)

}; // Size: 0x840

class UEnhancedPlayerMappableKeyProfile : public UObject
{
    FGameplayTag ProfileIdentifier;                                                   // 0x0028 (size: 0x8)
    FPlatformUserId OwningUserId;                                                     // 0x0030 (size: 0x4)
    FText DisplayName;                                                                // 0x0038 (size: 0x10)
    TMap<class FName, class FKeyMappingRow> PlayerMappedKeys;                         // 0x0048 (size: 0x50)

    FString ToString();
    void SetDisplayName(const FText& NewDisplayName);
    void ResetToDefault();
    void ResetMappingToDefault(const FName InMappingName);
    int32 QueryPlayerMappedKeys(const FPlayerMappableKeyQueryOptions& Options, TArray<FKey>& OutKeys);
    void K2_FindKeyMapping(FPlayerKeyMapping& OutKeyMapping, const FMapPlayerKeyArgs& InArgs);
    FGameplayTag GetProfileIdentifer();
    FText GetProfileDisplayName();
    TMap<class FName, class FKeyMappingRow> GetPlayerMappingRows();
    int32 GetMappingNamesForKey(const FKey& InKey, TArray<FName>& OutMappingNames);
    int32 GetMappedKeysInRow(const FName MappingName, TArray<FKey>& OutKeys);
    void DumpProfileToLog();
    bool DoesMappingPassQueryOptions(const FPlayerKeyMapping& PlayerMapping, const FPlayerMappableKeyQueryOptions& Options);
}; // Size: 0x98

class UInputAction : public UDataAsset
{
    FText ActionDescription;                                                          // 0x0030 (size: 0x10)
    bool bTriggerWhenPaused;                                                          // 0x0040 (size: 0x1)
    bool bConsumeInput;                                                               // 0x0041 (size: 0x1)
    bool bConsumesActionAndAxisMappings;                                              // 0x0042 (size: 0x1)
    bool bReserveAllMappings;                                                         // 0x0043 (size: 0x1)
    int32 TriggerEventsThatConsumeLegacyKeys;                                         // 0x0044 (size: 0x4)
    EInputActionValueType ValueType;                                                  // 0x0048 (size: 0x1)
    EInputActionAccumulationBehavior AccumulationBehavior;                            // 0x0049 (size: 0x1)
    TArray<class UInputTrigger*> Triggers;                                            // 0x0050 (size: 0x10)
    TArray<class UInputModifier*> Modifiers;                                          // 0x0060 (size: 0x10)
    class UPlayerMappableKeySettings* PlayerMappableKeySettings;                      // 0x0070 (size: 0x8)

}; // Size: 0x78

class UInputDebugKeyDelegateBinding : public UInputDelegateBinding
{
    TArray<FBlueprintInputDebugKeyDelegateBinding> InputDebugKeyDelegateBindings;     // 0x0028 (size: 0x10)

}; // Size: 0x38

class UInputMappingContext : public UDataAsset
{
    TArray<FEnhancedActionKeyMapping> Mappings;                                       // 0x0030 (size: 0x10)
    FText ContextDescription;                                                         // 0x0040 (size: 0x10)

    void UnmapKey(const class UInputAction* Action, FKey Key);
    void UnmapAllKeysFromAction(const class UInputAction* Action);
    void UnmapAll();
    void UnmapAction(const class UInputAction* Action);
    FEnhancedActionKeyMapping MapKey(const class UInputAction* Action, FKey ToKey);
}; // Size: 0x50

class UInputModifier : public UObject
{

    FInputActionValue ModifyRaw(const class UEnhancedPlayerInput* PlayerInput, FInputActionValue CurrentValue, float DeltaTime);
    FLinearColor GetVisualizationColor(FInputActionValue SampleValue, FInputActionValue FinalValue);
}; // Size: 0x28

class UInputModifierDeadZone : public UInputModifier
{
    float LowerThreshold;                                                             // 0x0028 (size: 0x4)
    float UpperThreshold;                                                             // 0x002C (size: 0x4)
    EDeadZoneType Type;                                                               // 0x0030 (size: 0x1)

}; // Size: 0x38

class UInputModifierFOVScaling : public UInputModifier
{
    float FOVScale;                                                                   // 0x0028 (size: 0x4)
    EFOVScalingType FOVScalingType;                                                   // 0x002C (size: 0x1)

}; // Size: 0x30

class UInputModifierNegate : public UInputModifier
{
    bool bX;                                                                          // 0x0028 (size: 0x1)
    bool bY;                                                                          // 0x0029 (size: 0x1)
    bool bZ;                                                                          // 0x002A (size: 0x1)

}; // Size: 0x30

class UInputModifierResponseCurveExponential : public UInputModifier
{
    FVector CurveExponent;                                                            // 0x0028 (size: 0x18)

}; // Size: 0x40

class UInputModifierResponseCurveUser : public UInputModifier
{
    class UCurveFloat* ResponseX;                                                     // 0x0028 (size: 0x8)
    class UCurveFloat* ResponseY;                                                     // 0x0030 (size: 0x8)
    class UCurveFloat* ResponseZ;                                                     // 0x0038 (size: 0x8)

}; // Size: 0x40

class UInputModifierScalar : public UInputModifier
{
    FVector Scalar;                                                                   // 0x0028 (size: 0x18)

}; // Size: 0x40

class UInputModifierScaleByDeltaTime : public UInputModifier
{
}; // Size: 0x28

class UInputModifierSmooth : public UInputModifier
{
}; // Size: 0x58

class UInputModifierSmoothDelta : public UInputModifier
{
    ENormalizeInputSmoothingType SmoothingMethod;                                     // 0x0028 (size: 0x1)
    float Speed;                                                                      // 0x002C (size: 0x4)
    float EasingExponent;                                                             // 0x0030 (size: 0x4)

}; // Size: 0x68

class UInputModifierSwizzleAxis : public UInputModifier
{
    EInputAxisSwizzle Order;                                                          // 0x0028 (size: 0x1)

}; // Size: 0x30

class UInputModifierToWorldSpace : public UInputModifier
{
}; // Size: 0x28

class UInputTrigger : public UObject
{
    float ActuationThreshold;                                                         // 0x0028 (size: 0x4)
    bool bShouldAlwaysTick;                                                           // 0x002C (size: 0x1)
    FInputActionValue LastValue;                                                      // 0x0030 (size: 0x20)

    ETriggerState UpdateState(const class UEnhancedPlayerInput* PlayerInput, FInputActionValue ModifiedValue, float DeltaTime);
    bool IsActuated(const FInputActionValue& ForValue);
    ETriggerType GetTriggerType();
}; // Size: 0x50

class UInputTriggerChordAction : public UInputTrigger
{
    class UInputAction* ChordAction;                                                  // 0x0050 (size: 0x8)

}; // Size: 0x58

class UInputTriggerChordBlocker : public UInputTriggerChordAction
{
}; // Size: 0x58

class UInputTriggerCombo : public UInputTrigger
{
    int32 CurrentComboStepIndex;                                                      // 0x0050 (size: 0x4)
    float CurrentTimeBetweenComboSteps;                                               // 0x0054 (size: 0x4)
    TArray<FInputComboStepData> ComboActions;                                         // 0x0058 (size: 0x10)
    TArray<FInputCancelAction> InputCancelActions;                                    // 0x0068 (size: 0x10)

}; // Size: 0x78

class UInputTriggerDown : public UInputTrigger
{
}; // Size: 0x50

class UInputTriggerHold : public UInputTriggerTimedBase
{
    float HoldTimeThreshold;                                                          // 0x005C (size: 0x4)
    bool bIsOneShot;                                                                  // 0x0060 (size: 0x1)

}; // Size: 0x68

class UInputTriggerHoldAndRelease : public UInputTriggerTimedBase
{
    float HoldTimeThreshold;                                                          // 0x0058 (size: 0x4)

}; // Size: 0x60

class UInputTriggerPressed : public UInputTrigger
{
}; // Size: 0x50

class UInputTriggerPulse : public UInputTriggerTimedBase
{
    bool bTriggerOnStart;                                                             // 0x005C (size: 0x1)
    float Interval;                                                                   // 0x0060 (size: 0x4)
    int32 TriggerLimit;                                                               // 0x0064 (size: 0x4)

}; // Size: 0x68

class UInputTriggerReleased : public UInputTrigger
{
}; // Size: 0x50

class UInputTriggerTap : public UInputTriggerTimedBase
{
    float TapReleaseTimeThreshold;                                                    // 0x0058 (size: 0x4)

}; // Size: 0x60

class UInputTriggerTimedBase : public UInputTrigger
{
    float HeldDuration;                                                               // 0x0050 (size: 0x4)
    bool bAffectedByTimeDilation;                                                     // 0x0054 (size: 0x1)

}; // Size: 0x58

class UPlayerMappableInputConfig : public UPrimaryDataAsset
{
    FName ConfigName;                                                                 // 0x0030 (size: 0x8)
    FText ConfigDisplayName;                                                          // 0x0038 (size: 0x10)
    bool bIsDeprecated;                                                               // 0x0048 (size: 0x1)
    class UObject* MetaData;                                                          // 0x0050 (size: 0x8)
    TMap<UInputMappingContext*, int32> Contexts;                                      // 0x0058 (size: 0x50)

    void ResetToDefault();
    bool IsDeprecated();
    TArray<FEnhancedActionKeyMapping> GetPlayerMappableKeys();
    class UObject* GetMetadata();
    TMap<UInputMappingContext*, int32> GetMappingContexts();
    FEnhancedActionKeyMapping GetMappingByName(const FName MappingName);
    TArray<FEnhancedActionKeyMapping> GetKeysBoundToAction(const class UInputAction* InAction);
    FText GetDisplayName();
    FName GetConfigName();
}; // Size: 0xA8

class UPlayerMappableKeySettings : public UObject
{
    class UObject* MetaData;                                                          // 0x0028 (size: 0x8)
    FName Name;                                                                       // 0x0030 (size: 0x8)
    FText DisplayName;                                                                // 0x0038 (size: 0x10)
    FText DisplayCategory;                                                            // 0x0048 (size: 0x10)
    FGameplayTagContainer SupportedKeyProfiles;                                       // 0x0058 (size: 0x20)

}; // Size: 0x78

#endif
