#ifndef UE4SS_SDK_Widget_Affinity_HPP
#define UE4SS_SDK_Widget_Affinity_HPP

class UWidget_Affinity_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UImage* AffinityIcon_Img;                                                   // 0x02D8 (size: 0x8)
    class UBorder* Border;                                                            // 0x02E0 (size: 0x8)
    class UTextBlock* TextBlock_Name;                                                 // 0x02E8 (size: 0x8)
    bool showName;                                                                    // 0x02F0 (size: 0x1)
    EAffinityType Affinity;                                                           // 0x02F1 (size: 0x1)
    class ARegion* Region;                                                            // 0x02F8 (size: 0x8)

    void GetAffinityEnvironmentColor_Experimental(class ARegion* Region, FLinearColor& Color);
    void Construct();
    void ExecuteUbergraph_Widget_Affinity(int32 EntryPoint);
}; // Size: 0x300

#endif
