#ifndef UE4SS_SDK_HoverableSegment_HPP
#define UE4SS_SDK_HoverableSegment_HPP

class UHoverableSegment_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UImage* ImageInner;                                                         // 0x02D8 (size: 0x8)
    class UBorder* Segment;                                                           // 0x02E0 (size: 0x8)
    FLinearColor Colour;                                                              // 0x02E8 (size: 0x10)
    double maxOpacity;                                                                // 0x02F8 (size: 0x8)
    double targetOpacity;                                                             // 0x0300 (size: 0x8)
    class UTexture2D* Texture;                                                        // 0x0308 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_HoverableSegment(int32 EntryPoint);
}; // Size: 0x310

#endif
