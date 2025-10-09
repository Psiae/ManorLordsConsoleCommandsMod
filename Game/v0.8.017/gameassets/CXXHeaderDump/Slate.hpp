#ifndef UE4SS_SDK_Slate_HPP
#define UE4SS_SDK_Slate_HPP

#include "Slate_enums.hpp"

struct FAnchors
{
    FVector2D Minimum;                                                                // 0x0000 (size: 0x10)
    FVector2D Maximum;                                                                // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FCharRange
{
    uint16 First;                                                                     // 0x0000 (size: 0x2)
    uint16 Last;                                                                      // 0x0002 (size: 0x2)

}; // Size: 0x4

struct FCharRangeList
{
    TArray<FCharRange> Ranges;                                                        // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FCustomizedToolMenu : public FToolMenuProfile
{
    TMap<class FName, class FCustomizedToolMenuNameArray> EntryOrder;                 // 0x01A0 (size: 0x50)
    TArray<FName> SectionOrder;                                                       // 0x01F0 (size: 0x10)

}; // Size: 0x200

struct FCustomizedToolMenuEntry
{
    ECustomizedToolMenuVisibility Visibility;                                         // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FCustomizedToolMenuNameArray
{
    TArray<FName> Names;                                                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FCustomizedToolMenuSection
{
    ECustomizedToolMenuVisibility Visibility;                                         // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FInputChord
{
    FKey Key;                                                                         // 0x0000 (size: 0x18)
    uint8 bShift;                                                                     // 0x0018 (size: 0x1)
    uint8 bCtrl;                                                                      // 0x0018 (size: 0x1)
    uint8 bAlt;                                                                       // 0x0018 (size: 0x1)
    uint8 bCmd;                                                                       // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FToolMenuProfile
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    TMap<class FName, class FCustomizedToolMenuEntry> Entries;                        // 0x0008 (size: 0x50)
    TMap<class FName, class FCustomizedToolMenuSection> Sections;                     // 0x0058 (size: 0x50)
    TArray<FName> SuppressExtenders;                                                  // 0x00A8 (size: 0x10)

}; // Size: 0x1A0

struct FVirtualKeyboardOptions
{
    bool bEnableAutocorrect;                                                          // 0x0000 (size: 0x1)

}; // Size: 0x1

class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
    FButtonStyle ButtonStyle;                                                         // 0x0030 (size: 0x3F0)

}; // Size: 0x420

class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
    FCheckBoxStyle CheckBoxStyle;                                                     // 0x0030 (size: 0xAD0)

}; // Size: 0xB00

class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
    FComboBoxStyle ComboBoxStyle;                                                     // 0x0030 (size: 0x660)

}; // Size: 0x690

class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
    FComboButtonStyle ComboButtonStyle;                                               // 0x0030 (size: 0x600)

}; // Size: 0x630

class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
    FEditableTextBoxStyle EditableTextBoxStyle;                                       // 0x0030 (size: 0xE80)

}; // Size: 0xEB0

class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
{
    FEditableTextStyle EditableTextStyle;                                             // 0x0030 (size: 0x2F0)

}; // Size: 0x320

class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
{
    FProgressBarStyle ProgressBarStyle;                                               // 0x0030 (size: 0x290)

}; // Size: 0x2C0

class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
{
    FScrollBarStyle ScrollBarStyle;                                                   // 0x0030 (size: 0x770)

}; // Size: 0x7A0

class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
    FScrollBoxStyle ScrollBoxStyle;                                                   // 0x0030 (size: 0x370)

}; // Size: 0x3A0

class USlateSettings : public UObject
{
    bool bExplicitCanvasChildZOrder;                                                  // 0x0028 (size: 0x1)

}; // Size: 0x30

class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
    FSpinBoxStyle SpinBoxStyle;                                                       // 0x0030 (size: 0x600)

}; // Size: 0x630

class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
{
    FTextBlockStyle TextBlockStyle;                                                   // 0x0030 (size: 0x340)

}; // Size: 0x370

class UToolMenuBase : public UObject
{
}; // Size: 0x28

#endif
