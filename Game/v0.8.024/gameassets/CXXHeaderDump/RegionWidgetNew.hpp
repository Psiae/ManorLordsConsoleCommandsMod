#ifndef UE4SS_SDK_RegionWidgetNew_HPP
#define UE4SS_SDK_RegionWidgetNew_HPP

class URegionWidgetNew_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* region_name;                                                    // 0x02E8 (size: 0x8)
    class ARegion* Region;                                                            // 0x02F0 (size: 0x8)

    bool flipBool(bool InBool);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_RegionWidgetNew(int32 EntryPoint);
}; // Size: 0x2F8

#endif
