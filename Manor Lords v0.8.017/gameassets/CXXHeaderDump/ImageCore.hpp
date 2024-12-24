#ifndef UE4SS_SDK_ImageCore_HPP
#define UE4SS_SDK_ImageCore_HPP

struct FSharedImageConstRefBlueprint
{
}; // Size: 0x8

class USharedImageConstRefBlueprintFns : public UObject
{

    bool IsValid(const FSharedImageConstRefBlueprint& Image);
    int32 GetWidth(const FSharedImageConstRefBlueprint& Image);
    FVector2f GetSize(const FSharedImageConstRefBlueprint& Image);
    FVector4f GetPixelValue(const FSharedImageConstRefBlueprint& Image, int32 X, int32 Y, bool& bValid);
    FLinearColor GetPixelLinearColor(const FSharedImageConstRefBlueprint& Image, int32 X, int32 Y, bool& bValid, FLinearColor FailureColor);
    int32 GetHeight(const FSharedImageConstRefBlueprint& Image);
}; // Size: 0x28

#endif
