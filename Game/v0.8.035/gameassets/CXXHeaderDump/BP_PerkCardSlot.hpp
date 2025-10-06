#ifndef UE4SS_SDK_BP_PerkCardSlot_HPP
#define UE4SS_SDK_BP_PerkCardSlot_HPP

class UBP_PerkCardSlot_C : public URegionDevelopmentEntry
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F0 (size: 0x8)
    class UWidgetAnimation* unlock;                                                   // 0x02F8 (size: 0x8)
    class UWidgetAnimation* Open;                                                     // 0x0300 (size: 0x8)
    class UWidgetAnimation* hover;                                                    // 0x0308 (size: 0x8)
    class UCanvasPanel* CanvasPanel_60;                                               // 0x0310 (size: 0x8)
    class UImage* card_animation_light;                                               // 0x0318 (size: 0x8)
    class UImage* card_animation_ray;                                                 // 0x0320 (size: 0x8)
    class UImage* card_image;                                                         // 0x0328 (size: 0x8)
    class UImage* card_shadow;                                                        // 0x0330 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton;                                    // 0x0338 (size: 0x8)
    bool OnSelected_0;                                                                // 0x0340 (size: 0x1)
    FName currentPerkThisSlot;                                                        // 0x0344 (size: 0x8)
    int32 perkIndex;                                                                  // 0x034C (size: 0x4)
    FBP_PerkCardSlot_CSlotReleased SlotReleased;                                      // 0x0350 (size: 0x10)
    void SlotReleased(int32 SettlementLevel, int32 SlotIndex, FName SlotName);
    class UTexture2D* Texture_Locked;                                                 // 0x0360 (size: 0x8)
    class UTexture2D* Texture_Unlocked;                                               // 0x0368 (size: 0x8)
    FName perk_slot_name;                                                             // 0x0370 (size: 0x8)

    void CreatePerkEffectList(FText& CombinedText);
    void UpdatePerkSlotTooltip();
    void setCurrentPerk(FName perk);
    void BndEvt__BP_PerkCardSlot_SelectButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void PreConstruct(bool IsDesignTime);
    void UpdateLockedState(const int32 InCurrentRegionSettlementLevel);
    void ExecuteUbergraph_BP_PerkCardSlot(int32 EntryPoint);
    void SlotReleased__DelegateSignature(int32 SettlementLevel, int32 SlotIndex, FName SlotName);
}; // Size: 0x378

#endif
