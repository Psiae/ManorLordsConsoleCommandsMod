#ifndef UE4SS_SDK_Text3D_HPP
#define UE4SS_SDK_Text3D_HPP

#include "Text3D_enums.hpp"

struct FCachedFontData
{
    class UFont* Font;                                                                // 0x0000 (size: 0x8)
    TMap<uint32, FCachedFontMeshes> Meshes;                                           // 0x0008 (size: 0x50)

}; // Size: 0xE8

struct FCachedFontMeshes
{
    TMap<uint32, UStaticMesh*> Glyphs;                                                // 0x0000 (size: 0x50)

}; // Size: 0x60

class AText3DActor : public AActor
{
    class UText3DComponent* Text3DComponent;                                          // 0x0220 (size: 0x8)

}; // Size: 0x228

class UText3DCharacterTransform : public USceneComponent
{
    bool bLocationEnabled;                                                            // 0x01F8 (size: 0x1)
    float LocationProgress;                                                           // 0x01FC (size: 0x4)
    EText3DCharacterEffectOrder LocationOrder;                                        // 0x0200 (size: 0x1)
    float LocationRange;                                                              // 0x0204 (size: 0x4)
    FVector LocationDistance;                                                         // 0x0208 (size: 0xC)
    bool bScaleEnabled;                                                               // 0x0214 (size: 0x1)
    float ScaleProgress;                                                              // 0x0218 (size: 0x4)
    EText3DCharacterEffectOrder ScaleOrder;                                           // 0x021C (size: 0x1)
    float ScaleRange;                                                                 // 0x0220 (size: 0x4)
    FVector ScaleBegin;                                                               // 0x0224 (size: 0xC)
    FVector ScaleEnd;                                                                 // 0x0230 (size: 0xC)
    bool bRotateEnabled;                                                              // 0x023C (size: 0x1)
    float RotateProgress;                                                             // 0x0240 (size: 0x4)
    EText3DCharacterEffectOrder RotateOrder;                                          // 0x0244 (size: 0x1)
    float RotateRange;                                                                // 0x0248 (size: 0x4)
    FRotator RotateBegin;                                                             // 0x024C (size: 0xC)
    FRotator RotateEnd;                                                               // 0x0258 (size: 0xC)

    void SetScaleRange(float range);
    void SetScaleProgress(float progress);
    void SetScaleOrder(EText3DCharacterEffectOrder Order);
    void SetScaleEnd(FVector Value);
    void SetScaleEnabled(bool bEnabled);
    void SetScaleBegin(FVector Value);
    void SetRotateRange(float range);
    void SetRotateProgress(float progress);
    void SetRotateOrder(EText3DCharacterEffectOrder Order);
    void SetRotateEnd(FRotator Value);
    void SetRotateEnabled(bool bEnabled);
    void SetRotateBegin(FRotator Value);
    void SetLocationRange(float range);
    void SetLocationProgress(float progress);
    void SetLocationOrder(EText3DCharacterEffectOrder Order);
    void SetLocationEnabled(bool bEnabled);
    void SetLocationDistance(FVector Distance);
}; // Size: 0x270

class UText3DComponent : public USceneComponent
{
    FText Text;                                                                       // 0x01F8 (size: 0x18)
    float Extrude;                                                                    // 0x0210 (size: 0x4)
    float Bevel;                                                                      // 0x0214 (size: 0x4)
    EText3DBevelType BevelType;                                                       // 0x0218 (size: 0x1)
    int32 BevelSegments;                                                              // 0x021C (size: 0x4)
    bool bOutline;                                                                    // 0x0220 (size: 0x1)
    class UMaterialInterface* FrontMaterial;                                          // 0x0228 (size: 0x8)
    class UMaterialInterface* BevelMaterial;                                          // 0x0230 (size: 0x8)
    class UMaterialInterface* ExtrudeMaterial;                                        // 0x0238 (size: 0x8)
    class UMaterialInterface* BackMaterial;                                           // 0x0240 (size: 0x8)
    class UFont* Font;                                                                // 0x0248 (size: 0x8)
    EText3DHorizontalTextAlignment HorizontalAlignment;                               // 0x0250 (size: 0x1)
    EText3DVerticalTextAlignment VerticalAlignment;                                   // 0x0251 (size: 0x1)
    float Kerning;                                                                    // 0x0254 (size: 0x4)
    float LineSpacing;                                                                // 0x0258 (size: 0x4)
    float WordSpacing;                                                                // 0x025C (size: 0x4)
    bool bHasMaxWidth;                                                                // 0x0260 (size: 0x1)
    float MaxWidth;                                                                   // 0x0264 (size: 0x4)
    bool bHasMaxHeight;                                                               // 0x0268 (size: 0x1)
    float MaxHeight;                                                                  // 0x026C (size: 0x4)
    bool bScaleProportionally;                                                        // 0x0270 (size: 0x1)
    class USceneComponent* TextRoot;                                                  // 0x0278 (size: 0x8)
    TArray<class USceneComponent*> CharacterKernings;                                 // 0x02C0 (size: 0x10)
    TArray<class UStaticMeshComponent*> CharacterMeshes;                              // 0x02D0 (size: 0x10)

    void SetWordSpacing(const float Value);
    void SetVerticalAlignment(const EText3DVerticalTextAlignment Value);
    void SetText(const FText& Value);
    void SetScaleProportionally(const bool Value);
    void SetOutline(const bool bValue);
    void SetMaxWidth(const float Value);
    void SetMaxHeight(const float Value);
    void SetLineSpacing(const float Value);
    void SetKerning(const float Value);
    void SetHorizontalAlignment(const EText3DHorizontalTextAlignment Value);
    void SetHasMaxWidth(const bool Value);
    void SetHasMaxHeight(const bool Value);
    void SetFrontMaterial(class UMaterialInterface* Value);
    void SetFreeze(const bool bFreeze);
    void SetFont(const class UFont* InFont);
    void SetExtrudeMaterial(class UMaterialInterface* Value);
    void SetExtrude(const float Value);
    void SetBevelType(const EText3DBevelType Value);
    void SetBevelSegments(const int32 Value);
    void SetBevelMaterial(class UMaterialInterface* Value);
    void SetBevel(const float Value);
    void SetBackMaterial(class UMaterialInterface* Value);
}; // Size: 0x2E0

class UText3DEngineSubsystem : public UEngineSubsystem
{
    class UMaterial* DefaultMaterial;                                                 // 0x0030 (size: 0x8)
    TMap<uint32, FCachedFontData> CachedFonts;                                        // 0x0038 (size: 0x50)

}; // Size: 0x90

#endif
