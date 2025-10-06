#ifndef UE4SS_SDK_regionOwnershipEntry_HPP
#define UE4SS_SDK_regionOwnershipEntry_HPP

class UregionOwnershipEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UBorder* borderContainer;                                                   // 0x02D8 (size: 0x8)
    class UImage* CircleBackground;                                                   // 0x02E0 (size: 0x8)
    class UImage* coatOfArms;                                                         // 0x02E8 (size: 0x8)
    class URetainerBox* CoatOfArmsRetainer;                                           // 0x02F0 (size: 0x8)
    class UOverlay* ParentContainer;                                                  // 0x02F8 (size: 0x8)
    FRegionData RegionData;                                                           // 0x0300 (size: 0x20)

    void OnDragDetected(FGeometry MyGeometry, const FPointerEvent& PointerEvent, class UDragDropOperation*& Operation);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void InitFromRegionData(FRegionData InRegionData);
    void OnDragCancelled(const FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
    void ExecuteUbergraph_regionOwnershipEntry(int32 EntryPoint);
}; // Size: 0x320

#endif
