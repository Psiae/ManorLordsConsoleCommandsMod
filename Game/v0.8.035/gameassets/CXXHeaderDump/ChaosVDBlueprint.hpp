#ifndef UE4SS_SDK_ChaosVDBlueprint_HPP
#define UE4SS_SDK_ChaosVDBlueprint_HPP

class UChaosVDRuntimeBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void RecordDebugDrawVector(const class UObject* WorldContext, const FVector& InStartLocation, const FVector& InVector, FName Tag, FLinearColor Color);
    void RecordDebugDrawSphere(const class UObject* WorldContext, const FVector& InCenter, float Radius, FName Tag, FLinearColor Color);
    void RecordDebugDrawLine(const class UObject* WorldContext, const FVector& InStartLocation, const FVector& InEndLocation, FName Tag, FLinearColor Color);
    void RecordDebugDrawBox(const class UObject* WorldContext, const FBox& InBox, FName Tag, FLinearColor Color);
}; // Size: 0x28

#endif
