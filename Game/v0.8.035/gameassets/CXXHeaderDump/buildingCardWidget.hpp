#ifndef UE4SS_SDK_buildingCardWidget_HPP
#define UE4SS_SDK_buildingCardWidget_HPP

class UbuildingCardWidget_C : public UNaviUi
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UImage* AreaIconImg;                                                        // 0x0348 (size: 0x8)
    class UBorder* attributeIcons;                                                    // 0x0350 (size: 0x8)
    class UBorder* Border_0;                                                          // 0x0358 (size: 0x8)
    class UButton* buildingButton;                                                    // 0x0360 (size: 0x8)
    class UImage* buildingImage;                                                      // 0x0368 (size: 0x8)
    class UMD_NaviAutoFocusHighlight_C* MD_NaviAutoFocusHighlight;                    // 0x0370 (size: 0x8)
    class UOverlay* Overlay_0;                                                        // 0x0378 (size: 0x8)
    class UImage* padlock;                                                            // 0x0380 (size: 0x8)
    class UHorizontalBox* resIcons;                                                   // 0x0388 (size: 0x8)
    class USizeBox* resourceIcons_SizeBox;                                            // 0x0390 (size: 0x8)
    class UVerticalBox* VerticalBox_2;                                                // 0x0398 (size: 0x8)
    int32 ID;                                                                         // 0x03A0 (size: 0x4)
    bool show;                                                                        // 0x03A4 (size: 0x1)
    class UTexture2D* buildingCardTexture;                                            // 0x03A8 (size: 0x8)
    FName Name;                                                                       // 0x03B0 (size: 0x8)
    TArray<FGood> production;                                                         // 0x03B8 (size: 0x10)
    TArray<FName> requiredTechs;                                                      // 0x03C8 (size: 0x10)
    bool wip;                                                                         // 0x03D8 (size: 0x1)
    TArray<int32> areaBuildings;                                                      // 0x03E0 (size: 0x10)
    class UMainUICPP_C* Main UI Ref;                                                  // 0x03F0 (size: 0x8)
    TArray<int32> Required Buildings Constructed;                                     // 0x03F8 (size: 0x10)
    int32 minSettlementLevel;                                                         // 0x0408 (size: 0x4)
    class AMyPawnCPP_BP3_C* playerRef;                                                // 0x0410 (size: 0x8)
    bool selfManageConsoleHighlight;                                                  // 0x0418 (size: 0x1)
    EBuildingCategory Building Category;                                              // 0x0419 (size: 0x1)

    void InitTooltip();
    void IsFocusedCard(bool& IsFocused);
    ENaviHandleMethod HandleInput(ENaviUiIntent Key);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    bool isAField();
    void setPlaceFieldModeDependingOnID();
    void anyAttributesVisible(bool& Visible);
    void updatePadlock();
    class UWidget* Get_buildingButton_ToolTipWidget_0();
    void updateBottomResourceGuides();
    void turnRoad(class APawnCPP* Pawn);
    void turnFieldMode(class APawnCPP* Pawn, const bool& Pasture, bool Market, bool Residential, EPlotType plotType);
    void getBuildingMeshForID(int32 ID, TSoftObjectPtr<UStaticMesh>& Out Row Construction Mesh Asset);
    void OnLoaded_AF6089E04B155172BD12DFAEAB0488EA(class UObject* Loaded);
    void OnFocusChanged(bool nowHasFocus);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void UpdateContents();
    void pressButton();
    void BndEvt__building_well_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_buildingCardWidget(int32 EntryPoint);
}; // Size: 0x41A

#endif
