#ifndef UE4SS_SDK_startVillageEntry_HPP
#define UE4SS_SDK_startVillageEntry_HPP

class UstartVillageEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UWidgetAnimation* show;                                                     // 0x02D8 (size: 0x8)
    class UBorder* borderContainer;                                                   // 0x02E0 (size: 0x8)
    class UImage* CircleBackground;                                                   // 0x02E8 (size: 0x8)
    class UImage* coatOfArms;                                                         // 0x02F0 (size: 0x8)
    class URetainerBox* CoatOfArmsRetainer;                                           // 0x02F8 (size: 0x8)
    class UImage* darkBackdrop;                                                       // 0x0300 (size: 0x8)
    class UOverlay* iconContainer;                                                    // 0x0308 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton;                                    // 0x0310 (size: 0x8)
    class UTextBlock* ownerID;                                                        // 0x0318 (size: 0x8)
    class UOverlay* ParentContainer;                                                  // 0x0320 (size: 0x8)
    class UImage* tradePointIcon;                                                     // 0x0328 (size: 0x8)
    FVillageSpawnerData villageSpawnData;                                             // 0x0330 (size: 0xD0)
    double showDelay;                                                                 // 0x0400 (size: 0x8)
    int32 Player;                                                                     // 0x0408 (size: 0x4)
    class UMaterialInterface* RevealMaterial;                                         // 0x0410 (size: 0x8)

    void DrawOwnerID(int32 Value);
    void GetRowNameFromPlayerIndex(FString& RowName);
    bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    void IsSpotEmpty(bool& IsEmtpy);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnDragDetected(FGeometry MyGeometry, const FPointerEvent& PointerEvent, class UDragDropOperation*& Operation);
    void Select(bool IsTradePoint);
    void Unselect(bool IsTradePoint, bool ModifyZOrder);
    void HandleSelectionChange();
    void InitFromSpawnerData(FVillageSpawnerData InData);
    void Construct();
    void onStartLocationChanged();
    void Destruct();
    void OnDragCancelled(const FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
    void ExecuteUbergraph_startVillageEntry(int32 EntryPoint);
}; // Size: 0x418

#endif
