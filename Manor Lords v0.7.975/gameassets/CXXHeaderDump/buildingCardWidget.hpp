#ifndef UE4SS_SDK_buildingCardWidget_HPP
#define UE4SS_SDK_buildingCardWidget_HPP

class UbuildingCardWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* AreaIconImg;                                                        // 0x0268 (size: 0x8)
    class UBorder* attributeIcons;                                                    // 0x0270 (size: 0x8)
    class UBorder* Border_0;                                                          // 0x0278 (size: 0x8)
    class UButton* buildingButton;                                                    // 0x0280 (size: 0x8)
    class UImage* buildingImage;                                                      // 0x0288 (size: 0x8)
    class UOverlay* Overlay_0;                                                        // 0x0290 (size: 0x8)
    class UImage* padlock;                                                            // 0x0298 (size: 0x8)
    class UHorizontalBox* resIcons;                                                   // 0x02A0 (size: 0x8)
    class USizeBox* resourceIcons_SizeBox;                                            // 0x02A8 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x02B0 (size: 0x8)
    class UVerticalBox* VerticalBox_2;                                                // 0x02B8 (size: 0x8)
    int32 ID;                                                                         // 0x02C0 (size: 0x4)
    int32 cat;                                                                        // 0x02C4 (size: 0x4)
    bool show;                                                                        // 0x02C8 (size: 0x1)
    class UTexture2D* buildingCard;                                                   // 0x02D0 (size: 0x8)
    FName Name;                                                                       // 0x02D8 (size: 0x8)
    TArray<FGood> production;                                                         // 0x02E0 (size: 0x10)
    TArray<FTechRequirement> requiredTechs;                                           // 0x02F0 (size: 0x10)
    bool WIP;                                                                         // 0x0300 (size: 0x1)
    TArray<int32> areaBuildings;                                                      // 0x0308 (size: 0x10)
    class UMainUICPP_C* Main UI Ref;                                                  // 0x0318 (size: 0x8)
    TArray<int32> Required Buildings Constructed;                                     // 0x0320 (size: 0x10)
    int32 minSettlementLevel;                                                         // 0x0330 (size: 0x4)
    class AMyPawnCPP_BP3_C* playerRef;                                                // 0x0338 (size: 0x8)

    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    bool isAField();
    void setPlaceFieldModeDependingOnID();
    void anyAttributesVisible(bool& Visible);
    void updatePadlock();
    class UWidget* Get_buildingButton_ToolTipWidget_0();
    void updateBottomResourceGuides();
    void turnRoad(class APawnCPP* Pawn);
    void turnFieldMode(class APawnCPP* Pawn, const bool& Pasture, bool market, bool residential, EPlotType plotType);
    void getBuildingMeshForID(int32 ID, TSoftObjectPtr<UStaticMesh>& Out Row Construction Mesh Asset);
    void OnLoaded_AF6089E04B155172BD12DFAEAB0488EA(class UObject* Loaded);
    void PreConstruct(bool IsDesignTime);
    void updateContents();
    void Construct();
    void pressButton();
    void BndEvt__building_well_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_buildingCardWidget(int32 EntryPoint);
}; // Size: 0x340

#endif
