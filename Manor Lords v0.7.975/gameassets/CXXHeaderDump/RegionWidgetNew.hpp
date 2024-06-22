#ifndef UE4SS_SDK_RegionWidgetNew_HPP
#define UE4SS_SDK_RegionWidgetNew_HPP

class URegionWidgetNew_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* region_name;                                                    // 0x0268 (size: 0x8)
    class ARegion* Region;                                                            // 0x0270 (size: 0x8)

    bool flipBool(bool InBool);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_RegionWidgetNew(int32 EntryPoint);
}; // Size: 0x278

#endif
