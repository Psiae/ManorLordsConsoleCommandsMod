#ifndef UE4SS_SDK_census_HPP
#define UE4SS_SDK_census_HPP

class Ucensus_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* lerpIn;                                                   // 0x0268 (size: 0x8)
    class UButton* close_button_1;                                                    // 0x0270 (size: 0x8)
    class UImage* construction_separator_4;                                           // 0x0278 (size: 0x8)
    class UMLDefaultSpinner_C* DefaultSpinner;                                        // 0x0280 (size: 0x8)
    class UImage* Image;                                                              // 0x0288 (size: 0x8)
    class UFamilyEntry_C* PersonEntry;                                                // 0x0290 (size: 0x8)
    class UVerticalBox* pops_VB;                                                      // 0x0298 (size: 0x8)
    class UTextBlock* TextBlock_61;                                                   // 0x02A0 (size: 0x8)
    bool unassignedOnly;                                                              // 0x02A8 (size: 0x1)
    bool Pinned;                                                                      // 0x02A9 (size: 0x1)
    bool Dragging;                                                                    // 0x02AA (size: 0x1)
    FVector2D Offset;                                                                 // 0x02AC (size: 0x8)
    FVector2D LastPosition;                                                           // 0x02B4 (size: 0x8)
    TArray<class UFamilyEntry_C*> obsoleteEntries;                                    // 0x02C0 (size: 0x10)
    FString Current Filter;                                                           // 0x02D0 (size: 0x10)

    bool familyStillExists(TArray<FWorkerFamily>& Array, FWorkerFamily& fam);
    bool familyEntryExists(FWorkerFamily family, class UFamilyEntry_C*& AsFamEntry);
    bool isArtisanFamily(class ASMUnit* Person);
    void updatePopDetails();
    void Translate();
    bool personEntryExists(class UObject* Person, class UFamilyEntry_C*& AsPerson Entry);
    void updatePosition();
    void filterPops();
    void updatePops(class ARegion* Region);
    void BndEvt__close_button_1_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__popList_DefaultSpinner_K2Node_ComponentBoundEvent_3_SpinnerSelectionChanged__DelegateSignature(FString Value);
    void Construct();
    void ExecuteUbergraph_census(int32 EntryPoint);
}; // Size: 0x2E0

#endif
