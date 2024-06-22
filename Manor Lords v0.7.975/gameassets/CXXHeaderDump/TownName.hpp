#ifndef UE4SS_SDK_TownName_HPP
#define UE4SS_SDK_TownName_HPP

class UTownName_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UBorder* Border_0;                                                          // 0x0268 (size: 0x8)
    class UButton* diplo_button;                                                      // 0x0270 (size: 0x8)
    class UlevelButton_C* levelButton;                                                // 0x0278 (size: 0x8)
    class UImage* ownerEmblem;                                                        // 0x0280 (size: 0x8)
    class UCanvasPanel* ribbon_Canvas;                                                // 0x0288 (size: 0x8)
    class UEditableText* TownName_Editable;                                           // 0x0290 (size: 0x8)
    class UTextBlock* TownName_Fixed;                                                 // 0x0298 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x02A0 (size: 0x8)
    TArray<class UButton*> buttons;                                                   // 0x02A8 (size: 0x10)
    bool ownedByMainPlayer;                                                           // 0x02B8 (size: 0x1)
    class ARegion* Region;                                                            // 0x02C0 (size: 0x8)
    bool hasManor;                                                                    // 0x02C8 (size: 0x1)
    bool selectedByPlayer;                                                            // 0x02C9 (size: 0x1)
    bool hoveredByPlayer;                                                             // 0x02CA (size: 0x1)

    void getLabelBuilding(class ARegion* Region, class ASMBuildingMaster*& building);
    void updatePositionAndVisibility();
    void turn uppercase();
    void BndEvt__diplo_button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void updateContents();
    void update diplo();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void textCahnged(const FText& Text);
    void ExecuteUbergraph_TownName(int32 EntryPoint);
}; // Size: 0x2CB

#endif
