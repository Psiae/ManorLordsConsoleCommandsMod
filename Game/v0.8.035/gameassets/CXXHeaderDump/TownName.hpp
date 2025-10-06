#ifndef UE4SS_SDK_TownName_HPP
#define UE4SS_SDK_TownName_HPP

class UTownName_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UBorder* Border_0;                                                          // 0x02D8 (size: 0x8)
    class UButton* diplo_button;                                                      // 0x02E0 (size: 0x8)
    class UlevelButton_C* levelButton;                                                // 0x02E8 (size: 0x8)
    class UImage* ownerEmblem;                                                        // 0x02F0 (size: 0x8)
    class UCanvasPanel* ribbon_Canvas;                                                // 0x02F8 (size: 0x8)
    class UEditableText* TownName_Editable;                                           // 0x0300 (size: 0x8)
    class UTextBlock* TownName_Fixed;                                                 // 0x0308 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x0310 (size: 0x8)
    TArray<class UButton*> buttons;                                                   // 0x0318 (size: 0x10)
    bool ownedByMainPlayer;                                                           // 0x0328 (size: 0x1)
    class ARegion* Region;                                                            // 0x0330 (size: 0x8)
    bool hasManor;                                                                    // 0x0338 (size: 0x1)
    bool selectedByPlayer;                                                            // 0x0339 (size: 0x1)
    bool hoveredByPlayer;                                                             // 0x033A (size: 0x1)

    void getLabelBuilding(class ARegion* Region, class ASMBuildingMaster*& building);
    void updatePositionAndVisibility();
    void turn uppercase();
    void BndEvt__diplo_button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void UpdateContents();
    void update diplo();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void textCahnged(const FText& Text);
    void ExecuteUbergraph_TownName(int32 EntryPoint);
}; // Size: 0x33B

#endif
