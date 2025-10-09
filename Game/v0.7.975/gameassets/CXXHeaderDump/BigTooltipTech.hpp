#ifndef UE4SS_SDK_BigTooltipTech_HPP
#define UE4SS_SDK_BigTooltipTech_HPP

class UBigTooltipTech_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* lerpIn;                                                   // 0x0268 (size: 0x8)
    class UBorder* Border;                                                            // 0x0270 (size: 0x8)
    class UImage* construction_separator;                                             // 0x0278 (size: 0x8)
    class UHorizontalBox* cost_parts_hb;                                              // 0x0280 (size: 0x8)
    class UHorizontalBox* cost_stone_hb;                                              // 0x0288 (size: 0x8)
    class UHorizontalBox* cost_timber_hb;                                             // 0x0290 (size: 0x8)
    class UHorizontalBox* cost_tools_hb;                                              // 0x0298 (size: 0x8)
    class URichTextBlock* descr_RichTxt;                                              // 0x02A0 (size: 0x8)
    class UVerticalBox* descr_VB;                                                     // 0x02A8 (size: 0x8)
    class UImage* Image;                                                              // 0x02B0 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02B8 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02C0 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02C8 (size: 0x8)
    class UImage* Image_3;                                                            // 0x02D0 (size: 0x8)
    class UImage* Image_4;                                                            // 0x02D8 (size: 0x8)
    class UImage* Image_7;                                                            // 0x02E0 (size: 0x8)
    class UTextBlock* name_txt;                                                       // 0x02E8 (size: 0x8)
    class UTextBlock* parts_txt;                                                      // 0x02F0 (size: 0x8)
    class UTextBlock* stone_txt;                                                      // 0x02F8 (size: 0x8)
    class UTextBlock* TextBlock;                                                      // 0x0300 (size: 0x8)
    class UTextBlock* timber_txt;                                                     // 0x0308 (size: 0x8)
    class UTextBlock* tools_txt;                                                      // 0x0310 (size: 0x8)
    class UVerticalBox* unlocks_buidings_and_upgrades_VB;                             // 0x0318 (size: 0x8)
    int32 techID;                                                                     // 0x0320 (size: 0x4)
    TArray<int32> unlocks_buildings;                                                  // 0x0328 (size: 0x10)
    TArray<int32> unlocks_upgrades;                                                   // 0x0338 (size: 0x10)

    void getBuildingCardFromMainUI(FString inString, class UTexture2D*& Brush Image);
    void Construct();
    void ExecuteUbergraph_BigTooltipTech(int32 EntryPoint);
}; // Size: 0x348

#endif
