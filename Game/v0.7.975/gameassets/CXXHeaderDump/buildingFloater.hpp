#ifndef UE4SS_SDK_buildingFloater_HPP
#define UE4SS_SDK_buildingFloater_HPP

class UbuildingFloater_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* bldType;                                                            // 0x0268 (size: 0x8)
    class UTextBlock* buildingNameTxt;                                                // 0x0270 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0278 (size: 0x8)
    class UImage* exclam_;                                                            // 0x0280 (size: 0x8)
    class UImage* extAvailable;                                                       // 0x0288 (size: 0x8)
    class USizeBox* houseLevel_sb;                                                    // 0x0290 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0298 (size: 0x8)
    class UImage* Image_4;                                                            // 0x02A0 (size: 0x8)
    class UImage* Image_15;                                                           // 0x02A8 (size: 0x8)
    class UImage* Image_17;                                                           // 0x02B0 (size: 0x8)
    class UImage* Image_19;                                                           // 0x02B8 (size: 0x8)
    class UImage* Image_20;                                                           // 0x02C0 (size: 0x8)
    class UImage* Image_70;                                                           // 0x02C8 (size: 0x8)
    class UImage* Image_164;                                                          // 0x02D0 (size: 0x8)
    class UTextBlock* lvTxt;                                                          // 0x02D8 (size: 0x8)
    class UHorizontalBox* people_and_yields_HB;                                       // 0x02E0 (size: 0x8)
    class UImage* popImg_cropImg;                                                     // 0x02E8 (size: 0x8)
    class UTextBlock* popsTxt_cropTxt;                                                // 0x02F0 (size: 0x8)
    class UImage* problemIcon;                                                        // 0x02F8 (size: 0x8)
    class UOverlay* req_church;                                                       // 0x0300 (size: 0x8)
    class UOverlay* req_clothes;                                                      // 0x0308 (size: 0x8)
    class UImage* req_exclam;                                                         // 0x0310 (size: 0x8)
    class UOverlay* req_food;                                                         // 0x0318 (size: 0x8)
    class UOverlay* req_fuel;                                                         // 0x0320 (size: 0x8)
    class UOverlay* req_fun;                                                          // 0x0328 (size: 0x8)
    class UOverlay* req_water;                                                        // 0x0330 (size: 0x8)
    class UHorizontalBox* requirements_hb;                                            // 0x0338 (size: 0x8)
    class UImage* upgAvailable_1;                                                     // 0x0340 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x0348 (size: 0x8)
    FVector2D LastPosition;                                                           // 0x0350 (size: 0x8)

    void displayLivingSpace();
    void removeRequirementWidgets();
    void updateContents();
    FVector2D scaleByDPI_IThink(FVector2D A);
    void updatePositionInViewport();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_buildingFloater(int32 EntryPoint);
}; // Size: 0x358

#endif
