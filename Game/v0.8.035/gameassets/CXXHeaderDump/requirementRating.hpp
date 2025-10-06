#ifndef UE4SS_SDK_requirementRating_HPP
#define UE4SS_SDK_requirementRating_HPP

class UrequirementRating_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UHorizontalBox* base_HB;                                                    // 0x0350 (size: 0x8)
    class UHorizontalBox* filled_HB;                                                  // 0x0358 (size: 0x8)
    class UImage* Image;                                                              // 0x0360 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0368 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0370 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0378 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0380 (size: 0x8)
    class UImage* Image_5;                                                            // 0x0388 (size: 0x8)
    class UImage* Image_6;                                                            // 0x0390 (size: 0x8)
    class UImage* Image_7;                                                            // 0x0398 (size: 0x8)
    class UImage* Image_8;                                                            // 0x03A0 (size: 0x8)
    class UImage* Image_9;                                                            // 0x03A8 (size: 0x8)
    class UImage* Image_10;                                                           // 0x03B0 (size: 0x8)
    class UImage* Image_11;                                                           // 0x03B8 (size: 0x8)
    class UImage* Image_12;                                                           // 0x03C0 (size: 0x8)
    class UImage* Image_13;                                                           // 0x03C8 (size: 0x8)
    class UImage* Image_47;                                                           // 0x03D0 (size: 0x8)
    class UMD_NaviAutoTooltip_C* MD_NaviAutoTooltip;                                  // 0x03D8 (size: 0x8)
    class UMD_NaviAutoTooltip_C* MD_NaviAutoTooltip_1;                                // 0x03E0 (size: 0x8)
    class UMD_NaviAutoTooltip_C* MD_NaviAutoTooltip_2;                                // 0x03E8 (size: 0x8)
    class UMD_NaviAutoTooltip_C* MD_NaviAutoTooltip_3;                                // 0x03F0 (size: 0x8)
    class UMD_NaviAutoTooltip_C* MD_NaviAutoTooltip_4;                                // 0x03F8 (size: 0x8)
    class UMD_NaviAutoTooltip_C* MD_NaviAutoTooltip_5;                                // 0x0400 (size: 0x8)
    class UMD_NaviAutoTooltip_C* MD_NaviAutoTooltip_6;                                // 0x0408 (size: 0x8)
    class UMD_NaviAutoTooltip_C* MD_NaviAutoTooltip_7;                                // 0x0410 (size: 0x8)
    class UMD_NaviAutoTooltip_C* MD_NaviAutoTooltip_8;                                // 0x0418 (size: 0x8)
    class UMD_NaviAutoTooltip_C* MD_NaviAutoTooltip_9;                                // 0x0420 (size: 0x8)
    class UHorizontalBox* triggering_HB;                                              // 0x0428 (size: 0x8)
    int32 maxStars;                                                                   // 0x0430 (size: 0x4)
    int32 requirementID;                                                              // 0x0434 (size: 0x4)
    TArray<uint8> requirementsNeeded;                                                 // 0x0438 (size: 0x10)
    uint8 rating;                                                                     // 0x0448 (size: 0x1)
    uint8 requiredRating;                                                             // 0x0449 (size: 0x1)
    uint8 triggeringRating;                                                           // 0x044A (size: 0x1)
    bool satisfied;                                                                   // 0x044B (size: 0x1)

    FNaviSubGridLayout ComputeSubGridLayout();
    void PreConstruct(bool IsDesignTime);
    void refreshRating();
    void ExecuteUbergraph_requirementRating(int32 EntryPoint);
}; // Size: 0x44C

#endif
