#ifndef UE4SS_SDK_requirementRating_HPP
#define UE4SS_SDK_requirementRating_HPP

class UrequirementRating_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UHorizontalBox* base_HB;                                                    // 0x0268 (size: 0x8)
    class UHorizontalBox* filled_HB;                                                  // 0x0270 (size: 0x8)
    class UImage* Image;                                                              // 0x0278 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0280 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0288 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0290 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0298 (size: 0x8)
    class UImage* Image_5;                                                            // 0x02A0 (size: 0x8)
    class UImage* Image_6;                                                            // 0x02A8 (size: 0x8)
    class UImage* Image_7;                                                            // 0x02B0 (size: 0x8)
    class UImage* Image_8;                                                            // 0x02B8 (size: 0x8)
    class UImage* Image_9;                                                            // 0x02C0 (size: 0x8)
    class UImage* Image_10;                                                           // 0x02C8 (size: 0x8)
    class UImage* Image_11;                                                           // 0x02D0 (size: 0x8)
    class UImage* Image_12;                                                           // 0x02D8 (size: 0x8)
    class UImage* Image_13;                                                           // 0x02E0 (size: 0x8)
    class UImage* Image_47;                                                           // 0x02E8 (size: 0x8)
    class UHorizontalBox* triggering_HB;                                              // 0x02F0 (size: 0x8)
    int32 maxStars;                                                                   // 0x02F8 (size: 0x4)
    int32 requirementID;                                                              // 0x02FC (size: 0x4)
    TArray<uint8> requirementsNeeded;                                                 // 0x0300 (size: 0x10)
    uint8 rating;                                                                     // 0x0310 (size: 0x1)
    uint8 requiredRating;                                                             // 0x0311 (size: 0x1)
    uint8 triggeringRating;                                                           // 0x0312 (size: 0x1)
    bool satisfied;                                                                   // 0x0313 (size: 0x1)

    void PreConstruct(bool IsDesignTime);
    void refreshRating();
    void ExecuteUbergraph_requirementRating(int32 EntryPoint);
}; // Size: 0x314

#endif
