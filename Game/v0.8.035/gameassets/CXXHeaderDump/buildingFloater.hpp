#ifndef UE4SS_SDK_buildingFloater_HPP
#define UE4SS_SDK_buildingFloater_HPP

class UbuildingFloater_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UImage* bldType;                                                            // 0x02D8 (size: 0x8)
    class UTextBlock* buildingNameTxt;                                                // 0x02E0 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x02E8 (size: 0x8)
    class UHorizontalBox* counter_HB;                                                 // 0x02F0 (size: 0x8)
    class UTextBlock* counter_txt;                                                    // 0x02F8 (size: 0x8)
    class UImage* CounterImage;                                                       // 0x0300 (size: 0x8)
    class UImage* exclam_;                                                            // 0x0308 (size: 0x8)
    class UImage* extAvailable;                                                       // 0x0310 (size: 0x8)
    class USizeBox* houseLevel_sb;                                                    // 0x0318 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0320 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0328 (size: 0x8)
    class UImage* Image_15;                                                           // 0x0330 (size: 0x8)
    class UImage* Image_17;                                                           // 0x0338 (size: 0x8)
    class UImage* Image_19;                                                           // 0x0340 (size: 0x8)
    class UImage* Image_20;                                                           // 0x0348 (size: 0x8)
    class UImage* Image_70;                                                           // 0x0350 (size: 0x8)
    class UImage* Image_164;                                                          // 0x0358 (size: 0x8)
    class UTextBlock* lvTxt;                                                          // 0x0360 (size: 0x8)
    class UImage* problemIcon;                                                        // 0x0368 (size: 0x8)
    class UOverlay* req_church;                                                       // 0x0370 (size: 0x8)
    class UOverlay* req_clothes;                                                      // 0x0378 (size: 0x8)
    class UImage* req_exclam;                                                         // 0x0380 (size: 0x8)
    class UOverlay* req_food;                                                         // 0x0388 (size: 0x8)
    class UOverlay* req_fuel;                                                         // 0x0390 (size: 0x8)
    class UOverlay* req_fun;                                                          // 0x0398 (size: 0x8)
    class UOverlay* req_water;                                                        // 0x03A0 (size: 0x8)
    class UHorizontalBox* requirements_hb;                                            // 0x03A8 (size: 0x8)
    class UHorizontalBox* ResidentialRequirementsMissing_HB;                          // 0x03B0 (size: 0x8)
    class UImage* upgAvailable_1;                                                     // 0x03B8 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x03C0 (size: 0x8)
    FVector2D LastPosition;                                                           // 0x03C8 (size: 0x10)
    bool ShouldSelfDestroy;                                                           // 0x03D8 (size: 0x1)

    void hasExtension(bool& Extension);
    void TintRequirementIfTriggered(class UImage* RequirementImage, EResidentialRequirement SupplyCategory, const TArray<EResidentialRequirement>& TargetArray);
    void displayLivingSpace();
    void removeRequirementWidgets();
    void UpdateContents();
    FVector2D scaleByDPI_IThink(FVector2D A);
    void updatePositionInViewport();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void SetBuilding(class ASMBuildingMaster* buildingMaster);
    void ExecuteUbergraph_buildingFloater(int32 EntryPoint);
}; // Size: 0x3D9

#endif
