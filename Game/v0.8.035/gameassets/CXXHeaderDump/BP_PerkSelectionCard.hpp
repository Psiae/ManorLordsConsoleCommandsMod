#ifndef UE4SS_SDK_BP_PerkSelectionCard_HPP
#define UE4SS_SDK_BP_PerkSelectionCard_HPP

class UBP_PerkSelectionCard_C : public URegionDevelopmentPerkEntry
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F8 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton;                                    // 0x0300 (size: 0x8)
    class UImage* perkTexture;                                                        // 0x0308 (size: 0x8)
    class UButton* selectionButton;                                                   // 0x0310 (size: 0x8)
    class UImage* SelectionFrame_IMG;                                                 // 0x0318 (size: 0x8)
    class UBP_PerkSelectionPanel_C* owningPanel;                                      // 0x0320 (size: 0x8)
    class UDataTable* DT_Tech;                                                        // 0x0328 (size: 0x8)

    void BndEvt__BP_RegionDevelopmentPerkEntry_selectionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void InitialiseFromType(const FName InPerkName);
    void ExecuteUbergraph_BP_PerkSelectionCard(int32 EntryPoint);
}; // Size: 0x330

#endif
