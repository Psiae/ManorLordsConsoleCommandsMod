#ifndef UE4SS_SDK_PolygonButton_HPP
#define UE4SS_SDK_PolygonButton_HPP

struct FPolygon2D
{
    TArray<FVector2D> Vertices;                                                       // 0x0000 (size: 0x10)

}; // Size: 0x10

class UPolygonButton : public UButton
{
    FPolygon2D NormalizedPolygon;                                                     // 0x0428 (size: 0x10)

    void SetPolygonVertices(const TArray<FVector2D>& VertexList);
    TArray<FVector2D> GetPolygonVertices();
}; // Size: 0x448

class UPolygonOverlay : public UPanelWidget
{

    class UPolygonOverlaySlot* AddChildToOverlay(class UWidget* Content);
}; // Size: 0x130

class UPolygonOverlaySlot : public UOverlaySlot
{
}; // Size: 0x58

#endif
