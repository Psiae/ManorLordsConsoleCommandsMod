#ifndef UE4SS_SDK_AutoSettingsInput_HPP
#define UE4SS_SDK_AutoSettingsInput_HPP

#include "AutoSettingsInput_enums.hpp"

struct FAxisAssociation
{
    FKey AxisKey;                                                                     // 0x0000 (size: 0x18)
    FKey AnalogKey;                                                                   // 0x0018 (size: 0x18)
    TArray<FKeyScale> ButtonKeys;                                                     // 0x0030 (size: 0x10)
    TArray<FKeyScale> BooleanKeys;                                                    // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FCapturedInput
{
    FInputChord Chord;                                                                // 0x0000 (size: 0x20)
    float AxisScale;                                                                  // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FConfigActionKeyMapping : public FInputActionKeyMapping
{
    bool bIsDefault;                                                                  // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FConfigAxisKeyMapping : public FInputAxisKeyMapping
{
    bool bIsDefault;                                                                  // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FInputMappingGroup
{
    TArray<FConfigActionKeyMapping> ActionMappings;                                   // 0x0000 (size: 0x10)
    TArray<FConfigAxisKeyMapping> AxisMappings;                                       // 0x0010 (size: 0x10)
    TArray<FConfigActionKeyMapping> UnboundActionMappings;                            // 0x0020 (size: 0x10)
    TArray<FConfigAxisKeyMapping> UnboundAxisMappings;                                // 0x0030 (size: 0x10)

}; // Size: 0x50

struct FInputMappingLayout
{
    TArray<FInputMappingGroup> MappingGroups;                                         // 0x0000 (size: 0x10)

}; // Size: 0x20

struct FInputMappingPreset
{
    FGameplayTag PresetTag;                                                           // 0x0000 (size: 0x8)
    bool bUseDefaultMappings;                                                         // 0x0008 (size: 0x1)
    FInputMappingLayout InputLayout;                                                  // 0x0010 (size: 0x20)
    TArray<FInputMappingGroup> MappingGroups;                                         // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FKeyFriendlyName
{
    FKey Key;                                                                         // 0x0000 (size: 0x18)
    FText FriendlyName;                                                               // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FKeyGroup
{
    FGameplayTag KeyGroupTag;                                                         // 0x0000 (size: 0x8)
    bool bUseGamepadKeys;                                                             // 0x0008 (size: 0x1)
    bool bUseNonGamepadKeys;                                                          // 0x0009 (size: 0x1)
    TArray<FKey> keys;                                                                // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FKeyIconPair
{
    FKey Key;                                                                         // 0x0000 (size: 0x18)
    class UTexture* Icon;                                                             // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FKeyIconSet
{
    FGameplayTagContainer Tags;                                                       // 0x0000 (size: 0x20)
    TMap<class FKey, class TSoftObjectPtr<UTexture>> IconMap;                         // 0x0020 (size: 0x50)
    TArray<FKeyIconPair> icons;                                                       // 0x0070 (size: 0x10)

}; // Size: 0x80

struct FKeyScale
{
    FKey Key;                                                                         // 0x0000 (size: 0x18)
    float Scale;                                                                      // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FMappingGroupLink
{
    TArray<int32> MappingGroups;                                                      // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FPlayerInputMappings
{
    FString PlayerId;                                                                 // 0x0000 (size: 0x10)
    int32 PlayerIndex;                                                                // 0x0010 (size: 0x4)
    FGameplayTag BasePresetTag;                                                       // 0x0014 (size: 0x8)
    bool bNullBasePreset;                                                             // 0x001C (size: 0x1)
    FInputMappingLayout MappingOverrides;                                             // 0x0020 (size: 0x20)
    bool Custom;                                                                      // 0x0040 (size: 0x1)
    FInputMappingPreset Preset;                                                       // 0x0048 (size: 0x40)
    FGameplayTag PlayerKeyGroup;                                                      // 0x0088 (size: 0x8)

}; // Size: 0xA0

class IAutoSettingsInputConfigInterface : public IInterface
{
}; // Size: 0x28

class IAutoSettingsPlayer : public IInterface
{

    void SaveInputMappings(FPlayerInputMappings InputMappings);
    FString GetUniquePlayerIdentifier();
    bool GetInputMappings(FPlayerInputMappings& InputMappings);
    FInputMappingPreset GetDefaultInputMappingPreset();
}; // Size: 0x28

class UActionLabel : public UInputLabel
{
    FName ActionName;                                                                 // 0x0310 (size: 0x8)
    TSubclassOf<class UKeyLabel> KeyLabelWidgetClass;                                 // 0x0318 (size: 0x8)
    TSubclassOf<class UWidget> KeySeparatorWidgetClass;                               // 0x0320 (size: 0x8)
    class UPanelWidget* KeyContainer;                                                 // 0x0328 (size: 0x8)
    class UKeyLabel* PrimaryKeyLabel;                                                 // 0x0330 (size: 0x8)
    class UKeyLabel* ShiftLabel;                                                      // 0x0338 (size: 0x8)
    class UKeyLabel* CtrlLabel;                                                       // 0x0340 (size: 0x8)
    class UKeyLabel* AltLabel;                                                        // 0x0348 (size: 0x8)
    class UKeyLabel* CmdLabel;                                                        // 0x0350 (size: 0x8)
    class UWidget* ShiftSeparator;                                                    // 0x0358 (size: 0x8)
    class UWidget* CtrlSeparator;                                                     // 0x0360 (size: 0x8)
    class UWidget* AltSeparator;                                                      // 0x0368 (size: 0x8)
    class UWidget* CmdSeparator;                                                      // 0x0370 (size: 0x8)

}; // Size: 0x378

class UActionMapping : public UInputMapping
{
    FName ActionName;                                                                 // 0x0318 (size: 0x8)
    class UActionLabel* ActionLabel;                                                  // 0x0320 (size: 0x8)

}; // Size: 0x328

class UAutoSettingsInputConfig : public UDeveloperSettings
{
    bool bAutoInitializePlayerInputOverrides;                                         // 0x0040 (size: 0x1)
    bool AllowModifierKeys;                                                           // 0x0041 (size: 0x1)
    FText ShiftModifierOverrideText;                                                  // 0x0048 (size: 0x10)
    FText CtrlModifierOverrideText;                                                   // 0x0058 (size: 0x10)
    FText AltModifierOverrideText;                                                    // 0x0068 (size: 0x10)
    FText CmdModifierOverrideText;                                                    // 0x0078 (size: 0x10)
    TArray<FInputMappingPreset> InputPresets;                                         // 0x0088 (size: 0x10)
    bool AllowMultipleBindingsPerKey;                                                 // 0x0098 (size: 0x1)
    TArray<FMappingGroupLink> MappingGroupLinks;                                      // 0x00A0 (size: 0x10)
    TArray<FName> PreservedActions;                                                   // 0x00B0 (size: 0x10)
    TArray<FName> PreservedAxes;                                                      // 0x00C0 (size: 0x10)
    TArray<FKeyIconSet> KeyIconSets;                                                  // 0x00D0 (size: 0x10)
    TArray<FKeyFriendlyName> KeyFriendlyNames;                                        // 0x00E0 (size: 0x10)
    TArray<FKeyGroup> KeyGroups;                                                      // 0x00F0 (size: 0x10)
    TArray<FKey> AllowedKeys;                                                         // 0x0100 (size: 0x10)
    TArray<FKey> DisallowedKeys;                                                      // 0x0110 (size: 0x10)
    TArray<FKey> BindingEscapeKeys;                                                   // 0x0120 (size: 0x10)
    float MouseMoveCaptureDistance;                                                   // 0x0130 (size: 0x4)
    TArray<FAxisAssociation> AxisAssociations;                                        // 0x0138 (size: 0x10)
    TArray<FName> BlacklistedActions;                                                 // 0x0148 (size: 0x10)
    TArray<FName> BlacklistedAxes;                                                    // 0x0158 (size: 0x10)

}; // Size: 0x168

class UAutoSettingsInputProjectConfig : public UAutoSettingsInputConfig
{

    TArray<class UTexture*> LoadKeyIcons(FGameplayTagContainer KeyIconTags);
    FGameplayTag GetKeyGroupStatic(FKey Key);
    FText GetKeyFriendlyNameStatic(FKey Key);
}; // Size: 0x168

class UAutoSettingsInputSubsystem : public UGameInstanceSubsystem
{
}; // Size: 0x38

class UAutoSettingsInputValidationSubsystem : public UGameInstanceSubsystem
{
}; // Size: 0x30

class UAxisLabel : public UInputLabel
{
    FName AxisName;                                                                   // 0x0310 (size: 0x8)
    float Scale;                                                                      // 0x0318 (size: 0x4)
    class UKeyLabel* KeyLabel;                                                        // 0x0320 (size: 0x8)

}; // Size: 0x328

class UAxisMapping : public UInputMapping
{
    FName AxisName;                                                                   // 0x0318 (size: 0x8)
    float Scale;                                                                      // 0x0320 (size: 0x4)
    class UAxisLabel* AxisLabel;                                                      // 0x0328 (size: 0x8)

}; // Size: 0x330

class UBindCaptureButton : public UUserWidget
{
    FGameplayTag KeyGroup;                                                            // 0x02E0 (size: 0x8)
    TSubclassOf<class UBindCapturePrompt> BindCapturePromptClass;                     // 0x02E8 (size: 0x8)
    int32 CapturePromptZOrder;                                                        // 0x02F0 (size: 0x4)
    class UBindCapturePrompt* Prompt;                                                 // 0x0308 (size: 0x8)

    class UBindCapturePrompt* StartCapture();
    void InitializePrompt(class UBindCapturePrompt* PromptWidget);
    void ChordCaptured(FCapturedInput CapturedInput);
}; // Size: 0x310

class UBindCapturePrompt : public UUserWidget
{
    bool bIgnoreGameViewportInputWhileCapturing;                                      // 0x02E0 (size: 0x1)
    bool bRestrictKeyGroup;                                                           // 0x02E1 (size: 0x1)
    EBindingCaptureMode CaptureMode;                                                  // 0x02E2 (size: 0x1)
    FGameplayTag KeyGroup;                                                            // 0x02E4 (size: 0x8)
    FBindCapturePromptOnChordCaptured OnChordCaptured;                                // 0x02F0 (size: 0x10)
    void ChordCapturedEvent(FCapturedInput CapturedInput);
    FBindCapturePromptOnChordRejected OnChordRejected;                                // 0x0300 (size: 0x10)
    void ChordRejectedEvent(FCapturedInput CapturedInput);
    FBindCapturePromptOnCapturePromptClosed OnCapturePromptClosed;                    // 0x0310 (size: 0x10)
    void CapturePromptClosedEvent(bool bWasCancelled);
    TArray<FKey> KeysDown;                                                            // 0x0320 (size: 0x10)
    bool PreviousIgnoreInput;                                                         // 0x0330 (size: 0x1)
    FVector2D AccumulatedMouseDelta;                                                  // 0x0338 (size: 0x10)

    bool IsKeyAllowed(FKey PrimaryKey);
    FGameplayTag GetKeyGroup();
    void cancel();
}; // Size: 0x348

class UGlobalKeyIconTagManager : public UObject
{
    FGlobalKeyIconTagManagerOnGlobalKeyIconTagsModified OnGlobalKeyIconTagsModified;  // 0x0028 (size: 0x10)
    void GlobalKeyIconTagsModifiedEvent();
    FGameplayTagContainer GlobalKeyIconTags;                                          // 0x0038 (size: 0x20)

    void SetGlobalKeyIconTags(FGameplayTagContainer InGlobalIconTags);
    class UTexture* GetIconForKey(FKey InKey, FGameplayTagContainer IconTags, float AxisScale);
}; // Size: 0x58

class UInputLabel : public UUserWidget
{
    int32 MappingGroup;                                                               // 0x02E0 (size: 0x4)
    FGameplayTag KeyGroup;                                                            // 0x02E4 (size: 0x8)
    bool bUsePlayerKeyGroup;                                                          // 0x02EC (size: 0x1)
    FGameplayTagContainer IconTags;                                                   // 0x02F0 (size: 0x20)

    void UpdateLabel();
    void MappingsChanged(class APlayerController* Player);
}; // Size: 0x310

class UInputMapping : public UUserWidget
{
    int32 MappingGroup;                                                               // 0x02E0 (size: 0x4)
    FGameplayTag KeyGroup;                                                            // 0x02E4 (size: 0x8)
    FGameplayTagContainer IconTags;                                                   // 0x02F0 (size: 0x20)
    class UBindCaptureButton* BindCaptureButton;                                      // 0x0310 (size: 0x8)

    void UpdateMapping();
    void UpdateLabel();
    void ChordCaptured(FCapturedInput CapturedInput);
    void BindChord(FCapturedInput CapturedInput);
}; // Size: 0x318

class UInputMappingManager : public UEngineSubsystem
{
    FInputMappingManagerOnMappingsChanged OnMappingsChanged;                          // 0x0030 (size: 0x10)
    void OnMappingsChanged(class APlayerController* Player);
    TArray<FPlayerInputMappings> PlayerInputOverrides;                                // 0x0040 (size: 0x10)
    TArray<class APlayerController*> RegisteredPlayerControllers;                     // 0x0050 (size: 0x10)

    void SetPlayerKeyGroupStatic(class APlayerController* Player, FGameplayTag KeyGroup);
    void SetPlayerInputPresetStatic(class APlayerController* Player, FInputMappingPreset Preset);
    void SetPlayerInputPresetByTag(class APlayerController* Player, FGameplayTag PresetTag);
    void OnRegisteredPlayerControllerDestroyed(class AActor* DestroyedActor);
    bool InitializePlayerInputOverridesStatic(class APlayerController* Player);
    void GetPlayerMappingsByKey(class APlayerController* Player, FKey Key, TArray<FInputActionKeyMapping>& Actions, TArray<FInputAxisKeyMapping>& Axes);
    FPlayerInputMappings GetPlayerInputMappingsStatic(class APlayerController* Player);
    FInputAxisKeyMapping GetPlayerAxisMappingStatic(class APlayerController* Player, FName AxisName, float Scale, int32 MappingGroup);
    TArray<FInputAxisKeyMapping> GetPlayerAxisMappings(class APlayerController* Player, FName AxisName, float Scale, int32 MappingGroup, FGameplayTag KeyGroup, bool bUsePlayerKeyGroup);
    FInputAxisKeyMapping GetPlayerAxisMapping(class APlayerController* Player, FName AxisName, float Scale, int32 MappingGroup, FGameplayTag KeyGroup, bool bUsePlayerKeyGroup);
    FInputActionKeyMapping GetPlayerActionMappingStatic(class APlayerController* Player, FName ActionName, int32 MappingGroup);
    TArray<FInputActionKeyMapping> GetPlayerActionMappings(class APlayerController* Player, FName ActionName, int32 MappingGroup, FGameplayTag KeyGroup, bool bUsePlayerKeyGroup);
    FInputActionKeyMapping GetPlayerActionMapping(class APlayerController* Player, FName ActionName, int32 MappingGroup, FGameplayTag KeyGroup, bool bUsePlayerKeyGroup);
    TArray<FInputMappingPreset> GetDefaultInputPresets();
    void AddPlayerAxisOverrideStatic(class APlayerController* Player, const FInputAxisKeyMapping& NewMapping, int32 MappingGroup, bool bAnyKeyGroup);
    void AddPlayerAxisOverride(class APlayerController* Player, const FInputAxisKeyMapping& NewMapping, int32 MappingGroup, bool bAnyKeyGroup);
    void AddPlayerActionOverrideStatic(class APlayerController* Player, const FInputActionKeyMapping& NewMapping, int32 MappingGroup, bool bAnyKeyGroup);
    void AddPlayerActionOverride(class APlayerController* Player, const FInputActionKeyMapping& NewMapping, int32 MappingGroup, bool bAnyKeyGroup);
}; // Size: 0x60

class UKeyLabel : public UUserWidget
{
    FText KeyInvalidText;                                                             // 0x02E0 (size: 0x10)
    FText LabelOverride;                                                              // 0x02F0 (size: 0x10)
    FKey Key;                                                                         // 0x0300 (size: 0x18)
    float AxisScale;                                                                  // 0x0318 (size: 0x4)
    FGameplayTagContainer IconTags;                                                   // 0x0320 (size: 0x20)

    void UpdateKeyLabel();
    void OnGlobalKeyIconTagsModified();
    bool HasValidKey();
    bool HasIcon();
    ESlateVisibility GetIconVisibility();
    FSlateBrush GetIconBrush();
    class UTexture* GetIcon();
    ESlateVisibility GetDisplayNameVisibility();
    FText GetDisplayName();
}; // Size: 0x340

#endif
