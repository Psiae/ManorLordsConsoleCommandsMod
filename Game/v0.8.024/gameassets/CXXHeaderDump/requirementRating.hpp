#ifndef UE4SS_SDK_requirementRating_HPP
#define UE4SS_SDK_requirementRating_HPP

class UrequirementRating_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UHorizontalBox* base_HB;                                                    // 0x02E8 (size: 0x8)
    class UHorizontalBox* filled_HB;                                                  // 0x02F0 (size: 0x8)
    class UImage* Image;                                                              // 0x02F8 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0300 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0308 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0310 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0318 (size: 0x8)
    class UImage* Image_5;                                                            // 0x0320 (size: 0x8)
    class UImage* Image_6;                                                            // 0x0328 (size: 0x8)
    class UImage* Image_7;                                                            // 0x0330 (size: 0x8)
    class UImage* Image_8;                                                            // 0x0338 (size: 0x8)
    class UImage* Image_9;                                                            // 0x0340 (size: 0x8)
    class UImage* Image_10;                                                           // 0x0348 (size: 0x8)
    class UImage* Image_11;                                                           // 0x0350 (size: 0x8)
    class UImage* Image_12;                                                           // 0x0358 (size: 0x8)
    class UImage* Image_13;                                                           // 0x0360 (size: 0x8)
    class UImage* Image_47;                                                           // 0x0368 (size: 0x8)
    class UHorizontalBox* triggering_HB;                                              // 0x0370 (size: 0x8)
    int32 maxStars;                                                                   // 0x0378 (size: 0x4)
    int32 requirementID;                                                              // 0x037C (size: 0x4)
    TArray<uint8> requirementsNeeded;                                                 // 0x0380 (size: 0x10)
    uint8 rating;                                                                     // 0x0390 (size: 0x1)
    uint8 requiredRating;                                                             // 0x0391 (size: 0x1)
    uint8 triggeringRating;                                                           // 0x0392 (size: 0x1)
    bool satisfied;                                                                   // 0x0393 (size: 0x1)

    void PreConstruct(bool IsDesignTime);
    void refreshRating();
    void ExecuteUbergraph_requirementRating(int32 EntryPoint);
}; // Size: 0x394

#endif
