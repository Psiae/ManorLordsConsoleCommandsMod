#ifndef UE4SS_SDK_DMS_Track_HPP
#define UE4SS_SDK_DMS_Track_HPP

struct FDMS_Track
{
    class USoundBase* soundFile_2_5825DF4F493C930D7D032EBF5803B406;                   // 0x0000 (size: 0x8)
    TArray<float> transitionMoments_6_FFB0B4764CC275CC498FDAAC6CCD5BAE;               // 0x0008 (size: 0x10)
    TEnumAsByte<DMS_Mood::Type> mood_9_EC17C1F4487B4201323965BAF1469724;              // 0x0018 (size: 0x1)
    float interval_21_D410851844798C26C69020BAFF3B1B72;                               // 0x001C (size: 0x4)
    float head_19_50334B464AFE41212F274D873E130C4D;                                   // 0x0020 (size: 0x4)
    float tail_20_AFBC5E9F4817913112A447884767CC79;                                   // 0x0024 (size: 0x4)
    bool playOnlyOnce_23_566CEEDB44E43E5DFD4274A3E8A8B996;                            // 0x0028 (size: 0x1)

}; // Size: 0x29

#endif
